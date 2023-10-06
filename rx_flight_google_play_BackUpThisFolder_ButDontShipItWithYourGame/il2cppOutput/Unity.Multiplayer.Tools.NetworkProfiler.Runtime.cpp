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

// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>
struct IMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F;
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
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>
struct IReadOnlyList_1_t2624E5B5BBC9D9A1FFFACBF3FD785FE9B2DCB1D4;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>
struct IReadOnlyList_1_tEE79F46763FDCAE2D53E4F53B6DC0462B18BBE11;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>
struct IReadOnlyList_1_tA7C793DE0DF6EC6C43210A7A4D208E387820F231;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>
struct IReadOnlyList_1_tB6DEE144A64A92F4E9A164A303BAAE77F9FDC88B;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>
struct IReadOnlyList_1_t9015CD3F47392FD89AF0421F2B26138176B189F6;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>
struct IReadOnlyList_1_t1929F811B7CCB181E3E63A5CE8B87E26B96D7C87;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>
struct IReadOnlyList_1_tEAB401149CD2FD42A9E63BAD2005A59CDEBE53BF;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>
struct IReadOnlyList_1_tA4F6B76B3A21A467CF14033008CC40B1001E32F4;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>
struct IReadOnlyList_1_t0D04E8F00455B7B791CC81FDC30D28B83597F2FD;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>
struct IReadOnlyList_1_tDDD7E1C7BA89BBDDFC4FAEBA569AADE661814F58;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory
struct ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper
struct CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory
struct EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver
struct ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter
struct ICounter_tE38FA14E302A126F1FC00B75B0BE81B2899E76A5;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory
struct ICounterFactory_tF750668AF4BD2A64BF1BDA6FB3E97ADC1DF3B63D;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67;
// Unity.Multiplayer.Tools.NetStats.INetStatSerializer
struct INetStatSerializer_t7FEF6F737369EE918021C4D9587B3F3B8F2948D9;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters
struct MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters
struct MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters
struct MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172;
// Unity.Multiplayer.Tools.NetStats.MetricFactory
struct MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14;
// Unity.Multiplayer.Tools.NetStats.NetStatSerializer
struct NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters
struct ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectedMetricTypeExtensions_t368DEC67A1D713C796EFBD53D90D272061943079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameInfo_t143CD9AEDBA9EE19B1D8979BA3A7CF8F524B2F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICounterFactory_tF750668AF4BD2A64BF1BDA6FB3E97ADC1DF3B63D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICounter_tE38FA14E302A126F1FC00B75B0BE81B2899E76A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetStatSerializer_t7FEF6F737369EE918021C4D9587B3F3B8F2948D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1538A07424430301B159B5CE5821E6993791EE42;
IL2CPP_EXTERN_C String_t* _stringLiteral227178DFB763A5E7FB1A4CFF2E9CF85DC22BA318;
IL2CPP_EXTERN_C String_t* _stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA;
IL2CPP_EXTERN_C String_t* _stringLiteral44EE6C16B361AF984DE871897FDED43002CA0C67;
IL2CPP_EXTERN_C String_t* _stringLiteral881CFDF35EA59A6A902F74DFC7CD5D24039ECC88;
IL2CPP_EXTERN_C String_t* _stringLiteral9AFD7D1866B24741AF70BA5BC7A596B8D4710B10;
IL2CPP_EXTERN_C String_t* _stringLiteralA0B3C53175534E6E16222A2A624A307AA421CD88;
IL2CPP_EXTERN_C String_t* _stringLiteralBB783DAAA57C731F6EC2E834C8E00B9BE8569BDA;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFA0761F62E788ABF8AA2FED23A4C073F0BFAC8;
IL2CPP_EXTERN_C String_t* _stringLiteralC694EB44AD9534128720F9E76FC5916F879F2673;
IL2CPP_EXTERN_C String_t* _stringLiteralDCED23E1213A3021436B3BC46D18A3C173E15BD2;
IL2CPP_EXTERN_C String_t* _stringLiteralDF6F7FF07E4FC2B4634134C15CFB28E58F405274;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B4990D9AE3010693EE63F2E120DFD72243DFDC;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m28EDC67146EB2608955F94EEF7714F2CF50780FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m04E027EDB5549EF366C6F88C9156209D212CF01A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m5EFE5E2111D544D9AE9BC6B90112E341B44D679C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_mC47BD2474BD13F6D07C917DDFC4EE67B761F57E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m2F2297306D77AD05DE12AE2AD2C643E9178B417A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m921A8F16EBD161F4148FB4A7F0D7E8CF185F1155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m7475E81112BDB0F5D023EBE634CB18BA1C1EC4E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_m841BD460B09CC5B2C4AB9923D6786C81C3D28A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mFBA81E76F01FCEA269277979B1B5135ED7DF2F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m9F5AF9549AC2E06FF2E3054DD21652D280BCACE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mB0BFDC2E03FD0F6A9139F01EF00E2180CB54699A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m19AC92279B68D88517B45E5AAE1A0A0D6A0A6036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m0EC8AE9FE40BDB493C598CD41EEF7DB25CE0E08F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m275A041D7F3A1E75172B9E1F39EA2304A43E1C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m9B5D95A4E2AC17EE162E6C8EBFC72EE160B9A586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m073FF9F81951ECBC82E8329D558F765775359029_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDFBD78EFF34C30F8B419CD86AE71858EB0D08196_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m238768EC409BF5DE9E12ED660221A6A4A35A1E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_RuntimeMethod_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC31A2036100965F301C42B388772D5A31720F65E 
{
};
struct Il2CppArrayBounds;

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory
struct ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceivedExtensions
struct BytesSentAndReceivedExtensions_tD7323562A7510ADBA5BFD58DCC231B2B1FD22ED5  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory
struct EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver
struct ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.INetStatSerializer Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver::m_NetStatSerializer
	RuntimeObject* ___m_NetStatSerializer_0;
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters
struct MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::m_SentCounter
	RuntimeObject* ___m_SentCounter_0;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::m_ReceivedCounter
	RuntimeObject* ___m_ReceivedCounter_1;
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::<Sent>k__BackingField
	String_t* ___U3CSentU3Ek__BackingField_2;
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::<Received>k__BackingField
	String_t* ___U3CReceivedU3Ek__BackingField_3;
};

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

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters
struct MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Bytes
	MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* ___Bytes_0;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Events
	MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* ___Events_1;
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters
struct MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172  : public RuntimeObject
{
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::<Sent>k__BackingField
	String_t* ___U3CSentU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::m_SentCounter
	RuntimeObject* ___m_SentCounter_1;
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::<Received>k__BackingField
	String_t* ___U3CReceivedU3Ek__BackingField_2;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::m_ReceivedCounter
	RuntimeObject* ___m_ReceivedCounter_3;
};

// Unity.Multiplayer.Tools.NetStats.NetStatSerializer
struct NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.MetricFactory Unity.Multiplayer.Tools.NetStats.NetStatSerializer::m_MetricFactory
	MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14* ___m_MetricFactory_0;
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters
struct ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::totalBytes
	MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* ___totalBytes_1;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::rpc
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___rpc_2;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::namedMessage
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___namedMessage_3;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::unnamedMessage
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___unnamedMessage_4;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::networkVariableDelta
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___networkVariableDelta_5;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::objectSpawned
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___objectSpawned_6;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::objectDestroyed
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___objectDestroyed_7;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::serverLog
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___serverLog_8;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::sceneEvent
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___sceneEvent_9;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ownershipChange
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___ownershipChange_10;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::customMessage
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___customMessage_11;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::networkMessage
	MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ___networkMessage_12;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::m_ByteCounterFactory
	RuntimeObject* ___m_ByteCounterFactory_13;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::m_EventCounterFactory
	RuntimeObject* ___m_EventCounterFactory_14;
};

