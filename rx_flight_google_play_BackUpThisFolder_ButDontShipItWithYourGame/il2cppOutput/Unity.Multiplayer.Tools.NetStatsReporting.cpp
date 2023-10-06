#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>
struct EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>
struct EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>
struct EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>
struct EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>
struct EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>
struct EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>
struct EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>
struct EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>
struct EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>
struct EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IDictionary_2_tF8CD782A39E499BD52EA5A0F185CEA51AFC1DBD8;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IDictionary_2_t4B8872AF87BDCD5BAC8034637D6384CDB86E0670;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IDictionary_2_tD49526E115134676B52C79C40E01273008A30B86;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IDictionary_2_t174EBA2F70EAECFB42935872FC11660855D24EE1;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IReadOnlyDictionary_2_t7E602F68B800E9FD97AE5462BAAEB2B2A0A6A6FD;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IReadOnlyDictionary_2_t1C9E4278DD0992BFB53341CF2B1D31E871D5CB59;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IReadOnlyDictionary_2_t727071262B8B87C9F1C794CCE7F03282F35F8F4C;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IReadOnlyDictionary_2_tC190C0DF3FC65E46AC2382576C1FF9A793C41951;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IReadOnlyList_1_tACBB2E1C257871194507D0C10E16FD03C486E45A;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>
struct List_1_tD3A9E4E8C301DD2A54C55F380F6938889DF18038;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>
struct List_1_t91E12232C0FA9C18C93536C5BDA0C6DCC213C331;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>
struct List_1_t793313124D48269B853675CDDFF85F3BCC35F450;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>
struct List_1_t7D5B1FD0E20A33F0E4BF0D4DE0D23F3F7E881C32;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>
struct List_1_t0AFF4041EA61A0AC915F74A06D4827D7ADF6A39A;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>
struct List_1_t58DA500438021F3A1640423E62ECC69CEB4660EE;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>
struct List_1_tFBCDEAB74DC76D3BB34377984380797D5D9BFA4B;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>
struct List_1_t7F15ABB864EA75AB06FDD13632BB04C161794613;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>
struct List_1_tCF9244E939CA7C06FA4454C8742F8DB8CAFD2C25;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>
struct List_1_tF6F21B480A646C46174D0789CC01CD121F847AE9;
// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>
struct Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390;
// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>
struct Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>[]
struct EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>[]
struct EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>[]
struct EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>[]
struct EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>[]
struct EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>[]
struct EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>[]
struct EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>[]
struct EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>[]
struct EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7;
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>[]
struct EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F;
// Unity.Multiplayer.Tools.NetStats.Counter[]
struct CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493;
// Unity.Multiplayer.Tools.NetStats.Gauge[]
struct GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991;
// Unity.Multiplayer.Tools.NetStats.Counter
struct Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB;
// Unity.Multiplayer.Tools.NetStats.Gauge
struct Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9;
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher
struct IMetricDispatcher_t38D0C9FE3CBF91C06B20F7E4512692F6E68AD456;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder
struct MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037;
// Unity.Multiplayer.Tools.MetricObserver
struct MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205;
// Unity.Multiplayer.Tools.NoOpMetricObserver
struct NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C;
// System.String
struct String_t;
// Unity.Multiplayer.Tools.TestDataTracker
struct TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079;

IL2CPP_EXTERN_C RuntimeClass* CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectedMetricTypeExtensions_t368DEC67A1D713C796EFBD53D90D272061943079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricDispatcher_t38D0C9FE3CBF91C06B20F7E4512692F6E68AD456_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_m074461EF852729BA3FD9F181CBD936CA3058D57B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_m4E20D4CDCD01EF30F623CF5AD2552FF9D87BB9CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_m575FE08AF52209C4EA282B8AEABE979EE3A2B87B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_m5DAFF1A2C5CC8B4EC2A36A7A206053F3E03B9FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_m606C54B3AFC901E02A27A9FA91F9CE3D67DE0B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_m6278388FBA4CCA9D7AAB2FF34F0487E426FDF303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_m8DC7A7E2D50D2CC60F8E091D341EA515137118E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_mAD9DBF4E6D560AB09112765F3AF158D6A326E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_mE2F8EA140EEB8910F4F80C4E7A7A3B3C872343A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventMetric_1__ctor_mEA3EA5323CE13140EFBAE53EEE2E3D8D44063C13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mD01A534AF2D62AE5E992124005D90DEAFF5D4735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m32E7F4E8C7EB60C8A4060B365178EF3884FC9FD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_mCBBF8AC2430DFFA694FF0441D1995990E386C4D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m8B7C54BEEEC5E980E6CC4DBC32DB69F3D71A145B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mFB3CE343343C54EB57DEB58E38B21A53D7443AD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m43532C2A40C066AE4FC7322C3D98830BD477E4B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m2C0EB4BC4FB44455A0B428B9887EAD7CD9330A72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDC6CD998E18F3CD55162BB0E172E311295A3785B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mF86273B5785293B988EAAE8BAF00D4902553851C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricDispatcherBuilder_WithMetricEvents_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m56C69E46D6831095148F24151D7E6AB6A14EFBD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_RuntimeMethod_var;

struct EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258;
struct EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D;
struct EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C;
struct EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E;
struct EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227;
struct EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F;
struct EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD;
struct EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552;
struct EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7;
struct EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F;
struct CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493;
struct GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3EBE2582CCEEDAB032728DD564F7DBD8B8E859C0 
{
};

// <NetStats_TypeRegistration>
struct U3CNetStats_TypeRegistrationU3E_t9689443BB64B380835FCD2C69E303D14E961CC28  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA  : public RuntimeObject
{
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Counters
	RuntimeObject* ___m_Counters_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Gauges
	RuntimeObject* ___m_Gauges_1;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Timers
	RuntimeObject* ___m_Timers_2;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_PayloadEvents
	RuntimeObject* ___m_PayloadEvents_3;
	// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::<Metrics>k__BackingField
	RuntimeObject* ___U3CMetricsU3Ek__BackingField_4;
	// System.UInt64 Unity.Multiplayer.Tools.NetStats.MetricCollection::<ConnectionId>k__BackingField
	uint64_t ___U3CConnectionIdU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder
struct MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Counters
	RuntimeObject* ___m_Counters_0;
	// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Gauges
	RuntimeObject* ___m_Gauges_1;
	// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Timers
	RuntimeObject* ___m_Timers_2;
	// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_PayloadEvents
	RuntimeObject* ___m_PayloadEvents_3;
	// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Resettables
	List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D* ___m_Resettables_4;
};

// Unity.Multiplayer.Tools.MetricObserver
struct MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.MetricObserver::m_profilerMetricObserver
	RuntimeObject* ___m_profilerMetricObserver_0;
	// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.MetricObserver::m_rnsmMetricObserver
	RuntimeObject* ___m_rnsmMetricObserver_1;
};

// Unity.Multiplayer.Tools.MetricObserverFactory
struct MetricObserverFactory_t9F9B2B7832E97276E2A09CC857A730D3DA84BB9F  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NoOpMetricObserver
struct NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C  : public RuntimeObject
{
};

