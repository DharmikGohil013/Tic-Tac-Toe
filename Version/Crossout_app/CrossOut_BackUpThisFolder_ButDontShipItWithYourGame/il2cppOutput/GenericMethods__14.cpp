#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct ConstrainedActionInvoker2
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[1]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902;
struct Dictionary_2_t61D9E1A79722A10277502E526E398BA456EFD5CE;
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455;
struct Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05;
struct Dictionary_2_t36FA7EC1E5B0BD4419B32EB5EBD5DFA984D70CEA;
struct Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041;
struct Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68;
struct Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337;
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
struct IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E;
struct KeyCollection_tA77FD1F3C4B579CC5CA9D12CD06FA2F0191A019D;
struct KeyCollection_t93BA33CAAB790A133B7B7EEC9B64BDFC458582F2;
struct KeyCollection_t241D824CC3960CF32263F0451F55AE376CAE533A;
struct List_1_t498347DEA55185643F213F995B74FEE039FAD70F;
struct List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5;
struct List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B;
struct List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
struct UnsafeList_1_t3320408FA0A297D3C409FA7ADF6C1788C8AFBDA3;
struct UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391;
struct ValueCollection_t20A674BBDAA1BDD52D1C302860E5F9DF7390F430;
struct ValueCollection_t33B4D2D5E7ED2150F6E4AEABF9B5EA9F5DB3C8C1;
struct ValueCollection_t6F8DC66213393965F9E7A6CDC7289FA9714A511B;
struct EntryU5BU5D_t03249998F750A38A50294764FE8B3C034F75ABCD;
struct EntryU5BU5D_t7DA5B3205EE1A19C131521D91ABEC2F23610DFC9;
struct EntryU5BU5D_t76665C21070EE609476C97C0E78E5D2EC2E2E8C3;
struct SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct INetworkHooksU5BU5D_t1BC65088C0304723E89381277637D587173A30DF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct NetworkBehaviourU5BU5D_t7CB21B89F13B275F3E6DCF39E6AD13990AFF079C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct MessageHandlerU5BU5D_t37F554C81ABFEC39C9C736771CA2A327BA2A6330;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct INetworkHooks_t0661E1D4E1A1C18135CA440AC01EDAA733B83533;
struct INetworkMessageSender_t0E6CABACEA7C05580183A510AEC178C2C640D48A;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE;
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
struct NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468;
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
struct SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57;
struct VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4;
IL2CPP_EXTERN_C String_t* _stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278;
IL2CPP_EXTERN_C String_t* _stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t03249998F750A38A50294764FE8B3C034F75ABCD* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA77FD1F3C4B579CC5CA9D12CD06FA2F0191A019D* ____keys;
	ValueCollection_t20A674BBDAA1BDD52D1C302860E5F9DF7390F430* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7DA5B3205EE1A19C131521D91ABEC2F23610DFC9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t93BA33CAAB790A133B7B7EEC9B64BDFC458582F2* ____keys;
	ValueCollection_t33B4D2D5E7ED2150F6E4AEABF9B5EA9F5DB3C8C1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t76665C21070EE609476C97C0E78E5D2EC2E2E8C3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t241D824CC3960CF32263F0451F55AE376CAE533A* ____keys;
	ValueCollection_t6F8DC66213393965F9E7A6CDC7289FA9714A511B* ____values;
	RuntimeObject* ____syncRoot;
};
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810  : public RuntimeObject
{
	INetworkHooksU5BU5D_t1BC65088C0304723E89381277637D587173A30DF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5  : public RuntimeObject
{
	NetworkBehaviourU5BU5D_t7CB21B89F13B275F3E6DCF39E6AD13990AFF079C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
typedef Il2CppFullySharedGenericStruct BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10;
struct Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25 
{
	List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* ____list;
	int32_t ____index;
	int32_t ____version;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct HashCode64_1_t8EC2C5A5844023C61296851DEBB388E02D1FEEB2 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_tEBB3FF37447FD3D0F5902EF8837D1DCA12D63363 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t1C024639A4314C4E09D2F4103DA050C254C67DA0 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t766E580F051490D9C714F172B1C2E2B79871D1E8 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 
{
	bool ___hasValue;
	uint64_t ___value;
};
struct PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 
{
	uint64_t* ___m_Value;
	int32_t ___m_Length;
};
struct BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6 
{
	int32_t ___receiveQueueCapacity;
	int32_t ___sendQueueCapacity;
	uint32_t ___maximumPayloadSize;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103 
{
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
};
struct ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E 
{
	uint64_t ___ClientId;
};
struct ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5 
{
	uint64_t ___ClientId;
};
struct DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050 
{
	uint64_t ___NetworkObjectId;
	bool ___DestroyGameObject;
};
struct DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	int32_t ___DestroyGameObject;
};
struct DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_marshaled_com
{
	uint64_t ___NetworkObjectId;
	int32_t ___DestroyGameObject;
};
struct DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4 
{
	String_t* ___Reason;
};
struct DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_marshaled_pinvoke
{
	char* ___Reason;
};
struct DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_marshaled_com
{
	Il2CppChar* ___Reason;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA 
{
	uint16_t ___Magic;
	uint16_t ___BatchCount;
	int32_t ___BatchSize;
	uint64_t ___BatchHash;
};
struct NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D 
{
	int32_t ___connectTimeoutMS;
	int32_t ___maxConnectAttempts;
	int32_t ___disconnectTimeoutMS;
	int32_t ___heartbeatTimeoutMS;
	int32_t ___maxFrameTimeMS;
	int32_t ___fixedFrameTimeMS;
	int32_t ___maxMessageSize;
};
struct NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA 
{
	int32_t ___size;
};
struct NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 
{
	uint32_t ___MessageType;
	uint32_t ___MessageSize;
};
struct NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD 
{
	uint64_t ___m_NetworkObjectId;
};
struct NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31 
{
	int32_t ___initialCapacity;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB 
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourId;
	uint32_t ___NetworkRpcMethodId;
};
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	int32_t ___m_Handle;
};
struct TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471 
{
	int32_t ___Tick;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 
{
	union
	{
		struct
		{
		};
		uint8_t ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292__padding[1];
	};
};
struct ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 
{
	int32_t ___Offset;
	int32_t ___Size;
};
struct NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___m_ListData;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator;
};
struct NativeList_1_t244AB70F86E3DE6A3C8F7DE0CE70E58B90A72AAB 
{
	UnsafeList_1_t3320408FA0A297D3C409FA7ADF6C1788C8AFBDA3* ___m_ListData;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator;
};
struct NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB 
{
	UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391* ___m_ListData;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator;
};
struct UnsafeHashMap_2_t72FFC7053BC0746D0E63ACAF126DAC714393450E 
{
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B 
{
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091 
{
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_Reader;
};
struct BufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4 
{
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_Writer;
};
struct ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793 
{
	RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB ___Metadata;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___WriteBuffer;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___ReadBuffer;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93 
{
	uint64_t ___Hash;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___SendData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceiveData;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NetworkDelivery_t8AEDF5FAB32A531130149F7D6D89023D3164D6AD 
{
	int32_t ___value__;
};
struct NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A 
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourIndex;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___DeliveryMappedNetworkVariableIndex;
	uint64_t ___TargetClientId;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___NetworkBehaviour;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourIndex;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___DeliveryMappedNetworkVariableIndex;
	uint64_t ___TargetClientId;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___NetworkBehaviour;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_marshaled_com
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourIndex;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___DeliveryMappedNetworkVariableIndex;
	uint64_t ___TargetClientId;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___NetworkBehaviour;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD 
{
	uint64_t ___NetworkObjectId;
	uint8_t ___m_BitField;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	uint8_t ___m_BitField;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_marshaled_com
{
	uint64_t ___NetworkObjectId;
	uint8_t ___m_BitField;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 
{
	RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB ___Metadata;
	uint64_t ___SenderClientId;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___WriteBuffer;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___ReadBuffer;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601 
{
	SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028* ___EventData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_marshaled_pinvoke
{
	SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028* ___EventData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_marshaled_com
{
	SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028* ___EventData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB 
{
	RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB ___Metadata;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___WriteBuffer;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___ReadBuffer;
};
struct UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977 
{
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___SendData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct __RpcExecStage_t5742FF9F2E363A53ECA9C00231E9BE396A6A6F39 
{
	int32_t ___value__;
};
struct LogType_tFE50293A062A1F7799608EC19897695BC9EFA0B7 
{
	uint8_t ___value__;
};
struct TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B 
{
	BufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091 ___m_Implementation;
};
struct BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 
{
	BufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4 ___m_Implementation;
};
struct NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeHashMap_2_tD3DAC214058815E6C793086DBC561B1466B4E799 
{
	UnsafeHashMap_2_t72FFC7053BC0746D0E63ACAF126DAC714393450E ___m_HashMapData;
};
struct NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC 
{
	UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B ___m_HashMapData;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468  : public RuntimeObject
{
	bool ___StopProcessing;
	NativeList_1_t244AB70F86E3DE6A3C8F7DE0CE70E58B90A72AAB ___m_IncomingMessageQueue;
	MessageHandlerU5BU5D_t37F554C81ABFEC39C9C736771CA2A327BA2A6330* ___m_MessageHandlers;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_ReverseTypeMap;
	Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* ___m_MessageTypes;
	Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* ___m_SendQueues;
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___m_DisconnectedClients;
	Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041* ___m_PerClientMessageVersions;
	Dictionary_2_t36FA7EC1E5B0BD4419B32EB5EBD5DFA984D70CEA* ___m_MessagesByHash;
	Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* ___m_LocalVersions;
	List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* ___m_Hooks;
	uint32_t ___m_HighMessageType;
	RuntimeObject* ___m_Owner;
	RuntimeObject* ___m_Sender;
	bool ___m_Disposed;
	uint64_t ___m_LocalClientId;
	int32_t ___NonFragmentedMessageMaxSize;
	int32_t ___FragmentedMessageMaxSize;
	Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* ___PeerMTUSizes;
};
struct ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D 
{
	uint8_t ___LogType;
	String_t* ___Message;
};
struct ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_marshaled_pinvoke
{
	uint8_t ___LogType;
	char* ___Message;
};
struct ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_marshaled_com
{
	uint8_t ___LogType;
	Il2CppChar* ___Message;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8 
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Allocator;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	bool ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 
{
	NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA ___BatchHeader;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___Writer;
	int32_t ___NetworkDelivery;
};
struct SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5 
{
	uint8_t ___m_BitField;
	uint32_t ___Hash;
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint64_t ___ParentObjectId;
	TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C ___Transform;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___OwnerObject;
	uint64_t ___TargetClientId;
	int32_t ___NetworkSceneHandle;
};
struct SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_pinvoke
{
	uint8_t ___m_BitField;
	uint32_t ___Hash;
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint64_t ___ParentObjectId;
	TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C ___Transform;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___OwnerObject;
	uint64_t ___TargetClientId;
	int32_t ___NetworkSceneHandle;
};
struct SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_com
{
	uint8_t ___m_BitField;
	uint32_t ___Hash;
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint64_t ___ParentObjectId;
	TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C ___Transform;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___OwnerObject;
	uint64_t ___TargetClientId;
	int32_t ___NetworkSceneHandle;
};
struct NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 
{
	NativeHashMap_2_tD3DAC214058815E6C793086DBC561B1466B4E799 ___m_Data;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58 
{
	uint64_t ___OwnerClientId;
	int32_t ___NetworkTick;
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedSceneObjectData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___ConnectedClientIds;
};
struct ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_marshaled_pinvoke
{
	uint64_t ___OwnerClientId;
	int32_t ___NetworkTick;
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedSceneObjectData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___ConnectedClientIds;
};
struct ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_marshaled_com
{
	uint64_t ___OwnerClientId;
	int32_t ___NetworkTick;
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedSceneObjectData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___ConnectedClientIds;
};
struct ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876 
{
	uint64_t ___ConfigHash;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ConnectionData;
	bool ___ShouldSendConnectionData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
};
struct ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_marshaled_pinvoke
{
	uint64_t ___ConfigHash;
	Il2CppSafeArray* ___ConnectionData;
	int32_t ___ShouldSendConnectionData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
};
struct ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_marshaled_com
{
	uint64_t ___ConfigHash;
	Il2CppSafeArray* ___ConnectionData;
	int32_t ___ShouldSendConnectionData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
};
struct CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792 
{
	SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5 ___ObjectInfo;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_marshaled_pinvoke
{
	SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_pinvoke ___ObjectInfo;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_marshaled_com
{
	SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_com ___ObjectInfo;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
};
struct NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 
{
	NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC ___m_ParameterOffsets;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_Parameters;
	uint8_t ___m_Initialized;
};
struct ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___TargetClientIds;
	int32_t ___Delivery;
	RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 ___WrappedMessage;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t _____rpc_exec_stage;
	bool ___U3CIsLocalPlayerU3Ek__BackingField;
	bool ___U3CIsOwnerU3Ek__BackingField;
	bool ___U3CIsServerU3Ek__BackingField;
	bool ___U3CServerIsHostU3Ek__BackingField;
	bool ___U3CIsClientU3Ek__BackingField;
	bool ___U3CIsHostU3Ek__BackingField;
	bool ___U3CIsOwnedByServerU3Ek__BackingField;
	bool ___U3CIsSpawnedU3Ek__BackingField;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___m_NetworkObject;
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField;
	uint16_t ___U3CNetworkBehaviourIdU3Ek__BackingField;
	uint16_t ___NetworkBehaviourIdCache;
	uint64_t ___U3COwnerClientIdU3Ek__BackingField;
	bool ___m_VarInit;
	List_1_t498347DEA55185643F213F995B74FEE039FAD70F* ___m_DeliveryMappedNetworkVariableIndices;
	List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B* ___m_DeliveryTypesForNetworkVariableGroups;
	List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3* ___NetworkVariableFields;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___NetworkVariableIndexesToReset;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___NetworkVariableIndexesToResetSet;
	uint64_t ___U3Cm_TargetIdBeingSynchronizedU3Ek__BackingField;
};
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	uint32_t ___GlobalObjectIdHash;
	uint32_t ___PrefabGlobalObjectIdHash;
	uint32_t ___InScenePlacedSourceGlobalObjectIdHash;
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManagerOwner;
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField;
	uint64_t ___U3COwnerClientIdU3Ek__BackingField;
	bool ___AlwaysReplicateAsRoot;
	bool ___U3CIsPlayerObjectU3Ek__BackingField;
	bool ___SynchronizeTransform;
	bool ___U3CIsSpawnedU3Ek__BackingField;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsSceneObjectU3Ek__BackingField;
	bool ___U3CDestroyWithSceneU3Ek__BackingField;
	bool ___ActiveSceneSynchronization;
	bool ___SceneMigrationSynchronization;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnMigratedToNewScene;
	bool ___SpawnWithObservers;
	VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A* ___CheckObjectVisibility;
	SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57* ___IncludeTransformWhenSpawning;
	bool ___DontDestroyWithOwner;
	bool ___AutoObjectParentSync;
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___Observers;
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___m_EmptyULongHashSet;
	int32_t ___SceneOriginHandle;
	int32_t ___NetworkSceneHandle;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_SceneOrigin;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___m_LatestParent;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedParent;
	bool ___m_CachedWorldPositionStays;
	List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* ___m_ChildNetworkBehaviours;
};
struct List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810_StaticFields
{
	INetworkHooksU5BU5D_t1BC65088C0304723E89381277637D587173A30DF* ___s_emptyArray;
};
struct List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5_StaticFields
{
	NetworkBehaviourU5BU5D_t7CB21B89F13B275F3E6DCF39E6AD13990AFF079C* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct HashCode64_1_t8EC2C5A5844023C61296851DEBB388E02D1FEEB2_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tEBB3FF37447FD3D0F5902EF8837D1DCA12D63363_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t1C024639A4314C4E09D2F4103DA050C254C67DA0_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t766E580F051490D9C714F172B1C2E2B79871D1E8_StaticFields
{
	int64_t ___Value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_StaticFields
{
	Dictionary_2_t61D9E1A79722A10277502E526E398BA456EFD5CE* _____rpc_func_table;
};
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_StaticFields
{
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___OrphanChildren;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_gshared (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Dictionary_2_get_Item_mB12C3F9B6097F5E961B1B981546D7DDA39AB681A_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_gshared (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, uint64_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_gshared (Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* __this, uint64_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_gshared (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_gshared (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_gshared (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC BufferSerializer_1_GetFastBufferWriter_m9C29FD83F1F84F7DB243974892CB6612AE9ACCE9_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_Synchronize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m259F5CB1F7FAA3D86565D34B8590F697CB87BD5E_gshared (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* ___0_serializer, uint64_t ___1_targetClientId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 BufferSerializer_1_GetFastBufferReader_mF14C151E60E6525341AD31B18744F2DCC23DE063_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8A2683B9D05761E486980E93C1BBE7F991885092_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC BufferSerializer_1_GetFastBufferWriter_m0EDCCFEDDC0A291D14ACA9BB1DA18CD0ABAD9C60_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_Synchronize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m55ACD2FDF7A3538B5BF255AF7BD53E52BADFA94D_gshared (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* ___0_serializer, uint64_t ___1_targetClientId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 BufferSerializer_1_GetFastBufferReader_mBE4915BC31492038A896F4FE19E6A1D815815171_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA2C0287E2BCF650393B4842273416B670CCA86EB_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m581640EA329BEF97F9F2E7081686F33AFAF14FD4_gshared (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, uint64_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectReference_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m81D26B69DEA68138463872663981C211C042E8F6_gshared (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializer_1_SerializeValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m32FE75597B21A19B3F4FE46CD65A34DAF02E2711_gshared (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, uint64_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectReference_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mDD5176471BCEFC10C07AFFF9C28F27A6FA51F679_gshared (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectReference_NetworkSerialize_TisIl2CppFullySharedGenericAny_mDB2E7E50680CCC1C03FCCBBA6C141576F43D18B5_gshared (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_ValidateParameterOrError_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mBF63710C3A5B0D39DBDAE6461EAAF297300992ED_gshared (BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* ___0_parameter, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_m01C0FEF4E9E8DFE1702DE42DF6AB776088F9CF99_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFA803AA8310C0B427AA9ED30BD592E265987E169_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_gshared (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* __this, int64_t ___0_key, ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_gshared (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* __this, int64_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_gshared (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_AddRawParameterStruct_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFD71BDCC448E4531E4222B0F20D0409B236875B9_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* ___0_parameter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_ValidateParameterOrError_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_mA762B685AA78570BCA58944D0DB36397987B7EDA_gshared (NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* ___0_parameter, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_mB170B58FFCDE7EBE34C557AA7B94B2511CBC413A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m73D1DA9B707B68316FCF7C3184B1F0FCEB1254B0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_AddRawParameterStruct_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m0CEF4F297BC0F71F7C88756F9FC330CE4558AEEC_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* ___0_parameter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_ValidateParameterOrError_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_mD635E6C242DAED8FAC3293B32075DADD99DAB5EB_gshared (NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* ___0_parameter, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_mE8152CE9DC36CE545AD2A5BF86B58C1D5E6E0C57_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m3F1B39AC2C589B1DCAE692902C5E2E2427A3DF30_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_AddRawParameterStruct_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m962C25404897C897749AFF0EEA0E7A92FE1248DD_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* ___0_parameter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_ValidateParameterOrError_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_m3C66EB6981BC85D0ABE9E264FB9EEC9B8D7F0CA2_gshared (NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* ___0_parameter, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mF35F6324F342886140712C3D1764962616AF0BA2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mDE323919C8E33E999250367BA7604854B60A51F8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_AddRawParameterStruct_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mEC83C96E0D4814056924E2E6716D4F5E7D5A86F1_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* ___0_parameter, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m777CCD0EE76272FA2A4C1E966D8FDEFD37EA3663_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint16_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5433926E9482CEC16DA80CCA069B9A16E8678CE6_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD1B0BB55C80D5F6F8946291EBECE58CBA5D4BF82_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint16_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0C68F94E01E308ACF5E3CA02F646A467D9BCA68_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, const RuntimeMethod* method) ;

inline int32_t PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline void NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_gshared)(__this, ___0_capacity, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline uint64_t PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, int32_t, const RuntimeMethod*))PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Type_t* ___0_type, uint64_t ___1_clientId, bool ___2_forReceive, const RuntimeMethod* method) ;
inline bool NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147 (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, int32_t, const RuntimeMethod*))NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_gshared)(__this, ___0_item, method);
}
inline bool NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992 (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, int32_t, const RuntimeMethod*))NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_gshared)(__this, ___0_item, method);
}
inline int32_t FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_size, int32_t ___1_allocator, int32_t ___2_maxSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionApprovedMessage_Serialize_m0584DD0592C46377C30D4A2E7A215EF46CCCE199 (ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
inline void NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, const RuntimeMethod*))NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequestMessage_Serialize_m260EDF4EC1282BEAD31E3B69E9FF5E71A8B05D79 (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateObjectMessage_Serialize_m99F544FD830C222FAB32B7D33294D4CEC617937B (CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyObjectMessage_Serialize_mF84D1148FEAE08B1526C44C609CE144B1BD00953 (DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectReasonMessage_Serialize_m95202A704191A925F261E86742A21A011FDCB2D8 (DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedMessage_Serialize_m8EA064FAFCFAA6631245BF8C8BAA8B42D93A9040 (NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableDeltaMessage_Serialize_m9B8B70E9B70531DDBAC13DFAC648D5371E2DB8EF (NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentSyncMessage_Serialize_m9AE44A0039CBE4A5F8182C91DBEF9E99CBDC7455 (ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyMessage_Serialize_m705983F8CC4D0E4C83A3E5AC973A3AECF6CC67BF (ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcMessage_Serialize_m364D337A54D4BAB922557F16EC9B7F0E51F9FCD1 (RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventMessage_Serialize_m9BBAF1877F9962FBCC5714A6DD0921044D98AEC5 (SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerLogMessage_Serialize_m75D84FCE387D3673972DEFF9C60DAC20569E951C (ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerRpcMessage_Serialize_m78B363B31FF63D5514A415E89C221F018CE90EBB (ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSyncMessage_Serialize_mC4D522537604EDFB129EFFBE531DA4DCDB9AE280 (TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessage_Serialize_mAA47A32113A839FAC4F5197B2AB75CB587418192 (UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
inline void PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8 (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, uint64_t*, int32_t, const RuntimeMethod*))PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_gshared)(__this, ___0_ptr, ___1_length, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
inline uint32_t Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2 (Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB12C3F9B6097F5E961B1B981546D7DDA39AB681A_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t ___1_value, const RuntimeMethod* method) ;
inline bool HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, uint64_t, const RuntimeMethod*))HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, uint64_t ___0_clientId, Type_t* ___1_messageType, int32_t ___2_delivery, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51 (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, uint64_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A*, uint64_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9 (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline int32_t List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B (Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* __this, uint64_t ___0_key, const RuntimeMethod* method)
{
	return ((  NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB (*) (Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68*, uint64_t, const RuntimeMethod*))Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_gshared)(__this, ___0_key, method);
}
inline int32_t NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3 (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB*, const RuntimeMethod*))NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56 (SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* __this, int32_t ___0_delivery, int32_t ___1_writerSize, int32_t ___2_writerAllocator, int32_t ___3_maxWriterSize, const RuntimeMethod* method) ;
inline void NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB*, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7*, const RuntimeMethod*))NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_gshared)(__this, ___0_value, method);
}
inline SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344 (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* (*) (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB*, int32_t, const RuntimeMethod*))NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_where, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) ;
inline bool BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, const RuntimeMethod*))BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28_gshared)(__this, method);
}
inline FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC BufferSerializer_1_GetFastBufferWriter_m9C29FD83F1F84F7DB243974892CB6612AE9ACCE9 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method)
{
	return ((  FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, const RuntimeMethod*))BufferSerializer_1_GetFastBufferWriter_m9C29FD83F1F84F7DB243974892CB6612AE9ACCE9_gshared)(__this, method);
}
inline void FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, uint16_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_gshared_inline)(__this, ___0_value, ___1_unused, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_WriteNetworkVariableData_m97875431CFAF7F0C9E107B5545625BFD112961A3 (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint64_t ___1_targetClientId, const RuntimeMethod* method) ;
inline void FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, uint8_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_gshared_inline)(__this, ___0_value, ___1_unused, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* NetworkObject_get_ChildNetworkBehaviours_m77246A2E16BAEE728A066E3020690BB3FB4EE09F (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, const RuntimeMethod* method) ;
inline Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25 List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E (List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25 (*) (List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514 (Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_inline (Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25* __this, const RuntimeMethod* method)
{
	return ((  NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* (*) (Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool NetworkBehaviour_Synchronize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m259F5CB1F7FAA3D86565D34B8590F697CB87BD5E (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* ___0_serializer, uint64_t ___1_targetClientId, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, uint64_t, const RuntimeMethod*))NetworkBehaviour_Synchronize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m259F5CB1F7FAA3D86565D34B8590F697CB87BD5E_gshared)(__this, ___0_serializer, ___1_targetClientId, method);
}
inline bool Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9 (Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 BufferSerializer_1_GetFastBufferReader_mF14C151E60E6525341AD31B18744F2DCC23DE063 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, const RuntimeMethod* method)
{
	return ((  FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, const RuntimeMethod*))BufferSerializer_1_GetFastBufferReader_mF14C151E60E6525341AD31B18744F2DCC23DE063_gshared)(__this, method);
}
inline void FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, uint16_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_gshared_inline)(__this, ___0_value, ___1_unused, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_SetNetworkVariableData_mA979B3BAA59540CC26379A65C887B904475F808C (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___0_reader, uint64_t ___1_clientId, const RuntimeMethod* method) ;
inline void FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, uint8_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_gshared_inline)(__this, ___0_value, ___1_unused, method);
}
inline void BufferSerializer_1_SerializeValue_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8A2683B9D05761E486980E93C1BBE7F991885092 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, uint16_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8A2683B9D05761E486980E93C1BBE7F991885092_gshared)(__this, ___0_value, ___1_unused, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* NetworkObject_GetNetworkBehaviourAtOrderIndex_m1DCB1BE63EFFBA7434B1E829832FAD97799F859C (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, uint16_t ___0_index, const RuntimeMethod* method) ;
inline bool BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, const RuntimeMethod*))BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB_gshared)(__this, method);
}
inline FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC BufferSerializer_1_GetFastBufferWriter_m0EDCCFEDDC0A291D14ACA9BB1DA18CD0ABAD9C60 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method)
{
	return ((  FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, const RuntimeMethod*))BufferSerializer_1_GetFastBufferWriter_m0EDCCFEDDC0A291D14ACA9BB1DA18CD0ABAD9C60_gshared)(__this, method);
}
inline bool NetworkBehaviour_Synchronize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m55ACD2FDF7A3538B5BF255AF7BD53E52BADFA94D (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* ___0_serializer, uint64_t ___1_targetClientId, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, uint64_t, const RuntimeMethod*))NetworkBehaviour_Synchronize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m55ACD2FDF7A3538B5BF255AF7BD53E52BADFA94D_gshared)(__this, ___0_serializer, ___1_targetClientId, method);
}
inline FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 BufferSerializer_1_GetFastBufferReader_mBE4915BC31492038A896F4FE19E6A1D815815171 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, const RuntimeMethod* method)
{
	return ((  FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, const RuntimeMethod*))BufferSerializer_1_GetFastBufferReader_mBE4915BC31492038A896F4FE19E6A1D815815171_gshared)(__this, method);
}
inline void BufferSerializer_1_SerializeValue_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA2C0287E2BCF650393B4842273416B670CCA86EB (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, uint16_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA2C0287E2BCF650393B4842273416B670CCA86EB_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void BufferSerializer_1_SerializeValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m581640EA329BEF97F9F2E7081686F33AFAF14FD4 (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* __this, uint64_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B*, uint64_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m581640EA329BEF97F9F2E7081686F33AFAF14FD4_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void NetworkObjectReference_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m81D26B69DEA68138463872663981C211C042E8F6 (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B, const RuntimeMethod*))NetworkObjectReference_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m81D26B69DEA68138463872663981C211C042E8F6_gshared)(__this, ___0_serializer, method);
}
inline void BufferSerializer_1_SerializeValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m32FE75597B21A19B3F4FE46CD65A34DAF02E2711 (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* __this, uint64_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0*, uint64_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))BufferSerializer_1_SerializeValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m32FE75597B21A19B3F4FE46CD65A34DAF02E2711_gshared)(__this, ___0_value, ___1_unused, method);
}
inline void NetworkObjectReference_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mDD5176471BCEFC10C07AFFF9C28F27A6FA51F679 (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0, const RuntimeMethod*))NetworkObjectReference_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mDD5176471BCEFC10C07AFFF9C28F27A6FA51F679_gshared)(__this, ___0_serializer, method);
}
inline void NetworkObjectReference_NetworkSerialize_TisIl2CppFullySharedGenericAny_mDB2E7E50680CCC1C03FCCBBA6C141576F43D18B5 (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10, const RuntimeMethod*))NetworkObjectReference_NetworkSerialize_TisIl2CppFullySharedGenericAny_mDB2E7E50680CCC1C03FCCBBA6C141576F43D18B5_gshared)((NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*)__this, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSettings_EnsureInitializedOrError_mB914F925D4A389C339FFFAEA48EA6EBDE7255029 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, const RuntimeMethod* method) ;
inline void NetworkSettings_ValidateParameterOrError_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mBF63710C3A5B0D39DBDAE6461EAAF297300992ED (BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* ___0_parameter, const RuntimeMethod* method)
{
	((  void (*) (BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6*, const RuntimeMethod*))NetworkSettings_ValidateParameterOrError_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mBF63710C3A5B0D39DBDAE6461EAAF297300992ED_gshared)(___0_parameter, method);
}
inline int64_t BurstRuntime_GetHashCode64_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_m01C0FEF4E9E8DFE1702DE42DF6AB776088F9CF99_inline (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))BurstRuntime_GetHashCode64_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_m01C0FEF4E9E8DFE1702DE42DF6AB776088F9CF99_gshared_inline)(method);
}
inline int32_t NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*, const RuntimeMethod*))NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_gshared)(__this, method);
}
inline int32_t UnsafeUtility_SizeOf_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFA803AA8310C0B427AA9ED30BD592E265987E169_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFA803AA8310C0B427AA9ED30BD592E265987E169_gshared_inline)(method);
}
inline bool NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230 (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* __this, int64_t ___0_key, ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*, int64_t, ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899, const RuntimeMethod*))NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_gshared)(__this, ___0_key, ___1_item, method);
}
inline void NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*, int32_t, int32_t, const RuntimeMethod*))NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_gshared)(__this, ___0_length, ___1_options, method);
}
inline ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1 (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* __this, int64_t ___0_key, const RuntimeMethod* method)
{
	return ((  ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 (*) (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*, int64_t, const RuntimeMethod*))NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_gshared)(__this, ___0_key, method);
}
inline void* NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___0_list, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94, const RuntimeMethod*))NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_gshared)(___0_list, method);
}
inline void NetworkSettings_AddRawParameterStruct_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFD71BDCC448E4531E4222B0F20D0409B236875B9 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* ___0_parameter, const RuntimeMethod* method)
{
	((  void (*) (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*, BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6*, const RuntimeMethod*))NetworkSettings_AddRawParameterStruct_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFD71BDCC448E4531E4222B0F20D0409B236875B9_gshared)(__this, ___0_parameter, method);
}
inline void NetworkSettings_ValidateParameterOrError_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_mA762B685AA78570BCA58944D0DB36397987B7EDA (NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* ___0_parameter, const RuntimeMethod* method)
{
	((  void (*) (NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D*, const RuntimeMethod*))NetworkSettings_ValidateParameterOrError_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_mA762B685AA78570BCA58944D0DB36397987B7EDA_gshared)(___0_parameter, method);
}
inline int64_t BurstRuntime_GetHashCode64_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_mB170B58FFCDE7EBE34C557AA7B94B2511CBC413A_inline (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))BurstRuntime_GetHashCode64_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_mB170B58FFCDE7EBE34C557AA7B94B2511CBC413A_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m73D1DA9B707B68316FCF7C3184B1F0FCEB1254B0_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m73D1DA9B707B68316FCF7C3184B1F0FCEB1254B0_gshared_inline)(method);
}
inline void NetworkSettings_AddRawParameterStruct_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m0CEF4F297BC0F71F7C88756F9FC330CE4558AEEC (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* ___0_parameter, const RuntimeMethod* method)
{
	((  void (*) (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*, NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D*, const RuntimeMethod*))NetworkSettings_AddRawParameterStruct_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m0CEF4F297BC0F71F7C88756F9FC330CE4558AEEC_gshared)(__this, ___0_parameter, method);
}
inline void NetworkSettings_ValidateParameterOrError_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_mD635E6C242DAED8FAC3293B32075DADD99DAB5EB (NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* ___0_parameter, const RuntimeMethod* method)
{
	((  void (*) (NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA*, const RuntimeMethod*))NetworkSettings_ValidateParameterOrError_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_mD635E6C242DAED8FAC3293B32075DADD99DAB5EB_gshared)(___0_parameter, method);
}
inline int64_t BurstRuntime_GetHashCode64_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_mE8152CE9DC36CE545AD2A5BF86B58C1D5E6E0C57_inline (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))BurstRuntime_GetHashCode64_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_mE8152CE9DC36CE545AD2A5BF86B58C1D5E6E0C57_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m3F1B39AC2C589B1DCAE692902C5E2E2427A3DF30_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m3F1B39AC2C589B1DCAE692902C5E2E2427A3DF30_gshared_inline)(method);
}
inline void NetworkSettings_AddRawParameterStruct_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m962C25404897C897749AFF0EEA0E7A92FE1248DD (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* ___0_parameter, const RuntimeMethod* method)
{
	((  void (*) (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*, NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA*, const RuntimeMethod*))NetworkSettings_AddRawParameterStruct_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m962C25404897C897749AFF0EEA0E7A92FE1248DD_gshared)(__this, ___0_parameter, method);
}
inline void NetworkSettings_ValidateParameterOrError_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_m3C66EB6981BC85D0ABE9E264FB9EEC9B8D7F0CA2 (NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* ___0_parameter, const RuntimeMethod* method)
{
	((  void (*) (NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31*, const RuntimeMethod*))NetworkSettings_ValidateParameterOrError_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_m3C66EB6981BC85D0ABE9E264FB9EEC9B8D7F0CA2_gshared)(___0_parameter, method);
}
inline int64_t BurstRuntime_GetHashCode64_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mF35F6324F342886140712C3D1764962616AF0BA2_inline (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))BurstRuntime_GetHashCode64_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mF35F6324F342886140712C3D1764962616AF0BA2_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mDE323919C8E33E999250367BA7604854B60A51F8_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mDE323919C8E33E999250367BA7604854B60A51F8_gshared_inline)(method);
}
inline void NetworkSettings_AddRawParameterStruct_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mEC83C96E0D4814056924E2E6716D4F5E7D5A86F1 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* ___0_parameter, const RuntimeMethod* method)
{
	((  void (*) (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*, NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31*, const RuntimeMethod*))NetworkSettings_AddRawParameterStruct_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mEC83C96E0D4814056924E2E6716D4F5E7D5A86F1_gshared)(__this, ___0_parameter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_additionalSizeRequired, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void FastBufferWriter_WriteUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m777CCD0EE76272FA2A4C1E966D8FDEFD37EA3663_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint16_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, uint16_t*, const RuntimeMethod*))FastBufferWriter_WriteUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m777CCD0EE76272FA2A4C1E966D8FDEFD37EA3663_gshared_inline)(__this, ___0_value, method);
}
inline void FastBufferWriter_WriteUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5433926E9482CEC16DA80CCA069B9A16E8678CE6_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, uint8_t*, const RuntimeMethod*))FastBufferWriter_WriteUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5433926E9482CEC16DA80CCA069B9A16E8678CE6_gshared_inline)(__this, ___0_value, method);
}
inline void FastBufferReader_ReadUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD1B0BB55C80D5F6F8946291EBECE58CBA5D4BF82_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint16_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, uint16_t*, const RuntimeMethod*))FastBufferReader_ReadUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD1B0BB55C80D5F6F8946291EBECE58CBA5D4BF82_gshared_inline)(__this, ___0_value, method);
}
inline void FastBufferReader_ReadUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0C68F94E01E308ACF5E3CA02F646A467D9BCA68_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, uint8_t*, const RuntimeMethod*))FastBufferReader_ReadUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0C68F94E01E308ACF5E3CA02F646A467D9BCA68_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m6788811B17D939B7306A3510B9AD78A644E4A320_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				ConnectionApprovedMessage_Serialize_m0584DD0592C46377C30D4A2E7A215EF46CCCE199(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mCFC238B0EAEEB4F5C8B2ECFE8C0D1C0767D0A051_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				ConnectionRequestMessage_Serialize_m260EDF4EC1282BEAD31E3B69E9FF5E71A8B05D79(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mFE88F2FF3E0C6CF1C0C4894682B8F09AC115DFCE_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				CreateObjectMessage_Serialize_m99F544FD830C222FAB32B7D33294D4CEC617937B(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				DestroyObjectMessage_Serialize_mF84D1148FEAE08B1526C44C609CE144B1BD00953(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisRuntimeObject_m53703C680108FCAEBD7CDE69C3AAFFB103DA8E44_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_2 = L_1;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		RuntimeObject** L_3 = ___2_clientIds;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_2 = L_4;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeObject** L_14 = ___2_clientIds;
		RuntimeObject* L_15 = (*(RuntimeObject**)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		NullCheck((RuntimeObject*)(V_2));
		uint64_t L_17;
		L_17 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2), L_16);
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				DestroyObjectMessage_Serialize_mF84D1148FEAE08B1526C44C609CE144B1BD00953(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				RuntimeObject** L_37 = ___2_clientIds;
				RuntimeObject* L_38 = (*(RuntimeObject**)L_37);
				V_8 = (RuntimeObject*)L_38;
				int32_t L_39 = V_4;
				int32_t L_40;
				L_40 = NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_39, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_40;
				int32_t L_41 = V_7;
				int32_t L_42 = V_0;
				if ((((int32_t)L_41) > ((int32_t)L_42)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_43 = V_0;
				G_B13_0 = L_43;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_44 = V_7;
				G_B13_0 = L_44;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0126:
	{
		int32_t L_46 = V_3;
		RuntimeObject** L_47 = ___2_clientIds;
		RuntimeObject* L_48 = (*(RuntimeObject**)L_47);
		V_2 = L_48;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_49;
		L_49 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if ((((int32_t)L_46) < ((int32_t)L_49)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m55F95216698B79A2F3E4523EA328BF5F15A1BEF7_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				DisconnectReasonMessage_Serialize_m95202A704191A925F261E86742A21A011FDCB2D8(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				NamedMessage_Serialize_m8EA064FAFCFAA6631245BF8C8BAA8B42D93A9040(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisRuntimeObject_m08230AA18B5648278D6BF098D8C1BAEFC7F0A695_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_2 = L_1;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		RuntimeObject** L_3 = ___2_clientIds;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_2 = L_4;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeObject** L_14 = ___2_clientIds;
		RuntimeObject* L_15 = (*(RuntimeObject**)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		NullCheck((RuntimeObject*)(V_2));
		uint64_t L_17;
		L_17 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2), L_16);
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				NamedMessage_Serialize_m8EA064FAFCFAA6631245BF8C8BAA8B42D93A9040(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				RuntimeObject** L_37 = ___2_clientIds;
				RuntimeObject* L_38 = (*(RuntimeObject**)L_37);
				V_8 = (RuntimeObject*)L_38;
				int32_t L_39 = V_4;
				int32_t L_40;
				L_40 = NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_39, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_40;
				int32_t L_41 = V_7;
				int32_t L_42 = V_0;
				if ((((int32_t)L_41) > ((int32_t)L_42)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_43 = V_0;
				G_B13_0 = L_43;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_44 = V_7;
				G_B13_0 = L_44;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0126:
	{
		int32_t L_46 = V_3;
		RuntimeObject** L_47 = ___2_clientIds;
		RuntimeObject* L_48 = (*(RuntimeObject**)L_47);
		V_2 = L_48;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_49;
		L_49 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if ((((int32_t)L_46) < ((int32_t)L_49)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9A20798AB6A25CCEF282FC2CE4F4545205C81E86_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				NetworkVariableDeltaMessage_Serialize_m9B8B70E9B70531DDBAC13DFAC648D5371E2DB8EF(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				ParentSyncMessage_Serialize_m9AE44A0039CBE4A5F8182C91DBEF9E99CBDC7455(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD8715CC2DEB7C0344EF681CCE7DB9BC34E0A3996_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				ProxyMessage_Serialize_m705983F8CC4D0E4C83A3E5AC973A3AECF6CC67BF(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD11101F787FA71AE2077E5086BC4FD3A8785AD5F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				RpcMessage_Serialize_m364D337A54D4BAB922557F16EC9B7F0E51F9FCD1(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				SceneEventMessage_Serialize_m9BBAF1877F9962FBCC5714A6DD0921044D98AEC5(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisRuntimeObject_mFFBA30695FFC4E00683D42946A25951FF36723D0_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_2 = L_1;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		RuntimeObject** L_3 = ___2_clientIds;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_2 = L_4;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeObject** L_14 = ___2_clientIds;
		RuntimeObject* L_15 = (*(RuntimeObject**)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		NullCheck((RuntimeObject*)(V_2));
		uint64_t L_17;
		L_17 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2), L_16);
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				SceneEventMessage_Serialize_m9BBAF1877F9962FBCC5714A6DD0921044D98AEC5(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				RuntimeObject** L_37 = ___2_clientIds;
				RuntimeObject* L_38 = (*(RuntimeObject**)L_37);
				V_8 = (RuntimeObject*)L_38;
				int32_t L_39 = V_4;
				int32_t L_40;
				L_40 = NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_39, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_40;
				int32_t L_41 = V_7;
				int32_t L_42 = V_0;
				if ((((int32_t)L_41) > ((int32_t)L_42)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_43 = V_0;
				G_B13_0 = L_43;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_44 = V_7;
				G_B13_0 = L_44;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0126:
	{
		int32_t L_46 = V_3;
		RuntimeObject** L_47 = ___2_clientIds;
		RuntimeObject* L_48 = (*(RuntimeObject**)L_47);
		V_2 = L_48;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_49;
		L_49 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if ((((int32_t)L_46) < ((int32_t)L_49)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m73344DC114A97F4F5569E6536C9EF6D7F78BFE8B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				ServerLogMessage_Serialize_m75D84FCE387D3673972DEFF9C60DAC20569E951C(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m204C72052D5739D9FA78287D51A077020ACCFB8E_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				ServerRpcMessage_Serialize_m78B363B31FF63D5514A415E89C221F018CE90EBB(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				TimeSyncMessage_Serialize_mC4D522537604EDFB129EFFBE531DA4DCDB9AE280(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisRuntimeObject_mC6E22D655D8765FDFB3C5F503B2C1109A651CE13_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_2 = L_1;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		RuntimeObject** L_3 = ___2_clientIds;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_2 = L_4;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeObject** L_14 = ___2_clientIds;
		RuntimeObject* L_15 = (*(RuntimeObject**)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		NullCheck((RuntimeObject*)(V_2));
		uint64_t L_17;
		L_17 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2), L_16);
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				TimeSyncMessage_Serialize_mC4D522537604EDFB129EFFBE531DA4DCDB9AE280(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				RuntimeObject** L_37 = ___2_clientIds;
				RuntimeObject* L_38 = (*(RuntimeObject**)L_37);
				V_8 = (RuntimeObject*)L_38;
				int32_t L_39 = V_4;
				int32_t L_40;
				L_40 = NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_39, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_40;
				int32_t L_41 = V_7;
				int32_t L_42 = V_0;
				if ((((int32_t)L_41) > ((int32_t)L_42)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_43 = V_0;
				G_B13_0 = L_43;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_44 = V_7;
				G_B13_0 = L_44;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0126:
	{
		int32_t L_46 = V_3;
		RuntimeObject** L_47 = ___2_clientIds;
		RuntimeObject* L_48 = (*(RuntimeObject**)L_47);
		V_2 = L_48;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_49;
		L_49 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if ((((int32_t)L_46) < ((int32_t)L_49)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_14 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_15 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		uint64_t L_17;
		L_17 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				UnnamedMessage_Serialize_mAA47A32113A839FAC4F5197B2AB75CB587418192(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_37 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_37);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_39 = L_38;
				RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_39);
				V_8 = (RuntimeObject*)L_40;
				int32_t L_41 = V_4;
				int32_t L_42;
				L_42 = NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_41, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_42;
				int32_t L_43 = V_7;
				int32_t L_44 = V_0;
				if ((((int32_t)L_43) > ((int32_t)L_44)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_45 = V_0;
				G_B13_0 = L_45;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_46 = V_7;
				G_B13_0 = L_46;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0126:
	{
		int32_t L_48 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_49 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_50 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_49);
		V_2 = L_50;
		int32_t L_51;
		L_51 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_48) < ((int32_t)L_51)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisRuntimeObject_m0034C81E06473B370A38595BCA7830218AF778B6_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_2 = L_1;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		RuntimeObject** L_3 = ___2_clientIds;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_2 = L_4;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeObject** L_14 = ___2_clientIds;
		RuntimeObject* L_15 = (*(RuntimeObject**)L_14);
		V_2 = L_15;
		int32_t L_16 = V_3;
		NullCheck((RuntimeObject*)(V_2));
		uint64_t L_17;
		L_17 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2), L_16);
		int32_t L_18;
		L_18 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_13, L_17, (bool)0, NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_20 = V_4;
		bool L_21;
		L_21 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_20, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_22, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_24 = ___1_delivery;
		if ((((int32_t)L_24) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_25;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_26 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_26;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_31 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_32 = V_6;
				int32_t L_33 = V_4;
				UnnamedMessage_Serialize_mAA47A32113A839FAC4F5197B2AB75CB587418192(L_31, L_32, L_33, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_34 = V_5;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_35 = ___0_message;
				int32_t L_36 = ___1_delivery;
				RuntimeObject** L_37 = ___2_clientIds;
				RuntimeObject* L_38 = (*(RuntimeObject**)L_37);
				V_8 = (RuntimeObject*)L_38;
				int32_t L_39 = V_4;
				int32_t L_40;
				L_40 = NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612(__this, (&V_6), L_34, L_35, L_36, (&V_8), L_39, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_40;
				int32_t L_41 = V_7;
				int32_t L_42 = V_0;
				if ((((int32_t)L_41) > ((int32_t)L_42)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_43 = V_0;
				G_B13_0 = L_43;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_44 = V_7;
				G_B13_0 = L_44;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0126:
	{
		int32_t L_46 = V_3;
		RuntimeObject** L_47 = ___2_clientIds;
		RuntimeObject* L_48 = (*(RuntimeObject**)L_47);
		V_2 = L_48;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_49;
		L_49 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if ((((int32_t)L_46) < ((int32_t)L_49)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m98ED23C85B854B894EC3815376E71B2A80F99D81_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Il2CppFullySharedGenericAny* ___0_message, int32_t ___1_delivery, Il2CppFullySharedGenericAny* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_37 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 6)));
	void* L_54 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_42 = L_1;
	const Il2CppFullySharedGenericAny L_53 = L_1;
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
	memset(V_2, 0, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_2, L_1, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_3;
		L_3 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_2, (void*)(Il2CppFullySharedGenericAny*)V_2);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		Il2CppFullySharedGenericAny* L_4 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_7;
		L_7 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_2);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8;
		L_8 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_7, L_8, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0126;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0090;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Il2CppFullySharedGenericAny* L_16 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_2, L_17, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_18 = V_3;
		uint64_t L_20;
		L_20 = ConstrainedFuncInvoker1< uint64_t, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_19, (void*)(Il2CppFullySharedGenericAny*)V_2, L_18);
		int32_t L_21;
		L_21 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_15, L_20, (bool)0, NULL);
		V_4 = L_21;
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0122;
		}
	}

IL_0090:
	{
		int32_t L_23 = V_4;
		bool L_24;
		L_24 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_23, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_24)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_25 = V_4;
		bool L_26;
		L_26 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_25, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_27 = ___1_delivery;
		if ((((int32_t)L_27) == ((int32_t)4)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_28;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_29 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_29;
	}

IL_00ba:
	{
		V_5 = G_B9_0;
		int32_t L_30 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_31;
		L_31 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_32 = V_5;
		int32_t L_33;
		L_33 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_30, L_31)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_32, L_33)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0114:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				Il2CppFullySharedGenericAny* L_34 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_35 = V_6;
				int32_t L_36 = V_4;
				ConstrainedActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 6), il2cpp_rgctx_method(method->rgctx_data, 7), L_37, (void*)L_34, L_35, L_36);
				int32_t L_38 = V_5;
				Il2CppFullySharedGenericAny* L_39 = ___0_message;
				int32_t L_40 = ___1_delivery;
				Il2CppFullySharedGenericAny* L_41 = ___2_clientIds;
				il2cpp_codegen_memcpy(L_42, L_41, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
				RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_42);
				V_8 = (RuntimeObject*)L_43;
				int32_t L_44 = V_4;
				int32_t L_45;
				L_45 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(__this, (&V_6), L_38, L_39, L_40, (&V_8), L_44, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_45;
				int32_t L_46 = V_7;
				int32_t L_47 = V_0;
				if ((((int32_t)L_46) > ((int32_t)L_47)))
				{
					goto IL_010f_1;
				}
			}
			{
				int32_t L_48 = V_0;
				G_B13_0 = L_48;
				goto IL_0111_1;
			}

IL_010f_1:
			{
				int32_t L_49 = V_7;
				G_B13_0 = L_49;
			}

IL_0111_1:
			{
				V_0 = G_B13_0;
				goto IL_0122;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0122:
	{
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0126:
	{
		int32_t L_51 = V_3;
		Il2CppFullySharedGenericAny* L_52 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_53, L_52, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_2, L_53, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_55;
		L_55 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_54, (void*)(Il2CppFullySharedGenericAny*)V_2);
		if ((((int32_t)L_51) < ((int32_t)L_55)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_56 = V_0;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mAFB12215C9F2EEAE909C5FA628533350988D9815_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mF15528C300DE197DDEE677642AEED3CC3E59F76D_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC0949956FF08E98C0F40F27B4789868CB3FAB598(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mEA0B1C2CA4DBF250F8ADEF1D6D979E76643B3971_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mD0C07DA170C5120D4FD019CFF401CED215CACAAA_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_m929FC81DCDED8F61D87BDD675D3FF973F681252E_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m3F324491879C6A8677828DBBAC072F30E55F4A59_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_m8233A3460E59E5B018862FD72F978BFDF1347170_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisIl2CppFullySharedGenericAny_m31E12E8A1890164B9E0716354BF9929618F739A3_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Il2CppFullySharedGenericAny* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, Il2CppFullySharedGenericAny*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisIl2CppFullySharedGenericAny_mD33E551829BF0B488C452A0185975E9136415C4D_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, Il2CppFullySharedGenericAny* ___2_message, int32_t ___3_delivery, uint64_t ___4_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		V_0 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		uint64_t L_7 = ___4_clientId;
		int32_t L_8;
		L_8 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_6, L_7, (bool)0, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return 0;
	}

IL_0037:
	{
		uintptr_t L_10 = ((uintptr_t)8);
		int8_t* L_11 = (int8_t*) (L_10 ? alloca(L_10) : NULL);
		memset(L_11, 0, L_10);
		int8_t* L_12 = (L_11);
		uint64_t L_13 = ___4_clientId;
		*((int64_t*)L_12) = (int64_t)L_13;
		V_1 = (uint64_t*)L_12;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_14 = ___0_tmpSerializer;
		int32_t L_15 = ___1_maxSize;
		Il2CppFullySharedGenericAny* L_16 = ___2_message;
		int32_t L_17 = ___3_delivery;
		uint64_t* L_18 = V_1;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_19;
		memset((&L_19), 0, sizeof(L_19));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_19), L_18, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_20 = L_19;
		RuntimeObject* L_21 = Box(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_il2cpp_TypeInfo_var, &L_20);
		V_2 = (RuntimeObject*)L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_14, L_15, L_16, L_17, (&V_2), L_22, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_m6F0A023AE303B39E204690D1EEDB7711BF1A6735_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_m9FA79875297ABB6040782E77971BC1AD1DCF445F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5_mF65D5CDBDC865AF55CA8903891362256C293B185_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mE24B8D94B592FCC251FED87386652FC34654D9CC_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisIl2CppFullySharedGenericAny_m0AE772800137A4D83160CEF00851EFA1DBB39358_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, Il2CppFullySharedGenericAny* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_034b:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0322_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_031c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_0_0_0_var) };
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				bool L_25;
				L_25 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_00cc_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_27;
				L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
				RuntimeObject** L_28 = ___4_clientIds;
				RuntimeObject* L_29 = *((RuntimeObject**)L_28);
				int32_t L_30 = V_4;
				NullCheck(L_29);
				uint64_t L_31;
				L_31 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_29, L_30);
				int32_t L_32;
				L_32 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A(__this, L_27, L_31, (bool)0, NULL);
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_34 = V_8;
				int32_t L_35 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
				{
					goto IL_031c_1;
				}
			}

IL_00cc_1:
			{
				RuntimeObject** L_36 = ___4_clientIds;
				RuntimeObject* L_37 = *((RuntimeObject**)L_36);
				int32_t L_38 = V_4;
				NullCheck(L_37);
				uint64_t L_39;
				L_39 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_37, L_38);
				V_5 = L_39;
				uint64_t L_40 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				int32_t L_43 = ___3_delivery;
				bool L_44;
				L_44 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_40, L_42, L_43, NULL);
				if (!L_44)
				{
					goto IL_031c_1;
				}
			}
			{
				int32_t L_45 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_45;
				int32_t L_46 = ___3_delivery;
				if ((((int32_t)L_46) == ((int32_t)4)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_47 = __this->___PeerMTUSizes;
				uint64_t L_48 = V_5;
				NullCheck(L_47);
				bool L_49;
				L_49 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_47, L_48, (&V_9), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_49)
				{
					goto IL_0113_1;
				}
			}
			{
				int32_t L_50 = V_9;
				___1_maxSize = L_50;
			}

IL_0113_1:
			{
				int32_t L_51 = ___1_maxSize;
				V_6 = L_51;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_52 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_53 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_52);
				V_3 = L_53;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_54;
				L_54 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_55 = ___1_maxSize;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_0151_1;
				}
			}
			{
				uint64_t L_56 = V_5;
				uint64_t L_57 = L_56;
				RuntimeObject* L_58 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_60);
				String_t* L_62;
				L_62 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_58, (RuntimeObject*)L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_62, NULL);
				goto IL_031c_1;
			}

IL_0151_1:
			{
				V_10 = 0;
				goto IL_0173_1;
			}

IL_0156_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_63 = __this->___m_Hooks;
				int32_t L_64 = V_10;
				NullCheck(L_63);
				RuntimeObject* L_65;
				L_65 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_63, L_64, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_66 = V_5;
				Il2CppFullySharedGenericAny* L_67 = ___2_message;
				int32_t L_68 = ___3_delivery;
				NullCheck(L_65);
				GenericInterfaceActionInvoker3< uint64_t, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_65, L_66, L_67, L_68);
				int32_t L_69 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0173_1:
			{
				int32_t L_70 = V_10;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_71 = __this->___m_Hooks;
				NullCheck(L_71);
				int32_t L_72;
				L_72 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_71, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_70) < ((int32_t)L_72)))
				{
					goto IL_0156_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_73 = __this->___m_SendQueues;
				uint64_t L_74 = V_5;
				NullCheck(L_73);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_75;
				L_75 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_73, L_74, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_75;
				int32_t L_76;
				L_76 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_76)
				{
					goto IL_01cd_1;
				}
			}
			{
				int32_t L_77 = ___3_delivery;
				int32_t L_78 = V_6;
				int32_t L_79 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_80;
				memset((&L_80), 0, sizeof(L_80));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_80), L_77, L_78, (int32_t)3, L_79, NULL);
				V_11 = L_80;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_81;
				L_81 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_82 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_81->___Writer);
				uint32_t L_83 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_82, (int32_t)L_83, NULL);
				goto IL_0251_1;
			}

IL_01cd_1:
			{
				int32_t L_84;
				L_84 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85;
				L_85 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_84, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_12 = L_85;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_86 = V_12;
				int32_t L_87 = L_86->___NetworkDelivery;
				int32_t L_88 = ___3_delivery;
				if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
				{
					goto IL_021b_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_89 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_90 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_89->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_91;
				L_91 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_90, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_92 = V_12;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_93 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_92->___Writer);
				int32_t L_94;
				L_94 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_93, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_95 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_96 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_95);
				V_3 = L_96;
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_98;
				L_98 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_94))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_97, L_98)))))
				{
					goto IL_0251_1;
				}
			}

IL_021b_1:
			{
				int32_t L_99 = ___3_delivery;
				int32_t L_100 = V_6;
				int32_t L_101 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_102;
				memset((&L_102), 0, sizeof(L_102));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_102), L_99, L_100, (int32_t)3, L_101, NULL);
				V_11 = L_102;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_11), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_103;
				L_103 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_104;
				L_104 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_103, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_105 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_104->___Writer);
				uint32_t L_106 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_105, (int32_t)L_106, NULL);
			}

IL_0251_1:
			{
				int32_t L_107;
				L_107 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108;
				L_108 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_107, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_109 = L_108;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_109->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_111 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_112 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_111);
				V_3 = L_112;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_114;
				L_114 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_115;
				L_115 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_110, ((int32_t)il2cpp_codegen_add(L_113, L_114)), NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_116 = L_109;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_117 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_116->___Writer);
				uint8_t* L_118;
				L_118 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_119;
				L_119 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_117, L_118, L_119, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_120 = L_116;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_121 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_120->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_123 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_122);
				V_3 = L_123;
				uint8_t* L_124;
				L_124 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_125 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_126 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_125);
				V_3 = L_126;
				int32_t L_127;
				L_127 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_121, L_124, L_127, 0, NULL);
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_128 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_120->___BatchHeader);
				uint16_t* L_129 = (uint16_t*)(&L_128->___BatchCount);
				uint16_t* L_130 = L_129;
				int32_t L_131 = *((uint16_t*)L_130);
				*((int16_t*)L_130) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1)));
				V_13 = 0;
				goto IL_030d_1;
			}