struct ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_StaticFields
{
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::s_Singleton
	ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* ___s_Singleton_0;
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory
struct ProfilerMetricObserverFactory_t4C42AAA2AEABE9FEC9E9F6633B0D51B8F8E015D0  : public RuntimeObject
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

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Profiling.ProfilerCounter`1<System.Int64>
struct ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945 
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

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived
struct BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 
{
	// System.Int64 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::<Sent>k__BackingField
	int64_t ___U3CSentU3Ek__BackingField_0;
	// System.Int64 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::<Received>k__BackingField
	int64_t ___U3CReceivedU3Ek__BackingField_1;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// Unity.Profiling.ProfilerCategory
struct ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC 
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
					// System.UInt16 Unity.Profiling.ProfilerCategory::m_CategoryId
					uint16_t ___m_CategoryId_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___m_CategoryId_0_forAlignmentOnly;
				};
			};
		};
		uint8_t ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC__padding[2];
	};
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

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper
struct CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E  : public RuntimeObject
{
	// Unity.Profiling.ProfilerCounter`1<System.Int64> Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::m_Counter
	ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945 ___m_Counter_0;
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.FrameInfo
struct FrameInfo_t143CD9AEDBA9EE19B1D8979BA3A7CF8F524B2F9D  : public RuntimeObject
{
};

struct FrameInfo_t143CD9AEDBA9EE19B1D8979BA3A7CF8F524B2F9D_StaticFields
{
	// System.Guid Unity.Multiplayer.Tools.NetworkProfiler.Runtime.FrameInfo::NetworkProfilerGuid
	Guid_t ___NetworkProfilerGuid_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Profiling.ProfilerCounter`1<System.Int64>::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_gshared_inline (ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945* __this, ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC ___category0, String_t* ___name1, uint8_t ___dataUnit2, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m073FF9F81951ECBC82E8329D558F765775359029_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m7475E81112BDB0F5D023EBE634CB18BA1C1EC4E1_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m28EDC67146EB2608955F94EEF7714F2CF50780FA_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m9F5AF9549AC2E06FF2E3054DD21652D280BCACE4_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m19AC92279B68D88517B45E5AAE1A0A0D6A0A6036_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m5EFE5E2111D544D9AE9BC6B90112E341B44D679C_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m275A041D7F3A1E75172B9E1F39EA2304A43E1C72_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m2F2297306D77AD05DE12AE2AD2C643E9178B417A_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m0EC8AE9FE40BDB493C598CD41EEF7DB25CE0E08F_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_mC47BD2474BD13F6D07C917DDFC4EE67B761F57E0_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m238768EC409BF5DE9E12ED660221A6A4A35A1E56_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mFBA81E76F01FCEA269277979B1B5135ED7DF2F0F_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDFBD78EFF34C30F8B419CD86AE71858EB0D08196_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_m841BD460B09CC5B2C4AB9923D6786C81C3D28A89_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m9B5D95A4E2AC17EE162E6C8EBFC72EE160B9A586_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m921A8F16EBD161F4148FB4A7F0D7E8CF185F1155_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mB0BFDC2E03FD0F6A9139F01EF00E2180CB54699A_gshared (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m04E027EDB5549EF366C6F88C9156209D212CF01A_gshared (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;

// Unity.Profiling.ProfilerCategory Unity.Profiling.ProfilerCategory::get_Network()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC ProfilerCategory_get_Network_m4932239B021D1A289BC102F3ECBE36922B14EA93 (const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerCounter`1<System.Int64>::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit)
inline void ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_inline (ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945* __this, ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC ___category0, String_t* ___name1, uint8_t ___dataUnit2, const RuntimeMethod* method)
{
	((  void (*) (ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945*, ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC, String_t*, uint8_t, const RuntimeMethod*))ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_gshared_inline)(__this, ___category0, ___name1, ___dataUnit2, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::.ctor(Unity.Profiling.ProfilerCounter`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterWrapper__ctor_m37735EED16E0349741D489482253790D47C864C2 (CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E* __this, ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945 ___counter0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Sent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Sent_mC97D8190FB75086A6566747A73E5CEA1EECFB4E6_inline (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Received()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Received_m59C838195C22C352ABA8D7F0AB49FC09ED7E93F2_inline (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters__ctor_m44351F0FF084F187182477B4DD7F7EE19DD0F023 (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricEventCounters__ctor_m34751E1F30D66C6D45690621898DD0DC3D467C15 (MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Sent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Sent_m78BE5E723C71AB0CAAF3BBC0F5FDC6DC35871D7F_inline (MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* __this, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Received()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Received_m8B0522797455165C4CA584D2351D008182DF0C42_inline (MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::.ctor(Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters__ctor_m98EDA29C1F0F4B614803C8E0B7FC86342E0CAC84 (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, RuntimeObject* ___byteCounterFactory0, RuntimeObject* ___eventCounterFactory1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteCounterFactory__ctor_mA8E17E6D3EA7E058CE93D4DC9DC14BC1B022E1D6 (ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCounterFactory__ctor_m06A4FB7FBE5FEDFA31B6D6C5CE0D37E774A9E6B3 (EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricByteCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* ProfilerCounters_ConstructMetricByteCounters_m5F1E1E208D3ADE2E551FBC1E79152D2183792710 (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90 (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, int32_t ___metricType0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ProfilerCounters_ConstructMetricCounters_mC8C2650935AE7D7EE0D603A3AFA89C76CE3BC3FC (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetStats.MetricTypeExtensions::GetDisplayNameString(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricTypeExtensions_GetDisplayNameString_mB9E62BEA967B432D1FD19797ECF7E2E6FAB4086B (int32_t ___metricType0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters__ctor_m43C1A8C767A6A90CAC226CDCAE69A34BF1F71B7B (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, String_t* ___displayName0, RuntimeObject* ___byteCounterFactory1, RuntimeObject* ___eventCounterFactory2, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::GetId(Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836 (int32_t ___directedMetric0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricCollection_TryGetCounter_m002A9388A45AA9562FAF9DA9C81AE6DAF2C7C07A (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, RuntimeObject** ___counter1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::Sample(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters_Sample_m1927F17A64286D9EAEA1B63ED92C86FB09CE7045 (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, int64_t ___sent0, int64_t ___received1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m073FF9F81951ECBC82E8329D558F765775359029 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m073FF9F81951ECBC82E8329D558F765775359029_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m7475E81112BDB0F5D023EBE634CB18BA1C1EC4E1 (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m7475E81112BDB0F5D023EBE634CB18BA1C1EC4E1_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m28EDC67146EB2608955F94EEF7714F2CF50780FA (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m28EDC67146EB2608955F94EEF7714F2CF50780FA_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m9F5AF9549AC2E06FF2E3054DD21652D280BCACE4 (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m9F5AF9549AC2E06FF2E3054DD21652D280BCACE4_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m19AC92279B68D88517B45E5AAE1A0A0D6A0A6036 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m19AC92279B68D88517B45E5AAE1A0A0D6A0A6036_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m5EFE5E2111D544D9AE9BC6B90112E341B44D679C (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m5EFE5E2111D544D9AE9BC6B90112E341B44D679C_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m275A041D7F3A1E75172B9E1F39EA2304A43E1C72 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m275A041D7F3A1E75172B9E1F39EA2304A43E1C72_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m2F2297306D77AD05DE12AE2AD2C643E9178B417A (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m2F2297306D77AD05DE12AE2AD2C643E9178B417A_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m0EC8AE9FE40BDB493C598CD41EEF7DB25CE0E08F (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m0EC8AE9FE40BDB493C598CD41EEF7DB25CE0E08F_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_mC47BD2474BD13F6D07C917DDFC4EE67B761F57E0 (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_mC47BD2474BD13F6D07C917DDFC4EE67B761F57E0_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m238768EC409BF5DE9E12ED660221A6A4A35A1E56 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m238768EC409BF5DE9E12ED660221A6A4A35A1E56_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mFBA81E76F01FCEA269277979B1B5135ED7DF2F0F (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mFBA81E76F01FCEA269277979B1B5135ED7DF2F0F_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDFBD78EFF34C30F8B419CD86AE71858EB0D08196 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDFBD78EFF34C30F8B419CD86AE71858EB0D08196_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_m841BD460B09CC5B2C4AB9923D6786C81C3D28A89 (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_m841BD460B09CC5B2C4AB9923D6786C81C3D28A89_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m9B5D95A4E2AC17EE162E6C8EBFC72EE160B9A586 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m9B5D95A4E2AC17EE162E6C8EBFC72EE160B9A586_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m921A8F16EBD161F4148FB4A7F0D7E8CF185F1155 (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m921A8F16EBD161F4148FB4A7F0D7E8CF185F1155_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mB0BFDC2E03FD0F6A9139F01EF00E2180CB54699A (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mB0BFDC2E03FD0F6A9139F01EF00E2180CB54699A_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m04E027EDB5549EF366C6F88C9156209D212CF01A (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m04E027EDB5549EF366C6F88C9156209D212CF01A_gshared)(__this, ___sent0, ___received1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.NetStatSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatSerializer__ctor_m9C4C58C9E498B39BD958D5596470165CC74318F2 (NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* ProfilerCounters_get_Instance_m55A0FA5692DC4C5C6E0E37A8C247DAE78328383B (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::UpdateFromMetrics(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters_UpdateFromMetrics_mD3171E543D39C1180FD915DF42AD0130628C677E (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
inline void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared)(__this, method);
}
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t* __this, String_t* ___g0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::.ctor(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesSentAndReceived__ctor_m684058BD6EB68547404C6A47B921DAC5C3765B3B (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, int64_t ___sent0, int64_t ___received1, const RuntimeMethod* method) ;
// System.Int64 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::get_Sent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) ;
// System.Int64 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::get_Received()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.MetricTypes.NetworkDirection Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BytesSentAndReceived_get_Direction_m0F9249B9406774C1368747E8CEB16C4C328381CB (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) ;
// System.Int64 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::get_Total()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BytesSentAndReceived_get_Total_mC4E5B430F7D82375140ACCB71EA07BF952A3D443 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::Equals(Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BytesSentAndReceived_Equals_m4E7D1DB5D970EAFD740AA6808DAE0F845BF5C888 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 ___other0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BytesSentAndReceived_Equals_mCCED4CCF34F9B287B4ACF1C6F25AB8F94BA7DF8D (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BytesSentAndReceived_GetHashCode_m1E875455647014F2768D3F4B6FC5E7D22CFBDA04 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BytesSentAndReceived_ToString_m4A00A0C5B862C5C0EA394D85E8D28B82E9390450 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibilityProfilerMetricObserver__ctor_m6BEA62E9B202B5E16B569BC5317A001A5C34F581 (ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D* __this, const RuntimeMethod* method) ;
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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory::Construct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteCounterFactory_Construct_m8A1A2CC18FB1140AC1D89D0353CEAC82E6B8C282 (ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new CounterWrapper(
		//     new ProfilerCounter<long>(
		//         ProfilerCategory.Network, name, ProfilerMarkerDataUnit.Bytes));
		ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC L_0;
		L_0 = ProfilerCategory_get_Network_m4932239B021D1A289BC102F3ECBE36922B14EA93(NULL);
		String_t* L_1 = ___name0;
		ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_inline((&L_2), L_0, L_1, 2, /*hidden argument*/ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_RuntimeMethod_var);
		CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E* L_3 = (CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E*)il2cpp_codegen_object_new(CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CounterWrapper__ctor_m37735EED16E0349741D489482253790D47C864C2(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteCounterFactory__ctor_mA8E17E6D3EA7E058CE93D4DC9DC14BC1B022E1D6 (ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::.ctor(Unity.Profiling.ProfilerCounter`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterWrapper__ctor_m37735EED16E0349741D489482253790D47C864C2 (CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E* __this, ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945 ___counter0, const RuntimeMethod* method) 
{
	{
		// public CounterWrapper(ProfilerCounter<long> counter)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Counter = counter;
		ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945 L_0 = ___counter0;
		__this->___m_Counter_0 = L_0;
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::Sample(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterWrapper_Sample_m59073B4F0E40734844C12A7F5D0863CA220FFF7B (CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E* __this, int64_t ___inValue0, const RuntimeMethod* method) 
{
	{
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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory::Construct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventCounterFactory_Construct_m03130019B1B30CB13DF4501B9310E029902DE2F2 (EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new CounterWrapper(
		//     new ProfilerCounter<long>(
		//         ProfilerCategory.Network, name, ProfilerMarkerDataUnit.Count));
		ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC L_0;
		L_0 = ProfilerCategory_get_Network_m4932239B021D1A289BC102F3ECBE36922B14EA93(NULL);
		String_t* L_1 = ___name0;
		ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_inline((&L_2), L_0, L_1, 3, /*hidden argument*/ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_RuntimeMethod_var);
		CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E* L_3 = (CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E*)il2cpp_codegen_object_new(CounterWrapper_t66372376907DC445BA05E96ABAC10E760B83319E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CounterWrapper__ctor_m37735EED16E0349741D489482253790D47C864C2(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCounterFactory__ctor_m06A4FB7FBE5FEDFA31B6D6C5CE0D37E774A9E6B3 (EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters__ctor_m44351F0FF084F187182477B4DD7F7EE19DD0F023 (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICounterFactory_tF750668AF4BD2A64BF1BDA6FB3E97ADC1DF3B63D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AFD7D1866B24741AF70BA5BC7A596B8D4710B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCED23E1213A3021436B3BC46D18A3C173E15BD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricByteCounters(string displayName, ICounterFactory counterFactory)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Sent = $"{displayName} Bytes Sent";
		String_t* L_0 = ___displayName0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralDCED23E1213A3021436B3BC46D18A3C173E15BD2, NULL);
		__this->___U3CSentU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSentU3Ek__BackingField_2), (void*)L_1);
		// Received = $"{displayName} Bytes Received";
		String_t* L_2 = ___displayName0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral9AFD7D1866B24741AF70BA5BC7A596B8D4710B10, NULL);
		__this->___U3CReceivedU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceivedU3Ek__BackingField_3), (void*)L_3);
		// m_SentCounter = counterFactory.Construct(Sent);
		RuntimeObject* L_4 = ___counterFactory1;
		String_t* L_5;
		L_5 = MetricByteCounters_get_Sent_mC97D8190FB75086A6566747A73E5CEA1EECFB4E6_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_tF750668AF4BD2A64BF1BDA6FB3E97ADC1DF3B63D_il2cpp_TypeInfo_var, L_4, L_5);
		__this->___m_SentCounter_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SentCounter_0), (void*)L_6);
		// m_ReceivedCounter = counterFactory.Construct(Received);
		RuntimeObject* L_7 = ___counterFactory1;
		String_t* L_8;
		L_8 = MetricByteCounters_get_Received_m59C838195C22C352ABA8D7F0AB49FC09ED7E93F2_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_tF750668AF4BD2A64BF1BDA6FB3E97ADC1DF3B63D_il2cpp_TypeInfo_var, L_7, L_8);
		__this->___m_ReceivedCounter_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedCounter_1), (void*)L_9);
		// }
		return;
	}
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Sent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Sent_mC97D8190FB75086A6566747A73E5CEA1EECFB4E6 (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, const RuntimeMethod* method) 
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->___U3CSentU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Received()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Received_m59C838195C22C352ABA8D7F0AB49FC09ED7E93F2 (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, const RuntimeMethod* method) 
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->___U3CReceivedU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::Sample(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters_Sample_m1927F17A64286D9EAEA1B63ED92C86FB09CE7045 (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, int64_t ___sent0, int64_t ___received1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICounter_tE38FA14E302A126F1FC00B75B0BE81B2899E76A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SentCounter.Sample(sent);
		RuntimeObject* L_0 = __this->___m_SentCounter_0;
		int64_t L_1 = ___sent0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int64_t >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter::Sample(System.Int64) */, ICounter_tE38FA14E302A126F1FC00B75B0BE81B2899E76A5_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ReceivedCounter.Sample(received);
		RuntimeObject* L_2 = __this->___m_ReceivedCounter_1;
		int64_t L_3 = ___received1;
		NullCheck(L_2);
		InterfaceActionInvoker1< int64_t >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter::Sample(System.Int64) */, ICounter_tE38FA14E302A126F1FC00B75B0BE81B2899E76A5_il2cpp_TypeInfo_var, L_2, L_3);
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters__ctor_m43C1A8C767A6A90CAC226CDCAE69A34BF1F71B7B (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* __this, String_t* ___displayName0, RuntimeObject* ___byteCounterFactory1, RuntimeObject* ___eventCounterFactory2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricCounters(
		//     string displayName,
		//     ICounterFactory byteCounterFactory,
		//     ICounterFactory eventCounterFactory)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Bytes = new MetricByteCounters(displayName, byteCounterFactory);
		String_t* L_0 = ___displayName0;
		RuntimeObject* L_1 = ___byteCounterFactory1;
		MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* L_2 = (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16*)il2cpp_codegen_object_new(MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MetricByteCounters__ctor_m44351F0FF084F187182477B4DD7F7EE19DD0F023(L_2, L_0, L_1, NULL);
		__this->___Bytes_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Bytes_0), (void*)L_2);
		// Events = new MetricEventCounters(displayName, eventCounterFactory);
		String_t* L_3 = ___displayName0;
		RuntimeObject* L_4 = ___eventCounterFactory2;
		MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* L_5 = (MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172*)il2cpp_codegen_object_new(MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MetricEventCounters__ctor_m34751E1F30D66C6D45690621898DD0DC3D467C15(L_5, L_3, L_4, NULL);
		__this->___Events_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Events_1), (void*)L_5);
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
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Sent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Sent_m78BE5E723C71AB0CAAF3BBC0F5FDC6DC35871D7F (MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* __this, const RuntimeMethod* method) 
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->___U3CSentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Received()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Received_m8B0522797455165C4CA584D2351D008182DF0C42 (MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* __this, const RuntimeMethod* method) 
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->___U3CReceivedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricEventCounters__ctor_m34751E1F30D66C6D45690621898DD0DC3D467C15 (MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICounterFactory_tF750668AF4BD2A64BF1BDA6FB3E97ADC1DF3B63D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1538A07424430301B159B5CE5821E6993791EE42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF6F7FF07E4FC2B4634134C15CFB28E58F405274);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricEventCounters(string displayName, ICounterFactory counterFactory)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Sent = $"{displayName} Sent";
		String_t* L_0 = ___displayName0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral1538A07424430301B159B5CE5821E6993791EE42, NULL);
		__this->___U3CSentU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSentU3Ek__BackingField_0), (void*)L_1);
		// Received = $"{displayName} Received";
		String_t* L_2 = ___displayName0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteralDF6F7FF07E4FC2B4634134C15CFB28E58F405274, NULL);
		__this->___U3CReceivedU3Ek__BackingField_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceivedU3Ek__BackingField_2), (void*)L_3);
		// m_SentCounter = counterFactory.Construct(Sent);
		RuntimeObject* L_4 = ___counterFactory1;
		String_t* L_5;
		L_5 = MetricEventCounters_get_Sent_m78BE5E723C71AB0CAAF3BBC0F5FDC6DC35871D7F_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_tF750668AF4BD2A64BF1BDA6FB3E97ADC1DF3B63D_il2cpp_TypeInfo_var, L_4, L_5);
		__this->___m_SentCounter_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SentCounter_1), (void*)L_6);
		// m_ReceivedCounter = counterFactory.Construct(Received);
		RuntimeObject* L_7 = ___counterFactory1;
		String_t* L_8;
		L_8 = MetricEventCounters_get_Received_m8B0522797455165C4CA584D2351D008182DF0C42_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_tF750668AF4BD2A64BF1BDA6FB3E97ADC1DF3B63D_il2cpp_TypeInfo_var, L_7, L_8);
		__this->___m_ReceivedCounter_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedCounter_3), (void*)L_9);
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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* ProfilerCounters_get_Instance_m55A0FA5692DC4C5C6E0E37A8C247DAE78328383B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* G_B2_0 = NULL;
	ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* G_B1_0 = NULL;
	{
		// public static ProfilerCounters Instance => s_Singleton ??= new ProfilerCounters();
		ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* L_0 = ((ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_StaticFields*)il2cpp_codegen_static_fields_for(ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_il2cpp_TypeInfo_var))->___s_Singleton_0;
		ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* L_2 = (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3*)il2cpp_codegen_object_new(ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ProfilerCounters__ctor_m98EDA29C1F0F4B614803C8E0B7FC86342E0CAC84(L_2, (RuntimeObject*)NULL, (RuntimeObject*)NULL, NULL);
		ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* L_3 = L_2;
		((ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_StaticFields*)il2cpp_codegen_static_fields_for(ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_il2cpp_TypeInfo_var))->___s_Singleton_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_StaticFields*)il2cpp_codegen_static_fields_for(ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3_il2cpp_TypeInfo_var))->___s_Singleton_0), (void*)L_3);
		G_B2_0 = L_3;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::.ctor(Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters__ctor_m98EDA29C1F0F4B614803C8E0B7FC86342E0CAC84 (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, RuntimeObject* ___byteCounterFactory0, RuntimeObject* ___eventCounterFactory1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44EE6C16B361AF984DE871897FDED43002CA0C67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEFA0761F62E788ABF8AA2FED23A4C073F0BFAC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B4990D9AE3010693EE63F2E120DFD72243DFDC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* G_B1_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* G_B3_1 = NULL;
	{
		// public ProfilerCounters(
		//     ICounterFactory byteCounterFactory = null,
		//     ICounterFactory eventCounterFactory = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_ByteCounterFactory = byteCounterFactory ?? new ByteCounterFactory();
		RuntimeObject* L_0 = ___byteCounterFactory0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03* L_2 = (ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03*)il2cpp_codegen_object_new(ByteCounterFactory_t77A05E9859E185C56FFAA6829EC3D5C45272DF03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ByteCounterFactory__ctor_mA8E17E6D3EA7E058CE93D4DC9DC14BC1B022E1D6(L_2, NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_ByteCounterFactory_13 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_ByteCounterFactory_13), (void*)G_B2_0);
		// m_EventCounterFactory = eventCounterFactory ?? new EventCounterFactory();
		RuntimeObject* L_3 = ___eventCounterFactory1;
		RuntimeObject* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0021;
		}
	}
	{
		EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD* L_5 = (EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD*)il2cpp_codegen_object_new(EventCounterFactory_tB381B04E06434F06171FC4594BFF08F8332A0CAD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventCounterFactory__ctor_m06A4FB7FBE5FEDFA31B6D6C5CE0D37E774A9E6B3(L_5, NULL);
		G_B4_0 = ((RuntimeObject*)(L_5));
		G_B4_1 = G_B3_1;
	}

IL_0021:
	{
		NullCheck(G_B4_1);
		G_B4_1->___m_EventCounterFactory_14 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___m_EventCounterFactory_14), (void*)G_B4_0);
		// totalBytes = ConstructMetricByteCounters("Total");
		MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* L_6;
		L_6 = ProfilerCounters_ConstructMetricByteCounters_m5F1E1E208D3ADE2E551FBC1E79152D2183792710(__this, _stringLiteral44EE6C16B361AF984DE871897FDED43002CA0C67, NULL);
		__this->___totalBytes_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___totalBytes_1), (void*)L_6);
		// rpc = ConstructMetricCounters(MetricType.Rpc);
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_7;
		L_7 = ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90(__this, 2, NULL);
		__this->___rpc_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rpc_2), (void*)L_7);
		// namedMessage = ConstructMetricCounters(MetricType.NamedMessage);
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_8;
		L_8 = ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90(__this, 3, NULL);
		__this->___namedMessage_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___namedMessage_3), (void*)L_8);
		// unnamedMessage = ConstructMetricCounters(MetricType.UnnamedMessage);
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_9;
		L_9 = ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90(__this, 4, NULL);
		__this->___unnamedMessage_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unnamedMessage_4), (void*)L_9);
		// networkVariableDelta = ConstructMetricCounters("Network Variable");
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_10;
		L_10 = ProfilerCounters_ConstructMetricCounters_mC8C2650935AE7D7EE0D603A3AFA89C76CE3BC3FC(__this, _stringLiteralBEFA0761F62E788ABF8AA2FED23A4C073F0BFAC8, NULL);
		__this->___networkVariableDelta_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___networkVariableDelta_5), (void*)L_10);
		// objectSpawned = ConstructMetricCounters(MetricType.ObjectSpawned);
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_11;
		L_11 = ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90(__this, 6, NULL);
		__this->___objectSpawned_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectSpawned_6), (void*)L_11);
		// objectDestroyed = ConstructMetricCounters(MetricType.ObjectDestroyed);
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_12;
		L_12 = ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90(__this, 7, NULL);
		__this->___objectDestroyed_7 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectDestroyed_7), (void*)L_12);
		// serverLog = ConstructMetricCounters(MetricType.ServerLog);
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_13;
		L_13 = ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90(__this, ((int32_t)9), NULL);
		__this->___serverLog_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serverLog_8), (void*)L_13);
		// sceneEvent = ConstructMetricCounters(MetricType.SceneEvent);
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_14;
		L_14 = ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90(__this, ((int32_t)10), NULL);
		__this->___sceneEvent_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneEvent_9), (void*)L_14);
		// ownershipChange = ConstructMetricCounters(MetricType.OwnershipChange);
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_15;
		L_15 = ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90(__this, 8, NULL);
		__this->___ownershipChange_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ownershipChange_10), (void*)L_15);
		// customMessage = ConstructMetricCounters("Custom");
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_16;
		L_16 = ProfilerCounters_ConstructMetricCounters_mC8C2650935AE7D7EE0D603A3AFA89C76CE3BC3FC(__this, _stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA, NULL);
		__this->___customMessage_11 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customMessage_11), (void*)L_16);
		// networkMessage = ConstructMetricCounters("Network Messages");
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_17;
		L_17 = ProfilerCounters_ConstructMetricCounters_mC8C2650935AE7D7EE0D603A3AFA89C76CE3BC3FC(__this, _stringLiteralF7B4990D9AE3010693EE63F2E120DFD72243DFDC, NULL);
		__this->___networkMessage_12 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___networkMessage_12), (void*)L_17);
		// }
		return;
	}
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricByteCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* ProfilerCounters_ConstructMetricByteCounters_m5F1E1E208D3ADE2E551FBC1E79152D2183792710 (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new MetricByteCounters(
		//     name,
		//     m_ByteCounterFactory);
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->___m_ByteCounterFactory_13;
		MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* L_2 = (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16*)il2cpp_codegen_object_new(MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MetricByteCounters__ctor_m44351F0FF084F187182477B4DD7F7EE19DD0F023(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ProfilerCounters_ConstructMetricCounters_m7A5BC7EB97AE5A9EA28998EC5DB296A6943CAB90 (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, int32_t ___metricType0, const RuntimeMethod* method) 
{
	{
		// => ConstructMetricCounters(metricType.GetDisplayNameString());
		int32_t L_0 = ___metricType0;
		String_t* L_1;
		L_1 = MetricTypeExtensions_GetDisplayNameString_mB9E62BEA967B432D1FD19797ECF7E2E6FAB4086B(L_0, NULL);
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_2;
		L_2 = ProfilerCounters_ConstructMetricCounters_mC8C2650935AE7D7EE0D603A3AFA89C76CE3BC3FC(__this, L_1, NULL);
		return L_2;
	}
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* ProfilerCounters_ConstructMetricCounters_mC8C2650935AE7D7EE0D603A3AFA89C76CE3BC3FC (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new MetricCounters(name, m_ByteCounterFactory, m_EventCounterFactory);
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->___m_ByteCounterFactory_13;
		RuntimeObject* L_2 = __this->___m_EventCounterFactory_14;
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_3 = (MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0*)il2cpp_codegen_object_new(MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MetricCounters__ctor_m43C1A8C767A6A90CAC226CDCAE69A34BF1F71B7B(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::UpdateFromMetrics(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters_UpdateFromMetrics_mD3171E543D39C1180FD915DF42AD0130628C677E (ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectedMetricTypeExtensions_t368DEC67A1D713C796EFBD53D90D272061943079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m28EDC67146EB2608955F94EEF7714F2CF50780FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m04E027EDB5549EF366C6F88C9156209D212CF01A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m5EFE5E2111D544D9AE9BC6B90112E341B44D679C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_mC47BD2474BD13F6D07C917DDFC4EE67B761F57E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m2F2297306D77AD05DE12AE2AD2C643E9178B417A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m921A8F16EBD161F4148FB4A7F0D7E8CF185F1155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m7475E81112BDB0F5D023EBE634CB18BA1C1EC4E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_m841BD460B09CC5B2C4AB9923D6786C81C3D28A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mFBA81E76F01FCEA269277979B1B5135ED7DF2F0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m9F5AF9549AC2E06FF2E3054DD21652D280BCACE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mB0BFDC2E03FD0F6A9139F01EF00E2180CB54699A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m19AC92279B68D88517B45E5AAE1A0A0D6A0A6036_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m0EC8AE9FE40BDB493C598CD41EEF7DB25CE0E08F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m275A041D7F3A1E75172B9E1F39EA2304A43E1C72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m9B5D95A4E2AC17EE162E6C8EBFC72EE160B9A586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m073FF9F81951ECBC82E8329D558F765775359029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDFBD78EFF34C30F8B419CD86AE71858EB0D08196_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m238768EC409BF5DE9E12ED660221A6A4A35A1E56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* G_B2_0 = NULL;
	MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* G_B1_0 = NULL;
	int64_t G_B3_0 = 0;
	MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* G_B3_1 = NULL;
	int64_t G_B5_0 = 0;
	MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* G_B5_1 = NULL;
	int64_t G_B4_0 = 0;
	MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* G_B4_1 = NULL;
	int64_t G_B6_0 = 0;
	int64_t G_B6_1 = 0;
	MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* G_B6_2 = NULL;
	{
		// totalBytes.Sample(
		//     collection.TryGetCounter(DirectedMetricType.TotalBytesSent.GetId(), out var bytesSent)
		//         ? bytesSent.Value
		//         : 0L,
		//     collection.TryGetCounter(DirectedMetricType.TotalBytesReceived.GetId(), out var bytesReceived)
		//         ? bytesReceived.Value
		//         : 0L);
		MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* L_0 = __this->___totalBytes_1;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_1 = ___collection0;
		il2cpp_codegen_runtime_class_init_inline(DirectedMetricTypeExtensions_t368DEC67A1D713C796EFBD53D90D272061943079_il2cpp_TypeInfo_var);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_2;
		L_2 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(6, NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = MetricCollection_TryGetCounter_m002A9388A45AA9562FAF9DA9C81AE6DAF2C7C07A(L_1, L_2, (&V_0), NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((int64_t)0);
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001a:
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* TValue Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>::get_Value() */, IMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_6 = ___collection0;
		il2cpp_codegen_runtime_class_init_inline(DirectedMetricTypeExtensions_t368DEC67A1D713C796EFBD53D90D272061943079_il2cpp_TypeInfo_var);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_7;
		L_7 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(5, NULL);
		NullCheck(L_6);
		bool L_8;
		L_8 = MetricCollection_TryGetCounter_m002A9388A45AA9562FAF9DA9C81AE6DAF2C7C07A(L_6, L_7, (&V_1), NULL);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0034;
		}
	}
	{
		G_B6_0 = ((int64_t)0);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_003a;
	}

IL_0034:
	{
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* TValue Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>::get_Value() */, IMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_il2cpp_TypeInfo_var, L_9);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_003a:
	{
		NullCheck(G_B6_2);
		MetricByteCounters_Sample_m1927F17A64286D9EAEA1B63ED92C86FB09CE7045(G_B6_2, G_B6_1, G_B6_0, NULL);
		// rpc.Sample(
		//     collection.GetEventValues<RpcEvent>(DirectedMetricType.RpcSent.GetId()),
		//     collection.GetEventValues<RpcEvent>(DirectedMetricType.RpcReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_11 = __this->___rpc_2;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_12 = ___collection0;
		il2cpp_codegen_runtime_class_init_inline(DirectedMetricTypeExtensions_t368DEC67A1D713C796EFBD53D90D272061943079_il2cpp_TypeInfo_var);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_13;
		L_13 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)10), NULL);
		RuntimeObject* L_14;
		L_14 = MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m073FF9F81951ECBC82E8329D558F765775359029(L_12, L_13, MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m073FF9F81951ECBC82E8329D558F765775359029_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_15 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_16;
		L_16 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)9), NULL);
		RuntimeObject* L_17;
		L_17 = MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m073FF9F81951ECBC82E8329D558F765775359029(L_15, L_16, MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m073FF9F81951ECBC82E8329D558F765775359029_RuntimeMethod_var);
		NullCheck(L_11);
		MetricCounters_Sample_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m7475E81112BDB0F5D023EBE634CB18BA1C1EC4E1(L_11, L_14, L_17, MetricCounters_Sample_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_m7475E81112BDB0F5D023EBE634CB18BA1C1EC4E1_RuntimeMethod_var);
		// namedMessage.Sample(
		//     collection.GetEventValues<NamedMessageEvent>(DirectedMetricType.NamedMessageSent.GetId()),
		//     collection.GetEventValues<NamedMessageEvent>(DirectedMetricType.NamedMessageReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_18 = __this->___namedMessage_3;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_19 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_20;
		L_20 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)14), NULL);
		RuntimeObject* L_21;
		L_21 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2(L_19, L_20, MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_22 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_23;
		L_23 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)13), NULL);
		RuntimeObject* L_24;
		L_24 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2(L_22, L_23, MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2_RuntimeMethod_var);
		NullCheck(L_18);
		MetricCounters_Sample_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m28EDC67146EB2608955F94EEF7714F2CF50780FA(L_18, L_21, L_24, MetricCounters_Sample_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m28EDC67146EB2608955F94EEF7714F2CF50780FA_RuntimeMethod_var);
		// unnamedMessage.Sample(
		//     collection.GetEventValues<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageSent.GetId()),
		//     collection.GetEventValues<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_25 = __this->___unnamedMessage_4;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_26 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_27;
		L_27 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)18), NULL);
		RuntimeObject* L_28;
		L_28 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1(L_26, L_27, MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_29 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_30;
		L_30 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)17), NULL);
		RuntimeObject* L_31;
		L_31 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1(L_29, L_30, MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1_RuntimeMethod_var);
		NullCheck(L_25);
		MetricCounters_Sample_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m9F5AF9549AC2E06FF2E3054DD21652D280BCACE4(L_25, L_28, L_31, MetricCounters_Sample_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m9F5AF9549AC2E06FF2E3054DD21652D280BCACE4_RuntimeMethod_var);
		// customMessage.Sample(
		//     collection.GetEventValues<NamedMessageEvent>(DirectedMetricType.NamedMessageSent.GetId()),
		//     collection.GetEventValues<NamedMessageEvent>(DirectedMetricType.NamedMessageReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_32 = __this->___customMessage_11;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_33 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_34;
		L_34 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)14), NULL);
		RuntimeObject* L_35;
		L_35 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2(L_33, L_34, MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_36 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_37;
		L_37 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)13), NULL);
		RuntimeObject* L_38;
		L_38 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2(L_36, L_37, MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m40772A5E04ADDA7B07559FDDA6A63D6F673142A2_RuntimeMethod_var);
		NullCheck(L_32);
		MetricCounters_Sample_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m28EDC67146EB2608955F94EEF7714F2CF50780FA(L_32, L_35, L_38, MetricCounters_Sample_TisNamedMessageEvent_t49461F3ACEB9D8EEF54BD7DAB057EE0E07CCB08C_m28EDC67146EB2608955F94EEF7714F2CF50780FA_RuntimeMethod_var);
		// customMessage.Sample(
		//     collection.GetEventValues<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageSent.GetId()),
		//     collection.GetEventValues<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_39 = __this->___customMessage_11;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_40 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_41;
		L_41 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)18), NULL);
		RuntimeObject* L_42;
		L_42 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1(L_40, L_41, MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_43 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_44;
		L_44 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)17), NULL);
		RuntimeObject* L_45;
		L_45 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1(L_43, L_44, MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_mC0B26349C2802FD06004545C88E3708232A295E1_RuntimeMethod_var);
		NullCheck(L_39);
		MetricCounters_Sample_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m9F5AF9549AC2E06FF2E3054DD21652D280BCACE4(L_39, L_42, L_45, MetricCounters_Sample_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m9F5AF9549AC2E06FF2E3054DD21652D280BCACE4_RuntimeMethod_var);
		// networkVariableDelta.Sample(
		//     collection.GetEventValues<NetworkVariableEvent>(DirectedMetricType.NetworkVariableDeltaSent.GetId()),
		//     collection.GetEventValues<NetworkVariableEvent>(DirectedMetricType.NetworkVariableDeltaReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_46 = __this->___networkVariableDelta_5;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_47 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_48;
		L_48 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)22), NULL);
		RuntimeObject* L_49;
		L_49 = MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m19AC92279B68D88517B45E5AAE1A0A0D6A0A6036(L_47, L_48, MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m19AC92279B68D88517B45E5AAE1A0A0D6A0A6036_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_50 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_51;
		L_51 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)21), NULL);
		RuntimeObject* L_52;
		L_52 = MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m19AC92279B68D88517B45E5AAE1A0A0D6A0A6036(L_50, L_51, MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m19AC92279B68D88517B45E5AAE1A0A0D6A0A6036_RuntimeMethod_var);
		NullCheck(L_46);
		MetricCounters_Sample_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m5EFE5E2111D544D9AE9BC6B90112E341B44D679C(L_46, L_49, L_52, MetricCounters_Sample_TisNetworkVariableEvent_tAC73181CA57FA3B7E18557E831648524A1BBC19D_m5EFE5E2111D544D9AE9BC6B90112E341B44D679C_RuntimeMethod_var);
		// objectSpawned.Sample(
		//     collection.GetEventValues<ObjectSpawnedEvent>(DirectedMetricType.ObjectSpawnedSent.GetId()),
		//     collection.GetEventValues<ObjectSpawnedEvent>(DirectedMetricType.ObjectSpawnedReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_53 = __this->___objectSpawned_6;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_54 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_55;
		L_55 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)26), NULL);
		RuntimeObject* L_56;
		L_56 = MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m275A041D7F3A1E75172B9E1F39EA2304A43E1C72(L_54, L_55, MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m275A041D7F3A1E75172B9E1F39EA2304A43E1C72_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_57 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_58;
		L_58 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)25), NULL);
		RuntimeObject* L_59;
		L_59 = MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m275A041D7F3A1E75172B9E1F39EA2304A43E1C72(L_57, L_58, MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m275A041D7F3A1E75172B9E1F39EA2304A43E1C72_RuntimeMethod_var);
		NullCheck(L_53);
		MetricCounters_Sample_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m2F2297306D77AD05DE12AE2AD2C643E9178B417A(L_53, L_56, L_59, MetricCounters_Sample_TisObjectSpawnedEvent_tFCC2F87A9852BE3CC803D674023828B189B48BBF_m2F2297306D77AD05DE12AE2AD2C643E9178B417A_RuntimeMethod_var);
		// objectDestroyed.Sample(
		//     collection.GetEventValues<ObjectDestroyedEvent>(DirectedMetricType.ObjectDestroyedSent.GetId()),
		//     collection.GetEventValues<ObjectDestroyedEvent>(DirectedMetricType.ObjectDestroyedReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_60 = __this->___objectDestroyed_7;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_61 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_62;
		L_62 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)30), NULL);
		RuntimeObject* L_63;
		L_63 = MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m0EC8AE9FE40BDB493C598CD41EEF7DB25CE0E08F(L_61, L_62, MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m0EC8AE9FE40BDB493C598CD41EEF7DB25CE0E08F_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_64 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_65;
		L_65 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)29), NULL);
		RuntimeObject* L_66;
		L_66 = MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m0EC8AE9FE40BDB493C598CD41EEF7DB25CE0E08F(L_64, L_65, MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_m0EC8AE9FE40BDB493C598CD41EEF7DB25CE0E08F_RuntimeMethod_var);
		NullCheck(L_60);
		MetricCounters_Sample_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_mC47BD2474BD13F6D07C917DDFC4EE67B761F57E0(L_60, L_63, L_66, MetricCounters_Sample_TisObjectDestroyedEvent_t37337CBDE861F8B9EDF6F5ABB4487602C17E53F5_mC47BD2474BD13F6D07C917DDFC4EE67B761F57E0_RuntimeMethod_var);
		// serverLog.Sample(
		//     collection.GetEventValues<ServerLogEvent>(DirectedMetricType.ServerLogSent.GetId()),
		//     collection.GetEventValues<ServerLogEvent>(DirectedMetricType.ServerLogReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_67 = __this->___serverLog_8;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_68 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_69;
		L_69 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)38), NULL);
		RuntimeObject* L_70;
		L_70 = MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m238768EC409BF5DE9E12ED660221A6A4A35A1E56(L_68, L_69, MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m238768EC409BF5DE9E12ED660221A6A4A35A1E56_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_71 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_72;
		L_72 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)37), NULL);
		RuntimeObject* L_73;
		L_73 = MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m238768EC409BF5DE9E12ED660221A6A4A35A1E56(L_71, L_72, MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m238768EC409BF5DE9E12ED660221A6A4A35A1E56_RuntimeMethod_var);
		NullCheck(L_67);
		MetricCounters_Sample_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mFBA81E76F01FCEA269277979B1B5135ED7DF2F0F(L_67, L_70, L_73, MetricCounters_Sample_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_mFBA81E76F01FCEA269277979B1B5135ED7DF2F0F_RuntimeMethod_var);
		// sceneEvent.Sample(
		//     collection.GetEventValues<SceneEventMetric>(DirectedMetricType.SceneEventSent.GetId()),
		//     collection.GetEventValues<SceneEventMetric>(DirectedMetricType.SceneEventReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_74 = __this->___sceneEvent_9;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_75 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_76;
		L_76 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)42), NULL);
		RuntimeObject* L_77;
		L_77 = MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDFBD78EFF34C30F8B419CD86AE71858EB0D08196(L_75, L_76, MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDFBD78EFF34C30F8B419CD86AE71858EB0D08196_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_78 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_79;
		L_79 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)41), NULL);
		RuntimeObject* L_80;
		L_80 = MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDFBD78EFF34C30F8B419CD86AE71858EB0D08196(L_78, L_79, MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mDFBD78EFF34C30F8B419CD86AE71858EB0D08196_RuntimeMethod_var);
		NullCheck(L_74);
		MetricCounters_Sample_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_m841BD460B09CC5B2C4AB9923D6786C81C3D28A89(L_74, L_77, L_80, MetricCounters_Sample_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_m841BD460B09CC5B2C4AB9923D6786C81C3D28A89_RuntimeMethod_var);
		// ownershipChange.Sample(
		//     collection.GetEventValues<OwnershipChangeEvent>(DirectedMetricType.OwnershipChangeSent.GetId()),
		//     collection.GetEventValues<OwnershipChangeEvent>(DirectedMetricType.OwnershipChangeReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_81 = __this->___ownershipChange_10;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_82 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_83;
		L_83 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)34), NULL);
		RuntimeObject* L_84;
		L_84 = MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m9B5D95A4E2AC17EE162E6C8EBFC72EE160B9A586(L_82, L_83, MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m9B5D95A4E2AC17EE162E6C8EBFC72EE160B9A586_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_85 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_86;
		L_86 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)33), NULL);
		RuntimeObject* L_87;
		L_87 = MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m9B5D95A4E2AC17EE162E6C8EBFC72EE160B9A586(L_85, L_86, MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m9B5D95A4E2AC17EE162E6C8EBFC72EE160B9A586_RuntimeMethod_var);
		NullCheck(L_81);
		MetricCounters_Sample_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m921A8F16EBD161F4148FB4A7F0D7E8CF185F1155(L_81, L_84, L_87, MetricCounters_Sample_TisOwnershipChangeEvent_t87B6E5EFF0A89CF29ED5E6A410C4D8562101AD38_m921A8F16EBD161F4148FB4A7F0D7E8CF185F1155_RuntimeMethod_var);
		// networkMessage.Sample(
		//     collection.GetEventValues<NetworkMessageEvent>(DirectedMetricType.NetworkMessageSent.GetId()),
		//     collection.GetEventValues<NetworkMessageEvent>(DirectedMetricType.NetworkMessageReceived.GetId()));
		MetricCounters_t5EED6DBE4970C6486197333F04361A49608FC5A0* L_88 = __this->___networkMessage_12;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_89 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_90;
		L_90 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)46), NULL);
		RuntimeObject* L_91;
		L_91 = MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mB0BFDC2E03FD0F6A9139F01EF00E2180CB54699A(L_89, L_90, MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mB0BFDC2E03FD0F6A9139F01EF00E2180CB54699A_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_92 = ___collection0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_93;
		L_93 = DirectedMetricTypeExtensions_GetId_m15AA9635645E3422BB8357FFADEB3C4F02AC7836(((int32_t)45), NULL);
		RuntimeObject* L_94;
		L_94 = MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mB0BFDC2E03FD0F6A9139F01EF00E2180CB54699A(L_92, L_93, MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_mB0BFDC2E03FD0F6A9139F01EF00E2180CB54699A_RuntimeMethod_var);
		NullCheck(L_88);
		MetricCounters_Sample_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m04E027EDB5549EF366C6F88C9156209D212CF01A(L_88, L_91, L_94, MetricCounters_Sample_TisNetworkMessageEvent_tD3FF4DD5E7E500CCD93C16B4D3877F2C21199E21_m04E027EDB5549EF366C6F88C9156209D212CF01A_RuntimeMethod_var);
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibilityProfilerMetricObserver__ctor_m6BEA62E9B202B5E16B569BC5317A001A5C34F581 (ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ExtensibilityProfilerMetricObserver()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_NetStatSerializer = new NetStatSerializer();
		NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E* L_0 = (NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E*)il2cpp_codegen_object_new(NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NetStatSerializer__ctor_m9C4C58C9E498B39BD958D5596470165CC74318F2(L_0, NULL);
		__this->___m_NetStatSerializer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NetStatSerializer_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibilityProfilerMetricObserver_Observe_m821FC424B17561D3F81E99071C0572C124246BBC (ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver::PopulateProfilerIfEnabled(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibilityProfilerMetricObserver_PopulateProfilerIfEnabled_mD773710467442339B26AB19F06524414718D9B6C (ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetStatSerializer_t7FEF6F737369EE918021C4D9587B3F3B8F2948D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ProfilerCounters.Instance.UpdateFromMetrics(collection);
		ProfilerCounters_t1C839C38EFDAC44F3D884ADD616F6AF8F23A00C3* L_0;
		L_0 = ProfilerCounters_get_Instance_m55A0FA5692DC4C5C6E0E37A8C247DAE78328383B(NULL);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_1 = ___collection0;
		NullCheck(L_0);
		ProfilerCounters_UpdateFromMetrics_mD3171E543D39C1180FD915DF42AD0130628C677E(L_0, L_1, NULL);
		// using var result = m_NetStatSerializer.Serialize(collection);
		RuntimeObject* L_2 = __this->___m_NetStatSerializer_0;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_3 = ___collection0;
		NullCheck(L_2);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4;
		L_4 = InterfaceFuncInvoker1< NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* >::Invoke(0 /* Unity.Collections.NativeArray`1<System.Byte> Unity.Multiplayer.Tools.NetStats.INetStatSerializer::Serialize(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, INetStatSerializer_t7FEF6F737369EE918021C4D9587B3F3B8F2948D9_il2cpp_TypeInfo_var, L_2, L_3);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_0), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// }
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.FrameInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameInfo__cctor_m9B13BF4C44239CDAC464AA765ED32865EC413E34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameInfo_t143CD9AEDBA9EE19B1D8979BA3A7CF8F524B2F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral881CFDF35EA59A6A902F74DFC7CD5D24039ECC88);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Guid NetworkProfilerGuid = new Guid("42c5aec2-fb86-4172-a384-34063f1bd332");
		Guid_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_0), _stringLiteral881CFDF35EA59A6A902F74DFC7CD5D24039ECC88, /*hidden argument*/NULL);
		((FrameInfo_t143CD9AEDBA9EE19B1D8979BA3A7CF8F524B2F9D_StaticFields*)il2cpp_codegen_static_fields_for(FrameInfo_t143CD9AEDBA9EE19B1D8979BA3A7CF8F524B2F9D_il2cpp_TypeInfo_var))->___NetworkProfilerGuid_0 = L_0;
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::.ctor(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesSentAndReceived__ctor_m684058BD6EB68547404C6A47B921DAC5C3765B3B (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, int64_t ___sent0, int64_t ___received1, const RuntimeMethod* method) 
{
	{
		// Sent = sent;
		int64_t L_0 = ___sent0;
		__this->___U3CSentU3Ek__BackingField_0 = L_0;
		// Received = received;
		int64_t L_1 = ___received1;
		__this->___U3CReceivedU3Ek__BackingField_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BytesSentAndReceived__ctor_m684058BD6EB68547404C6A47B921DAC5C3765B3B_AdjustorThunk (RuntimeObject* __this, int64_t ___sent0, int64_t ___received1, const RuntimeMethod* method)
{
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*>(__this + _offset);
	BytesSentAndReceived__ctor_m684058BD6EB68547404C6A47B921DAC5C3765B3B(_thisAdjusted, ___sent0, ___received1, method);
}
// System.Int64 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::get_Sent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) 
{
	{
		// public long Sent { get; }
		int64_t L_0 = __this->___U3CSentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::get_Received()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) 
{
	{
		// public long Received { get; }
		int64_t L_0 = __this->___U3CReceivedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Multiplayer.Tools.MetricTypes.NetworkDirection Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BytesSentAndReceived_get_Direction_m0F9249B9406774C1368747E8CEB16C4C328381CB (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// (Sent     > 0f ? NetworkDirection.Sent : NetworkDirection.None) |
		// (Received > 0f ? NetworkDirection.Received : NetworkDirection.None);
		int64_t L_0;
		L_0 = BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline(__this, NULL);
		if ((((float)((float)L_0)) > ((float)(0.0f))))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 2;
	}

IL_0012:
	{
		int64_t L_1;
		L_1 = BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline(__this, NULL);
		G_B4_0 = G_B3_0;
		if ((((float)((float)L_1)) > ((float)(0.0f))))
		{
			G_B5_0 = G_B3_0;
			goto IL_0023;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0024:
	{
		return (int32_t)(((int32_t)(G_B6_1|G_B6_0)));
	}
}
IL2CPP_EXTERN_C  int32_t BytesSentAndReceived_get_Direction_m0F9249B9406774C1368747E8CEB16C4C328381CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BytesSentAndReceived_get_Direction_m0F9249B9406774C1368747E8CEB16C4C328381CB(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::get_Total()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BytesSentAndReceived_get_Total_mC4E5B430F7D82375140ACCB71EA07BF952A3D443 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) 
{
	{
		// public long Total => Sent + Received;
		int64_t L_0;
		L_0 = BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline(__this, NULL);
		int64_t L_1;
		L_1 = BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline(__this, NULL);
		return ((int64_t)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  int64_t BytesSentAndReceived_get_Total_mC4E5B430F7D82375140ACCB71EA07BF952A3D443_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = BytesSentAndReceived_get_Total_mC4E5B430F7D82375140ACCB71EA07BF952A3D443(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::Equals(Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BytesSentAndReceived_Equals_m4E7D1DB5D970EAFD740AA6808DAE0F845BF5C888 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 ___other0, const RuntimeMethod* method) 
{
	{
		// return Sent == other.Sent &&
		//        Received == other.Received;
		int64_t L_0;
		L_0 = BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline(__this, NULL);
		int64_t L_1;
		L_1 = BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline((&___other0), NULL);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		int64_t L_2;
		L_2 = BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline(__this, NULL);
		int64_t L_3;
		L_3 = BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline((&___other0), NULL);
		return (bool)((((int64_t)L_2) == ((int64_t)L_3))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BytesSentAndReceived_Equals_m4E7D1DB5D970EAFD740AA6808DAE0F845BF5C888_AdjustorThunk (RuntimeObject* __this, BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 ___other0, const RuntimeMethod* method)
{
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*>(__this + _offset);
	bool _returnValue;
	_returnValue = BytesSentAndReceived_Equals_m4E7D1DB5D970EAFD740AA6808DAE0F845BF5C888(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BytesSentAndReceived_Equals_mCCED4CCF34F9B287B4ACF1C6F25AB8F94BA7DF8D (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj is BytesSentAndReceived other && Equals(other);
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*)((BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*)(BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*)UnBox(L_1, BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4_il2cpp_TypeInfo_var))));
		BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 L_2 = V_0;
		bool L_3;
		L_3 = BytesSentAndReceived_Equals_m4E7D1DB5D970EAFD740AA6808DAE0F845BF5C888(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BytesSentAndReceived_Equals_mCCED4CCF34F9B287B4ACF1C6F25AB8F94BA7DF8D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*>(__this + _offset);
	bool _returnValue;
	_returnValue = BytesSentAndReceived_Equals_mCCED4CCF34F9B287B4ACF1C6F25AB8F94BA7DF8D(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::op_Addition(Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 BytesSentAndReceived_op_Addition_m5B6C9717C82D42A0A7828A10A5E00F2674F3125C (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 ___a0, BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 ___b1, const RuntimeMethod* method) 
{
	{
		// BytesSentAndReceived b) => new BytesSentAndReceived(
		//     a.Sent + b.Sent,
		//     a.Received + b.Received);
		int64_t L_0;
		L_0 = BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline((&___a0), NULL);
		int64_t L_1;
		L_1 = BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline((&___b1), NULL);
		int64_t L_2;
		L_2 = BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline((&___a0), NULL);
		int64_t L_3;
		L_3 = BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline((&___b1), NULL);
		BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4 L_4;
		memset((&L_4), 0, sizeof(L_4));
		BytesSentAndReceived__ctor_m684058BD6EB68547404C6A47B921DAC5C3765B3B((&L_4), ((int64_t)il2cpp_codegen_add(L_0, L_1)), ((int64_t)il2cpp_codegen_add(L_2, L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BytesSentAndReceived_GetHashCode_m1E875455647014F2768D3F4B6FC5E7D22CFBDA04 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// return (Sent.GetHashCode() * 397) ^ Received.GetHashCode();
		int64_t L_0;
		L_0 = BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		int64_t L_2;
		L_2 = BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t BytesSentAndReceived_GetHashCode_m1E875455647014F2768D3F4B6FC5E7D22CFBDA04_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BytesSentAndReceived_GetHashCode_m1E875455647014F2768D3F4B6FC5E7D22CFBDA04(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.BytesSentAndReceived::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BytesSentAndReceived_ToString_m4A00A0C5B862C5C0EA394D85E8D28B82E9390450 (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227178DFB763A5E7FB1A4CFF2E9CF85DC22BA318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0B3C53175534E6E16222A2A624A307AA421CD88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB783DAAA57C731F6EC2E834C8E00B9BE8569BDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC694EB44AD9534128720F9E76FC5916F879F2673);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{nameof(BytesSentAndReceived)}: {nameof(Sent)}={Sent} {nameof(Received)}={Received}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralBB783DAAA57C731F6EC2E834C8E00B9BE8569BDA);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralBB783DAAA57C731F6EC2E834C8E00B9BE8569BDA);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralA0B3C53175534E6E16222A2A624A307AA421CD88);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralA0B3C53175534E6E16222A2A624A307AA421CD88);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int64_t L_4;
		L_4 = BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline(__this, NULL);
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral227178DFB763A5E7FB1A4CFF2E9CF85DC22BA318);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral227178DFB763A5E7FB1A4CFF2E9CF85DC22BA318);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		int64_t L_9;
		L_9 = BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline(__this, NULL);
		int64_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_11);
		String_t* L_12;
		L_12 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralC694EB44AD9534128720F9E76FC5916F879F2673, L_8, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* BytesSentAndReceived_ToString_m4A00A0C5B862C5C0EA394D85E8D28B82E9390450_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BytesSentAndReceived_ToString_m4A00A0C5B862C5C0EA394D85E8D28B82E9390450(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProfilerMetricObserverFactory_Construct_m6ABBC8031C6A462A5A2648B81DB095914F082341 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ExtensibilityProfilerMetricObserver();
		ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D* L_0 = (ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D*)il2cpp_codegen_object_new(ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExtensibilityProfilerMetricObserver__ctor_m6BEA62E9B202B5E16B569BC5317A001A5C34F581(L_0, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Sent_mC97D8190FB75086A6566747A73E5CEA1EECFB4E6_inline (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, const RuntimeMethod* method) 
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->___U3CSentU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Received_m59C838195C22C352ABA8D7F0AB49FC09ED7E93F2_inline (MetricByteCounters_t93939B32EAFF5C62DEAC49479C24B257BED5AC16* __this, const RuntimeMethod* method) 
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->___U3CReceivedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Sent_m78BE5E723C71AB0CAAF3BBC0F5FDC6DC35871D7F_inline (MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* __this, const RuntimeMethod* method) 
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->___U3CSentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Received_m8B0522797455165C4CA584D2351D008182DF0C42_inline (MetricEventCounters_t6018F3D388A02986183F5884F3D18564D9F6C172* __this, const RuntimeMethod* method) 
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->___U3CReceivedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BytesSentAndReceived_get_Sent_m79C4EA362D38F53F33C6454749E0FFD1C2823952_inline (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) 
{
	{
		// public long Sent { get; }
		int64_t L_0 = __this->___U3CSentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BytesSentAndReceived_get_Received_m5ECBDE93C5FF0F1A0E701FD348DF5C1A86F09F31_inline (BytesSentAndReceived_t0D27449F7B050E7E6EB2B17F0767E5E88DE359C4* __this, const RuntimeMethod* method) 
{
	{
		// public long Received { get; }
		int64_t L_0 = __this->___U3CReceivedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerCounter_1__ctor_m72EFD69FAA82C502E583EA8D3745B0DE476199ED_gshared_inline (ProfilerCounter_1_t164CEA6505C01A0E203C256D3F24F0D943978945* __this, ProfilerCategory_tA55212CD512C618AF6D2147791F20319896592AC ___category0, String_t* ___name1, uint8_t ___dataUnit2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