struct NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields
{
	// Unity.Multiplayer.Tools.NoOpMetricObserver Unity.Multiplayer.Tools.NoOpMetricObserver::<Instance>k__BackingField
	NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Multiplayer.Tools.RnsmMetricObserverFactory
struct RnsmMetricObserverFactory_t74D3DDC07DB50A6D4B825A90E21E2FA13240342D  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.TestDataTracker
struct TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.Counter Unity.Multiplayer.Tools.TestDataTracker::m_TransportBytesSent
	Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* ___m_TransportBytesSent_0;
	// Unity.Multiplayer.Tools.NetStats.Counter Unity.Multiplayer.Tools.TestDataTracker::m_TransportBytesReceived
	Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* ___m_TransportBytesReceived_1;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent> Unity.Multiplayer.Tools.TestDataTracker::m_NetworkMessageSentEvent
	EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* ___m_NetworkMessageSentEvent_2;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent> Unity.Multiplayer.Tools.TestDataTracker::m_NetworkMessageReceivedEvent
	EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* ___m_NetworkMessageReceivedEvent_3;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent> Unity.Multiplayer.Tools.TestDataTracker::m_NamedMessageSentEvent
	EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* ___m_NamedMessageSentEvent_4;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent> Unity.Multiplayer.Tools.TestDataTracker::m_NamedMessageReceivedEvent
	EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* ___m_NamedMessageReceivedEvent_5;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent> Unity.Multiplayer.Tools.TestDataTracker::m_UnnamedMessageSentEvent
	EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* ___m_UnnamedMessageSentEvent_6;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent> Unity.Multiplayer.Tools.TestDataTracker::m_UnnamedMessageReceivedEvent
	EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* ___m_UnnamedMessageReceivedEvent_7;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent> Unity.Multiplayer.Tools.TestDataTracker::m_NetworkVariableDeltaSentEvent
	EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* ___m_NetworkVariableDeltaSentEvent_8;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent> Unity.Multiplayer.Tools.TestDataTracker::m_NetworkVariableDeltaReceivedEvent
	EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* ___m_NetworkVariableDeltaReceivedEvent_9;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent> Unity.Multiplayer.Tools.TestDataTracker::m_OwnershipChangeSentEvent
	EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* ___m_OwnershipChangeSentEvent_10;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent> Unity.Multiplayer.Tools.TestDataTracker::m_OwnershipChangeReceivedEvent
	EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* ___m_OwnershipChangeReceivedEvent_11;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent> Unity.Multiplayer.Tools.TestDataTracker::m_ObjectSpawnSentEvent
	EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* ___m_ObjectSpawnSentEvent_12;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent> Unity.Multiplayer.Tools.TestDataTracker::m_ObjectSpawnReceivedEvent
	EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* ___m_ObjectSpawnReceivedEvent_13;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent> Unity.Multiplayer.Tools.TestDataTracker::m_ObjectDestroySentEvent
	EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* ___m_ObjectDestroySentEvent_14;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent> Unity.Multiplayer.Tools.TestDataTracker::m_ObjectDestroyReceivedEvent
	EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* ___m_ObjectDestroyReceivedEvent_15;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent> Unity.Multiplayer.Tools.TestDataTracker::m_RpcSentEvent
	EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* ___m_RpcSentEvent_16;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent> Unity.Multiplayer.Tools.TestDataTracker::m_RpcReceivedEvent
	EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* ___m_RpcReceivedEvent_17;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent> Unity.Multiplayer.Tools.TestDataTracker::m_ServerLogSentEvent
	EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* ___m_ServerLogSentEvent_18;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent> Unity.Multiplayer.Tools.TestDataTracker::m_ServerLogReceivedEvent
	EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* ___m_ServerLogReceivedEvent_19;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric> Unity.Multiplayer.Tools.TestDataTracker::m_SceneEventSentEvent
	EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* ___m_SceneEventSentEvent_20;
	// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric> Unity.Multiplayer.Tools.TestDataTracker::m_SceneEventReceivedEvent
	EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* ___m_SceneEventReceivedEvent_21;
	// Unity.Multiplayer.Tools.NetStats.Counter Unity.Multiplayer.Tools.TestDataTracker::m_PacketSentCounter
	Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* ___m_PacketSentCounter_22;
	// Unity.Multiplayer.Tools.NetStats.Counter Unity.Multiplayer.Tools.TestDataTracker::m_PacketReceivedCounter
	Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* ___m_PacketReceivedCounter_23;
	// Unity.Multiplayer.Tools.NetStats.Gauge Unity.Multiplayer.Tools.TestDataTracker::m_RttToServerGauge
	Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* ___m_RttToServerGauge_24;
	// Unity.Multiplayer.Tools.NetStats.Gauge Unity.Multiplayer.Tools.TestDataTracker::m_NetworkObjectsGauge
	Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* ___m_NetworkObjectsGauge_25;
	// Unity.Multiplayer.Tools.NetStats.Gauge Unity.Multiplayer.Tools.TestDataTracker::m_ConnectionsGauge
	Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* ___m_ConnectionsGauge_26;
	// Unity.Multiplayer.Tools.NetStats.Gauge Unity.Multiplayer.Tools.TestDataTracker::m_PacketLoss
	Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* ___m_PacketLoss_27;
	// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.TestDataTracker::<Dispatcher>k__BackingField
	RuntimeObject* ___U3CDispatcherU3Ek__BackingField_28;
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

// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo
struct ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 
{
	// System.UInt64 Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::<Id>k__BackingField
	uint64_t ___U3CIdU3Ek__BackingField_0;
};

// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo
struct DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 
{
	// Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::<DirectedMetricType>k__BackingField
	int32_t ___U3CDirectedMetricTypeU3Ek__BackingField_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.Collections.FixedBytes16
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
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
					// System.Byte Unity.Collections.FixedBytes16::byte0000
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					// System.Byte Unity.Collections.FixedBytes16::byte0001
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					// System.Byte Unity.Collections.FixedBytes16::byte0002
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					// System.Byte Unity.Collections.FixedBytes16::byte0003
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					// System.Byte Unity.Collections.FixedBytes16::byte0004
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					// System.Byte Unity.Collections.FixedBytes16::byte0005
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					// System.Byte Unity.Collections.FixedBytes16::byte0006
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					// System.Byte Unity.Collections.FixedBytes16::byte0007
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					// System.Byte Unity.Collections.FixedBytes16::byte0008
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					// System.Byte Unity.Collections.FixedBytes16::byte0009
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					// System.Byte Unity.Collections.FixedBytes16::byte0010
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					// System.Byte Unity.Collections.FixedBytes16::byte0011
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					// System.Byte Unity.Collections.FixedBytes16::byte0012
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					// System.Byte Unity.Collections.FixedBytes16::byte0013
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					// System.Byte Unity.Collections.FixedBytes16::byte0014
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					// System.Byte Unity.Collections.FixedBytes16::byte0015
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
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

// Unity.Multiplayer.Tools.NetStats.MetricId
struct MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C 
{
	// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::<TypeIndex>k__BackingField
	int32_t ___U3CTypeIndexU3Ek__BackingField_0;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::<EnumValue>k__BackingField
	int32_t ___U3CEnumValueU3Ek__BackingField_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>
struct Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_0;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<Value>k__BackingField
	double ___U3CValueU3Ek__BackingField_1;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<DefaultValue>k__BackingField
	double ___U3CDefaultValueU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.Metric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
};

// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>
struct Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_0;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<DefaultValue>k__BackingField
	int64_t ___U3CDefaultValueU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.Metric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
};

// Unity.Collections.FixedBytes126
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
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
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_7_OffsetPadding[112];
					// System.Byte Unity.Collections.FixedBytes126::byte0112
					uint8_t ___byte0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_7_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_8_OffsetPadding[113];
					// System.Byte Unity.Collections.FixedBytes126::byte0113
					uint8_t ___byte0113_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_8_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_9_OffsetPadding[114];
					// System.Byte Unity.Collections.FixedBytes126::byte0114
					uint8_t ___byte0114_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_9_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_10_OffsetPadding[115];
					// System.Byte Unity.Collections.FixedBytes126::byte0115
					uint8_t ___byte0115_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_10_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_11_OffsetPadding[116];
					// System.Byte Unity.Collections.FixedBytes126::byte0116
					uint8_t ___byte0116_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_11_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_12_OffsetPadding[117];
					// System.Byte Unity.Collections.FixedBytes126::byte0117
					uint8_t ___byte0117_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_12_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_13_OffsetPadding[118];
					// System.Byte Unity.Collections.FixedBytes126::byte0118
					uint8_t ___byte0118_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_13_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_14_OffsetPadding[119];
					// System.Byte Unity.Collections.FixedBytes126::byte0119
					uint8_t ___byte0119_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_14_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_15_OffsetPadding[120];
					// System.Byte Unity.Collections.FixedBytes126::byte0120
					uint8_t ___byte0120_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_15_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_16_OffsetPadding[121];
					// System.Byte Unity.Collections.FixedBytes126::byte0121
					uint8_t ___byte0121_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_16_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_17_OffsetPadding[122];
					// System.Byte Unity.Collections.FixedBytes126::byte0122
					uint8_t ___byte0122_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_17_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_18_OffsetPadding[123];
					// System.Byte Unity.Collections.FixedBytes126::byte0123
					uint8_t ___byte0123_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_18_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_19_OffsetPadding[124];
					// System.Byte Unity.Collections.FixedBytes126::byte0124
					uint8_t ___byte0124_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_19_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_20_OffsetPadding[125];
					// System.Byte Unity.Collections.FixedBytes126::byte0125
					uint8_t ___byte0125_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_20_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_20_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};

// Unity.Collections.FixedBytes62
struct FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A 
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
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes62::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes62::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes62::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0048_3_OffsetPadding[48];
					// System.Byte Unity.Collections.FixedBytes62::byte0048
					uint8_t ___byte0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0048_3_OffsetPadding_forAlignmentOnly[48];
					uint8_t ___byte0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0049_4_OffsetPadding[49];
					// System.Byte Unity.Collections.FixedBytes62::byte0049
					uint8_t ___byte0049_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0049_4_OffsetPadding_forAlignmentOnly[49];
					uint8_t ___byte0049_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0050_5_OffsetPadding[50];
					// System.Byte Unity.Collections.FixedBytes62::byte0050
					uint8_t ___byte0050_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0050_5_OffsetPadding_forAlignmentOnly[50];
					uint8_t ___byte0050_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0051_6_OffsetPadding[51];
					// System.Byte Unity.Collections.FixedBytes62::byte0051
					uint8_t ___byte0051_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0051_6_OffsetPadding_forAlignmentOnly[51];
					uint8_t ___byte0051_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0052_7_OffsetPadding[52];
					// System.Byte Unity.Collections.FixedBytes62::byte0052
					uint8_t ___byte0052_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0052_7_OffsetPadding_forAlignmentOnly[52];
					uint8_t ___byte0052_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0053_8_OffsetPadding[53];
					// System.Byte Unity.Collections.FixedBytes62::byte0053
					uint8_t ___byte0053_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0053_8_OffsetPadding_forAlignmentOnly[53];
					uint8_t ___byte0053_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0054_9_OffsetPadding[54];
					// System.Byte Unity.Collections.FixedBytes62::byte0054
					uint8_t ___byte0054_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0054_9_OffsetPadding_forAlignmentOnly[54];
					uint8_t ___byte0054_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0055_10_OffsetPadding[55];
					// System.Byte Unity.Collections.FixedBytes62::byte0055
					uint8_t ___byte0055_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0055_10_OffsetPadding_forAlignmentOnly[55];
					uint8_t ___byte0055_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0056_11_OffsetPadding[56];
					// System.Byte Unity.Collections.FixedBytes62::byte0056
					uint8_t ___byte0056_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0056_11_OffsetPadding_forAlignmentOnly[56];
					uint8_t ___byte0056_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0057_12_OffsetPadding[57];
					// System.Byte Unity.Collections.FixedBytes62::byte0057
					uint8_t ___byte0057_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0057_12_OffsetPadding_forAlignmentOnly[57];
					uint8_t ___byte0057_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0058_13_OffsetPadding[58];
					// System.Byte Unity.Collections.FixedBytes62::byte0058
					uint8_t ___byte0058_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0058_13_OffsetPadding_forAlignmentOnly[58];
					uint8_t ___byte0058_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0059_14_OffsetPadding[59];
					// System.Byte Unity.Collections.FixedBytes62::byte0059
					uint8_t ___byte0059_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0059_14_OffsetPadding_forAlignmentOnly[59];
					uint8_t ___byte0059_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0060_15_OffsetPadding[60];
					// System.Byte Unity.Collections.FixedBytes62::byte0060
					uint8_t ___byte0060_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0060_15_OffsetPadding_forAlignmentOnly[60];
					uint8_t ___byte0060_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0061_16_OffsetPadding[61];
					// System.Byte Unity.Collections.FixedBytes62::byte0061
					uint8_t ___byte0061_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0061_16_OffsetPadding_forAlignmentOnly[61];
					uint8_t ___byte0061_16_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A__padding[62];
	};
};

// Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes
struct NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485  : public RuntimeObject
{
};

struct NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_StaticFields
{
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkMessageSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___NetworkMessageSent_0;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkMessageReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___NetworkMessageReceived_1;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::TotalBytesSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___TotalBytesSent_2;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::TotalBytesReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___TotalBytesReceived_3;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::RpcSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___RpcSent_4;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::RpcReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___RpcReceived_5;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NamedMessageSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___NamedMessageSent_6;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NamedMessageReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___NamedMessageReceived_7;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::UnnamedMessageSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___UnnamedMessageSent_8;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::UnnamedMessageReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___UnnamedMessageReceived_9;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkVariableDeltaSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___NetworkVariableDeltaSent_10;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkVariableDeltaReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___NetworkVariableDeltaReceived_11;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectSpawnedSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___ObjectSpawnedSent_12;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectSpawnedReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___ObjectSpawnedReceived_13;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectDestroyedSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___ObjectDestroyedSent_14;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectDestroyedReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___ObjectDestroyedReceived_15;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::OwnershipChangeSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___OwnershipChangeSent_16;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::OwnershipChangeReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___OwnershipChangeReceived_17;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ServerLogSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___ServerLogSent_18;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ServerLogReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___ServerLogReceived_19;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::SceneEventSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___SceneEventSent_20;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::SceneEventReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___SceneEventReceived_21;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::PacketsSent
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___PacketsSent_22;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::PacketsReceived
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___PacketsReceived_23;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::RttToServer
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___RttToServer_24;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkObjects
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___NetworkObjects_25;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ConnectedClients
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___ConnectedClients_26;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::PacketLoss
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 ___PacketLoss_27;
};

// Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent
struct ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.LogLevel Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::<LogLevel>k__BackingField
	int32_t ___U3CLogLevelU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;
};

// Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent
struct UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_1;
};

// Unity.Multiplayer.Tools.NetStats.Counter
struct Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB  : public Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334
{
};

// Unity.Collections.FixedString128Bytes
struct FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString128Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_1;
			// Unity.Collections.FixedBytes126 Unity.Collections.FixedString128Bytes::bytes
			FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 ___bytes_2;
		};
		uint8_t FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952__padding[128];
	};
};

// Unity.Collections.FixedString64Bytes
struct FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString64Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_1;
			// Unity.Collections.FixedBytes62 Unity.Collections.FixedString64Bytes::bytes
			FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A ___bytes_2;
		};
		uint8_t FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5__padding[64];
	};
};