IL_02da_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_132 = __this->___m_Hooks;
				int32_t L_133 = V_13;
				NullCheck(L_132);
				RuntimeObject* L_134;
				L_134 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_132, L_133, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_135 = V_5;
				Il2CppFullySharedGenericAny* L_136 = ___2_message;
				int32_t L_137 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_140;
				L_140 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_141;
				L_141 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_134);
				GenericInterfaceActionInvoker4< uint64_t, Il2CppFullySharedGenericAny*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_134, L_135, L_136, L_137, ((int32_t)il2cpp_codegen_add(L_140, L_141)));
				int32_t L_142 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_142, 1));
			}

IL_030d_1:
			{
				int32_t L_143 = V_13;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_144 = __this->___m_Hooks;
				NullCheck(L_144);
				int32_t L_145;
				L_145 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_144, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_143) < ((int32_t)L_145)))
				{
					goto IL_02da_1;
				}
			}

IL_031c_1:
			{
				int32_t L_146 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_146, 1));
			}

IL_0322_1:
			{
				int32_t L_147 = V_4;
				RuntimeObject** L_148 = ___4_clientIds;
				RuntimeObject* L_149 = *((RuntimeObject**)L_148);
				NullCheck((RuntimeObject*)L_149);
				int32_t L_150;
				L_150 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_149);
				if ((((int32_t)L_147) < ((int32_t)L_150)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_151 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_152 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_151);
				V_3 = L_152;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_153;
				L_153 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_154;
				L_154 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_14 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
				goto IL_0359;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0359:
	{
		int32_t L_155 = V_14;
		return L_155;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_SynchronizeNetworkBehaviours_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_mA3DCD9CEA10981D3BE3CA2A034CD216F91E0D3A9_gshared (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* ___0_serializer, uint64_t ___1_targetClientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	uint16_t V_7 = 0;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_8;
	memset((&V_8), 0, sizeof(V_8));
	uint8_t V_9 = 0x0;
	Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25 V_10;
	memset((&V_10), 0, sizeof(V_10));
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 V_11;
	memset((&V_11), 0, sizeof(V_11));
	uint16_t V_12 = 0;
	uint8_t V_13 = 0x0;
	uint16_t V_14 = 0;
	int32_t V_15 = 0;
	{
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_0 = ___0_serializer;
		bool L_1;
		L_1 = BufferSerializer_1_get_IsWriter_m6978D539067CE30EC81B6491589C7C30A1E16C28(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_00f0;
		}
	}
	{
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_2 = ___0_serializer;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_3;
		L_3 = BufferSerializer_1_GetFastBufferWriter_m9C29FD83F1F84F7DB243974892CB6612AE9ACCE9(L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_1 = L_4;
		V_7 = (uint16_t)0;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_5 = V_8;
		FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_inline((&V_0), (&V_7), L_5, FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var);
		int32_t L_6;
		L_6 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_2 = L_6;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_7 = V_0;
		uint64_t L_8 = ___1_targetClientId;
		NetworkObject_WriteNetworkVariableData_m97875431CFAF7F0C9E107B5545625BFD112961A3(__this, L_7, L_8, NULL);
		int32_t L_9;
		L_9 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_3 = L_9;
		V_9 = (uint8_t)0;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_10 = V_8;
		FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_inline((&V_0), (&V_9), L_10, FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var);
		V_4 = (uint8_t)0;
		List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* L_11;
		L_11 = NetworkObject_get_ChildNetworkBehaviours_m77246A2E16BAEE728A066E3020690BB3FB4EE09F(__this, NULL);
		NullCheck(L_11);
		Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25 L_12;
		L_12 = List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E(L_11, List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E_RuntimeMethod_var);
		V_10 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{
				Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514((&V_10), Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0087_1;
			}

IL_0070_1:
			{
				NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_13;
				L_13 = Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_inline((&V_10), Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_RuntimeMethod_var);
				BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_14 = ___0_serializer;
				uint64_t L_15 = ___1_targetClientId;
				NullCheck(L_13);
				bool L_16;
				L_16 = NetworkBehaviour_Synchronize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m259F5CB1F7FAA3D86565D34B8590F697CB87BD5E(L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
				if (!L_16)
				{
					goto IL_0087_1;
				}
			}
			{
				uint8_t L_17 = V_4;
				V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, 1)));
			}

IL_0087_1:
			{
				bool L_18;
				L_18 = Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9((&V_10), Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0070_1;
				}
			}
			{
				goto IL_00a0;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_5 = L_19;
		int32_t L_20 = V_1;
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline((&V_0), L_20, NULL);
		int32_t L_21 = V_5;
		int32_t L_22 = V_2;
		V_6 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract(L_21, L_22)));
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_23 = V_8;
		FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_inline((&V_0), (&V_6), L_23, FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var);
		int32_t L_24 = V_3;
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline((&V_0), L_24, NULL);
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_25 = V_8;
		FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_inline((&V_0), (&V_4), L_25, FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var);
		int32_t L_26 = V_5;
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline((&V_0), L_26, NULL);
		return;
	}

IL_00f0:
	{
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_27 = ___0_serializer;
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_28;
		L_28 = BufferSerializer_1_GetFastBufferReader_mF14C151E60E6525341AD31B18744F2DCC23DE063(L_27, il2cpp_rgctx_method(method->rgctx_data, 5));
		V_11 = L_28;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_29 = V_8;
		FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_inline((&V_11), (&V_12), L_29, FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_RuntimeMethod_var);
		int32_t L_30;
		L_30 = FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline((&V_11), NULL);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_31 = V_11;
		uint64_t L_32 = ___1_targetClientId;
		NetworkObject_SetNetworkVariableData_mA979B3BAA59540CC26379A65C887B904475F808C(__this, L_31, L_32, NULL);
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_33 = V_8;
		FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_inline((&V_11), (&V_13), L_33, FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_RuntimeMethod_var);
		V_14 = (uint16_t)0;
		V_15 = 0;
		goto IL_015f;
	}

IL_0137:
	{
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_34 = ___0_serializer;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_35 = V_8;
		BufferSerializer_1_SerializeValue_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8A2683B9D05761E486980E93C1BBE7F991885092(L_34, (&V_14), L_35, il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_36 = V_14;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_37;
		L_37 = NetworkObject_GetNetworkBehaviourAtOrderIndex_m1DCB1BE63EFFBA7434B1E829832FAD97799F859C(__this, L_36, NULL);
		BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B* L_38 = ___0_serializer;
		uint64_t L_39 = ___1_targetClientId;
		NullCheck(L_37);
		bool L_40;
		L_40 = NetworkBehaviour_Synchronize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m259F5CB1F7FAA3D86565D34B8590F697CB87BD5E(L_37, L_38, L_39, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_41 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_015f:
	{
		int32_t L_42 = V_15;
		uint8_t L_43 = V_13;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0137;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_SynchronizeNetworkBehaviours_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m836ADE7D27486D9AC87D856C4DFC02EC575A6C6C_gshared (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* ___0_serializer, uint64_t ___1_targetClientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	uint16_t V_7 = 0;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_8;
	memset((&V_8), 0, sizeof(V_8));
	uint8_t V_9 = 0x0;
	Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25 V_10;
	memset((&V_10), 0, sizeof(V_10));
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 V_11;
	memset((&V_11), 0, sizeof(V_11));
	uint16_t V_12 = 0;
	uint8_t V_13 = 0x0;
	uint16_t V_14 = 0;
	int32_t V_15 = 0;
	{
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_0 = ___0_serializer;
		bool L_1;
		L_1 = BufferSerializer_1_get_IsWriter_mA81CADE3680B019327BD43C92F4743B2140A83EB(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_00f0;
		}
	}
	{
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_2 = ___0_serializer;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_3;
		L_3 = BufferSerializer_1_GetFastBufferWriter_m0EDCCFEDDC0A291D14ACA9BB1DA18CD0ABAD9C60(L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_1 = L_4;
		V_7 = (uint16_t)0;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_5 = V_8;
		FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_inline((&V_0), (&V_7), L_5, FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var);
		int32_t L_6;
		L_6 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_2 = L_6;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_7 = V_0;
		uint64_t L_8 = ___1_targetClientId;
		NetworkObject_WriteNetworkVariableData_m97875431CFAF7F0C9E107B5545625BFD112961A3(__this, L_7, L_8, NULL);
		int32_t L_9;
		L_9 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_3 = L_9;
		V_9 = (uint8_t)0;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_10 = V_8;
		FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_inline((&V_0), (&V_9), L_10, FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var);
		V_4 = (uint8_t)0;
		List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* L_11;
		L_11 = NetworkObject_get_ChildNetworkBehaviours_m77246A2E16BAEE728A066E3020690BB3FB4EE09F(__this, NULL);
		NullCheck(L_11);
		Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25 L_12;
		L_12 = List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E(L_11, List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E_RuntimeMethod_var);
		V_10 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{
				Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514((&V_10), Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0087_1;
			}

IL_0070_1:
			{
				NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_13;
				L_13 = Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_inline((&V_10), Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_RuntimeMethod_var);
				BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_14 = ___0_serializer;
				uint64_t L_15 = ___1_targetClientId;
				NullCheck(L_13);
				bool L_16;
				L_16 = NetworkBehaviour_Synchronize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m55ACD2FDF7A3538B5BF255AF7BD53E52BADFA94D(L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
				if (!L_16)
				{
					goto IL_0087_1;
				}
			}
			{
				uint8_t L_17 = V_4;
				V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, 1)));
			}

IL_0087_1:
			{
				bool L_18;
				L_18 = Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9((&V_10), Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0070_1;
				}
			}
			{
				goto IL_00a0;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_5 = L_19;
		int32_t L_20 = V_1;
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline((&V_0), L_20, NULL);
		int32_t L_21 = V_5;
		int32_t L_22 = V_2;
		V_6 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract(L_21, L_22)));
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_23 = V_8;
		FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_inline((&V_0), (&V_6), L_23, FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var);
		int32_t L_24 = V_3;
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline((&V_0), L_24, NULL);
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_25 = V_8;
		FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_inline((&V_0), (&V_4), L_25, FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var);
		int32_t L_26 = V_5;
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline((&V_0), L_26, NULL);
		return;
	}

IL_00f0:
	{
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_27 = ___0_serializer;
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_28;
		L_28 = BufferSerializer_1_GetFastBufferReader_mBE4915BC31492038A896F4FE19E6A1D815815171(L_27, il2cpp_rgctx_method(method->rgctx_data, 5));
		V_11 = L_28;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_29 = V_8;
		FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_inline((&V_11), (&V_12), L_29, FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_RuntimeMethod_var);
		int32_t L_30;
		L_30 = FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline((&V_11), NULL);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_31 = V_11;
		uint64_t L_32 = ___1_targetClientId;
		NetworkObject_SetNetworkVariableData_mA979B3BAA59540CC26379A65C887B904475F808C(__this, L_31, L_32, NULL);
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_33 = V_8;
		FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_inline((&V_11), (&V_13), L_33, FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_RuntimeMethod_var);
		V_14 = (uint16_t)0;
		V_15 = 0;
		goto IL_015f;
	}

IL_0137:
	{
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_34 = ___0_serializer;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_35 = V_8;
		BufferSerializer_1_SerializeValue_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA2C0287E2BCF650393B4842273416B670CCA86EB(L_34, (&V_14), L_35, il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_36 = V_14;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_37;
		L_37 = NetworkObject_GetNetworkBehaviourAtOrderIndex_m1DCB1BE63EFFBA7434B1E829832FAD97799F859C(__this, L_36, NULL);
		BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0* L_38 = ___0_serializer;
		uint64_t L_39 = ___1_targetClientId;
		NullCheck(L_37);
		bool L_40;
		L_40 = NetworkBehaviour_Synchronize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_m55ACD2FDF7A3538B5BF255AF7BD53E52BADFA94D(L_37, L_38, L_39, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_41 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_015f:
	{
		int32_t L_42 = V_15;
		uint8_t L_43 = V_13;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0137;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_SynchronizeNetworkBehaviours_TisIl2CppFullySharedGenericAny_m67E0153B3BEFD911B6B47CF166CB29FE1E09A30D_gshared (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* ___0_serializer, uint64_t ___1_targetClientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	uint16_t V_7 = 0;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_8;
	memset((&V_8), 0, sizeof(V_8));
	uint8_t V_9 = 0x0;
	Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25 V_10;
	memset((&V_10), 0, sizeof(V_10));
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 V_11;
	memset((&V_11), 0, sizeof(V_11));
	uint16_t V_12 = 0;
	uint8_t V_13 = 0x0;
	uint16_t V_14 = 0;
	int32_t V_15 = 0;
	{
		BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_0 = ___0_serializer;
		bool L_1;
		L_1 = ((  bool (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_00f0;
		}
	}
	{
		BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_2 = ___0_serializer;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_3;
		L_3 = ((  FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_1 = L_4;
		V_7 = (uint16_t)0;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_5 = V_8;
		FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_inline((&V_0), (&V_7), L_5, FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var);
		int32_t L_6;
		L_6 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_2 = L_6;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_7 = V_0;
		uint64_t L_8 = ___1_targetClientId;
		NetworkObject_WriteNetworkVariableData_m97875431CFAF7F0C9E107B5545625BFD112961A3(__this, L_7, L_8, NULL);
		int32_t L_9;
		L_9 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_3 = L_9;
		V_9 = (uint8_t)0;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_10 = V_8;
		FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_inline((&V_0), (&V_9), L_10, FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var);
		V_4 = (uint8_t)0;
		List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* L_11;
		L_11 = NetworkObject_get_ChildNetworkBehaviours_m77246A2E16BAEE728A066E3020690BB3FB4EE09F(__this, NULL);
		NullCheck(L_11);
		Enumerator_tB17D3BB881778B22964DC5116E4CFEF7A2B39F25 L_12;
		L_12 = List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E(L_11, List_1_GetEnumerator_mB64AD810DAF616B12579D50AF76388DAE6072C9E_RuntimeMethod_var);
		V_10 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{
				Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514((&V_10), Enumerator_Dispose_mF57F57982BC79234C265C5B9E5B14A10EEC31514_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0087_1;
			}

IL_0070_1:
			{
				NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_13;
				L_13 = Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_inline((&V_10), Enumerator_get_Current_m5E3579137B781B888610439A5F9C36A5BE747BC9_RuntimeMethod_var);
				BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_14 = ___0_serializer;
				uint64_t L_15 = ___1_targetClientId;
				NullCheck(L_13);
				bool L_16;
				L_16 = ((  bool (*) (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
				if (!L_16)
				{
					goto IL_0087_1;
				}
			}
			{
				uint8_t L_17 = V_4;
				V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, 1)));
			}

IL_0087_1:
			{
				bool L_18;
				L_18 = Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9((&V_10), Enumerator_MoveNext_mC4397E67CFDE463FC5D2C8B31992B53004DA57F9_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0070_1;
				}
			}
			{
				goto IL_00a0;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_0), NULL);
		V_5 = L_19;
		int32_t L_20 = V_1;
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline((&V_0), L_20, NULL);
		int32_t L_21 = V_5;
		int32_t L_22 = V_2;
		V_6 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract(L_21, L_22)));
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_23 = V_8;
		FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_inline((&V_0), (&V_6), L_23, FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_RuntimeMethod_var);
		int32_t L_24 = V_3;
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline((&V_0), L_24, NULL);
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_25 = V_8;
		FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_inline((&V_0), (&V_4), L_25, FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_RuntimeMethod_var);
		int32_t L_26 = V_5;
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline((&V_0), L_26, NULL);
		return;
	}

IL_00f0:
	{
		BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_27 = ___0_serializer;
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_28;
		L_28 = ((  FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_27, il2cpp_rgctx_method(method->rgctx_data, 5));
		V_11 = L_28;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_29 = V_8;
		FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_inline((&V_11), (&V_12), L_29, FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_RuntimeMethod_var);
		int32_t L_30;
		L_30 = FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline((&V_11), NULL);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_31 = V_11;
		uint64_t L_32 = ___1_targetClientId;
		NetworkObject_SetNetworkVariableData_mA979B3BAA59540CC26379A65C887B904475F808C(__this, L_31, L_32, NULL);
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_33 = V_8;
		FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_inline((&V_11), (&V_13), L_33, FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_RuntimeMethod_var);
		V_14 = (uint16_t)0;
		V_15 = 0;
		goto IL_015f;
	}

IL_0137:
	{
		BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_34 = ___0_serializer;
		il2cpp_codegen_initobj((&V_8), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_35 = V_8;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, uint16_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_34, (&V_14), L_35, il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_36 = V_14;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_37;
		L_37 = NetworkObject_GetNetworkBehaviourAtOrderIndex_m1DCB1BE63EFFBA7434B1E829832FAD97799F859C(__this, L_36, NULL);
		BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10* L_38 = ___0_serializer;
		uint64_t L_39 = ___1_targetClientId;
		NullCheck(L_37);
		bool L_40;
		L_40 = ((  bool (*) (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_37, L_38, L_39, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_41 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_015f:
	{
		int32_t L_42 = V_15;
		uint8_t L_43 = V_13;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0137;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectReference_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m81D26B69DEA68138463872663981C211C042E8F6_gshared (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___m_NetworkObjectId);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		BufferSerializer_1_SerializeValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m581640EA329BEF97F9F2E7081686F33AFAF14FD4((&___0_serializer), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkObjectReference_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m81D26B69DEA68138463872663981C211C042E8F6_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_t8B54D07A3EDD3D37E1369C511353FC3344A0FF3B ___0_serializer, const RuntimeMethod* method)
{
	NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*>(__this + _offset);
	NetworkObjectReference_NetworkSerialize_TisBufferSerializerReader_t821F6D93FEA6652401EA14C2C96FB7328355A091_m81D26B69DEA68138463872663981C211C042E8F6(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectReference_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mDD5176471BCEFC10C07AFFF9C28F27A6FA51F679_gshared (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___m_NetworkObjectId);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		BufferSerializer_1_SerializeValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m32FE75597B21A19B3F4FE46CD65A34DAF02E2711((&___0_serializer), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkObjectReference_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mDD5176471BCEFC10C07AFFF9C28F27A6FA51F679_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_tB07CC05C8821999D2912FC2880FC1CAF4094FEF0 ___0_serializer, const RuntimeMethod* method)
{
	NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*>(__this + _offset);
	NetworkObjectReference_NetworkSerialize_TisBufferSerializerWriter_t3F287564BDCF264BABBB18BF4D541A95238FBFD4_mDD5176471BCEFC10C07AFFF9C28F27A6FA51F679(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectReference_NetworkSerialize_TisIl2CppFullySharedGenericAny_mDB2E7E50680CCC1C03FCCBBA6C141576F43D18B5_gshared (NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___m_NetworkObjectId);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		((  void (*) (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*, uint64_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkObjectReference_NetworkSerialize_TisIl2CppFullySharedGenericAny_mDB2E7E50680CCC1C03FCCBBA6C141576F43D18B5_AdjustorThunk (RuntimeObject* __this, BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*>(__this + _offset);
	NetworkObjectReference_NetworkSerialize_TisIl2CppFullySharedGenericAny_mDB2E7E50680CCC1C03FCCBBA6C141576F43D18B5(_thisAdjusted, ___0_serializer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_AddRawParameterStruct_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFD71BDCC448E4531E4222B0F20D0409B236875B9_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* ___0_parameter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* V_2 = NULL;
	ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = NetworkSettings_EnsureInitializedOrError_mB914F925D4A389C339FFFAEA48EA6EBDE7255029(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* L_1 = ___0_parameter;
		NetworkSettings_ValidateParameterOrError_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mBF63710C3A5B0D39DBDAE6461EAAF297300992ED(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		int64_t L_2;
		L_2 = BurstRuntime_GetHashCode64_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_m01C0FEF4E9E8DFE1702DE42DF6AB776088F9CF99_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_2;
		il2cpp_codegen_initobj((&V_3), sizeof(ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899));
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_3 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		int32_t L_4;
		L_4 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_3, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		(&V_3)->___Offset = L_4;
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFA803AA8310C0B427AA9ED30BD592E265987E169_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_3)->___Size = L_5;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_6 = V_3;
		V_1 = L_6;
		NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* L_7 = (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*)(&__this->___m_ParameterOffsets);
		int64_t L_8 = V_0;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_9 = V_1;
		bool L_10;
		L_10 = NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230(L_7, L_8, L_9, NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_11 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_12 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		int32_t L_13;
		L_13 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_12, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_14 = V_1;
		int32_t L_15 = L_14.___Size;
		NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D(L_11, ((int32_t)il2cpp_codegen_add(L_13, L_15)), (int32_t)0, NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_RuntimeMethod_var);
		goto IL_0079;
	}

IL_006c:
	{
		NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* L_16 = (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*)(&__this->___m_ParameterOffsets);
		int64_t L_17 = V_0;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_18;
		L_18 = NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1(L_16, L_17, NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_RuntimeMethod_var);
		V_1 = L_18;
	}

IL_0079:
	{
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_19 = __this->___m_Parameters;
		void* L_20;
		L_20 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_19, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_21 = V_1;
		int32_t L_22 = L_21.___Offset;
		V_2 = (BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6*)((void*)il2cpp_codegen_add((intptr_t)L_20, L_22));
		BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* L_23 = V_2;
		BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* L_24 = ___0_parameter;
		BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6 L_25 = (*(BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6*)L_24);
		*(BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6*)L_23 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkSettings_AddRawParameterStruct_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFD71BDCC448E4531E4222B0F20D0409B236875B9_AdjustorThunk (RuntimeObject* __this, BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6* ___0_parameter, const RuntimeMethod* method)
{
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*>(__this + _offset);
	NetworkSettings_AddRawParameterStruct_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFD71BDCC448E4531E4222B0F20D0409B236875B9(_thisAdjusted, ___0_parameter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_AddRawParameterStruct_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m0CEF4F297BC0F71F7C88756F9FC330CE4558AEEC_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* ___0_parameter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* V_2 = NULL;
	ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = NetworkSettings_EnsureInitializedOrError_mB914F925D4A389C339FFFAEA48EA6EBDE7255029(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* L_1 = ___0_parameter;
		NetworkSettings_ValidateParameterOrError_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_mA762B685AA78570BCA58944D0DB36397987B7EDA(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		int64_t L_2;
		L_2 = BurstRuntime_GetHashCode64_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_mB170B58FFCDE7EBE34C557AA7B94B2511CBC413A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_2;
		il2cpp_codegen_initobj((&V_3), sizeof(ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899));
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_3 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		int32_t L_4;
		L_4 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_3, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		(&V_3)->___Offset = L_4;
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m73D1DA9B707B68316FCF7C3184B1F0FCEB1254B0_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_3)->___Size = L_5;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_6 = V_3;
		V_1 = L_6;
		NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* L_7 = (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*)(&__this->___m_ParameterOffsets);
		int64_t L_8 = V_0;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_9 = V_1;
		bool L_10;
		L_10 = NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230(L_7, L_8, L_9, NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_11 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_12 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		int32_t L_13;
		L_13 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_12, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_14 = V_1;
		int32_t L_15 = L_14.___Size;
		NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D(L_11, ((int32_t)il2cpp_codegen_add(L_13, L_15)), (int32_t)0, NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_RuntimeMethod_var);
		goto IL_0079;
	}

IL_006c:
	{
		NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* L_16 = (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*)(&__this->___m_ParameterOffsets);
		int64_t L_17 = V_0;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_18;
		L_18 = NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1(L_16, L_17, NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_RuntimeMethod_var);
		V_1 = L_18;
	}

IL_0079:
	{
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_19 = __this->___m_Parameters;
		void* L_20;
		L_20 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_19, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_21 = V_1;
		int32_t L_22 = L_21.___Offset;
		V_2 = (NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D*)((void*)il2cpp_codegen_add((intptr_t)L_20, L_22));
		NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* L_23 = V_2;
		NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* L_24 = ___0_parameter;
		NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D L_25 = (*(NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D*)L_24);
		*(NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D*)L_23 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkSettings_AddRawParameterStruct_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m0CEF4F297BC0F71F7C88756F9FC330CE4558AEEC_AdjustorThunk (RuntimeObject* __this, NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D* ___0_parameter, const RuntimeMethod* method)
{
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*>(__this + _offset);
	NetworkSettings_AddRawParameterStruct_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m0CEF4F297BC0F71F7C88756F9FC330CE4558AEEC(_thisAdjusted, ___0_parameter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_AddRawParameterStruct_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m962C25404897C897749AFF0EEA0E7A92FE1248DD_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* ___0_parameter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* V_2 = NULL;
	ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = NetworkSettings_EnsureInitializedOrError_mB914F925D4A389C339FFFAEA48EA6EBDE7255029(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* L_1 = ___0_parameter;
		NetworkSettings_ValidateParameterOrError_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_mD635E6C242DAED8FAC3293B32075DADD99DAB5EB(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		int64_t L_2;
		L_2 = BurstRuntime_GetHashCode64_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_mE8152CE9DC36CE545AD2A5BF86B58C1D5E6E0C57_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_2;
		il2cpp_codegen_initobj((&V_3), sizeof(ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899));
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_3 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		int32_t L_4;
		L_4 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_3, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		(&V_3)->___Offset = L_4;
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m3F1B39AC2C589B1DCAE692902C5E2E2427A3DF30_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_3)->___Size = L_5;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_6 = V_3;
		V_1 = L_6;
		NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* L_7 = (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*)(&__this->___m_ParameterOffsets);
		int64_t L_8 = V_0;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_9 = V_1;
		bool L_10;
		L_10 = NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230(L_7, L_8, L_9, NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_11 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_12 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		int32_t L_13;
		L_13 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_12, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_14 = V_1;
		int32_t L_15 = L_14.___Size;
		NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D(L_11, ((int32_t)il2cpp_codegen_add(L_13, L_15)), (int32_t)0, NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_RuntimeMethod_var);
		goto IL_0079;
	}

IL_006c:
	{
		NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* L_16 = (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*)(&__this->___m_ParameterOffsets);
		int64_t L_17 = V_0;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_18;
		L_18 = NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1(L_16, L_17, NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_RuntimeMethod_var);
		V_1 = L_18;
	}

IL_0079:
	{
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_19 = __this->___m_Parameters;
		void* L_20;
		L_20 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_19, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_21 = V_1;
		int32_t L_22 = L_21.___Offset;
		V_2 = (NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA*)((void*)il2cpp_codegen_add((intptr_t)L_20, L_22));
		NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* L_23 = V_2;
		NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* L_24 = ___0_parameter;
		NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA L_25 = (*(NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA*)L_24);
		*(NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA*)L_23 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkSettings_AddRawParameterStruct_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m962C25404897C897749AFF0EEA0E7A92FE1248DD_AdjustorThunk (RuntimeObject* __this, NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA* ___0_parameter, const RuntimeMethod* method)
{
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*>(__this + _offset);
	NetworkSettings_AddRawParameterStruct_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m962C25404897C897749AFF0EEA0E7A92FE1248DD(_thisAdjusted, ___0_parameter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_AddRawParameterStruct_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mEC83C96E0D4814056924E2E6716D4F5E7D5A86F1_gshared (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* ___0_parameter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* V_2 = NULL;
	ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = NetworkSettings_EnsureInitializedOrError_mB914F925D4A389C339FFFAEA48EA6EBDE7255029(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* L_1 = ___0_parameter;
		NetworkSettings_ValidateParameterOrError_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_m3C66EB6981BC85D0ABE9E264FB9EEC9B8D7F0CA2(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		int64_t L_2;
		L_2 = BurstRuntime_GetHashCode64_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mF35F6324F342886140712C3D1764962616AF0BA2_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_2;
		il2cpp_codegen_initobj((&V_3), sizeof(ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899));
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_3 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		int32_t L_4;
		L_4 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_3, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		(&V_3)->___Offset = L_4;
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mDE323919C8E33E999250367BA7604854B60A51F8_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_3)->___Size = L_5;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_6 = V_3;
		V_1 = L_6;
		NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* L_7 = (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*)(&__this->___m_ParameterOffsets);
		int64_t L_8 = V_0;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_9 = V_1;
		bool L_10;
		L_10 = NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230(L_7, L_8, L_9, NativeHashMap_2_TryAdd_mEA47370587B0573FE035A124BD060C1F3105E230_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_11 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_12 = (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94*)(&__this->___m_Parameters);
		int32_t L_13;
		L_13 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_12, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_14 = V_1;
		int32_t L_15 = L_14.___Size;
		NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D(L_11, ((int32_t)il2cpp_codegen_add(L_13, L_15)), (int32_t)0, NativeList_1_Resize_m234E62EC9CD8AC1D4BFA4B79E54AABC48C5FB59D_RuntimeMethod_var);
		goto IL_0079;
	}

IL_006c:
	{
		NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC* L_16 = (NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC*)(&__this->___m_ParameterOffsets);
		int64_t L_17 = V_0;
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_18;
		L_18 = NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1(L_16, L_17, NativeHashMap_2_get_Item_mFADF39EFD70FED8679AE9F916EE8F5C9CC898BE1_RuntimeMethod_var);
		V_1 = L_18;
	}

IL_0079:
	{
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_19 = __this->___m_Parameters;
		void* L_20;
		L_20 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_19, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		ParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899 L_21 = V_1;
		int32_t L_22 = L_21.___Offset;
		V_2 = (NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31*)((void*)il2cpp_codegen_add((intptr_t)L_20, L_22));
		NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* L_23 = V_2;
		NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* L_24 = ___0_parameter;
		NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31 L_25 = (*(NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31*)L_24);
		*(NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31*)L_23 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkSettings_AddRawParameterStruct_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mEC83C96E0D4814056924E2E6716D4F5E7D5A86F1_AdjustorThunk (RuntimeObject* __this, NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31* ___0_parameter, const RuntimeMethod* method)
{
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0*>(__this + _offset);
	NetworkSettings_AddRawParameterStruct_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mEC83C96E0D4814056924E2E6716D4F5E7D5A86F1(_thisAdjusted, ___0_parameter, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_2 = __this->___Handle;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Length;
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Length;
		return L_5;
	}

IL_0024:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = __this->___Handle;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Position;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_where, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_where;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_1 = __this->___Handle;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Capacity;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, L_2, NULL);
		___0_where = L_3;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = __this->___Handle;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Length;
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_8 = ___0_where;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_9 = __this->___Handle;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Position;
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_004f;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_11 = __this->___Handle;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Position;
		NullCheck(L_11);
		L_11->___Length = L_13;
	}

IL_004f:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_14 = __this->___Handle;
		int32_t L_15 = ___0_where;
		NullCheck(L_14);
		L_14->___Position = L_15;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___MaxCapacity;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		int32_t L_2 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position;
		int32_t L_7 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = __this->___Handle;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_14 = ___0_bytes;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		return (bool)0;
	}

IL_0059:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_2 = __this->___Handle;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position;
		uint8_t* L_4 = ___0_value;
		int32_t L_5 = ___2_offset;
		int32_t L_6 = ___1_size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_5)), ((int64_t)L_6), NULL);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_7 = __this->___Handle;
		NullCheck(L_7);
		int32_t* L_8 = (int32_t*)(&L_7->___Position);
		int32_t* L_9 = L_8;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___1_size;
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Position_m6B9DC9ECC9F2D943EA0103248E10AB9B95C8F4CF_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, const RuntimeMethod* method) 
{
	{
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = __this->___m_Value;
		int32_t L_1 = ___0_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA7AAF68FC430B5F01DB15AA8E20B2B59D791452D_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		uint16_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		FastBufferWriter_WriteUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m777CCD0EE76272FA2A4C1E966D8FDEFD37EA3663_inline(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E15D9A3366123DA5417F2F2CE15BFF23EF6F18B_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		uint8_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		FastBufferWriter_WriteUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5433926E9482CEC16DA80CCA069B9A16E8678CE6_inline(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m58D6C3C01C733858C9E8817FFFC901E4907FB077_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint16_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint16_t* L_0 = ___0_value;
		FastBufferReader_ReadUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD1B0BB55C80D5F6F8946291EBECE58CBA5D4BF82_inline(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m922E739434D7647F350049F06F30E03D6D7210E9_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint8_t* L_0 = ___0_value;
		FastBufferReader_ReadUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0C68F94E01E308ACF5E3CA02F646A467D9BCA68_inline(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_m01C0FEF4E9E8DFE1702DE42DF6AB776088F9CF99_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t8EC2C5A5844023C61296851DEBB388E02D1FEEB2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6_mFA803AA8310C0B427AA9ED30BD592E265987E169_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BaselibNetworkParameter_tB97B06457095014AAB49DEDB087860231EDE57C6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_mB170B58FFCDE7EBE34C557AA7B94B2511CBC413A_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tEBB3FF37447FD3D0F5902EF8837D1DCA12D63363_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D_m73D1DA9B707B68316FCF7C3184B1F0FCEB1254B0_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_mE8152CE9DC36CE545AD2A5BF86B58C1D5E6E0C57_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t1C024639A4314C4E09D2F4103DA050C254C67DA0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA_m3F1B39AC2C589B1DCAE692902C5E2E2427A3DF30_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mF35F6324F342886140712C3D1764962616AF0BA2_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t766E580F051490D9C714F172B1C2E2B79871D1E8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31_mDE323919C8E33E999250367BA7604854B60A51F8_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NetworkPipelineParams_tF754CCABC28CEA2F6F5D33A9EC6493C5F056AA31);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m777CCD0EE76272FA2A4C1E966D8FDEFD37EA3663_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint16_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint16_t* L_0 = ___0_value;
		V_0 = L_0;
		uint16_t* L_1 = V_0;
		V_1 = (uint8_t*)((uintptr_t)L_1);
		uint8_t* L_2 = V_1;
		uint32_t L_3 = sizeof(uint16_t);
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline(__this, L_2, (int32_t)L_3, 0, NULL);
		V_0 = (uint16_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5433926E9482CEC16DA80CCA069B9A16E8678CE6_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0 = ___0_value;
		V_0 = L_0;
		uint8_t* L_1 = V_0;
		V_1 = (uint8_t*)((uintptr_t)L_1);
		uint8_t* L_2 = V_1;
		uint32_t L_3 = sizeof(uint8_t);
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline(__this, L_2, (int32_t)L_3, 0, NULL);
		V_0 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD1B0BB55C80D5F6F8946291EBECE58CBA5D4BF82_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint16_t* ___0_value, const RuntimeMethod* method) 
{
	uint16_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint16_t* L_0 = ___0_value;
		V_0 = L_0;
		uint16_t* L_1 = V_0;
		V_1 = (uint8_t*)((uintptr_t)L_1);
		uint8_t* L_2 = V_1;
		uint32_t L_3 = sizeof(uint16_t);
		FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline(__this, L_2, (int32_t)L_3, 0, NULL);
		V_0 = (uint16_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0C68F94E01E308ACF5E3CA02F646A467D9BCA68_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		uint8_t* L_0 = ___0_value;
		V_0 = L_0;
		uint8_t* L_1 = V_0;
		V_1 = (uint8_t*)((uintptr_t)L_1);
		uint8_t* L_2 = V_1;
		uint32_t L_3 = sizeof(uint8_t);
		FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline(__this, L_2, (int32_t)L_3, 0, NULL);
		V_0 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_RuntimeMethod_var)));
	}

IL_0014:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___BufferPointer;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position;
		uint8_t* L_7 = ___0_value;
		int32_t L_8 = ___2_offset;
		int32_t L_9 = ___1_size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_8)), ((int64_t)L_9), NULL);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle;
		NullCheck(L_10);
		int32_t* L_11 = (int32_t*)(&L_10->___Position);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___1_size;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_size;
		bool L_1;
		L_1 = FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_RuntimeMethod_var)));
	}

IL_0014:
	{
		uint8_t* L_3 = ___0_value;
		int32_t L_4 = ___2_offset;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_5 = __this->___Handle;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___BufferPointer;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_7 = __this->___Handle;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Position;
		int32_t L_9 = ___1_size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_8)), ((int64_t)L_9), NULL);
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_10 = __this->___Handle;
		NullCheck(L_10);
		int32_t* L_11 = (int32_t*)(&L_10->___Position);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___1_size;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		int32_t L_2 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position;
		int32_t L_7 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = __this->___Handle;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_14 = ___0_bytes;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		return (bool)0;
	}

IL_0059:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	{
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		int32_t L_2 = ___0_bytes;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_3 = __this->___Handle;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		return (bool)1;
	}
}