// Unity.Multiplayer.Tools.NetStats.Gauge
struct Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9  : public Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390
{
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>
struct EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_tD3A9E4E8C301DD2A54C55F380F6938889DF18038* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>
struct EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_t91E12232C0FA9C18C93536C5BDA0C6DCC213C331* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>
struct EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_t793313124D48269B853675CDDFF85F3BCC35F450* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>
struct EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_t7D5B1FD0E20A33F0E4BF0D4DE0D23F3F7E881C32* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>
struct EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_t0AFF4041EA61A0AC915F74A06D4827D7ADF6A39A* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>
struct EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_t58DA500438021F3A1640423E62ECC69CEB4660EE* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>
struct EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_tFBCDEAB74DC76D3BB34377984380797D5D9BFA4B* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>
struct EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_t7F15ABB864EA75AB06FDD13632BB04C161794613* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>
struct EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_tCF9244E939CA7C06FA4454C8742F8DB8CAFD2C25* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>
struct EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::m_Values
	List_1_tF6F21B480A646C46174D0789CC01CD121F847AE9* ___m_Values_0;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.EventMetric`1::<FactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CFactoryTypeNameU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
	// System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::<MaxNumberOfValues>k__BackingField
	uint32_t ___U3CMaxNumberOfValuesU3Ek__BackingField_4;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::<WentOverLimit>k__BackingField
	bool ___U3CWentOverLimitU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent
struct NamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::<Name>k__BackingField
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNameU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;
};

// Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent
struct NetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::<Name>k__BackingField
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNameU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;
};

// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier
struct NetworkObjectIdentifier_t79018FBEC2AB8A343913F3612DF24604F92E8A6D 
{
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier::<Name>k__BackingField
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNameU3Ek__BackingField_0;
	// System.UInt64 Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier::<NetworkId>k__BackingField
	uint64_t ___U3CNetworkIdU3Ek__BackingField_1;
};

// Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric
struct SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::<SceneEventType>k__BackingField
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CSceneEventTypeU3Ek__BackingField_1;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::<SceneName>k__BackingField
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CSceneNameU3Ek__BackingField_2;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_3;
};

// Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent
struct NetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t79018FBEC2AB8A343913F3612DF24604F92E8A6D ___U3CNetworkIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<Name>k__BackingField
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNameU3Ek__BackingField_2;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<NetworkBehaviourName>k__BackingField
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNetworkBehaviourNameU3Ek__BackingField_3;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_4;
};

// Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent
struct ObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t79018FBEC2AB8A343913F3612DF24604F92E8A6D ___U3CNetworkIdU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;
};

// Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent
struct ObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t79018FBEC2AB8A343913F3612DF24604F92E8A6D ___U3CNetworkIdU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;
};

// Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent
struct OwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t79018FBEC2AB8A343913F3612DF24604F92E8A6D ___U3CNetworkIdU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;
};

// Unity.Multiplayer.Tools.MetricTypes.RpcEvent
struct RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA 
{
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<Connection>k__BackingField
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t79018FBEC2AB8A343913F3612DF24604F92E8A6D ___U3CNetworkIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<Name>k__BackingField
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNameU3Ek__BackingField_2;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<NetworkBehaviourName>k__BackingField
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNetworkBehaviourNameU3Ek__BackingField_3;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Multiplayer.Tools.NetStats.Counter[]
struct CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493  : public RuntimeArray
{
	ALIGN_FIELD (8) Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* m_Items[1];

	inline Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>[]
struct EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* m_Items[1];

	inline EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>[]
struct EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* m_Items[1];

	inline EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>[]
struct EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* m_Items[1];

	inline EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>[]
struct EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* m_Items[1];

	inline EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>[]
struct EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* m_Items[1];

	inline EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>[]
struct EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* m_Items[1];

	inline EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>[]
struct EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* m_Items[1];

	inline EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>[]
struct EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* m_Items[1];

	inline EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>[]
struct EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* m_Items[1];

	inline EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>[]
struct EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552  : public RuntimeArray
{
	ALIGN_FIELD (8) EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* m_Items[1];

	inline EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.Gauge[]
struct GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991  : public RuntimeArray
{
	ALIGN_FIELD (8) Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* m_Items[1];

	inline Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::set_ShouldResetOnDispatch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_gshared_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_m8DC7A7E2D50D2CC60F8E091D341EA515137118E1_gshared (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_m4E20D4CDCD01EF30F623CF5AD2552FF9D87BB9CF_gshared (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_mAD9DBF4E6D560AB09112765F3AF158D6A326E6CE_gshared (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_mEA3EA5323CE13140EFBAE53EEE2E3D8D44063C13_gshared (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_mE2F8EA140EEB8910F4F80C4E7A7A3B3C872343A0_gshared (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_m575FE08AF52209C4EA282B8AEABE979EE3A2B87B_gshared (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_m074461EF852729BA3FD9F181CBD936CA3058D57B_gshared (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_m6278388FBA4CCA9D7AAB2FF34F0487E426FDF303_gshared (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_m5DAFF1A2C5CC8B4EC2A36A7A206053F3E03B9FC0_gshared (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1__ctor_m606C54B3AFC901E02A27A9FA91F9CE3D67DE0B98_gshared (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>::set_ShouldResetOnDispatch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_gshared_inline (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, bool ___value0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m32E7F4E8C7EB60C8A4060B365178EF3884FC9FD9_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D* ___metricEvents0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mD01A534AF2D62AE5E992124005D90DEAFF5D4735_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258* ___metricEvents0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m56C69E46D6831095148F24151D7E6AB6A14EFBD4_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F* ___metricEvents0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_mCBBF8AC2430DFFA694FF0441D1995990E386C4D2_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C* ___metricEvents0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m43532C2A40C066AE4FC7322C3D98830BD477E4B3_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F* ___metricEvents0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mFB3CE343343C54EB57DEB58E38B21A53D7443AD5_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227* ___metricEvents0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m8B7C54BEEEC5E980E6CC4DBC32DB69F3D71A145B_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E* ___metricEvents0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m2C0EB4BC4FB44455A0B428B9887EAD7CD9330A72_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD* ___metricEvents0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mF86273B5785293B988EAAE8BAF00D4902553851C_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7* ___metricEvents0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDC6CD998E18F3CD55162BB0E172E311295A3785B_gshared (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552* ___metricEvents0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7_gshared (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* __this, NetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717_gshared (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* __this, NamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0_gshared (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* __this, UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90_gshared (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* __this, NetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997_gshared (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* __this, OwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1_gshared (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* __this, ObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF_gshared (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* __this, ObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588_gshared (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* __this, RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465_gshared (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* __this, ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>::Mark(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263_gshared (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* __this, SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_gshared (const RuntimeMethod* method) ;

// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::GetId(Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836 (int32_t ___directedMetric0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Counter::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, int64_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::set_ShouldResetOnDispatch(System.Boolean)
inline void Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334*, bool, const RuntimeMethod*))Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_m8DC7A7E2D50D2CC60F8E091D341EA515137118E1 (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_m8DC7A7E2D50D2CC60F8E091D341EA515137118E1_gshared)(__this, ___id0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_m4E20D4CDCD01EF30F623CF5AD2552FF9D87BB9CF (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_m4E20D4CDCD01EF30F623CF5AD2552FF9D87BB9CF_gshared)(__this, ___id0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_mAD9DBF4E6D560AB09112765F3AF158D6A326E6CE (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_mAD9DBF4E6D560AB09112765F3AF158D6A326E6CE_gshared)(__this, ___id0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_mEA3EA5323CE13140EFBAE53EEE2E3D8D44063C13 (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_mEA3EA5323CE13140EFBAE53EEE2E3D8D44063C13_gshared)(__this, ___id0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_mE2F8EA140EEB8910F4F80C4E7A7A3B3C872343A0 (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_mE2F8EA140EEB8910F4F80C4E7A7A3B3C872343A0_gshared)(__this, ___id0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_m575FE08AF52209C4EA282B8AEABE979EE3A2B87B (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_m575FE08AF52209C4EA282B8AEABE979EE3A2B87B_gshared)(__this, ___id0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_m074461EF852729BA3FD9F181CBD936CA3058D57B (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_m074461EF852729BA3FD9F181CBD936CA3058D57B_gshared)(__this, ___id0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_m6278388FBA4CCA9D7AAB2FF34F0487E426FDF303 (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_m6278388FBA4CCA9D7AAB2FF34F0487E426FDF303_gshared)(__this, ___id0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_m5DAFF1A2C5CC8B4EC2A36A7A206053F3E03B9FC0 (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_m5DAFF1A2C5CC8B4EC2A36A7A206053F3E03B9FC0_gshared)(__this, ___id0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
inline void EventMetric_1__ctor_m606C54B3AFC901E02A27A9FA91F9CE3D67DE0B98 (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___id0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))EventMetric_1__ctor_m606C54B3AFC901E02A27A9FA91F9CE3D67DE0B98_gshared)(__this, ___id0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C DirectionalMetricInfo_get_Id_mB6CAD1B4D51D2B3C26AE69876238497DA60B5DE9 (DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Gauge::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105 (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, double ___defaultValue1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>::set_ShouldResetOnDispatch(System.Boolean)
inline void Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_inline (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390*, bool, const RuntimeMethod*))Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcherBuilder__ctor_m80893365A07A440984F93D65D9C0C12A1832745A (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithCounters(Unity.Multiplayer.Tools.NetStats.Counter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithCounters_m1B7A69395A8AC0AA9BE565B9389998CE10F9BBF6 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* ___counters0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m32E7F4E8C7EB60C8A4060B365178EF3884FC9FD9 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m32E7F4E8C7EB60C8A4060B365178EF3884FC9FD9_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mD01A534AF2D62AE5E992124005D90DEAFF5D4735 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mD01A534AF2D62AE5E992124005D90DEAFF5D4735_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m56C69E46D6831095148F24151D7E6AB6A14EFBD4 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m56C69E46D6831095148F24151D7E6AB6A14EFBD4_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_mCBBF8AC2430DFFA694FF0441D1995990E386C4D2 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_mCBBF8AC2430DFFA694FF0441D1995990E386C4D2_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m43532C2A40C066AE4FC7322C3D98830BD477E4B3 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m43532C2A40C066AE4FC7322C3D98830BD477E4B3_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mFB3CE343343C54EB57DEB58E38B21A53D7443AD5 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mFB3CE343343C54EB57DEB58E38B21A53D7443AD5_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m8B7C54BEEEC5E980E6CC4DBC32DB69F3D71A145B (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m8B7C54BEEEC5E980E6CC4DBC32DB69F3D71A145B_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m2C0EB4BC4FB44455A0B428B9887EAD7CD9330A72 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m2C0EB4BC4FB44455A0B428B9887EAD7CD9330A72_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mF86273B5785293B988EAAE8BAF00D4902553851C (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mF86273B5785293B988EAAE8BAF00D4902553851C_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
inline MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithMetricEvents_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDC6CD998E18F3CD55162BB0E172E311295A3785B (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552* ___metricEvents0, const RuntimeMethod* method)
{
	return ((  MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* (*) (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*, EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552*, const RuntimeMethod*))MetricDispatcherBuilder_WithMetricEvents_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDC6CD998E18F3CD55162BB0E172E311295A3785B_gshared)(__this, ___metricEvents0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithGauges(Unity.Multiplayer.Tools.NetStats.Gauge[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithGauges_m38E87A8E3D90DF52D90DA328C3F892317D882A63 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* ___gauges0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricDispatcherBuilder_Build_m80084EAA320C3C2E1845EEB7172B736D073AAC0D (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.TestDataTracker::get_Dispatcher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TestDataTracker_get_Dispatcher_mEA19369CB3AC0BD53E62DC37F63279A97944E782_inline (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Counter::Increment(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter_Increment_m10F204BD8C1E1BBDC08D70D221FB37B80CB62A73 (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* __this, int64_t ___increment0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>::Mark(TValue)
inline void EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7 (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* __this, NetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21 ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782*, NetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21, const RuntimeMethod*))EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>::Mark(TValue)
inline void EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717 (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* __this, NamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446*, NamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C, const RuntimeMethod*))EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>::Mark(TValue)
inline void EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0 (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* __this, UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8*, UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220, const RuntimeMethod*))EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>::Mark(TValue)
inline void EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90 (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* __this, NetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E*, NetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D, const RuntimeMethod*))EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>::Mark(TValue)
inline void EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997 (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* __this, OwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38 ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655*, OwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38, const RuntimeMethod*))EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>::Mark(TValue)
inline void EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1 (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* __this, ObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114*, ObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF, const RuntimeMethod*))EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>::Mark(TValue)
inline void EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* __this, ObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5 ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6*, ObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5, const RuntimeMethod*))EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>::Mark(TValue)
inline void EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588 (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* __this, RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD*, RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA, const RuntimeMethod*))EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>::Mark(TValue)
inline void EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465 (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* __this, ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F*, ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF, const RuntimeMethod*))EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>::Mark(TValue)
inline void EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263 (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* __this, SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F*, SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11, const RuntimeMethod*))EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263_gshared)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Gauge::Set(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gauge_Set_m6537B380248D703408B64C0F9EC5A4F8AA7C3E81 (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.MetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricObserver__ctor_m10F30E6F192E2076BFB96A14B90C802D4E4254AD (MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProfilerMetricObserverFactory_Construct_m6ABBC8031C6A462A5A2648B81DB095914F082341 (const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.RnsmMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RnsmMetricObserverFactory_Construct_m192920D108D3C75E8B062E6DD9F367E54A3325B6 (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver__ctor_mEE70C11AB39A75FB09DD286B4A9DFEDF91079AA4 (NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NoOpMetricObserver Unity.Multiplayer.Tools.NoOpMetricObserver::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* NoOpMetricObserver_get_Instance_mE28DBCD2135E7B48CB6E4116612662F40BD3F71B_inline (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>()
inline void EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>()
inline void EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>()
inline void EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>()
inline void EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>()
inline void EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>()
inline void EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>()
inline void EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>()
inline void EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>()
inline void EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>()
inline void EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_gshared)(method);
}
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
// System.Void Unity.Multiplayer.Tools.TestDataTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker__ctor_m779AB64B0164F9EE8E364B3E6332450EFBEB43B6 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectedMetricTypeExtensions_t368DEC67A1D713C796EFBD53D90D272061943079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_m074461EF852729BA3FD9F181CBD936CA3058D57B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_m4E20D4CDCD01EF30F623CF5AD2552FF9D87BB9CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_m575FE08AF52209C4EA282B8AEABE979EE3A2B87B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_m5DAFF1A2C5CC8B4EC2A36A7A206053F3E03B9FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_m606C54B3AFC901E02A27A9FA91F9CE3D67DE0B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_m6278388FBA4CCA9D7AAB2FF34F0487E426FDF303_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_m8DC7A7E2D50D2CC60F8E091D341EA515137118E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_mAD9DBF4E6D560AB09112765F3AF158D6A326E6CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_mE2F8EA140EEB8910F4F80C4E7A7A3B3C872343A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1__ctor_mEA3EA5323CE13140EFBAE53EEE2E3D8D44063C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mD01A534AF2D62AE5E992124005D90DEAFF5D4735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m32E7F4E8C7EB60C8A4060B365178EF3884FC9FD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_mCBBF8AC2430DFFA694FF0441D1995990E386C4D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m8B7C54BEEEC5E980E6CC4DBC32DB69F3D71A145B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mFB3CE343343C54EB57DEB58E38B21A53D7443AD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m43532C2A40C066AE4FC7322C3D98830BD477E4B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m2C0EB4BC4FB44455A0B428B9887EAD7CD9330A72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDC6CD998E18F3CD55162BB0E172E311295A3785B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mF86273B5785293B988EAAE8BAF00D4902553851C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_WithMetricEvents_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m56C69E46D6831095148F24151D7E6AB6A14EFBD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// readonly Counter m_TransportBytesSent = new Counter(DirectedMetricType.TotalBytesSent.GetId())
		// {
		//     ShouldResetOnDispatch = true,
		// };
		il2cpp_codegen_runtime_class_init_inline(DirectedMetricTypeExtensions_t368DEC67A1D713C796EFBD53D90D272061943079_il2cpp_TypeInfo_var);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0;
		L_0 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(6, NULL);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_1 = (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB*)il2cpp_codegen_object_new(Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF(L_1, L_0, ((int64_t)0), NULL);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_2 = L_1;
		NullCheck(L_2);
		Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_inline(L_2, (bool)1, Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_RuntimeMethod_var);
		__this->___m_TransportBytesSent_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TransportBytesSent_0), (void*)L_2);
		// readonly Counter m_TransportBytesReceived = new Counter( DirectedMetricType.TotalBytesReceived.GetId())
		// {
		//     ShouldResetOnDispatch = true,
		// };
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_3;
		L_3 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(5, NULL);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_4 = (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB*)il2cpp_codegen_object_new(Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF(L_4, L_3, ((int64_t)0), NULL);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_5 = L_4;
		NullCheck(L_5);
		Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_inline(L_5, (bool)1, Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_RuntimeMethod_var);
		__this->___m_TransportBytesReceived_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TransportBytesReceived_1), (void*)L_5);
		// readonly EventMetric<NetworkMessageEvent> m_NetworkMessageSentEvent = new EventMetric<NetworkMessageEvent>(DirectedMetricType.NetworkMessageSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_6;
		L_6 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)46), NULL);
		EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* L_7 = (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782*)il2cpp_codegen_object_new(EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventMetric_1__ctor_m8DC7A7E2D50D2CC60F8E091D341EA515137118E1(L_7, L_6, EventMetric_1__ctor_m8DC7A7E2D50D2CC60F8E091D341EA515137118E1_RuntimeMethod_var);
		__this->___m_NetworkMessageSentEvent_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NetworkMessageSentEvent_2), (void*)L_7);
		// readonly EventMetric<NetworkMessageEvent> m_NetworkMessageReceivedEvent = new EventMetric<NetworkMessageEvent>(DirectedMetricType.NetworkMessageReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_8;
		L_8 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)45), NULL);
		EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* L_9 = (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782*)il2cpp_codegen_object_new(EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventMetric_1__ctor_m8DC7A7E2D50D2CC60F8E091D341EA515137118E1(L_9, L_8, EventMetric_1__ctor_m8DC7A7E2D50D2CC60F8E091D341EA515137118E1_RuntimeMethod_var);
		__this->___m_NetworkMessageReceivedEvent_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NetworkMessageReceivedEvent_3), (void*)L_9);
		// readonly EventMetric<NamedMessageEvent> m_NamedMessageSentEvent = new EventMetric<NamedMessageEvent>(DirectedMetricType.NamedMessageSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_10;
		L_10 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)14), NULL);
		EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* L_11 = (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446*)il2cpp_codegen_object_new(EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventMetric_1__ctor_m4E20D4CDCD01EF30F623CF5AD2552FF9D87BB9CF(L_11, L_10, EventMetric_1__ctor_m4E20D4CDCD01EF30F623CF5AD2552FF9D87BB9CF_RuntimeMethod_var);
		__this->___m_NamedMessageSentEvent_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NamedMessageSentEvent_4), (void*)L_11);
		// readonly EventMetric<NamedMessageEvent> m_NamedMessageReceivedEvent = new EventMetric<NamedMessageEvent>(DirectedMetricType.NamedMessageReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_12;
		L_12 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)13), NULL);
		EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* L_13 = (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446*)il2cpp_codegen_object_new(EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventMetric_1__ctor_m4E20D4CDCD01EF30F623CF5AD2552FF9D87BB9CF(L_13, L_12, EventMetric_1__ctor_m4E20D4CDCD01EF30F623CF5AD2552FF9D87BB9CF_RuntimeMethod_var);
		__this->___m_NamedMessageReceivedEvent_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NamedMessageReceivedEvent_5), (void*)L_13);
		// readonly EventMetric<UnnamedMessageEvent> m_UnnamedMessageSentEvent = new EventMetric<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_14;
		L_14 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)18), NULL);
		EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* L_15 = (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8*)il2cpp_codegen_object_new(EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventMetric_1__ctor_mAD9DBF4E6D560AB09112765F3AF158D6A326E6CE(L_15, L_14, EventMetric_1__ctor_mAD9DBF4E6D560AB09112765F3AF158D6A326E6CE_RuntimeMethod_var);
		__this->___m_UnnamedMessageSentEvent_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnnamedMessageSentEvent_6), (void*)L_15);
		// readonly EventMetric<UnnamedMessageEvent> m_UnnamedMessageReceivedEvent = new EventMetric<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_16;
		L_16 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)17), NULL);
		EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* L_17 = (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8*)il2cpp_codegen_object_new(EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventMetric_1__ctor_mAD9DBF4E6D560AB09112765F3AF158D6A326E6CE(L_17, L_16, EventMetric_1__ctor_mAD9DBF4E6D560AB09112765F3AF158D6A326E6CE_RuntimeMethod_var);
		__this->___m_UnnamedMessageReceivedEvent_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnnamedMessageReceivedEvent_7), (void*)L_17);
		// readonly EventMetric<NetworkVariableEvent> m_NetworkVariableDeltaSentEvent = new EventMetric<NetworkVariableEvent>(DirectedMetricType.NetworkVariableDeltaSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_18;
		L_18 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)22), NULL);
		EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* L_19 = (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E*)il2cpp_codegen_object_new(EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		EventMetric_1__ctor_mEA3EA5323CE13140EFBAE53EEE2E3D8D44063C13(L_19, L_18, EventMetric_1__ctor_mEA3EA5323CE13140EFBAE53EEE2E3D8D44063C13_RuntimeMethod_var);
		__this->___m_NetworkVariableDeltaSentEvent_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NetworkVariableDeltaSentEvent_8), (void*)L_19);
		// readonly EventMetric<NetworkVariableEvent> m_NetworkVariableDeltaReceivedEvent = new EventMetric<NetworkVariableEvent>(DirectedMetricType.NetworkVariableDeltaReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_20;
		L_20 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)21), NULL);
		EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* L_21 = (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E*)il2cpp_codegen_object_new(EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		EventMetric_1__ctor_mEA3EA5323CE13140EFBAE53EEE2E3D8D44063C13(L_21, L_20, EventMetric_1__ctor_mEA3EA5323CE13140EFBAE53EEE2E3D8D44063C13_RuntimeMethod_var);
		__this->___m_NetworkVariableDeltaReceivedEvent_9 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NetworkVariableDeltaReceivedEvent_9), (void*)L_21);
		// readonly EventMetric<OwnershipChangeEvent> m_OwnershipChangeSentEvent = new EventMetric<OwnershipChangeEvent>(DirectedMetricType.OwnershipChangeSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_22;
		L_22 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)34), NULL);
		EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* L_23 = (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655*)il2cpp_codegen_object_new(EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		EventMetric_1__ctor_mE2F8EA140EEB8910F4F80C4E7A7A3B3C872343A0(L_23, L_22, EventMetric_1__ctor_mE2F8EA140EEB8910F4F80C4E7A7A3B3C872343A0_RuntimeMethod_var);
		__this->___m_OwnershipChangeSentEvent_10 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OwnershipChangeSentEvent_10), (void*)L_23);
		// readonly EventMetric<OwnershipChangeEvent> m_OwnershipChangeReceivedEvent = new EventMetric<OwnershipChangeEvent>(DirectedMetricType.OwnershipChangeReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_24;
		L_24 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)33), NULL);
		EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* L_25 = (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655*)il2cpp_codegen_object_new(EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		EventMetric_1__ctor_mE2F8EA140EEB8910F4F80C4E7A7A3B3C872343A0(L_25, L_24, EventMetric_1__ctor_mE2F8EA140EEB8910F4F80C4E7A7A3B3C872343A0_RuntimeMethod_var);
		__this->___m_OwnershipChangeReceivedEvent_11 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OwnershipChangeReceivedEvent_11), (void*)L_25);
		// readonly EventMetric<ObjectSpawnedEvent> m_ObjectSpawnSentEvent = new EventMetric<ObjectSpawnedEvent>(DirectedMetricType.ObjectSpawnedSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_26;
		L_26 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)26), NULL);
		EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* L_27 = (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114*)il2cpp_codegen_object_new(EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		EventMetric_1__ctor_m575FE08AF52209C4EA282B8AEABE979EE3A2B87B(L_27, L_26, EventMetric_1__ctor_m575FE08AF52209C4EA282B8AEABE979EE3A2B87B_RuntimeMethod_var);
		__this->___m_ObjectSpawnSentEvent_12 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectSpawnSentEvent_12), (void*)L_27);
		// readonly EventMetric<ObjectSpawnedEvent> m_ObjectSpawnReceivedEvent = new EventMetric<ObjectSpawnedEvent>(DirectedMetricType.ObjectSpawnedReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_28;
		L_28 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)25), NULL);
		EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* L_29 = (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114*)il2cpp_codegen_object_new(EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		EventMetric_1__ctor_m575FE08AF52209C4EA282B8AEABE979EE3A2B87B(L_29, L_28, EventMetric_1__ctor_m575FE08AF52209C4EA282B8AEABE979EE3A2B87B_RuntimeMethod_var);
		__this->___m_ObjectSpawnReceivedEvent_13 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectSpawnReceivedEvent_13), (void*)L_29);
		// readonly EventMetric<ObjectDestroyedEvent> m_ObjectDestroySentEvent = new EventMetric<ObjectDestroyedEvent>(DirectedMetricType.ObjectDestroyedSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_30;
		L_30 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)30), NULL);
		EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* L_31 = (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6*)il2cpp_codegen_object_new(EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		EventMetric_1__ctor_m074461EF852729BA3FD9F181CBD936CA3058D57B(L_31, L_30, EventMetric_1__ctor_m074461EF852729BA3FD9F181CBD936CA3058D57B_RuntimeMethod_var);
		__this->___m_ObjectDestroySentEvent_14 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectDestroySentEvent_14), (void*)L_31);
		// readonly EventMetric<ObjectDestroyedEvent> m_ObjectDestroyReceivedEvent = new EventMetric<ObjectDestroyedEvent>(DirectedMetricType.ObjectDestroyedReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_32;
		L_32 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)29), NULL);
		EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* L_33 = (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6*)il2cpp_codegen_object_new(EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		EventMetric_1__ctor_m074461EF852729BA3FD9F181CBD936CA3058D57B(L_33, L_32, EventMetric_1__ctor_m074461EF852729BA3FD9F181CBD936CA3058D57B_RuntimeMethod_var);
		__this->___m_ObjectDestroyReceivedEvent_15 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectDestroyReceivedEvent_15), (void*)L_33);
		// readonly EventMetric<RpcEvent> m_RpcSentEvent = new EventMetric<RpcEvent>(DirectedMetricType.RpcSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_34;
		L_34 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)10), NULL);
		EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* L_35 = (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD*)il2cpp_codegen_object_new(EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		EventMetric_1__ctor_m6278388FBA4CCA9D7AAB2FF34F0487E426FDF303(L_35, L_34, EventMetric_1__ctor_m6278388FBA4CCA9D7AAB2FF34F0487E426FDF303_RuntimeMethod_var);
		__this->___m_RpcSentEvent_16 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RpcSentEvent_16), (void*)L_35);
		// readonly EventMetric<RpcEvent> m_RpcReceivedEvent = new EventMetric<RpcEvent>(DirectedMetricType.RpcReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_36;
		L_36 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)9), NULL);
		EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* L_37 = (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD*)il2cpp_codegen_object_new(EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		EventMetric_1__ctor_m6278388FBA4CCA9D7AAB2FF34F0487E426FDF303(L_37, L_36, EventMetric_1__ctor_m6278388FBA4CCA9D7AAB2FF34F0487E426FDF303_RuntimeMethod_var);
		__this->___m_RpcReceivedEvent_17 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RpcReceivedEvent_17), (void*)L_37);
		// readonly EventMetric<ServerLogEvent> m_ServerLogSentEvent = new EventMetric<ServerLogEvent>(DirectedMetricType.ServerLogSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_38;
		L_38 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)38), NULL);
		EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* L_39 = (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F*)il2cpp_codegen_object_new(EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		EventMetric_1__ctor_m5DAFF1A2C5CC8B4EC2A36A7A206053F3E03B9FC0(L_39, L_38, EventMetric_1__ctor_m5DAFF1A2C5CC8B4EC2A36A7A206053F3E03B9FC0_RuntimeMethod_var);
		__this->___m_ServerLogSentEvent_18 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerLogSentEvent_18), (void*)L_39);
		// readonly EventMetric<ServerLogEvent> m_ServerLogReceivedEvent = new EventMetric<ServerLogEvent>(DirectedMetricType.ServerLogReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_40;
		L_40 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)37), NULL);
		EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* L_41 = (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F*)il2cpp_codegen_object_new(EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		EventMetric_1__ctor_m5DAFF1A2C5CC8B4EC2A36A7A206053F3E03B9FC0(L_41, L_40, EventMetric_1__ctor_m5DAFF1A2C5CC8B4EC2A36A7A206053F3E03B9FC0_RuntimeMethod_var);
		__this->___m_ServerLogReceivedEvent_19 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerLogReceivedEvent_19), (void*)L_41);
		// readonly EventMetric<SceneEventMetric> m_SceneEventSentEvent = new EventMetric<SceneEventMetric>(DirectedMetricType.SceneEventSent.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_42;
		L_42 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)42), NULL);
		EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* L_43 = (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F*)il2cpp_codegen_object_new(EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		EventMetric_1__ctor_m606C54B3AFC901E02A27A9FA91F9CE3D67DE0B98(L_43, L_42, EventMetric_1__ctor_m606C54B3AFC901E02A27A9FA91F9CE3D67DE0B98_RuntimeMethod_var);
		__this->___m_SceneEventSentEvent_20 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SceneEventSentEvent_20), (void*)L_43);
		// readonly EventMetric<SceneEventMetric> m_SceneEventReceivedEvent = new EventMetric<SceneEventMetric>(DirectedMetricType.SceneEventReceived.GetId());
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_44;
		L_44 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)41), NULL);
		EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* L_45 = (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F*)il2cpp_codegen_object_new(EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		EventMetric_1__ctor_m606C54B3AFC901E02A27A9FA91F9CE3D67DE0B98(L_45, L_44, EventMetric_1__ctor_m606C54B3AFC901E02A27A9FA91F9CE3D67DE0B98_RuntimeMethod_var);
		__this->___m_SceneEventReceivedEvent_21 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SceneEventReceivedEvent_21), (void*)L_45);
		// private readonly Counter m_PacketSentCounter = new Counter(NetworkMetricTypes.PacketsSent.Id)
		// {
		//     ShouldResetOnDispatch = true,
		// };
		il2cpp_codegen_runtime_class_init_inline(NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_il2cpp_TypeInfo_var);
		DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 L_46 = ((NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_il2cpp_TypeInfo_var))->___PacketsSent_22;
		V_0 = L_46;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_47;
		L_47 = DirectionalMetricInfo_get_Id_mB6CAD1B4D51D2B3C26AE69876238497DA60B5DE9((&V_0), NULL);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_48 = (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB*)il2cpp_codegen_object_new(Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF(L_48, L_47, ((int64_t)0), NULL);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_49 = L_48;
		NullCheck(L_49);
		Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_inline(L_49, (bool)1, Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_RuntimeMethod_var);
		__this->___m_PacketSentCounter_22 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PacketSentCounter_22), (void*)L_49);
		// private readonly Counter m_PacketReceivedCounter = new Counter(NetworkMetricTypes.PacketsReceived.Id)
		// {
		//     ShouldResetOnDispatch = true,
		// };
		DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 L_50 = ((NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_il2cpp_TypeInfo_var))->___PacketsReceived_23;
		V_0 = L_50;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_51;
		L_51 = DirectionalMetricInfo_get_Id_mB6CAD1B4D51D2B3C26AE69876238497DA60B5DE9((&V_0), NULL);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_52 = (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB*)il2cpp_codegen_object_new(Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF(L_52, L_51, ((int64_t)0), NULL);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_53 = L_52;
		NullCheck(L_53);
		Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_inline(L_53, (bool)1, Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_RuntimeMethod_var);
		__this->___m_PacketReceivedCounter_23 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PacketReceivedCounter_23), (void*)L_53);
		// private readonly Gauge m_RttToServerGauge = new Gauge(NetworkMetricTypes.RttToServer.Id)
		// {
		//     ShouldResetOnDispatch = true,
		// };
		DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 L_54 = ((NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_il2cpp_TypeInfo_var))->___RttToServer_24;
		V_0 = L_54;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_55;
		L_55 = DirectionalMetricInfo_get_Id_mB6CAD1B4D51D2B3C26AE69876238497DA60B5DE9((&V_0), NULL);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_56 = (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9*)il2cpp_codegen_object_new(Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105(L_56, L_55, (0.0), NULL);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_57 = L_56;
		NullCheck(L_57);
		Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_inline(L_57, (bool)1, Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_RuntimeMethod_var);
		__this->___m_RttToServerGauge_24 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RttToServerGauge_24), (void*)L_57);
		// readonly Gauge m_NetworkObjectsGauge = new Gauge(NetworkMetricTypes.NetworkObjects.Id)
		// {
		//     ShouldResetOnDispatch = true,
		// };
		DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 L_58 = ((NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_il2cpp_TypeInfo_var))->___NetworkObjects_25;
		V_0 = L_58;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_59;
		L_59 = DirectionalMetricInfo_get_Id_mB6CAD1B4D51D2B3C26AE69876238497DA60B5DE9((&V_0), NULL);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_60 = (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9*)il2cpp_codegen_object_new(Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105(L_60, L_59, (0.0), NULL);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_61 = L_60;
		NullCheck(L_61);
		Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_inline(L_61, (bool)1, Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_RuntimeMethod_var);
		__this->___m_NetworkObjectsGauge_25 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NetworkObjectsGauge_25), (void*)L_61);
		// readonly Gauge m_ConnectionsGauge = new Gauge(NetworkMetricTypes.ConnectedClients.Id)
		// {
		//     ShouldResetOnDispatch = true,
		// };
		DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 L_62 = ((NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_il2cpp_TypeInfo_var))->___ConnectedClients_26;
		V_0 = L_62;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_63;
		L_63 = DirectionalMetricInfo_get_Id_mB6CAD1B4D51D2B3C26AE69876238497DA60B5DE9((&V_0), NULL);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_64 = (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9*)il2cpp_codegen_object_new(Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105(L_64, L_63, (0.0), NULL);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_65 = L_64;
		NullCheck(L_65);
		Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_inline(L_65, (bool)1, Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_RuntimeMethod_var);
		__this->___m_ConnectionsGauge_26 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConnectionsGauge_26), (void*)L_65);
		// readonly Gauge m_PacketLoss = new Gauge(NetworkMetricTypes.PacketLoss.Id)
		// {
		//     ShouldResetOnDispatch = true,
		// };
		DirectionalMetricInfo_tD82862CF760F405C05583DF1C52C09AEB45D3900 L_66 = ((NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t1D66A14B935EDC37C3D12EB6879A8A1F7051F485_il2cpp_TypeInfo_var))->___PacketLoss_27;
		V_0 = L_66;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_67;
		L_67 = DirectionalMetricInfo_get_Id_mB6CAD1B4D51D2B3C26AE69876238497DA60B5DE9((&V_0), NULL);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_68 = (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9*)il2cpp_codegen_object_new(Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105(L_68, L_67, (0.0), NULL);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_69 = L_68;
		NullCheck(L_69);
		Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_inline(L_69, (bool)1, Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_RuntimeMethod_var);
		__this->___m_PacketLoss_27 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PacketLoss_27), (void*)L_69);
		// public TestDataTracker()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Dispatcher = new MetricDispatcherBuilder()
		//     .WithCounters(m_TransportBytesSent, m_TransportBytesReceived)
		//     .WithMetricEvents(m_NetworkMessageSentEvent, m_NetworkMessageReceivedEvent)
		//     .WithMetricEvents(m_NamedMessageSentEvent, m_NamedMessageReceivedEvent)
		//     .WithMetricEvents(m_UnnamedMessageSentEvent, m_UnnamedMessageReceivedEvent)
		//     .WithMetricEvents(m_NetworkVariableDeltaSentEvent, m_NetworkVariableDeltaReceivedEvent)
		//     .WithMetricEvents(m_OwnershipChangeSentEvent, m_OwnershipChangeReceivedEvent)
		//     .WithMetricEvents(m_ObjectSpawnSentEvent, m_ObjectSpawnReceivedEvent)
		//     .WithMetricEvents(m_ObjectDestroySentEvent, m_ObjectDestroyReceivedEvent)
		//     .WithMetricEvents(m_RpcSentEvent, m_RpcReceivedEvent)
		//     .WithMetricEvents(m_ServerLogSentEvent, m_ServerLogReceivedEvent)
		//     .WithMetricEvents(m_SceneEventSentEvent, m_SceneEventReceivedEvent)
		//     .WithCounters(m_PacketSentCounter, m_PacketReceivedCounter)
		//     .WithGauges(m_RttToServerGauge)
		//     .WithGauges(m_NetworkObjectsGauge)
		//     .WithGauges(m_ConnectionsGauge)
		//     .WithGauges(m_PacketLoss)
		//     .Build();
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_70 = (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037*)il2cpp_codegen_object_new(MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		MetricDispatcherBuilder__ctor_m80893365A07A440984F93D65D9C0C12A1832745A(L_70, NULL);
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_71 = (CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493*)(CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493*)SZArrayNew(CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493_il2cpp_TypeInfo_var, (uint32_t)2);
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_72 = L_71;
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_73 = __this->___m_TransportBytesSent_0;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_73);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB*)L_73);
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_74 = L_72;
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_75 = __this->___m_TransportBytesReceived_1;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_75);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB*)L_75);
		NullCheck(L_70);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_76;
		L_76 = MetricDispatcherBuilder_WithCounters_m1B7A69395A8AC0AA9BE565B9389998CE10F9BBF6(L_70, L_74, NULL);
		EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D* L_77 = (EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D*)(EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D*)SZArrayNew(EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D* L_78 = L_77;
		EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* L_79 = __this->___m_NetworkMessageSentEvent_2;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_79);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782*)L_79);
		EventMetric_1U5BU5D_tAB8CA75262F2D0A2B364AD8AFAA8DBBFD81AC86D* L_80 = L_78;
		EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* L_81 = __this->___m_NetworkMessageReceivedEvent_3;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_81);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782*)L_81);
		NullCheck(L_76);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_82;
		L_82 = MetricDispatcherBuilder_WithMetricEvents_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m32E7F4E8C7EB60C8A4060B365178EF3884FC9FD9(L_76, L_80, MetricDispatcherBuilder_WithMetricEvents_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m32E7F4E8C7EB60C8A4060B365178EF3884FC9FD9_RuntimeMethod_var);
		EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258* L_83 = (EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258*)(EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258*)SZArrayNew(EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258* L_84 = L_83;
		EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* L_85 = __this->___m_NamedMessageSentEvent_4;
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_85);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446*)L_85);
		EventMetric_1U5BU5D_t0851AF7FD676831A227D420F86E6C4EA5D870258* L_86 = L_84;
		EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* L_87 = __this->___m_NamedMessageReceivedEvent_5;
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_87);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446*)L_87);
		NullCheck(L_82);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_88;
		L_88 = MetricDispatcherBuilder_WithMetricEvents_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mD01A534AF2D62AE5E992124005D90DEAFF5D4735(L_82, L_86, MetricDispatcherBuilder_WithMetricEvents_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mD01A534AF2D62AE5E992124005D90DEAFF5D4735_RuntimeMethod_var);
		EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F* L_89 = (EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F*)(EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F*)SZArrayNew(EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F* L_90 = L_89;
		EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* L_91 = __this->___m_UnnamedMessageSentEvent_6;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_91);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8*)L_91);
		EventMetric_1U5BU5D_t1C482C75248EE52A84FCC67CBD94059BC882B02F* L_92 = L_90;
		EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* L_93 = __this->___m_UnnamedMessageReceivedEvent_7;
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_93);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8*)L_93);
		NullCheck(L_88);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_94;
		L_94 = MetricDispatcherBuilder_WithMetricEvents_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m56C69E46D6831095148F24151D7E6AB6A14EFBD4(L_88, L_92, MetricDispatcherBuilder_WithMetricEvents_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m56C69E46D6831095148F24151D7E6AB6A14EFBD4_RuntimeMethod_var);
		EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C* L_95 = (EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C*)(EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C*)SZArrayNew(EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C* L_96 = L_95;
		EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* L_97 = __this->___m_NetworkVariableDeltaSentEvent_8;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_97);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E*)L_97);
		EventMetric_1U5BU5D_t16E7A0C6BBBD040E42C6DE391E8542AFDEFFB21C* L_98 = L_96;
		EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* L_99 = __this->___m_NetworkVariableDeltaReceivedEvent_9;
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, L_99);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E*)L_99);
		NullCheck(L_94);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_100;
		L_100 = MetricDispatcherBuilder_WithMetricEvents_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_mCBBF8AC2430DFFA694FF0441D1995990E386C4D2(L_94, L_98, MetricDispatcherBuilder_WithMetricEvents_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_mCBBF8AC2430DFFA694FF0441D1995990E386C4D2_RuntimeMethod_var);
		EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F* L_101 = (EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F*)(EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F*)SZArrayNew(EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F* L_102 = L_101;
		EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* L_103 = __this->___m_OwnershipChangeSentEvent_10;
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, L_103);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655*)L_103);
		EventMetric_1U5BU5D_t99641B6C24E2F32E25D56BFF2FFEC4881ACDCF2F* L_104 = L_102;
		EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* L_105 = __this->___m_OwnershipChangeReceivedEvent_11;
		NullCheck(L_104);
		ArrayElementTypeCheck (L_104, L_105);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655*)L_105);
		NullCheck(L_100);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_106;
		L_106 = MetricDispatcherBuilder_WithMetricEvents_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m43532C2A40C066AE4FC7322C3D98830BD477E4B3(L_100, L_104, MetricDispatcherBuilder_WithMetricEvents_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m43532C2A40C066AE4FC7322C3D98830BD477E4B3_RuntimeMethod_var);
		EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227* L_107 = (EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227*)(EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227*)SZArrayNew(EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227* L_108 = L_107;
		EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* L_109 = __this->___m_ObjectSpawnSentEvent_12;
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_109);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114*)L_109);
		EventMetric_1U5BU5D_t3AA72A8B1294295A07BA55D66767E92E9F861227* L_110 = L_108;
		EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* L_111 = __this->___m_ObjectSpawnReceivedEvent_13;
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, L_111);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114*)L_111);
		NullCheck(L_106);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_112;
		L_112 = MetricDispatcherBuilder_WithMetricEvents_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mFB3CE343343C54EB57DEB58E38B21A53D7443AD5(L_106, L_110, MetricDispatcherBuilder_WithMetricEvents_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mFB3CE343343C54EB57DEB58E38B21A53D7443AD5_RuntimeMethod_var);
		EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E* L_113 = (EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E*)(EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E*)SZArrayNew(EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E* L_114 = L_113;
		EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* L_115 = __this->___m_ObjectDestroySentEvent_14;
		NullCheck(L_114);
		ArrayElementTypeCheck (L_114, L_115);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6*)L_115);
		EventMetric_1U5BU5D_t74D073F8F25BB6D2278A3C5478B573CCFFD3C92E* L_116 = L_114;
		EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* L_117 = __this->___m_ObjectDestroyReceivedEvent_15;
		NullCheck(L_116);
		ArrayElementTypeCheck (L_116, L_117);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6*)L_117);
		NullCheck(L_112);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_118;
		L_118 = MetricDispatcherBuilder_WithMetricEvents_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m8B7C54BEEEC5E980E6CC4DBC32DB69F3D71A145B(L_112, L_116, MetricDispatcherBuilder_WithMetricEvents_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m8B7C54BEEEC5E980E6CC4DBC32DB69F3D71A145B_RuntimeMethod_var);
		EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD* L_119 = (EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD*)(EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD*)SZArrayNew(EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD* L_120 = L_119;
		EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* L_121 = __this->___m_RpcSentEvent_16;
		NullCheck(L_120);
		ArrayElementTypeCheck (L_120, L_121);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD*)L_121);
		EventMetric_1U5BU5D_tF45F6CA41AD99D426413068BE8FF8FC2DF8D17BD* L_122 = L_120;
		EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* L_123 = __this->___m_RpcReceivedEvent_17;
		NullCheck(L_122);
		ArrayElementTypeCheck (L_122, L_123);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD*)L_123);
		NullCheck(L_118);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_124;
		L_124 = MetricDispatcherBuilder_WithMetricEvents_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m2C0EB4BC4FB44455A0B428B9887EAD7CD9330A72(L_118, L_122, MetricDispatcherBuilder_WithMetricEvents_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m2C0EB4BC4FB44455A0B428B9887EAD7CD9330A72_RuntimeMethod_var);
		EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7* L_125 = (EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7*)(EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7*)SZArrayNew(EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7* L_126 = L_125;
		EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* L_127 = __this->___m_ServerLogSentEvent_18;
		NullCheck(L_126);
		ArrayElementTypeCheck (L_126, L_127);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F*)L_127);
		EventMetric_1U5BU5D_tF97DD5C55DF600416741427330BC80A683BBC1A7* L_128 = L_126;
		EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* L_129 = __this->___m_ServerLogReceivedEvent_19;
		NullCheck(L_128);
		ArrayElementTypeCheck (L_128, L_129);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F*)L_129);
		NullCheck(L_124);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_130;
		L_130 = MetricDispatcherBuilder_WithMetricEvents_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mF86273B5785293B988EAAE8BAF00D4902553851C(L_124, L_128, MetricDispatcherBuilder_WithMetricEvents_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mF86273B5785293B988EAAE8BAF00D4902553851C_RuntimeMethod_var);
		EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552* L_131 = (EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552*)(EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552*)SZArrayNew(EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552_il2cpp_TypeInfo_var, (uint32_t)2);
		EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552* L_132 = L_131;
		EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* L_133 = __this->___m_SceneEventSentEvent_20;
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, L_133);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F*)L_133);
		EventMetric_1U5BU5D_t11E7AC5B31A7A3B453F92E5C4BD4FC302437D552* L_134 = L_132;
		EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* L_135 = __this->___m_SceneEventReceivedEvent_21;
		NullCheck(L_134);
		ArrayElementTypeCheck (L_134, L_135);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(1), (EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F*)L_135);
		NullCheck(L_130);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_136;
		L_136 = MetricDispatcherBuilder_WithMetricEvents_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDC6CD998E18F3CD55162BB0E172E311295A3785B(L_130, L_134, MetricDispatcherBuilder_WithMetricEvents_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDC6CD998E18F3CD55162BB0E172E311295A3785B_RuntimeMethod_var);
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_137 = (CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493*)(CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493*)SZArrayNew(CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493_il2cpp_TypeInfo_var, (uint32_t)2);
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_138 = L_137;
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_139 = __this->___m_PacketSentCounter_22;
		NullCheck(L_138);
		ArrayElementTypeCheck (L_138, L_139);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(0), (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB*)L_139);
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_140 = L_138;
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_141 = __this->___m_PacketReceivedCounter_23;
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, L_141);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(1), (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB*)L_141);
		NullCheck(L_136);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_142;
		L_142 = MetricDispatcherBuilder_WithCounters_m1B7A69395A8AC0AA9BE565B9389998CE10F9BBF6(L_136, L_140, NULL);
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_143 = (GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991*)(GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991*)SZArrayNew(GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991_il2cpp_TypeInfo_var, (uint32_t)1);
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_144 = L_143;
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_145 = __this->___m_RttToServerGauge_24;
		NullCheck(L_144);
		ArrayElementTypeCheck (L_144, L_145);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(0), (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9*)L_145);
		NullCheck(L_142);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_146;
		L_146 = MetricDispatcherBuilder_WithGauges_m38E87A8E3D90DF52D90DA328C3F892317D882A63(L_142, L_144, NULL);
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_147 = (GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991*)(GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991*)SZArrayNew(GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991_il2cpp_TypeInfo_var, (uint32_t)1);
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_148 = L_147;
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_149 = __this->___m_NetworkObjectsGauge_25;
		NullCheck(L_148);
		ArrayElementTypeCheck (L_148, L_149);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(0), (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9*)L_149);
		NullCheck(L_146);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_150;
		L_150 = MetricDispatcherBuilder_WithGauges_m38E87A8E3D90DF52D90DA328C3F892317D882A63(L_146, L_148, NULL);
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_151 = (GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991*)(GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991*)SZArrayNew(GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991_il2cpp_TypeInfo_var, (uint32_t)1);
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_152 = L_151;
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_153 = __this->___m_ConnectionsGauge_26;
		NullCheck(L_152);
		ArrayElementTypeCheck (L_152, L_153);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(0), (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9*)L_153);
		NullCheck(L_150);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_154;
		L_154 = MetricDispatcherBuilder_WithGauges_m38E87A8E3D90DF52D90DA328C3F892317D882A63(L_150, L_152, NULL);
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_155 = (GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991*)(GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991*)SZArrayNew(GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991_il2cpp_TypeInfo_var, (uint32_t)1);
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_156 = L_155;
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_157 = __this->___m_PacketLoss_27;
		NullCheck(L_156);
		ArrayElementTypeCheck (L_156, L_157);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(0), (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9*)L_157);
		NullCheck(L_154);
		MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* L_158;
		L_158 = MetricDispatcherBuilder_WithGauges_m38E87A8E3D90DF52D90DA328C3F892317D882A63(L_154, L_156, NULL);
		NullCheck(L_158);
		RuntimeObject* L_159;
		L_159 = MetricDispatcherBuilder_Build_m80084EAA320C3C2E1845EEB7172B736D073AAC0D(L_158, NULL);
		__this->___U3CDispatcherU3Ek__BackingField_28 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDispatcherU3Ek__BackingField_28), (void*)L_159);
		// }
		return;
	}
}
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.TestDataTracker::get_Dispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestDataTracker_get_Dispatcher_mEA19369CB3AC0BD53E62DC37F63279A97944E782 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, const RuntimeMethod* method) 
{
	{
		// public IMetricDispatcher Dispatcher { get; }
		RuntimeObject* L_0 = __this->___U3CDispatcherU3Ek__BackingField_28;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::SetConnectionId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_SetConnectionId_m03622FAC8BB8FE2EBBB2699FC8331570601D6A68 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, uint64_t ___connectionId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricDispatcher_t38D0C9FE3CBF91C06B20F7E4512692F6E68AD456_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispatcher.SetConnectionId(connectionId);
		RuntimeObject* L_0;
		L_0 = TestDataTracker_get_Dispatcher_mEA19369CB3AC0BD53E62DC37F63279A97944E782_inline(__this, NULL);
		uint64_t L_1 = ___connectionId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(1 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::SetConnectionId(System.UInt64) */, IMetricDispatcher_t38D0C9FE3CBF91C06B20F7E4512692F6E68AD456_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackTransportBytesSent(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackTransportBytesSent_m73044825C5AEF2803AB64F615E20610784987AD7 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, int64_t ___bytesCount0, const RuntimeMethod* method) 
{
	{
		// m_TransportBytesSent.Increment(bytesCount);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_0 = __this->___m_TransportBytesSent_0;
		int64_t L_1 = ___bytesCount0;
		NullCheck(L_0);
		Counter_Increment_m10F204BD8C1E1BBDC08D70D221FB37B80CB62A73(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackTransportBytesReceived(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackTransportBytesReceived_m7CC06CBD40E0F764B725DCE135C3B5BEE1573FD5 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, int64_t ___bytesCount0, const RuntimeMethod* method) 
{
	{
		// m_TransportBytesReceived.Increment(bytesCount);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_0 = __this->___m_TransportBytesReceived_1;
		int64_t L_1 = ___bytesCount0;
		NullCheck(L_0);
		Counter_Increment_m10F204BD8C1E1BBDC08D70D221FB37B80CB62A73(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackNetworkMessageSent(Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackNetworkMessageSent_m33C7CA4F17EE85D254ADF13A5BC8B49293AEF72C (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, NetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21 ___networkMessageEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NetworkMessageSentEvent.Mark(networkMessageEvent);
		EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* L_0 = __this->___m_NetworkMessageSentEvent_2;
		NetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21 L_1 = ___networkMessageEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7(L_0, L_1, EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackNetworkMessageReceived(Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackNetworkMessageReceived_m0B04B247289E09D363739A8C52360EACC91BFC39 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, NetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21 ___networkMessageEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NetworkMessageReceivedEvent.Mark(networkMessageEvent);
		EventMetric_1_t560568F3EA227904E4F280F639D538813E4E9782* L_0 = __this->___m_NetworkMessageReceivedEvent_3;
		NetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21 L_1 = ___networkMessageEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7(L_0, L_1, EventMetric_1_Mark_mB4331162B43048DCEE41E9399DE4985274E991F7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackNamedMessageSent(Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackNamedMessageSent_m0BFF2856327DD83CDF885A942EEF72AF061CC719 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, NamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C ___namedMessageEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NamedMessageSentEvent.Mark(namedMessageEvent);
		EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* L_0 = __this->___m_NamedMessageSentEvent_4;
		NamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C L_1 = ___namedMessageEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717(L_0, L_1, EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackNamedMessageReceived(Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackNamedMessageReceived_m9DC9D9E862FE2281FD87601EDD5D4ED27D027DCF (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, NamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C ___namedMessageEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NamedMessageReceivedEvent.Mark(namedMessageEvent);
		EventMetric_1_t4DE8ED7405E4268D6F96EB723A795A3F33F3D446* L_0 = __this->___m_NamedMessageReceivedEvent_5;
		NamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C L_1 = ___namedMessageEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717(L_0, L_1, EventMetric_1_Mark_mACF5C3846DD3FA1DDF3773489784854217876717_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackUnnamedMessageSent(Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackUnnamedMessageSent_mD4A8311C19FAC4159AAACDCCD06E9927A870F3C0 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 ___unnamedMessageEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_UnnamedMessageSentEvent.Mark(unnamedMessageEvent);
		EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* L_0 = __this->___m_UnnamedMessageSentEvent_6;
		UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 L_1 = ___unnamedMessageEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0(L_0, L_1, EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackUnnamedMessageReceived(Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackUnnamedMessageReceived_m97D8F5D12917902E1AC6775A1BA067A046B8C81C (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 ___unnamedMessageEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_UnnamedMessageReceivedEvent.Mark(unnamedMessageEvent);
		EventMetric_1_t963563329F7A8BF0D9127CD749623093EE8F35A8* L_0 = __this->___m_UnnamedMessageReceivedEvent_7;
		UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 L_1 = ___unnamedMessageEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0(L_0, L_1, EventMetric_1_Mark_m177F290B398D4C3645562687A13CD5B3C5D38FC0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackNetworkVariableDeltaSent(Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackNetworkVariableDeltaSent_m7D2F8D35E5237C46BB2B3EA13C6721CAEDE39597 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, NetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D ___networkVariableEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NetworkVariableDeltaSentEvent.Mark(networkVariableEvent);
		EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* L_0 = __this->___m_NetworkVariableDeltaSentEvent_8;
		NetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D L_1 = ___networkVariableEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90(L_0, L_1, EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackNetworkVariableDeltaReceived(Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackNetworkVariableDeltaReceived_m8D37ABFF9A4FEEF8D8EEEEEAEDE4F7671833D115 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, NetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D ___networkVariableEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NetworkVariableDeltaReceivedEvent.Mark(networkVariableEvent);
		EventMetric_1_t4693140B823A56FD8BBB23E3EE381863EDC7731E* L_0 = __this->___m_NetworkVariableDeltaReceivedEvent_9;
		NetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D L_1 = ___networkVariableEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90(L_0, L_1, EventMetric_1_Mark_m1864F2C30D276981A08F758B23443395115B1D90_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackOwnershipChangeSent(Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackOwnershipChangeSent_mFEBAA4AB7714A11283A40D74ECDFA8BAE4A0921D (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, OwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38 ___ownershipChangeEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_OwnershipChangeSentEvent.Mark(ownershipChangeEvent);
		EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* L_0 = __this->___m_OwnershipChangeSentEvent_10;
		OwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38 L_1 = ___ownershipChangeEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997(L_0, L_1, EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackOwnershipChangeReceived(Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackOwnershipChangeReceived_m5D823CA99640F0B1B89D012E4761EE726197D5A7 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, OwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38 ___ownershipChangeEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_OwnershipChangeReceivedEvent.Mark(ownershipChangeEvent);
		EventMetric_1_tBAC3DC33D33679962E9126727F449B2C1EA8C655* L_0 = __this->___m_OwnershipChangeReceivedEvent_11;
		OwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38 L_1 = ___ownershipChangeEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997(L_0, L_1, EventMetric_1_Mark_m359A3412D91F7ABCBDA69F44F8EB9F6442172997_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackObjectSpawnSent(Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackObjectSpawnSent_m4048748A536E303E97B0CE9DBF482B9E0E1095FC (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, ObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF ___objectSpawnedEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ObjectSpawnSentEvent.Mark(objectSpawnedEvent);
		EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* L_0 = __this->___m_ObjectSpawnSentEvent_12;
		ObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF L_1 = ___objectSpawnedEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1(L_0, L_1, EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackObjectSpawnReceived(Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackObjectSpawnReceived_m1970A051113CD67847E89EDE59B4B0970BCF3885 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, ObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF ___objectSpawnedEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ObjectSpawnReceivedEvent.Mark(objectSpawnedEvent);
		EventMetric_1_t55CD23A95F11E5709BB1A1DB7ABD7B3B0E244114* L_0 = __this->___m_ObjectSpawnReceivedEvent_13;
		ObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF L_1 = ___objectSpawnedEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1(L_0, L_1, EventMetric_1_Mark_m6B3CB87C654DF4E433B0296FF8CE5D30D82769C1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackObjectDestroySent(Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackObjectDestroySent_m4C0C6AD0FF569294CFC686CA7DF1E3BB449E5AF5 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, ObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5 ___objectDestroyedEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ObjectDestroySentEvent.Mark(objectDestroyedEvent);
		EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* L_0 = __this->___m_ObjectDestroySentEvent_14;
		ObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5 L_1 = ___objectDestroyedEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF(L_0, L_1, EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackObjectDestroyReceived(Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackObjectDestroyReceived_m0A4CC6D650E5C8743CFA13A4574432557CBF8E5B (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, ObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5 ___objectDestroyedEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ObjectDestroyReceivedEvent.Mark(objectDestroyedEvent);
		EventMetric_1_t1EF15E7AF86C4A5F0129C717C1E1D7049F716BF6* L_0 = __this->___m_ObjectDestroyReceivedEvent_15;
		ObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5 L_1 = ___objectDestroyedEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF(L_0, L_1, EventMetric_1_Mark_m50DD8872CE2710F68A228D7427E3897E50F50EDF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackRpcSent(Unity.Multiplayer.Tools.MetricTypes.RpcEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackRpcSent_m30E6AEFF62FA3E9E7104ADC34FCCB12E9891BB32 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA ___rpcEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RpcSentEvent.Mark(rpcEvent);
		EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* L_0 = __this->___m_RpcSentEvent_16;
		RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA L_1 = ___rpcEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588(L_0, L_1, EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackRpcReceived(Unity.Multiplayer.Tools.MetricTypes.RpcEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackRpcReceived_m25550288ECB78074EAB1EBD7001B2C16ECD7A18D (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA ___rpcEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RpcReceivedEvent.Mark(rpcEvent);
		EventMetric_1_tBE2937DC93E2F9EB493BB6C2B9625DA1D85D57AD* L_0 = __this->___m_RpcReceivedEvent_17;
		RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA L_1 = ___rpcEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588(L_0, L_1, EventMetric_1_Mark_mD17BA0C592D60830A63F420F817066992ACEB588_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackServerLogSent(Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackServerLogSent_mA8A20DC4FFB99D782BAC16B117829C97D42CC29D (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF ___serverLogEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ServerLogSentEvent.Mark(serverLogEvent);
		EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* L_0 = __this->___m_ServerLogSentEvent_18;
		ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF L_1 = ___serverLogEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465(L_0, L_1, EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackServerLogReceived(Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackServerLogReceived_mB15400155C4C48181E1C4F652BA4199B195944AC (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF ___serverLogEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ServerLogReceivedEvent.Mark(serverLogEvent);
		EventMetric_1_tD25D64C46F7755C6FAC4E9E38C11FDB28697B29F* L_0 = __this->___m_ServerLogReceivedEvent_19;
		ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF L_1 = ___serverLogEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465(L_0, L_1, EventMetric_1_Mark_mD6B1BC26AA11A7EA61C785348CF9CDD6A86B8465_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackSceneEventSent(Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackSceneEventSent_mC272D8E4CB7DFED7B9F0D1DD6E1A4AF3B7E7EFF1 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 ___sceneEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SceneEventSentEvent.Mark(sceneEvent);
		EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* L_0 = __this->___m_SceneEventSentEvent_20;
		SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 L_1 = ___sceneEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263(L_0, L_1, EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackSceneEventReceived(Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackSceneEventReceived_m7250F5FDB80B4EB6E864E89B49A58B1948BB775B (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 ___sceneEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SceneEventReceivedEvent.Mark(sceneEvent);
		EventMetric_1_tC8FEC2B47C3587DAA9A26803B9FD7E67F51AFB4F* L_0 = __this->___m_SceneEventReceivedEvent_21;
		SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 L_1 = ___sceneEvent0;
		NullCheck(L_0);
		EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263(L_0, L_1, EventMetric_1_Mark_mD6104DA2DBD753803F28F0313EEE98EA4F1FA263_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackPacketSent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackPacketSent_m42435A7BDA9F585B8F1521F8D89DC7EB53202FBD (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, int32_t ___packetCount0, const RuntimeMethod* method) 
{
	{
		// m_PacketSentCounter.Increment(packetCount);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_0 = __this->___m_PacketSentCounter_22;
		int32_t L_1 = ___packetCount0;
		NullCheck(L_0);
		Counter_Increment_m10F204BD8C1E1BBDC08D70D221FB37B80CB62A73(L_0, ((int64_t)L_1), NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackPacketReceived(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackPacketReceived_mE4EF1B8DBDAE36CEA49B7EEB2CBC010F231A8723 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, int32_t ___packetCount0, const RuntimeMethod* method) 
{
	{
		// m_PacketReceivedCounter.Increment(packetCount);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_0 = __this->___m_PacketReceivedCounter_23;
		int32_t L_1 = ___packetCount0;
		NullCheck(L_0);
		Counter_Increment_m10F204BD8C1E1BBDC08D70D221FB37B80CB62A73(L_0, ((int64_t)L_1), NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::TrackRttToServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_TrackRttToServer_m01514021F9B3190D0648658B5DD9444DA880F6E3 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, int32_t ___rtt0, const RuntimeMethod* method) 
{
	{
		// m_RttToServerGauge.Set(rtt);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_0 = __this->___m_RttToServerGauge_24;
		int32_t L_1 = ___rtt0;
		NullCheck(L_0);
		Gauge_Set_m6537B380248D703408B64C0F9EC5A4F8AA7C3E81(L_0, ((double)L_1), NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::UpdateNetworkObjectsCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_UpdateNetworkObjectsCount_mAAF899C8A31DA7CEACD634976B84D5D7B914E368 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	{
		// m_NetworkObjectsGauge.Set(count);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_0 = __this->___m_NetworkObjectsGauge_25;
		int32_t L_1 = ___count0;
		NullCheck(L_0);
		Gauge_Set_m6537B380248D703408B64C0F9EC5A4F8AA7C3E81(L_0, ((double)L_1), NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::UpdateConnectionsCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_UpdateConnectionsCount_m6A7CB5C3C4BC04576E9B2F69A374E8C1EFC7E527 (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	{
		// m_ConnectionsGauge.Set(count);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_0 = __this->___m_ConnectionsGauge_26;
		int32_t L_1 = ___count0;
		NullCheck(L_0);
		Gauge_Set_m6537B380248D703408B64C0F9EC5A4F8AA7C3E81(L_0, ((double)L_1), NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.TestDataTracker::UpdatePacketLoss(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDataTracker_UpdatePacketLoss_m8D83FF2982612EB61B78C1AB4911C67BD89FB18E (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, float ___count0, const RuntimeMethod* method) 
{
	{
		// m_PacketLoss.Set(count);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_0 = __this->___m_PacketLoss_27;
		float L_1 = ___count0;
		NullCheck(L_0);
		Gauge_Set_m6537B380248D703408B64C0F9EC5A4F8AA7C3E81(L_0, ((double)L_1), NULL);
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
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.MetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricObserverFactory_Construct_m010B1B7D0A896B713F7D4721CD5E8C52BD66500C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IMetricObserver Construct() => new MetricObserver();
		MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205* L_0 = (MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205*)il2cpp_codegen_object_new(MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MetricObserver__ctor_m10F30E6F192E2076BFB96A14B90C802D4E4254AD(L_0, NULL);
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
// System.Void Unity.Multiplayer.Tools.MetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricObserver_Observe_mFBF7C9D9BBB297139C5C6875A545BC5B954FDAC7 (MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_profilerMetricObserver.Observe(collection);
		RuntimeObject* L_0 = __this->___m_profilerMetricObserver_0;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_1 = ___collection0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var, L_0, L_1);
		// m_rnsmMetricObserver.Observe(collection);
		RuntimeObject* L_2 = __this->___m_rnsmMetricObserver_1;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_3 = ___collection0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.MetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricObserver__ctor_m10F30E6F192E2076BFB96A14B90C802D4E4254AD (MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205* __this, const RuntimeMethod* method) 
{
	{
		// private IMetricObserver m_profilerMetricObserver = ProfilerMetricObserverFactory.Construct();
		RuntimeObject* L_0;
		L_0 = ProfilerMetricObserverFactory_Construct_m6ABBC8031C6A462A5A2648B81DB095914F082341(NULL);
		__this->___m_profilerMetricObserver_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_profilerMetricObserver_0), (void*)L_0);
		// private IMetricObserver m_rnsmMetricObserver = RnsmMetricObserverFactory.Construct();
		RuntimeObject* L_1;
		L_1 = RnsmMetricObserverFactory_Construct_m192920D108D3C75E8B062E6DD9F367E54A3325B6(NULL);
		__this->___m_rnsmMetricObserver_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rnsmMetricObserver_1), (void*)L_1);
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
// Unity.Multiplayer.Tools.NoOpMetricObserver Unity.Multiplayer.Tools.NoOpMetricObserver::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* NoOpMetricObserver_get_Instance_mE28DBCD2135E7B48CB6E4116612662F40BD3F71B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NoOpMetricObserver Instance { get; } = new NoOpMetricObserver();
		il2cpp_codegen_runtime_class_init_inline(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* L_0 = ((NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver__ctor_mEE70C11AB39A75FB09DD286B4A9DFEDF91079AA4 (NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* __this, const RuntimeMethod* method) 
{
	{
		// private NoOpMetricObserver() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private NoOpMetricObserver() {}
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver_Observe_m625E56B653A35C014BCEB744055992E5F05EB75F (NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, const RuntimeMethod* method) 
{
	{
		// public void Observe(MetricCollection collection) {}
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver__cctor_m973080DE32F5E9E9232E08BB27B030A24F1DB8AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NoOpMetricObserver Instance { get; } = new NoOpMetricObserver();
		NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* L_0 = (NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C*)il2cpp_codegen_object_new(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NoOpMetricObserver__ctor_mEE70C11AB39A75FB09DD286B4A9DFEDF91079AA4(L_0, NULL);
		((NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
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
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.RnsmMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RnsmMetricObserverFactory_Construct_m192920D108D3C75E8B062E6DD9F367E54A3325B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NoOpMetricObserver.Instance;
		il2cpp_codegen_runtime_class_init_inline(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* L_0;
		L_0 = NoOpMetricObserver_get_Instance_mE28DBCD2135E7B48CB6E4116612662F40BD3F71B_inline(NULL);
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
// System.Void <NetStats_TypeRegistration>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNetStats_TypeRegistrationU3E_Run_m435EB82A180EEB329A348060B0202D674200418D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD(EventMetricFactory_RegisterType_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mF25A48DF67B81E035542536BE2D3BB7787EE16CD_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691(EventMetricFactory_RegisterType_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_mA4032942924AE557200ED4160550B684C202C691_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5(EventMetricFactory_RegisterType_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m7C8F3D1E896636AF76F79940E90FEE16FDAAAFB5_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382(EventMetricFactory_RegisterType_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m275E002E39DB337BACFA95D4315D8D5AF765A382_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D(EventMetricFactory_RegisterType_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_mAC8763E269957F21C396EB512C27215F7C42BE3D_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37(EventMetricFactory_RegisterType_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_mC186E15C90E7822E2DB94C0FF865CA6A99535B37_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A(EventMetricFactory_RegisterType_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m38E6D068C04F81234785A68FFED64026A9B1E20A_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82(EventMetricFactory_RegisterType_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mB77D12C93EE628684B76C516E1B3D27272031F82_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB(EventMetricFactory_RegisterType_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m95D60A8719CE51F4CAECB03F5038117BE351CFBB_RuntimeMethod_var);
		EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9(EventMetricFactory_RegisterType_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDCA25AA7E0CD261D97B0C89949C70554CB518DF9_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TestDataTracker_get_Dispatcher_mEA19369CB3AC0BD53E62DC37F63279A97944E782_inline (TestDataTracker_tD228AD84F77E3F856287DC30BD70114AA0E01079* __this, const RuntimeMethod* method) 
{
	{
		// public IMetricDispatcher Dispatcher { get; }
		RuntimeObject* L_0 = __this->___U3CDispatcherU3Ek__BackingField_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* NoOpMetricObserver_get_Instance_mE28DBCD2135E7B48CB6E4116612662F40BD3F71B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NoOpMetricObserver Instance { get; } = new NoOpMetricObserver();
		il2cpp_codegen_runtime_class_init_inline(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* L_0 = ((NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_ShouldResetOnDispatch_m8B4615652D218B6E839AD241DA7C5CC2D50ACDE3_gshared_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShouldResetOnDispatch { get; set; } = true;
		bool L_0 = ___value0;
		__this->___U3CShouldResetOnDispatchU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_ShouldResetOnDispatch_mCB4FA2B0BA338E2FFC35EED45101F1258335FAA4_gshared_inline (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShouldResetOnDispatch { get; set; } = true;
		bool L_0 = ___value0;
		__this->___U3CShouldResetOnDispatchU3Ek__BackingField_3 = L_0;
		return;
	}
}
