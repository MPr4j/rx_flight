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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.TimeSpan>
struct Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Comparison`1<System.Type>
struct Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F;
// System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,System.Object>
struct Dictionary_2_tDD3A5F093E79FE915DB02B3552CF6E783E2B8259;
// System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>
struct Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.IMetricFactory>
struct Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>
struct Dictionary_2_t5E0BCF779234BFF5217440062C5B9F168E75A418;
// System.Collections.Generic.Dictionary`2<System.Object,Unity.Collections.FixedString128Bytes>
struct Dictionary_2_t24F6B0216907A334374111D15A21F5B501DA245A;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes>
struct Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182;
// System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>
struct Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1;
// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.MetricId>
struct Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174;
// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6;
// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.MetricId>
struct Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A;
// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA;
// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.MetricId>
struct Func_2_t7131B4C0145140272524199F11576D928ECEDA25;
// System.Func`2<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7;
// System.Func`2<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.MetricId>
struct Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A;
// System.Func`2<System.Object,Unity.Multiplayer.Tools.NetStats.MetricId>
struct Func_2_tDE80C816D0761B36D4FB1A00CB4277669A9E89B0;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IDictionary_2_tF8CD782A39E499BD52EA5A0F185CEA51AFC1DBD8;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IDictionary_2_t4B8872AF87BDCD5BAC8034637D6384CDB86E0670;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IDictionary_2_tD49526E115134676B52C79C40E01273008A30B86;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IDictionary_2_t174EBA2F70EAECFB42935872FC11660855D24EE1;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>
struct IDictionary_2_t3F471ED8D1CD5D04E1375E23AD02EA0BF2CC6FB6;
// System.Collections.Generic.IEnumerable`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IEnumerable_1_t8B1AE0C44DE923869C7DAD0DE5C202B0BBEDA07A;
// System.Collections.Generic.IEnumerable`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IEnumerable_1_tB5B21D8D546B99A7D39EFBE9C9EE3D6C7757B9BA;
// System.Collections.Generic.IEnumerable`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IEnumerable_1_t3F1BFE4640BE26BD1C82B3F9332A76AC1B126685;
// System.Collections.Generic.IEnumerable`1<Unity.Multiplayer.Tools.NetStats.AssemblyRequiresTypeRegistrationAttribute>
struct IEnumerable_1_t037A93C99051DED2BEBC9ED3F5B0BE641905D551;
// System.Collections.Generic.IEnumerable`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IEnumerable_1_tB052BFD85E9DC03F03AB21FD024476CE5182F6F6;
// System.Collections.Generic.IEnumerable`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IEnumerable_1_t59277989AF8A9A5229CC8A3976955B1A33834720;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<Unity.Collections.FixedString128Bytes>
struct IEqualityComparer_1_t85432BB57630F9E74F4E69A6365B42785F829E69;
// System.Collections.Generic.IEqualityComparer`1<Unity.Multiplayer.Tools.NetStats.MetricContainerType>
struct IEqualityComparer_1_t54485AE77D2EF661B327F798BE7205FDB2D54458;
// System.Collections.Generic.IEqualityComparer`1<Unity.Multiplayer.Tools.NetStats.MetricId>
struct IEqualityComparer_1_tA41EEB94E0AEB4E45D70A77D577B53A42A5F0B8C;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IList`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>
struct IList_1_t28F5E7749598850DA42581B33F9833C63EAF762D;
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>
struct IMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79;
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>
struct IMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F;
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>
struct IMetric_1_tC218B8CA02115EC1A34723991F46178596F95801;
// System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IReadOnlyCollection_1_t022FB46256F68CB83207947B281BBE2B9384FEA1;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IReadOnlyDictionary_2_t7E602F68B800E9FD97AE5462BAAEB2B2A0A6A6FD;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IReadOnlyDictionary_2_t1C9E4278DD0992BFB53341CF2B1D31E871D5CB59;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IReadOnlyDictionary_2_t727071262B8B87C9F1C794CCE7F03282F35F8F4C;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IReadOnlyDictionary_2_tC190C0DF3FC65E46AC2382576C1FF9A793C41951;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IReadOnlyList_1_t8DF24A4F8FFE34DF245254F1D7195E6360D9C0D1;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IReadOnlyList_1_tACBB2E1C257871194507D0C10E16FD03C486E45A;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct IReadOnlyList_1_t220A2DEB3D29BDA8E50F99D820459DDDF84F2C20;
// System.Collections.Generic.IReadOnlyList`1<System.Int32>
struct IReadOnlyList_1_t941CE4E7615A3504595F7091E7217D4645DF7633;
// System.Collections.Generic.IReadOnlyList`1<System.String>
struct IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF;
// System.Collections.Generic.IReadOnlyList`1<System.Type>
struct IReadOnlyList_1_tFAB749F93AC9273AC78377822795638920495BA2;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>
struct KeyCollection_tA66CBD8262F37CB8CDCAE804C38B8AFD19CF6AD6;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.IMetricFactory>
struct KeyCollection_tEF3C8442FFEC874EC46AC84186C6E14E4B4FEB10;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct KeyCollection_t029F21547E13D8B6ED616F4FC2B0C21498563960;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct KeyCollection_tF788E37F75B2AC34DF72560836E3981D7C854971;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct KeyCollection_tB3BF6188B2A1577FF7C568617A716E0B20FF26E5;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct KeyCollection_tC7528A2F3FFDEF23D82D1A684E0D63AF20148B05;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct KeyCollection_tE7F79D4EB9C1990DE636AE0A363E452BD67C2996;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct KeyCollection_t7B2FF7348C0BC7932654A90AC3E996EE0D50502F;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct KeyCollection_t30EF439DCC1EBFB0BCC804281D85BDBEEBFCA37C;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct KeyCollection_t8332C73DD7941413C90940C39FFAFAF41D43D056;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Unity.Collections.FixedString128Bytes>
struct KeyCollection_t2B357606A0A02E15450DFA4CEFEC7AE50E4B398D;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct List_1_t7782731B306A68D587677546249E9976ED8A52FD;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.BaseUnits[]>
struct List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C;
// System.Collections.Generic.List`1<System.Boolean[]>
struct List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C;
// System.Collections.Generic.List`1<System.Int32Enum[]>
struct List_1_t646D52E8A66A9CB2BCFF4A394F522DAAEE04425A;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.MetricKind[]>
struct List_1_tDC7039B2AB81C1499872DB600BD309EE76715240;
// System.Collections.Generic.List`1<System.Object[]>
struct List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0;
// System.Collections.Generic.List`1<System.String[]>
struct List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct List_1_t7B798011481AAA808C915C14FF590842496ACEAE;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>
struct List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>
struct Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390;
// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>
struct Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334;
// Unity.Multiplayer.Tools.NetStats.Metric`1<System.TimeSpan>
struct Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>
struct ReadOnlyDictionary_2_t7D0A248941C3C8D7D0E8FBE0B7E5EDF0C15A5A0B;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>
struct ValueCollection_t8476E829A26A163371EC54DAD769E59177358C64;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.IMetricFactory>
struct ValueCollection_t880C99F18DFED54F552E13BB44BA28E61ADE5C68;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ValueCollection_tFE858C38AF33A5214A5B3E23495FB53F5E51474B;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ValueCollection_tD7B97E712FF21F5D642ED46CDF3BD08FC6183433;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ValueCollection_tE4683345E8BCC2B3DCCDAA2D17325BE6AED66E80;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ValueCollection_t5E5EC99573826D97A8FFBED1EFD1ABA06BC3B92E;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ValueCollection_t92E18160D51880BD69E951DDB120EE859DD395E9;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ValueCollection_tA6D5CA0DCAE187619A656C1F1960C80A37D1F3C5;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ValueCollection_tBAD89F12DF49C436B573D0918ACB52F5683E9E0D;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ValueCollection_tDFDC2E86BF9BF749F9220DC0F81430030E81F26A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Unity.Collections.FixedString128Bytes>
struct ValueCollection_tD3EB8E9BC1FCF7BE9DCBC46C2517083BD443C78D;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>[]
struct EntryU5BU5D_t94BED53FC9C3E52D72FE64BD0D1583E798E2260C;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.IMetricFactory>[]
struct EntryU5BU5D_tD95CBEB303684A3EAACC3B1338784CA3D375E637;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>[]
struct EntryU5BU5D_tA53B24141E8DAD1A43B4F6F422E61BA0D55CB563;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>[]
struct EntryU5BU5D_t9F0930DAC3F9E18BBE5F7ABD16262A6E43FE540A;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>[]
struct EntryU5BU5D_t65447A2FFF92EC3088273CA331CB3DCEB97F83DD;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>[]
struct EntryU5BU5D_tAE6BD522750C42EF7DB7EB0E1AA69E171364DFC1;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Unity.Collections.FixedString128Bytes>[]
struct EntryU5BU5D_t607A63810D59CA9211EA44BF724C3CF32DB27D94;
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>[]
struct IMetric_1U5BU5D_t2EAC910BDF9CD32E960D3B049A854092D88FF446;
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>[]
struct IMetric_1U5BU5D_t1FF15DBA6762E20E702708D67623357D671A2E24;
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>[]
struct IMetric_1U5BU5D_t3BB54E24DEEEBDDEF34E40EEEEF309C467746781;
// Unity.Multiplayer.Tools.NetStats.BaseUnits[][]
struct BaseUnitsU5BU5DU5BU5D_t43221411A299BF2B334DD73F6F67F2406CB14AD7;
// System.Boolean[][]
struct BooleanU5BU5DU5BU5D_t71F0B22F93E41A588932E9FAA6BDC06D731064CC;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Unity.Multiplayer.Tools.NetStats.MetricKind[][]
struct MetricKindU5BU5DU5BU5D_t755E8DAB9CDBE6D8C227D1A6F99D1C0713D969E9;
// System.String[][]
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// Unity.Multiplayer.Tools.NetStats.BaseUnits[]
struct BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Unity.Multiplayer.Tools.NetStats.Counter[]
struct CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Unity.Multiplayer.Tools.NetStats.Gauge[]
struct GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991;
// Unity.Multiplayer.Tools.NetStats.IEventMetric[]
struct IEventMetricU5BU5D_tDACBD3F048C69B1C0C17AE7DCEB7D05F27154183;
// Unity.Multiplayer.Tools.NetStats.IMetric[]
struct IMetricU5BU5D_tF2DEB17A2A50B244B6690E22C4EA04ADC044C068;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver[]
struct IMetricObserverU5BU5D_t40E2F2EBC03CFAD6B90BDEC5025DA4F9E3E68E5D;
// Unity.Multiplayer.Tools.NetStats.IResettable[]
struct IResettableU5BU5D_tB4C054F442D9997A64EF302C6286121B574D750B;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// Unity.Multiplayer.Tools.NetStats.MetricKind[]
struct MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.Multiplayer.Tools.NetStats.Timer[]
struct TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// Unity.Multiplayer.Tools.NetStats.AssemblyRequiresTypeRegistrationAttribute
struct AssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Unity.Multiplayer.Tools.NetStats.Counter
struct Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB;
// Unity.Multiplayer.Tools.NetStats.CounterFactory
struct CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB689CA751E0E3EDC08A87C2A28D22C7BE9046FD4;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// Unity.Multiplayer.Tools.NetStats.EventMetricFactory
struct EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18;
// Unity.Multiplayer.Tools.NetStats.Gauge
struct Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9;
// Unity.Multiplayer.Tools.NetStats.GaugeFactory
struct GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// Unity.Multiplayer.Tools.NetStats.IEventMetric
struct IEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104;
// Unity.Multiplayer.Tools.NetStats.IMetric
struct IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C;
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher
struct IMetricDispatcher_t38D0C9FE3CBF91C06B20F7E4512692F6E68AD456;
// Unity.Multiplayer.Tools.NetStats.IMetricFactory
struct IMetricFactory_t44AA82109044DD9CE5F9F32F49150F3F3C6867B9;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67;
// Unity.Multiplayer.Tools.NetStats.IResettable
struct IResettable_tA716639B28412EAB4F0C8CB11586A9B9FCAA7E7F;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t4475164ABDA610E14FA864B4087D5FF26AD93205;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA;
// Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder
struct MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcher
struct MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder
struct MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037;
// Unity.Multiplayer.Tools.NetStats.MetricFactory
struct MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14;
// Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute
struct MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61;
// Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute
struct MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349;
// Unity.Multiplayer.Tools.NetStats.MetricTypeEnumHideInInspectorAttribute
struct MetricTypeEnumHideInInspectorAttribute_t48ED7C550F7EFB7EC7B08BDC06CEA20B5A9A6455;
// Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute
struct MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C;
// Unity.Multiplayer.Tools.NetStats.NetStatSerializer
struct NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// Unity.Multiplayer.Tools.NetStats.Timer
struct Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE;
// Unity.Multiplayer.Tools.NetStats.TimerFactory
struct TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory
struct IEventMetricFactory_t72673E32A79DC35650B7BB80250F9301AA86FCB5;
// Unity.Multiplayer.Tools.NetStats.FastBufferReader/ReaderHandle
struct ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8;
// Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle
struct WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D;
// Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c
struct U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0;
// Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c
struct U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseUnit_tB80AB948A1FCDEC2953765318D3959C58D103242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7131B4C0145140272524199F11576D928ECEDA25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t475416394B9EC14524E7851A4516498F8F13A26C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t174EBA2F70EAECFB42935872FC11660855D24EE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t4B8872AF87BDCD5BAC8034637D6384CDB86E0670_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tD49526E115134676B52C79C40E01273008A30B86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tF8CD782A39E499BD52EA5A0F185CEA51AFC1DBD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEventMetricFactory_t72673E32A79DC35650B7BB80250F9301AA86FCB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t28F5E7749598850DA42581B33F9833C63EAF762D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricFactory_t44AA82109044DD9CE5F9F32F49150F3F3C6867B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t022FB46256F68CB83207947B281BBE2B9384FEA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tBC5119158FB55C0F6D545E6B0F7C2E645B2EBDC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tC9428F7495FE8833226612922C90E9FEAEEBBFEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t1C9E4278DD0992BFB53341CF2B1D31E871D5CB59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t727071262B8B87C9F1C794CCE7F03282F35F8F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t7E602F68B800E9FD97AE5462BAAEB2B2A0A6A6FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tC190C0DF3FC65E46AC2382576C1FF9A793C41951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t220A2DEB3D29BDA8E50F99D820459DDDF84F2C20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t8DF24A4F8FFE34DF245254F1D7195E6360D9C0D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tACBB2E1C257871194507D0C10E16FD03C486E45A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResettable_tA716639B28412EAB4F0C8CB11586A9B9FCAA7E7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7782731B306A68D587677546249E9976ED8A52FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7B798011481AAA808C915C14FF590842496ACEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDC7039B2AB81C1499872DB600BD309EE76715240_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricContainerType_tC83D4045026861142C26C8D7BB51E215A1544D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricPrefix_t35A905BE890FFC6E1CE8C10CB9FEE833D2A063C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortPriority_t309402416951EF7770352C3032EF3B0BF9B12632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Units_tA63DF22D3DB32BC8A444A1D82A866321C270993B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB35EFB19030E964912B4AFF3DA656579F99C965E____270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC;
IL2CPP_EXTERN_C String_t* _stringLiteral058AAB71D333CB1ADEB82A91D9C0D000B3792695;
IL2CPP_EXTERN_C String_t* _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226;
IL2CPP_EXTERN_C String_t* _stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0D3FA41C5236CC397EDB30F2B1AF914E2AB7AF;
IL2CPP_EXTERN_C String_t* _stringLiteral18E50F5806DF61CD4E143EA29E9DBC74F2875934;
IL2CPP_EXTERN_C String_t* _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B;
IL2CPP_EXTERN_C String_t* _stringLiteral19F4B10A630FB37DC69458033E454DF1D169CB75;
IL2CPP_EXTERN_C String_t* _stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral37A50091974FE11FAC57C870272F76245820AA18;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF2E07EC46CFCECE11F1BDCB6EFB5CBFDD25EB7;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral508EE52B975B68ACCC0D2BD78585E09E71C34CD6;
IL2CPP_EXTERN_C String_t* _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral7A9FB7CDBEE797FBDB72473FE967CE7BB7C5E784;
IL2CPP_EXTERN_C String_t* _stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral96871D276C672785BE299C9D243E065BB938A648;
IL2CPP_EXTERN_C String_t* _stringLiteralA163BF750BA54962038F6D81F8D7EBA3DB103531;
IL2CPP_EXTERN_C String_t* _stringLiteralA4EF1F8AD1F98BFBCFB553F35E75432499368CB4;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralABB7DFA10F06559A9DAFBF59004186C4D1EC0FD7;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A464BAC87A9D635B6873D8A9423C9C0235968B;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralC32C967844CBADD1B0720BB12964D0BAC186C90A;
IL2CPP_EXTERN_C String_t* _stringLiteralC3577256CEDECAAE028F2052BFD09A4CB016292D;
IL2CPP_EXTERN_C String_t* _stringLiteralC39A9EEB24B37B3A11DF2E1EEA8D1C8B4B226CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralCAB94F7A39C6A659381F05E3A5655D7551331441;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17;
IL2CPP_EXTERN_C String_t* _stringLiteralDE84DB8BED5C78DBDEDEE7C8B233DF10E3E7A0BF;
IL2CPP_EXTERN_C String_t* _stringLiteralE218EA2E09B1E4F88FB8E283BB10493526972256;
IL2CPP_EXTERN_C String_t* _stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m632CD14E7EA16924B58EF17FF66EA425256A6614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseUnitExtensions_GetSymbol_m3BEBBDDB70EBEC3230CA06D7740BE09CA1ACD31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitReader_ReadByteBits_m38B2485005A64266B223553CC72DFE86568E565E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitReader_ReadPartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7CE9F8E7F571F935B51876F0D52CCD9DAF5C7221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitWriter_WritePartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2141D5870D1F4E0362442402A575164053AD5BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferSerializerReader_GetFastBufferWriter_m30FFADCC5275C721D76C38F13E3ABBE05B42D0C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferSerializerWriter_GetFastBufferReader_mF76A1576847E72C4EFDCD768A88D2727C6BB32A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisMetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61_mF1121CBC7FB0E3DEA37E91DB1F5A06465D74A980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349_m15529F7FB8E35D9C1ECAB2FBEC543820B78D3994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C_m360361C9BEB8BCE7D3A88CAEF606C9B2BB076FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttributes_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m8082EFB5D71296D367EEAAE62ECFF6D753AE8C61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3F51C15A060824B5F4E7FA268F0D37E89813A298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8575D0745298617682E5E1C83ABD395FB38F58D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDEA38E41F6D500FCCAF1A39384212F8B67420B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m32684AAFB7498E32C30555481C9CC736A1D26DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DDF0E04EF2390891B811D819E5A54F32895D667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m61DC4AA8A64ED4554ED2DC062CED147466266522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m894DF7EE77C50F675B04E2F8C71D05FA5A8EF0E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m93F452D54806291086A057C47BD72C71BFBA20C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB33725E9912C56B73B8E4B8C2A6CA65C6B451C26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB4CC63F32B175BC9BA98E5EEB20B6E905306E13D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m197616C19A765122C50C245388AFE09E332E4BE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9ADDB03C7FE2ED8E2D9B9335721B7462C73C2176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m92079708E0B0B8143A53C313E8C62D34708D5061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisMemberInfo_t_m105E69734FD6A9FD38D5895CD46ED1A4ED33750C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mF902E61FDC9AA23802780B3A5D1DD83D4611E24E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m16DC1B277B742D451D819E466BA7CBCB826DA019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_mF9861B0B0068F48C04D2EF9A7D6A56C3174077D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m648B052929D921294E0B852C8ECCF2B75B4F72BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mAC0698C91DE3AD46F5B353D840F76D5541B79E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m4D82581A54B76CB8D8B8DEC7AB4FDE898C692BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m694970CF67E2BC2A3E0A577EE16D91139E983295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m080BB2145AC6DE05BF2BE3B5AF5980C2BDFE61CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_m52520781A8AFEC1111E4187E00345DC77E22105D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m580F3C496AF72BED8315706D93ABE82CCF9E90B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m1B20E57D346B354B120A28C200F0B6211B5D490D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m2FD72C7F12F3069F0EE487AD409386E900DB3A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_m5BA6BD8AE8B20AE78F3615D24E00BB0DFBA0287A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m878F45BD79B2E009392DB26E1D848C9EDA8D7187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadByteSafe_mC94572634D5F5E8D6BB4E75E8FC7E9210634F6B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C62D190000EAAB69F20F921A12908AB1DC8E97A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m9B9FC681AF5522CE6EEC94A603F62AB443E997C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB606784170577636C0C8612B9C23547AAD78F8E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_m1BDAD6796F266DD99CD57E73EB3474AE11389206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0BC6278DE63DB9413D2F07D37071687CAC0DFDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader__ctor_m7384BAF2956CC2A6D0F437C0F64709D90CFB213B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader__ctor_m794A8F85421B9E0F90CC795CD3F2157269315549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m2C1EA972CDCAD3C6C6334B6C3B7732C896B47E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3928C841D42C9DB77C0C8DD282FAEB2A1670108E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteByteSafe_m92532B2CFB3C830D32E689C7BCDF69CA1F4A4B5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4A7524495BACD1B2C706221F5419C8783633F221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m15736FBAFD419473C583C710188DB2FB93A9CE85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5F5C9000217BB7839B7146F5E5C76D6CF0DFA0B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_m63E101F96EACCBC7F3C93A97B48CAA7ADC3194CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m2F90BB4F94E3DC65A8D214E3CAA3F73F26137B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m516779D730470A3E6A5FDEE765AC01493E0A4299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m5AA8532504BEA30EB51C8545CC8875628F544A9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m04D75BB37004EA98C46853886EBA166215B1F3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m639C5F3FD86ADEB5CC9B1FC510CB26CAD7E63DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m69784C91F281A89477974FB95BEA6166F41FDAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m926708BBEA1A57FF6B812BFB165466C637F5219D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9687500B35B1801826B07991E4129692BEE2DC28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC2AEA78982ECE580E4329735D062D1B5F1A12B94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mF575CBDE461D2C6A182C0371279C31E5D038D5F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m7F8680A9AADBEC02DB8AA2655391081A6057E3DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m066769912F558DFB69ECBCAAD8517E4DB975BB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1844A27105FE911B4461A64621C063B8D8CD587A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m22BEB381C1E9C4212A045674F13B3329208001A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2332EC400620C034DC83E7A1D5551FE567572D04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m425AB9FA96452A176DF4921477E6671F3ABA44A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m51867D7C9A5A1C3DE4C23B746BAC6CF661BA1929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5B4B7E7DDC42D4D7B0FA8E41FDCD92F48351A7C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m649334AA43AF58675E99C2E9FC263D1186068F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA2B991082BC26CF831175FDDC7906AB878B441CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mACA1AAACA22C888C77D0853C8B95366BCA73693F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC423242B9593865CFAF5099E70E72BF837C18D2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC440A6CA6CCCD0E1FE75A1A50D6548092D9EDE4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4BA8B6B2564FB6EBB18BF12EAE65683993DDC6E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m79F3E2B859433E0B67E7E6B3EA0005F9FE9B12B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7A1C2D221A00D4DE76431FB2903CCAC7CDA3A33B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCollection_U3C_ctorU3Eg__ByMetricIdU7C5_0_m4CCB70962C197B1178FCEFDD1DC3C0F16DB3BCFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricIdTypeLibrary_GetEnumMetadata_TisBaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_mB56FE903B090CDC0BF0E10D8939B5316A22CB4CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricIdTypeLibrary_GetEnumMetadata_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5EE205756887A35BAC6190954EB41E58C37D33F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricIdTypeLibrary_GetEnumMetadata_TisMetricKind_t979B08A335DC46BFE3E81FAD0B072532C5D78B58_m6F7E1D0991664463F4869B10B335BD57B26A2E09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricIdTypeLibrary_GetEnumMetadata_TisString_t_m920A93625A7226D8C53089082CA52DC8BBA42933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricId__ctor_mF7419CE250D5580AFE262674804BFFA264DC729D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1__ctor_m662FE116DBFFFCE60051C36FD48488304824A3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1__ctor_m6B03F8B3A030CCADF538F07EE36F0E49AFF04A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1__ctor_mFBDFE0DCE335BCC099A37E31379B5074EAA91105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_get_Id_m6A7B07AC7AC1A9C32308ED32A9C459E41803884A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_get_Id_mB054BD8BD9AFD7037D0A2828EFB7351C88E7C4FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_get_Id_mC529C04F22D39B0A7C860DAFAEAC6B414571D501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_get_Value_m1D2BF8139FF98F985BA7D047982873AB7B80AB49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_set_Value_m0A786E4071DFABE2662E097144A452FDDE697F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_set_Value_m24C8BE1A5B5142177E0D9BC55E8C72C6F2A2A566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_set_Value_mE469305499E24FFF5BB88E7A52506DBC33FB1F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetStatSerializer_Deserialize_m4850C313E9293F27AD283F0A21667619202B4457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m11ECB621D2AD5AF80D1F734DE185EE07F0FC6C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m814004827E190BB3F9312BFD214239C453BC5261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m8401A478E2202314CCD13F4DDF7C464A9E353D4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_mAFB3A4FFA915201A675EE8FEC53A8E8BB1F6083B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Timer_Set_m2D4E3522C3E5EF5B9C61C42E411304402DC76925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__8_0_mF39929F4CF06FE74ABFD2476DB3B39873C9BF993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__8_1_m83A6AF25993775B64B56E398211B6223B97E7A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__8_2_m917E30EED8501787054E3A4B1E2EC0C4E9F9D0FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__8_3_mEEB6303026C70C8CA970D2F159163CF6CB3E9321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__8_4_mDE58A1007249FE3CF7F0777A7818D7B39E156729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__8_5_mD85963188A68B4FE12DED68E92FACBD4E91C20D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__8_6_m8116C4D4D8B5BE3A3A043CA3FB61530B7D83FB53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__8_7_m734E9604EF64F208088824E130B533A13E954A43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTypeRegistrationPostProcessU3Eb__14_0_mC664D27316976758CB5A20F811D628EEECA26F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitExtensions_GetBaseUnits_m3A75E6DC45886D47530D6DF2F57DC1B3F773FCFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitPrefixExtensions_GetSymbol_m57032726E345C00B8F56CA95C381B1A70092A097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitPrefixExtensions_GetValueFloat_mDDCAD81A9FD3D2A62BB9C34564034CFBE3D8A7EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AlignOf_TisWriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_m801EDCE72D34DD77B45401A96A2625CD7CD1ED24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7_RuntimeMethod_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493;
struct GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD5A91132D8D3BB09974A8ABDBDBB7A21DD5B26E1 
{
};

// System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>
struct Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t94BED53FC9C3E52D72FE64BD0D1583E798E2260C* ____entries_1;
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
	KeyCollection_tA66CBD8262F37CB8CDCAE804C38B8AFD19CF6AD6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8476E829A26A163371EC54DAD769E59177358C64* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.IMetricFactory>
struct Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD95CBEB303684A3EAACC3B1338784CA3D375E637* ____entries_1;
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
	KeyCollection_tEF3C8442FFEC874EC46AC84186C6E14E4B4FEB10* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t880C99F18DFED54F552E13BB44BA28E61ADE5C68* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA53B24141E8DAD1A43B4F6F422E61BA0D55CB563* ____entries_1;
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
	KeyCollection_t029F21547E13D8B6ED616F4FC2B0C21498563960* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFE858C38AF33A5214A5B3E23495FB53F5E51474B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9F0930DAC3F9E18BBE5F7ABD16262A6E43FE540A* ____entries_1;
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
	KeyCollection_tB3BF6188B2A1577FF7C568617A716E0B20FF26E5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4683345E8BCC2B3DCCDAA2D17325BE6AED66E80* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t65447A2FFF92EC3088273CA331CB3DCEB97F83DD* ____entries_1;
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
	KeyCollection_tE7F79D4EB9C1990DE636AE0A363E452BD67C2996* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t92E18160D51880BD69E951DDB120EE859DD395E9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tAE6BD522750C42EF7DB7EB0E1AA69E171364DFC1* ____entries_1;
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
	KeyCollection_t30EF439DCC1EBFB0BCC804281D85BDBEEBFCA37C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBAD89F12DF49C436B573D0918ACB52F5683E9E0D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes>
struct Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t607A63810D59CA9211EA44BF724C3CF32DB27D94* ____entries_1;
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
	KeyCollection_t2B357606A0A02E15450DFA4CEFEC7AE50E4B398D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD3EB8E9BC1FCF7BE9DCBC46C2517083BD443C78D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct List_1_t7782731B306A68D587677546249E9976ED8A52FD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMetric_1U5BU5D_t2EAC910BDF9CD32E960D3B049A854092D88FF446* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7782731B306A68D587677546249E9976ED8A52FD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMetric_1U5BU5D_t2EAC910BDF9CD32E960D3B049A854092D88FF446* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMetric_1U5BU5D_t1FF15DBA6762E20E702708D67623357D671A2E24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMetric_1U5BU5D_t1FF15DBA6762E20E702708D67623357D671A2E24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMetric_1U5BU5D_t3BB54E24DEEEBDDEF34E40EEEEF309C467746781* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMetric_1U5BU5D_t3BB54E24DEEEBDDEF34E40EEEEF309C467746781* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.BaseUnits[]>
struct List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BaseUnitsU5BU5DU5BU5D_t43221411A299BF2B334DD73F6F67F2406CB14AD7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BaseUnitsU5BU5DU5BU5D_t43221411A299BF2B334DD73F6F67F2406CB14AD7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Boolean[]>
struct List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5DU5BU5D_t71F0B22F93E41A588932E9FAA6BDC06D731064CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BooleanU5BU5DU5BU5D_t71F0B22F93E41A588932E9FAA6BDC06D731064CC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.MetricKind[]>
struct List_1_tDC7039B2AB81C1499872DB600BD309EE76715240  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MetricKindU5BU5DU5BU5D_t755E8DAB9CDBE6D8C227D1A6F99D1C0713D969E9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDC7039B2AB81C1499872DB600BD309EE76715240_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MetricKindU5BU5DU5BU5D_t755E8DAB9CDBE6D8C227D1A6F99D1C0713D969E9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String[]>
struct List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct List_1_t7B798011481AAA808C915C14FF590842496ACEAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IEventMetricU5BU5D_tDACBD3F048C69B1C0C17AE7DCEB7D05F27154183* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7B798011481AAA808C915C14FF590842496ACEAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IEventMetricU5BU5D_tDACBD3F048C69B1C0C17AE7DCEB7D05F27154183* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMetricU5BU5D_tF2DEB17A2A50B244B6690E22C4EA04ADC044C068* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMetricU5BU5D_tF2DEB17A2A50B244B6690E22C4EA04ADC044C068* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>
struct List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMetricObserverU5BU5D_t40E2F2EBC03CFAD6B90BDEC5025DA4F9E3E68E5D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMetricObserverU5BU5D_t40E2F2EBC03CFAD6B90BDEC5025DA4F9E3E68E5D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IResettableU5BU5D_tB4C054F442D9997A64EF302C6286121B574D750B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IResettableU5BU5D_tB4C054F442D9997A64EF302C6286121B574D750B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_keys
	KeyCollection_tF788E37F75B2AC34DF72560836E3981D7C854971* ____keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_values
	ValueCollection_tD7B97E712FF21F5D642ED46CDF3BD08FC6183433* ____values_3;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_keys
	KeyCollection_tC7528A2F3FFDEF23D82D1A684E0D63AF20148B05* ____keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_values
	ValueCollection_t5E5EC99573826D97A8FFBED1EFD1ABA06BC3B92E* ____values_3;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_keys
	KeyCollection_t7B2FF7348C0BC7932654A90AC3E996EE0D50502F* ____keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_values
	ValueCollection_tA6D5CA0DCAE187619A656C1F1960C80A37D1F3C5* ____values_3;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_keys
	KeyCollection_t8332C73DD7941413C90940C39FFAFAF41D43D056* ____keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_values
	ValueCollection_tDFDC2E86BF9BF749F9220DC0F81430030E81F26A* ____values_3;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetStats.BaseUnitConstants
struct BaseUnitConstants_t217DD6BF96058A90BE69DB54AF0FA99DB2E7C489  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetStats.BaseUnitExtensions
struct BaseUnitExtensions_tC6074A6797E72BC00D0EBB34F25888A3737110B6  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetStats.CounterFactory
struct CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetStats.EventMetricFactory
struct EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18  : public RuntimeObject
{
};

struct EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory> Unity.Multiplayer.Tools.NetStats.EventMetricFactory::k_FactoriesByName
	Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1* ___k_FactoriesByName_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes> Unity.Multiplayer.Tools.NetStats.EventMetricFactory::k_TypeNames
	Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182* ___k_TypeNames_1;
};

// Unity.Multiplayer.Tools.NetStats.GaugeFactory
struct GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4  : public RuntimeObject
{
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder
struct MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder::m_Counters
	List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* ___m_Counters_0;
	// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder::m_Gauges
	List_1_t7782731B306A68D587677546249E9976ED8A52FD* ___m_Gauges_1;
	// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder::m_Timers
	List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* ___m_Timers_2;
	// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder::m_PayloadEvents
	List_1_t7B798011481AAA808C915C14FF590842496ACEAE* ___m_PayloadEvents_3;
};

// Unity.Multiplayer.Tools.NetStats.MetricDispatcher
struct MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.MetricCollection Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_Collection
	MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___m_Collection_1;
	// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable> Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_Resettables
	RuntimeObject* ___m_Resettables_2;
	// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_EventMetrics
	RuntimeObject* ___m_EventMetrics_3;
	// System.Collections.Generic.IList`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver> Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_Observers
	RuntimeObject* ___m_Observers_4;
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

// Unity.Multiplayer.Tools.NetStats.MetricFactory
struct MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.IMetricFactory> Unity.Multiplayer.Tools.NetStats.MetricFactory::k_Factories
	Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* ___k_Factories_0;
};

// Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary
struct MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D  : public RuntimeObject
{
};

struct MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields
{
	// System.Collections.Generic.List`1<System.Type> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::k_Types
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___k_Types_0;
	// System.Collections.Generic.List`1<System.String> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::k_TypeDisplayNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___k_TypeDisplayNames_1;
	// System.Collections.Generic.List`1<System.Int32[]> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::k_EnumValues
	List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C* ___k_EnumValues_2;
	// System.Collections.Generic.List`1<System.String[]> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::k_EnumNames
	List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* ___k_EnumNames_3;
	// System.Collections.Generic.List`1<System.String[]> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::k_EnumDisplayNames
	List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* ___k_EnumDisplayNames_4;
	// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.MetricKind[]> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::k_MetricKinds
	List_1_tDC7039B2AB81C1499872DB600BD309EE76715240* ___k_MetricKinds_5;
	// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.BaseUnits[]> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::k_Units
	List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C* ___k_Units_6;
	// System.Collections.Generic.List`1<System.Boolean[]> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::k_DisplayAsPercentage
	List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021* ___k_DisplayAsPercentage_7;
};

// Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions
struct MetricsCollectionExtensions_t87B8CED26F837B65DD77F59BAFC630BD42E45D5D  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetStats.NetStatSerializer
struct NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.MetricFactory Unity.Multiplayer.Tools.NetStats.NetStatSerializer::m_MetricFactory
	MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14* ___m_MetricFactory_0;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
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

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// Unity.Multiplayer.Tools.NetStats.TimerFactory
struct TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetStats.TypeRegistration
struct TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C  : public RuntimeObject
{
};

struct TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_StaticFields
{
	// System.Boolean Unity.Multiplayer.Tools.NetStats.TypeRegistration::s_TypeRegistrationComplete
	bool ___s_TypeRegistrationComplete_2;
	// System.Object Unity.Multiplayer.Tools.NetStats.TypeRegistration::s_LockObject
	RuntimeObject* ___s_LockObject_3;
};

// Unity.Multiplayer.Tools.NetStats.UnitExtensions
struct UnitExtensions_t432C6436EDE22F81757C89243F181A7C27557687  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NetStats.UnitPrefixExtensions
struct UnitPrefixExtensions_tAFB9E6D508472FDFCABDF622122C1326781BD456  : public RuntimeObject
{
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

// Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c
struct U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0  : public RuntimeObject
{
};

struct U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields
{
	// Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<>9
	U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* ___U3CU3E9_0;
	// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.MetricId> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<>9__8_0
	Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* ___U3CU3E9__8_0_1;
	// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<>9__8_1
	Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6* ___U3CU3E9__8_1_2;
	// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.MetricId> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<>9__8_2
	Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* ___U3CU3E9__8_2_3;
	// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<>9__8_3
	Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1* ___U3CU3E9__8_3_4;
	// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.MetricId> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<>9__8_4
	Func_2_t7131B4C0145140272524199F11576D928ECEDA25* ___U3CU3E9__8_4_5;
	// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<>9__8_5
	Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA* ___U3CU3E9__8_5_6;
	// System.Func`2<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.MetricId> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<>9__8_6
	Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* ___U3CU3E9__8_6_7;
	// System.Func`2<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<>9__8_7
	Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7* ___U3CU3E9__8_7_8;
};

// Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c
struct U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E  : public RuntimeObject
{
};

struct U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_StaticFields
{
	// Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::<>9
	U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E* ___U3CU3E9_0;
	// System.Comparison`1<System.Type> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::<>9__14_0
	Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F* ___U3CU3E9__14_0_1;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
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

// System.Collections.Generic.List`1/Enumerator<System.Type>
struct Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Type_t* ____current_3;
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

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.ValueTuple`2<System.String,System.String>
struct ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 
{
	// T1 System.ValueTuple`2::Item1
	String_t* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	String_t* ___Item2_1;
};

// Unity.Multiplayer.Tools.NetStats.AssemblyRequiresTypeRegistrationAttribute
struct AssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Multiplayer.Tools.NetStats.BaseUnits
struct BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA 
{
	// System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::<BytesExponent>k__BackingField
	int8_t ___U3CBytesExponentU3Ek__BackingField_0;
	// System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::<SecondsExponent>k__BackingField
	int8_t ___U3CSecondsExponentU3Ek__BackingField_1;
};

struct BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_StaticFields
{
	// System.Char[] Unity.Multiplayer.Tools.NetStats.BaseUnits::k_Superscripts
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_Superscripts_2;
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

// Unity.Multiplayer.Tools.NetStats.ByteBool
struct ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean Unity.Multiplayer.Tools.NetStats.ByteBool::BoolValue
			bool ___BoolValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___BoolValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Multiplayer.Tools.NetStats.ByteBool::ByteValue
			uint8_t ___ByteValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ByteValue_1_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of Unity.Multiplayer.Tools.NetStats.ByteBool
struct ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___BoolValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___BoolValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___ByteValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ByteValue_1_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of Unity.Multiplayer.Tools.NetStats.ByteBool
struct ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___BoolValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___BoolValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___ByteValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ByteValue_1_forAlignmentOnly;
		};
	};
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

// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_4;
	// System.Globalization.CompareOptions System.CultureAwareComparer::_options
	int32_t ____options_5;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB689CA751E0E3EDC08A87C2A28D22C7BE9046FD4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// Unity.Multiplayer.Tools.NetStats.FastBufferReader
struct FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 
{
	// Unity.Multiplayer.Tools.NetStats.FastBufferReader/ReaderHandle* Unity.Multiplayer.Tools.NetStats.FastBufferReader::Handle
	ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* ___Handle_0;
};

// Unity.Multiplayer.Tools.NetStats.FastBufferWriter
struct FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 
{
	// Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle* Unity.Multiplayer.Tools.NetStats.FastBufferWriter::Handle
	WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* ___Handle_0;
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

// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t4475164ABDA610E14FA864B4087D5FF26AD93205  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// Unity.Multiplayer.Tools.NetStats.MetricId
struct MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C 
{
	// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::<TypeIndex>k__BackingField
	int32_t ___U3CTypeIndexU3Ek__BackingField_0;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::<EnumValue>k__BackingField
	int32_t ___U3CEnumValueU3Ek__BackingField_1;
};

// Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute
struct MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::<MetricKind>k__BackingField
	int32_t ___U3CMetricKindU3Ek__BackingField_1;
	// Unity.Multiplayer.Tools.NetStats.Units Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::<Units>k__BackingField
	int32_t ___U3CUnitsU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::<DisplayAsPercentage>k__BackingField
	bool ___U3CDisplayAsPercentageU3Ek__BackingField_3;
};

// Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute
struct MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_0;
};

// Unity.Multiplayer.Tools.NetStats.MetricTypeEnumHideInInspectorAttribute
struct MetricTypeEnumHideInInspectorAttribute_t48ED7C550F7EFB7EC7B08BDC06CEA20B5A9A6455  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute
struct MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Unity.Multiplayer.Tools.NetStats.SortPriority Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::<SortPriority>k__BackingField
	int32_t ___U3CSortPriorityU3Ek__BackingField_0;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tEF2AB6302C937DEB42D48CA2A46EA7DF57499638 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tEF2AB6302C937DEB42D48CA2A46EA7DF57499638__padding[20];
	};
};

// Unity.Multiplayer.Tools.NetStats.FastBufferReader/ReaderHandle
struct ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8 
{
	// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferReader/ReaderHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferReader/ReaderHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferReader/ReaderHandle::Length
	int32_t ___Length_2;
	// Unity.Collections.Allocator Unity.Multiplayer.Tools.NetStats.FastBufferReader/ReaderHandle::Allocator
	int32_t ___Allocator_3;
};

// Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle
struct WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D 
{
	// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle::Length
	int32_t ___Length_2;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle::Capacity
	int32_t ___Capacity_3;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle::MaxCapacity
	int32_t ___MaxCapacity_4;
	// Unity.Collections.Allocator Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle::Allocator
	int32_t ___Allocator_5;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle::BufferGrew
	bool ___BufferGrew_6;
};
// Native definition for P/Invoke marshalling of Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle
struct WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshaled_pinvoke
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};
// Native definition for COM marshalling of Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle
struct WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshaled_com
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};

// Unity.Multiplayer.Tools.NetStats.Timer/TimerScope
struct TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702 
{
	// System.Action`1<System.TimeSpan> Unity.Multiplayer.Tools.NetStats.Timer/TimerScope::m_Callback
	Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* ___m_Callback_0;
	// System.Diagnostics.Stopwatch Unity.Multiplayer.Tools.NetStats.Timer/TimerScope::m_Stopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___m_Stopwatch_1;
};
// Native definition for P/Invoke marshalling of Unity.Multiplayer.Tools.NetStats.Timer/TimerScope
struct TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_Callback_0;
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___m_Stopwatch_1;
};
// Native definition for COM marshalling of Unity.Multiplayer.Tools.NetStats.Timer/TimerScope
struct TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshaled_com
{
	Il2CppMethodPointer ___m_Callback_0;
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___m_Stopwatch_1;
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

// Unity.Multiplayer.Tools.NetStats.Metric`1<System.TimeSpan>
struct Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1::<Id>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CIdU3Ek__BackingField_0;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<Value>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CValueU3Ek__BackingField_1;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<DefaultValue>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CDefaultValueU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.Metric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tB35EFB19030E964912B4AFF3DA656579F99C965E  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tB35EFB19030E964912B4AFF3DA656579F99C965E_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06
	__StaticArrayInitTypeSizeU3D20_tEF2AB6302C937DEB42D48CA2A46EA7DF57499638 ___270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// Unity.Multiplayer.Tools.NetStats.BitReader
struct BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528 
{
	// Unity.Multiplayer.Tools.NetStats.FastBufferReader Unity.Multiplayer.Tools.NetStats.BitReader::m_Reader
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 ___m_Reader_0;
	// System.Byte* Unity.Multiplayer.Tools.NetStats.BitReader::m_BufferPointer
	uint8_t* ___m_BufferPointer_1;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.BitReader::m_Position
	int32_t ___m_Position_2;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.BitReader::m_BitPosition
	int32_t ___m_BitPosition_3;
};

// Unity.Multiplayer.Tools.NetStats.BitWriter
struct BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C 
{
	// Unity.Multiplayer.Tools.NetStats.FastBufferWriter Unity.Multiplayer.Tools.NetStats.BitWriter::m_Writer
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___m_Writer_0;
	// System.Byte* Unity.Multiplayer.Tools.NetStats.BitWriter::m_BufferPointer
	uint8_t* ___m_BufferPointer_1;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.BitWriter::m_Position
	int32_t ___m_Position_2;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.BitWriter::m_BitPosition
	int32_t ___m_BitPosition_3;
};

// Unity.Multiplayer.Tools.NetStats.BufferSerializerReader
struct BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3 
{
	// Unity.Multiplayer.Tools.NetStats.FastBufferReader Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::m_Reader
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 ___m_Reader_0;
};

// Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter
struct BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231 
{
	// Unity.Multiplayer.Tools.NetStats.FastBufferWriter Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::m_Writer
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___m_Writer_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// Unity.Multiplayer.Tools.NetStats.MetricKind
struct MetricKind_t979B08A335DC46BFE3E81FAD0B072532C5D78B58 
{
	// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricKind::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// Unity.Multiplayer.Tools.NetStats.Gauge
struct Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9  : public Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Unity.Multiplayer.Tools.NetStats.Timer
struct Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE  : public Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.TimeSpan>
struct Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0  : public MulticastDelegate_t
{
};

// System.Comparison`1<System.Type>
struct Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.MetricId>
struct Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.MetricId>
struct Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.MetricId>
struct Func_2_t7131B4C0145140272524199F11576D928ECEDA25  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.MetricId>
struct Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.Multiplayer.Tools.NetStats.MetricHeader
struct MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C 
{
	// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.MetricHeader::<EventFactoryTypeName>k__BackingField
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___U3CEventFactoryTypeNameU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.NetStats.MetricContainerType Unity.Multiplayer.Tools.NetStats.MetricHeader::<MetricContainerType>k__BackingField
	uint32_t ___U3CMetricContainerTypeU3Ek__BackingField_1;
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricHeader::<MetricId>k__BackingField
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___U3CMetricIdU3Ek__BackingField_2;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
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
// Unity.Multiplayer.Tools.NetStats.Timer[]
struct TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568  : public RuntimeArray
{
	ALIGN_FIELD (8) Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* m_Items[1];

	inline Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
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
// Unity.Multiplayer.Tools.NetStats.MetricKind[]
struct MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Unity.Multiplayer.Tools.NetStats.BaseUnits[]
struct BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D  : public RuntimeArray
{
	ALIGN_FIELD (8) BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA m_Items[1];

	inline BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,Unity.Multiplayer.Tools.NetStats.MetricId>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1A9FE5AB9C0A0B8645D85412AF474E3273579FBB_gshared (Func_2_tDE80C816D0761B36D4FB1A00CB4277669A9E89B0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<TKey,TSource> System.Linq.Enumerable::ToDictionary<System.Object,Unity.Multiplayer.Tools.NetStats.MetricId>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5E0BCF779234BFF5217440062C5B9F168E75A418* Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m7564C5E75D2F2EB77BEDE669126776838EDAC83F_gshared (RuntimeObject* ___source0, Func_2_tDE80C816D0761B36D4FB1A00CB4277669A9E89B0* ___keySelector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Object,Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5E0BCF779234BFF5217440062C5B9F168E75A418* Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisRuntimeObject_m419811DDDDED757E663C9FCB0A5233DD462D907E_gshared (RuntimeObject* ___source0, Func_2_tDE80C816D0761B36D4FB1A00CB4277669A9E89B0* ___keySelector1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___elementSelector2, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_mD153754746C348FE22D26F712256CB6B73551364_gshared (ReadOnlyDictionary_2_t7D0A248941C3C8D7D0E8FBE0B7E5EDF0C15A5A0B* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C Metric_1_get_Id_m6A7B07AC7AC1A9C32308ED32A9C459E41803884A_gshared_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C Metric_1_get_Id_mC529C04F22D39B0A7C860DAFAEAC6B414571D501_gshared_inline (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1<System.TimeSpan>::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C Metric_1_get_Id_mB054BD8BD9AFD7037D0A2828EFB7351C88E7C4FB_gshared_inline (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m73A316CD2619AE016F9E66884C1EAB24DE1254D1_gshared (Dictionary_2_t5E0BCF779234BFF5217440062C5B9F168E75A418* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metric_1__ctor_mFBDFE0DCE335BCC099A37E31379B5074EAA91105_gshared (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, int64_t ___defaultValue1, const RuntimeMethod* method) ;
// TValue Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Metric_1_get_Value_m1D2BF8139FF98F985BA7D047982873AB7B80AB49_gshared_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::set_Value(TValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_m24C8BE1A5B5142177E0D9BC55E8C72C6F2A2A566_gshared_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Unity.Collections.FixedString128Bytes>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m6899BE802D726C4C6F2C97F53EDD9714D1A3B211_gshared (Dictionary_2_t24F6B0216907A334374111D15A21F5B501DA245A* __this, RuntimeObject* ___key0, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m88D09B69F2B5FF6806D1E31D572EF6EB6841A2C3_gshared (Dictionary_2_tDD3A5F093E79FE915DB02B3552CF6E783E2B8259* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Unity.Collections.FixedString128Bytes>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFD00BBC9728D776A7393AC3F43AE872BDF05172B_gshared (Dictionary_2_t24F6B0216907A334374111D15A21F5B501DA245A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0EB0D0BAE10E78A2B4347A19317059803BC71CF8_gshared (Dictionary_2_tDD3A5F093E79FE915DB02B3552CF6E783E2B8259* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metric_1__ctor_m662FE116DBFFFCE60051C36FD48488304824A3EB_gshared (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, double ___defaultValue1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>::set_Value(TValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_m0A786E4071DFABE2662E097144A452FDDE697F68_gshared_inline (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, double ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m243233B597F8A669B1D38E2D35C371A77C5C7B80_gshared (Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84* __this, uint32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m552218E4B68F6C7C51DCF1A45DE0F527A167E835_gshared (Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6CEDA0FA9D12BAB0B1B8656CCA79E803D146D4B9_gshared (Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Int32>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9ADDB03C7FE2ED8E2D9B9335721B7462C73C2176_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Object,System.Int32>(TKey[],TValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8E9FBA0F5FBB4CDEE30E55ECAD1F679912612208_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___keys0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___items1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata<System.Object>(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricIdTypeLibrary_GetEnumMetadata_TisRuntimeObject_m531925F6613C7A2288FFF16DD78ABC8712C4328B_gshared (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* ___data0, int32_t ___typeIndex1, int32_t ___enumValue2, const RuntimeMethod* method) ;
// T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata<System.Int32Enum>(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricIdTypeLibrary_GetEnumMetadata_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4D184CB269435EA5C05F836C181D995A207A11AF_gshared (List_1_t646D52E8A66A9CB2BCFF4A394F522DAAEE04425A* ___data0, int32_t ___typeIndex1, int32_t ___enumValue2, const RuntimeMethod* method) ;
// T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata<Unity.Multiplayer.Tools.NetStats.BaseUnits>(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA MetricIdTypeLibrary_GetEnumMetadata_TisBaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_mB56FE903B090CDC0BF0E10D8939B5316A22CB4CE_gshared (List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C* ___data0, int32_t ___typeIndex1, int32_t ___enumValue2, const RuntimeMethod* method) ;
// T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata<System.Boolean>(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricIdTypeLibrary_GetEnumMetadata_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5EE205756887A35BAC6190954EB41E58C37D33F8_gshared (List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021* ___data0, int32_t ___typeIndex1, int32_t ___enumValue2, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.TimeSpan>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metric_1__ctor_m6B03F8B3A030CCADF538F07EE36F0E49AFF04A89_gshared (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___defaultValue1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.TimeSpan>::set_Value(TValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_mE469305499E24FFF5BB88E7A52506DBC33FB1F9C_gshared_inline (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.TimeSpan>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD3B03534E0760BBDA5BEB234CF44FEA2FB74F56C_gshared (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.TimeSpan>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_gshared_inline (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> System.Reflection.CustomAttributeExtensions::GetCustomAttributes<System.Object>(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_TisRuntimeObject_mF52FE5525EEA89F49564DC1E6198120202FF3842_gshared (Assembly_t* ___element0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::ReadPartialValue<System.UInt64>(T&,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitReader_ReadPartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7CE9F8E7F571F935B51876F0D52CCD9DAF5C7221_gshared_inline (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, uint64_t* ___value0, int32_t ___bytesToRead1, int32_t ___offsetBytes2, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::WritePartialValue<System.UInt64>(T,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitWriter_WritePartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2141D5870D1F4E0362442402A575164053AD5BC3_gshared_inline (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, uint64_t ___value0, int32_t ___bytesToWrite1, int32_t ___offsetBytes2, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValue<System.Byte>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0BC6278DE63DB9413D2F07D37071687CAC0DFDE_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValue<System.UInt32>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint32_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisWriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_m801EDCE72D34DD77B45401A96A2625CD7CD1ED24_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValue<System.UInt32>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_gshared_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint32_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetWriteSize<Unity.Multiplayer.Tools.NetStats.MetricHeader>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m2C1EA972CDCAD3C6C6334B6C3B7732C896B47E4F_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetWriteSize<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3928C841D42C9DB77C0C8DD282FAEB2A1670108E_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValueSafe<System.UInt64>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5F5C9000217BB7839B7146F5E5C76D6CF0DFA0B3_gshared_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint64_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValueSafe<System.Int32>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4A7524495BACD1B2C706221F5419C8783633F221_gshared_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValueSafe<Unity.Multiplayer.Tools.NetStats.MetricHeader>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m15736FBAFD419473C583C710188DB2FB93A9CE85_gshared_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValueSafe<System.UInt64>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB606784170577636C0C8612B9C23547AAD78F8E4_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint64_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValueSafe<System.Int32>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C62D190000EAAB69F20F921A12908AB1DC8E97A_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValueSafe<Unity.Multiplayer.Tools.NetStats.MetricHeader>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m9B9FC681AF5522CE6EEC94A603F62AB443E997C4_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* ___value0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m4D25F4A0A0085EBE6559B6CC932AA5E267DB554D_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, RuntimeObject* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Activator::CreateInstance<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR uint64_t Activator_CreateInstance_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCDF808CDA81B0ABCCE66D0FFE7CB57DE73119E5C_gshared (const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<Unity.Multiplayer.Tools.NetStats.IMetric>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m92079708E0B0B8143A53C313E8C62D34708D5061 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Unity.Multiplayer.Tools.NetStats.IMetric>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8* Enumerable_ToList_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m878F45BD79B2E009392DB26E1D848C9EDA8D7187 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m16DC1B277B742D451D819E466BA7CBCB826DA019 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared)(___source0, method);
}
// System.Void System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.MetricId>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mADDCB1CB254FEDC0FD1D525804B01D7780C50EC5 (Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1A9FE5AB9C0A0B8645D85412AF474E3273579FBB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TSource> System.Linq.Enumerable::ToDictionary<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.MetricId>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69* Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m080BB2145AC6DE05BF2BE3B5AF5980C2BDFE61CE (RuntimeObject* ___source0, Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* ___keySelector1, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69* (*) (RuntimeObject*, Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A*, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m7564C5E75D2F2EB77BEDE669126776838EDAC83F_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_mF9861B0B0068F48C04D2EF9A7D6A56C3174077D6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared)(___source0, method);
}
// System.Void System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.MetricId>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m57C457EC2CE52047143F8EED88154DBFC973D55C (Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1A9FE5AB9C0A0B8645D85412AF474E3273579FBB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TSource> System.Linq.Enumerable::ToDictionary<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.MetricId>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8* Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m580F3C496AF72BED8315706D93ABE82CCF9E90B4 (RuntimeObject* ___source0, Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* ___keySelector1, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8* (*) (RuntimeObject*, Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174*, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m7564C5E75D2F2EB77BEDE669126776838EDAC83F_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m648B052929D921294E0B852C8ECCF2B75B4F72BB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared)(___source0, method);
}
// System.Void System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.MetricId>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m39EB10DEA5A3A0C842D5F3BFEDA06CB8379A2350 (Func_2_t7131B4C0145140272524199F11576D928ECEDA25* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7131B4C0145140272524199F11576D928ECEDA25*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1A9FE5AB9C0A0B8645D85412AF474E3273579FBB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TSource> System.Linq.Enumerable::ToDictionary<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.MetricId>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A* Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m2FD72C7F12F3069F0EE487AD409386E900DB3A14 (RuntimeObject* ___source0, Func_2_t7131B4C0145140272524199F11576D928ECEDA25* ___keySelector1, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A* (*) (RuntimeObject*, Func_2_t7131B4C0145140272524199F11576D928ECEDA25*, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m7564C5E75D2F2EB77BEDE669126776838EDAC83F_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<Unity.Multiplayer.Tools.NetStats.IEventMetric>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mF902E61FDC9AA23802780B3A5D1DD83D4611E24E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared)(___source0, method);
}
// System.Void System.Func`2<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.MetricId>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEF4DFDA47D252A588B2ADA132398621F1193E7AD (Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1A9FE5AB9C0A0B8645D85412AF474E3273579FBB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TSource> System.Linq.Enumerable::ToDictionary<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.MetricId>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0* Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m4D82581A54B76CB8D8B8DEC7AB4FDE898C692BFA (RuntimeObject* ___source0, Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* ___keySelector1, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0* (*) (RuntimeObject*, Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A*, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m7564C5E75D2F2EB77BEDE669126776838EDAC83F_gshared)(___source0, ___keySelector1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricCollection_set_ConnectionId_m3DF3CCC3C1EA2F75D54F4A36F7D850904E013DFA_inline (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricCollection_TryGetCounter_m002A9388A45AA9562FAF9DA9C81AE6DAF2C7C07A (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, RuntimeObject** ___counter1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m2F90BB4F94E3DC65A8D214E3CAA3F73F26137B29 (List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m5AA8532504BEA30EB51C8545CC8875628F544A9D (List_1_t7782731B306A68D587677546249E9976ED8A52FD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7782731B306A68D587677546249E9976ED8A52FD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m516779D730470A3E6A5FDEE765AC01493E0A4299 (List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4A04980A38EC810BF7DCE330965BDD6198595ADB (Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>,Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69* Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m694970CF67E2BC2A3E0A577EE16D91139E983295 (RuntimeObject* ___source0, Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* ___keySelector1, Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6* ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69* (*) (RuntimeObject*, Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A*, Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6*, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisRuntimeObject_m419811DDDDED757E663C9FCB0A5233DD462D907E_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m11ECB621D2AD5AF80D1F734DE185EE07F0FC6C79 (ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776*, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mD153754746C348FE22D26F712256CB6B73551364_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m00E38A50C3CF66C97072A94D1E5E90BCAFA37029 (Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>,Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8* Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_m52520781A8AFEC1111E4187E00345DC77E22105D (RuntimeObject* ___source0, Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* ___keySelector1, Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1* ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8* (*) (RuntimeObject*, Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174*, Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1*, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisRuntimeObject_m419811DDDDED757E663C9FCB0A5233DD462D907E_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m8401A478E2202314CCD13F4DDF7C464A9E353D4F (ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB*, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mD153754746C348FE22D26F712256CB6B73551364_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Func`2<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m043CA6FFD01D11463648F145B1F1F423271A61C0 (Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>,Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A* Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m1B20E57D346B354B120A28C200F0B6211B5D490D (RuntimeObject* ___source0, Func_2_t7131B4C0145140272524199F11576D928ECEDA25* ___keySelector1, Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA* ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A* (*) (RuntimeObject*, Func_2_t7131B4C0145140272524199F11576D928ECEDA25*, Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA*, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisRuntimeObject_m419811DDDDED757E663C9FCB0A5233DD462D907E_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_mAFB3A4FFA915201A675EE8FEC53A8E8BB1F6083B (ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918*, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mD153754746C348FE22D26F712256CB6B73551364_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Func`2<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.IEventMetric>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7AD26331C26AC52F4AF013A1CA939BB796ACF2C1 (Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<Unity.Multiplayer.Tools.NetStats.IEventMetric,Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0* Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mAC0698C91DE3AD46F5B353D840F76D5541B79E3A (RuntimeObject* ___source0, Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* ___keySelector1, Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7* ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0* (*) (RuntimeObject*, Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A*, Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7*, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisRuntimeObject_m419811DDDDED757E663C9FCB0A5233DD462D907E_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m814004827E190BB3F9312BFD214239C453BC5261 (ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D*, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mD153754746C348FE22D26F712256CB6B73551364_gshared)(__this, ___dictionary0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection__ctor_m0F2BEBC3670B9D43220027FE76CA1F195857C259 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, RuntimeObject* ___counters0, RuntimeObject* ___gauges1, RuntimeObject* ___timers2, RuntimeObject* ___payloadEvents3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::.ctor()
inline void List_1__ctor_m22BEB381C1E9C4212A045674F13B3329208001A2 (List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::.ctor()
inline void List_1__ctor_mC440A6CA6CCCD0E1FE75A1A50D6548092D9EDE4A (List_1_t7782731B306A68D587677546249E9976ED8A52FD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7782731B306A68D587677546249E9976ED8A52FD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::.ctor()
inline void List_1__ctor_mA2B991082BC26CF831175FDDC7906AB878B441CD (List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>::.ctor()
inline void List_1__ctor_m649334AA43AF58675E99C2E9FC263D1186068F18 (List_1_t7B798011481AAA808C915C14FF590842496ACEAE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7B798011481AAA808C915C14FF590842496ACEAE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63912B6E383FE5043BB22735491175AC97713DF0 (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::.ctor()
inline void List_1__ctor_m066769912F558DFB69ECBCAAD8517E4DB975BB6F (List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Id()
inline MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C Metric_1_get_Id_m6A7B07AC7AC1A9C32308ED32A9C459E41803884A_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, const RuntimeMethod* method)
{
	return ((  MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C (*) (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334*, const RuntimeMethod*))Metric_1_get_Id_m6A7B07AC7AC1A9C32308ED32A9C459E41803884A_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>::Add(T)
inline void List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_inline (List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>::get_Id()
inline MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C Metric_1_get_Id_mC529C04F22D39B0A7C860DAFAEAC6B414571D501_inline (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, const RuntimeMethod* method)
{
	return ((  MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C (*) (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390*, const RuntimeMethod*))Metric_1_get_Id_mC529C04F22D39B0A7C860DAFAEAC6B414571D501_gshared_inline)(__this, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1<System.TimeSpan>::get_Id()
inline MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C Metric_1_get_Id_mB054BD8BD9AFD7037D0A2828EFB7351C88E7C4FB_inline (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F* __this, const RuntimeMethod* method)
{
	return ((  MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C (*) (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F*, const RuntimeMethod*))Metric_1_get_Id_mB054BD8BD9AFD7037D0A2828EFB7351C88E7C4FB_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Unity.Multiplayer.Tools.NetStats.IEventMetric>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t7B798011481AAA808C915C14FF590842496ACEAE* Enumerable_ToList_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_m5BA6BD8AE8B20AE78F3615D24E00BB0DFBA0287A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t7B798011481AAA808C915C14FF590842496ACEAE* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher__ctor_m7DC37197A5C4922FF961C302C761494704523192 (MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, RuntimeObject* ___resettables1, RuntimeObject* ___eventMetrics2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::.ctor()
inline void Dictionary_2__ctor_mB4CC63F32B175BC9BA98E5EEB20B6E905306E13D (Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69*, const RuntimeMethod*))Dictionary_2__ctor_m73A316CD2619AE016F9E66884C1EAB24DE1254D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::.ctor()
inline void Dictionary_2__ctor_mB33725E9912C56B73B8E4B8C2A6CA65C6B451C26 (Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8*, const RuntimeMethod*))Dictionary_2__ctor_m73A316CD2619AE016F9E66884C1EAB24DE1254D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::.ctor()
inline void Dictionary_2__ctor_m894DF7EE77C50F675B04E2F8C71D05FA5A8EF0E1 (Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A*, const RuntimeMethod*))Dictionary_2__ctor_m73A316CD2619AE016F9E66884C1EAB24DE1254D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>::.ctor()
inline void Dictionary_2__ctor_m32684AAFB7498E32C30555481C9CC736A1D26DCA (Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0*, const RuntimeMethod*))Dictionary_2__ctor_m73A316CD2619AE016F9E66884C1EAB24DE1254D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>::.ctor()
inline void List_1__ctor_m2332EC400620C034DC83E7A1D5551FE567572D04 (List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
inline void Metric_1__ctor_mFBDFE0DCE335BCC099A37E31379B5074EAA91105 (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, int64_t ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, int64_t, const RuntimeMethod*))Metric_1__ctor_mFBDFE0DCE335BCC099A37E31379B5074EAA91105_gshared)(__this, ___metricId0, ___defaultValue1, method);
}
// TValue Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Value()
inline int64_t Metric_1_get_Value_m1D2BF8139FF98F985BA7D047982873AB7B80AB49_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334*, const RuntimeMethod*))Metric_1_get_Value_m1D2BF8139FF98F985BA7D047982873AB7B80AB49_gshared_inline)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::set_Value(TValue)
inline void Metric_1_set_Value_m24C8BE1A5B5142177E0D9BC55E8C72C6F2A2A566_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334*, int64_t, const RuntimeMethod*))Metric_1_set_Value_m24C8BE1A5B5142177E0D9BC55E8C72C6F2A2A566_gshared_inline)(__this, ___value0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricHeader::get_MetricId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C MetricHeader_get_MetricId_m1D361164AB2668C6754995708F55B31C43947EC6_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Counter::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, int64_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m3F51C15A060824B5F4E7FA268F0D37E89813A298 (Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182* __this, Type_t* ___key0, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182*, Type_t*, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952*, const RuntimeMethod*))Dictionary_2_TryGetValue_m6899BE802D726C4C6F2C97F53EDD9714D1A3B211_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>::.ctor()
inline void Dictionary_2__ctor_m93F452D54806291086A057C47BD72C71BFBA20C9 (Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1*, const RuntimeMethod*))Dictionary_2__ctor_m88D09B69F2B5FF6806D1E31D572EF6EB6841A2C3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes>::.ctor()
inline void Dictionary_2__ctor_m61DC4AA8A64ED4554ED2DC062CED147466266522 (Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182*, const RuntimeMethod*))Dictionary_2__ctor_mFD00BBC9728D776A7393AC3F43AE872BDF05172B_gshared)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.TypeRegistration::RunIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistration_RunIfNeeded_mFDCE53630297A2807B6759D8B367F15E66BF4046 (const RuntimeMethod* method) ;
// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.MetricHeader::get_EventFactoryTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 MetricHeader_get_EventFactoryTypeName_m20D0563671B587D9B3AD05432D5B042F54937CED_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m8575D0745298617682E5E1C83ABD395FB38F58D8 (Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1*, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m0EB0D0BAE10E78A2B4347A19317059803BC71CF8_gshared)(__this, ___key0, ___value1, method);
}
// System.String Unity.Collections.FixedString128Bytes::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FixedString128Bytes_ToString_m1CD5B095D5A80759EF2E7F60AA95921369958A29 (FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
inline void Metric_1__ctor_m662FE116DBFFFCE60051C36FD48488304824A3EB (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, double ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, double, const RuntimeMethod*))Metric_1__ctor_m662FE116DBFFFCE60051C36FD48488304824A3EB_gshared)(__this, ___metricId0, ___defaultValue1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Double>::set_Value(TValue)
inline void Metric_1_set_Value_m0A786E4071DFABE2662E097144A452FDDE697F68_inline (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, double ___value0, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390*, double, const RuntimeMethod*))Metric_1_set_Value_m0A786E4071DFABE2662E097144A452FDDE697F68_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Gauge::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105 (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, double ___defaultValue1, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricContainerType Unity.Multiplayer.Tools.NetStats.MetricHeader::get_MetricContainerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MetricHeader_get_MetricContainerType_m13D3F887B141A458535CDBF8E59BE41C63E36DB1_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.IMetricFactory>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mDEA38E41F6D500FCCAF1A39384212F8B67420B37 (Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* __this, uint32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D*, uint32_t, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m243233B597F8A669B1D38E2D35C371A77C5C7B80_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.IMetricFactory>::.ctor()
inline void Dictionary_2__ctor_m3DDF0E04EF2390891B811D819E5A54F32895D667 (Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D*, const RuntimeMethod*))Dictionary_2__ctor_m552218E4B68F6C7C51DCF1A45DE0F527A167E835_gshared)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.CounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterFactory__ctor_m859B650A9C8FE13C03EF036D8B6798B719714500 (CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.IMetricFactory>::Add(TKey,TValue)
inline void Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F (Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D*, uint32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m6CEDA0FA9D12BAB0B1B8656CCA79E803D146D4B9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory__ctor_m2C266F88FE68AE0337F27A604F9F1A76F5007007 (EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.GaugeFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaugeFactory__ctor_m4794579EEE0FA862FF96B8B2B12F5ADCCB1DF04C (GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.TimerFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerFactory__ctor_m4B01373093DB32A2E41A84060DCED926E91F34E2 (TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_TypeIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_TypeIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706_inline (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_EnumValue(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88_inline (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Type Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MetricIdTypeLibrary_GetType_m4F2335156EAB537786F966B2E0A091172A2D8A4D (int32_t ___typeIndex0, const RuntimeMethod* method) ;
// System.Type Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MetricId_get_EnumType_m16F32126890D34276B81982F7A90E8B7D6F62B65 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumName(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricIdTypeLibrary_GetEnumName_m469F95312636FDC53224D55B774ABBA59A4B0154 (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_get_Name_m77C796F0ED1F016FA4E7544052B413E5D050F9A1 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumDisplayName(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricIdTypeLibrary_GetEnumDisplayName_m353A17188B20E333C2DC0AB56559A579F15BB746 (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_get_DisplayName_mE7F077EF6E5CA248AA054F316C040E4D33B393C6 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetricKind(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricIdTypeLibrary_GetEnumMetricKind_m8786904B6C671B561FC166FA86C685D2EA28D600 (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricId::get_MetricKind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_get_MetricKind_mB82C29F6DC88633758005D1E1FF6B34E0A245304 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumUnit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA MetricIdTypeLibrary_GetEnumUnit_m8DA72F0168C1E0BA6FA2BF60CCA32848784E8EE6 (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.MetricId::get_Units()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA MetricId_get_Units_m037B1DC5C4B90F5924F3247ED22B20C3D40CDD95 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetDisplayAsPercentage(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricIdTypeLibrary_GetDisplayAsPercentage_m6F638E240E7F3548CA9800608C4C2117235D1F7C (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::get_DisplayAsPercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_get_DisplayAsPercentage_m08A04C6A09E30AEE3DE3FB350B770175FD2DCE39 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::IsValidTypeIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricIdTypeLibrary_IsValidTypeIndex_m99B6AA0E21BD9E52664D7E191C992CF614018E98 (int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId__ctor_mF7419CE250D5580AFE262674804BFFA264DC729D (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetTypeIndex(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricIdTypeLibrary_GetTypeIndex_mCD3F12FE1A7830125CD5F3368BEC1BDE662FAE37 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.ctor(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId__ctor_mC06CB56F550123B905DB1CF07ACF589FD1B78D10 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, Type_t* ___enumType0, int32_t ___enumValue1, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_Equals_mB139C11FD4DD1F71F240678724495EA5DE813921 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___other0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_Equals_m0EE3289E6E1EB6B2E027E0FC14E6ED2F78D1CD8C (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_GetHashCode_mD58717DF7E335A5A1652CFBF074DE11B9435EB6B (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_ToString_mAEF8B4F7C84541DBB2915779FB804DC44F7FAF90 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
inline void List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32[]>::.ctor()
inline void List_1__ctor_mC423242B9593865CFAF5099E70E72BF837C18D2A (List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String[]>::.ctor()
inline void List_1__ctor_m51867D7C9A5A1C3DE4C23B746BAC6CF661BA1929 (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.MetricKind[]>::.ctor()
inline void List_1__ctor_m1844A27105FE911B4461A64621C063B8D8CD587A (List_1_tDC7039B2AB81C1499872DB600BD309EE76715240* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDC7039B2AB81C1499872DB600BD309EE76715240*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.BaseUnits[]>::.ctor()
inline void List_1__ctor_m425AB9FA96452A176DF4921477E6671F3ABA44A1 (List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean[]>::.ctor()
inline void List_1__ctor_m5B4B7E7DDC42D4D7B0FA8E41FDCD92F48351A7C9 (List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Comparison`1<System.Type>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m6CDEC8967C18D87E8290AE1EA094A44A7E9BA0A2 (Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m7F8680A9AADBEC02DB8AA2655391081A6057E3DC (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
inline Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Type>::Dispose()
inline void Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1 (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Type>::get_Current()
inline Type_t* Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_inline (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute>(System.Reflection.MemberInfo)
inline MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349_m15529F7FB8E35D9C1ECAB2FBEC543820B78D3994 (MemberInfo_t* ___element0, const RuntimeMethod* method)
{
	return ((  MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___element0, method);
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricTypeEnumAttribute_get_DisplayName_m1AE91E6508DEC1BEEE990827A29E587AA3070451_inline (MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Int32>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9ADDB03C7FE2ED8E2D9B9335721B7462C73C2176 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9ADDB03C7FE2ED8E2D9B9335721B7462C73C2176_gshared)(___source0, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_gshared)(___source0, method);
}
// System.Void System.Array::Sort<System.String,System.Int32>(TKey[],TValue[])
inline void Array_Sort_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m632CD14E7EA16924B58EF17FF66EA425256A6614 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keys0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___items1, const RuntimeMethod* method)
{
	((  void (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8E9FBA0F5FBB4CDEE30E55ECAD1F679912612208_gshared)(___keys0, ___items1, method);
}
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline MemberInfo_t* Enumerable_FirstOrDefault_TisMemberInfo_t_m105E69734FD6A9FD38D5895CD46ED1A4ED33750C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MemberInfo_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared)(___source0, method);
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute>(System.Reflection.MemberInfo)
inline MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* CustomAttributeExtensions_GetCustomAttribute_TisMetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61_mF1121CBC7FB0E3DEA37E91DB1F5A06465D74A980 (MemberInfo_t* ___element0, const RuntimeMethod* method)
{
	return ((  MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___element0, method);
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricMetadataAttribute_get_DisplayName_m74AA6C6CBD2C2559878B3C5D6C3AFDE9645717A6_inline (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.Common.StringUtil::AddSpacesToCamelCase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtil_AddSpacesToCamelCase_m742A53A381950EA91690338470A362468EDB35BF (String_t* ___s0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_MetricKind()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_MetricKind_m1FB56CD89F7EDC9A93E476206F3F506C43D7E4DF_inline (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.Units Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_Units()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_Units_mCD1CCB0FE96CB571BB8C8EF41B94297D4CB9D163_inline (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.UnitExtensions::GetBaseUnits(Unity.Multiplayer.Tools.NetStats.Units)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA UnitExtensions_GetBaseUnits_m3A75E6DC45886D47530D6DF2F57DC1B3F773FCFB (int32_t ___units0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayAsPercentage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MetricMetadataAttribute_get_DisplayAsPercentage_mDA7C24E54E8E22595F8746BDCE23A111A1C0CFF8_inline (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) ;
// System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::get_SecondsExponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_inline (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.BaseUnits::WithSeconds(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA BaseUnits_WithSeconds_mFD21BAC0D894F823308F0F2D619F94606A4CBADB (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, int8_t ___seconds0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32[]>::Add(T)
inline void List_1_Add_mC2AEA78982ECE580E4329735D062D1B5F1A12B94_inline (List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String[]>::Add(T)
inline void List_1_Add_m926708BBEA1A57FF6B812BFB165466C637F5219D_inline (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.MetricKind[]>::Add(T)
inline void List_1_Add_m69784C91F281A89477974FB95BEA6166F41FDAAB_inline (List_1_tDC7039B2AB81C1499872DB600BD309EE76715240* __this, MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDC7039B2AB81C1499872DB600BD309EE76715240*, MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.BaseUnits[]>::Add(T)
inline void List_1_Add_m639C5F3FD86ADEB5CC9B1FC510CB26CAD7E63DF3_inline (List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C* __this, BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C*, BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean[]>::Add(T)
inline void List_1_Add_m04D75BB37004EA98C46853886EBA166215B1F3E8_inline (List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021*, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Type>::MoveNext()
inline bool Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877 (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
inline int32_t List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
inline int32_t List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Type_t*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
inline Type_t* List_1_get_Item_m7A1C2D221A00D4DE76431FB2903CCAC7CDA3A33B (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
inline bool List_1_Contains_mF575CBDE461D2C6A182C0371279C31E5D038D5F7 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Type_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<System.Int32[]>::get_Item(System.Int32)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_get_Item_m79F3E2B859433E0B67E7E6B3EA0005F9FE9B12B6 (List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<System.String[]>::get_Item(System.Int32)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_get_Item_m4BA8B6B2564FB6EBB18BF12EAE65683993DDC6E9 (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata<System.String>(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
inline String_t* MetricIdTypeLibrary_GetEnumMetadata_TisString_t_m920A93625A7226D8C53089082CA52DC8BBA42933 (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* ___data0, int32_t ___typeIndex1, int32_t ___enumValue2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED*, int32_t, int32_t, const RuntimeMethod*))MetricIdTypeLibrary_GetEnumMetadata_TisRuntimeObject_m531925F6613C7A2288FFF16DD78ABC8712C4328B_gshared)(___data0, ___typeIndex1, ___enumValue2, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata<Unity.Multiplayer.Tools.NetStats.MetricKind>(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
inline int32_t MetricIdTypeLibrary_GetEnumMetadata_TisMetricKind_t979B08A335DC46BFE3E81FAD0B072532C5D78B58_m6F7E1D0991664463F4869B10B335BD57B26A2E09 (List_1_tDC7039B2AB81C1499872DB600BD309EE76715240* ___data0, int32_t ___typeIndex1, int32_t ___enumValue2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDC7039B2AB81C1499872DB600BD309EE76715240*, int32_t, int32_t, const RuntimeMethod*))MetricIdTypeLibrary_GetEnumMetadata_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4D184CB269435EA5C05F836C181D995A207A11AF_gshared)(___data0, ___typeIndex1, ___enumValue2, method);
}
// T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata<Unity.Multiplayer.Tools.NetStats.BaseUnits>(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
inline BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA MetricIdTypeLibrary_GetEnumMetadata_TisBaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_mB56FE903B090CDC0BF0E10D8939B5316A22CB4CE (List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C* ___data0, int32_t ___typeIndex1, int32_t ___enumValue2, const RuntimeMethod* method)
{
	return ((  BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA (*) (List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C*, int32_t, int32_t, const RuntimeMethod*))MetricIdTypeLibrary_GetEnumMetadata_TisBaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_mB56FE903B090CDC0BF0E10D8939B5316A22CB4CE_gshared)(___data0, ___typeIndex1, ___enumValue2, method);
}
// T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata<System.Boolean>(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
inline bool MetricIdTypeLibrary_GetEnumMetadata_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5EE205756887A35BAC6190954EB41E58C37D33F8 (List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021* ___data0, int32_t ___typeIndex1, int32_t ___enumValue2, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021*, int32_t, int32_t, const RuntimeMethod*))MetricIdTypeLibrary_GetEnumMetadata_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5EE205756887A35BAC6190954EB41E58C37D33F8_gshared)(___data0, ___typeIndex1, ___enumValue2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m776FB9AE40AE9C8BFC9750F21B728EE21FD7DDFA (U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute>(System.Reflection.MemberInfo)
inline MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C_m360361C9BEB8BCE7D3A88CAEF606C9B2BB076FB9 (MemberInfo_t* ___element0, const RuntimeMethod* method)
{
	return ((  MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___element0, method);
}
// Unity.Multiplayer.Tools.NetStats.SortPriority Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::get_SortPriority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricTypeSortPriorityAttribute_get_SortPriority_mE67EA96103A67FFE511FF45381E89FC516F1A0C0_inline (MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Enum::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enum_CompareTo_m7857C6F62098FB59C5334577863DD23559CD50B5 (RuntimeObject* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_InvariantCulture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_InvariantCulture_m34F8755409AC642ED90CC1818310DA558881D087_inline (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.TimeSpan>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
inline void Metric_1__ctor_m6B03F8B3A030CCADF538F07EE36F0E49AFF04A89 (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Metric_1__ctor_m6B03F8B3A030CCADF538F07EE36F0E49AFF04A89_gshared)(__this, ___metricId0, ___defaultValue1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.TimeSpan>::set_Value(TValue)
inline void Metric_1_set_Value_mE469305499E24FFF5BB88E7A52506DBC33FB1F9C_inline (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Metric_1_set_Value_mE469305499E24FFF5BB88E7A52506DBC33FB1F9C_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Action`1<System.TimeSpan>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD3B03534E0760BBDA5BEB234CF44FEA2FB74F56C (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mD3B03534E0760BBDA5BEB234CF44FEA2FB74F56C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Timer/TimerScope::.ctor(System.Action`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScope__ctor_m4CA9E27C3E1230DAE2C22088D680AD63A622C280 (TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702* __this, Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* ___callback0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.TimeSpan>::Invoke(T)
inline void Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_inline (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_gshared_inline)(__this, ___obj0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Timer/TimerScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScope_Dispose_mEAAA634EC3C3F493D7C50D987E71ED5F2002E1BA (TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.Timer::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_mC6D54C0DEA51A293E565EC3999395F942D39839C (Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___defaultValue1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> System.Reflection.CustomAttributeExtensions::GetCustomAttributes<Unity.Multiplayer.Tools.NetStats.AssemblyRequiresTypeRegistrationAttribute>(System.Reflection.Assembly)
inline RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m8082EFB5D71296D367EEAAE62ECFF6D753AE8C61 (Assembly_t* ___element0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Assembly_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttributes_TisRuntimeObject_mF52FE5525EEA89F49564DC1E6198120202FF3842_gshared)(___element0, method);
}
// System.Boolean System.Linq.Enumerable::Any<Unity.Multiplayer.Tools.NetStats.AssemblyRequiresTypeRegistrationAttribute>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m197616C19A765122C50C245388AFE09E332E4BE0 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___source0, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::TypeRegistrationPostProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricIdTypeLibrary_TypeRegistrationPostProcess_m1D182352CFED93586A12CE14589DD7FABA51675C (const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BitReader::get_BitAligned()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BitReader_get_BitAligned_mDA11119BA19D3286D99A3A113746D248A411E9FA_inline (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::CommitBitwiseReads(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_CommitBitwiseReads_mEA2055113233892F4DE1136E18C534C506F4DC16_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::ReadPartialValue<System.UInt64>(T&,System.Int32,System.Int32)
inline void BitReader_ReadPartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7CE9F8E7F571F935B51876F0D52CCD9DAF5C7221_inline (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, uint64_t* ___value0, int32_t ___bytesToRead1, int32_t ___offsetBytes2, const RuntimeMethod* method)
{
	((  void (*) (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528*, uint64_t*, int32_t, int32_t, const RuntimeMethod*))BitReader_ReadPartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7CE9F8E7F571F935B51876F0D52CCD9DAF5C7221_gshared_inline)(__this, ___value0, ___bytesToRead1, ___offsetBytes2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::ReadMisaligned(System.Byte&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitReader_ReadMisaligned_m1164AE5F4D20EA3FB0B46DAAA61C7F301E304FF0_inline (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Byte Unity.Multiplayer.Tools.NetStats.BitReader::ReadByteBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BitReader_ReadByteBits_m38B2485005A64266B223553CC72DFE86568E565E (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, int32_t ___bitCount0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::ReadBit(System.Boolean&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitReader_ReadBit_m3BAFA8BBEC00E14319F8E1536B9BF50A4CB05BCA_inline (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, bool* ___bit0, const RuntimeMethod* method) ;
// System.Byte Unity.Multiplayer.Tools.NetStats.ByteBool::Collapse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ByteBool_Collapse_m1D058E90145E2EA901FB85E2BC77DCA97DDC30BC (ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6* __this, bool ___b0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BitWriter::get_BitAligned()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BitWriter_get_BitAligned_m7E6092AF96896EBF095F1111166F413B6578C113_inline (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::CommitBitwiseWrites(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_CommitBitwiseWrites_m1311C2B1584E87D68403CC6B891410BD5A069BE5_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_m51D828C37FF9C26B2E30C326807B6ECC470A2668 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___additionalSizeRequired0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::WritePartialValue<System.UInt64>(T,System.Int32,System.Int32)
inline void BitWriter_WritePartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2141D5870D1F4E0362442402A575164053AD5BC3_inline (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, uint64_t ___value0, int32_t ___bytesToWrite1, int32_t ___offsetBytes2, const RuntimeMethod* method)
{
	((  void (*) (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C*, uint64_t, int32_t, int32_t, const RuntimeMethod*))BitWriter_WritePartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2141D5870D1F4E0362442402A575164053AD5BC3_gshared_inline)(__this, ___value0, ___bytesToWrite1, ___offsetBytes2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::WriteMisaligned(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitWriter_WriteMisaligned_m1CA7257D50E76149797445E095B54646CCB0188E_inline (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::WriteBit(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitWriter_WriteBit_mE58A09DA4068921D422E73DBC34AEAB771DC6C10_inline (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, bool ___bit0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferReader)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferSerializerReader__ctor_m515970021ADFE498DF3A13F559F76CC84A79E6B4_inline (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 ___reader0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::get_IsReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerReader_get_IsReader_m8FB3198BA763A2294557612A4C6716057D8861C2 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::get_IsWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerReader_get_IsWriter_m2DED1A0E8F5D4A7274ED729C384B21A9F72924ED (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.FastBufferReader Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::GetFastBufferReader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 BufferSerializerReader_GetFastBufferReader_m89F1B728346A534360CC4233C7A0875AAB3191E2_inline (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.FastBufferWriter Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::GetFastBufferWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 BufferSerializerReader_GetFastBufferWriter_m30FFADCC5275C721D76C38F13E3ABBE05B42D0C5 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValueSafe(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_m1BDAD6796F266DD99CD57E73EB3474AE11389206 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::SerializeValue(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerReader_SerializeValue_mB67AB0717B2A7598FC3B583D08D77107CBFD922B (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadByteSafe(System.Byte&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadByteSafe_mC94572634D5F5E8D6BB4E75E8FC7E9210634F6B5_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::SerializeValue(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerReader_SerializeValue_mEDE3FAA0A82B9674F8505155F1A7303561CE2778 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.FastBufferReader::TryBeginRead(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginRead_mB3E311FECDB79255A5D3F909F36D5BB31EB6F463_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::PreCheck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerReader_PreCheck_m86874D09D145431D521D7CF25F50CA2101B47949 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValue(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_m3F7A385F616E9C12BA94AB624809933D68BFBEB2 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::SerializeValuePreChecked(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerReader_SerializeValuePreChecked_m6E7B9754D6E21655CCDCAB95352DDBCD1887AD63 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValue<System.Byte>(T&)
inline void FastBufferReader_ReadValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0BC6278DE63DB9413D2F07D37071687CAC0DFDE_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*, uint8_t*, const RuntimeMethod*))FastBufferReader_ReadValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0BC6278DE63DB9413D2F07D37071687CAC0DFDE_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::SerializeValuePreChecked(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerReader_SerializeValuePreChecked_mBBEA83319481F1B0956C78DDF1856C0226E81623 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferWriter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferSerializerWriter__ctor_m0CD31683DBAABFB3E66DC1F804B7088C2431FC1D_inline (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___writer0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::get_IsReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerWriter_get_IsReader_m2EF5E5FF4BEDA76960E1F59DCABD5F77AAFFF912 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::get_IsWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerWriter_get_IsWriter_m38F5218A543DB81A6D827AD5540EFF0C13FF3AF4 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.FastBufferReader Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::GetFastBufferReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 BufferSerializerWriter_GetFastBufferReader_mF76A1576847E72C4EFDCD768A88D2727C6BB32A0 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.FastBufferWriter Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::GetFastBufferWriter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 BufferSerializerWriter_GetFastBufferWriter_m9C09F0BB23C63D8AF3FB16608DD64FF5B68C0FFE_inline (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValueSafe(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_m63E101F96EACCBC7F3C93A97B48CAA7ADC3194CE (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, String_t* ___s0, bool ___oneByteChars1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::SerializeValue(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerWriter_SerializeValue_m8B42275C83C4DFDD74AD4D9EBD27D3BBFC2C40E9 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteByteSafe(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteByteSafe_m92532B2CFB3C830D32E689C7BCDF69CA1F4A4B5A_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::SerializeValue(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerWriter_SerializeValue_mC75D819A080E047F9AFC20E181779BFF51E76F8B (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.FastBufferWriter::TryBeginWrite(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m158CCEBA6A37B6DE886D87852316418706519ACB_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::PreCheck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerWriter_PreCheck_mAB0A58E97527A41AF65E4293C9535E6EEBFB220A (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_m56E8FF72C33FF284F0ADDBA0A617914B996A18C4 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, String_t* ___s0, bool ___oneByteChars1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::SerializeValuePreChecked(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerWriter_SerializeValuePreChecked_mEA4EA95F0B8C7CE72503C5F6FFB20643353BB325 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteByte(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteByte_m0239DB587E7BD675850DDF0A8DA326AB4059E37B_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::SerializeValuePreChecked(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerWriter_SerializeValuePreChecked_m0167A6A62EED52C2BC2057659379C83DFADFF4C6 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Byte Unity.Multiplayer.Tools.NetStats.ByteBool::Collapse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ByteBool_Collapse_mA3BB415F4B65A3EBF1B51DD15A68C52040E7599E (ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferReader::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Position_m9C85930A2FA1CE815E1417E0D474851197C9F2CE_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferReader::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9 (int64_t ___size0, int32_t ___alignment1, int32_t ___allocator2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared)(___nativeArray0, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.FastBufferReader/ReaderHandle* Unity.Multiplayer.Tools.NetStats.FastBufferReader::CreateHandle(System.Byte*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* FastBufferReader_CreateHandle_mA254B66E2846DB3621F65DBFB5345B42B98A3F38 (uint8_t* ___buffer0, int32_t ___length1, int32_t ___offset2, int32_t ___allocator3, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(Unity.Collections.NativeArray`1<System.Byte>,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_m34E9181E01E74707AE514D45906E3FA45200E81E (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(System.ArraySegment`1<System.Byte>,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_m7384BAF2956CC2A6D0F437C0F64709D90CFB213B (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(System.Byte[],Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_m794A8F85421B9E0F90CC795CD3F2157269315549 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(System.Byte*,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_mCFD113C518AD0AEC2CC3B823BA92E92A0C9F5923 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) ;
// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_m2D3D526A108E7354E6C44A09D93B78D4F2143F29_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferWriter,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_m4787085ACF6F404843B8B09112E1ED3CB35B8C2B (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___writer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_Dispose_m82049282D1EF68CE4C5F4FC795AAF102A893B2E5 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::Seek(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_Seek_m4DEE404782D32248B14E4231AEC630B26C429C5D_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___where0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::MarkBytesRead(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_MarkBytesRead_m271CEEF11D50AAFB36C337CC7CFCACDF14515DBE_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader__ctor_mBC75366132C6EF96FE8F26DDB114D25016263024 (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 ___reader0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.BitReader Unity.Multiplayer.Tools.NetStats.FastBufferReader::EnterBitwiseContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528 FastBufferReader_EnterBitwiseContext_m0493A426747EDD7C64E616C63984B48FDE92D8B8 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.FastBufferReader::TryBeginReadInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Byte[] Unity.Multiplayer.Tools.NetStats.FastBufferReader::ToArray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferReader_ToArray_m8AF64B439AC29DDAC04B3623C5344153C9385657_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) ;
// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferReader::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferReader_GetUnsafePtr_m62FF03D70832C45ACEDB0716218012AABFC86FE3_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) ;
// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferReader::GetUnsafePtrAtCurrentPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferReader_GetUnsafePtrAtCurrentPosition_m39F8D3FA67EDE2FDD2294D2D23854ADE372A6D8C_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValue<System.UInt32>(T&)
inline void FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*, uint32_t*, const RuntimeMethod*))FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_gshared_inline)(__this, ___value0, method);
}
// System.String System.String::PadRight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadRight_m858B267AC6B805603C6763ED58755DB2F16747CB (String_t* __this, int32_t ___totalWidth0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadByte(System.Byte&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadByte_m27055993CE47BB6F1206F1E7EFA9117E5EEB430F_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadBytes(System.Byte*,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytes_m7683AEA236C498E487E6F7703A8D7BDF1A13DBF4_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadBytesSafe(System.Byte*,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadBytes(System.Byte[]&,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytes_m9088798D7BD8D906C4E85FC38A106AE341FFC332_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadBytesSafe(System.Byte[]&,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_mCFA7382E44FFE31883428800EDA38DC7F9B31213_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_mB1BD6EB7F075F23A3A4C31CD0C99B1C2DCF75A15_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::get_Capacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Capacity_mB5749CA366D0A9C7A3B61D9E3EA6C5A4028D8165_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::get_MaxCapacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_MaxCapacity_mFC5FB431F011E41EC7D0FC130844100F56889E0A_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle>()
inline int32_t UnsafeUtility_AlignOf_TisWriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_m801EDCE72D34DD77B45401A96A2625CD7CD1ED24 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisWriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_m801EDCE72D34DD77B45401A96A2625CD7CD1ED24_gshared)(method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::.ctor(System.Int32,Unity.Collections.Allocator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter__ctor_mF40FDD7B93F9494DB7F24E60461CCA03CE3884B8 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___size0, int32_t ___allocator1, int32_t ___maxSize2, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Dispose_m18862008413C02EBE36C36EA473E41B0171D7ADF (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::Seek(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_m4F347F70AF2595629090A859987E55191A3A6ADD_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___where0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::Truncate(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Truncate_m5562272150A562BEA331A532B2FA4F05EBA55512_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___where0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitWriter__ctor_mA890D5ED1C145E432CB9010E905359896DB574F5 (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___writer0, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.BitWriter Unity.Multiplayer.Tools.NetStats.FastBufferWriter::EnterBitwiseContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C FastBufferWriter_EnterBitwiseContext_mE6688A98C1892645F33A457244928E066711CB2E (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.FastBufferWriter::TryBeginWriteInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Byte[] Unity.Multiplayer.Tools.NetStats.FastBufferWriter::ToArray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferWriter_ToArray_m084B89D2993DC9EF88E6BDD7CD89428D2E3D00C4_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) ;
// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetUnsafePtrAtCurrentPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtrAtCurrentPosition_m3A7E9A92309FEDD721B8AA4C2500E44DEBC3AF1C_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValue<System.UInt32>(T&)
inline void FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*, uint32_t*, const RuntimeMethod*))FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_gshared_inline)(__this, ___value0, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteBytes(System.Byte*,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetWriteSize(System.String,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_m8BE2A1AFC6F68CE2E6B5DBAC53E7DC22817FA07B_inline (String_t* ___s0, bool ___oneByteChars1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteBytesSafe(System.Byte*,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m8F93E9549A2CD555FE7E4ABFD449BA06CCFB4AB9_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteBytesSafe(System.Byte[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mBA4E60C790DF9834AF295A11D71F8FFE5D0C63EA_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::CopyTo(Unity.Multiplayer.Tools.NetStats.FastBufferWriter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_CopyTo_m101384A202A2DB4CD669955967E9CBCE80202358_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___other0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::CopyFrom(Unity.Multiplayer.Tools.NetStats.FastBufferWriter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_CopyFrom_m216BB971A08EC2F01D7E9783FE1D32E6BE45B237_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___other0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// Unity.Collections.NativeArray`1<System.Byte> Unity.Multiplayer.Tools.NetStats.FastBufferWriter::ToNativeArray(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF FastBufferWriter_ToNativeArray_mCDCD5483699B54BA22C89C70FD67A7C78729C7E9 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___allocator0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricHeader::set_EventFactoryTypeName(Unity.Collections.FixedString128Bytes)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricHeader_set_EventFactoryTypeName_mA1214A10912E33A7545164CB45F5CF934F53FC26_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricHeader::set_MetricContainerType(Unity.Multiplayer.Tools.NetStats.MetricContainerType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricHeader_set_MetricContainerType_m377CFBDE2D7F52DCAD1E3DB116A34744F7893F56_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricHeader::set_MetricId(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricHeader_set_MetricId_mE80D44D6F362F50FDAE347AD156F0DF072F10114_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricHeader::.ctor(Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricHeader__ctor_m7CD6786146C5D06C2222EACBDF135CA7DF0AC811 (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___eventFactoryTypeName0, uint32_t ___metricContainerType1, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId2, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::get_Metrics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MetricCollection_get_Metrics_m8944AF8C292CBD38316F9926DB7E732A8D749426_inline (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetWriteSize<Unity.Multiplayer.Tools.NetStats.MetricHeader>()
inline int32_t FastBufferWriter_GetWriteSize_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m2C1EA972CDCAD3C6C6334B6C3B7732C896B47E4F (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m2C1EA972CDCAD3C6C6334B6C3B7732C896B47E4F_gshared)(method);
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetWriteSize<System.UInt64>()
inline int32_t FastBufferWriter_GetWriteSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3928C841D42C9DB77C0C8DD282FAEB2A1670108E (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3928C841D42C9DB77C0C8DD282FAEB2A1670108E_gshared)(method);
}
// System.UInt64 Unity.Multiplayer.Tools.NetStats.MetricCollection::get_ConnectionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MetricCollection_get_ConnectionId_m9642B5D987352E9CC35A0252F96EB7544E583BE3_inline (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValueSafe<System.UInt64>(T&)
inline void FastBufferWriter_WriteValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5F5C9000217BB7839B7146F5E5C76D6CF0DFA0B3_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*, uint64_t*, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5F5C9000217BB7839B7146F5E5C76D6CF0DFA0B3_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValueSafe<System.Int32>(T&)
inline void FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4A7524495BACD1B2C706221F5419C8783633F221_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*, int32_t*, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4A7524495BACD1B2C706221F5419C8783633F221_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValueSafe<Unity.Multiplayer.Tools.NetStats.MetricHeader>(T&)
inline void FastBufferWriter_WriteValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m15736FBAFD419473C583C710188DB2FB93A9CE85_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m15736FBAFD419473C583C710188DB2FB93A9CE85_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric>::.ctor()
inline void List_1__ctor_mACA1AAACA22C888C77D0853C8B95366BCA73693F (List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValueSafe<System.UInt64>(T&)
inline void FastBufferReader_ReadValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB606784170577636C0C8612B9C23547AAD78F8E4_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*, uint64_t*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB606784170577636C0C8612B9C23547AAD78F8E4_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValueSafe<System.Int32>(T&)
inline void FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C62D190000EAAB69F20F921A12908AB1DC8E97A_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*, int32_t*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C62D190000EAAB69F20F921A12908AB1DC8E97A_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValueSafe<Unity.Multiplayer.Tools.NetStats.MetricHeader>(T&)
inline void FastBufferReader_ReadValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m9B9FC681AF5522CE6EEC94A603F62AB443E997C4_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m9B9FC681AF5522CE6EEC94A603F62AB443E997C4_gshared_inline)(__this, ___value0, method);
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricFactory::TryConstruct(Unity.Multiplayer.Tools.NetStats.MetricHeader,Unity.Multiplayer.Tools.NetStats.IMetric&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricFactory_TryConstruct_m62F4D3452F9AEF7E1FED2F8E75C4211DBCAF136A (MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C ___header0, RuntimeObject** ___metric1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric>::Add(T)
inline void List_1_Add_m9687500B35B1801826B07991E4129692BEE2DC28_inline (List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IMetric>,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection__ctor_m7E1CAEC87D7D909EC0229DA764B7B3B96B6EC6F3 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, RuntimeObject* ___metrics0, uint64_t ___localConnectionId1, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.MetricFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricFactory__ctor_m0AA1857A34167CA308EA43C5EA1CBB9D2D7478B1 (MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::get_BytesExponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_inline (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::.ctor(System.SByte,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, int8_t ___bytesExponent0, int8_t ___secondsExponent1, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BaseUnits::Equals(Unity.Multiplayer.Tools.NetStats.BaseUnits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseUnits_Equals_mDAA4768D7DCB7D50AA930945136ADDA4C80BEDEB (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA ___other0, const RuntimeMethod* method) ;
// System.Boolean Unity.Multiplayer.Tools.NetStats.BaseUnits::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseUnits_Equals_m46333FD6C5E022609052AAD645FFBD9C97F7AFD9 (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Unity.Multiplayer.Tools.NetStats.BaseUnits::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseUnits_GetHashCode_mE898D17E79859C71E703604A5999791AB6D5EB81 (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) ;
// System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::GetExponent(Unity.Multiplayer.Tools.NetStats.BaseUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832 (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, int32_t ___unit0, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::<get_NumeratorAndDenominatorDisplayStrings>g__AddUnit|14_0(Unity.Multiplayer.Tools.NetStats.BaseUnit,System.SByte,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseUnits_U3Cget_NumeratorAndDenominatorDisplayStringsU3Eg__AddUnitU7C14_0_m4AD86A0CCAF911923D79A6E4D77D7BFEAA34D90E (int32_t ___unit0, int8_t ___exponent1, String_t** ___str2, const RuntimeMethod* method) ;
// System.SByte System.Math::Abs(System.SByte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t Math_Abs_m58E959B262B65D499F0CA605CC256C125E558D4C_inline (int8_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.String,System.String>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7 (ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91* __this, String_t* ___item10, String_t* ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91*, String_t*, String_t*, const RuntimeMethod*))ValueTuple_2__ctor_m4D25F4A0A0085EBE6559B6CC932AA5E267DB554D_gshared)(__this, ___item10, ___item21, method);
}
// System.ValueTuple`2<System.String,System.String> Unity.Multiplayer.Tools.NetStats.BaseUnits::get_NumeratorAndDenominatorDisplayStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 BaseUnits_get_NumeratorAndDenominatorDisplayStrings_m965543E1330059B9EB03384A853042532B5B108E (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetStats.BaseUnits::get_DisplayString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUnits_get_DisplayString_m514319D1EDF3CCBE1E7416D4513236760664BF5D (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetStats.BaseUnits::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUnits_ToString_m4F328455C1BF2F8CC616E1AD01E928F5D9100CAD (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.String Unity.Multiplayer.Tools.NetStats.BaseUnitExtensions::GetSymbol(Unity.Multiplayer.Tools.NetStats.BaseUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUnitExtensions_GetSymbol_m3BEBBDDB70EBEC3230CA06D7740BE09CA1ACD31C (int32_t ___unit0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.Math::ThrowAbsOverflow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_ThrowAbsOverflow_m6BE7D786CB9020E3E0F83D515639F4C8BA6B069F (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
// T System.Activator::CreateInstance<System.UInt64>()
inline uint64_t Activator_CreateInstance_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCDF808CDA81B0ABCCE66D0FFE7CB57DE73119E5C (const RuntimeMethod* method)
{
	return ((  uint64_t (*) (const RuntimeMethod*))Activator_CreateInstance_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCDF808CDA81B0ABCCE66D0FFE7CB57DE73119E5C_gshared)(method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mE8953328CE7A71AAA908CC05046EAA3CB7CD7E9F (EmbeddedAttribute_tB689CA751E0E3EDC08A87C2A28D22C7BE9046FD4* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m15D9FD1EA78C5BE72818D1DBC9307855DC5A08BD (IsUnmanagedAttribute_t4475164ABDA610E14FA864B4087D5FF26AD93205* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection__ctor_m0F2BEBC3670B9D43220027FE76CA1F195857C259 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, RuntimeObject* ___counters0, RuntimeObject* ___gauges1, RuntimeObject* ___timers2, RuntimeObject* ___payloadEvents3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m92079708E0B0B8143A53C313E8C62D34708D5061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m878F45BD79B2E009392DB26E1D848C9EDA8D7187_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t1C9E4278DD0992BFB53341CF2B1D31E871D5CB59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t727071262B8B87C9F1C794CCE7F03282F35F8F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t7E602F68B800E9FD97AE5462BAAEB2B2A0A6A6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tC190C0DF3FC65E46AC2382576C1FF9A793C41951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		__this->___U3CConnectionIdU3Ek__BackingField_5 = ((int64_t)(-1));
		// internal MetricCollection(
		//     IReadOnlyDictionary<MetricId, IMetric<long>> counters,
		//     IReadOnlyDictionary<MetricId, IMetric<double>> gauges,
		//     IReadOnlyDictionary<MetricId, IMetric<TimeSpan>> timers,
		//     IReadOnlyDictionary<MetricId, IEventMetric> payloadEvents)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Counters = counters;
		RuntimeObject* L_0 = ___counters0;
		__this->___m_Counters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Counters_0), (void*)L_0);
		// m_Gauges = gauges;
		RuntimeObject* L_1 = ___gauges1;
		__this->___m_Gauges_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gauges_1), (void*)L_1);
		// m_Timers = timers;
		RuntimeObject* L_2 = ___timers2;
		__this->___m_Timers_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Timers_2), (void*)L_2);
		// m_PayloadEvents = payloadEvents;
		RuntimeObject* L_3 = ___payloadEvents3;
		__this->___m_PayloadEvents_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PayloadEvents_3), (void*)L_3);
		// Metrics = counters.Values
		//     .Concat<IMetric>(gauges.Values)
		//     .Concat(timers.Values)
		//     .Concat(m_PayloadEvents.Values)
		//     .ToList();
		RuntimeObject* L_4 = ___counters0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::get_Values() */, IReadOnlyDictionary_2_t1C9E4278DD0992BFB53341CF2B1D31E871D5CB59_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = ___gauges1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::get_Values() */, IReadOnlyDictionary_2_t7E602F68B800E9FD97AE5462BAAEB2B2A0A6A6FD_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8;
		L_8 = Enumerable_Concat_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m92079708E0B0B8143A53C313E8C62D34708D5061(L_5, L_7, Enumerable_Concat_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m92079708E0B0B8143A53C313E8C62D34708D5061_RuntimeMethod_var);
		RuntimeObject* L_9 = ___timers2;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::get_Values() */, IReadOnlyDictionary_2_t727071262B8B87C9F1C794CCE7F03282F35F8F4C_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_11;
		L_11 = Enumerable_Concat_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m92079708E0B0B8143A53C313E8C62D34708D5061(L_8, L_10, Enumerable_Concat_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m92079708E0B0B8143A53C313E8C62D34708D5061_RuntimeMethod_var);
		RuntimeObject* L_12 = __this->___m_PayloadEvents_3;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>::get_Values() */, IReadOnlyDictionary_2_tC190C0DF3FC65E46AC2382576C1FF9A793C41951_il2cpp_TypeInfo_var, L_12);
		RuntimeObject* L_14;
		L_14 = Enumerable_Concat_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m92079708E0B0B8143A53C313E8C62D34708D5061(L_11, L_13, Enumerable_Concat_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m92079708E0B0B8143A53C313E8C62D34708D5061_RuntimeMethod_var);
		List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8* L_15;
		L_15 = Enumerable_ToList_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m878F45BD79B2E009392DB26E1D848C9EDA8D7187(L_14, Enumerable_ToList_TisIMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_m878F45BD79B2E009392DB26E1D848C9EDA8D7187_RuntimeMethod_var);
		__this->___U3CMetricsU3Ek__BackingField_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMetricsU3Ek__BackingField_4), (void*)L_15);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IMetric>,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection__ctor_m7E1CAEC87D7D909EC0229DA764B7B3B96B6EC6F3 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, RuntimeObject* ___metrics0, uint64_t ___localConnectionId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mF902E61FDC9AA23802780B3A5D1DD83D4611E24E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m16DC1B277B742D451D819E466BA7CBCB826DA019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_mF9861B0B0068F48C04D2EF9A7D6A56C3174077D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m648B052929D921294E0B852C8ECCF2B75B4F72BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m4D82581A54B76CB8D8B8DEC7AB4FDE898C692BFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m080BB2145AC6DE05BF2BE3B5AF5980C2BDFE61CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m580F3C496AF72BED8315706D93ABE82CCF9E90B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m2FD72C7F12F3069F0EE487AD409386E900DB3A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7131B4C0145140272524199F11576D928ECEDA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCollection_U3C_ctorU3Eg__ByMetricIdU7C5_0_m4CCB70962C197B1178FCEFDD1DC3C0F16DB3BCFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		__this->___U3CConnectionIdU3Ek__BackingField_5 = ((int64_t)(-1));
		// internal MetricCollection(
		//     IReadOnlyCollection<IMetric> metrics,
		//     ulong localConnectionId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Counters = metrics.OfType<IMetric<long>>().ToDictionary(ByMetricId);
		RuntimeObject* L_0 = ___metrics0;
		RuntimeObject* L_1;
		L_1 = Enumerable_OfType_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m16DC1B277B742D451D819E466BA7CBCB826DA019(L_0, Enumerable_OfType_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m16DC1B277B742D451D819E466BA7CBCB826DA019_RuntimeMethod_var);
		Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* L_2 = (Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A*)il2cpp_codegen_object_new(Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_mADDCB1CB254FEDC0FD1D525804B01D7780C50EC5(L_2, NULL, (intptr_t)((void*)MetricCollection_U3C_ctorU3Eg__ByMetricIdU7C5_0_m4CCB70962C197B1178FCEFDD1DC3C0F16DB3BCFF_RuntimeMethod_var), NULL);
		Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69* L_3;
		L_3 = Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m080BB2145AC6DE05BF2BE3B5AF5980C2BDFE61CE(L_1, L_2, Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m080BB2145AC6DE05BF2BE3B5AF5980C2BDFE61CE_RuntimeMethod_var);
		__this->___m_Counters_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Counters_0), (void*)L_3);
		// m_Gauges = metrics.OfType<IMetric<double>>().ToDictionary(ByMetricId);
		RuntimeObject* L_4 = ___metrics0;
		RuntimeObject* L_5;
		L_5 = Enumerable_OfType_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_mF9861B0B0068F48C04D2EF9A7D6A56C3174077D6(L_4, Enumerable_OfType_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_mF9861B0B0068F48C04D2EF9A7D6A56C3174077D6_RuntimeMethod_var);
		Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* L_6 = (Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174*)il2cpp_codegen_object_new(Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m57C457EC2CE52047143F8EED88154DBFC973D55C(L_6, NULL, (intptr_t)((void*)MetricCollection_U3C_ctorU3Eg__ByMetricIdU7C5_0_m4CCB70962C197B1178FCEFDD1DC3C0F16DB3BCFF_RuntimeMethod_var), NULL);
		Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8* L_7;
		L_7 = Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m580F3C496AF72BED8315706D93ABE82CCF9E90B4(L_5, L_6, Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m580F3C496AF72BED8315706D93ABE82CCF9E90B4_RuntimeMethod_var);
		__this->___m_Gauges_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gauges_1), (void*)L_7);
		// m_Timers = metrics.OfType<IMetric<TimeSpan>>().ToDictionary(ByMetricId);
		RuntimeObject* L_8 = ___metrics0;
		RuntimeObject* L_9;
		L_9 = Enumerable_OfType_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m648B052929D921294E0B852C8ECCF2B75B4F72BB(L_8, Enumerable_OfType_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m648B052929D921294E0B852C8ECCF2B75B4F72BB_RuntimeMethod_var);
		Func_2_t7131B4C0145140272524199F11576D928ECEDA25* L_10 = (Func_2_t7131B4C0145140272524199F11576D928ECEDA25*)il2cpp_codegen_object_new(Func_2_t7131B4C0145140272524199F11576D928ECEDA25_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m39EB10DEA5A3A0C842D5F3BFEDA06CB8379A2350(L_10, NULL, (intptr_t)((void*)MetricCollection_U3C_ctorU3Eg__ByMetricIdU7C5_0_m4CCB70962C197B1178FCEFDD1DC3C0F16DB3BCFF_RuntimeMethod_var), NULL);
		Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A* L_11;
		L_11 = Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m2FD72C7F12F3069F0EE487AD409386E900DB3A14(L_9, L_10, Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m2FD72C7F12F3069F0EE487AD409386E900DB3A14_RuntimeMethod_var);
		__this->___m_Timers_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Timers_2), (void*)L_11);
		// m_PayloadEvents = metrics.OfType<IEventMetric>().ToDictionary(ByMetricId);
		RuntimeObject* L_12 = ___metrics0;
		RuntimeObject* L_13;
		L_13 = Enumerable_OfType_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mF902E61FDC9AA23802780B3A5D1DD83D4611E24E(L_12, Enumerable_OfType_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mF902E61FDC9AA23802780B3A5D1DD83D4611E24E_RuntimeMethod_var);
		Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* L_14 = (Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A*)il2cpp_codegen_object_new(Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_2__ctor_mEF4DFDA47D252A588B2ADA132398621F1193E7AD(L_14, NULL, (intptr_t)((void*)MetricCollection_U3C_ctorU3Eg__ByMetricIdU7C5_0_m4CCB70962C197B1178FCEFDD1DC3C0F16DB3BCFF_RuntimeMethod_var), NULL);
		Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0* L_15;
		L_15 = Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m4D82581A54B76CB8D8B8DEC7AB4FDE898C692BFA(L_13, L_14, Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_m4D82581A54B76CB8D8B8DEC7AB4FDE898C692BFA_RuntimeMethod_var);
		__this->___m_PayloadEvents_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PayloadEvents_3), (void*)L_15);
		// ConnectionId = localConnectionId;
		uint64_t L_16 = ___localConnectionId1;
		MetricCollection_set_ConnectionId_m3DF3CCC3C1EA2F75D54F4A36F7D850904E013DFA_inline(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::get_Metrics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricCollection_get_Metrics_m8944AF8C292CBD38316F9926DB7E732A8D749426 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<IMetric> Metrics { get; }
		RuntimeObject* L_0 = __this->___U3CMetricsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.UInt64 Unity.Multiplayer.Tools.NetStats.MetricCollection::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MetricCollection_get_ConnectionId_m9642B5D987352E9CC35A0252F96EB7544E583BE3 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, const RuntimeMethod* method) 
{
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		uint64_t L_0 = __this->___U3CConnectionIdU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection_set_ConnectionId_m3DF3CCC3C1EA2F75D54F4A36F7D850904E013DFA (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		uint64_t L_0 = ___value0;
		__this->___U3CConnectionIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricCollection_TryGetCounter_m002A9388A45AA9562FAF9DA9C81AE6DAF2C7C07A (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, RuntimeObject** ___counter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t1C9E4278DD0992BFB53341CF2B1D31E871D5CB59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Counters.TryGetValue(metricId, out counter);
		RuntimeObject* L_0 = __this->___m_Counters_0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1 = ___metricId0;
		RuntimeObject** L_2 = ___counter1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, RuntimeObject** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t1C9E4278DD0992BFB53341CF2B1D31E871D5CB59_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64> Unity.Multiplayer.Tools.NetStats.MetricCollection::GetCounterOrDefault(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricCollection_GetCounterOrDefault_m3D25C0D5E00523FD7F97058AEF3BFECFC6C1BB56 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// if (TryGetCounter(metricId, out IMetric<long> counter))
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = ___metricId0;
		bool L_1;
		L_1 = MetricCollection_TryGetCounter_m002A9388A45AA9562FAF9DA9C81AE6DAF2C7C07A(__this, L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return counter;
		RuntimeObject* L_2 = V_0;
		return L_2;
	}

IL_000d:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetGauge(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricCollection_TryGetGauge_mC883DC9D85B51FF193EDC753FB056EE7E9DEE21D (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, RuntimeObject** ___gauge1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t7E602F68B800E9FD97AE5462BAAEB2B2A0A6A6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Gauges.TryGetValue(metricId, out gauge);
		RuntimeObject* L_0 = __this->___m_Gauges_1;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1 = ___metricId0;
		RuntimeObject** L_2 = ___gauge1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, RuntimeObject** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t7E602F68B800E9FD97AE5462BAAEB2B2A0A6A6FD_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetTimer(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricCollection_TryGetTimer_mF716B6D7F195B2B07DDDDD42D2C9481BBA93B339 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, RuntimeObject** ___timer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t727071262B8B87C9F1C794CCE7F03282F35F8F4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Timers.TryGetValue(metricId, out timer);
		RuntimeObject* L_0 = __this->___m_Timers_2;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1 = ___metricId0;
		RuntimeObject** L_2 = ___timer1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, RuntimeObject** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t727071262B8B87C9F1C794CCE7F03282F35F8F4C_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricCollection::GetEventCount(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricCollection_GetEventCount_mDE4B63CED45166180AC46334C5AC8F031E256984 (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tC190C0DF3FC65E46AC2382576C1FF9A793C41951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (m_PayloadEvents.TryGetValue(metricId, out var eventMetric))
		RuntimeObject* L_0 = __this->___m_PayloadEvents_3;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1 = ___metricId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, RuntimeObject** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tC190C0DF3FC65E46AC2382576C1FF9A793C41951_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return eventMetric.Count;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.Multiplayer.Tools.NetStats.IEventMetric::get_Count() */, IEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}

IL_0017:
	{
		// return 0;
		return 0;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricCollection::<.ctor>g__ByMetricId|5_0(Unity.Multiplayer.Tools.NetStats.IMetric)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C MetricCollection_U3C_ctorU3Eg__ByMetricIdU7C5_0_m4CCB70962C197B1178FCEFDD1DC3C0F16DB3BCFF (RuntimeObject* ___metric0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static MetricId ByMetricId(IMetric metric) => metric.Id;
		RuntimeObject* L_0 = ___metric0;
		NullCheck(L_0);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1;
		L_1 = InterfaceFuncInvoker0< MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(1 /* Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.IMetric::get_Id() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder::WithCounters(Unity.Multiplayer.Tools.NetStats.Counter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562* MetricCollectionBuilder_WithCounters_m7F9B5AB200B81D4E9A1603EE3948C6736387B445 (MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562* __this, CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m2F90BB4F94E3DC65A8D214E3CAA3F73F26137B29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Counters.AddRange(counters);
		List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* L_0 = __this->___m_Counters_0;
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_1 = ___counters0;
		NullCheck(L_0);
		List_1_AddRange_m2F90BB4F94E3DC65A8D214E3CAA3F73F26137B29(L_0, (RuntimeObject*)L_1, List_1_AddRange_m2F90BB4F94E3DC65A8D214E3CAA3F73F26137B29_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder::WithGauges(Unity.Multiplayer.Tools.NetStats.Gauge[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562* MetricCollectionBuilder_WithGauges_m290FA3A6270B4A737E5751E2273964FD7437CB60 (MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562* __this, GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* ___gauges0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m5AA8532504BEA30EB51C8545CC8875628F544A9D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Gauges.AddRange(gauges);
		List_1_t7782731B306A68D587677546249E9976ED8A52FD* L_0 = __this->___m_Gauges_1;
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_1 = ___gauges0;
		NullCheck(L_0);
		List_1_AddRange_m5AA8532504BEA30EB51C8545CC8875628F544A9D(L_0, (RuntimeObject*)L_1, List_1_AddRange_m5AA8532504BEA30EB51C8545CC8875628F544A9D_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder::WithTimers(Unity.Multiplayer.Tools.NetStats.Timer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562* MetricCollectionBuilder_WithTimers_m34555E5D1D03728F6C7200A596F036055BAD3C1C (MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562* __this, TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568* ___timers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m516779D730470A3E6A5FDEE765AC01493E0A4299_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Timers.AddRange(timers);
		List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* L_0 = __this->___m_Timers_2;
		TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568* L_1 = ___timers0;
		NullCheck(L_0);
		List_1_AddRange_m516779D730470A3E6A5FDEE765AC01493E0A4299(L_0, (RuntimeObject*)L_1, List_1_AddRange_m516779D730470A3E6A5FDEE765AC01493E0A4299_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricCollection Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* MetricCollectionBuilder_Build_m43A6736CECC70C1B43F6F183F595DAA5B7558716 (MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mAC0698C91DE3AD46F5B353D840F76D5541B79E3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m694970CF67E2BC2A3E0A577EE16D91139E983295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_m52520781A8AFEC1111E4187E00345DC77E22105D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m1B20E57D346B354B120A28C200F0B6211B5D490D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7131B4C0145140272524199F11576D928ECEDA25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m11ECB621D2AD5AF80D1F734DE185EE07F0FC6C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m814004827E190BB3F9312BFD214239C453BC5261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m8401A478E2202314CCD13F4DDF7C464A9E353D4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_mAFB3A4FFA915201A675EE8FEC53A8E8BB1F6083B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__8_0_mF39929F4CF06FE74ABFD2476DB3B39873C9BF993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__8_1_m83A6AF25993775B64B56E398211B6223B97E7A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__8_2_m917E30EED8501787054E3A4B1E2EC0C4E9F9D0FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__8_3_mEEB6303026C70C8CA970D2F159163CF6CB3E9321_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__8_4_mDE58A1007249FE3CF7F0777A7818D7B39E156729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__8_5_mD85963188A68B4FE12DED68E92FACBD4E91C20D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__8_6_m8116C4D4D8B5BE3A3A043CA3FB61530B7D83FB53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__8_7_m734E9604EF64F208088824E130B533A13E954A43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* G_B2_0 = NULL;
	List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* G_B2_1 = NULL;
	Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* G_B1_0 = NULL;
	List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* G_B1_1 = NULL;
	Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6* G_B4_0 = NULL;
	Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* G_B4_1 = NULL;
	List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* G_B4_2 = NULL;
	Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6* G_B3_0 = NULL;
	Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* G_B3_1 = NULL;
	List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* G_B3_2 = NULL;
	Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* G_B6_0 = NULL;
	List_1_t7782731B306A68D587677546249E9976ED8A52FD* G_B6_1 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B6_2 = NULL;
	Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* G_B5_0 = NULL;
	List_1_t7782731B306A68D587677546249E9976ED8A52FD* G_B5_1 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B5_2 = NULL;
	Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1* G_B8_0 = NULL;
	Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* G_B8_1 = NULL;
	List_1_t7782731B306A68D587677546249E9976ED8A52FD* G_B8_2 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B8_3 = NULL;
	Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1* G_B7_0 = NULL;
	Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* G_B7_1 = NULL;
	List_1_t7782731B306A68D587677546249E9976ED8A52FD* G_B7_2 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B7_3 = NULL;
	Func_2_t7131B4C0145140272524199F11576D928ECEDA25* G_B10_0 = NULL;
	List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* G_B10_1 = NULL;
	ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* G_B10_2 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B10_3 = NULL;
	Func_2_t7131B4C0145140272524199F11576D928ECEDA25* G_B9_0 = NULL;
	List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* G_B9_1 = NULL;
	ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* G_B9_2 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B9_3 = NULL;
	Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA* G_B12_0 = NULL;
	Func_2_t7131B4C0145140272524199F11576D928ECEDA25* G_B12_1 = NULL;
	List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* G_B12_2 = NULL;
	ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* G_B12_3 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B12_4 = NULL;
	Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA* G_B11_0 = NULL;
	Func_2_t7131B4C0145140272524199F11576D928ECEDA25* G_B11_1 = NULL;
	List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* G_B11_2 = NULL;
	ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* G_B11_3 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B11_4 = NULL;
	Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* G_B14_0 = NULL;
	List_1_t7B798011481AAA808C915C14FF590842496ACEAE* G_B14_1 = NULL;
	ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918* G_B14_2 = NULL;
	ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* G_B14_3 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B14_4 = NULL;
	Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* G_B13_0 = NULL;
	List_1_t7B798011481AAA808C915C14FF590842496ACEAE* G_B13_1 = NULL;
	ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918* G_B13_2 = NULL;
	ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* G_B13_3 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B13_4 = NULL;
	Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7* G_B16_0 = NULL;
	Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* G_B16_1 = NULL;
	List_1_t7B798011481AAA808C915C14FF590842496ACEAE* G_B16_2 = NULL;
	ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918* G_B16_3 = NULL;
	ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* G_B16_4 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B16_5 = NULL;
	Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7* G_B15_0 = NULL;
	Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* G_B15_1 = NULL;
	List_1_t7B798011481AAA808C915C14FF590842496ACEAE* G_B15_2 = NULL;
	ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918* G_B15_3 = NULL;
	ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* G_B15_4 = NULL;
	ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* G_B15_5 = NULL;
	{
		// return new MetricCollection(
		//     new ReadOnlyDictionary<MetricId, IMetric<long>>(m_Counters.ToDictionary(x => x.Id, x => x)),
		//     new ReadOnlyDictionary<MetricId, IMetric<double>>(m_Gauges.ToDictionary(x => x.Id, x => x)),
		//     new ReadOnlyDictionary<MetricId, IMetric<TimeSpan>>(m_Timers.ToDictionary(x => x.Id, x => x)),
		//     new ReadOnlyDictionary<MetricId, IEventMetric>(m_PayloadEvents.ToDictionary(x => x.Id, x => x)));
		List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* L_0 = __this->___m_Counters_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* L_1 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* L_3 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* L_4 = (Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A*)il2cpp_codegen_object_new(Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mADDCB1CB254FEDC0FD1D525804B01D7780C50EC5(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__8_0_mF39929F4CF06FE74ABFD2476DB3B39873C9BF993_RuntimeMethod_var), NULL);
		Func_2_t38092798465781C809CE5EB68D518B3D2BFC0A0A* L_5 = L_4;
		((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6* L_6 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_2;
		Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* L_8 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6* L_9 = (Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6*)il2cpp_codegen_object_new(Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m4A04980A38EC810BF7DCE330965BDD6198595ADB(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__8_1_m83A6AF25993775B64B56E398211B6223B97E7A86_RuntimeMethod_var), NULL);
		Func_2_t23EE61C006714A359B79443DB77C8CE26B96F2B6* L_10 = L_9;
		((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_2), (void*)L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0044:
	{
		Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69* L_11;
		L_11 = Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m694970CF67E2BC2A3E0A577EE16D91139E983295(G_B4_2, G_B4_1, G_B4_0, Enumerable_ToDictionary_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_t8F3766528C5B0E2926E3057F350A597F6EBAC43F_m694970CF67E2BC2A3E0A577EE16D91139E983295_RuntimeMethod_var);
		ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* L_12 = (ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ReadOnlyDictionary_2__ctor_m11ECB621D2AD5AF80D1F734DE185EE07F0FC6C79(L_12, L_11, ReadOnlyDictionary_2__ctor_m11ECB621D2AD5AF80D1F734DE185EE07F0FC6C79_RuntimeMethod_var);
		List_1_t7782731B306A68D587677546249E9976ED8A52FD* L_13 = __this->___m_Gauges_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* L_14 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_2_3;
		Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* L_15 = L_14;
		G_B5_0 = L_15;
		G_B5_1 = L_13;
		G_B5_2 = L_12;
		if (L_15)
		{
			G_B6_0 = L_15;
			G_B6_1 = L_13;
			G_B6_2 = L_12;
			goto IL_0073;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* L_16 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* L_17 = (Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174*)il2cpp_codegen_object_new(Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_m57C457EC2CE52047143F8EED88154DBFC973D55C(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__8_2_m917E30EED8501787054E3A4B1E2EC0C4E9F9D0FC_RuntimeMethod_var), NULL);
		Func_2_t29C41D783CA90E8D053DB498A4124A7856BA7174* L_18 = L_17;
		((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_2_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_2_3), (void*)L_18);
		G_B6_0 = L_18;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0073:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1* L_19 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_3_4;
		Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1* L_20 = L_19;
		G_B7_0 = L_20;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		if (L_20)
		{
			G_B8_0 = L_20;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			G_B8_3 = G_B6_2;
			goto IL_0092;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* L_21 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1* L_22 = (Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1*)il2cpp_codegen_object_new(Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Func_2__ctor_m00E38A50C3CF66C97072A94D1E5E90BCAFA37029(L_22, L_21, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__8_3_mEEB6303026C70C8CA970D2F159163CF6CB3E9321_RuntimeMethod_var), NULL);
		Func_2_t109DB23B816BEDF599E804FA69C8E2C80E3365F1* L_23 = L_22;
		((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_3_4 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_3_4), (void*)L_23);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0092:
	{
		Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8* L_24;
		L_24 = Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_m52520781A8AFEC1111E4187E00345DC77E22105D(G_B8_2, G_B8_1, G_B8_0, Enumerable_ToDictionary_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tB0BE5928C96236333BC14688A14EFB074FB28D79_m52520781A8AFEC1111E4187E00345DC77E22105D_RuntimeMethod_var);
		ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* L_25 = (ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		ReadOnlyDictionary_2__ctor_m8401A478E2202314CCD13F4DDF7C464A9E353D4F(L_25, L_24, ReadOnlyDictionary_2__ctor_m8401A478E2202314CCD13F4DDF7C464A9E353D4F_RuntimeMethod_var);
		List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* L_26 = __this->___m_Timers_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		Func_2_t7131B4C0145140272524199F11576D928ECEDA25* L_27 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_4_5;
		Func_2_t7131B4C0145140272524199F11576D928ECEDA25* L_28 = L_27;
		G_B9_0 = L_28;
		G_B9_1 = L_26;
		G_B9_2 = L_25;
		G_B9_3 = G_B8_3;
		if (L_28)
		{
			G_B10_0 = L_28;
			G_B10_1 = L_26;
			G_B10_2 = L_25;
			G_B10_3 = G_B8_3;
			goto IL_00c1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* L_29 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7131B4C0145140272524199F11576D928ECEDA25* L_30 = (Func_2_t7131B4C0145140272524199F11576D928ECEDA25*)il2cpp_codegen_object_new(Func_2_t7131B4C0145140272524199F11576D928ECEDA25_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Func_2__ctor_m39EB10DEA5A3A0C842D5F3BFEDA06CB8379A2350(L_30, L_29, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__8_4_mDE58A1007249FE3CF7F0777A7818D7B39E156729_RuntimeMethod_var), NULL);
		Func_2_t7131B4C0145140272524199F11576D928ECEDA25* L_31 = L_30;
		((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_4_5 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_4_5), (void*)L_31);
		G_B10_0 = L_31;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}

IL_00c1:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA* L_32 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_5_6;
		Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA* L_33 = L_32;
		G_B11_0 = L_33;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
		if (L_33)
		{
			G_B12_0 = L_33;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			G_B12_3 = G_B10_2;
			G_B12_4 = G_B10_3;
			goto IL_00e0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* L_34 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA* L_35 = (Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA*)il2cpp_codegen_object_new(Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Func_2__ctor_m043CA6FFD01D11463648F145B1F1F423271A61C0(L_35, L_34, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__8_5_mD85963188A68B4FE12DED68E92FACBD4E91C20D1_RuntimeMethod_var), NULL);
		Func_2_t7A1FD9A8A42231ABFBFCC5299F81613A7C13C6BA* L_36 = L_35;
		((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_5_6 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_5_6), (void*)L_36);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
		G_B12_4 = G_B11_4;
	}

IL_00e0:
	{
		Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A* L_37;
		L_37 = Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m1B20E57D346B354B120A28C200F0B6211B5D490D(G_B12_2, G_B12_1, G_B12_0, Enumerable_ToDictionary_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIMetric_1_tC218B8CA02115EC1A34723991F46178596F95801_m1B20E57D346B354B120A28C200F0B6211B5D490D_RuntimeMethod_var);
		ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918* L_38 = (ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		ReadOnlyDictionary_2__ctor_mAFB3A4FFA915201A675EE8FEC53A8E8BB1F6083B(L_38, L_37, ReadOnlyDictionary_2__ctor_mAFB3A4FFA915201A675EE8FEC53A8E8BB1F6083B_RuntimeMethod_var);
		List_1_t7B798011481AAA808C915C14FF590842496ACEAE* L_39 = __this->___m_PayloadEvents_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* L_40 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_6_7;
		Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* L_41 = L_40;
		G_B13_0 = L_41;
		G_B13_1 = L_39;
		G_B13_2 = L_38;
		G_B13_3 = G_B12_3;
		G_B13_4 = G_B12_4;
		if (L_41)
		{
			G_B14_0 = L_41;
			G_B14_1 = L_39;
			G_B14_2 = L_38;
			G_B14_3 = G_B12_3;
			G_B14_4 = G_B12_4;
			goto IL_010f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* L_42 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* L_43 = (Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A*)il2cpp_codegen_object_new(Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Func_2__ctor_mEF4DFDA47D252A588B2ADA132398621F1193E7AD(L_43, L_42, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__8_6_m8116C4D4D8B5BE3A3A043CA3FB61530B7D83FB53_RuntimeMethod_var), NULL);
		Func_2_t02D2E25B3AA2CE74BEF9D165BD7988375337818A* L_44 = L_43;
		((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_6_7 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_6_7), (void*)L_44);
		G_B14_0 = L_44;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		G_B14_4 = G_B13_4;
	}

IL_010f:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7* L_45 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_7_8;
		Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7* L_46 = L_45;
		G_B15_0 = L_46;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
		G_B15_4 = G_B14_3;
		G_B15_5 = G_B14_4;
		if (L_46)
		{
			G_B16_0 = L_46;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			G_B16_3 = G_B14_2;
			G_B16_4 = G_B14_3;
			G_B16_5 = G_B14_4;
			goto IL_012e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* L_47 = ((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7* L_48 = (Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7*)il2cpp_codegen_object_new(Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Func_2__ctor_m7AD26331C26AC52F4AF013A1CA939BB796ACF2C1(L_48, L_47, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__8_7_m734E9604EF64F208088824E130B533A13E954A43_RuntimeMethod_var), NULL);
		Func_2_tE2E9D3F9E72397F712661BC4B92DE9357F501AB7* L_49 = L_48;
		((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_7_8 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9__8_7_8), (void*)L_49);
		G_B16_0 = L_49;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
		G_B16_4 = G_B15_4;
		G_B16_5 = G_B15_5;
	}

IL_012e:
	{
		Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0* L_50;
		L_50 = Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mAC0698C91DE3AD46F5B353D840F76D5541B79E3A(G_B16_2, G_B16_1, G_B16_0, Enumerable_ToDictionary_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_TisMetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_mAC0698C91DE3AD46F5B353D840F76D5541B79E3A_RuntimeMethod_var);
		ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D* L_51 = (ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		ReadOnlyDictionary_2__ctor_m814004827E190BB3F9312BFD214239C453BC5261(L_51, L_50, ReadOnlyDictionary_2__ctor_m814004827E190BB3F9312BFD214239C453BC5261_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_52 = (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*)il2cpp_codegen_object_new(MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		MetricCollection__ctor_m0F2BEBC3670B9D43220027FE76CA1F195857C259(L_52, G_B16_5, G_B16_4, G_B16_3, L_51, NULL);
		return L_52;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollectionBuilder__ctor_m2B7B57BE2416421DDBB22E81BEBC131A287AFD99 (MetricCollectionBuilder_t2668FB74D752CEDCB82B0080D0BBD67A3CC66562* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m22BEB381C1E9C4212A045674F13B3329208001A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m649334AA43AF58675E99C2E9FC263D1186068F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA2B991082BC26CF831175FDDC7906AB878B441CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC440A6CA6CCCD0E1FE75A1A50D6548092D9EDE4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7782731B306A68D587677546249E9976ED8A52FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7B798011481AAA808C915C14FF590842496ACEAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly List<IMetric<long>> m_Counters = new List<IMetric<long>>();
		List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088* L_0 = (List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088*)il2cpp_codegen_object_new(List_1_t44D18ADB641AF8DAD70874064755AE396D3E0088_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m22BEB381C1E9C4212A045674F13B3329208001A2(L_0, List_1__ctor_m22BEB381C1E9C4212A045674F13B3329208001A2_RuntimeMethod_var);
		__this->___m_Counters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Counters_0), (void*)L_0);
		// readonly List<IMetric<double>> m_Gauges = new List<IMetric<double>>();
		List_1_t7782731B306A68D587677546249E9976ED8A52FD* L_1 = (List_1_t7782731B306A68D587677546249E9976ED8A52FD*)il2cpp_codegen_object_new(List_1_t7782731B306A68D587677546249E9976ED8A52FD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC440A6CA6CCCD0E1FE75A1A50D6548092D9EDE4A(L_1, List_1__ctor_mC440A6CA6CCCD0E1FE75A1A50D6548092D9EDE4A_RuntimeMethod_var);
		__this->___m_Gauges_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gauges_1), (void*)L_1);
		// readonly List<IMetric<TimeSpan>> m_Timers = new List<IMetric<TimeSpan>>();
		List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46* L_2 = (List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46*)il2cpp_codegen_object_new(List_1_tBB86FA754196F4D139A6252084F5FABAF0A0CD46_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mA2B991082BC26CF831175FDDC7906AB878B441CD(L_2, List_1__ctor_mA2B991082BC26CF831175FDDC7906AB878B441CD_RuntimeMethod_var);
		__this->___m_Timers_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Timers_2), (void*)L_2);
		// readonly List<IEventMetric> m_PayloadEvents = new List<IEventMetric>();
		List_1_t7B798011481AAA808C915C14FF590842496ACEAE* L_3 = (List_1_t7B798011481AAA808C915C14FF590842496ACEAE*)il2cpp_codegen_object_new(List_1_t7B798011481AAA808C915C14FF590842496ACEAE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m649334AA43AF58675E99C2E9FC263D1186068F18(L_3, List_1__ctor_m649334AA43AF58675E99C2E9FC263D1186068F18_RuntimeMethod_var);
		__this->___m_PayloadEvents_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PayloadEvents_3), (void*)L_3);
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1266FB69954C0E11BB6523140915BF8768F9D56B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* L_0 = (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0*)il2cpp_codegen_object_new(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m63912B6E383FE5043BB22735491175AC97713DF0(L_0, NULL);
		((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63912B6E383FE5043BB22735491175AC97713DF0 (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<Build>b__8_0(Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C U3CU3Ec_U3CBuildU3Eb__8_0_mF39929F4CF06FE74ABFD2476DB3B39873C9BF993 (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new ReadOnlyDictionary<MetricId, IMetric<long>>(m_Counters.ToDictionary(x => x.Id, x => x)),
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1;
		L_1 = InterfaceFuncInvoker0< MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(1 /* Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.IMetric::get_Id() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<Build>b__8_1(Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CBuildU3Eb__8_1_m83A6AF25993775B64B56E398211B6223B97E7A86 (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	{
		// new ReadOnlyDictionary<MetricId, IMetric<long>>(m_Counters.ToDictionary(x => x.Id, x => x)),
		RuntimeObject* L_0 = ___x0;
		return L_0;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<Build>b__8_2(Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C U3CU3Ec_U3CBuildU3Eb__8_2_m917E30EED8501787054E3A4B1E2EC0C4E9F9D0FC (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new ReadOnlyDictionary<MetricId, IMetric<double>>(m_Gauges.ToDictionary(x => x.Id, x => x)),
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1;
		L_1 = InterfaceFuncInvoker0< MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(1 /* Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.IMetric::get_Id() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<Build>b__8_3(Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CBuildU3Eb__8_3_mEEB6303026C70C8CA970D2F159163CF6CB3E9321 (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	{
		// new ReadOnlyDictionary<MetricId, IMetric<double>>(m_Gauges.ToDictionary(x => x.Id, x => x)),
		RuntimeObject* L_0 = ___x0;
		return L_0;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<Build>b__8_4(Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C U3CU3Ec_U3CBuildU3Eb__8_4_mDE58A1007249FE3CF7F0777A7818D7B39E156729 (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new ReadOnlyDictionary<MetricId, IMetric<TimeSpan>>(m_Timers.ToDictionary(x => x.Id, x => x)),
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1;
		L_1 = InterfaceFuncInvoker0< MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(1 /* Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.IMetric::get_Id() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan> Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<Build>b__8_5(Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CBuildU3Eb__8_5_mD85963188A68B4FE12DED68E92FACBD4E91C20D1 (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	{
		// new ReadOnlyDictionary<MetricId, IMetric<TimeSpan>>(m_Timers.ToDictionary(x => x.Id, x => x)),
		RuntimeObject* L_0 = ___x0;
		return L_0;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<Build>b__8_6(Unity.Multiplayer.Tools.NetStats.IEventMetric)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C U3CU3Ec_U3CBuildU3Eb__8_6_m8116C4D4D8B5BE3A3A043CA3FB61530B7D83FB53 (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new ReadOnlyDictionary<MetricId, IEventMetric>(m_PayloadEvents.ToDictionary(x => x.Id, x => x)));
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1;
		L_1 = InterfaceFuncInvoker0< MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(1 /* Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.IMetric::get_Id() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Unity.Multiplayer.Tools.NetStats.IEventMetric Unity.Multiplayer.Tools.NetStats.MetricCollectionBuilder/<>c::<Build>b__8_7(Unity.Multiplayer.Tools.NetStats.IEventMetric)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CBuildU3Eb__8_7_m734E9604EF64F208088824E130B533A13E954A43 (U3CU3Ec_tF89B83E1BE4B4882695A898A160515F8A55CFAD0* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	{
		// new ReadOnlyDictionary<MetricId, IEventMetric>(m_PayloadEvents.ToDictionary(x => x.Id, x => x)));
		RuntimeObject* L_0 = ___x0;
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher__ctor_m7DC37197A5C4922FF961C302C761494704523192 (MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___collection0, RuntimeObject* ___resettables1, RuntimeObject* ___eventMetrics2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m066769912F558DFB69ECBCAAD8517E4DB975BB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly IList<IMetricObserver> m_Observers = new List<IMetricObserver>();
		List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA* L_0 = (List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA*)il2cpp_codegen_object_new(List_1_t92DFFBC086EB8E8EAAF14838DADAE43E917861AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m066769912F558DFB69ECBCAAD8517E4DB975BB6F(L_0, List_1__ctor_m066769912F558DFB69ECBCAAD8517E4DB975BB6F_RuntimeMethod_var);
		__this->___m_Observers_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Observers_4), (void*)L_0);
		// internal MetricDispatcher(
		//     MetricCollection collection,
		//     IReadOnlyList<IResettable> resettables,
		//     IReadOnlyList<IEventMetric> eventMetrics)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Collection = collection;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_1 = ___collection0;
		__this->___m_Collection_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Collection_1), (void*)L_1);
		// m_Resettables = resettables;
		RuntimeObject* L_2 = ___resettables1;
		__this->___m_Resettables_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Resettables_2), (void*)L_2);
		// m_EventMetrics = eventMetrics;
		RuntimeObject* L_3 = ___eventMetrics2;
		__this->___m_EventMetrics_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventMetrics_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher_RegisterObserver_m4F1ED3A966650406B9D5C312ACFF0214EAF9D0BB (MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524* __this, RuntimeObject* ___observer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t475416394B9EC14524E7851A4516498F8F13A26C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Observers.Add(observer);
		RuntimeObject* L_0 = __this->___m_Observers_4;
		RuntimeObject* L_1 = ___observer0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::Add(T) */, ICollection_1_t475416394B9EC14524E7851A4516498F8F13A26C_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::SetConnectionId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher_SetConnectionId_mC54B8A47BBCF3E094236FBA92E467DD2206ACAEA (MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524* __this, uint64_t ___connectionId0, const RuntimeMethod* method) 
{
	{
		// m_Collection.ConnectionId = connectionId;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_0 = __this->___m_Collection_1;
		uint64_t L_1 = ___connectionId0;
		NullCheck(L_0);
		MetricCollection_set_ConnectionId_m3DF3CCC3C1EA2F75D54F4A36F7D850904E013DFA_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::Dispatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher_Dispatch_mC64EB2D2E70E75E70752FD6E9B5C6D29F95F7C22 (MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t475416394B9EC14524E7851A4516498F8F13A26C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t28F5E7749598850DA42581B33F9833C63EAF762D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tBC5119158FB55C0F6D545E6B0F7C2E645B2EBDC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tC9428F7495FE8833226612922C90E9FEAEEBBFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t220A2DEB3D29BDA8E50F99D820459DDDF84F2C20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t8DF24A4F8FFE34DF245254F1D7195E6360D9C0D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResettable_tA716639B28412EAB4F0C8CB11586A9B9FCAA7E7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96871D276C672785BE299C9D243E065BB938A648);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var wentOverLimit = false;
		V_0 = (bool)0;
		// for (var i = 0; i < m_EventMetrics.Count; i++)
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		// if (m_EventMetrics[i].WentOverLimit)
		RuntimeObject* L_0 = __this->___m_EventMetrics_3;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>::get_Item(System.Int32) */, IReadOnlyList_1_t8DF24A4F8FFE34DF245254F1D7195E6360D9C0D1_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Multiplayer.Tools.NetStats.IEventMetric::get_WentOverLimit() */, IEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// wentOverLimit = true;
		V_0 = (bool)1;
		// break;
		goto IL_002f;
	}

IL_001d:
	{
		// for (var i = 0; i < m_EventMetrics.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0021:
	{
		// for (var i = 0; i < m_EventMetrics.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = __this->___m_EventMetrics_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>::get_Count() */, IReadOnlyCollection_1_tBC5119158FB55C0F6D545E6B0F7C2E645B2EBDC2_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}

IL_002f:
	{
		// if (wentOverLimit)
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.LogWarning(k_ThrottlingWarning);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral96871D276C672785BE299C9D243E065BB938A648, NULL);
	}

IL_003c:
	{
		// for (var i = 0; i < m_Observers.Count; i++)
		V_2 = 0;
		goto IL_005b;
	}

IL_0040:
	{
		// var snapshotObserver = m_Observers[i];
		RuntimeObject* L_9 = __this->___m_Observers_4;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::get_Item(System.Int32) */, IList_1_t28F5E7749598850DA42581B33F9833C63EAF762D_il2cpp_TypeInfo_var, L_9, L_10);
		// snapshotObserver.Observe(m_Collection);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_12 = __this->___m_Collection_1;
		NullCheck(L_11);
		InterfaceActionInvoker1< MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var, L_11, L_12);
		// for (var i = 0; i < m_Observers.Count; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005b:
	{
		// for (var i = 0; i < m_Observers.Count; i++)
		int32_t L_14 = V_2;
		RuntimeObject* L_15 = __this->___m_Observers_4;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::get_Count() */, ICollection_1_t475416394B9EC14524E7851A4516498F8F13A26C_il2cpp_TypeInfo_var, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0040;
		}
	}
	{
		// for (var i = 0; i < m_Resettables.Count; i++)
		V_3 = 0;
		goto IL_008f;
	}

IL_006d:
	{
		// var resettable = m_Resettables[i];
		RuntimeObject* L_17 = __this->___m_Resettables_2;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>::get_Item(System.Int32) */, IReadOnlyList_1_t220A2DEB3D29BDA8E50F99D820459DDDF84F2C20_il2cpp_TypeInfo_var, L_17, L_18);
		V_4 = L_19;
		// if (resettable.ShouldResetOnDispatch)
		RuntimeObject* L_20 = V_4;
		NullCheck(L_20);
		bool L_21;
		L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Multiplayer.Tools.NetStats.IResettable::get_ShouldResetOnDispatch() */, IResettable_tA716639B28412EAB4F0C8CB11586A9B9FCAA7E7F_il2cpp_TypeInfo_var, L_20);
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		// resettable.Reset();
		RuntimeObject* L_22 = V_4;
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.Multiplayer.Tools.NetStats.IResettable::Reset() */, IResettable_tA716639B28412EAB4F0C8CB11586A9B9FCAA7E7F_il2cpp_TypeInfo_var, L_22);
	}

IL_008b:
	{
		// for (var i = 0; i < m_Resettables.Count; i++)
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_008f:
	{
		// for (var i = 0; i < m_Resettables.Count; i++)
		int32_t L_24 = V_3;
		RuntimeObject* L_25 = __this->___m_Resettables_2;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IResettable>::get_Count() */, IReadOnlyCollection_1_tC9428F7495FE8833226612922C90E9FEAEEBBFEB_il2cpp_TypeInfo_var, L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_006d;
		}
	}
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
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithCounters(Unity.Multiplayer.Tools.NetStats.Counter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithCounters_m1B7A69395A8AC0AA9BE565B9389998CE10F9BBF6 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* ___counters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4B8872AF87BDCD5BAC8034637D6384CDB86E0670_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_get_Id_m6A7B07AC7AC1A9C32308ED32A9C459E41803884A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* V_0 = NULL;
	int32_t V_1 = 0;
	Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* V_2 = NULL;
	{
		// foreach (var counter in counters)
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_0 = ___counters0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_0006:
	{
		// foreach (var counter in counters)
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// m_Counters[counter.Id] = counter;
		RuntimeObject* L_5 = __this->___m_Counters_0;
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_6 = V_2;
		NullCheck(L_6);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_7;
		L_7 = Metric_1_get_Id_m6A7B07AC7AC1A9C32308ED32A9C459E41803884A_inline(L_6, Metric_1_get_Id_m6A7B07AC7AC1A9C32308ED32A9C459E41803884A_RuntimeMethod_var);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_8 = V_2;
		NullCheck(L_5);
		InterfaceActionInvoker2< MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::set_Item(TKey,TValue) */, IDictionary_2_t4B8872AF87BDCD5BAC8034637D6384CDB86E0670_il2cpp_TypeInfo_var, L_5, L_7, L_8);
		// m_Resettables.Add(counter);
		List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D* L_9 = __this->___m_Resettables_4;
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_10 = V_2;
		NullCheck(L_9);
		List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_inline(L_9, L_10, List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_RuntimeMethod_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002c:
	{
		// foreach (var counter in counters)
		int32_t L_12 = V_1;
		CounterU5BU5D_tD7DA0D4AD2E645399044241C8EB1199FA00C3493* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// return this;
		return __this;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithGauges(Unity.Multiplayer.Tools.NetStats.Gauge[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithGauges_m38E87A8E3D90DF52D90DA328C3F892317D882A63 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* ___gauges0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tF8CD782A39E499BD52EA5A0F185CEA51AFC1DBD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_get_Id_mC529C04F22D39B0A7C860DAFAEAC6B414571D501_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* V_0 = NULL;
	int32_t V_1 = 0;
	Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* V_2 = NULL;
	{
		// foreach (var gauge in gauges)
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_0 = ___gauges0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_0006:
	{
		// foreach (var gauge in gauges)
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// m_Gauges[gauge.Id] = gauge;
		RuntimeObject* L_5 = __this->___m_Gauges_1;
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_6 = V_2;
		NullCheck(L_6);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_7;
		L_7 = Metric_1_get_Id_mC529C04F22D39B0A7C860DAFAEAC6B414571D501_inline(L_6, Metric_1_get_Id_mC529C04F22D39B0A7C860DAFAEAC6B414571D501_RuntimeMethod_var);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_8 = V_2;
		NullCheck(L_5);
		InterfaceActionInvoker2< MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::set_Item(TKey,TValue) */, IDictionary_2_tF8CD782A39E499BD52EA5A0F185CEA51AFC1DBD8_il2cpp_TypeInfo_var, L_5, L_7, L_8);
		// m_Resettables.Add(gauge);
		List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D* L_9 = __this->___m_Resettables_4;
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_10 = V_2;
		NullCheck(L_9);
		List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_inline(L_9, L_10, List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_RuntimeMethod_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002c:
	{
		// foreach (var gauge in gauges)
		int32_t L_12 = V_1;
		GaugeU5BU5D_t1450F55804AD8340DB5294600147CF7854AE5991* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// return this;
		return __this;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithTimers(Unity.Multiplayer.Tools.NetStats.Timer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* MetricDispatcherBuilder_WithTimers_m6763C9D76CD352D75EBF7EB8717A44FD31968B66 (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568* ___timers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tD49526E115134676B52C79C40E01273008A30B86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_get_Id_mB054BD8BD9AFD7037D0A2828EFB7351C88E7C4FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568* V_0 = NULL;
	int32_t V_1 = 0;
	Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* V_2 = NULL;
	{
		// foreach (var timer in timers)
		TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568* L_0 = ___timers0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_0006:
	{
		// foreach (var timer in timers)
		TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// m_Timers[timer.Id] = timer;
		RuntimeObject* L_5 = __this->___m_Timers_2;
		Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* L_6 = V_2;
		NullCheck(L_6);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_7;
		L_7 = Metric_1_get_Id_mB054BD8BD9AFD7037D0A2828EFB7351C88E7C4FB_inline(L_6, Metric_1_get_Id_mB054BD8BD9AFD7037D0A2828EFB7351C88E7C4FB_RuntimeMethod_var);
		Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* L_8 = V_2;
		NullCheck(L_5);
		InterfaceActionInvoker2< MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::set_Item(TKey,TValue) */, IDictionary_2_tD49526E115134676B52C79C40E01273008A30B86_il2cpp_TypeInfo_var, L_5, L_7, L_8);
		// m_Resettables.Add(timer);
		List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D* L_9 = __this->___m_Resettables_4;
		Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* L_10 = V_2;
		NullCheck(L_9);
		List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_inline(L_9, L_10, List_1_Add_mB5E454C5D0EF922350F01E493E549CC0B1A1850A_RuntimeMethod_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002c:
	{
		// foreach (var timer in timers)
		int32_t L_12 = V_1;
		TimerU5BU5D_t119291D604D084504D82F75D6B7B13789B5F6568* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// return this;
		return __this;
	}
}
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricDispatcherBuilder_Build_m80084EAA320C3C2E1845EEB7172B736D073AAC0D (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_m5BA6BD8AE8B20AE78F3615D24E00BB0DFBA0287A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t174EBA2F70EAECFB42935872FC11660855D24EE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m11ECB621D2AD5AF80D1F734DE185EE07F0FC6C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m814004827E190BB3F9312BFD214239C453BC5261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m8401A478E2202314CCD13F4DDF7C464A9E353D4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_mAFB3A4FFA915201A675EE8FEC53A8E8BB1F6083B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new MetricDispatcher(
		//     new MetricCollection(
		//         new ReadOnlyDictionary<MetricId, IMetric<long>>(m_Counters),
		//         new ReadOnlyDictionary<MetricId, IMetric<double>>(m_Gauges),
		//         new ReadOnlyDictionary<MetricId, IMetric<TimeSpan>>(m_Timers),
		//         new ReadOnlyDictionary<MetricId, IEventMetric>(m_PayloadEvents)),
		//     m_Resettables,
		//     m_PayloadEvents.Values.ToList());
		RuntimeObject* L_0 = __this->___m_Counters_0;
		ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776* L_1 = (ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tD3AA6DFC7B60D1A7436E4D2154CB4476A3508776_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReadOnlyDictionary_2__ctor_m11ECB621D2AD5AF80D1F734DE185EE07F0FC6C79(L_1, L_0, ReadOnlyDictionary_2__ctor_m11ECB621D2AD5AF80D1F734DE185EE07F0FC6C79_RuntimeMethod_var);
		RuntimeObject* L_2 = __this->___m_Gauges_1;
		ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB* L_3 = (ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t90C1503CD6CEB64522CED018344A049AD267FFDB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ReadOnlyDictionary_2__ctor_m8401A478E2202314CCD13F4DDF7C464A9E353D4F(L_3, L_2, ReadOnlyDictionary_2__ctor_m8401A478E2202314CCD13F4DDF7C464A9E353D4F_RuntimeMethod_var);
		RuntimeObject* L_4 = __this->___m_Timers_2;
		ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918* L_5 = (ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t52C03B7F88AADC4087920377594CC161CECF7918_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ReadOnlyDictionary_2__ctor_mAFB3A4FFA915201A675EE8FEC53A8E8BB1F6083B(L_5, L_4, ReadOnlyDictionary_2__ctor_mAFB3A4FFA915201A675EE8FEC53A8E8BB1F6083B_RuntimeMethod_var);
		RuntimeObject* L_6 = __this->___m_PayloadEvents_3;
		ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D* L_7 = (ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t54614DA3A57A77756ADD6BB8A6B3D1C3A89DAF9D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ReadOnlyDictionary_2__ctor_m814004827E190BB3F9312BFD214239C453BC5261(L_7, L_6, ReadOnlyDictionary_2__ctor_m814004827E190BB3F9312BFD214239C453BC5261_RuntimeMethod_var);
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_8 = (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*)il2cpp_codegen_object_new(MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		MetricCollection__ctor_m0F2BEBC3670B9D43220027FE76CA1F195857C259(L_8, L_1, L_3, L_5, L_7, NULL);
		List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D* L_9 = __this->___m_Resettables_4;
		RuntimeObject* L_10 = __this->___m_PayloadEvents_3;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>::get_Values() */, IDictionary_2_t174EBA2F70EAECFB42935872FC11660855D24EE1_il2cpp_TypeInfo_var, L_10);
		List_1_t7B798011481AAA808C915C14FF590842496ACEAE* L_12;
		L_12 = Enumerable_ToList_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_m5BA6BD8AE8B20AE78F3615D24E00BB0DFBA0287A(L_11, Enumerable_ToList_TisIEventMetric_t23D613B889DB2E6BC5EA20E6516DCB86F4F4B104_m5BA6BD8AE8B20AE78F3615D24E00BB0DFBA0287A_RuntimeMethod_var);
		MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524* L_13 = (MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524*)il2cpp_codegen_object_new(MetricDispatcher_tB20C7B0521CE0B075B438E4C8EE0D8142B545524_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MetricDispatcher__ctor_m7DC37197A5C4922FF961C302C761494704523192(L_13, L_8, L_9, L_12, NULL);
		return L_13;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcherBuilder__ctor_m80893365A07A440984F93D65D9C0C12A1832745A (MetricDispatcherBuilder_t272EB4E3B36CA03F23C579B61006877E9051C037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32684AAFB7498E32C30555481C9CC736A1D26DCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m894DF7EE77C50F675B04E2F8C71D05FA5A8EF0E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB33725E9912C56B73B8E4B8C2A6CA65C6B451C26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB4CC63F32B175BC9BA98E5EEB20B6E905306E13D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2332EC400620C034DC83E7A1D5551FE567572D04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly IDictionary<MetricId, IMetric<long>> m_Counters
		//     = new Dictionary<MetricId, IMetric<long>>();
		Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69* L_0 = (Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69*)il2cpp_codegen_object_new(Dictionary_2_tF77F941363D0C059CB2650C4062E37B8B3DDED69_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB4CC63F32B175BC9BA98E5EEB20B6E905306E13D(L_0, Dictionary_2__ctor_mB4CC63F32B175BC9BA98E5EEB20B6E905306E13D_RuntimeMethod_var);
		__this->___m_Counters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Counters_0), (void*)L_0);
		// readonly IDictionary<MetricId, IMetric<double>> m_Gauges
		//     = new Dictionary<MetricId, IMetric<double>>();
		Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8* L_1 = (Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8*)il2cpp_codegen_object_new(Dictionary_2_tC941D8601AD54EE531D84B61027E84FCA60E95C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mB33725E9912C56B73B8E4B8C2A6CA65C6B451C26(L_1, Dictionary_2__ctor_mB33725E9912C56B73B8E4B8C2A6CA65C6B451C26_RuntimeMethod_var);
		__this->___m_Gauges_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Gauges_1), (void*)L_1);
		// readonly IDictionary<MetricId, IMetric<TimeSpan>> m_Timers
		//     = new Dictionary<MetricId, IMetric<TimeSpan>>();
		Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A* L_2 = (Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A*)il2cpp_codegen_object_new(Dictionary_2_t4D0797D0E5F7C74AB9DC72CC20D9C39D91FF028A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m894DF7EE77C50F675B04E2F8C71D05FA5A8EF0E1(L_2, Dictionary_2__ctor_m894DF7EE77C50F675B04E2F8C71D05FA5A8EF0E1_RuntimeMethod_var);
		__this->___m_Timers_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Timers_2), (void*)L_2);
		// readonly IDictionary<MetricId, IEventMetric> m_PayloadEvents
		//     = new Dictionary<MetricId, IEventMetric>();
		Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0* L_3 = (Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0*)il2cpp_codegen_object_new(Dictionary_2_tBEAFB0A06FA16520D82B1A2894DDEAD4356792B0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m32684AAFB7498E32C30555481C9CC736A1D26DCA(L_3, Dictionary_2__ctor_m32684AAFB7498E32C30555481C9CC736A1D26DCA_RuntimeMethod_var);
		__this->___m_PayloadEvents_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PayloadEvents_3), (void*)L_3);
		// readonly List<IResettable> m_Resettables = new List<IResettable>();
		List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D* L_4 = (List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D*)il2cpp_codegen_object_new(List_1_t42FDCED386A42793F26E4AC13EEFB6DADE19689D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m2332EC400620C034DC83E7A1D5551FE567572D04(L_4, List_1__ctor_m2332EC400620C034DC83E7A1D5551FE567572D04_RuntimeMethod_var);
		__this->___m_Resettables_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Resettables_4), (void*)L_4);
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
// System.Void Unity.Multiplayer.Tools.NetStats.Counter::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, int64_t ___defaultValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1__ctor_mFBDFE0DCE335BCC099A37E31379B5074EAA91105_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(metricId, defaultValue)
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = ___metricId0;
		int64_t L_1 = ___defaultValue1;
		Metric_1__ctor_mFBDFE0DCE335BCC099A37E31379B5074EAA91105(__this, L_0, L_1, Metric_1__ctor_mFBDFE0DCE335BCC099A37E31379B5074EAA91105_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.Counter::Increment(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter_Increment_m10F204BD8C1E1BBDC08D70D221FB37B80CB62A73 (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* __this, int64_t ___increment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_get_Value_m1D2BF8139FF98F985BA7D047982873AB7B80AB49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_set_Value_m24C8BE1A5B5142177E0D9BC55E8C72C6F2A2A566_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value += increment;
		int64_t L_0;
		L_0 = Metric_1_get_Value_m1D2BF8139FF98F985BA7D047982873AB7B80AB49_inline(__this, Metric_1_get_Value_m1D2BF8139FF98F985BA7D047982873AB7B80AB49_RuntimeMethod_var);
		int64_t L_1 = ___increment0;
		Metric_1_set_Value_m24C8BE1A5B5142177E0D9BC55E8C72C6F2A2A566_inline(__this, ((int64_t)il2cpp_codegen_add(L_0, L_1)), Metric_1_set_Value_m24C8BE1A5B5142177E0D9BC55E8C72C6F2A2A566_RuntimeMethod_var);
		// }
		return;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricContainerType Unity.Multiplayer.Tools.NetStats.Counter::get_MetricContainerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Counter_get_MetricContainerType_m5D47505692597AE0F7B7511B3183F96C284FF516 (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* __this, const RuntimeMethod* method) 
{
	{
		// public override MetricContainerType MetricContainerType => MetricContainerType.Counter;
		return (uint32_t)(0);
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
// System.Boolean Unity.Multiplayer.Tools.NetStats.CounterFactory::TryConstruct(Unity.Multiplayer.Tools.NetStats.MetricHeader,Unity.Multiplayer.Tools.NetStats.IMetric&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CounterFactory_TryConstruct_mA05EC348820B85F517DD199BE433461A21FE3A05 (CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C ___header0, RuntimeObject** ___metric1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// metric = new Counter(header.MetricId);
		RuntimeObject** L_0 = ___metric1;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1;
		L_1 = MetricHeader_get_MetricId_m1D361164AB2668C6754995708F55B31C43947EC6_inline((&___header0), NULL);
		Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB* L_2 = (Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB*)il2cpp_codegen_object_new(Counter_tF2E40B21682FAB61313DEFE7A0055ACA0F9990EB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF(L_2, L_1, ((int64_t)0), NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.CounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterFactory__ctor_m859B650A9C8FE13C03EF036D8B6798B719714500 (CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE* __this, const RuntimeMethod* method) 
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
// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetricFactory::TryGetFactoryTypeName(System.Type,Unity.Collections.FixedString128Bytes&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventMetricFactory_TryGetFactoryTypeName_m47CB84CA58DF42E0A1C672D5EDB3FB580217D78F (Type_t* ___type0, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* ___typeName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3F51C15A060824B5F4E7FA268F0D37E89813A298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool TryGetFactoryTypeName(Type type, out FixedString128Bytes typeName) => k_TypeNames.TryGetValue(type, out typeName);
		il2cpp_codegen_runtime_class_init_inline(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182* L_0 = ((EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_StaticFields*)il2cpp_codegen_static_fields_for(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var))->___k_TypeNames_1;
		Type_t* L_1 = ___type0;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952* L_2 = ___typeName1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m3F51C15A060824B5F4E7FA268F0D37E89813A298(L_0, L_1, L_2, Dictionary_2_TryGetValue_m3F51C15A060824B5F4E7FA268F0D37E89813A298_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory__cctor_m1B0E9EAF269322F7F4777E8C84F4E010F24B2F3A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m61DC4AA8A64ED4554ED2DC062CED147466266522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m93F452D54806291086A057C47BD72C71BFBA20C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Dictionary<FixedString128Bytes, IEventMetricFactory> k_FactoriesByName = new Dictionary<FixedString128Bytes, IEventMetricFactory>();
		Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1* L_0 = (Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1*)il2cpp_codegen_object_new(Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m93F452D54806291086A057C47BD72C71BFBA20C9(L_0, Dictionary_2__ctor_m93F452D54806291086A057C47BD72C71BFBA20C9_RuntimeMethod_var);
		((EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_StaticFields*)il2cpp_codegen_static_fields_for(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var))->___k_FactoriesByName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_StaticFields*)il2cpp_codegen_static_fields_for(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var))->___k_FactoriesByName_0), (void*)L_0);
		// static readonly Dictionary<Type, FixedString128Bytes> k_TypeNames = new Dictionary<Type, FixedString128Bytes>();
		Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182* L_1 = (Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182*)il2cpp_codegen_object_new(Dictionary_2_t3D3B273C3717D5E9E113E5D809147041FA3A0182_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m61DC4AA8A64ED4554ED2DC062CED147466266522(L_1, Dictionary_2__ctor_m61DC4AA8A64ED4554ED2DC062CED147466266522_RuntimeMethod_var);
		((EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_StaticFields*)il2cpp_codegen_static_fields_for(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var))->___k_TypeNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_StaticFields*)il2cpp_codegen_static_fields_for(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var))->___k_TypeNames_1), (void*)L_1);
		// TypeRegistration.RunIfNeeded();
		il2cpp_codegen_runtime_class_init_inline(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var);
		TypeRegistration_RunIfNeeded_mFDCE53630297A2807B6759D8B367F15E66BF4046(NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetricFactory::TryConstruct(Unity.Multiplayer.Tools.NetStats.MetricHeader,Unity.Multiplayer.Tools.NetStats.IMetric&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventMetricFactory_TryConstruct_m120C4785B2CCF630D7578951E50AEBCD74B5646B (EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C ___header0, RuntimeObject** ___metric1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8575D0745298617682E5E1C83ABD395FB38F58D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventMetricFactory_t72673E32A79DC35650B7BB80250F9301AA86FCB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19F4B10A630FB37DC69458033E454DF1D169CB75);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!k_FactoriesByName.TryGetValue(header.EventFactoryTypeName, out var factory))
		il2cpp_codegen_runtime_class_init_inline(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		Dictionary_2_tC11F7455693B1D9F2009BE81FF41D94CA35276A1* L_0 = ((EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_StaticFields*)il2cpp_codegen_static_fields_for(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var))->___k_FactoriesByName_0;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_1;
		L_1 = MetricHeader_get_EventFactoryTypeName_m20D0563671B587D9B3AD05432D5B042F54937CED_inline((&___header0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m8575D0745298617682E5E1C83ABD395FB38F58D8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m8575D0745298617682E5E1C83ABD395FB38F58D8_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		// Debug.LogError("Failed to find factory for event type " + header.EventFactoryTypeName);
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_3;
		L_3 = MetricHeader_get_EventFactoryTypeName_m20D0563671B587D9B3AD05432D5B042F54937CED_inline((&___header0), NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = FixedString128Bytes_ToString_m1CD5B095D5A80759EF2E7F60AA95921369958A29((&V_1), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral19F4B10A630FB37DC69458033E454DF1D169CB75, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		// metric = default;
		RuntimeObject** L_6 = ___metric1;
		*((RuntimeObject**)L_6) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}

IL_003e:
	{
		// metric = factory.Construct(header.MetricId);
		RuntimeObject** L_7 = ___metric1;
		RuntimeObject* L_8 = V_0;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_9;
		L_9 = MetricHeader_get_MetricId_m1D361164AB2668C6754995708F55B31C43947EC6_inline((&___header0), NULL);
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(0 /* Unity.Multiplayer.Tools.NetStats.IMetric Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory::Construct(Unity.Multiplayer.Tools.NetStats.MetricId) */, IEventMetricFactory_t72673E32A79DC35650B7BB80250F9301AA86FCB5_il2cpp_TypeInfo_var, L_8, L_9);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_10);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory__ctor_m2C266F88FE68AE0337F27A604F9F1A76F5007007 (EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Multiplayer.Tools.NetStats.Gauge::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105 (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, double ___defaultValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1__ctor_m662FE116DBFFFCE60051C36FD48488304824A3EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(metricId, defaultValue)
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = ___metricId0;
		double L_1 = ___defaultValue1;
		Metric_1__ctor_m662FE116DBFFFCE60051C36FD48488304824A3EB(__this, L_0, L_1, Metric_1__ctor_m662FE116DBFFFCE60051C36FD48488304824A3EB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.Gauge::Set(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gauge_Set_m6537B380248D703408B64C0F9EC5A4F8AA7C3E81 (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_set_Value_m0A786E4071DFABE2662E097144A452FDDE697F68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = value;
		double L_0 = ___value0;
		Metric_1_set_Value_m0A786E4071DFABE2662E097144A452FDDE697F68_inline(__this, L_0, Metric_1_set_Value_m0A786E4071DFABE2662E097144A452FDDE697F68_RuntimeMethod_var);
		// }
		return;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricContainerType Unity.Multiplayer.Tools.NetStats.Gauge::get_MetricContainerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Gauge_get_MetricContainerType_m7FC1F75105F339FDCF3F5146ABB7FAB6F950F1CB (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* __this, const RuntimeMethod* method) 
{
	{
		// public override MetricContainerType MetricContainerType => MetricContainerType.Gauge;
		return (uint32_t)(2);
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
// System.Boolean Unity.Multiplayer.Tools.NetStats.GaugeFactory::TryConstruct(Unity.Multiplayer.Tools.NetStats.MetricHeader,Unity.Multiplayer.Tools.NetStats.IMetric&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GaugeFactory_TryConstruct_m1F4F7757B3A6A40F6588BBC52FFC8A97DC2D89B0 (GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C ___header0, RuntimeObject** ___metric1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// metric = new Gauge(header.MetricId);
		RuntimeObject** L_0 = ___metric1;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1;
		L_1 = MetricHeader_get_MetricId_m1D361164AB2668C6754995708F55B31C43947EC6_inline((&___header0), NULL);
		Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9* L_2 = (Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9*)il2cpp_codegen_object_new(Gauge_tA7DBD38EFD0F7D792D98A04FF2FEBEFAD2B755A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105(L_2, L_1, (0.0), NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.GaugeFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaugeFactory__ctor_m4794579EEE0FA862FF96B8B2B12F5ADCCB1DF04C (GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4* __this, const RuntimeMethod* method) 
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
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricFactory::TryConstruct(Unity.Multiplayer.Tools.NetStats.MetricHeader,Unity.Multiplayer.Tools.NetStats.IMetric&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricFactory_TryConstruct_m62F4D3452F9AEF7E1FED2F8E75C4211DBCAF136A (MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C ___header0, RuntimeObject** ___metric1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDEA38E41F6D500FCCAF1A39384212F8B67420B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricFactory_t44AA82109044DD9CE5F9F32F49150F3F3C6867B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricContainerType_tC83D4045026861142C26C8D7BB51E215A1544D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32C967844CBADD1B0720BB12964D0BAC186C90A);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// if (!k_Factories.TryGetValue(header.MetricContainerType, out var factory))
		Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* L_0 = __this->___k_Factories_0;
		uint32_t L_1;
		L_1 = MetricHeader_get_MetricContainerType_m13D3F887B141A458535CDBF8E59BE41C63E36DB1_inline((&___header0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mDEA38E41F6D500FCCAF1A39384212F8B67420B37(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mDEA38E41F6D500FCCAF1A39384212F8B67420B37_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogError("Failed to find factory for type " + header.MetricContainerType);
		uint32_t L_3;
		L_3 = MetricHeader_get_MetricContainerType_m13D3F887B141A458535CDBF8E59BE41C63E36DB1_inline((&___header0), NULL);
		V_1 = L_3;
		Il2CppFakeBox<uint32_t> L_4(MetricContainerType_tC83D4045026861142C26C8D7BB51E215A1544D62_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC32C967844CBADD1B0720BB12964D0BAC186C90A, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		// metric = default;
		RuntimeObject** L_7 = ___metric1;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}

IL_003f:
	{
		// return factory.TryConstruct(header, out metric);
		RuntimeObject* L_8 = V_0;
		MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C L_9 = ___header0;
		RuntimeObject** L_10 = ___metric1;
		NullCheck(L_8);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C, RuntimeObject** >::Invoke(0 /* System.Boolean Unity.Multiplayer.Tools.NetStats.IMetricFactory::TryConstruct(Unity.Multiplayer.Tools.NetStats.MetricHeader,Unity.Multiplayer.Tools.NetStats.IMetric&) */, IMetricFactory_t44AA82109044DD9CE5F9F32F49150F3F3C6867B9_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return L_11;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricFactory__ctor_m0AA1857A34167CA308EA43C5EA1CBB9D2D7478B1 (MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DDF0E04EF2390891B811D819E5A54F32895D667_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Dictionary<MetricContainerType, IMetricFactory> k_Factories = new Dictionary<MetricContainerType, IMetricFactory>()
		// {
		//     { MetricContainerType.Counter, new CounterFactory() },
		//     { MetricContainerType.Event, new EventMetricFactory() },
		//     { MetricContainerType.Gauge, new GaugeFactory() },
		//     { MetricContainerType.Timer, new TimerFactory() },
		// };
		Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* L_0 = (Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D*)il2cpp_codegen_object_new(Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DDF0E04EF2390891B811D819E5A54F32895D667(L_0, Dictionary_2__ctor_m3DDF0E04EF2390891B811D819E5A54F32895D667_RuntimeMethod_var);
		Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* L_1 = L_0;
		CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE* L_2 = (CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE*)il2cpp_codegen_object_new(CounterFactory_tF380D28FAAF400F3ED43C0673E8A8C6E48EF5ECE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CounterFactory__ctor_m859B650A9C8FE13C03EF036D8B6798B719714500(L_2, NULL);
		NullCheck(L_1);
		Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F(L_1, 0, L_2, Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F_RuntimeMethod_var);
		Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* L_3 = L_1;
		EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18* L_4 = (EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18*)il2cpp_codegen_object_new(EventMetricFactory_t22E542A2FAB9637CE23746868A7FA6F09653CB18_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventMetricFactory__ctor_m2C266F88FE68AE0337F27A604F9F1A76F5007007(L_4, NULL);
		NullCheck(L_3);
		Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F(L_3, 1, L_4, Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F_RuntimeMethod_var);
		Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* L_5 = L_3;
		GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4* L_6 = (GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4*)il2cpp_codegen_object_new(GaugeFactory_tC836C71F346B7105844C0342F452A0D506515CE4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GaugeFactory__ctor_m4794579EEE0FA862FF96B8B2B12F5ADCCB1DF04C(L_6, NULL);
		NullCheck(L_5);
		Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F(L_5, 2, L_6, Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F_RuntimeMethod_var);
		Dictionary_2_t68F1E61ECF565AA56AA705826346E372B0AFBE9D* L_7 = L_5;
		TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553* L_8 = (TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553*)il2cpp_codegen_object_new(TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TimerFactory__ctor_m4B01373093DB32A2E41A84060DCED926E91F34E2(L_8, NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F(L_7, 3, L_8, Dictionary_2_Add_m1221E1BEE55AB83F128EEA10179CEA69BB2F710F_RuntimeMethod_var);
		__this->___k_Factories_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___k_Factories_0), (void*)L_7);
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
// System.Void Unity.Multiplayer.Tools.NetStats.AssemblyRequiresTypeRegistrationAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyRequiresTypeRegistrationAttribute__ctor_mFD6C49C9405D39D8065CB8AFCE67EBD2D9C8BA30 (AssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_TypeIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	{
		// internal int TypeIndex { get; set; }
		int32_t L_0 = __this->___U3CTypeIndexU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_TypeIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int TypeIndex { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeIndexU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	{
		// internal int EnumValue { get; set; }
		int32_t L_0 = __this->___U3CEnumValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_EnumValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int EnumValue { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CEnumValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88_inline(_thisAdjusted, ___value0, method);
}
// System.Type Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MetricId_get_EnumType_m16F32126890D34276B81982F7A90E8B7D6F62B65 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Type EnumType => MetricIdTypeLibrary.GetType(TypeIndex);
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = MetricIdTypeLibrary_GetType_m4F2335156EAB537786F966B2E0A091172A2D8A4D(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Type_t* MetricId_get_EnumType_m16F32126890D34276B81982F7A90E8B7D6F62B65_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = MetricId_get_EnumType_m16F32126890D34276B81982F7A90E8B7D6F62B65(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_get_Name_m77C796F0ED1F016FA4E7544052B413E5D050F9A1 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal string Name => MetricIdTypeLibrary.GetEnumName(TypeIndex, EnumValue);
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline(__this, NULL);
		int32_t L_1;
		L_1 = MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = MetricIdTypeLibrary_GetEnumName_m469F95312636FDC53224D55B774ABBA59A4B0154(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* MetricId_get_Name_m77C796F0ED1F016FA4E7544052B413E5D050F9A1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MetricId_get_Name_m77C796F0ED1F016FA4E7544052B413E5D050F9A1(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_get_DisplayName_mE7F077EF6E5CA248AA054F316C040E4D33B393C6 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal string DisplayName => MetricIdTypeLibrary.GetEnumDisplayName(TypeIndex, EnumValue);
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline(__this, NULL);
		int32_t L_1;
		L_1 = MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = MetricIdTypeLibrary_GetEnumDisplayName_m353A17188B20E333C2DC0AB56559A579F15BB746(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* MetricId_get_DisplayName_mE7F077EF6E5CA248AA054F316C040E4D33B393C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MetricId_get_DisplayName_mE7F077EF6E5CA248AA054F316C040E4D33B393C6(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricId::get_MetricKind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_get_MetricKind_mB82C29F6DC88633758005D1E1FF6B34E0A245304 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal MetricKind MetricKind => MetricIdTypeLibrary.GetEnumMetricKind(TypeIndex, EnumValue);
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline(__this, NULL);
		int32_t L_1;
		L_1 = MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = MetricIdTypeLibrary_GetEnumMetricKind_m8786904B6C671B561FC166FA86C685D2EA28D600(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t MetricId_get_MetricKind_mB82C29F6DC88633758005D1E1FF6B34E0A245304_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetricId_get_MetricKind_mB82C29F6DC88633758005D1E1FF6B34E0A245304(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.MetricId::get_Units()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA MetricId_get_Units_m037B1DC5C4B90F5924F3247ED22B20C3D40CDD95 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal BaseUnits Units => MetricIdTypeLibrary.GetEnumUnit(TypeIndex, EnumValue);
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline(__this, NULL);
		int32_t L_1;
		L_1 = MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_2;
		L_2 = MetricIdTypeLibrary_GetEnumUnit_m8DA72F0168C1E0BA6FA2BF60CCA32848784E8EE6(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA MetricId_get_Units_m037B1DC5C4B90F5924F3247ED22B20C3D40CDD95_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA _returnValue;
	_returnValue = MetricId_get_Units_m037B1DC5C4B90F5924F3247ED22B20C3D40CDD95(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::get_DisplayAsPercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_get_DisplayAsPercentage_m08A04C6A09E30AEE3DE3FB350B770175FD2DCE39 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal bool DisplayAsPercentage => MetricIdTypeLibrary.GetDisplayAsPercentage(TypeIndex, EnumValue);
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline(__this, NULL);
		int32_t L_1;
		L_1 = MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = MetricIdTypeLibrary_GetDisplayAsPercentage_m6F638E240E7F3548CA9800608C4C2117235D1F7C(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool MetricId_get_DisplayAsPercentage_m08A04C6A09E30AEE3DE3FB350B770175FD2DCE39_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	bool _returnValue;
	_returnValue = MetricId_get_DisplayAsPercentage_m08A04C6A09E30AEE3DE3FB350B770175FD2DCE39(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId__ctor_mF7419CE250D5580AFE262674804BFFA264DC729D (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!MetricIdTypeLibrary.IsValidTypeIndex(typeIndex))
		int32_t L_0 = ___typeIndex0;
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = MetricIdTypeLibrary_IsValidTypeIndex_m99B6AA0E21BD9E52664D7E191C992CF614018E98(L_0, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(
		//     $"Cannot construct {nameof(MetricId)} with out-of-range {nameof(TypeIndex)} {typeIndex}.");
		int32_t L_2 = ___typeIndex0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B0D3FA41C5236CC397EDB30F2B1AF914E2AB7AF)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA163BF750BA54962038F6D81F8D7EBA3DB103531)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18E50F5806DF61CD4E143EA29E9DBC74F2875934)), L_4, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MetricId__ctor_mF7419CE250D5580AFE262674804BFFA264DC729D_RuntimeMethod_var)));
	}

IL_0028:
	{
		// TypeIndex = typeIndex;
		int32_t L_7 = ___typeIndex0;
		MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706_inline(__this, L_7, NULL);
		// EnumValue = enumValue;
		int32_t L_8 = ___enumValue1;
		MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88_inline(__this, L_8, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MetricId__ctor_mF7419CE250D5580AFE262674804BFFA264DC729D_AdjustorThunk (RuntimeObject* __this, int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	MetricId__ctor_mF7419CE250D5580AFE262674804BFFA264DC729D(_thisAdjusted, ___typeIndex0, ___enumValue1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.ctor(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId__ctor_mC06CB56F550123B905DB1CF07ACF589FD1B78D10 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, Type_t* ___enumType0, int32_t ___enumValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TypeIndex = MetricIdTypeLibrary.GetTypeIndex(enumType);
		Type_t* L_0 = ___enumType0;
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = MetricIdTypeLibrary_GetTypeIndex_mCD3F12FE1A7830125CD5F3368BEC1BDE662FAE37(L_0, NULL);
		MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706_inline(__this, L_1, NULL);
		// EnumValue = enumValue;
		int32_t L_2 = ___enumValue1;
		MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MetricId__ctor_mC06CB56F550123B905DB1CF07ACF589FD1B78D10_AdjustorThunk (RuntimeObject* __this, Type_t* ___enumType0, int32_t ___enumValue1, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	MetricId__ctor_mC06CB56F550123B905DB1CF07ACF589FD1B78D10(_thisAdjusted, ___enumType0, ___enumValue1, method);
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_Equals_mB139C11FD4DD1F71F240678724495EA5DE813921 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___other0, const RuntimeMethod* method) 
{
	{
		// return TypeIndex == other.TypeIndex && EnumValue == other.EnumValue;
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline(__this, NULL);
		int32_t L_1;
		L_1 = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline((&___other0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2;
		L_2 = MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline(__this, NULL);
		int32_t L_3;
		L_3 = MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline((&___other0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool MetricId_Equals_mB139C11FD4DD1F71F240678724495EA5DE813921_AdjustorThunk (RuntimeObject* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___other0, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	bool _returnValue;
	_returnValue = MetricId_Equals_mB139C11FD4DD1F71F240678724495EA5DE813921(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_Equals_m0EE3289E6E1EB6B2E027E0FC14E6ED2F78D1CD8C (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (obj.GetType() != this.GetType()) return false;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_3 = (*(MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*)__this);
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_4 = L_3;
		RuntimeObject* L_5 = Box(MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_il2cpp_TypeInfo_var, &L_4);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_6, NULL);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		// if (obj.GetType() != this.GetType()) return false;
		return (bool)0;
	}

IL_0024:
	{
		// return Equals((MetricId)obj);
		RuntimeObject* L_8 = ___obj0;
		bool L_9;
		L_9 = MetricId_Equals_mB139C11FD4DD1F71F240678724495EA5DE813921(__this, ((*(MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*)((MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*)(MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*)UnBox(L_8, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C_il2cpp_TypeInfo_var)))), NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool MetricId_Equals_m0EE3289E6E1EB6B2E027E0FC14E6ED2F78D1CD8C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	bool _returnValue;
	_returnValue = MetricId_Equals_m0EE3289E6E1EB6B2E027E0FC14E6ED2F78D1CD8C(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_GetHashCode_mD58717DF7E335A5A1652CFBF074DE11B9435EB6B (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	{
		// return 173 * TypeIndex + 13 * EnumValue;
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline(__this, NULL);
		int32_t L_1;
		L_1 = MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)173), L_0)), ((int32_t)il2cpp_codegen_multiply(((int32_t)13), L_1))));
	}
}
IL2CPP_EXTERN_C  int32_t MetricId_GetHashCode_mD58717DF7E335A5A1652CFBF074DE11B9435EB6B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetricId_GetHashCode_mD58717DF7E335A5A1652CFBF074DE11B9435EB6B(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_ToString_mAEF8B4F7C84541DBB2915779FB804DC44F7FAF90 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	{
		// public override string ToString() => Name;
		String_t* L_0;
		L_0 = MetricId_get_Name_m77C796F0ED1F016FA4E7544052B413E5D050F9A1(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* MetricId_ToString_mAEF8B4F7C84541DBB2915779FB804DC44F7FAF90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MetricId_ToString_mAEF8B4F7C84541DBB2915779FB804DC44F7FAF90(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::op_Implicit(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_op_Implicit_mD62B565B88E961FA824EF3B8EFC1C42F7CDFB8A4 (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator string(MetricId metricId) => metricId.ToString();
		String_t* L_0;
		L_0 = MetricId_ToString_mAEF8B4F7C84541DBB2915779FB804DC44F7FAF90((&___metricId0), NULL);
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
// System.String Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricMetadataAttribute_get_DisplayName_m74AA6C6CBD2C2559878B3C5D6C3AFDE9645717A6 (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricMetadataAttribute_set_DisplayName_mB66532072C5EAEC12AC667E0402BE813EB83673E (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_MetricKind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_MetricKind_m1FB56CD89F7EDC9A93E476206F3F506C43D7E4DF (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) 
{
	{
		// public MetricKind MetricKind { get; set; } = MetricKind.Counter;
		int32_t L_0 = __this->___U3CMetricKindU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_MetricKind(Unity.Multiplayer.Tools.NetStats.MetricKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricMetadataAttribute_set_MetricKind_m514BE8A61406CCA54489B46F4DB69464163FD4B0 (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public MetricKind MetricKind { get; set; } = MetricKind.Counter;
		int32_t L_0 = ___value0;
		__this->___U3CMetricKindU3Ek__BackingField_1 = L_0;
		return;
	}
}
// Unity.Multiplayer.Tools.NetStats.Units Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_Units()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_Units_mCD1CCB0FE96CB571BB8C8EF41B94297D4CB9D163 (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) 
{
	{
		// public Units Units { get; set; } = Units.None;
		int32_t L_0 = __this->___U3CUnitsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_Units(Unity.Multiplayer.Tools.NetStats.Units)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricMetadataAttribute_set_Units_mC779F22B265138D9E75C5759A67E936157695FD5 (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Units Units { get; set; } = Units.None;
		int32_t L_0 = ___value0;
		__this->___U3CUnitsU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayAsPercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricMetadataAttribute_get_DisplayAsPercentage_mDA7C24E54E8E22595F8746BDCE23A111A1C0CFF8 (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) 
{
	{
		// public bool DisplayAsPercentage { get; set; }
		bool L_0 = __this->___U3CDisplayAsPercentageU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_DisplayAsPercentage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricMetadataAttribute_set_DisplayAsPercentage_mAD92D1120BFE4114220AB86B88253C9BC60D8919 (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool DisplayAsPercentage { get; set; }
		bool L_0 = ___value0;
		__this->___U3CDisplayAsPercentageU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricMetadataAttribute__ctor_m0571080394DD36DBAE628A21AAAEB99C38062C39 (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.String Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricTypeEnumAttribute_get_DisplayName_m1AE91E6508DEC1BEEE990827A29E587AA3070451 (MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricTypeEnumAttribute_set_DisplayName_m06F413FF4E108DF065B807029D842D31D6FDB66A (MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricTypeEnumAttribute__ctor_m3C261D0D0797E474B60AB21C21CDB8674CEE0DE0 (MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeEnumHideInInspectorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricTypeEnumHideInInspectorAttribute__ctor_m34951AEC1C71C7885BD5E61D56C02D7DF167752F (MetricTypeEnumHideInInspectorAttribute_t48ED7C550F7EFB7EC7B08BDC06CEA20B5A9A6455* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// Unity.Multiplayer.Tools.NetStats.SortPriority Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::get_SortPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricTypeSortPriorityAttribute_get_SortPriority_mE67EA96103A67FFE511FF45381E89FC516F1A0C0 (MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* __this, const RuntimeMethod* method) 
{
	{
		// public SortPriority SortPriority { get; set; }
		int32_t L_0 = __this->___U3CSortPriorityU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::set_SortPriority(Unity.Multiplayer.Tools.NetStats.SortPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricTypeSortPriorityAttribute_set_SortPriority_m7DBB99E0A2CB7A2C24FD4398FAF5343BDBA8802A (MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public SortPriority SortPriority { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSortPriorityU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricTypeSortPriorityAttribute__ctor_mF28F271E423AADF78B1377567A0C3E7E3DCA477B (MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Collections.Generic.IReadOnlyList`1<System.Type> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::get_Types()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricIdTypeLibrary_get_Types_m6BBD3CD2D4C6199B50599C5D0001D03CACDC6472 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IReadOnlyList<Type> Types => k_Types;
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Types_0;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.String> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::get_TypeDisplayNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricIdTypeLibrary_get_TypeDisplayNames_m36FE447755690E6484C54E86DE75451EB1CB00AA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IReadOnlyList<string> TypeDisplayNames => k_TypeDisplayNames;
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_TypeDisplayNames_1;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricIdTypeLibrary__cctor_m86B1E5DFEEB0806BDFF09644CF3FE56E05C29685 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1844A27105FE911B4461A64621C063B8D8CD587A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m425AB9FA96452A176DF4921477E6671F3ABA44A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m51867D7C9A5A1C3DE4C23B746BAC6CF661BA1929_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5B4B7E7DDC42D4D7B0FA8E41FDCD92F48351A7C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC423242B9593865CFAF5099E70E72BF837C18D2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDC7039B2AB81C1499872DB600BD309EE76715240_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<Type> k_Types = new List<Type>();
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)il2cpp_codegen_object_new(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69(L_0, List_1__ctor_mD9035342BE1CF0A3EEEE157D1796DA385C0C3F69_RuntimeMethod_var);
		((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Types_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Types_0), (void*)L_0);
		// static readonly List<string> k_TypeDisplayNames = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_TypeDisplayNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_TypeDisplayNames_1), (void*)L_1);
		// static readonly List<int[]> k_EnumValues = new List<int[]>();
		List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C* L_2 = (List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C*)il2cpp_codegen_object_new(List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC423242B9593865CFAF5099E70E72BF837C18D2A(L_2, List_1__ctor_mC423242B9593865CFAF5099E70E72BF837C18D2A_RuntimeMethod_var);
		((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumValues_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumValues_2), (void*)L_2);
		// static readonly List<string[]> k_EnumNames = new List<string[]>();
		List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* L_3 = (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED*)il2cpp_codegen_object_new(List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m51867D7C9A5A1C3DE4C23B746BAC6CF661BA1929(L_3, List_1__ctor_m51867D7C9A5A1C3DE4C23B746BAC6CF661BA1929_RuntimeMethod_var);
		((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumNames_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumNames_3), (void*)L_3);
		// static readonly List<string[]> k_EnumDisplayNames = new List<string[]>();
		List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* L_4 = (List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED*)il2cpp_codegen_object_new(List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m51867D7C9A5A1C3DE4C23B746BAC6CF661BA1929(L_4, List_1__ctor_m51867D7C9A5A1C3DE4C23B746BAC6CF661BA1929_RuntimeMethod_var);
		((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumDisplayNames_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumDisplayNames_4), (void*)L_4);
		// static readonly List<MetricKind[]> k_MetricKinds = new List<MetricKind[]>();
		List_1_tDC7039B2AB81C1499872DB600BD309EE76715240* L_5 = (List_1_tDC7039B2AB81C1499872DB600BD309EE76715240*)il2cpp_codegen_object_new(List_1_tDC7039B2AB81C1499872DB600BD309EE76715240_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m1844A27105FE911B4461A64621C063B8D8CD587A(L_5, List_1__ctor_m1844A27105FE911B4461A64621C063B8D8CD587A_RuntimeMethod_var);
		((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_MetricKinds_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_MetricKinds_5), (void*)L_5);
		// static readonly List<BaseUnits[]> k_Units = new List<BaseUnits[]>();
		List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C* L_6 = (List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C*)il2cpp_codegen_object_new(List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m425AB9FA96452A176DF4921477E6671F3ABA44A1(L_6, List_1__ctor_m425AB9FA96452A176DF4921477E6671F3ABA44A1_RuntimeMethod_var);
		((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Units_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Units_6), (void*)L_6);
		// static readonly List<bool[]> k_DisplayAsPercentage = new List<bool[]>();
		List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021* L_7 = (List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021*)il2cpp_codegen_object_new(List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m5B4B7E7DDC42D4D7B0FA8E41FDCD92F48351A7C9(L_7, List_1__ctor_m5B4B7E7DDC42D4D7B0FA8E41FDCD92F48351A7C9_RuntimeMethod_var);
		((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_DisplayAsPercentage_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_DisplayAsPercentage_7), (void*)L_7);
		// TypeRegistration.RunIfNeeded();
		il2cpp_codegen_runtime_class_init_inline(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var);
		TypeRegistration_RunIfNeeded_mFDCE53630297A2807B6759D8B367F15E66BF4046(NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::TypeRegistrationPostProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricIdTypeLibrary_TypeRegistrationPostProcess_m1D182352CFED93586A12CE14589DD7FABA51675C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m632CD14E7EA16924B58EF17FF66EA425256A6614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisMetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61_mF1121CBC7FB0E3DEA37E91DB1F5A06465D74A980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349_m15529F7FB8E35D9C1ECAB2FBEC543820B78D3994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9ADDB03C7FE2ED8E2D9B9335721B7462C73C2176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMemberInfo_t_m105E69734FD6A9FD38D5895CD46ED1A4ED33750C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m04D75BB37004EA98C46853886EBA166215B1F3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m639C5F3FD86ADEB5CC9B1FC510CB26CAD7E63DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m69784C91F281A89477974FB95BEA6166F41FDAAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m926708BBEA1A57FF6B812BFB165466C637F5219D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2AEA78982ECE580E4329735D062D1B5F1A12B94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m7F8680A9AADBEC02DB8AA2655391081A6057E3DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTypeRegistrationPostProcessU3Eb__14_0_mC664D27316976758CB5A20F811D628EEECA26F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Type_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9* V_6 = NULL;
	BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D* V_7 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_8 = NULL;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* V_11 = NULL;
	String_t** V_12 = NULL;
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA V_13;
	memset((&V_13), 0, sizeof(V_13));
	Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F* G_B2_0 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B2_1 = NULL;
	Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F* G_B1_0 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* G_B1_1 = NULL;
	MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* G_B6_0 = NULL;
	MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B8_0 = NULL;
	MemberInfo_t* G_B12_0 = NULL;
	MemberInfo_t* G_B11_0 = NULL;
	MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* G_B13_0 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	String_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	{
		//  k_Types.Sort((a, b) =>
		//  {
		//      var aSortPriorityAttr =
		//          a.GetCustomAttribute<MetricTypeSortPriorityAttribute>();
		//      var aSortPriority = aSortPriorityAttr?.SortPriority ?? SortPriority.Neutral;
		// 
		//      var bSortPriorityAttr =
		//          b.GetCustomAttribute<MetricTypeSortPriorityAttribute>();
		//      var bSortPriority = bSortPriorityAttr?.SortPriority ?? SortPriority.Neutral;
		// 
		//      // Order first by the sort priority
		//      var sortPriorityComparison = aSortPriority.CompareTo(bSortPriority);
		//      if (sortPriorityComparison != 0)
		//      {
		//          return sortPriorityComparison;
		//      }
		// 
		//      // Then by name
		//      return StringComparer.InvariantCulture.Compare(a.FullName, b.FullName);
		// });
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Types_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var);
		Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F* L_1 = ((U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var);
		U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E* L_3 = ((U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F* L_4 = (Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F*)il2cpp_codegen_object_new(Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Comparison_1__ctor_m6CDEC8967C18D87E8290AE1EA094A44A7E9BA0A2(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CTypeRegistrationPostProcessU3Eb__14_0_mC664D27316976758CB5A20F811D628EEECA26F1A_RuntimeMethod_var), NULL);
		Comparison_1_t20C1B766C215AD8CB56AFE97B35DDA5ABF16FC9F* L_5 = L_4;
		((U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		NullCheck(G_B2_1);
		List_1_Sort_m7F8680A9AADBEC02DB8AA2655391081A6057E3DC(G_B2_1, G_B2_0, List_1_Sort_m7F8680A9AADBEC02DB8AA2655391081A6057E3DC_RuntimeMethod_var);
		// foreach (var type in k_Types)
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_6 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Types_0;
		NullCheck(L_6);
		Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 L_7;
		L_7 = List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59(L_6, List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01cf:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1((&V_0), Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01c1_1;
			}

IL_0039_1:
			{
				// foreach (var type in k_Types)
				Type_t* L_8;
				L_8 = Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_inline((&V_0), Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var);
				V_1 = L_8;
				// var metricTypeAttr = type.GetCustomAttribute<MetricTypeEnumAttribute>();
				Type_t* L_9 = V_1;
				MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* L_10;
				L_10 = CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349_m15529F7FB8E35D9C1ECAB2FBEC543820B78D3994(L_9, CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349_m15529F7FB8E35D9C1ECAB2FBEC543820B78D3994_RuntimeMethod_var);
				// var typeDisplayName = metricTypeAttr?.DisplayName ?? type.Name;
				MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* L_11 = L_10;
				G_B5_0 = L_11;
				if (L_11)
				{
					G_B6_0 = L_11;
					goto IL_004e_1;
				}
			}
			{
				G_B7_0 = ((String_t*)(NULL));
				goto IL_0053_1;
			}

IL_004e_1:
			{
				NullCheck(G_B6_0);
				String_t* L_12;
				L_12 = MetricTypeEnumAttribute_get_DisplayName_m1AE91E6508DEC1BEEE990827A29E587AA3070451_inline(G_B6_0, NULL);
				G_B7_0 = L_12;
			}

IL_0053_1:
			{
				String_t* L_13 = G_B7_0;
				G_B8_0 = L_13;
				if (L_13)
				{
					G_B9_0 = L_13;
					goto IL_005d_1;
				}
			}
			{
				Type_t* L_14 = V_1;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
				G_B9_0 = L_15;
			}

IL_005d_1:
			{
				V_2 = G_B9_0;
				// var values = type.GetEnumValues().Cast<int>().ToArray();
				Type_t* L_16 = V_1;
				NullCheck(L_16);
				RuntimeArray* L_17;
				L_17 = VirtualFuncInvoker0< RuntimeArray* >::Invoke(112 /* System.Array System.Type::GetEnumValues() */, L_16);
				RuntimeObject* L_18;
				L_18 = Enumerable_Cast_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9ADDB03C7FE2ED8E2D9B9335721B7462C73C2176(L_17, Enumerable_Cast_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9ADDB03C7FE2ED8E2D9B9335721B7462C73C2176_RuntimeMethod_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19;
				L_19 = Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8(L_18, Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
				V_3 = L_19;
				// var names = type.GetEnumNames();
				Type_t* L_20 = V_1;
				NullCheck(L_20);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21;
				L_21 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(17 /* System.String[] System.Type::GetEnumNames() */, L_20);
				V_4 = L_21;
				// Array.Sort(names, values);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_4;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_3;
				Array_Sort_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m632CD14E7EA16924B58EF17FF66EA425256A6614(L_22, L_23, Array_Sort_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m632CD14E7EA16924B58EF17FF66EA425256A6614_RuntimeMethod_var);
				// var displayNames = new string[values.Length];
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_3;
				NullCheck(L_24);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)));
				V_5 = L_25;
				// var kinds = new MetricKind[values.Length];
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_3;
				NullCheck(L_26);
				MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9* L_27 = (MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9*)(MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9*)SZArrayNew(MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)));
				V_6 = L_27;
				// var units = new BaseUnits[values.Length];
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_3;
				NullCheck(L_28);
				BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D* L_29 = (BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D*)(BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D*)SZArrayNew(BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)));
				V_7 = L_29;
				// var displayAsPercentage = new bool[values.Length];
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_3;
				NullCheck(L_30);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_31 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)));
				V_8 = L_31;
				// for (var i = 0; i < values.Length; ++i)
				V_9 = 0;
				goto IL_0165_1;
			}

IL_00af_1:
			{
				// var name = names[i];
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = V_4;
				int32_t L_33 = V_9;
				NullCheck(L_32);
				int32_t L_34 = L_33;
				String_t* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
				V_10 = L_35;
				// var enumMemberInfo = type.GetMember(name).FirstOrDefault();
				Type_t* L_36 = V_1;
				String_t* L_37 = V_10;
				NullCheck(L_36);
				MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_38;
				L_38 = Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229(L_36, L_37, NULL);
				MemberInfo_t* L_39;
				L_39 = Enumerable_FirstOrDefault_TisMemberInfo_t_m105E69734FD6A9FD38D5895CD46ED1A4ED33750C((RuntimeObject*)L_38, Enumerable_FirstOrDefault_TisMemberInfo_t_m105E69734FD6A9FD38D5895CD46ED1A4ED33750C_RuntimeMethod_var);
				// var metadata = enumMemberInfo?.GetCustomAttribute<MetricMetadataAttribute>();
				MemberInfo_t* L_40 = L_39;
				G_B11_0 = L_40;
				if (L_40)
				{
					G_B12_0 = L_40;
					goto IL_00ca_1;
				}
			}
			{
				G_B13_0 = ((MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61*)(NULL));
				goto IL_00cf_1;
			}

IL_00ca_1:
			{
				MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* L_41;
				L_41 = CustomAttributeExtensions_GetCustomAttribute_TisMetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61_mF1121CBC7FB0E3DEA37E91DB1F5A06465D74A980(G_B12_0, CustomAttributeExtensions_GetCustomAttribute_TisMetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61_mF1121CBC7FB0E3DEA37E91DB1F5A06465D74A980_RuntimeMethod_var);
				G_B13_0 = L_41;
			}

IL_00cf_1:
			{
				V_11 = G_B13_0;
				// if (metadata != null)
				MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* L_42 = V_11;
				if (!L_42)
				{
					goto IL_0119_1;
				}
			}
			{
				// displayNames[i] = metadata.DisplayName ?? StringUtil.AddSpacesToCamelCase(name);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_5;
				int32_t L_44 = V_9;
				MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* L_45 = V_11;
				NullCheck(L_45);
				String_t* L_46;
				L_46 = MetricMetadataAttribute_get_DisplayName_m74AA6C6CBD2C2559878B3C5D6C3AFDE9645717A6_inline(L_45, NULL);
				String_t* L_47 = L_46;
				G_B15_0 = L_47;
				G_B15_1 = L_44;
				G_B15_2 = L_43;
				if (L_47)
				{
					G_B16_0 = L_47;
					G_B16_1 = L_44;
					G_B16_2 = L_43;
					goto IL_00eb_1;
				}
			}
			{
				String_t* L_48 = V_10;
				String_t* L_49;
				L_49 = StringUtil_AddSpacesToCamelCase_m742A53A381950EA91690338470A362468EDB35BF(L_48, NULL);
				G_B16_0 = L_49;
				G_B16_1 = G_B15_1;
				G_B16_2 = G_B15_2;
			}

IL_00eb_1:
			{
				NullCheck(G_B16_2);
				ArrayElementTypeCheck (G_B16_2, G_B16_0);
				(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
				// kinds[i] = metadata.MetricKind;
				MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9* L_50 = V_6;
				int32_t L_51 = V_9;
				MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* L_52 = V_11;
				NullCheck(L_52);
				int32_t L_53;
				L_53 = MetricMetadataAttribute_get_MetricKind_m1FB56CD89F7EDC9A93E476206F3F506C43D7E4DF_inline(L_52, NULL);
				NullCheck(L_50);
				(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (int32_t)L_53);
				// units[i] = metadata.Units.GetBaseUnits();
				BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D* L_54 = V_7;
				int32_t L_55 = V_9;
				MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* L_56 = V_11;
				NullCheck(L_56);
				int32_t L_57;
				L_57 = MetricMetadataAttribute_get_Units_mCD1CCB0FE96CB571BB8C8EF41B94297D4CB9D163_inline(L_56, NULL);
				BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_58;
				L_58 = UnitExtensions_GetBaseUnits_m3A75E6DC45886D47530D6DF2F57DC1B3F773FCFB(L_57, NULL);
				NullCheck(L_54);
				(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA)L_58);
				// displayAsPercentage[i] = metadata.DisplayAsPercentage;
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_59 = V_8;
				int32_t L_60 = V_9;
				MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* L_61 = V_11;
				NullCheck(L_61);
				bool L_62;
				L_62 = MetricMetadataAttribute_get_DisplayAsPercentage_mDA7C24E54E8E22595F8746BDCE23A111A1C0CFF8_inline(L_61, NULL);
				NullCheck(L_59);
				(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (bool)L_62);
			}

IL_0119_1:
			{
				// displayNames[i] ??= StringUtil.AddSpacesToCamelCase(name);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = V_5;
				int32_t L_64 = V_9;
				NullCheck(L_63);
				V_12 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)));
				String_t** L_65 = V_12;
				String_t* L_66 = *((String_t**)L_65);
				if (L_66)
				{
					goto IL_0133_1;
				}
			}
			{
				String_t** L_67 = V_12;
				String_t* L_68 = V_10;
				String_t* L_69;
				L_69 = StringUtil_AddSpacesToCamelCase_m742A53A381950EA91690338470A362468EDB35BF(L_68, NULL);
				*((RuntimeObject**)L_67) = (RuntimeObject*)L_69;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_67, (void*)(RuntimeObject*)L_69);
			}

IL_0133_1:
			{
				// if (kinds[i] == MetricKind.Counter)
				MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9* L_70 = V_6;
				int32_t L_71 = V_9;
				NullCheck(L_70);
				int32_t L_72 = L_71;
				int32_t L_73 = (int32_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
				if (L_73)
				{
					goto IL_015f_1;
				}
			}
			{
				// var existingUnit = units[i];
				BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D* L_74 = V_7;
				int32_t L_75 = V_9;
				NullCheck(L_74);
				int32_t L_76 = L_75;
				BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
				V_13 = L_77;
				// units[i] = existingUnit.WithSeconds(
				//     (sbyte)(existingUnit.SecondsExponent - 1));
				BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D* L_78 = V_7;
				int32_t L_79 = V_9;
				int8_t L_80;
				L_80 = BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_inline((&V_13), NULL);
				BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_81;
				L_81 = BaseUnits_WithSeconds_mFD21BAC0D894F823308F0F2D619F94606A4CBADB((&V_13), ((int8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_80, 1))), NULL);
				NullCheck(L_78);
				(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA)L_81);
			}

IL_015f_1:
			{
				// for (var i = 0; i < values.Length; ++i)
				int32_t L_82 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_82, 1));
			}

IL_0165_1:
			{
				// for (var i = 0; i < values.Length; ++i)
				int32_t L_83 = V_9;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = V_3;
				NullCheck(L_84);
				if ((((int32_t)L_83) < ((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)))))
				{
					goto IL_00af_1;
				}
			}
			{
				// k_TypeDisplayNames.Add(typeDisplayName);
				il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_85 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_TypeDisplayNames_1;
				String_t* L_86 = V_2;
				NullCheck(L_85);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_85, L_86, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				// k_EnumValues.Add(values);
				List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C* L_87 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumValues_2;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = V_3;
				NullCheck(L_87);
				List_1_Add_mC2AEA78982ECE580E4329735D062D1B5F1A12B94_inline(L_87, L_88, List_1_Add_mC2AEA78982ECE580E4329735D062D1B5F1A12B94_RuntimeMethod_var);
				// k_EnumNames.Add(names);
				List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* L_89 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumNames_3;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_4;
				NullCheck(L_89);
				List_1_Add_m926708BBEA1A57FF6B812BFB165466C637F5219D_inline(L_89, L_90, List_1_Add_m926708BBEA1A57FF6B812BFB165466C637F5219D_RuntimeMethod_var);
				// k_EnumDisplayNames.Add(displayNames);
				List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* L_91 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumDisplayNames_4;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92 = V_5;
				NullCheck(L_91);
				List_1_Add_m926708BBEA1A57FF6B812BFB165466C637F5219D_inline(L_91, L_92, List_1_Add_m926708BBEA1A57FF6B812BFB165466C637F5219D_RuntimeMethod_var);
				// k_MetricKinds.Add(kinds);
				List_1_tDC7039B2AB81C1499872DB600BD309EE76715240* L_93 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_MetricKinds_5;
				MetricKindU5BU5D_t34F2C3F42A109D2C944A8198460B5A2A220653C9* L_94 = V_6;
				NullCheck(L_93);
				List_1_Add_m69784C91F281A89477974FB95BEA6166F41FDAAB_inline(L_93, L_94, List_1_Add_m69784C91F281A89477974FB95BEA6166F41FDAAB_RuntimeMethod_var);
				// k_Units.Add(units);
				List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C* L_95 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Units_6;
				BaseUnitsU5BU5D_t3BD2EBD00B694D1AC6920D60621838E24D4F297D* L_96 = V_7;
				NullCheck(L_95);
				List_1_Add_m639C5F3FD86ADEB5CC9B1FC510CB26CAD7E63DF3_inline(L_95, L_96, List_1_Add_m639C5F3FD86ADEB5CC9B1FC510CB26CAD7E63DF3_RuntimeMethod_var);
				// k_DisplayAsPercentage.Add(displayAsPercentage);
				List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021* L_97 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_DisplayAsPercentage_7;
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_98 = V_8;
				NullCheck(L_97);
				List_1_Add_m04D75BB37004EA98C46853886EBA166215B1F3E8_inline(L_97, L_98, List_1_Add_m04D75BB37004EA98C46853886EBA166215B1F3E8_RuntimeMethod_var);
			}

IL_01c1_1:
			{
				// foreach (var type in k_Types)
				bool L_99;
				L_99 = Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877((&V_0), Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var);
				if (L_99)
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_01dd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01dd:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::IsValidTypeIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricIdTypeLibrary_IsValidTypeIndex_m99B6AA0E21BD9E52664D7E191C992CF614018E98 (int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return 0 <= index && index < k_Types.Count;
		int32_t L_0 = ___index0;
		if ((((int32_t)0) > ((int32_t)L_0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___index0;
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_2 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Types_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_inline(L_2, List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetTypeIndex(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricIdTypeLibrary_GetTypeIndex_mCD3F12FE1A7830125CD5F3368BEC1BDE662FAE37 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return k_Types.IndexOf(type);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Types_0;
		Type_t* L_1 = ___type0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D(L_0, L_1, List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D_RuntimeMethod_var);
		return L_2;
	}
}
// System.Type Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MetricIdTypeLibrary_GetType_m4F2335156EAB537786F966B2E0A091172A2D8A4D (int32_t ___typeIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7A1C2D221A00D4DE76431FB2903CCAC7CDA3A33B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return k_Types[typeIndex];
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Types_0;
		int32_t L_1 = ___typeIndex0;
		NullCheck(L_0);
		Type_t* L_2;
		L_2 = List_1_get_Item_m7A1C2D221A00D4DE76431FB2903CCAC7CDA3A33B(L_0, L_1, List_1_get_Item_m7A1C2D221A00D4DE76431FB2903CCAC7CDA3A33B_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::ContainsType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricIdTypeLibrary_ContainsType_mBB48AA377BA0D68932AC0391EC9FA9131CE562B9 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF575CBDE461D2C6A182C0371279C31E5D038D5F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return k_Types.Contains(type);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Types_0;
		Type_t* L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mF575CBDE461D2C6A182C0371279C31E5D038D5F7(L_0, L_1, List_1_Contains_mF575CBDE461D2C6A182C0371279C31E5D038D5F7_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.Int32> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumValues(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricIdTypeLibrary_GetEnumValues_mF93DA5B325438A4AC28EB693021E180D2A530386 (int32_t ___typeIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m79F3E2B859433E0B67E7E6B3EA0005F9FE9B12B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return k_EnumValues[typeIndex];
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumValues_2;
		int32_t L_1 = ___typeIndex0;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = List_1_get_Item_m79F3E2B859433E0B67E7E6B3EA0005F9FE9B12B6(L_0, L_1, List_1_get_Item_m79F3E2B859433E0B67E7E6B3EA0005F9FE9B12B6_RuntimeMethod_var);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.String> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumNames(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricIdTypeLibrary_GetEnumNames_m5B4049D6ED69477869F29548CD406EC3F6DFE0F6 (int32_t ___typeIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4BA8B6B2564FB6EBB18BF12EAE65683993DDC6E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return k_EnumNames[typeIndex];
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumNames_3;
		int32_t L_1 = ___typeIndex0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = List_1_get_Item_m4BA8B6B2564FB6EBB18BF12EAE65683993DDC6E9(L_0, L_1, List_1_get_Item_m4BA8B6B2564FB6EBB18BF12EAE65683993DDC6E9_RuntimeMethod_var);
		return (RuntimeObject*)L_2;
	}
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumName(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricIdTypeLibrary_GetEnumName_m469F95312636FDC53224D55B774ABBA59A4B0154 (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_GetEnumMetadata_TisString_t_m920A93625A7226D8C53089082CA52DC8BBA42933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// return GetEnumMetadata(k_EnumNames, typeIndex, enumValue) ?? enumValue.ToString();
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumNames_3;
		int32_t L_1 = ___typeIndex0;
		int32_t L_2 = ___enumValue1;
		String_t* L_3;
		L_3 = MetricIdTypeLibrary_GetEnumMetadata_TisString_t_m920A93625A7226D8C53089082CA52DC8BBA42933(L_0, L_1, L_2, MetricIdTypeLibrary_GetEnumMetadata_TisString_t_m920A93625A7226D8C53089082CA52DC8BBA42933_RuntimeMethod_var);
		String_t* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0017;
		}
	}
	{
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___enumValue1), NULL);
		G_B2_0 = L_5;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetricKind(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricIdTypeLibrary_GetEnumMetricKind_m8786904B6C671B561FC166FA86C685D2EA28D600 (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_GetEnumMetadata_TisMetricKind_t979B08A335DC46BFE3E81FAD0B072532C5D78B58_m6F7E1D0991664463F4869B10B335BD57B26A2E09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetEnumMetadata(k_MetricKinds, typeIndex, enumValue);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_tDC7039B2AB81C1499872DB600BD309EE76715240* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_MetricKinds_5;
		int32_t L_1 = ___typeIndex0;
		int32_t L_2 = ___enumValue1;
		int32_t L_3;
		L_3 = MetricIdTypeLibrary_GetEnumMetadata_TisMetricKind_t979B08A335DC46BFE3E81FAD0B072532C5D78B58_m6F7E1D0991664463F4869B10B335BD57B26A2E09(L_0, L_1, L_2, MetricIdTypeLibrary_GetEnumMetadata_TisMetricKind_t979B08A335DC46BFE3E81FAD0B072532C5D78B58_m6F7E1D0991664463F4869B10B335BD57B26A2E09_RuntimeMethod_var);
		return L_3;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.String> Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumDisplayNames(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricIdTypeLibrary_GetEnumDisplayNames_m3171BF609E24F1EF07E4C00B94C9D33FFA80F526 (int32_t ___typeIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4BA8B6B2564FB6EBB18BF12EAE65683993DDC6E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return k_EnumDisplayNames[typeIndex];
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumDisplayNames_4;
		int32_t L_1 = ___typeIndex0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = List_1_get_Item_m4BA8B6B2564FB6EBB18BF12EAE65683993DDC6E9(L_0, L_1, List_1_get_Item_m4BA8B6B2564FB6EBB18BF12EAE65683993DDC6E9_RuntimeMethod_var);
		return (RuntimeObject*)L_2;
	}
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumDisplayName(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricIdTypeLibrary_GetEnumDisplayName_m353A17188B20E333C2DC0AB56559A579F15BB746 (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_GetEnumMetadata_TisString_t_m920A93625A7226D8C53089082CA52DC8BBA42933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// return GetEnumMetadata(k_EnumDisplayNames, typeIndex, enumValue) ?? "";
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t77EDD3ECA98BCC1B49E3106C8CB923CA87D088ED* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_EnumDisplayNames_4;
		int32_t L_1 = ___typeIndex0;
		int32_t L_2 = ___enumValue1;
		String_t* L_3;
		L_3 = MetricIdTypeLibrary_GetEnumMetadata_TisString_t_m920A93625A7226D8C53089082CA52DC8BBA42933(L_0, L_1, L_2, MetricIdTypeLibrary_GetEnumMetadata_TisString_t_m920A93625A7226D8C53089082CA52DC8BBA42933_RuntimeMethod_var);
		String_t* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0015;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0015:
	{
		return G_B2_0;
	}
}
// Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumUnit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA MetricIdTypeLibrary_GetEnumUnit_m8DA72F0168C1E0BA6FA2BF60CCA32848784E8EE6 (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_GetEnumMetadata_TisBaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_mB56FE903B090CDC0BF0E10D8939B5316A22CB4CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetEnumMetadata(k_Units, typeIndex, enumValue);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_t51AD1CCEAC33F35C42229107DBEEF14F70D0853C* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_Units_6;
		int32_t L_1 = ___typeIndex0;
		int32_t L_2 = ___enumValue1;
		BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_3;
		L_3 = MetricIdTypeLibrary_GetEnumMetadata_TisBaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_mB56FE903B090CDC0BF0E10D8939B5316A22CB4CE(L_0, L_1, L_2, MetricIdTypeLibrary_GetEnumMetadata_TisBaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_mB56FE903B090CDC0BF0E10D8939B5316A22CB4CE_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetDisplayAsPercentage(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricIdTypeLibrary_GetDisplayAsPercentage_m6F638E240E7F3548CA9800608C4C2117235D1F7C (int32_t ___typeIndex0, int32_t ___enumValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_GetEnumMetadata_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5EE205756887A35BAC6190954EB41E58C37D33F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetEnumMetadata(k_DisplayAsPercentage, typeIndex, enumValue);
		il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		List_1_tD66AD2069AED4CA8BC3560C51B2426962F844021* L_0 = ((MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_StaticFields*)il2cpp_codegen_static_fields_for(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var))->___k_DisplayAsPercentage_7;
		int32_t L_1 = ___typeIndex0;
		int32_t L_2 = ___enumValue1;
		bool L_3;
		L_3 = MetricIdTypeLibrary_GetEnumMetadata_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5EE205756887A35BAC6190954EB41E58C37D33F8(L_0, L_1, L_2, MetricIdTypeLibrary_GetEnumMetadata_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5EE205756887A35BAC6190954EB41E58C37D33F8_RuntimeMethod_var);
		return L_3;
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFF6C6282B713AB66D6B4828905CEF0C48E442DF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E* L_0 = (U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E*)il2cpp_codegen_object_new(U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m776FB9AE40AE9C8BFC9750F21B728EE21FD7DDFA(L_0, NULL);
		((U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m776FB9AE40AE9C8BFC9750F21B728EE21FD7DDFA (U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::<TypeRegistrationPostProcess>b__14_0(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CTypeRegistrationPostProcessU3Eb__14_0_mC664D27316976758CB5A20F811D628EEECA26F1A (U3CU3Ec_tDBD20D4CA4F826BECF27FAD103CE35F803EAC22E* __this, Type_t* ___a0, Type_t* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C_m360361C9BEB8BCE7D3A88CAEF606C9B2BB076FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortPriority_t309402416951EF7770352C3032EF3B0BF9B12632_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* G_B2_0 = NULL;
	MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* G_B5_0 = NULL;
	MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		// var aSortPriorityAttr =
		//     a.GetCustomAttribute<MetricTypeSortPriorityAttribute>();
		Type_t* L_0 = ___a0;
		MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* L_1;
		L_1 = CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C_m360361C9BEB8BCE7D3A88CAEF606C9B2BB076FB9(L_0, CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C_m360361C9BEB8BCE7D3A88CAEF606C9B2BB076FB9_RuntimeMethod_var);
		// var aSortPriority = aSortPriorityAttr?.SortPriority ?? SortPriority.Neutral;
		MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		int32_t L_3;
		L_3 = MetricTypeSortPriorityAttribute_get_SortPriority_mE67EA96103A67FFE511FF45381E89FC516F1A0C0_inline(G_B2_0, NULL);
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0012:
	{
		V_0 = G_B3_0;
		// var bSortPriorityAttr =
		//     b.GetCustomAttribute<MetricTypeSortPriorityAttribute>();
		Type_t* L_4 = ___b1;
		MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* L_5;
		L_5 = CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C_m360361C9BEB8BCE7D3A88CAEF606C9B2BB076FB9(L_4, CustomAttributeExtensions_GetCustomAttribute_TisMetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C_m360361C9BEB8BCE7D3A88CAEF606C9B2BB076FB9_RuntimeMethod_var);
		// var bSortPriority = bSortPriorityAttr?.SortPriority ?? SortPriority.Neutral;
		MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0020;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B5_0);
		int32_t L_7;
		L_7 = MetricTypeSortPriorityAttribute_get_SortPriority_mE67EA96103A67FFE511FF45381E89FC516F1A0C0_inline(G_B5_0, NULL);
		G_B6_0 = ((int32_t)(L_7));
	}

IL_0025:
	{
		V_1 = G_B6_0;
		// var sortPriorityComparison = aSortPriority.CompareTo(bSortPriority);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(SortPriority_t309402416951EF7770352C3032EF3B0BF9B12632_il2cpp_TypeInfo_var, &L_9);
		Il2CppFakeBox<int32_t> L_11(SortPriority_t309402416951EF7770352C3032EF3B0BF9B12632_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_12;
		L_12 = Enum_CompareTo_m7857C6F62098FB59C5334577863DD23559CD50B5((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), L_10, NULL);
		V_2 = L_12;
		// if (sortPriorityComparison != 0)
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		// return sortPriorityComparison;
		int32_t L_14 = V_2;
		return L_14;
	}

IL_003f:
	{
		// return StringComparer.InvariantCulture.Compare(a.FullName, b.FullName);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_15;
		L_15 = StringComparer_get_InvariantCulture_m34F8755409AC642ED90CC1818310DA558881D087_inline(NULL);
		Type_t* L_16 = ___a0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_16);
		Type_t* L_18 = ___b1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_18);
		NullCheck(L_15);
		int32_t L_20;
		L_20 = VirtualFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(10 /* System.Int32 System.StringComparer::Compare(System.String,System.String) */, L_15, L_17, L_19);
		return L_20;
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
// System.Void Unity.Multiplayer.Tools.NetStats.Timer::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_mC6D54C0DEA51A293E565EC3999395F942D39839C (Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___defaultValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1__ctor_m6B03F8B3A030CCADF538F07EE36F0E49AFF04A89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(metricId, defaultValue)
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = ___metricId0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ___defaultValue1;
		Metric_1__ctor_m6B03F8B3A030CCADF538F07EE36F0E49AFF04A89(__this, L_0, L_1, Metric_1__ctor_m6B03F8B3A030CCADF538F07EE36F0E49AFF04A89_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.Timer::Set(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Set_m2D4E3522C3E5EF5B9C61C42E411304402DC76925 (Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_set_Value_mE469305499E24FFF5BB88E7A52506DBC33FB1F9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = value;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___value0;
		Metric_1_set_Value_mE469305499E24FFF5BB88E7A52506DBC33FB1F9C_inline(__this, L_0, Metric_1_set_Value_mE469305499E24FFF5BB88E7A52506DBC33FB1F9C_RuntimeMethod_var);
		// }
		return;
	}
}
// Unity.Multiplayer.Tools.NetStats.Timer/TimerScope Unity.Multiplayer.Tools.NetStats.Timer::Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702 Timer_Time_m0457B69BBD43FD684479D854E4AE3577D712100F (Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_Set_m2D4E3522C3E5EF5B9C61C42E411304402DC76925_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new TimerScope(Set);
		Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* L_0 = (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0*)il2cpp_codegen_object_new(Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mD3B03534E0760BBDA5BEB234CF44FEA2FB74F56C(L_0, __this, (intptr_t)((void*)Timer_Set_m2D4E3522C3E5EF5B9C61C42E411304402DC76925_RuntimeMethod_var), NULL);
		TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702 L_1;
		memset((&L_1), 0, sizeof(L_1));
		TimerScope__ctor_m4CA9E27C3E1230DAE2C22088D680AD63A622C280((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricContainerType Unity.Multiplayer.Tools.NetStats.Timer::get_MetricContainerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Timer_get_MetricContainerType_m2303D277E6174E969ECEC6DB474488481B1AADCA (Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* __this, const RuntimeMethod* method) 
{
	{
		// public override MetricContainerType MetricContainerType => MetricContainerType.Timer;
		return (uint32_t)(3);
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
// Conversion methods for marshalling of: Unity.Multiplayer.Tools.NetStats.Timer/TimerScope
IL2CPP_EXTERN_C void TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshal_pinvoke(const TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702& unmarshaled, TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Stopwatch_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Stopwatch' of type 'TimerScope': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Stopwatch_1Exception, NULL);
}
IL2CPP_EXTERN_C void TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshal_pinvoke_back(const TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshaled_pinvoke& marshaled, TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702& unmarshaled)
{
	Exception_t* ___m_Stopwatch_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Stopwatch' of type 'TimerScope': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Stopwatch_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Multiplayer.Tools.NetStats.Timer/TimerScope
IL2CPP_EXTERN_C void TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshal_pinvoke_cleanup(TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Multiplayer.Tools.NetStats.Timer/TimerScope
IL2CPP_EXTERN_C void TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshal_com(const TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702& unmarshaled, TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshaled_com& marshaled)
{
	Exception_t* ___m_Stopwatch_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Stopwatch' of type 'TimerScope': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Stopwatch_1Exception, NULL);
}
IL2CPP_EXTERN_C void TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshal_com_back(const TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshaled_com& marshaled, TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702& unmarshaled)
{
	Exception_t* ___m_Stopwatch_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Stopwatch' of type 'TimerScope': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Stopwatch_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Multiplayer.Tools.NetStats.Timer/TimerScope
IL2CPP_EXTERN_C void TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshal_com_cleanup(TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702_marshaled_com& marshaled)
{
}
// System.Void Unity.Multiplayer.Tools.NetStats.Timer/TimerScope::.ctor(System.Action`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScope__ctor_m4CA9E27C3E1230DAE2C22088D680AD63A622C280 (TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702* __this, Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Callback = callback;
		Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* L_0 = ___callback0;
		__this->___m_Callback_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Callback_0), (void*)L_0);
		// m_Stopwatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_1, NULL);
		__this->___m_Stopwatch_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stopwatch_1), (void*)L_1);
		// m_Stopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = __this->___m_Stopwatch_1;
		NullCheck(L_2);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TimerScope__ctor_m4CA9E27C3E1230DAE2C22088D680AD63A622C280_AdjustorThunk (RuntimeObject* __this, Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* ___callback0, const RuntimeMethod* method)
{
	TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702*>(__this + _offset);
	TimerScope__ctor_m4CA9E27C3E1230DAE2C22088D680AD63A622C280(_thisAdjusted, ___callback0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Timer/TimerScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerScope_Dispose_mEAAA634EC3C3F493D7C50D987E71ED5F2002E1BA (TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702* __this, const RuntimeMethod* method) 
{
	Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* G_B2_0 = NULL;
	Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* G_B1_0 = NULL;
	{
		// m_Callback?.Invoke(m_Stopwatch.Elapsed);
		Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* L_0 = __this->___m_Callback_0;
		Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = __this->___m_Stopwatch_1;
		NullCheck(L_2);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_2, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TimerScope_Dispose_mEAAA634EC3C3F493D7C50D987E71ED5F2002E1BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimerScope_tA1F23C53DC2847CFFC29D7A8956F639954716702*>(__this + _offset);
	TimerScope_Dispose_mEAAA634EC3C3F493D7C50D987E71ED5F2002E1BA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Multiplayer.Tools.NetStats.TimerFactory::TryConstruct(Unity.Multiplayer.Tools.NetStats.MetricHeader,Unity.Multiplayer.Tools.NetStats.IMetric&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimerFactory_TryConstruct_mECC0B635DF59A97B86305A06A1F3702D3123C7D9 (TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C ___header0, RuntimeObject** ___metric1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// metric = new Timer(header.MetricId);
		RuntimeObject** L_0 = ___metric1;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_1;
		L_1 = MetricHeader_get_MetricId_m1D361164AB2668C6754995708F55B31C43947EC6_inline((&___header0), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = V_0;
		Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE* L_3 = (Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE*)il2cpp_codegen_object_new(Timer_tE43A8BC1118DCFD83F224ACD7155CDC27C9B82EE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Timer__ctor_mC6D54C0DEA51A293E565EC3999395F942D39839C(L_3, L_1, L_2, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_3);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.TimerFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerFactory__ctor_m4B01373093DB32A2E41A84060DCED926E91F34E2 (TimerFactory_tA7B0E091FC9F29212E762E405B6C355C4CA51553* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Multiplayer.Tools.NetStats.TypeRegistration::RunIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistration_RunIfNeeded_mFDCE53630297A2807B6759D8B367F15E66BF4046 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttributes_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m8082EFB5D71296D367EEAAE62ECFF6D753AE8C61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m197616C19A765122C50C245388AFE09E332E4BE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral058AAB71D333CB1ADEB82A91D9C0D000B3792695);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A464BAC87A9D635B6873D8A9423C9C0235968B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_2 = NULL;
	int32_t V_3 = 0;
	Assembly_t* V_4 = NULL;
	MethodInfo_t* V_5 = NULL;
	Type_t* G_B7_0 = NULL;
	Type_t* G_B6_0 = NULL;
	MethodInfo_t* G_B8_0 = NULL;
	{
		// lock (s_LockObject)
		il2cpp_codegen_runtime_class_init_inline(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var))->___s_LockObject_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00b0;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00b0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (s_TypeRegistrationComplete)
				il2cpp_codegen_runtime_class_init_inline(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var);
				bool L_4 = ((TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var))->___s_TypeRegistrationComplete_2;
				if (!L_4)
				{
					goto IL_001c_1;
				}
			}
			{
				// return;
				goto IL_00b1;
			}

IL_001c_1:
			{
				// s_TypeRegistrationComplete = true;
				il2cpp_codegen_runtime_class_init_inline(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var);
				((TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var))->___s_TypeRegistrationComplete_2 = (bool)1;
				// foreach (var assembly in AppDomain.CurrentDomain.GetAssemblies())
				AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_5;
				L_5 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
				NullCheck(L_5);
				AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_6;
				L_6 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_5, NULL);
				V_2 = L_6;
				V_3 = 0;
				goto IL_009a_1;
			}

IL_0031_1:
			{
				// foreach (var assembly in AppDomain.CurrentDomain.GetAssemblies())
				AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_7 = V_2;
				int32_t L_8 = V_3;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				Assembly_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_4 = L_10;
				// if (!assembly.GetCustomAttributes<AssemblyRequiresTypeRegistrationAttribute>().Any())
				Assembly_t* L_11 = V_4;
				RuntimeObject* L_12;
				L_12 = CustomAttributeExtensions_GetCustomAttributes_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m8082EFB5D71296D367EEAAE62ECFF6D753AE8C61(L_11, CustomAttributeExtensions_GetCustomAttributes_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m8082EFB5D71296D367EEAAE62ECFF6D753AE8C61_RuntimeMethod_var);
				bool L_13;
				L_13 = Enumerable_Any_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m197616C19A765122C50C245388AFE09E332E4BE0(L_12, Enumerable_Any_TisAssemblyRequiresTypeRegistrationAttribute_t29CB0C6444438CA91ECFF60E3CDB0E90A52E37E4_m197616C19A765122C50C245388AFE09E332E4BE0_RuntimeMethod_var);
				if (!L_13)
				{
					goto IL_0096_1;
				}
			}
			{
				// var runMethod = assembly
				//     .GetType(k_ClassName)
				//     ?.GetMethod(k_MethodName, BindingFlags.NonPublic | BindingFlags.Static);
				Assembly_t* L_14 = V_4;
				NullCheck(L_14);
				Type_t* L_15;
				L_15 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(16 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_14, _stringLiteral058AAB71D333CB1ADEB82A91D9C0D000B3792695);
				Type_t* L_16 = L_15;
				G_B6_0 = L_16;
				if (L_16)
				{
					G_B7_0 = L_16;
					goto IL_0057_1;
				}
			}
			{
				G_B8_0 = ((MethodInfo_t*)(NULL));
				goto IL_0063_1;
			}

IL_0057_1:
			{
				NullCheck(G_B7_0);
				MethodInfo_t* L_17;
				L_17 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(G_B7_0, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, ((int32_t)40), NULL);
				G_B8_0 = L_17;
			}

IL_0063_1:
			{
				V_5 = G_B8_0;
				// if (runMethod == null)
				MethodInfo_t* L_18 = V_5;
				bool L_19;
				L_19 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_18, (MethodInfo_t*)NULL, NULL);
				if (!L_19)
				{
					goto IL_008c_1;
				}
			}
			{
				// Debug.LogError($"Failed to load type initialization for assembly {assembly.GetName().Name}");
				Assembly_t* L_20 = V_4;
				NullCheck(L_20);
				AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_21;
				L_21 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(18 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_20);
				NullCheck(L_21);
				String_t* L_22;
				L_22 = AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline(L_21, NULL);
				String_t* L_23;
				L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB4A464BAC87A9D635B6873D8A9423C9C0235968B, L_22, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_23, NULL);
				// continue;
				goto IL_0096_1;
			}

IL_008c_1:
			{
				// runMethod.Invoke(null, null);
				MethodInfo_t* L_24 = V_5;
				NullCheck(L_24);
				RuntimeObject* L_25;
				L_25 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_24, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
			}

IL_0096_1:
			{
				int32_t L_26 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
			}

IL_009a_1:
			{
				// foreach (var assembly in AppDomain.CurrentDomain.GetAssemblies())
				int32_t L_27 = V_3;
				AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_28 = V_2;
				NullCheck(L_28);
				if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
				{
					goto IL_0031_1;
				}
			}
			{
				// MetricIdTypeLibrary.TypeRegistrationPostProcess();
				il2cpp_codegen_runtime_class_init_inline(MetricIdTypeLibrary_tFCF0011A8FFC31AE3C72960F566A50C52980153D_il2cpp_TypeInfo_var);
				MetricIdTypeLibrary_TypeRegistrationPostProcess_m1D182352CFED93586A12CE14589DD7FABA51675C(NULL);
				// }
				goto IL_00b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.TypeRegistration::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistration__cctor_mC17C04FC5A2A3F3019D3A101DFCBC237426A8328 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly object s_LockObject = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var))->___s_LockObject_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistration_tBB1861F33579628AC75343D8FB42E5D9625DB83C_il2cpp_TypeInfo_var))->___s_LockObject_3), (void*)L_0);
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
// System.Boolean Unity.Multiplayer.Tools.NetStats.BitReader::get_BitAligned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitReader_get_BitAligned_mDA11119BA19D3286D99A3A113746D248A411E9FA (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_BitPosition & 7) == 0;
		int32_t L_0 = __this->___m_BitPosition_3;
		return (bool)((((int32_t)((int32_t)(L_0&7))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader__ctor_mBC75366132C6EF96FE8F26DDB114D25016263024 (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 ___reader0, const RuntimeMethod* method) 
{
	{
		// m_Reader = reader;
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 L_0 = ___reader0;
		__this->___m_Reader_0 = L_0;
		// m_BufferPointer = m_Reader.Handle->BufferPointer + m_Reader.Handle->Position;
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_1 = (&__this->___m_Reader_0);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_2 = L_1->___Handle_0;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___BufferPointer_0;
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_4 = (&__this->___m_Reader_0);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5 = L_4->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		__this->___m_BufferPointer_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_6));
		// m_Position = m_Reader.Handle->Position;
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_7 = (&__this->___m_Reader_0);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_8 = L_7->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___Position_1;
		__this->___m_Position_2 = L_9;
		// m_BitPosition = 0;
		__this->___m_BitPosition_3 = 0;
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader_Dispose_mE76465D3D93F6C20AA8697980E48427CA3EA42DC (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var bytesWritten = m_BitPosition >> 3;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0>>3));
		// if (!BitAligned)
		bool L_1;
		L_1 = BitReader_get_BitAligned_mDA11119BA19D3286D99A3A113746D248A411E9FA_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ++bytesWritten;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0015:
	{
		// m_Reader.CommitBitwiseReads(bytesWritten);
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_3 = (&__this->___m_Reader_0);
		int32_t L_4 = V_0;
		FastBufferReader_CommitBitwiseReads_mEA2055113233892F4DE1136E18C534C506F4DC16_inline(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BitReader::TryBeginReadBits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitReader_TryBeginReadBits_mFB1338DEE41A7943727FA07F176354C2C5209349 (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, uint32_t ___bitCount0, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// var newBitPosition = m_BitPosition + bitCount;
		int32_t L_0 = __this->___m_BitPosition_3;
		uint32_t L_1 = ___bitCount0;
		// var totalBytesWrittenInBitwiseContext = newBitPosition >> 3;
		int64_t L_2 = ((int64_t)il2cpp_codegen_add(((int64_t)L_0), ((int64_t)(uint64_t)L_1)));
		V_0 = ((int64_t)(L_2>>3));
		// if ((newBitPosition & 7) != 0)
		if (!((int64_t)(L_2&((int64_t)7))))
		{
			goto IL_0018;
		}
	}
	{
		// ++totalBytesWrittenInBitwiseContext;
		int64_t L_3 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_3, ((int64_t)1)));
	}

IL_0018:
	{
		// if (m_Reader.Handle->Position + totalBytesWrittenInBitwiseContext > m_Reader.Handle->Length)
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_4 = (&__this->___m_Reader_0);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5 = L_4->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		int64_t L_7 = V_0;
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_8 = (&__this->___m_Reader_0);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_9 = L_8->___Handle_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Length_2;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)L_6), L_7))) <= ((int64_t)((int64_t)L_10))))
		{
			goto IL_0040;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::ReadBits(System.UInt64&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader_ReadBits_m7F220FCA54904273ADBE14B458A574F279264A14 (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, uint64_t* ___value0, uint32_t ___bitCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitReader_ReadPartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7CE9F8E7F571F935B51876F0D52CCD9DAF5C7221_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// ulong val = 0;
		V_0 = ((int64_t)0);
		// int wholeBytes = (int)bitCount / k_BitsPerByte;
		uint32_t L_0 = ___bitCount1;
		V_1 = ((int32_t)((int32_t)L_0/8));
		// byte* asBytes = (byte*)&val;
		V_2 = (uint8_t*)((uintptr_t)(&V_0));
		// if (BitAligned)
		bool L_1;
		L_1 = BitReader_get_BitAligned_mDA11119BA19D3286D99A3A113746D248A411E9FA_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// if (wholeBytes != 0)
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// ReadPartialValue(out val, wholeBytes);
		int32_t L_3 = V_1;
		BitReader_ReadPartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7CE9F8E7F571F935B51876F0D52CCD9DAF5C7221_inline(__this, (&V_0), L_3, 0, BitReader_ReadPartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7CE9F8E7F571F935B51876F0D52CCD9DAF5C7221_RuntimeMethod_var);
		goto IL_0037;
	}

IL_0022:
	{
		// for (var i = 0; i < wholeBytes; ++i)
		V_3 = 0;
		goto IL_0033;
	}

IL_0026:
	{
		// ReadMisaligned(out asBytes[i]);
		uint8_t* L_4 = V_2;
		int32_t L_5 = V_3;
		BitReader_ReadMisaligned_m1164AE5F4D20EA3FB0B46DAAA61C7F301E304FF0_inline(__this, (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_5)), NULL);
		// for (var i = 0; i < wholeBytes; ++i)
		int32_t L_6 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0033:
	{
		// for (var i = 0; i < wholeBytes; ++i)
		int32_t L_7 = V_3;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0026;
		}
	}

IL_0037:
	{
		// val |= (ulong)ReadByteBits((int)bitCount & 7) << ((int)bitCount & ~7);
		uint64_t L_9 = V_0;
		uint32_t L_10 = ___bitCount1;
		uint8_t L_11;
		L_11 = BitReader_ReadByteBits_m38B2485005A64266B223553CC72DFE86568E565E(__this, ((int32_t)((int32_t)L_10&7)), NULL);
		uint32_t L_12 = ___bitCount1;
		V_0 = ((int64_t)((int64_t)L_9|((int64_t)(((int64_t)(uint64_t)L_11)<<((int32_t)(((int32_t)((int32_t)L_12&((int32_t)-8)))&((int32_t)63)))))));
		// value = val;
		uint64_t* L_13 = ___value0;
		uint64_t L_14 = V_0;
		*((int64_t*)L_13) = (int64_t)L_14;
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::ReadBits(System.Byte&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader_ReadBits_m15FE236C5A60E98F8E3ED958271BF1D1B1585439 (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, uint8_t* ___value0, uint32_t ___bitCount1, const RuntimeMethod* method) 
{
	{
		// value = ReadByteBits((int)bitCount);
		uint8_t* L_0 = ___value0;
		uint32_t L_1 = ___bitCount1;
		uint8_t L_2;
		L_2 = BitReader_ReadByteBits_m38B2485005A64266B223553CC72DFE86568E565E(__this, L_1, NULL);
		*((int8_t*)L_0) = (int8_t)L_2;
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::ReadBit(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader_ReadBit_m3BAFA8BBEC00E14319F8E1536B9BF50A4CB05BCA (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, bool* ___bit0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int offset = m_BitPosition & 7;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0&7));
		// int pos = m_BitPosition >> 3;
		int32_t L_1 = __this->___m_BitPosition_3;
		V_1 = ((int32_t)(L_1>>3));
		// bit = (m_BufferPointer[pos] & (1 << offset)) != 0;
		bool* L_2 = ___bit0;
		uint8_t* L_3 = __this->___m_BufferPointer_1;
		int32_t L_4 = V_1;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)));
		int32_t L_6 = V_0;
		*((int8_t*)L_2) = (int8_t)((!(((uint32_t)((int32_t)(L_5&((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		// ++m_BitPosition;
		int32_t L_7 = __this->___m_BitPosition_3;
		__this->___m_BitPosition_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// }
		return;
	}
}
// System.Byte Unity.Multiplayer.Tools.NetStats.BitReader::ReadByteBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BitReader_ReadByteBits_m38B2485005A64266B223553CC72DFE86568E565E (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, int32_t ___bitCount0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// if (bitCount > 8)
		int32_t L_0 = ___bitCount0;
		if ((((int32_t)L_0) <= ((int32_t)8)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(bitCount), "Cannot read more than 8 bits into an 8-bit value!");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC39A9EEB24B37B3A11DF2E1EEA8D1C8B4B226CB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitReader_ReadByteBits_m38B2485005A64266B223553CC72DFE86568E565E_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (bitCount < 0)
		int32_t L_2 = ___bitCount0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(bitCount), "Cannot read fewer than 0 bits!");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC3577256CEDECAAE028F2052BFD09A4CB016292D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitReader_ReadByteBits_m38B2485005A64266B223553CC72DFE86568E565E_RuntimeMethod_var)));
	}

IL_0028:
	{
		// int result = 0;
		V_0 = 0;
		// var convert = new ByteBool();
		il2cpp_codegen_initobj((&V_1), sizeof(ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6));
		// for (int i = 0; i < bitCount; ++i)
		V_2 = 0;
		goto IL_0052;
	}

IL_0036:
	{
		// ReadBit(out bool bit);
		BitReader_ReadBit_m3BAFA8BBEC00E14319F8E1536B9BF50A4CB05BCA_inline(__this, (&V_3), NULL);
		// result |= convert.Collapse(bit) << i;
		int32_t L_4 = V_0;
		bool L_5 = V_3;
		uint8_t L_6;
		L_6 = ByteBool_Collapse_m1D058E90145E2EA901FB85E2BC77DCA97DDC30BC((&V_1), L_5, NULL);
		int32_t L_7 = V_2;
		V_0 = ((int32_t)(L_4|((int32_t)((int32_t)L_6<<((int32_t)(L_7&((int32_t)31)))))));
		// for (int i = 0; i < bitCount; ++i)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0052:
	{
		// for (int i = 0; i < bitCount; ++i)
		int32_t L_9 = V_2;
		int32_t L_10 = ___bitCount0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0036;
		}
	}
	{
		// return (byte)result;
		int32_t L_11 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_11);
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitReader::ReadMisaligned(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitReader_ReadMisaligned_m1164AE5F4D20EA3FB0B46DAAA61C7F301E304FF0 (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int off = m_BitPosition & 7;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0&7));
		// int pos = m_BitPosition >> 3;
		int32_t L_1 = __this->___m_BitPosition_3;
		V_1 = ((int32_t)(L_1>>3));
		// int shift1 = 8 - off;
		int32_t L_2 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(8, L_2));
		// value = (byte)((m_BufferPointer[pos] >> off) | (m_BufferPointer[(m_BitPosition += 8) >> 3] << shift1));
		uint8_t* L_3 = ___value0;
		uint8_t* L_4 = __this->___m_BufferPointer_1;
		int32_t L_5 = V_1;
		int32_t L_6 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_5)));
		int32_t L_7 = V_0;
		uint8_t* L_8 = __this->___m_BufferPointer_1;
		int32_t L_9 = __this->___m_BitPosition_3;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 8));
		V_3 = L_10;
		__this->___m_BitPosition_3 = L_10;
		int32_t L_11 = V_3;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((int32_t)(L_11>>3)))));
		int32_t L_13 = V_2;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_6>>((int32_t)(L_7&((int32_t)31)))))|((int32_t)(L_12<<((int32_t)(L_13&((int32_t)31))))))));
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
// System.Boolean Unity.Multiplayer.Tools.NetStats.BitWriter::get_BitAligned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitWriter_get_BitAligned_m7E6092AF96896EBF095F1111166F413B6578C113 (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_BitPosition & 7) == 0;
		int32_t L_0 = __this->___m_BitPosition_3;
		return (bool)((((int32_t)((int32_t)(L_0&7))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitWriter__ctor_mA890D5ED1C145E432CB9010E905359896DB574F5 (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___writer0, const RuntimeMethod* method) 
{
	{
		// m_Writer = writer;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_0 = ___writer0;
		__this->___m_Writer_0 = L_0;
		// m_BufferPointer = writer.Handle->BufferPointer + writer.Handle->Position;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_1 = ___writer0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = L_1.___Handle_0;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___BufferPointer_0;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_4 = ___writer0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = L_4.___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		__this->___m_BufferPointer_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_6));
		// m_Position = writer.Handle->Position;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_7 = ___writer0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_8 = L_7.___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___Position_1;
		__this->___m_Position_2 = L_9;
		// m_BitPosition = 0;
		__this->___m_BitPosition_3 = 0;
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitWriter_Dispose_mCE9D705CC8FBB028291F235B34B1AD0BFC98E312 (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var bytesWritten = m_BitPosition >> 3;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0>>3));
		// if (!BitAligned)
		bool L_1;
		L_1 = BitWriter_get_BitAligned_m7E6092AF96896EBF095F1111166F413B6578C113_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ++bytesWritten;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0015:
	{
		// m_Writer.CommitBitwiseWrites(bytesWritten);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_3 = (&__this->___m_Writer_0);
		int32_t L_4 = V_0;
		FastBufferWriter_CommitBitwiseWrites_m1311C2B1584E87D68403CC6B891410BD5A069BE5_inline(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BitWriter::TryBeginWriteBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitWriter_TryBeginWriteBits_m140DBD1BB7834B846C9A4000300B37FE45490459 (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, int32_t ___bitCount0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var newBitPosition = m_BitPosition + bitCount;
		int32_t L_0 = __this->___m_BitPosition_3;
		int32_t L_1 = ___bitCount0;
		// var totalBytesWrittenInBitwiseContext = newBitPosition >> 3;
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		V_0 = ((int32_t)(L_2>>3));
		// if ((newBitPosition & 7) != 0)
		if (!((int32_t)(L_2&7)))
		{
			goto IL_0014;
		}
	}
	{
		// ++totalBytesWrittenInBitwiseContext;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0014:
	{
		// if (m_Position + totalBytesWrittenInBitwiseContext > m_Writer.Handle->Capacity)
		int32_t L_4 = __this->___m_Position_2;
		int32_t L_5 = V_0;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_6 = (&__this->___m_Writer_0);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_7 = L_6->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Capacity_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)L_8)))
		{
			goto IL_00a3;
		}
	}
	{
		// if (m_Position + totalBytesWrittenInBitwiseContext > m_Writer.Handle->MaxCapacity)
		int32_t L_9 = __this->___m_Position_2;
		int32_t L_10 = V_0;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_11 = (&__this->___m_Writer_0);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = L_11->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10))) <= ((int32_t)L_13)))
		{
			goto IL_004a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// if (m_Writer.Handle->Capacity < m_Writer.Handle->MaxCapacity)
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_14 = (&__this->___m_Writer_0);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_15 = L_14->___Handle_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___Capacity_3;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_17 = (&__this->___m_Writer_0);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_18 = L_17->___Handle_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___MaxCapacity_4;
		if ((((int32_t)L_16) >= ((int32_t)L_19)))
		{
			goto IL_00a1;
		}
	}
	{
		// m_Writer.Grow(totalBytesWrittenInBitwiseContext);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_20 = (&__this->___m_Writer_0);
		int32_t L_21 = V_0;
		FastBufferWriter_Grow_m51D828C37FF9C26B2E30C326807B6ECC470A2668(L_20, L_21, NULL);
		// m_BufferPointer = m_Writer.Handle->BufferPointer + m_Writer.Handle->Position;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_22 = (&__this->___m_Writer_0);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_23 = L_22->___Handle_0;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___BufferPointer_0;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_25 = (&__this->___m_Writer_0);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_26 = L_25->___Handle_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___Position_1;
		__this->___m_BufferPointer_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_27));
		goto IL_00a3;
	}

IL_00a1:
	{
		// return false;
		return (bool)0;
	}

IL_00a3:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::WriteBits(System.UInt64,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitWriter_WriteBits_m57F7700018615CDFB198B0B48F0C36F7E670CE5C (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, uint64_t ___value0, uint32_t ___bitCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitWriter_WritePartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2141D5870D1F4E0362442402A575164053AD5BC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int wholeBytes = (int)bitCount / k_BitsPerByte;
		uint32_t L_0 = ___bitCount1;
		V_0 = ((int32_t)((int32_t)L_0/8));
		// byte* asBytes = (byte*)&value;
		V_1 = (uint8_t*)((uintptr_t)(&___value0));
		// if (BitAligned)
		bool L_1;
		L_1 = BitWriter_get_BitAligned_m7E6092AF96896EBF095F1111166F413B6578C113_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (wholeBytes != 0)
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// WritePartialValue(value, wholeBytes);
		uint64_t L_3 = ___value0;
		int32_t L_4 = V_0;
		BitWriter_WritePartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2141D5870D1F4E0362442402A575164053AD5BC3_inline(__this, L_3, L_4, 0, BitWriter_WritePartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2141D5870D1F4E0362442402A575164053AD5BC3_RuntimeMethod_var);
		goto IL_0034;
	}

IL_001e:
	{
		// for (var i = 0; i < wholeBytes; ++i)
		V_2 = 0;
		goto IL_0030;
	}

IL_0022:
	{
		// WriteMisaligned(asBytes[i]);
		uint8_t* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)));
		BitWriter_WriteMisaligned_m1CA7257D50E76149797445E095B54646CCB0188E_inline(__this, (uint8_t)L_7, NULL);
		// for (var i = 0; i < wholeBytes; ++i)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0030:
	{
		// for (var i = 0; i < wholeBytes; ++i)
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0022;
		}
	}

IL_0034:
	{
		// for (var count = wholeBytes * k_BitsPerByte; count < bitCount; ++count)
		int32_t L_11 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_11, 8));
		goto IL_0051;
	}

IL_003a:
	{
		// WriteBit((value & (1UL << count)) != 0);
		uint64_t L_12 = ___value0;
		int32_t L_13 = V_3;
		BitWriter_WriteBit_mE58A09DA4068921D422E73DBC34AEAB771DC6C10_inline(__this, (bool)((!(((uint64_t)((int64_t)((int64_t)L_12&((int64_t)(((int64_t)1)<<((int32_t)(L_13&((int32_t)63)))))))) <= ((uint64_t)((int64_t)0))))? 1 : 0), NULL);
		// for (var count = wholeBytes * k_BitsPerByte; count < bitCount; ++count)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0051:
	{
		// for (var count = wholeBytes * k_BitsPerByte; count < bitCount; ++count)
		int32_t L_15 = V_3;
		uint32_t L_16 = ___bitCount1;
		if ((((int64_t)((int64_t)L_15)) < ((int64_t)((int64_t)(uint64_t)L_16))))
		{
			goto IL_003a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::WriteBits(System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitWriter_WriteBits_mE99530E3C128ADE5DFBC9414B732FD28388EE186 (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, uint8_t ___value0, uint32_t ___bitCount1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < bitCount; ++i)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// WriteBit(((value >> i) & 1) != 0);
		uint8_t L_0 = ___value0;
		int32_t L_1 = V_0;
		BitWriter_WriteBit_mE58A09DA4068921D422E73DBC34AEAB771DC6C10_inline(__this, (bool)((!(((uint32_t)((int32_t)(((int32_t)((int32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))&1))) <= ((uint32_t)0)))? 1 : 0), NULL);
		// for (int i = 0; i < bitCount; ++i)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < bitCount; ++i)
		int32_t L_3 = V_0;
		uint32_t L_4 = ___bitCount1;
		if ((((int64_t)((int64_t)L_3)) < ((int64_t)((int64_t)(uint64_t)L_4))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::WriteBit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitWriter_WriteBit_mE58A09DA4068921D422E73DBC34AEAB771DC6C10 (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, bool ___bit0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* G_B2_0 = NULL;
	uint8_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	uint8_t* G_B3_1 = NULL;
	{
		// int offset = m_BitPosition & 7;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0&7));
		// int pos = m_BitPosition >> 3;
		int32_t L_1 = __this->___m_BitPosition_3;
		V_1 = ((int32_t)(L_1>>3));
		// ++m_BitPosition;
		int32_t L_2 = __this->___m_BitPosition_3;
		__this->___m_BitPosition_3 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// m_BufferPointer[pos] = (byte)(bit ? (m_BufferPointer[pos] & ~(1 << offset)) | (1 << offset) : (m_BufferPointer[pos] & ~(1 << offset)));
		uint8_t* L_3 = __this->___m_BufferPointer_1;
		int32_t L_4 = V_1;
		bool L_5 = ___bit0;
		G_B1_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4));
		if (L_5)
		{
			G_B2_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4));
			goto IL_003e;
		}
	}
	{
		uint8_t* L_6 = __this->___m_BufferPointer_1;
		int32_t L_7 = V_1;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7)));
		int32_t L_9 = V_0;
		G_B3_0 = ((int32_t)(L_8&((~((int32_t)(1<<((int32_t)(L_9&((int32_t)31)))))))));
		G_B3_1 = G_B1_0;
		goto IL_0056;
	}

IL_003e:
	{
		uint8_t* L_10 = __this->___m_BufferPointer_1;
		int32_t L_11 = V_1;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, L_11)));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		G_B3_0 = ((int32_t)(((int32_t)(L_12&((~((int32_t)(1<<((int32_t)(L_13&((int32_t)31)))))))))|((int32_t)(1<<((int32_t)(L_14&((int32_t)31)))))));
		G_B3_1 = G_B2_0;
	}

IL_0056:
	{
		*((int8_t*)G_B3_1) = (int8_t)((int32_t)(uint8_t)G_B3_0);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BitWriter::WriteMisaligned(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitWriter_WriteMisaligned_m1CA7257D50E76149797445E095B54646CCB0188E (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int off = m_BitPosition & 7;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0&7));
		// int pos = m_BitPosition >> 3;
		int32_t L_1 = __this->___m_BitPosition_3;
		V_1 = ((int32_t)(L_1>>3));
		// int shift1 = 8 - off;
		int32_t L_2 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(8, L_2));
		// m_BufferPointer[pos + 1] = (byte)((m_BufferPointer[pos + 1] & (0xFF << off)) | (value >> shift1));
		uint8_t* L_3 = __this->___m_BufferPointer_1;
		int32_t L_4 = V_1;
		uint8_t* L_5 = __this->___m_BufferPointer_1;
		int32_t L_6 = V_1;
		int32_t L_7 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)))));
		int32_t L_8 = V_0;
		uint8_t L_9 = ___value0;
		int32_t L_10 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_add(L_4, 1))))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_7&((int32_t)(((int32_t)255)<<((int32_t)(L_8&((int32_t)31)))))))|((int32_t)((int32_t)L_9>>((int32_t)(L_10&((int32_t)31))))))));
		// m_BufferPointer[pos] = (byte)((m_BufferPointer[pos] & (0xFF >> shift1)) | (value << off));
		uint8_t* L_11 = __this->___m_BufferPointer_1;
		int32_t L_12 = V_1;
		uint8_t* L_13 = __this->___m_BufferPointer_1;
		int32_t L_14 = V_1;
		int32_t L_15 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14)));
		int32_t L_16 = V_2;
		uint8_t L_17 = ___value0;
		int32_t L_18 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_15&((int32_t)(((int32_t)255)>>((int32_t)(L_16&((int32_t)31)))))))|((int32_t)((int32_t)L_17<<((int32_t)(L_18&((int32_t)31))))))));
		// m_BitPosition += 8;
		int32_t L_19 = __this->___m_BitPosition_3;
		__this->___m_BitPosition_3 = ((int32_t)il2cpp_codegen_add(L_19, 8));
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
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerReader__ctor_m515970021ADFE498DF3A13F559F76CC84A79E6B4 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 ___reader0, const RuntimeMethod* method) 
{
	{
		// m_Reader = reader;
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 L_0 = ___reader0;
		__this->___m_Reader_0 = L_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerReader__ctor_m515970021ADFE498DF3A13F559F76CC84A79E6B4_AdjustorThunk (RuntimeObject* __this, FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 ___reader0, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	BufferSerializerReader__ctor_m515970021ADFE498DF3A13F559F76CC84A79E6B4_inline(_thisAdjusted, ___reader0, method);
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::get_IsReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerReader_get_IsReader_m8FB3198BA763A2294557612A4C6716057D8861C2 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsReader => true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool BufferSerializerReader_get_IsReader_m8FB3198BA763A2294557612A4C6716057D8861C2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	bool _returnValue;
	_returnValue = BufferSerializerReader_get_IsReader_m8FB3198BA763A2294557612A4C6716057D8861C2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::get_IsWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerReader_get_IsWriter_m2DED1A0E8F5D4A7274ED729C384B21A9F72924ED (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsWriter => false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BufferSerializerReader_get_IsWriter_m2DED1A0E8F5D4A7274ED729C384B21A9F72924ED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	bool _returnValue;
	_returnValue = BufferSerializerReader_get_IsWriter_m2DED1A0E8F5D4A7274ED729C384B21A9F72924ED(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Multiplayer.Tools.NetStats.FastBufferReader Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::GetFastBufferReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 BufferSerializerReader_GetFastBufferReader_m89F1B728346A534360CC4233C7A0875AAB3191E2 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, const RuntimeMethod* method) 
{
	{
		// return m_Reader;
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 L_0 = __this->___m_Reader_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 BufferSerializerReader_GetFastBufferReader_m89F1B728346A534360CC4233C7A0875AAB3191E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 _returnValue;
	_returnValue = BufferSerializerReader_GetFastBufferReader_m89F1B728346A534360CC4233C7A0875AAB3191E2_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Multiplayer.Tools.NetStats.FastBufferWriter Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::GetFastBufferWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 BufferSerializerReader_GetFastBufferWriter_m30FFADCC5275C721D76C38F13E3ABBE05B42D0C5 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, const RuntimeMethod* method) 
{
	{
		// throw new InvalidOperationException("Cannot retrieve a FastBufferWriter from a serializer where IsWriter = false");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral508EE52B975B68ACCC0D2BD78585E09E71C34CD6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferSerializerReader_GetFastBufferWriter_m30FFADCC5275C721D76C38F13E3ABBE05B42D0C5_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 BufferSerializerReader_GetFastBufferWriter_m30FFADCC5275C721D76C38F13E3ABBE05B42D0C5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 _returnValue;
	_returnValue = BufferSerializerReader_GetFastBufferWriter_m30FFADCC5275C721D76C38F13E3ABBE05B42D0C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::SerializeValue(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerReader_SerializeValue_mB67AB0717B2A7598FC3B583D08D77107CBFD922B (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	{
		// m_Reader.ReadValueSafe(out s, oneByteChars);
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_0 = (&__this->___m_Reader_0);
		String_t** L_1 = ___s0;
		bool L_2 = ___oneByteChars1;
		FastBufferReader_ReadValueSafe_m1BDAD6796F266DD99CD57E73EB3474AE11389206(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerReader_SerializeValue_mB67AB0717B2A7598FC3B583D08D77107CBFD922B_AdjustorThunk (RuntimeObject* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	BufferSerializerReader_SerializeValue_mB67AB0717B2A7598FC3B583D08D77107CBFD922B(_thisAdjusted, ___s0, ___oneByteChars1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::SerializeValue(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerReader_SerializeValue_mEDE3FAA0A82B9674F8505155F1A7303561CE2778 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	{
		// m_Reader.ReadByteSafe(out value);
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_0 = (&__this->___m_Reader_0);
		uint8_t* L_1 = ___value0;
		FastBufferReader_ReadByteSafe_mC94572634D5F5E8D6BB4E75E8FC7E9210634F6B5_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerReader_SerializeValue_mEDE3FAA0A82B9674F8505155F1A7303561CE2778_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	BufferSerializerReader_SerializeValue_mEDE3FAA0A82B9674F8505155F1A7303561CE2778(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::PreCheck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerReader_PreCheck_m86874D09D145431D521D7CF25F50CA2101B47949 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// return m_Reader.TryBeginRead(amount);
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_0 = (&__this->___m_Reader_0);
		int32_t L_1 = ___amount0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginRead_mB3E311FECDB79255A5D3F909F36D5BB31EB6F463_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool BufferSerializerReader_PreCheck_m86874D09D145431D521D7CF25F50CA2101B47949_AdjustorThunk (RuntimeObject* __this, int32_t ___amount0, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	bool _returnValue;
	_returnValue = BufferSerializerReader_PreCheck_m86874D09D145431D521D7CF25F50CA2101B47949(_thisAdjusted, ___amount0, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::SerializeValuePreChecked(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerReader_SerializeValuePreChecked_m6E7B9754D6E21655CCDCAB95352DDBCD1887AD63 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	{
		// m_Reader.ReadValue(out s, oneByteChars);
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_0 = (&__this->___m_Reader_0);
		String_t** L_1 = ___s0;
		bool L_2 = ___oneByteChars1;
		FastBufferReader_ReadValue_m3F7A385F616E9C12BA94AB624809933D68BFBEB2(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerReader_SerializeValuePreChecked_m6E7B9754D6E21655CCDCAB95352DDBCD1887AD63_AdjustorThunk (RuntimeObject* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	BufferSerializerReader_SerializeValuePreChecked_m6E7B9754D6E21655CCDCAB95352DDBCD1887AD63(_thisAdjusted, ___s0, ___oneByteChars1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerReader::SerializeValuePreChecked(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerReader_SerializeValuePreChecked_mBBEA83319481F1B0956C78DDF1856C0226E81623 (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0BC6278DE63DB9413D2F07D37071687CAC0DFDE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Reader.ReadValue(out value);
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* L_0 = (&__this->___m_Reader_0);
		uint8_t* L_1 = ___value0;
		FastBufferReader_ReadValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0BC6278DE63DB9413D2F07D37071687CAC0DFDE_inline(L_0, L_1, FastBufferReader_ReadValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0BC6278DE63DB9413D2F07D37071687CAC0DFDE_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerReader_SerializeValuePreChecked_mBBEA83319481F1B0956C78DDF1856C0226E81623_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, const RuntimeMethod* method)
{
	BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3*>(__this + _offset);
	BufferSerializerReader_SerializeValuePreChecked_mBBEA83319481F1B0956C78DDF1856C0226E81623(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerWriter__ctor_m0CD31683DBAABFB3E66DC1F804B7088C2431FC1D (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___writer0, const RuntimeMethod* method) 
{
	{
		// m_Writer = writer;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_0 = ___writer0;
		__this->___m_Writer_0 = L_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerWriter__ctor_m0CD31683DBAABFB3E66DC1F804B7088C2431FC1D_AdjustorThunk (RuntimeObject* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___writer0, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	BufferSerializerWriter__ctor_m0CD31683DBAABFB3E66DC1F804B7088C2431FC1D_inline(_thisAdjusted, ___writer0, method);
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::get_IsReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerWriter_get_IsReader_m2EF5E5FF4BEDA76960E1F59DCABD5F77AAFFF912 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsReader => false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BufferSerializerWriter_get_IsReader_m2EF5E5FF4BEDA76960E1F59DCABD5F77AAFFF912_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	bool _returnValue;
	_returnValue = BufferSerializerWriter_get_IsReader_m2EF5E5FF4BEDA76960E1F59DCABD5F77AAFFF912(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::get_IsWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerWriter_get_IsWriter_m38F5218A543DB81A6D827AD5540EFF0C13FF3AF4 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsWriter => true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool BufferSerializerWriter_get_IsWriter_m38F5218A543DB81A6D827AD5540EFF0C13FF3AF4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	bool _returnValue;
	_returnValue = BufferSerializerWriter_get_IsWriter_m38F5218A543DB81A6D827AD5540EFF0C13FF3AF4(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Multiplayer.Tools.NetStats.FastBufferReader Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::GetFastBufferReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 BufferSerializerWriter_GetFastBufferReader_mF76A1576847E72C4EFDCD768A88D2727C6BB32A0 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, const RuntimeMethod* method) 
{
	{
		// throw new InvalidOperationException("Cannot retrieve a FastBufferReader from a serializer where IsReader = false");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4EF1F8AD1F98BFBCFB553F35E75432499368CB4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferSerializerWriter_GetFastBufferReader_mF76A1576847E72C4EFDCD768A88D2727C6BB32A0_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 BufferSerializerWriter_GetFastBufferReader_mF76A1576847E72C4EFDCD768A88D2727C6BB32A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 _returnValue;
	_returnValue = BufferSerializerWriter_GetFastBufferReader_mF76A1576847E72C4EFDCD768A88D2727C6BB32A0(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Multiplayer.Tools.NetStats.FastBufferWriter Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::GetFastBufferWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 BufferSerializerWriter_GetFastBufferWriter_m9C09F0BB23C63D8AF3FB16608DD64FF5B68C0FFE (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, const RuntimeMethod* method) 
{
	{
		// return m_Writer;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_0 = __this->___m_Writer_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 BufferSerializerWriter_GetFastBufferWriter_m9C09F0BB23C63D8AF3FB16608DD64FF5B68C0FFE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 _returnValue;
	_returnValue = BufferSerializerWriter_GetFastBufferWriter_m9C09F0BB23C63D8AF3FB16608DD64FF5B68C0FFE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::SerializeValue(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerWriter_SerializeValue_m8B42275C83C4DFDD74AD4D9EBD27D3BBFC2C40E9 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	{
		// m_Writer.WriteValueSafe(s, oneByteChars);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_0 = (&__this->___m_Writer_0);
		String_t** L_1 = ___s0;
		String_t* L_2 = *((String_t**)L_1);
		bool L_3 = ___oneByteChars1;
		FastBufferWriter_WriteValueSafe_m63E101F96EACCBC7F3C93A97B48CAA7ADC3194CE(L_0, L_2, L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerWriter_SerializeValue_m8B42275C83C4DFDD74AD4D9EBD27D3BBFC2C40E9_AdjustorThunk (RuntimeObject* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	BufferSerializerWriter_SerializeValue_m8B42275C83C4DFDD74AD4D9EBD27D3BBFC2C40E9(_thisAdjusted, ___s0, ___oneByteChars1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::SerializeValue(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerWriter_SerializeValue_mC75D819A080E047F9AFC20E181779BFF51E76F8B (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	{
		// m_Writer.WriteByteSafe(value);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_0 = (&__this->___m_Writer_0);
		uint8_t* L_1 = ___value0;
		int32_t L_2 = *((uint8_t*)L_1);
		FastBufferWriter_WriteByteSafe_m92532B2CFB3C830D32E689C7BCDF69CA1F4A4B5A_inline(L_0, (uint8_t)L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerWriter_SerializeValue_mC75D819A080E047F9AFC20E181779BFF51E76F8B_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	BufferSerializerWriter_SerializeValue_mC75D819A080E047F9AFC20E181779BFF51E76F8B(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::PreCheck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSerializerWriter_PreCheck_mAB0A58E97527A41AF65E4293C9535E6EEBFB220A (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// return m_Writer.TryBeginWrite(amount);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_0 = (&__this->___m_Writer_0);
		int32_t L_1 = ___amount0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWrite_m158CCEBA6A37B6DE886D87852316418706519ACB_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool BufferSerializerWriter_PreCheck_mAB0A58E97527A41AF65E4293C9535E6EEBFB220A_AdjustorThunk (RuntimeObject* __this, int32_t ___amount0, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	bool _returnValue;
	_returnValue = BufferSerializerWriter_PreCheck_mAB0A58E97527A41AF65E4293C9535E6EEBFB220A(_thisAdjusted, ___amount0, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::SerializeValuePreChecked(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerWriter_SerializeValuePreChecked_mEA4EA95F0B8C7CE72503C5F6FFB20643353BB325 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	{
		// m_Writer.WriteValue(s, oneByteChars);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_0 = (&__this->___m_Writer_0);
		String_t** L_1 = ___s0;
		String_t* L_2 = *((String_t**)L_1);
		bool L_3 = ___oneByteChars1;
		FastBufferWriter_WriteValue_m56E8FF72C33FF284F0ADDBA0A617914B996A18C4(L_0, L_2, L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerWriter_SerializeValuePreChecked_mEA4EA95F0B8C7CE72503C5F6FFB20643353BB325_AdjustorThunk (RuntimeObject* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	BufferSerializerWriter_SerializeValuePreChecked_mEA4EA95F0B8C7CE72503C5F6FFB20643353BB325(_thisAdjusted, ___s0, ___oneByteChars1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.BufferSerializerWriter::SerializeValuePreChecked(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSerializerWriter_SerializeValuePreChecked_m0167A6A62EED52C2BC2057659379C83DFADFF4C6 (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	{
		// m_Writer.WriteByte(value);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* L_0 = (&__this->___m_Writer_0);
		uint8_t* L_1 = ___value0;
		int32_t L_2 = *((uint8_t*)L_1);
		FastBufferWriter_WriteByte_m0239DB587E7BD675850DDF0A8DA326AB4059E37B_inline(L_0, (uint8_t)L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSerializerWriter_SerializeValuePreChecked_m0167A6A62EED52C2BC2057659379C83DFADFF4C6_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, const RuntimeMethod* method)
{
	BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231*>(__this + _offset);
	BufferSerializerWriter_SerializeValuePreChecked_m0167A6A62EED52C2BC2057659379C83DFADFF4C6(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Multiplayer.Tools.NetStats.ByteBool
IL2CPP_EXTERN_C void ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshal_pinvoke(const ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6& unmarshaled, ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshaled_pinvoke& marshaled)
{
	marshaled.___BoolValue_0 = static_cast<int32_t>(unmarshaled.___BoolValue_0);
	marshaled.___ByteValue_1 = unmarshaled.___ByteValue_1;
}
IL2CPP_EXTERN_C void ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshal_pinvoke_back(const ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshaled_pinvoke& marshaled, ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6& unmarshaled)
{
	bool unmarshaledBoolValue_temp_0 = false;
	unmarshaledBoolValue_temp_0 = static_cast<bool>(marshaled.___BoolValue_0);
	unmarshaled.___BoolValue_0 = unmarshaledBoolValue_temp_0;
	uint8_t unmarshaledByteValue_temp_1 = 0x0;
	unmarshaledByteValue_temp_1 = marshaled.___ByteValue_1;
	unmarshaled.___ByteValue_1 = unmarshaledByteValue_temp_1;
}
// Conversion method for clean up from marshalling of: Unity.Multiplayer.Tools.NetStats.ByteBool
IL2CPP_EXTERN_C void ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshal_pinvoke_cleanup(ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Multiplayer.Tools.NetStats.ByteBool
IL2CPP_EXTERN_C void ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshal_com(const ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6& unmarshaled, ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshaled_com& marshaled)
{
	marshaled.___BoolValue_0 = static_cast<int32_t>(unmarshaled.___BoolValue_0);
	marshaled.___ByteValue_1 = unmarshaled.___ByteValue_1;
}
IL2CPP_EXTERN_C void ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshal_com_back(const ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshaled_com& marshaled, ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6& unmarshaled)
{
	bool unmarshaledBoolValue_temp_0 = false;
	unmarshaledBoolValue_temp_0 = static_cast<bool>(marshaled.___BoolValue_0);
	unmarshaled.___BoolValue_0 = unmarshaledBoolValue_temp_0;
	uint8_t unmarshaledByteValue_temp_1 = 0x0;
	unmarshaledByteValue_temp_1 = marshaled.___ByteValue_1;
	unmarshaled.___ByteValue_1 = unmarshaledByteValue_temp_1;
}
// Conversion method for clean up from marshalling of: Unity.Multiplayer.Tools.NetStats.ByteBool
IL2CPP_EXTERN_C void ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshal_com_cleanup(ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6_marshaled_com& marshaled)
{
}
// System.Byte Unity.Multiplayer.Tools.NetStats.ByteBool::Collapse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ByteBool_Collapse_mA3BB415F4B65A3EBF1B51DD15A68C52040E7599E (ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// ByteValue = (byte)((
		//     // Collapse all bits to position 1 and reassign as bit
		//     (ByteValue >> 7) |
		//     (ByteValue >> 6) |
		//     (ByteValue >> 5) |
		//     (ByteValue >> 4) |
		//     (ByteValue >> 3) |
		//     (ByteValue >> 2) |
		//     (ByteValue >> 1) |
		//     ByteValue
		// ) & 1);
		uint8_t L_0 = __this->___ByteValue_1;
		uint8_t L_1 = __this->___ByteValue_1;
		uint8_t L_2 = __this->___ByteValue_1;
		uint8_t L_3 = __this->___ByteValue_1;
		uint8_t L_4 = __this->___ByteValue_1;
		uint8_t L_5 = __this->___ByteValue_1;
		uint8_t L_6 = __this->___ByteValue_1;
		uint8_t L_7 = __this->___ByteValue_1;
		int32_t L_8 = ((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_0>>7))|((int32_t)((int32_t)L_1>>6))))|((int32_t)((int32_t)L_2>>5))))|((int32_t)((int32_t)L_3>>4))))|((int32_t)((int32_t)L_4>>3))))|((int32_t)((int32_t)L_5>>2))))|((int32_t)((int32_t)L_6>>1))))|(int32_t)L_7))&1)));
		V_0 = (uint8_t)L_8;
		__this->___ByteValue_1 = (uint8_t)L_8;
		uint8_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  uint8_t ByteBool_Collapse_mA3BB415F4B65A3EBF1B51DD15A68C52040E7599E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = ByteBool_Collapse_mA3BB415F4B65A3EBF1B51DD15A68C52040E7599E(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte Unity.Multiplayer.Tools.NetStats.ByteBool::Collapse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ByteBool_Collapse_m1D058E90145E2EA901FB85E2BC77DCA97DDC30BC (ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6* __this, bool ___b0, const RuntimeMethod* method) 
{
	{
		// BoolValue = b;
		bool L_0 = ___b0;
		__this->___BoolValue_0 = L_0;
		// return Collapse();
		uint8_t L_1;
		L_1 = ByteBool_Collapse_mA3BB415F4B65A3EBF1B51DD15A68C52040E7599E(__this, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t ByteBool_Collapse_m1D058E90145E2EA901FB85E2BC77DCA97DDC30BC_AdjustorThunk (RuntimeObject* __this, bool ___b0, const RuntimeMethod* method)
{
	ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ByteBool_tC8FCA6E5D122C27B6ED84F137ECABA1084677FB6*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = ByteBool_Collapse_m1D058E90145E2EA901FB85E2BC77DCA97DDC30BC(_thisAdjusted, ___b0, method);
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
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Position_m9C85930A2FA1CE815E1417E0D474851197C9F2CE (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Position;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t FastBufferReader_get_Position_m9C85930A2FA1CE815E1417E0D474851197C9F2CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FastBufferReader_get_Position_m9C85930A2FA1CE815E1417E0D474851197C9F2CE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferReader::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Length;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Length_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::CommitBitwiseReads(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_CommitBitwiseReads_mEA2055113233892F4DE1136E18C534C506F4DC16 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// Handle->Position += amount;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t* L_1 = (&L_0->___Position_1);
		int32_t* L_2 = L_1;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___amount0;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_CommitBitwiseReads_mEA2055113233892F4DE1136E18C534C506F4DC16_AdjustorThunk (RuntimeObject* __this, int32_t ___amount0, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_CommitBitwiseReads_mEA2055113233892F4DE1136E18C534C506F4DC16_inline(_thisAdjusted, ___amount0, method);
}
// Unity.Multiplayer.Tools.NetStats.FastBufferReader/ReaderHandle* Unity.Multiplayer.Tools.NetStats.FastBufferReader::CreateHandle(System.Byte*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* FastBufferReader_CreateHandle_mA254B66E2846DB3621F65DBFB5345B42B98A3F38 (uint8_t* ___buffer0, int32_t ___length1, int32_t ___offset2, int32_t ___allocator3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* V_0 = NULL;
	{
		// ReaderHandle* readerHandle = null;
		V_0 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)((uintptr_t)0);
		// if (allocator == Allocator.None)
		int32_t L_0 = ___allocator3;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002c;
		}
	}
	{
		// readerHandle = (ReaderHandle*)UnsafeUtility.Malloc(sizeof(ReaderHandle) + length, UnsafeUtility.AlignOf<byte>(), Allocator.Temp);
		uint32_t L_1 = sizeof(ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8);
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_RuntimeMethod_var);
		void* L_4;
		L_4 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, L_2))), L_3, 2, NULL);
		V_0 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)L_4;
		// readerHandle->BufferPointer = buffer;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5 = V_0;
		uint8_t* L_6 = ___buffer0;
		NullCheck(L_5);
		L_5->___BufferPointer_0 = L_6;
		// readerHandle->Position = offset;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_7 = V_0;
		int32_t L_8 = ___offset2;
		NullCheck(L_7);
		L_7->___Position_1 = L_8;
		goto IL_0068;
	}

IL_002c:
	{
		// readerHandle = (ReaderHandle*)UnsafeUtility.Malloc(sizeof(ReaderHandle) + length, UnsafeUtility.AlignOf<byte>(), allocator);
		uint32_t L_9 = sizeof(ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8);
		int32_t L_10 = ___length1;
		int32_t L_11;
		L_11 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_RuntimeMethod_var);
		int32_t L_12 = ___allocator3;
		void* L_13;
		L_13 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, L_10))), L_11, L_12, NULL);
		V_0 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)L_13;
		// UnsafeUtility.MemCpy(readerHandle + 1, buffer + offset, length);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_14 = V_0;
		uint32_t L_15 = sizeof(ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8);
		uint8_t* L_16 = ___buffer0;
		int32_t L_17 = ___offset2;
		int32_t L_18 = ___length1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)il2cpp_codegen_add((intptr_t)L_14, (int32_t)L_15)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, L_17)), ((int64_t)L_18), NULL);
		// readerHandle->BufferPointer = (byte*)(readerHandle + 1);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_19 = V_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_20 = V_0;
		uint32_t L_21 = sizeof(ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8);
		NullCheck(L_19);
		L_19->___BufferPointer_0 = (uint8_t*)((ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)il2cpp_codegen_add((intptr_t)L_20, (int32_t)L_21));
		// readerHandle->Position = 0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_22 = V_0;
		NullCheck(L_22);
		L_22->___Position_1 = 0;
	}

IL_0068:
	{
		// readerHandle->Length = length;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_23 = V_0;
		int32_t L_24 = ___length1;
		NullCheck(L_23);
		L_23->___Length_2 = L_24;
		// readerHandle->Allocator = allocator;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_25 = V_0;
		int32_t L_26 = ___allocator3;
		NullCheck(L_25);
		L_25->___Allocator_3 = L_26;
		// return readerHandle;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_27 = V_0;
		return L_27;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(Unity.Collections.NativeArray`1<System.Byte>,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_m34E9181E01E74707AE514D45906E3FA45200E81E (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	void* G_B2_1 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	void* G_B1_1 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	void* G_B3_2 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B3_3 = NULL;
	{
		// Handle = CreateHandle((byte*)buffer.GetUnsafePtr(), Math.Max(1, length == -1 ? buffer.Length : length), offset, allocator);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___buffer0;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_0, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		int32_t L_2 = ___length2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = __this;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_000f;
		}
	}
	{
		int32_t L_3 = ___length2;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0016;
	}

IL_000f:
	{
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(G_B3_1, G_B3_0, NULL);
		int32_t L_6 = ___offset3;
		int32_t L_7 = ___allocator1;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_8;
		L_8 = FastBufferReader_CreateHandle_mA254B66E2846DB3621F65DBFB5345B42B98A3F38((uint8_t*)G_B3_2, L_5, L_6, L_7, NULL);
		G_B3_3->___Handle_0 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader__ctor_m34E9181E01E74707AE514D45906E3FA45200E81E_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader__ctor_m34E9181E01E74707AE514D45906E3FA45200E81E(_thisAdjusted, ___buffer0, ___allocator1, ___length2, ___offset3, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(System.ArraySegment`1<System.Byte>,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_m7384BAF2956CC2A6D0F437C0F64709D90CFB213B (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t G_B8_0 = 0;
	uint8_t* G_B8_1 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	uint8_t* G_B7_1 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	uint8_t* G_B9_2 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B9_3 = NULL;
	{
		// if (allocator == Allocator.None)
		int32_t L_0 = ___allocator1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// throw new NotSupportedException("Allocator.None cannot be used with managed source buffers.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A9FB7CDBEE797FBDB72473FE967CE7BB7C5E784)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader__ctor_m7384BAF2956CC2A6D0F437C0F64709D90CFB213B_RuntimeMethod_var)));
	}

IL_000f:
	{
		// fixed (byte* data = buffer.Array)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___buffer0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0024;
		}
	}

IL_001f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_002d;
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_002d:
	{
		// Handle = CreateHandle(data, Math.Max(1, length == -1 ? buffer.Count : length), offset, allocator);
		uint8_t* L_6 = V_0;
		int32_t L_7 = ___length2;
		G_B7_0 = 1;
		G_B7_1 = L_6;
		G_B7_2 = __this;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			G_B8_0 = 1;
			G_B8_1 = L_6;
			G_B8_2 = __this;
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = ___length2;
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_003e;
	}

IL_0037:
	{
		int32_t L_9;
		L_9 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___buffer0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(G_B9_1, G_B9_0, NULL);
		int32_t L_11 = ___offset3;
		int32_t L_12 = ___allocator1;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_13;
		L_13 = FastBufferReader_CreateHandle_mA254B66E2846DB3621F65DBFB5345B42B98A3F38(G_B9_2, L_10, L_11, L_12, NULL);
		G_B9_3->___Handle_0 = L_13;
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader__ctor_m7384BAF2956CC2A6D0F437C0F64709D90CFB213B_AdjustorThunk (RuntimeObject* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader__ctor_m7384BAF2956CC2A6D0F437C0F64709D90CFB213B(_thisAdjusted, ___buffer0, ___allocator1, ___length2, ___offset3, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(System.Byte[],Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_m794A8F85421B9E0F90CC795CD3F2157269315549 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t G_B8_0 = 0;
	uint8_t* G_B8_1 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	uint8_t* G_B7_1 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	uint8_t* G_B9_2 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B9_3 = NULL;
	{
		// if (allocator == Allocator.None)
		int32_t L_0 = ___allocator1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// throw new NotSupportedException("Allocator.None cannot be used with managed source buffers.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A9FB7CDBEE797FBDB72473FE967CE7BB7C5E784)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader__ctor_m794A8F85421B9E0F90CC795CD3F2157269315549_RuntimeMethod_var)));
	}

IL_000f:
	{
		// fixed (byte* data = buffer)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0027;
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0027:
	{
		// Handle = CreateHandle(data, Math.Max(1, length == -1 ? buffer.Length : length), offset, allocator);
		uint8_t* L_6 = V_0;
		int32_t L_7 = ___length2;
		G_B7_0 = 1;
		G_B7_1 = L_6;
		G_B7_2 = __this;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			G_B8_0 = 1;
			G_B8_1 = L_6;
			G_B8_2 = __this;
			goto IL_0031;
		}
	}
	{
		int32_t L_8 = ___length2;
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0034;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer0;
		NullCheck(L_9);
		G_B9_0 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0034:
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(G_B9_1, G_B9_0, NULL);
		int32_t L_11 = ___offset3;
		int32_t L_12 = ___allocator1;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_13;
		L_13 = FastBufferReader_CreateHandle_mA254B66E2846DB3621F65DBFB5345B42B98A3F38(G_B9_2, L_10, L_11, L_12, NULL);
		G_B9_3->___Handle_0 = L_13;
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader__ctor_m794A8F85421B9E0F90CC795CD3F2157269315549_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader__ctor_m794A8F85421B9E0F90CC795CD3F2157269315549(_thisAdjusted, ___buffer0, ___allocator1, ___length2, ___offset3, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(System.Byte*,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_mCFD113C518AD0AEC2CC3B823BA92E92A0C9F5923 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Handle = CreateHandle(buffer, Math.Max(1, length), offset, allocator);
		uint8_t* L_0 = ___buffer0;
		int32_t L_1 = ___length2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, L_1, NULL);
		int32_t L_3 = ___offset3;
		int32_t L_4 = ___allocator1;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5;
		L_5 = FastBufferReader_CreateHandle_mA254B66E2846DB3621F65DBFB5345B42B98A3F38(L_0, L_2, L_3, L_4, NULL);
		__this->___Handle_0 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader__ctor_mCFD113C518AD0AEC2CC3B823BA92E92A0C9F5923_AdjustorThunk (RuntimeObject* __this, uint8_t* ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader__ctor_mCFD113C518AD0AEC2CC3B823BA92E92A0C9F5923(_thisAdjusted, ___buffer0, ___allocator1, ___length2, ___offset3, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::.ctor(Unity.Multiplayer.Tools.NetStats.FastBufferWriter,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_m4787085ACF6F404843B8B09112E1ED3CB35B8C2B (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___writer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	uint8_t* G_B2_1 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	uint8_t* G_B1_1 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	uint8_t* G_B3_2 = NULL;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B3_3 = NULL;
	{
		// Handle = CreateHandle(writer.GetUnsafePtr(), Math.Max(1, length == -1 ? writer.Length : length), offset, allocator);
		uint8_t* L_0;
		L_0 = FastBufferWriter_GetUnsafePtr_m2D3D526A108E7354E6C44A09D93B78D4F2143F29_inline((&___writer0), NULL);
		int32_t L_1 = ___length2;
		G_B1_0 = 1;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			G_B2_0 = 1;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ___length2;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0017;
	}

IL_0010:
	{
		int32_t L_3;
		L_3 = FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline((&___writer0), NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(G_B3_1, G_B3_0, NULL);
		int32_t L_5 = ___offset3;
		int32_t L_6 = ___allocator1;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_7;
		L_7 = FastBufferReader_CreateHandle_mA254B66E2846DB3621F65DBFB5345B42B98A3F38(G_B3_2, L_4, L_5, L_6, NULL);
		G_B3_3->___Handle_0 = L_7;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader__ctor_m4787085ACF6F404843B8B09112E1ED3CB35B8C2B_AdjustorThunk (RuntimeObject* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___writer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader__ctor_m4787085ACF6F404843B8B09112E1ED3CB35B8C2B(_thisAdjusted, ___writer0, ___allocator1, ___length2, ___offset3, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_Dispose_m82049282D1EF68CE4C5F4FC795AAF102A893B2E5 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// UnsafeUtility.Free(Handle, Handle->Allocator);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_1 = __this->___Handle_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Allocator_3;
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1((void*)L_0, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_Dispose_m82049282D1EF68CE4C5F4FC795AAF102A893B2E5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_Dispose_m82049282D1EF68CE4C5F4FC795AAF102A893B2E5(_thisAdjusted, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::Seek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_Seek_m4DEE404782D32248B14E4231AEC630B26C429C5D (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___where0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Handle->Position = Math.Min(Length, where);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		int32_t L_1;
		L_1 = FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_inline(__this, NULL);
		int32_t L_2 = ___where0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_1, L_2, NULL);
		NullCheck(L_0);
		L_0->___Position_1 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_Seek_m4DEE404782D32248B14E4231AEC630B26C429C5D_AdjustorThunk (RuntimeObject* __this, int32_t ___where0, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_Seek_m4DEE404782D32248B14E4231AEC630B26C429C5D_inline(_thisAdjusted, ___where0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::MarkBytesRead(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_MarkBytesRead_m271CEEF11D50AAFB36C337CC7CFCACDF14515DBE (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// Handle->Position += amount;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t* L_1 = (&L_0->___Position_1);
		int32_t* L_2 = L_1;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___amount0;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_MarkBytesRead_m271CEEF11D50AAFB36C337CC7CFCACDF14515DBE_AdjustorThunk (RuntimeObject* __this, int32_t ___amount0, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_MarkBytesRead_m271CEEF11D50AAFB36C337CC7CFCACDF14515DBE_inline(_thisAdjusted, ___amount0, method);
}
// Unity.Multiplayer.Tools.NetStats.BitReader Unity.Multiplayer.Tools.NetStats.FastBufferReader::EnterBitwiseContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528 FastBufferReader_EnterBitwiseContext_m0493A426747EDD7C64E616C63984B48FDE92D8B8 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// return new BitReader(this);
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 L_0 = (*(FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*)__this);
		BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528 L_1;
		memset((&L_1), 0, sizeof(L_1));
		BitReader__ctor_mBC75366132C6EF96FE8F26DDB114D25016263024((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528 FastBufferReader_EnterBitwiseContext_m0493A426747EDD7C64E616C63984B48FDE92D8B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528 _returnValue;
	_returnValue = FastBufferReader_EnterBitwiseContext_m0493A426747EDD7C64E616C63984B48FDE92D8B8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.FastBufferReader::TryBeginRead(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginRead_mB3E311FECDB79255A5D3F909F36D5BB31EB6F463 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Length_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool FastBufferReader_TryBeginRead_mB3E311FECDB79255A5D3F909F36D5BB31EB6F463_AdjustorThunk (RuntimeObject* __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	bool _returnValue;
	_returnValue = FastBufferReader_TryBeginRead_mB3E311FECDB79255A5D3F909F36D5BB31EB6F463_inline(_thisAdjusted, ___bytes0, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.FastBufferReader::TryBeginReadInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Length_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_AdjustorThunk (RuntimeObject* __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	bool _returnValue;
	_returnValue = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(_thisAdjusted, ___bytes0, method);
	return _returnValue;
}
// System.Byte[] Unity.Multiplayer.Tools.NetStats.FastBufferReader::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferReader_ToArray_m8AF64B439AC29DDAC04B3623C5344153C9385657 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	{
		// byte[] ret = new byte[Length];
		int32_t L_0;
		L_0 = FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		// fixed (byte* b = ret)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		G_B2_0 = G_B1_0;
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0015:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		goto IL_0023;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		// UnsafeUtility.MemCpy(b, Handle->BufferPointer, Length);
		uint8_t* L_6 = V_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___BufferPointer_0;
		int32_t L_9;
		L_9 = FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_inline(__this, NULL);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_6, (void*)L_8, ((int64_t)L_9), NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// return ret;
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferReader_ToArray_m8AF64B439AC29DDAC04B3623C5344153C9385657_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = FastBufferReader_ToArray_m8AF64B439AC29DDAC04B3623C5344153C9385657_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferReader::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* FastBufferReader_GetUnsafePtr_m62FF03D70832C45ACEDB0716218012AABFC86FE3 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// return Handle->BufferPointer;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t* FastBufferReader_GetUnsafePtr_m62FF03D70832C45ACEDB0716218012AABFC86FE3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = FastBufferReader_GetUnsafePtr_m62FF03D70832C45ACEDB0716218012AABFC86FE3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferReader::GetUnsafePtrAtCurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* FastBufferReader_GetUnsafePtrAtCurrentPosition_m39F8D3FA67EDE2FDD2294D2D23854ADE372A6D8C (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// return Handle->BufferPointer + Handle->Position;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3));
	}
}
IL2CPP_EXTERN_C  uint8_t* FastBufferReader_GetUnsafePtrAtCurrentPosition_m39F8D3FA67EDE2FDD2294D2D23854ADE372A6D8C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = FastBufferReader_GetUnsafePtrAtCurrentPosition_m39F8D3FA67EDE2FDD2294D2D23854ADE372A6D8C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValue(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_m3F7A385F616E9C12BA94AB624809933D68BFBEB2 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	{
		// ReadValue(out uint length);
		FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_inline(__this, (&V_0), FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_RuntimeMethod_var);
		// s = "".PadRight((int)length);
		String_t** L_0 = ___s0;
		uint32_t L_1 = V_0;
		NullCheck(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		String_t* L_2;
		L_2 = String_PadRight_m858B267AC6B805603C6763ED58755DB2F16747CB(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_1, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		// int target = s.Length;
		String_t** L_3 = ___s0;
		String_t* L_4 = *((String_t**)L_3);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_1 = L_5;
		String_t** L_6 = ___s0;
		String_t* L_7 = *((String_t**)L_6);
		V_3 = L_7;
		// fixed (char* native = s)
		String_t* L_8 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_8);
		Il2CppChar* L_9 = V_2;
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		Il2CppChar* L_10 = V_2;
		int32_t L_11;
		L_11 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, L_11));
	}

IL_002e:
	{
		// if (oneByteChars)
		bool L_12 = ___oneByteChars1;
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		// for (int i = 0; i < target; ++i)
		V_4 = 0;
		goto IL_004e;
	}

IL_0036:
	{
		// ReadByte(out byte b);
		FastBufferReader_ReadByte_m27055993CE47BB6F1206F1E7EFA9117E5EEB430F_inline(__this, (&V_5), NULL);
		// native[i] = (char)b;
		Il2CppChar* L_13 = V_2;
		int32_t L_14 = V_4;
		uint8_t L_15 = V_5;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), 2))))) = (int16_t)L_15;
		// for (int i = 0; i < target; ++i)
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004e:
	{
		// for (int i = 0; i < target; ++i)
		int32_t L_17 = V_4;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0060;
	}

IL_0055:
	{
		// ReadBytes((byte*)native, target * sizeof(char));
		Il2CppChar* L_19 = V_2;
		int32_t L_20 = V_1;
		FastBufferReader_ReadBytes_m7683AEA236C498E487E6F7703A8D7BDF1A13DBF4_inline(__this, (uint8_t*)L_19, ((int32_t)il2cpp_codegen_multiply(L_20, 2)), 0, NULL);
	}

IL_0060:
	{
		V_3 = (String_t*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_ReadValue_m3F7A385F616E9C12BA94AB624809933D68BFBEB2_AdjustorThunk (RuntimeObject* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_ReadValue_m3F7A385F616E9C12BA94AB624809933D68BFBEB2(_thisAdjusted, ___s0, ___oneByteChars1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadValueSafe(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_m1BDAD6796F266DD99CD57E73EB3474AE11389206 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	uint32_t G_B4_0 = 0;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B4_1 = NULL;
	uint32_t G_B3_0 = 0;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	uint32_t G_B5_1 = 0;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* G_B5_2 = NULL;
	{
		// if (!TryBeginReadInternal(sizeof(uint)))
		bool L_0;
		L_0 = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(__this, 4, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_1 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_m1BDAD6796F266DD99CD57E73EB3474AE11389206_RuntimeMethod_var)));
	}

IL_0014:
	{
		// ReadValue(out uint length);
		FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_inline(__this, (&V_0), FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_RuntimeMethod_var);
		// if (!TryBeginReadInternal((int)length * (oneByteChars ? 1 : sizeof(char))))
		uint32_t L_2 = V_0;
		bool L_3 = ___oneByteChars1;
		G_B3_0 = L_2;
		G_B3_1 = __this;
		if (L_3)
		{
			G_B4_0 = L_2;
			G_B4_1 = __this;
			goto IL_0024;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0025:
	{
		bool L_4;
		L_4 = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(G_B5_2, ((int32_t)il2cpp_codegen_multiply((int32_t)G_B5_1, G_B5_0)), NULL);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_5 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_m1BDAD6796F266DD99CD57E73EB3474AE11389206_RuntimeMethod_var)));
	}

IL_0038:
	{
		// s = "".PadRight((int)length);
		String_t** L_6 = ___s0;
		uint32_t L_7 = V_0;
		NullCheck(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		String_t* L_8;
		L_8 = String_PadRight_m858B267AC6B805603C6763ED58755DB2F16747CB(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		// int target = s.Length;
		String_t** L_9 = ___s0;
		String_t* L_10 = *((String_t**)L_9);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		V_1 = L_11;
		String_t** L_12 = ___s0;
		String_t* L_13 = *((String_t**)L_12);
		V_3 = L_13;
		// fixed (char* native = s)
		String_t* L_14 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_14);
		Il2CppChar* L_15 = V_2;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		Il2CppChar* L_16 = V_2;
		int32_t L_17;
		L_17 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_16, L_17));
	}

IL_005e:
	{
		// if (oneByteChars)
		bool L_18 = ___oneByteChars1;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		// for (int i = 0; i < target; ++i)
		V_4 = 0;
		goto IL_007e;
	}

IL_0066:
	{
		// ReadByte(out byte b);
		FastBufferReader_ReadByte_m27055993CE47BB6F1206F1E7EFA9117E5EEB430F_inline(__this, (&V_5), NULL);
		// native[i] = (char)b;
		Il2CppChar* L_19 = V_2;
		int32_t L_20 = V_4;
		uint8_t L_21 = V_5;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 2))))) = (int16_t)L_21;
		// for (int i = 0; i < target; ++i)
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007e:
	{
		// for (int i = 0; i < target; ++i)
		int32_t L_23 = V_4;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_0090;
	}

IL_0085:
	{
		// ReadBytes((byte*)native, target * sizeof(char));
		Il2CppChar* L_25 = V_2;
		int32_t L_26 = V_1;
		FastBufferReader_ReadBytes_m7683AEA236C498E487E6F7703A8D7BDF1A13DBF4_inline(__this, (uint8_t*)L_25, ((int32_t)il2cpp_codegen_multiply(L_26, 2)), 0, NULL);
	}

IL_0090:
	{
		V_3 = (String_t*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_ReadValueSafe_m1BDAD6796F266DD99CD57E73EB3474AE11389206_AdjustorThunk (RuntimeObject* __this, String_t** ___s0, bool ___oneByteChars1, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_ReadValueSafe_m1BDAD6796F266DD99CD57E73EB3474AE11389206(_thisAdjusted, ___s0, ___oneByteChars1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadByte(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadByte_m27055993CE47BB6F1206F1E7EFA9117E5EEB430F (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// value = Handle->BufferPointer[Handle->Position++];
		uint8_t* L_0 = ___value0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_1 = __this->___Handle_0;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___Position_1);
		int32_t* L_5 = L_4;
		int32_t L_6 = *((int32_t*)L_5);
		V_0 = L_6;
		int32_t L_7 = V_0;
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_8)));
		*((int8_t*)L_0) = (int8_t)L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_ReadByte_m27055993CE47BB6F1206F1E7EFA9117E5EEB430F_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_ReadByte_m27055993CE47BB6F1206F1E7EFA9117E5EEB430F_inline(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadByteSafe(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadByteSafe_mC94572634D5F5E8D6BB4E75E8FC7E9210634F6B5 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!TryBeginReadInternal(1))
		bool L_0;
		L_0 = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(__this, 1, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_1 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadByteSafe_mC94572634D5F5E8D6BB4E75E8FC7E9210634F6B5_RuntimeMethod_var)));
	}

IL_0014:
	{
		// value = Handle->BufferPointer[Handle->Position++];
		uint8_t* L_2 = ___value0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___Position_1);
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		V_0 = L_8;
		int32_t L_9 = V_0;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_0;
		int32_t L_11 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_10)));
		*((int8_t*)L_2) = (int8_t)L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_ReadByteSafe_mC94572634D5F5E8D6BB4E75E8FC7E9210634F6B5_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_ReadByteSafe_mC94572634D5F5E8D6BB4E75E8FC7E9210634F6B5_inline(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadBytes(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytes_m7683AEA236C498E487E6F7703A8D7BDF1A13DBF4 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// UnsafeUtility.MemCpy(value + offset, (Handle->BufferPointer + Handle->Position), size);
		uint8_t* L_0 = ___value0;
		int32_t L_1 = ___offset2;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position_1;
		int32_t L_6 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_5)), ((int64_t)L_6), NULL);
		// Handle->Position += size;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___Position_1);
		int32_t* L_9 = L_8;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___size1;
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_ReadBytes_m7683AEA236C498E487E6F7703A8D7BDF1A13DBF4_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_ReadBytes_m7683AEA236C498E487E6F7703A8D7BDF1A13DBF4_inline(_thisAdjusted, ___value0, ___size1, ___offset2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadBytesSafe(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// if (!TryBeginReadInternal(size))
		int32_t L_0 = ___size1;
		bool L_1;
		L_1 = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116_RuntimeMethod_var)));
	}

IL_0014:
	{
		// UnsafeUtility.MemCpy(value + offset, (Handle->BufferPointer + Handle->Position), size);
		uint8_t* L_3 = ___value0;
		int32_t L_4 = ___offset2;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Position_1;
		int32_t L_9 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_8)), ((int64_t)L_9), NULL);
		// Handle->Position += size;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___Position_1);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___size1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116_inline(_thisAdjusted, ___value0, ___size1, ___offset2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadBytes(System.Byte[]&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytes_m9088798D7BD8D906C4E85FC38A106AE341FFC332 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// fixed (byte* ptr = value)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0010;
		}
	}

IL_000b:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0019;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0019:
	{
		// ReadBytes(ptr, size, offset);
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___size1;
		int32_t L_7 = ___offset2;
		FastBufferReader_ReadBytes_m7683AEA236C498E487E6F7703A8D7BDF1A13DBF4_inline(__this, L_5, L_6, L_7, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_ReadBytes_m9088798D7BD8D906C4E85FC38A106AE341FFC332_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_ReadBytes_m9088798D7BD8D906C4E85FC38A106AE341FFC332_inline(_thisAdjusted, ___value0, ___size1, ___offset2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferReader::ReadBytesSafe(System.Byte[]&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_mCFA7382E44FFE31883428800EDA38DC7F9B31213 (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// fixed (byte* ptr = value)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0010;
		}
	}

IL_000b:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0019;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0019:
	{
		// ReadBytesSafe(ptr, size, offset);
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___size1;
		int32_t L_7 = ___offset2;
		FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116_inline(__this, L_5, L_6, L_7, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferReader_ReadBytesSafe_mCFA7382E44FFE31883428800EDA38DC7F9B31213_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141*>(__this + _offset);
	FastBufferReader_ReadBytesSafe_mCFA7382E44FFE31883428800EDA38DC7F9B31213_inline(_thisAdjusted, ___value0, ___size1, ___offset2, method);
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
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_mB1BD6EB7F075F23A3A4C31CD0C99B1C2DCF75A15 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Position;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t FastBufferWriter_get_Position_mB1BD6EB7F075F23A3A4C31CD0C99B1C2DCF75A15_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FastBufferWriter_get_Position_mB1BD6EB7F075F23A3A4C31CD0C99B1C2DCF75A15_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Capacity_mB5749CA366D0A9C7A3B61D9E3EA6C5A4028D8165 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Capacity;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Capacity_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t FastBufferWriter_get_Capacity_mB5749CA366D0A9C7A3B61D9E3EA6C5A4028D8165_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FastBufferWriter_get_Capacity_mB5749CA366D0A9C7A3B61D9E3EA6C5A4028D8165_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::get_MaxCapacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_MaxCapacity_mFC5FB431F011E41EC7D0FC130844100F56889E0A (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->MaxCapacity;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___MaxCapacity_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t FastBufferWriter_get_MaxCapacity_mFC5FB431F011E41EC7D0FC130844100F56889E0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FastBufferWriter_get_MaxCapacity_mFC5FB431F011E41EC7D0FC130844100F56889E0A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Position > Handle->Length ? Handle->Position : Handle->Length;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Length_2;
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Length_2;
		return L_5;
	}

IL_0024:
	{
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_6 = __this->___Handle_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Position_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::CommitBitwiseWrites(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_CommitBitwiseWrites_m1311C2B1584E87D68403CC6B891410BD5A069BE5 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// Handle->Position += amount;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t* L_1 = (&L_0->___Position_1);
		int32_t* L_2 = L_1;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___amount0;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_CommitBitwiseWrites_m1311C2B1584E87D68403CC6B891410BD5A069BE5_AdjustorThunk (RuntimeObject* __this, int32_t ___amount0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_CommitBitwiseWrites_m1311C2B1584E87D68403CC6B891410BD5A069BE5_inline(_thisAdjusted, ___amount0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::.ctor(System.Int32,Unity.Collections.Allocator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter__ctor_mF40FDD7B93F9494DB7F24E60461CCA03CE3884B8 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___size0, int32_t ___allocator1, int32_t ___maxSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisWriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_m801EDCE72D34DD77B45401A96A2625CD7CD1ED24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* G_B2_0 = NULL;
	WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* G_B3_1 = NULL;
	{
		// Handle = (WriterHandle*)UnsafeUtility.Malloc(sizeof(WriterHandle) + size, UnsafeUtility.AlignOf<WriterHandle>(), allocator);
		uint32_t L_0 = sizeof(WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D);
		int32_t L_1 = ___size0;
		int32_t L_2;
		L_2 = UnsafeUtility_AlignOf_TisWriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_m801EDCE72D34DD77B45401A96A2625CD7CD1ED24(UnsafeUtility_AlignOf_TisWriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_m801EDCE72D34DD77B45401A96A2625CD7CD1ED24_RuntimeMethod_var);
		int32_t L_3 = ___allocator1;
		void* L_4;
		L_4 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, L_1))), L_2, L_3, NULL);
		__this->___Handle_0 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)L_4;
		// Handle->BufferPointer = (byte*)(Handle + 1);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = __this->___Handle_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_6 = __this->___Handle_0;
		uint32_t L_7 = sizeof(WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D);
		NullCheck(L_5);
		L_5->___BufferPointer_0 = (uint8_t*)((WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7));
		// Handle->Position = 0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_8 = __this->___Handle_0;
		NullCheck(L_8);
		L_8->___Position_1 = 0;
		// Handle->Length = 0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_9 = __this->___Handle_0;
		NullCheck(L_9);
		L_9->___Length_2 = 0;
		// Handle->Capacity = size;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_10 = __this->___Handle_0;
		int32_t L_11 = ___size0;
		NullCheck(L_10);
		L_10->___Capacity_3 = L_11;
		// Handle->Allocator = allocator;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = __this->___Handle_0;
		int32_t L_13 = ___allocator1;
		NullCheck(L_12);
		L_12->___Allocator_5 = L_13;
		// Handle->MaxCapacity = maxSize < size ? size : maxSize;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_14 = __this->___Handle_0;
		int32_t L_15 = ___maxSize2;
		int32_t L_16 = ___size0;
		G_B1_0 = L_14;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			G_B2_0 = L_14;
			goto IL_006f;
		}
	}
	{
		int32_t L_17 = ___maxSize2;
		G_B3_0 = L_17;
		G_B3_1 = G_B1_0;
		goto IL_0070;
	}

IL_006f:
	{
		int32_t L_18 = ___size0;
		G_B3_0 = L_18;
		G_B3_1 = G_B2_0;
	}

IL_0070:
	{
		NullCheck(G_B3_1);
		G_B3_1->___MaxCapacity_4 = G_B3_0;
		// Handle->BufferGrew = false;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_19 = __this->___Handle_0;
		NullCheck(L_19);
		L_19->___BufferGrew_6 = (bool)0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter__ctor_mF40FDD7B93F9494DB7F24E60461CCA03CE3884B8_AdjustorThunk (RuntimeObject* __this, int32_t ___size0, int32_t ___allocator1, int32_t ___maxSize2, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter__ctor_mF40FDD7B93F9494DB7F24E60461CCA03CE3884B8(_thisAdjusted, ___size0, ___allocator1, ___maxSize2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Dispose_m18862008413C02EBE36C36EA473E41B0171D7ADF (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// if (Handle->BufferGrew)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		bool L_1 = L_0->___BufferGrew_6;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// UnsafeUtility.Free(Handle->BufferPointer, Handle->Allocator);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Allocator_5;
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1((void*)L_3, L_5, NULL);
	}

IL_0028:
	{
		// UnsafeUtility.Free(Handle, Handle->Allocator);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_6 = __this->___Handle_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Allocator_5;
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1((void*)L_6, L_8, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_Dispose_m18862008413C02EBE36C36EA473E41B0171D7ADF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_Dispose_m18862008413C02EBE36C36EA473E41B0171D7ADF(_thisAdjusted, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::Seek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_m4F347F70AF2595629090A859987E55191A3A6ADD (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___where0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// where = Math.Min(where, Handle->Capacity);
		int32_t L_0 = ___where0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_1 = __this->___Handle_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Capacity_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, L_2, NULL);
		___where0 = L_3;
		// if (Handle->Position > Handle->Length && where < Handle->Position)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position_1;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_6 = __this->___Handle_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Length_2;
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_8 = ___where0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_9 = __this->___Handle_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Position_1;
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_004f;
		}
	}
	{
		// Handle->Length = Handle->Position;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_11 = __this->___Handle_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Position_1;
		NullCheck(L_11);
		L_11->___Length_2 = L_13;
	}

IL_004f:
	{
		// Handle->Position = where;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_14 = __this->___Handle_0;
		int32_t L_15 = ___where0;
		NullCheck(L_14);
		L_14->___Position_1 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_Seek_m4F347F70AF2595629090A859987E55191A3A6ADD_AdjustorThunk (RuntimeObject* __this, int32_t ___where0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_Seek_m4F347F70AF2595629090A859987E55191A3A6ADD_inline(_thisAdjusted, ___where0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::Truncate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Truncate_m5562272150A562BEA331A532B2FA4F05EBA55512 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___where0, const RuntimeMethod* method) 
{
	{
		// if (where == -1)
		int32_t L_0 = ___where0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000c;
		}
	}
	{
		// where = Position;
		int32_t L_1;
		L_1 = FastBufferWriter_get_Position_mB1BD6EB7F075F23A3A4C31CD0C99B1C2DCF75A15_inline(__this, NULL);
		___where0 = L_1;
	}

IL_000c:
	{
		// if (Handle->Position > where)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		int32_t L_4 = ___where0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		// Handle->Position = where;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = __this->___Handle_0;
		int32_t L_6 = ___where0;
		NullCheck(L_5);
		L_5->___Position_1 = L_6;
	}

IL_0026:
	{
		// if (Handle->Length > where)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Length_2;
		int32_t L_9 = ___where0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0040;
		}
	}
	{
		// Handle->Length = where;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_10 = __this->___Handle_0;
		int32_t L_11 = ___where0;
		NullCheck(L_10);
		L_10->___Length_2 = L_11;
	}

IL_0040:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_Truncate_m5562272150A562BEA331A532B2FA4F05EBA55512_AdjustorThunk (RuntimeObject* __this, int32_t ___where0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_Truncate_m5562272150A562BEA331A532B2FA4F05EBA55512_inline(_thisAdjusted, ___where0, method);
}
// Unity.Multiplayer.Tools.NetStats.BitWriter Unity.Multiplayer.Tools.NetStats.FastBufferWriter::EnterBitwiseContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C FastBufferWriter_EnterBitwiseContext_mE6688A98C1892645F33A457244928E066711CB2E (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// return new BitWriter(this);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_0 = (*(FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*)__this);
		BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C L_1;
		memset((&L_1), 0, sizeof(L_1));
		BitWriter__ctor_mA890D5ED1C145E432CB9010E905359896DB574F5((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C FastBufferWriter_EnterBitwiseContext_mE6688A98C1892645F33A457244928E066711CB2E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C _returnValue;
	_returnValue = FastBufferWriter_EnterBitwiseContext_mE6688A98C1892645F33A457244928E066711CB2E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_m51D828C37FF9C26B2E30C326807B6ECC470A2668 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___additionalSizeRequired0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	{
		// var desiredSize = Handle->Capacity * 2;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Capacity_3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_1, 2));
		goto IL_0014;
	}

IL_0010:
	{
		// desiredSize *= 2;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
	}

IL_0014:
	{
		// while (desiredSize < Position + additionalSizeRequired)
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = FastBufferWriter_get_Position_mB1BD6EB7F075F23A3A4C31CD0C99B1C2DCF75A15_inline(__this, NULL);
		int32_t L_5 = ___additionalSizeRequired0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5)))))
		{
			goto IL_0010;
		}
	}
	{
		// var newSize = Math.Min(desiredSize, Handle->MaxCapacity);
		int32_t L_6 = V_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___MaxCapacity_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_6, L_8, NULL);
		V_1 = L_9;
		// byte* newBuffer = (byte*)UnsafeUtility.Malloc(newSize, UnsafeUtility.AlignOf<byte>(), Handle->Allocator);
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_RuntimeMethod_var);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Allocator_5;
		void* L_14;
		L_14 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(((int64_t)L_10), L_11, L_13, NULL);
		V_2 = (uint8_t*)L_14;
		// UnsafeUtility.MemCpy(newBuffer, Handle->BufferPointer, Length);
		uint8_t* L_15 = V_2;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_16 = __this->___Handle_0;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___BufferPointer_0;
		int32_t L_18;
		L_18 = FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline(__this, NULL);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_15, (void*)L_17, ((int64_t)L_18), NULL);
		// if (Handle->BufferGrew)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_19 = __this->___Handle_0;
		NullCheck(L_19);
		bool L_20 = L_19->___BufferGrew_6;
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		// UnsafeUtility.Free(Handle->BufferPointer, Handle->Allocator);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_21 = __this->___Handle_0;
		NullCheck(L_21);
		uint8_t* L_22 = L_21->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_23 = __this->___Handle_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___Allocator_5;
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1((void*)L_22, L_24, NULL);
	}

IL_0089:
	{
		// Handle->BufferGrew = true;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_25 = __this->___Handle_0;
		NullCheck(L_25);
		L_25->___BufferGrew_6 = (bool)1;
		// Handle->BufferPointer = newBuffer;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_26 = __this->___Handle_0;
		uint8_t* L_27 = V_2;
		NullCheck(L_26);
		L_26->___BufferPointer_0 = L_27;
		// Handle->Capacity = newSize;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_28 = __this->___Handle_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		L_28->___Capacity_3 = L_29;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_Grow_m51D828C37FF9C26B2E30C326807B6ECC470A2668_AdjustorThunk (RuntimeObject* __this, int32_t ___additionalSizeRequired0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_Grow_m51D828C37FF9C26B2E30C326807B6ECC470A2668(_thisAdjusted, ___additionalSizeRequired0, method);
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.FastBufferWriter::TryBeginWrite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m158CCEBA6A37B6DE886D87852316418706519ACB (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		int32_t L_7 = ___bytes0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_8 = __this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity_3;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity_4;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_m51D828C37FF9C26B2E30C326807B6ECC470A2668(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool FastBufferWriter_TryBeginWrite_m158CCEBA6A37B6DE886D87852316418706519ACB_AdjustorThunk (RuntimeObject* __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	bool _returnValue;
	_returnValue = FastBufferWriter_TryBeginWrite_m158CCEBA6A37B6DE886D87852316418706519ACB_inline(_thisAdjusted, ___bytes0, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.FastBufferWriter::TryBeginWriteInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		int32_t L_7 = ___bytes0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_8 = __this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity_3;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity_4;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_m51D828C37FF9C26B2E30C326807B6ECC470A2668(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_AdjustorThunk (RuntimeObject* __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	bool _returnValue;
	_returnValue = FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline(_thisAdjusted, ___bytes0, method);
	return _returnValue;
}
// System.Byte[] Unity.Multiplayer.Tools.NetStats.FastBufferWriter::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferWriter_ToArray_m084B89D2993DC9EF88E6BDD7CD89428D2E3D00C4 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	{
		// byte[] ret = new byte[Length];
		int32_t L_0;
		L_0 = FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		// fixed (byte* b = ret)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		G_B2_0 = G_B1_0;
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0015:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		goto IL_0023;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		// UnsafeUtility.MemCpy(b, Handle->BufferPointer, Length);
		uint8_t* L_6 = V_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___BufferPointer_0;
		int32_t L_9;
		L_9 = FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline(__this, NULL);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_6, (void*)L_8, ((int64_t)L_9), NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// return ret;
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferWriter_ToArray_m084B89D2993DC9EF88E6BDD7CD89428D2E3D00C4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = FastBufferWriter_ToArray_m084B89D2993DC9EF88E6BDD7CD89428D2E3D00C4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_m2D3D526A108E7354E6C44A09D93B78D4F2143F29 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// return Handle->BufferPointer;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t* FastBufferWriter_GetUnsafePtr_m2D3D526A108E7354E6C44A09D93B78D4F2143F29_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = FastBufferWriter_GetUnsafePtr_m2D3D526A108E7354E6C44A09D93B78D4F2143F29_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte* Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetUnsafePtrAtCurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtrAtCurrentPosition_m3A7E9A92309FEDD721B8AA4C2500E44DEBC3AF1C (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// return Handle->BufferPointer + Handle->Position;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3));
	}
}
IL2CPP_EXTERN_C  uint8_t* FastBufferWriter_GetUnsafePtrAtCurrentPosition_m3A7E9A92309FEDD721B8AA4C2500E44DEBC3AF1C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = FastBufferWriter_GetUnsafePtrAtCurrentPosition_m3A7E9A92309FEDD721B8AA4C2500E44DEBC3AF1C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.FastBufferWriter::GetWriteSize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_m8BE2A1AFC6F68CE2E6B5DBAC53E7DC22817FA07B (String_t* ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	{
		// return sizeof(int) + s.Length * (oneByteChars ? sizeof(byte) : sizeof(char));
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		bool L_2 = ___oneByteChars1;
		G_B1_0 = L_1;
		G_B1_1 = 4;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = 4;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000e:
	{
		return ((int32_t)il2cpp_codegen_add(G_B3_2, ((int32_t)il2cpp_codegen_multiply(G_B3_1, G_B3_0))));
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_m56E8FF72C33FF284F0ADDBA0A617914B996A18C4 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, String_t* ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// WriteValue((uint)s.Length);
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_1 = L_1;
		FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_inline(__this, (&V_1), FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_RuntimeMethod_var);
		// int target = s.Length;
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = L_3;
		// if (oneByteChars)
		bool L_4 = ___oneByteChars1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// for (int i = 0; i < target; ++i)
		V_2 = 0;
		goto IL_002f;
	}

IL_001d:
	{
		// WriteByte((byte)s[i]);
		String_t* L_5 = ___s0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		FastBufferWriter_WriteByte_m0239DB587E7BD675850DDF0A8DA326AB4059E37B_inline(__this, (uint8_t)((int32_t)(uint8_t)L_7), NULL);
		// for (int i = 0; i < target; ++i)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < target; ++i)
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_0034:
	{
		// {
		String_t* L_11 = ___s0;
		V_4 = L_11;
		// fixed (char* native = s)
		String_t* L_12 = V_4;
		V_3 = (Il2CppChar*)((uintptr_t)L_12);
		Il2CppChar* L_13 = V_3;
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppChar* L_14 = V_3;
		int32_t L_15;
		L_15 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, L_15));
	}

IL_0046:
	{
		// WriteBytes((byte*)native, target * sizeof(char));
		Il2CppChar* L_16 = V_3;
		int32_t L_17 = V_0;
		FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline(__this, (uint8_t*)L_16, ((int32_t)il2cpp_codegen_multiply(L_17, 2)), 0, NULL);
		V_4 = (String_t*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_WriteValue_m56E8FF72C33FF284F0ADDBA0A617914B996A18C4_AdjustorThunk (RuntimeObject* __this, String_t* ___s0, bool ___oneByteChars1, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_WriteValue_m56E8FF72C33FF284F0ADDBA0A617914B996A18C4(_thisAdjusted, ___s0, ___oneByteChars1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteValueSafe(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_m63E101F96EACCBC7F3C93A97B48CAA7ADC3194CE (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, String_t* ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// int sizeInBytes = GetWriteSize(s, oneByteChars);
		String_t* L_0 = ___s0;
		bool L_1 = ___oneByteChars1;
		int32_t L_2;
		L_2 = FastBufferWriter_GetWriteSize_m8BE2A1AFC6F68CE2E6B5DBAC53E7DC22817FA07B_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (!TryBeginWriteInternal(sizeInBytes))
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_5 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_m63E101F96EACCBC7F3C93A97B48CAA7ADC3194CE_RuntimeMethod_var)));
	}

IL_001c:
	{
		// WriteValue((uint)s.Length);
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		V_2 = L_7;
		FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_inline(__this, (&V_2), FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_RuntimeMethod_var);
		// int target = s.Length;
		String_t* L_8 = ___s0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_1 = L_9;
		// if (oneByteChars)
		bool L_10 = ___oneByteChars1;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// for (int i = 0; i < target; ++i)
		V_3 = 0;
		goto IL_004b;
	}

IL_0039:
	{
		// WriteByte((byte)s[i]);
		String_t* L_11 = ___s0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, L_12, NULL);
		FastBufferWriter_WriteByte_m0239DB587E7BD675850DDF0A8DA326AB4059E37B_inline(__this, (uint8_t)((int32_t)(uint8_t)L_13), NULL);
		// for (int i = 0; i < target; ++i)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < target; ++i)
		int32_t L_15 = V_3;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0050:
	{
		// {
		String_t* L_17 = ___s0;
		V_5 = L_17;
		// fixed (char* native = s)
		String_t* L_18 = V_5;
		V_4 = (Il2CppChar*)((uintptr_t)L_18);
		Il2CppChar* L_19 = V_4;
		if (!L_19)
		{
			goto IL_0066;
		}
	}
	{
		Il2CppChar* L_20 = V_4;
		int32_t L_21;
		L_21 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_20, L_21));
	}

IL_0066:
	{
		// WriteBytes((byte*)native, target * sizeof(char));
		Il2CppChar* L_22 = V_4;
		int32_t L_23 = V_1;
		FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline(__this, (uint8_t*)L_22, ((int32_t)il2cpp_codegen_multiply(L_23, 2)), 0, NULL);
		V_5 = (String_t*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_WriteValueSafe_m63E101F96EACCBC7F3C93A97B48CAA7ADC3194CE_AdjustorThunk (RuntimeObject* __this, String_t* ___s0, bool ___oneByteChars1, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_WriteValueSafe_m63E101F96EACCBC7F3C93A97B48CAA7ADC3194CE(_thisAdjusted, ___s0, ___oneByteChars1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteByte_m0239DB587E7BD675850DDF0A8DA326AB4059E37B (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Handle->BufferPointer[Handle->Position++] = value;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t* L_3 = (&L_2->___Position_1);
		int32_t* L_4 = L_3;
		int32_t L_5 = *((int32_t*)L_4);
		V_0 = L_5;
		int32_t L_6 = V_0;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		uint8_t L_8 = ___value0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_7))) = (int8_t)L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_WriteByte_m0239DB587E7BD675850DDF0A8DA326AB4059E37B_AdjustorThunk (RuntimeObject* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_WriteByte_m0239DB587E7BD675850DDF0A8DA326AB4059E37B_inline(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteByteSafe(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteByteSafe_m92532B2CFB3C830D32E689C7BCDF69CA1F4A4B5A (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!TryBeginWriteInternal(1))
		bool L_0;
		L_0 = FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline(__this, 1, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_1 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteByteSafe_m92532B2CFB3C830D32E689C7BCDF69CA1F4A4B5A_RuntimeMethod_var)));
	}

IL_0014:
	{
		// Handle->BufferPointer[Handle->Position++] = value;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t* L_5 = (&L_4->___Position_1);
		int32_t* L_6 = L_5;
		int32_t L_7 = *((int32_t*)L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ___value0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_9))) = (int8_t)L_10;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_WriteByteSafe_m92532B2CFB3C830D32E689C7BCDF69CA1F4A4B5A_AdjustorThunk (RuntimeObject* __this, uint8_t ___value0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_WriteByteSafe_m92532B2CFB3C830D32E689C7BCDF69CA1F4A4B5A_inline(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteBytes(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// UnsafeUtility.MemCpy((Handle->BufferPointer + Handle->Position), value + offset, size);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		uint8_t* L_4 = ___value0;
		int32_t L_5 = ___offset2;
		int32_t L_6 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_5)), ((int64_t)L_6), NULL);
		// Handle->Position += size;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___Position_1);
		int32_t* L_9 = L_8;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___size1;
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline(_thisAdjusted, ___value0, ___size1, ___offset2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteBytesSafe(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// if (!TryBeginWriteInternal(size))
		int32_t L_0 = ___size1;
		bool L_1;
		L_1 = FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383_RuntimeMethod_var)));
	}

IL_0014:
	{
		// UnsafeUtility.MemCpy((Handle->BufferPointer + Handle->Position), value + offset, size);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		uint8_t* L_7 = ___value0;
		int32_t L_8 = ___offset2;
		int32_t L_9 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_8)), ((int64_t)L_9), NULL);
		// Handle->Position += size;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___Position_1);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___size1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383_AdjustorThunk (RuntimeObject* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383_inline(_thisAdjusted, ___value0, ___size1, ___offset2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m8F93E9549A2CD555FE7E4ABFD449BA06CCFB4AB9 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* G_B6_0 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B6_1 = NULL;
	uint8_t* G_B5_0 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	uint8_t* G_B7_1 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B7_2 = NULL;
	{
		// fixed (byte* ptr = value)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// WriteBytes(ptr, size == -1 ? value.Length : size, offset);
		uint8_t* L_4 = V_0;
		int32_t L_5 = ___size1;
		G_B5_0 = L_4;
		G_B5_1 = __this;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			G_B6_0 = L_4;
			G_B6_1 = __this;
			goto IL_0021;
		}
	}
	{
		int32_t L_6 = ___size1;
		G_B7_0 = L_6;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0024;
	}

IL_0021:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___value0;
		NullCheck(L_7);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0024:
	{
		int32_t L_8 = ___offset2;
		FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline(G_B7_2, G_B7_1, G_B7_0, L_8, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_WriteBytes_m8F93E9549A2CD555FE7E4ABFD449BA06CCFB4AB9_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_WriteBytes_m8F93E9549A2CD555FE7E4ABFD449BA06CCFB4AB9_inline(_thisAdjusted, ___value0, ___size1, ___offset2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::WriteBytesSafe(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mBA4E60C790DF9834AF295A11D71F8FFE5D0C63EA (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* G_B6_0 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B6_1 = NULL;
	uint8_t* G_B5_0 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	uint8_t* G_B7_1 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B7_2 = NULL;
	{
		// fixed (byte* ptr = value)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// WriteBytesSafe(ptr, size == -1 ? value.Length : size, offset);
		uint8_t* L_4 = V_0;
		int32_t L_5 = ___size1;
		G_B5_0 = L_4;
		G_B5_1 = __this;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			G_B6_0 = L_4;
			G_B6_1 = __this;
			goto IL_0021;
		}
	}
	{
		int32_t L_6 = ___size1;
		G_B7_0 = L_6;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0024;
	}

IL_0021:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___value0;
		NullCheck(L_7);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0024:
	{
		int32_t L_8 = ___offset2;
		FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383_inline(G_B7_2, G_B7_1, G_B7_0, L_8, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_WriteBytesSafe_mBA4E60C790DF9834AF295A11D71F8FFE5D0C63EA_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_WriteBytesSafe_mBA4E60C790DF9834AF295A11D71F8FFE5D0C63EA_inline(_thisAdjusted, ___value0, ___size1, ___offset2, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::CopyTo(Unity.Multiplayer.Tools.NetStats.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_CopyTo_m101384A202A2DB4CD669955967E9CBCE80202358 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___other0, const RuntimeMethod* method) 
{
	{
		// other.WriteBytes(Handle->BufferPointer, Handle->Position);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline((&___other0), L_1, L_3, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_CopyTo_m101384A202A2DB4CD669955967E9CBCE80202358_AdjustorThunk (RuntimeObject* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___other0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_CopyTo_m101384A202A2DB4CD669955967E9CBCE80202358_inline(_thisAdjusted, ___other0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.FastBufferWriter::CopyFrom(Unity.Multiplayer.Tools.NetStats.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_CopyFrom_m216BB971A08EC2F01D7E9783FE1D32E6BE45B237 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___other0, const RuntimeMethod* method) 
{
	{
		// WriteBytes(other.Handle->BufferPointer, other.Handle->Position);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_0 = ___other0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_1 = L_0.___Handle_0;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___BufferPointer_0;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_3 = ___other0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_4 = L_3.___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position_1;
		FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline(__this, L_2, L_5, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FastBufferWriter_CopyFrom_m216BB971A08EC2F01D7E9783FE1D32E6BE45B237_AdjustorThunk (RuntimeObject* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___other0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	FastBufferWriter_CopyFrom_m216BB971A08EC2F01D7E9783FE1D32E6BE45B237_inline(_thisAdjusted, ___other0, method);
}
// Unity.Collections.NativeArray`1<System.Byte> Unity.Multiplayer.Tools.NetStats.FastBufferWriter::ToNativeArray(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF FastBufferWriter_ToNativeArray_mCDCD5483699B54BA22C89C70FD67A7C78729C7E9 (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___allocator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var nativeArray = new NativeArray<byte>(Length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0;
		L_0 = FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline(__this, NULL);
		int32_t L_1 = ___allocator0;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_0), L_0, L_1, 0, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// UnsafeUtility.MemCpy(nativeArray.GetUnsafePtr(), GetUnsafePtr(), nativeArray.Length);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_2 = V_0;
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_2, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		uint8_t* L_4;
		L_4 = FastBufferWriter_GetUnsafePtr_m2D3D526A108E7354E6C44A09D93B78D4F2143F29_inline(__this, NULL);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_3, (void*)L_4, ((int64_t)L_5), NULL);
		// return nativeArray;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF FastBufferWriter_ToNativeArray_mCDCD5483699B54BA22C89C70FD67A7C78729C7E9_AdjustorThunk (RuntimeObject* __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2*>(__this + _offset);
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF _returnValue;
	_returnValue = FastBufferWriter_ToNativeArray_mCDCD5483699B54BA22C89C70FD67A7C78729C7E9(_thisAdjusted, ___allocator0, method);
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
// Conversion methods for marshalling of: Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle
IL2CPP_EXTERN_C void WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshal_pinvoke(const WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D& unmarshaled, WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshaled_pinvoke& marshaled)
{
	marshaled.___BufferPointer_0 = unmarshaled.___BufferPointer_0;
	marshaled.___Position_1 = unmarshaled.___Position_1;
	marshaled.___Length_2 = unmarshaled.___Length_2;
	marshaled.___Capacity_3 = unmarshaled.___Capacity_3;
	marshaled.___MaxCapacity_4 = unmarshaled.___MaxCapacity_4;
	marshaled.___Allocator_5 = unmarshaled.___Allocator_5;
	marshaled.___BufferGrew_6 = static_cast<int32_t>(unmarshaled.___BufferGrew_6);
}
IL2CPP_EXTERN_C void WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshal_pinvoke_back(const WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshaled_pinvoke& marshaled, WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D& unmarshaled)
{
	unmarshaled.___BufferPointer_0 = marshaled.___BufferPointer_0;
	int32_t unmarshaledPosition_temp_1 = 0;
	unmarshaledPosition_temp_1 = marshaled.___Position_1;
	unmarshaled.___Position_1 = unmarshaledPosition_temp_1;
	int32_t unmarshaledLength_temp_2 = 0;
	unmarshaledLength_temp_2 = marshaled.___Length_2;
	unmarshaled.___Length_2 = unmarshaledLength_temp_2;
	int32_t unmarshaledCapacity_temp_3 = 0;
	unmarshaledCapacity_temp_3 = marshaled.___Capacity_3;
	unmarshaled.___Capacity_3 = unmarshaledCapacity_temp_3;
	int32_t unmarshaledMaxCapacity_temp_4 = 0;
	unmarshaledMaxCapacity_temp_4 = marshaled.___MaxCapacity_4;
	unmarshaled.___MaxCapacity_4 = unmarshaledMaxCapacity_temp_4;
	int32_t unmarshaledAllocator_temp_5 = 0;
	unmarshaledAllocator_temp_5 = marshaled.___Allocator_5;
	unmarshaled.___Allocator_5 = unmarshaledAllocator_temp_5;
	bool unmarshaledBufferGrew_temp_6 = false;
	unmarshaledBufferGrew_temp_6 = static_cast<bool>(marshaled.___BufferGrew_6);
	unmarshaled.___BufferGrew_6 = unmarshaledBufferGrew_temp_6;
}
// Conversion method for clean up from marshalling of: Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle
IL2CPP_EXTERN_C void WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshal_pinvoke_cleanup(WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle
IL2CPP_EXTERN_C void WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshal_com(const WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D& unmarshaled, WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshaled_com& marshaled)
{
	marshaled.___BufferPointer_0 = unmarshaled.___BufferPointer_0;
	marshaled.___Position_1 = unmarshaled.___Position_1;
	marshaled.___Length_2 = unmarshaled.___Length_2;
	marshaled.___Capacity_3 = unmarshaled.___Capacity_3;
	marshaled.___MaxCapacity_4 = unmarshaled.___MaxCapacity_4;
	marshaled.___Allocator_5 = unmarshaled.___Allocator_5;
	marshaled.___BufferGrew_6 = static_cast<int32_t>(unmarshaled.___BufferGrew_6);
}
IL2CPP_EXTERN_C void WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshal_com_back(const WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshaled_com& marshaled, WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D& unmarshaled)
{
	unmarshaled.___BufferPointer_0 = marshaled.___BufferPointer_0;
	int32_t unmarshaledPosition_temp_1 = 0;
	unmarshaledPosition_temp_1 = marshaled.___Position_1;
	unmarshaled.___Position_1 = unmarshaledPosition_temp_1;
	int32_t unmarshaledLength_temp_2 = 0;
	unmarshaledLength_temp_2 = marshaled.___Length_2;
	unmarshaled.___Length_2 = unmarshaledLength_temp_2;
	int32_t unmarshaledCapacity_temp_3 = 0;
	unmarshaledCapacity_temp_3 = marshaled.___Capacity_3;
	unmarshaled.___Capacity_3 = unmarshaledCapacity_temp_3;
	int32_t unmarshaledMaxCapacity_temp_4 = 0;
	unmarshaledMaxCapacity_temp_4 = marshaled.___MaxCapacity_4;
	unmarshaled.___MaxCapacity_4 = unmarshaledMaxCapacity_temp_4;
	int32_t unmarshaledAllocator_temp_5 = 0;
	unmarshaledAllocator_temp_5 = marshaled.___Allocator_5;
	unmarshaled.___Allocator_5 = unmarshaledAllocator_temp_5;
	bool unmarshaledBufferGrew_temp_6 = false;
	unmarshaledBufferGrew_temp_6 = static_cast<bool>(marshaled.___BufferGrew_6);
	unmarshaled.___BufferGrew_6 = unmarshaledBufferGrew_temp_6;
}
// Conversion method for clean up from marshalling of: Unity.Multiplayer.Tools.NetStats.FastBufferWriter/WriterHandle
IL2CPP_EXTERN_C void WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshal_com_cleanup(WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.MetricHeader::get_EventFactoryTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 MetricHeader_get_EventFactoryTypeName_m20D0563671B587D9B3AD05432D5B042F54937CED (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, const RuntimeMethod* method) 
{
	{
		// public FixedString128Bytes EventFactoryTypeName { get; set; }
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_0 = __this->___U3CEventFactoryTypeNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 MetricHeader_get_EventFactoryTypeName_m20D0563671B587D9B3AD05432D5B042F54937CED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*>(__this + _offset);
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 _returnValue;
	_returnValue = MetricHeader_get_EventFactoryTypeName_m20D0563671B587D9B3AD05432D5B042F54937CED_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricHeader::set_EventFactoryTypeName(Unity.Collections.FixedString128Bytes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricHeader_set_EventFactoryTypeName_mA1214A10912E33A7545164CB45F5CF934F53FC26 (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___value0, const RuntimeMethod* method) 
{
	{
		// public FixedString128Bytes EventFactoryTypeName { get; set; }
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_0 = ___value0;
		__this->___U3CEventFactoryTypeNameU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MetricHeader_set_EventFactoryTypeName_mA1214A10912E33A7545164CB45F5CF934F53FC26_AdjustorThunk (RuntimeObject* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___value0, const RuntimeMethod* method)
{
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*>(__this + _offset);
	MetricHeader_set_EventFactoryTypeName_mA1214A10912E33A7545164CB45F5CF934F53FC26_inline(_thisAdjusted, ___value0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricContainerType Unity.Multiplayer.Tools.NetStats.MetricHeader::get_MetricContainerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MetricHeader_get_MetricContainerType_m13D3F887B141A458535CDBF8E59BE41C63E36DB1 (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, const RuntimeMethod* method) 
{
	{
		// public MetricContainerType MetricContainerType { get; set; }
		uint32_t L_0 = __this->___U3CMetricContainerTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint32_t MetricHeader_get_MetricContainerType_m13D3F887B141A458535CDBF8E59BE41C63E36DB1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = MetricHeader_get_MetricContainerType_m13D3F887B141A458535CDBF8E59BE41C63E36DB1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricHeader::set_MetricContainerType(Unity.Multiplayer.Tools.NetStats.MetricContainerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricHeader_set_MetricContainerType_m377CFBDE2D7F52DCAD1E3DB116A34744F7893F56 (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public MetricContainerType MetricContainerType { get; set; }
		uint32_t L_0 = ___value0;
		__this->___U3CMetricContainerTypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MetricHeader_set_MetricContainerType_m377CFBDE2D7F52DCAD1E3DB116A34744F7893F56_AdjustorThunk (RuntimeObject* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*>(__this + _offset);
	MetricHeader_set_MetricContainerType_m377CFBDE2D7F52DCAD1E3DB116A34744F7893F56_inline(_thisAdjusted, ___value0, method);
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricHeader::get_MetricId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C MetricHeader_get_MetricId_m1D361164AB2668C6754995708F55B31C43947EC6 (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, const RuntimeMethod* method) 
{
	{
		// public MetricId MetricId { get; set; }
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = __this->___U3CMetricIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C MetricHeader_get_MetricId_m1D361164AB2668C6754995708F55B31C43947EC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*>(__this + _offset);
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C _returnValue;
	_returnValue = MetricHeader_get_MetricId_m1D361164AB2668C6754995708F55B31C43947EC6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricHeader::set_MetricId(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricHeader_set_MetricId_mE80D44D6F362F50FDAE347AD156F0DF072F10114 (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___value0, const RuntimeMethod* method) 
{
	{
		// public MetricId MetricId { get; set; }
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = ___value0;
		__this->___U3CMetricIdU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MetricHeader_set_MetricId_mE80D44D6F362F50FDAE347AD156F0DF072F10114_AdjustorThunk (RuntimeObject* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___value0, const RuntimeMethod* method)
{
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*>(__this + _offset);
	MetricHeader_set_MetricId_mE80D44D6F362F50FDAE347AD156F0DF072F10114_inline(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricHeader::.ctor(Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.MetricContainerType,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricHeader__ctor_m7CD6786146C5D06C2222EACBDF135CA7DF0AC811 (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___eventFactoryTypeName0, uint32_t ___metricContainerType1, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId2, const RuntimeMethod* method) 
{
	{
		// EventFactoryTypeName = eventFactoryTypeName;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_0 = ___eventFactoryTypeName0;
		MetricHeader_set_EventFactoryTypeName_mA1214A10912E33A7545164CB45F5CF934F53FC26_inline(__this, L_0, NULL);
		// MetricContainerType = metricContainerType;
		uint32_t L_1 = ___metricContainerType1;
		MetricHeader_set_MetricContainerType_m377CFBDE2D7F52DCAD1E3DB116A34744F7893F56_inline(__this, L_1, NULL);
		// MetricId = metricId;
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_2 = ___metricId2;
		MetricHeader_set_MetricId_mE80D44D6F362F50FDAE347AD156F0DF072F10114_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MetricHeader__ctor_m7CD6786146C5D06C2222EACBDF135CA7DF0AC811_AdjustorThunk (RuntimeObject* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___eventFactoryTypeName0, uint32_t ___metricContainerType1, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___metricId2, const RuntimeMethod* method)
{
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*>(__this + _offset);
	MetricHeader__ctor_m7CD6786146C5D06C2222EACBDF135CA7DF0AC811(_thisAdjusted, ___eventFactoryTypeName0, ___metricContainerType1, ___metricId2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<System.Byte> Unity.Multiplayer.Tools.NetStats.NetStatSerializer::Serialize(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NetStatSerializer_Serialize_mAD36C6DA9699EFCB8EC8D58CDB44A0BEDD0CD9B3 (NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___metricCollection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m2C1EA972CDCAD3C6C6334B6C3B7732C896B47E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3928C841D42C9DB77C0C8DD282FAEB2A1670108E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4A7524495BACD1B2C706221F5419C8783633F221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m15736FBAFD419473C583C710188DB2FB93A9CE85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5F5C9000217BB7839B7146F5E5C76D6CF0DFA0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t022FB46256F68CB83207947B281BBE2B9384FEA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tACBB2E1C257871194507D0C10E16FD03C486E45A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// int size = 0;
		V_0 = 0;
		// for (int i = 0; i < metricCollection.Metrics.Count; ++i)
		V_2 = 0;
		goto IL_0028;
	}

IL_0006:
	{
		// var metric = metricCollection.Metrics[i];
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_0 = ___metricCollection0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MetricCollection_get_Metrics_m8944AF8C292CBD38316F9926DB7E732A8D749426_inline(L_0, NULL);
		int32_t L_2 = V_2;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric>::get_Item(System.Int32) */, IReadOnlyList_1_tACBB2E1C257871194507D0C10E16FD03C486E45A_il2cpp_TypeInfo_var, L_1, L_2);
		V_3 = L_3;
		// size += FastBufferWriter.GetWriteSize<MetricHeader>();
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = FastBufferWriter_GetWriteSize_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m2C1EA972CDCAD3C6C6334B6C3B7732C896B47E4F(FastBufferWriter_GetWriteSize_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m2C1EA972CDCAD3C6C6334B6C3B7732C896B47E4F_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// size += metric.GetWriteSize();
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Unity.Multiplayer.Tools.NetStats.IMetric::GetWriteSize() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_7);
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, L_8));
		// for (int i = 0; i < metricCollection.Metrics.Count; ++i)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < metricCollection.Metrics.Count; ++i)
		int32_t L_10 = V_2;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_11 = ___metricCollection0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = MetricCollection_get_Metrics_m8944AF8C292CBD38316F9926DB7E732A8D749426_inline(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IMetric>::get_Count() */, IReadOnlyCollection_1_t022FB46256F68CB83207947B281BBE2B9384FEA1_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_10) < ((int32_t)L_13)))
		{
			goto IL_0006;
		}
	}
	{
		// size += FastBufferWriter.GetWriteSize<ulong>();
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = FastBufferWriter_GetWriteSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3928C841D42C9DB77C0C8DD282FAEB2A1670108E(FastBufferWriter_GetWriteSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3928C841D42C9DB77C0C8DD282FAEB2A1670108E_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		// using var writer = new FastBufferWriter(size, Allocator.Temp, int.MaxValue);
		int32_t L_16 = V_0;
		FastBufferWriter__ctor_mF40FDD7B93F9494DB7F24E60461CCA03CE3884B8((&V_1), L_16, 2, ((int32_t)2147483647LL), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e4:
			{// begin finally (depth: 1)
				FastBufferWriter_Dispose_m18862008413C02EBE36C36EA473E41B0171D7ADF((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// writer.WriteValueSafe(metricCollection.ConnectionId);
				MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_17 = ___metricCollection0;
				NullCheck(L_17);
				uint64_t L_18;
				L_18 = MetricCollection_get_ConnectionId_m9642B5D987352E9CC35A0252F96EB7544E583BE3_inline(L_17, NULL);
				V_4 = L_18;
				FastBufferWriter_WriteValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5F5C9000217BB7839B7146F5E5C76D6CF0DFA0B3_inline((&V_1), (&V_4), FastBufferWriter_WriteValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5F5C9000217BB7839B7146F5E5C76D6CF0DFA0B3_RuntimeMethod_var);
				// writer.WriteValueSafe(metricCollection.Metrics.Count);
				MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_19 = ___metricCollection0;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = MetricCollection_get_Metrics_m8944AF8C292CBD38316F9926DB7E732A8D749426_inline(L_19, NULL);
				NullCheck(L_20);
				int32_t L_21;
				L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IMetric>::get_Count() */, IReadOnlyCollection_1_t022FB46256F68CB83207947B281BBE2B9384FEA1_il2cpp_TypeInfo_var, L_20);
				V_5 = L_21;
				FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4A7524495BACD1B2C706221F5419C8783633F221_inline((&V_1), (&V_5), FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4A7524495BACD1B2C706221F5419C8783633F221_RuntimeMethod_var);
				// for(int i = 0; i < metricCollection.Metrics.Count; ++i)
				V_6 = 0;
				goto IL_00c9_1;
			}

IL_0078_1:
			{
				// var metric = metricCollection.Metrics[i];
				MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_22 = ___metricCollection0;
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = MetricCollection_get_Metrics_m8944AF8C292CBD38316F9926DB7E732A8D749426_inline(L_22, NULL);
				int32_t L_24 = V_6;
				NullCheck(L_23);
				RuntimeObject* L_25;
				L_25 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric>::get_Item(System.Int32) */, IReadOnlyList_1_tACBB2E1C257871194507D0C10E16FD03C486E45A_il2cpp_TypeInfo_var, L_23, L_24);
				V_7 = L_25;
				// var header = new MetricHeader(
				//     metric.FactoryTypeName,
				//     metric.MetricContainerType,
				//     metric.Id
				// );
				RuntimeObject* L_26 = V_7;
				NullCheck(L_26);
				FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_27;
				L_27 = InterfaceFuncInvoker0< FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 >::Invoke(6 /* Unity.Collections.FixedString128Bytes Unity.Multiplayer.Tools.NetStats.IMetric::get_FactoryTypeName() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_26);
				RuntimeObject* L_28 = V_7;
				NullCheck(L_28);
				uint32_t L_29;
				L_29 = InterfaceFuncInvoker0< uint32_t >::Invoke(5 /* Unity.Multiplayer.Tools.NetStats.MetricContainerType Unity.Multiplayer.Tools.NetStats.IMetric::get_MetricContainerType() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_28);
				RuntimeObject* L_30 = V_7;
				NullCheck(L_30);
				MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_31;
				L_31 = InterfaceFuncInvoker0< MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C >::Invoke(1 /* Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.IMetric::get_Id() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_30);
				MetricHeader__ctor_m7CD6786146C5D06C2222EACBDF135CA7DF0AC811((&V_8), L_27, L_29, L_31, NULL);
				// writer.WriteValueSafe(header);
				FastBufferWriter_WriteValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m15736FBAFD419473C583C710188DB2FB93A9CE85_inline((&V_1), (&V_8), FastBufferWriter_WriteValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m15736FBAFD419473C583C710188DB2FB93A9CE85_RuntimeMethod_var);
				// writer.TryBeginWrite(metric.GetWriteSize());
				RuntimeObject* L_32 = V_7;
				NullCheck(L_32);
				int32_t L_33;
				L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Unity.Multiplayer.Tools.NetStats.IMetric::GetWriteSize() */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_32);
				bool L_34;
				L_34 = FastBufferWriter_TryBeginWrite_m158CCEBA6A37B6DE886D87852316418706519ACB_inline((&V_1), L_33, NULL);
				// metric.Write(writer);
				RuntimeObject* L_35 = V_7;
				FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_36 = V_1;
				NullCheck(L_35);
				InterfaceActionInvoker1< FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 >::Invoke(3 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetric::Write(Unity.Multiplayer.Tools.NetStats.FastBufferWriter) */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_35, L_36);
				// for(int i = 0; i < metricCollection.Metrics.Count; ++i)
				int32_t L_37 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			}

IL_00c9_1:
			{
				// for(int i = 0; i < metricCollection.Metrics.Count; ++i)
				int32_t L_38 = V_6;
				MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_39 = ___metricCollection0;
				NullCheck(L_39);
				RuntimeObject* L_40;
				L_40 = MetricCollection_get_Metrics_m8944AF8C292CBD38316F9926DB7E732A8D749426_inline(L_39, NULL);
				NullCheck(L_40);
				int32_t L_41;
				L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IMetric>::get_Count() */, IReadOnlyCollection_1_t022FB46256F68CB83207947B281BBE2B9384FEA1_il2cpp_TypeInfo_var, L_40);
				if ((((int32_t)L_38) < ((int32_t)L_41)))
				{
					goto IL_0078_1;
				}
			}
			{
				// return writer.ToNativeArray(Allocator.Temp);
				NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_42;
				L_42 = FastBufferWriter_ToNativeArray_mCDCD5483699B54BA22C89C70FD67A7C78729C7E9((&V_1), 2, NULL);
				V_9 = L_42;
				goto IL_00f2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f2:
	{
		// }
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_43 = V_9;
		return L_43;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricCollection Unity.Multiplayer.Tools.NetStats.NetStatSerializer::Deserialize(Unity.Collections.NativeArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* NetStatSerializer_Deserialize_m4850C313E9293F27AD283F0A21667619202B4457 (NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C62D190000EAAB69F20F921A12908AB1DC8E97A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m9B9FC681AF5522CE6EEC94A603F62AB443E997C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB606784170577636C0C8612B9C23547AAD78F8E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9687500B35B1801826B07991E4129692BEE2DC28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mACA1AAACA22C888C77D0853C8B95366BCA73693F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8* V_0 = NULL;
	uint64_t V_1 = 0;
	FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	{
		// var metrics = new List<IMetric>();
		List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8* L_0 = (List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8*)il2cpp_codegen_object_new(List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mACA1AAACA22C888C77D0853C8B95366BCA73693F(L_0, List_1__ctor_mACA1AAACA22C888C77D0853C8B95366BCA73693F_RuntimeMethod_var);
		V_0 = L_0;
		// using (var reader = new FastBufferReader(bytes, Allocator.Temp))
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1 = ___bytes0;
		FastBufferReader__ctor_m34E9181E01E74707AE514D45906E3FA45200E81E((&V_2), L_1, 2, (-1), 0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				FastBufferReader_Dispose_m82049282D1EF68CE4C5F4FC795AAF102A893B2E5((&V_2), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// reader.ReadValueSafe(out connectionId);
				FastBufferReader_ReadValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB606784170577636C0C8612B9C23547AAD78F8E4_inline((&V_2), (&V_1), FastBufferReader_ReadValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB606784170577636C0C8612B9C23547AAD78F8E4_RuntimeMethod_var);
				// reader.ReadValueSafe(out int metricsCount);
				FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C62D190000EAAB69F20F921A12908AB1DC8E97A_inline((&V_2), (&V_3), FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C62D190000EAAB69F20F921A12908AB1DC8E97A_RuntimeMethod_var);
				// for (int i = 0; i < metricsCount; ++i)
				V_4 = 0;
				goto IL_0071_1;
			}

IL_0028_1:
			{
				// reader.ReadValueSafe(out MetricHeader header);
				FastBufferReader_ReadValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m9B9FC681AF5522CE6EEC94A603F62AB443E997C4_inline((&V_2), (&V_5), FastBufferReader_ReadValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m9B9FC681AF5522CE6EEC94A603F62AB443E997C4_RuntimeMethod_var);
				// if (m_MetricFactory.TryConstruct(header, out var metric))
				MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14* L_2 = __this->___m_MetricFactory_0;
				MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C L_3 = V_5;
				NullCheck(L_2);
				bool L_4;
				L_4 = MetricFactory_TryConstruct_m62F4D3452F9AEF7E1FED2F8E75C4211DBCAF136A(L_2, L_3, (&V_6), NULL);
				if (!L_4)
				{
					goto IL_0054_1;
				}
			}
			{
				// metric.Read(reader);
				RuntimeObject* L_5 = V_6;
				FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 L_6 = V_2;
				NullCheck(L_5);
				InterfaceActionInvoker1< FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 >::Invoke(4 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetric::Read(Unity.Multiplayer.Tools.NetStats.FastBufferReader) */, IMetric_t2CBEDDDD9ACC19E0C54ADC458E7BA9F9E403B92C_il2cpp_TypeInfo_var, L_5, L_6);
				// metrics.Add(metric);
				List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8* L_7 = V_0;
				RuntimeObject* L_8 = V_6;
				NullCheck(L_7);
				List_1_Add_m9687500B35B1801826B07991E4129692BEE2DC28_inline(L_7, L_8, List_1_Add_m9687500B35B1801826B07991E4129692BEE2DC28_RuntimeMethod_var);
				goto IL_006b_1;
			}

IL_0054_1:
			{
				// throw new InvalidOperationException($"Failed to construct metric from serialized data. Metric Header: {header}");
				MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C L_9 = V_5;
				MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C L_10 = L_9;
				RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_il2cpp_TypeInfo_var)), &L_10);
				String_t* L_12;
				L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE218EA2E09B1E4F88FB8E283BB10493526972256)), L_11, NULL);
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				NullCheck(L_13);
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetStatSerializer_Deserialize_m4850C313E9293F27AD283F0A21667619202B4457_RuntimeMethod_var)));
			}

IL_006b_1:
			{
				// for (int i = 0; i < metricsCount; ++i)
				int32_t L_14 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			}

IL_0071_1:
			{
				// for (int i = 0; i < metricsCount; ++i)
				int32_t L_15 = V_4;
				int32_t L_16 = V_3;
				if ((((int32_t)L_15) < ((int32_t)L_16)))
				{
					goto IL_0028_1;
				}
			}
			{
				// }
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		// return new MetricCollection(
		//     metrics,
		//     connectionId);
		List_1_tA7FA8D8810B12DD812CC78B8DA1A1150ADB0CBC8* L_17 = V_0;
		uint64_t L_18 = V_1;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_19 = (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA*)il2cpp_codegen_object_new(MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		MetricCollection__ctor_m7E1CAEC87D7D909EC0229DA764B7B3B96B6EC6F3(L_19, L_17, L_18, NULL);
		return L_19;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.NetStatSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatSerializer__ctor_m9C4C58C9E498B39BD958D5596470165CC74318F2 (NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MetricFactory m_MetricFactory = new MetricFactory();
		MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14* L_0 = (MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14*)il2cpp_codegen_object_new(MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MetricFactory__ctor_m0AA1857A34167CA308EA43C5EA1CBB9D2D7478B1(L_0, NULL);
		__this->___m_MetricFactory_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MetricFactory_0), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Multiplayer.Tools.NetStats.BaseUnitExtensions::GetSymbol(Unity.Multiplayer.Tools.NetStats.BaseUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUnitExtensions_GetSymbol_m3BEBBDDB70EBEC3230CA06D7740BE09CA1ACD31C (int32_t ___unit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___unit0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___unit0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0015;
	}

IL_0009:
	{
		// case BaseUnit.Byte: return "B";
		return _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
	}

IL_000f:
	{
		// case BaseUnit.Second: return "s";
		return _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
	}

IL_0015:
	{
		// throw new ArgumentException($"Unhandled BaseUnit {unit}");
		int32_t L_2 = ___unit0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseUnit_tB80AB948A1FCDEC2953765318D3959C58D103242_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAB94F7A39C6A659381F05E3A5655D7551331441)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseUnitExtensions_GetSymbol_m3BEBBDDB70EBEC3230CA06D7740BE09CA1ACD31C_RuntimeMethod_var)));
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
// System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::get_BytesExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381 (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) 
{
	{
		// internal sbyte BytesExponent { get; }
		int8_t L_0 = __this->___U3CBytesExponentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int8_t BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	int8_t _returnValue;
	_returnValue = BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::get_SecondsExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) 
{
	{
		// internal sbyte SecondsExponent { get; }
		int8_t L_0 = __this->___U3CSecondsExponentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int8_t BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	int8_t _returnValue;
	_returnValue = BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::.ctor(System.SByte,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, int8_t ___bytesExponent0, int8_t ___secondsExponent1, const RuntimeMethod* method) 
{
	{
		// BytesExponent = bytesExponent;
		int8_t L_0 = ___bytesExponent0;
		__this->___U3CBytesExponentU3Ek__BackingField_0 = L_0;
		// SecondsExponent = secondsExponent;
		int8_t L_1 = ___secondsExponent1;
		__this->___U3CSecondsExponentU3Ek__BackingField_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB_AdjustorThunk (RuntimeObject* __this, int8_t ___bytesExponent0, int8_t ___secondsExponent1, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB(_thisAdjusted, ___bytesExponent0, ___secondsExponent1, method);
}
// Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.BaseUnits::WithSeconds(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA BaseUnits_WithSeconds_mFD21BAC0D894F823308F0F2D619F94606A4CBADB (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, int8_t ___seconds0, const RuntimeMethod* method) 
{
	{
		// return new BaseUnits(
		//     bytesExponent: BytesExponent,
		//     secondsExponent: seconds);
		int8_t L_0;
		L_0 = BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_inline(__this, NULL);
		int8_t L_1 = ___seconds0;
		BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_2;
		memset((&L_2), 0, sizeof(L_2));
		BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA BaseUnits_WithSeconds_mFD21BAC0D894F823308F0F2D619F94606A4CBADB_AdjustorThunk (RuntimeObject* __this, int8_t ___seconds0, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA _returnValue;
	_returnValue = BaseUnits_WithSeconds_mFD21BAC0D894F823308F0F2D619F94606A4CBADB(_thisAdjusted, ___seconds0, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BaseUnits::Equals(Unity.Multiplayer.Tools.NetStats.BaseUnits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseUnits_Equals_mDAA4768D7DCB7D50AA930945136ADDA4C80BEDEB (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA ___other0, const RuntimeMethod* method) 
{
	{
		// return BytesExponent == other.BytesExponent &&
		//        SecondsExponent == other.SecondsExponent;
		int8_t L_0;
		L_0 = BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_inline(__this, NULL);
		int8_t L_1;
		L_1 = BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_inline((&___other0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		int8_t L_2;
		L_2 = BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_inline(__this, NULL);
		int8_t L_3;
		L_3 = BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_inline((&___other0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BaseUnits_Equals_mDAA4768D7DCB7D50AA930945136ADDA4C80BEDEB_AdjustorThunk (RuntimeObject* __this, BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA ___other0, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	bool _returnValue;
	_returnValue = BaseUnits_Equals_mDAA4768D7DCB7D50AA930945136ADDA4C80BEDEB(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.BaseUnits::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseUnits_Equals_m46333FD6C5E022609052AAD645FFBD9C97F7AFD9 (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj is BaseUnits other && Equals(other);
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*)((BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*)(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*)UnBox(L_1, BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var))));
		BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_2 = V_0;
		bool L_3;
		L_3 = BaseUnits_Equals_mDAA4768D7DCB7D50AA930945136ADDA4C80BEDEB(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BaseUnits_Equals_m46333FD6C5E022609052AAD645FFBD9C97F7AFD9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	bool _returnValue;
	_returnValue = BaseUnits_Equals_m46333FD6C5E022609052AAD645FFBD9C97F7AFD9(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.BaseUnits::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseUnits_GetHashCode_mE898D17E79859C71E703604A5999791AB6D5EB81 (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) 
{
	{
		// return
		//     ((byte)BytesExponent << 8) |
		//     (byte)SecondsExponent;
		int8_t L_0;
		L_0 = BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_inline(__this, NULL);
		int8_t L_1;
		L_1 = BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_inline(__this, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(uint8_t)L_0)<<8))|((int32_t)(uint8_t)L_1)));
	}
}
IL2CPP_EXTERN_C  int32_t BaseUnits_GetHashCode_mE898D17E79859C71E703604A5999791AB6D5EB81_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BaseUnits_GetHashCode_mE898D17E79859C71E703604A5999791AB6D5EB81(_thisAdjusted, method);
	return _returnValue;
}
// System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::GetExponent(Unity.Multiplayer.Tools.NetStats.BaseUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832 (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, int32_t ___unit0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___unit0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___unit0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0017;
	}

IL_0009:
	{
		// return BytesExponent;
		int8_t L_2;
		L_2 = BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_inline(__this, NULL);
		return L_2;
	}

IL_0010:
	{
		// return SecondsExponent;
		int8_t L_3;
		L_3 = BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_inline(__this, NULL);
		return L_3;
	}

IL_0017:
	{
		// throw new ArgumentException($"Unhandled BaseUnit {unit}");
		int32_t L_4 = ___unit0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseUnit_tB80AB948A1FCDEC2953765318D3959C58D103242_il2cpp_TypeInfo_var)), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAB94F7A39C6A659381F05E3A5655D7551331441)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int8_t BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832_AdjustorThunk (RuntimeObject* __this, int32_t ___unit0, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	int8_t _returnValue;
	_returnValue = BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832(_thisAdjusted, ___unit0, method);
	return _returnValue;
}
// System.ValueTuple`2<System.String,System.String> Unity.Multiplayer.Tools.NetStats.BaseUnits::get_NumeratorAndDenominatorDisplayStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 BaseUnits_get_NumeratorAndDenominatorDisplayStrings_m965543E1330059B9EB03384A853042532B5B108E (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t V_3 = 0x0;
	{
		// var numerator = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// var denominator = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (var unit = (BaseUnit)0;
		V_2 = 0;
		goto IL_003d;
	}

IL_0010:
	{
		// var exponent = GetExponent(unit);
		int32_t L_0 = V_2;
		int8_t L_1;
		L_1 = BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832(__this, L_0, NULL);
		V_3 = L_1;
		// if (exponent > 0)
		int8_t L_2 = V_3;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// AddUnit(unit, exponent, ref numerator);
		int32_t L_3 = V_2;
		int8_t L_4 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var);
		BaseUnits_U3Cget_NumeratorAndDenominatorDisplayStringsU3Eg__AddUnitU7C14_0_m4AD86A0CCAF911923D79A6E4D77D7BFEAA34D90E(L_3, L_4, (&V_0), NULL);
		goto IL_0039;
	}

IL_0027:
	{
		// else if (exponent < 0)
		int8_t L_5 = V_3;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		// AddUnit(unit, Math.Abs(exponent), ref denominator);
		int32_t L_6 = V_2;
		int8_t L_7 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int8_t L_8;
		L_8 = Math_Abs_m58E959B262B65D499F0CA605CC256C125E558D4C_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var);
		BaseUnits_U3Cget_NumeratorAndDenominatorDisplayStringsU3Eg__AddUnitU7C14_0_m4AD86A0CCAF911923D79A6E4D77D7BFEAA34D90E(L_6, L_8, (&V_1), NULL);
	}

IL_0039:
	{
		// ++unit)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
	}

IL_003d:
	{
		// (int)unit < BaseUnitConstants.k_BaseUnitCount;
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		// return (numerator, denominator);
		String_t* L_11 = V_0;
		String_t* L_12 = V_1;
		ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 L_13;
		memset((&L_13), 0, sizeof(L_13));
		ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7((&L_13), L_11, L_12, /*hidden argument*/ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7_RuntimeMethod_var);
		return L_13;
	}
}
IL2CPP_EXTERN_C  ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 BaseUnits_get_NumeratorAndDenominatorDisplayStrings_m965543E1330059B9EB03384A853042532B5B108E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 _returnValue;
	_returnValue = BaseUnits_get_NumeratorAndDenominatorDisplayStrings_m965543E1330059B9EB03384A853042532B5B108E(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Multiplayer.Tools.NetStats.BaseUnits::get_DisplayString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUnits_get_DisplayString_m514319D1EDF3CCBE1E7416D4513236760664BF5D (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// var (numerator, denominator) = NumeratorAndDenominatorDisplayStrings;
		ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 L_0;
		L_0 = BaseUnits_get_NumeratorAndDenominatorDisplayStrings_m965543E1330059B9EB03384A853042532B5B108E(__this, NULL);
		ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 L_1 = L_0;
		String_t* L_2 = L_1.___Item1_0;
		V_0 = L_2;
		String_t* L_3 = L_1.___Item2_1;
		V_1 = L_3;
		// return numerator + (denominator == "" ? "" : "/" + denominator);
		String_t* L_4 = V_0;
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B1_0 = L_4;
		if (L_6)
		{
			G_B2_0 = L_4;
			goto IL_002e;
		}
	}
	{
		String_t* L_7 = V_1;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_7, NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_002e:
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* BaseUnits_get_DisplayString_m514319D1EDF3CCBE1E7416D4513236760664BF5D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BaseUnits_get_DisplayString_m514319D1EDF3CCBE1E7416D4513236760664BF5D(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Multiplayer.Tools.NetStats.BaseUnits::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseUnits_ToString_m4F328455C1BF2F8CC616E1AD01E928F5D9100CAD (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) 
{
	{
		// => DisplayString;
		String_t* L_0;
		L_0 = BaseUnits_get_DisplayString_m514319D1EDF3CCBE1E7416D4513236760664BF5D(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* BaseUnits_ToString_m4F328455C1BF2F8CC616E1AD01E928F5D9100CAD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BaseUnits_ToString_m4F328455C1BF2F8CC616E1AD01E928F5D9100CAD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseUnits__cctor_m41B30C6EF9CD1D0695E00FBAFA2262BE42491531 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB35EFB19030E964912B4AFF3DA656579F99C965E____270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly char[] k_Superscripts = new char[]
		//     { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB35EFB19030E964912B4AFF3DA656579F99C965E____270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_StaticFields*)il2cpp_codegen_static_fields_for(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var))->___k_Superscripts_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_StaticFields*)il2cpp_codegen_static_fields_for(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var))->___k_Superscripts_2), (void*)L_1);
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::<get_NumeratorAndDenominatorDisplayStrings>g__AddUnit|14_0(Unity.Multiplayer.Tools.NetStats.BaseUnit,System.SByte,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseUnits_U3Cget_NumeratorAndDenominatorDisplayStringsU3Eg__AddUnitU7C14_0_m4AD86A0CCAF911923D79A6E4D77D7BFEAA34D90E (int32_t ___unit0, int8_t ___exponent1, String_t** ___str2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// str += unit.GetSymbol();
		String_t** L_0 = ___str2;
		String_t** L_1 = ___str2;
		String_t* L_2 = *((String_t**)L_1);
		int32_t L_3 = ___unit0;
		String_t* L_4;
		L_4 = BaseUnitExtensions_GetSymbol_m3BEBBDDB70EBEC3230CA06D7740BE09CA1ACD31C(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, L_4, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_5);
		// if (exponent <= 1)
		int8_t L_6 = ___exponent1;
		if ((((int32_t)L_6) > ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// if (exponent >= 100)
		int8_t L_7 = ___exponent1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)100))))
		{
			goto IL_003c;
		}
	}
	{
		// str += k_Superscripts[exponent / 100];
		String_t** L_8 = ___str2;
		String_t** L_9 = ___str2;
		String_t* L_10 = *((String_t**)L_9);
		il2cpp_codegen_runtime_class_init_inline(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ((BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_StaticFields*)il2cpp_codegen_static_fields_for(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var))->___k_Superscripts_2;
		int8_t L_12 = ___exponent1;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_12/((int32_t)100)))))), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, L_13, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_14);
		// exponent %= 100;
		int8_t L_15 = ___exponent1;
		___exponent1 = ((int8_t)((int32_t)((int32_t)L_15%((int32_t)100))));
	}

IL_003c:
	{
		// if (exponent >= 10)
		int8_t L_16 = ___exponent1;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)10))))
		{
			goto IL_0064;
		}
	}
	{
		// str += k_Superscripts[exponent / 10];
		String_t** L_17 = ___str2;
		String_t** L_18 = ___str2;
		String_t* L_19 = *((String_t**)L_18);
		il2cpp_codegen_runtime_class_init_inline(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = ((BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_StaticFields*)il2cpp_codegen_static_fields_for(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var))->___k_Superscripts_2;
		int8_t L_21 = ___exponent1;
		NullCheck(L_20);
		String_t* L_22;
		L_22 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_21/((int32_t)10)))))), NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, L_22, NULL);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_23;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_23);
		// exponent %= 10;
		int8_t L_24 = ___exponent1;
		___exponent1 = ((int8_t)((int32_t)((int32_t)L_24%((int32_t)10))));
	}

IL_0064:
	{
		// str += k_Superscripts[exponent / 10];
		String_t** L_25 = ___str2;
		String_t** L_26 = ___str2;
		String_t* L_27 = *((String_t**)L_26);
		il2cpp_codegen_runtime_class_init_inline(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = ((BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_StaticFields*)il2cpp_codegen_static_fields_for(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA_il2cpp_TypeInfo_var))->___k_Superscripts_2;
		int8_t L_29 = ___exponent1;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_29/((int32_t)10)))))), NULL);
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_27, L_30, NULL);
		*((RuntimeObject**)L_25) = (RuntimeObject*)L_31;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_25, (void*)(RuntimeObject*)L_31);
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
// System.String Unity.Multiplayer.Tools.NetStats.UnitPrefixExtensions::GetSymbol(Unity.Multiplayer.Tools.NetStats.MetricPrefix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnitPrefixExtensions_GetSymbol_m57032726E345C00B8F56CA95C381B1A70092A097 (int8_t ___prefix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37A50091974FE11FAC57C870272F76245820AA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF2E07EC46CFCECE11F1BDCB6EFB5CBFDD25EB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		s_Il2CppMethodInitialized = true;
	}
	{
		int8_t L_0 = ___prefix0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)-6))))
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_0057;
			}
			case 5:
			{
				goto IL_005d;
			}
			case 6:
			{
				goto IL_0063;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_006f;
			}
			case 9:
			{
				goto IL_0075;
			}
			case 10:
			{
				goto IL_007b;
			}
			case 11:
			{
				goto IL_0081;
			}
			case 12:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_003f:
	{
		// case MetricPrefix.Atto:  return "a";
		return _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
	}

IL_0045:
	{
		// case MetricPrefix.Femto: return "f";
		return _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
	}

IL_004b:
	{
		// case MetricPrefix.Pico:  return "p";
		return _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B;
	}

IL_0051:
	{
		// case MetricPrefix.Nano:  return "n";
		return _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6;
	}

IL_0057:
	{
		// case MetricPrefix.Micro: return "?";
		return _stringLiteral3BF2E07EC46CFCECE11F1BDCB6EFB5CBFDD25EB7;
	}

IL_005d:
	{
		// case MetricPrefix.Milli: return "m";
		return _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
	}

IL_0063:
	{
		// case MetricPrefix.None:  return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0069:
	{
		// case MetricPrefix.Kilo:  return "k";
		return _stringLiteral37A50091974FE11FAC57C870272F76245820AA18;
	}

IL_006f:
	{
		// case MetricPrefix.Mega:  return "M";
		return _stringLiteralDD7461C99FE0AF610527A1F4273DBC4696AB5F17;
	}

IL_0075:
	{
		// case MetricPrefix.Giga:  return "G";
		return _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
	}

IL_007b:
	{
		// case MetricPrefix.Tera:  return "T";
		return _stringLiteral7B18F301A198B83778B5E546729B0539A0D4E758;
	}

IL_0081:
	{
		// case MetricPrefix.Peta:  return "P";
		return _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34;
	}

IL_0087:
	{
		// case MetricPrefix.Exa:   return "E";
		return _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D;
	}

IL_008d:
	{
		// throw new ArgumentException($"Unhandled {nameof(MetricPrefix)} {prefix}");
		int8_t L_1 = ___prefix0;
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MetricPrefix_t35A905BE890FFC6E1CE8C10CB9FEE833D2A063C1_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE84DB8BED5C78DBDEDEE7C8B233DF10E3E7A0BF)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABB7DFA10F06559A9DAFBF59004186C4D1EC0FD7)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitPrefixExtensions_GetSymbol_m57032726E345C00B8F56CA95C381B1A70092A097_RuntimeMethod_var)));
	}
}
// System.Single Unity.Multiplayer.Tools.NetStats.UnitPrefixExtensions::GetValueFloat(Unity.Multiplayer.Tools.NetStats.MetricPrefix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnitPrefixExtensions_GetValueFloat_mDDCAD81A9FD3D2A62BB9C34564034CFBE3D8A7EC (int8_t ___prefix0, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = ___prefix0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)-6))))
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_0057;
			}
			case 5:
			{
				goto IL_005d;
			}
			case 6:
			{
				goto IL_0063;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_006f;
			}
			case 9:
			{
				goto IL_0075;
			}
			case 10:
			{
				goto IL_007b;
			}
			case 11:
			{
				goto IL_0081;
			}
			case 12:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_003f:
	{
		// case MetricPrefix.Atto:  return 1e-18f;
		return (1.00000005E-18f);
	}

IL_0045:
	{
		// case MetricPrefix.Femto: return 1e-15f;
		return (1.0E-15f);
	}

IL_004b:
	{
		// case MetricPrefix.Pico:  return 1e-12f;
		return (9.99999996E-13f);
	}

IL_0051:
	{
		// case MetricPrefix.Nano:  return 1e-9f;
		return (9.99999972E-10f);
	}

IL_0057:
	{
		// case MetricPrefix.Micro: return 1e-6f;
		return (9.99999997E-07f);
	}

IL_005d:
	{
		// case MetricPrefix.Milli: return 1e-3f;
		return (0.00100000005f);
	}

IL_0063:
	{
		// case MetricPrefix.None: return 1;
		return (1.0f);
	}

IL_0069:
	{
		// case MetricPrefix.Kilo: return 1e3f;
		return (1000.0f);
	}

IL_006f:
	{
		// case MetricPrefix.Mega: return 1e6f;
		return (1000000.0f);
	}

IL_0075:
	{
		// case MetricPrefix.Giga: return 1e9f;
		return (1.0E+09f);
	}

IL_007b:
	{
		// case MetricPrefix.Tera: return 1e12f;
		return (9.99999996E+11f);
	}

IL_0081:
	{
		// case MetricPrefix.Peta: return 1e15f;
		return (9.99999987E+14f);
	}

IL_0087:
	{
		// case MetricPrefix.Exa:  return 1e18f;
		return (9.99999984E+17f);
	}

IL_008d:
	{
		// throw new ArgumentException($"Unhandled {nameof(MetricPrefix)} {prefix}");
		int8_t L_1 = ___prefix0;
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MetricPrefix_t35A905BE890FFC6E1CE8C10CB9FEE833D2A063C1_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE84DB8BED5C78DBDEDEE7C8B233DF10E3E7A0BF)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABB7DFA10F06559A9DAFBF59004186C4D1EC0FD7)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitPrefixExtensions_GetValueFloat_mDDCAD81A9FD3D2A62BB9C34564034CFBE3D8A7EC_RuntimeMethod_var)));
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
// Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.UnitExtensions::GetBaseUnits(Unity.Multiplayer.Tools.NetStats.Units)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA UnitExtensions_GetBaseUnits_m3A75E6DC45886D47530D6DF2F57DC1B3F773FCFB (int32_t ___units0, const RuntimeMethod* method) 
{
	BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___units0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0036;
			}
			case 4:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_001c:
	{
		// return new BaseUnits();
		il2cpp_codegen_initobj((&V_0), sizeof(BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA));
		BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_1 = V_0;
		return L_1;
	}

IL_0026:
	{
		// return new BaseUnits(bytesExponent: 1);
		BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_2;
		memset((&L_2), 0, sizeof(L_2));
		BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB((&L_2), (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_2;
	}

IL_002e:
	{
		// return new BaseUnits(bytesExponent: 1, secondsExponent: -1);
		BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_3;
		memset((&L_3), 0, sizeof(L_3));
		BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB((&L_3), (int8_t)1, (int8_t)(-1), /*hidden argument*/NULL);
		return L_3;
	}

IL_0036:
	{
		// return new BaseUnits(secondsExponent: 1);
		BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_4;
		memset((&L_4), 0, sizeof(L_4));
		BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB((&L_4), (int8_t)0, (int8_t)1, /*hidden argument*/NULL);
		return L_4;
	}

IL_003e:
	{
		// return new BaseUnits(secondsExponent: -1);
		BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA L_5;
		memset((&L_5), 0, sizeof(L_5));
		BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB((&L_5), (int8_t)0, (int8_t)(-1), /*hidden argument*/NULL);
		return L_5;
	}

IL_0046:
	{
		// throw new ArgumentOutOfRangeException(nameof(units), units, null);
		int32_t L_6 = ___units0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Units_tA63DF22D3DB32BC8A444A1D82A866321C270993B_il2cpp_TypeInfo_var)), &L_7);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4)), L_8, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitExtensions_GetBaseUnits_m3A75E6DC45886D47530D6DF2F57DC1B3F773FCFB_RuntimeMethod_var)));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricCollection_set_ConnectionId_m3DF3CCC3C1EA2F75D54F4A36F7D850904E013DFA_inline (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		uint64_t L_0 = ___value0;
		__this->___U3CConnectionIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C MetricHeader_get_MetricId_m1D361164AB2668C6754995708F55B31C43947EC6_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, const RuntimeMethod* method) 
{
	{
		// public MetricId MetricId { get; set; }
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = __this->___U3CMetricIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 MetricHeader_get_EventFactoryTypeName_m20D0563671B587D9B3AD05432D5B042F54937CED_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, const RuntimeMethod* method) 
{
	{
		// public FixedString128Bytes EventFactoryTypeName { get; set; }
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_0 = __this->___U3CEventFactoryTypeNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MetricHeader_get_MetricContainerType_m13D3F887B141A458535CDBF8E59BE41C63E36DB1_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, const RuntimeMethod* method) 
{
	{
		// public MetricContainerType MetricContainerType { get; set; }
		uint32_t L_0 = __this->___U3CMetricContainerTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_inline (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	{
		// internal int TypeIndex { get; set; }
		int32_t L_0 = __this->___U3CTypeIndexU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706_inline (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int TypeIndex { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeIndexU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_inline (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, const RuntimeMethod* method) 
{
	{
		// internal int EnumValue { get; set; }
		int32_t L_0 = __this->___U3CEnumValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88_inline (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal int EnumValue { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CEnumValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricTypeEnumAttribute_get_DisplayName_m1AE91E6508DEC1BEEE990827A29E587AA3070451_inline (MetricTypeEnumAttribute_t77846FA4FA8131AE9F8387B55A144CA06BBC2349* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricMetadataAttribute_get_DisplayName_m74AA6C6CBD2C2559878B3C5D6C3AFDE9645717A6_inline (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_MetricKind_m1FB56CD89F7EDC9A93E476206F3F506C43D7E4DF_inline (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) 
{
	{
		// public MetricKind MetricKind { get; set; } = MetricKind.Counter;
		int32_t L_0 = __this->___U3CMetricKindU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_Units_mCD1CCB0FE96CB571BB8C8EF41B94297D4CB9D163_inline (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) 
{
	{
		// public Units Units { get; set; } = Units.None;
		int32_t L_0 = __this->___U3CUnitsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MetricMetadataAttribute_get_DisplayAsPercentage_mDA7C24E54E8E22595F8746BDCE23A111A1C0CFF8_inline (MetricMetadataAttribute_t41633C812B367463DC313B6D309485FF5E836A61* __this, const RuntimeMethod* method) 
{
	{
		// public bool DisplayAsPercentage { get; set; }
		bool L_0 = __this->___U3CDisplayAsPercentageU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_inline (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) 
{
	{
		// internal sbyte SecondsExponent { get; }
		int8_t L_0 = __this->___U3CSecondsExponentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricTypeSortPriorityAttribute_get_SortPriority_mE67EA96103A67FFE511FF45381E89FC516F1A0C0_inline (MetricTypeSortPriorityAttribute_t68C8B5E0304DB9542E7A6F966F053571FA2BFD2C* __this, const RuntimeMethod* method) 
{
	{
		// public SortPriority SortPriority { get; set; }
		int32_t L_0 = __this->___U3CSortPriorityU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_InvariantCulture_m34F8755409AC642ED90CC1818310DA558881D087_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_invariantCulture_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BitReader_get_BitAligned_mDA11119BA19D3286D99A3A113746D248A411E9FA_inline (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_BitPosition & 7) == 0;
		int32_t L_0 = __this->___m_BitPosition_3;
		return (bool)((((int32_t)((int32_t)(L_0&7))) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_CommitBitwiseReads_mEA2055113233892F4DE1136E18C534C506F4DC16_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// Handle->Position += amount;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t* L_1 = (&L_0->___Position_1);
		int32_t* L_2 = L_1;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___amount0;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitReader_ReadMisaligned_m1164AE5F4D20EA3FB0B46DAAA61C7F301E304FF0_inline (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int off = m_BitPosition & 7;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0&7));
		// int pos = m_BitPosition >> 3;
		int32_t L_1 = __this->___m_BitPosition_3;
		V_1 = ((int32_t)(L_1>>3));
		// int shift1 = 8 - off;
		int32_t L_2 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(8, L_2));
		// value = (byte)((m_BufferPointer[pos] >> off) | (m_BufferPointer[(m_BitPosition += 8) >> 3] << shift1));
		uint8_t* L_3 = ___value0;
		uint8_t* L_4 = __this->___m_BufferPointer_1;
		int32_t L_5 = V_1;
		int32_t L_6 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_5)));
		int32_t L_7 = V_0;
		uint8_t* L_8 = __this->___m_BufferPointer_1;
		int32_t L_9 = __this->___m_BitPosition_3;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 8));
		V_3 = L_10;
		__this->___m_BitPosition_3 = L_10;
		int32_t L_11 = V_3;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((int32_t)(L_11>>3)))));
		int32_t L_13 = V_2;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_6>>((int32_t)(L_7&((int32_t)31)))))|((int32_t)(L_12<<((int32_t)(L_13&((int32_t)31))))))));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitReader_ReadBit_m3BAFA8BBEC00E14319F8E1536B9BF50A4CB05BCA_inline (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, bool* ___bit0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int offset = m_BitPosition & 7;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0&7));
		// int pos = m_BitPosition >> 3;
		int32_t L_1 = __this->___m_BitPosition_3;
		V_1 = ((int32_t)(L_1>>3));
		// bit = (m_BufferPointer[pos] & (1 << offset)) != 0;
		bool* L_2 = ___bit0;
		uint8_t* L_3 = __this->___m_BufferPointer_1;
		int32_t L_4 = V_1;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)));
		int32_t L_6 = V_0;
		*((int8_t*)L_2) = (int8_t)((!(((uint32_t)((int32_t)(L_5&((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		// ++m_BitPosition;
		int32_t L_7 = __this->___m_BitPosition_3;
		__this->___m_BitPosition_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BitWriter_get_BitAligned_m7E6092AF96896EBF095F1111166F413B6578C113_inline (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_BitPosition & 7) == 0;
		int32_t L_0 = __this->___m_BitPosition_3;
		return (bool)((((int32_t)((int32_t)(L_0&7))) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_CommitBitwiseWrites_m1311C2B1584E87D68403CC6B891410BD5A069BE5_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// Handle->Position += amount;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t* L_1 = (&L_0->___Position_1);
		int32_t* L_2 = L_1;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___amount0;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitWriter_WriteMisaligned_m1CA7257D50E76149797445E095B54646CCB0188E_inline (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int off = m_BitPosition & 7;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0&7));
		// int pos = m_BitPosition >> 3;
		int32_t L_1 = __this->___m_BitPosition_3;
		V_1 = ((int32_t)(L_1>>3));
		// int shift1 = 8 - off;
		int32_t L_2 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(8, L_2));
		// m_BufferPointer[pos + 1] = (byte)((m_BufferPointer[pos + 1] & (0xFF << off)) | (value >> shift1));
		uint8_t* L_3 = __this->___m_BufferPointer_1;
		int32_t L_4 = V_1;
		uint8_t* L_5 = __this->___m_BufferPointer_1;
		int32_t L_6 = V_1;
		int32_t L_7 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)))));
		int32_t L_8 = V_0;
		uint8_t L_9 = ___value0;
		int32_t L_10 = V_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_add(L_4, 1))))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_7&((int32_t)(((int32_t)255)<<((int32_t)(L_8&((int32_t)31)))))))|((int32_t)((int32_t)L_9>>((int32_t)(L_10&((int32_t)31))))))));
		// m_BufferPointer[pos] = (byte)((m_BufferPointer[pos] & (0xFF >> shift1)) | (value << off));
		uint8_t* L_11 = __this->___m_BufferPointer_1;
		int32_t L_12 = V_1;
		uint8_t* L_13 = __this->___m_BufferPointer_1;
		int32_t L_14 = V_1;
		int32_t L_15 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14)));
		int32_t L_16 = V_2;
		uint8_t L_17 = ___value0;
		int32_t L_18 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_15&((int32_t)(((int32_t)255)>>((int32_t)(L_16&((int32_t)31)))))))|((int32_t)((int32_t)L_17<<((int32_t)(L_18&((int32_t)31))))))));
		// m_BitPosition += 8;
		int32_t L_19 = __this->___m_BitPosition_3;
		__this->___m_BitPosition_3 = ((int32_t)il2cpp_codegen_add(L_19, 8));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitWriter_WriteBit_mE58A09DA4068921D422E73DBC34AEAB771DC6C10_inline (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, bool ___bit0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* G_B2_0 = NULL;
	uint8_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	uint8_t* G_B3_1 = NULL;
	{
		// int offset = m_BitPosition & 7;
		int32_t L_0 = __this->___m_BitPosition_3;
		V_0 = ((int32_t)(L_0&7));
		// int pos = m_BitPosition >> 3;
		int32_t L_1 = __this->___m_BitPosition_3;
		V_1 = ((int32_t)(L_1>>3));
		// ++m_BitPosition;
		int32_t L_2 = __this->___m_BitPosition_3;
		__this->___m_BitPosition_3 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// m_BufferPointer[pos] = (byte)(bit ? (m_BufferPointer[pos] & ~(1 << offset)) | (1 << offset) : (m_BufferPointer[pos] & ~(1 << offset)));
		uint8_t* L_3 = __this->___m_BufferPointer_1;
		int32_t L_4 = V_1;
		bool L_5 = ___bit0;
		G_B1_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4));
		if (L_5)
		{
			G_B2_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4));
			goto IL_003e;
		}
	}
	{
		uint8_t* L_6 = __this->___m_BufferPointer_1;
		int32_t L_7 = V_1;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7)));
		int32_t L_9 = V_0;
		G_B3_0 = ((int32_t)(L_8&((~((int32_t)(1<<((int32_t)(L_9&((int32_t)31)))))))));
		G_B3_1 = G_B1_0;
		goto IL_0056;
	}

IL_003e:
	{
		uint8_t* L_10 = __this->___m_BufferPointer_1;
		int32_t L_11 = V_1;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, L_11)));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		G_B3_0 = ((int32_t)(((int32_t)(L_12&((~((int32_t)(1<<((int32_t)(L_13&((int32_t)31)))))))))|((int32_t)(1<<((int32_t)(L_14&((int32_t)31)))))));
		G_B3_1 = G_B2_0;
	}

IL_0056:
	{
		*((int8_t*)G_B3_1) = (int8_t)((int32_t)(uint8_t)G_B3_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferSerializerReader__ctor_m515970021ADFE498DF3A13F559F76CC84A79E6B4_inline (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 ___reader0, const RuntimeMethod* method) 
{
	{
		// m_Reader = reader;
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 L_0 = ___reader0;
		__this->___m_Reader_0 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 BufferSerializerReader_GetFastBufferReader_m89F1B728346A534360CC4233C7A0875AAB3191E2_inline (BufferSerializerReader_t2DFEA0B561760DA58E0E7B99045EE8643459B8C3* __this, const RuntimeMethod* method) 
{
	{
		// return m_Reader;
		FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141 L_0 = __this->___m_Reader_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadByteSafe_mC94572634D5F5E8D6BB4E75E8FC7E9210634F6B5_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!TryBeginReadInternal(1))
		bool L_0;
		L_0 = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(__this, 1, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_1 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadByteSafe_mC94572634D5F5E8D6BB4E75E8FC7E9210634F6B5_RuntimeMethod_var)));
	}

IL_0014:
	{
		// value = Handle->BufferPointer[Handle->Position++];
		uint8_t* L_2 = ___value0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___Position_1);
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		V_0 = L_8;
		int32_t L_9 = V_0;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_0;
		int32_t L_11 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_10)));
		*((int8_t*)L_2) = (int8_t)L_11;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginRead_mB3E311FECDB79255A5D3F909F36D5BB31EB6F463_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Length_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferSerializerWriter__ctor_m0CD31683DBAABFB3E66DC1F804B7088C2431FC1D_inline (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___writer0, const RuntimeMethod* method) 
{
	{
		// m_Writer = writer;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_0 = ___writer0;
		__this->___m_Writer_0 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 BufferSerializerWriter_GetFastBufferWriter_m9C09F0BB23C63D8AF3FB16608DD64FF5B68C0FFE_inline (BufferSerializerWriter_t882E97688DEB19905E53A05828A1247608920231* __this, const RuntimeMethod* method) 
{
	{
		// return m_Writer;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_0 = __this->___m_Writer_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteByteSafe_m92532B2CFB3C830D32E689C7BCDF69CA1F4A4B5A_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!TryBeginWriteInternal(1))
		bool L_0;
		L_0 = FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline(__this, 1, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_1 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteByteSafe_m92532B2CFB3C830D32E689C7BCDF69CA1F4A4B5A_RuntimeMethod_var)));
	}

IL_0014:
	{
		// Handle->BufferPointer[Handle->Position++] = value;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t* L_5 = (&L_4->___Position_1);
		int32_t* L_6 = L_5;
		int32_t L_7 = *((int32_t*)L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ___value0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_9))) = (int8_t)L_10;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m158CCEBA6A37B6DE886D87852316418706519ACB_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		int32_t L_7 = ___bytes0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_8 = __this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity_3;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity_4;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_m51D828C37FF9C26B2E30C326807B6ECC470A2668(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteByte_m0239DB587E7BD675850DDF0A8DA326AB4059E37B_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Handle->BufferPointer[Handle->Position++] = value;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t* L_3 = (&L_2->___Position_1);
		int32_t* L_4 = L_3;
		int32_t L_5 = *((int32_t*)L_4);
		V_0 = L_5;
		int32_t L_6 = V_0;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		uint8_t L_8 = ___value0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_7))) = (int8_t)L_8;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Position_m9C85930A2FA1CE815E1417E0D474851197C9F2CE_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Position;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Length;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Length_2;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_m2D3D526A108E7354E6C44A09D93B78D4F2143F29_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// return Handle->BufferPointer;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Position > Handle->Length ? Handle->Position : Handle->Length;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Length_2;
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Length_2;
		return L_5;
	}

IL_0024:
	{
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_6 = __this->___Handle_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Position_1;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_Seek_m4DEE404782D32248B14E4231AEC630B26C429C5D_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___where0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Handle->Position = Math.Min(Length, where);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		int32_t L_1;
		L_1 = FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_inline(__this, NULL);
		int32_t L_2 = ___where0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_1, L_2, NULL);
		NullCheck(L_0);
		L_0->___Position_1 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_MarkBytesRead_m271CEEF11D50AAFB36C337CC7CFCACDF14515DBE_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// Handle->Position += amount;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t* L_1 = (&L_0->___Position_1);
		int32_t* L_2 = L_1;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___amount0;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Length_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferReader_ToArray_m8AF64B439AC29DDAC04B3623C5344153C9385657_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	{
		// byte[] ret = new byte[Length];
		int32_t L_0;
		L_0 = FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		// fixed (byte* b = ret)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		G_B2_0 = G_B1_0;
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0015:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		goto IL_0023;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		// UnsafeUtility.MemCpy(b, Handle->BufferPointer, Length);
		uint8_t* L_6 = V_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___BufferPointer_0;
		int32_t L_9;
		L_9 = FastBufferReader_get_Length_m2B7D564D0752CF34471CB1A60F3B04472E6C33B8_inline(__this, NULL);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_6, (void*)L_8, ((int64_t)L_9), NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// return ret;
		return G_B4_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferReader_GetUnsafePtr_m62FF03D70832C45ACEDB0716218012AABFC86FE3_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// return Handle->BufferPointer;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferReader_GetUnsafePtrAtCurrentPosition_m39F8D3FA67EDE2FDD2294D2D23854ADE372A6D8C_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, const RuntimeMethod* method) 
{
	{
		// return Handle->BufferPointer + Handle->Position;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadByte_m27055993CE47BB6F1206F1E7EFA9117E5EEB430F_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// value = Handle->BufferPointer[Handle->Position++];
		uint8_t* L_0 = ___value0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_1 = __this->___Handle_0;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___Position_1);
		int32_t* L_5 = L_4;
		int32_t L_6 = *((int32_t*)L_5);
		V_0 = L_6;
		int32_t L_7 = V_0;
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_8)));
		*((int8_t*)L_0) = (int8_t)L_9;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytes_m7683AEA236C498E487E6F7703A8D7BDF1A13DBF4_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// UnsafeUtility.MemCpy(value + offset, (Handle->BufferPointer + Handle->Position), size);
		uint8_t* L_0 = ___value0;
		int32_t L_1 = ___offset2;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position_1;
		int32_t L_6 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_5)), ((int64_t)L_6), NULL);
		// Handle->Position += size;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___Position_1);
		int32_t* L_9 = L_8;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___size1;
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// if (!TryBeginReadInternal(size))
		int32_t L_0 = ___size1;
		bool L_1;
		L_1 = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116_RuntimeMethod_var)));
	}

IL_0014:
	{
		// UnsafeUtility.MemCpy(value + offset, (Handle->BufferPointer + Handle->Position), size);
		uint8_t* L_3 = ___value0;
		int32_t L_4 = ___offset2;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Position_1;
		int32_t L_9 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_8)), ((int64_t)L_9), NULL);
		// Handle->Position += size;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___Position_1);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___size1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytes_m9088798D7BD8D906C4E85FC38A106AE341FFC332_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// fixed (byte* ptr = value)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0010;
		}
	}

IL_000b:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0019;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0019:
	{
		// ReadBytes(ptr, size, offset);
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___size1;
		int32_t L_7 = ___offset2;
		FastBufferReader_ReadBytes_m7683AEA236C498E487E6F7703A8D7BDF1A13DBF4_inline(__this, L_5, L_6, L_7, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_mCFA7382E44FFE31883428800EDA38DC7F9B31213_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// fixed (byte* ptr = value)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0010;
		}
	}

IL_000b:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0019;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0019:
	{
		// ReadBytesSafe(ptr, size, offset);
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___size1;
		int32_t L_7 = ___offset2;
		FastBufferReader_ReadBytesSafe_mB2235CD257890CBE2E16F70AB7B9853CFAB91116_inline(__this, L_5, L_6, L_7, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_mB1BD6EB7F075F23A3A4C31CD0C99B1C2DCF75A15_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Position;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Capacity_mB5749CA366D0A9C7A3B61D9E3EA6C5A4028D8165_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Capacity;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Capacity_3;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_MaxCapacity_mFC5FB431F011E41EC7D0FC130844100F56889E0A_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->MaxCapacity;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___MaxCapacity_4;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_m4F347F70AF2595629090A859987E55191A3A6ADD_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___where0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// where = Math.Min(where, Handle->Capacity);
		int32_t L_0 = ___where0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_1 = __this->___Handle_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Capacity_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, L_2, NULL);
		___where0 = L_3;
		// if (Handle->Position > Handle->Length && where < Handle->Position)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position_1;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_6 = __this->___Handle_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Length_2;
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_8 = ___where0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_9 = __this->___Handle_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Position_1;
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_004f;
		}
	}
	{
		// Handle->Length = Handle->Position;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_11 = __this->___Handle_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Position_1;
		NullCheck(L_11);
		L_11->___Length_2 = L_13;
	}

IL_004f:
	{
		// Handle->Position = where;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_14 = __this->___Handle_0;
		int32_t L_15 = ___where0;
		NullCheck(L_14);
		L_14->___Position_1 = L_15;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Truncate_m5562272150A562BEA331A532B2FA4F05EBA55512_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___where0, const RuntimeMethod* method) 
{
	{
		// if (where == -1)
		int32_t L_0 = ___where0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000c;
		}
	}
	{
		// where = Position;
		int32_t L_1;
		L_1 = FastBufferWriter_get_Position_mB1BD6EB7F075F23A3A4C31CD0C99B1C2DCF75A15_inline(__this, NULL);
		___where0 = L_1;
	}

IL_000c:
	{
		// if (Handle->Position > where)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		int32_t L_4 = ___where0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		// Handle->Position = where;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = __this->___Handle_0;
		int32_t L_6 = ___where0;
		NullCheck(L_5);
		L_5->___Position_1 = L_6;
	}

IL_0026:
	{
		// if (Handle->Length > where)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Length_2;
		int32_t L_9 = ___where0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0040;
		}
	}
	{
		// Handle->Length = where;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_10 = __this->___Handle_0;
		int32_t L_11 = ___where0;
		NullCheck(L_10);
		L_10->___Length_2 = L_11;
	}

IL_0040:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		int32_t L_7 = ___bytes0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_8 = __this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity_3;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity_4;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_m51D828C37FF9C26B2E30C326807B6ECC470A2668(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferWriter_ToArray_m084B89D2993DC9EF88E6BDD7CD89428D2E3D00C4_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	{
		// byte[] ret = new byte[Length];
		int32_t L_0;
		L_0 = FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		// fixed (byte* b = ret)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		G_B2_0 = G_B1_0;
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0015:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		goto IL_0023;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		// UnsafeUtility.MemCpy(b, Handle->BufferPointer, Length);
		uint8_t* L_6 = V_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___BufferPointer_0;
		int32_t L_9;
		L_9 = FastBufferWriter_get_Length_m58BCAD427322A1C4C0C564BE6EF20F596CBC4973_inline(__this, NULL);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_6, (void*)L_8, ((int64_t)L_9), NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// return ret;
		return G_B4_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtrAtCurrentPosition_m3A7E9A92309FEDD721B8AA4C2500E44DEBC3AF1C_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, const RuntimeMethod* method) 
{
	{
		// return Handle->BufferPointer + Handle->Position;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// UnsafeUtility.MemCpy((Handle->BufferPointer + Handle->Position), value + offset, size);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		uint8_t* L_4 = ___value0;
		int32_t L_5 = ___offset2;
		int32_t L_6 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_5)), ((int64_t)L_6), NULL);
		// Handle->Position += size;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___Position_1);
		int32_t* L_9 = L_8;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___size1;
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_m8BE2A1AFC6F68CE2E6B5DBAC53E7DC22817FA07B_inline (String_t* ___s0, bool ___oneByteChars1, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	{
		// return sizeof(int) + s.Length * (oneByteChars ? sizeof(byte) : sizeof(char));
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		bool L_2 = ___oneByteChars1;
		G_B1_0 = L_1;
		G_B1_1 = 4;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = 4;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000e:
	{
		return ((int32_t)il2cpp_codegen_add(G_B3_2, ((int32_t)il2cpp_codegen_multiply(G_B3_1, G_B3_0))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// if (!TryBeginWriteInternal(size))
		int32_t L_0 = ___size1;
		bool L_1;
		L_1 = FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383_RuntimeMethod_var)));
	}

IL_0014:
	{
		// UnsafeUtility.MemCpy((Handle->BufferPointer + Handle->Position), value + offset, size);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		uint8_t* L_7 = ___value0;
		int32_t L_8 = ___offset2;
		int32_t L_9 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_8)), ((int64_t)L_9), NULL);
		// Handle->Position += size;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___Position_1);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___size1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m8F93E9549A2CD555FE7E4ABFD449BA06CCFB4AB9_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* G_B6_0 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B6_1 = NULL;
	uint8_t* G_B5_0 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	uint8_t* G_B7_1 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B7_2 = NULL;
	{
		// fixed (byte* ptr = value)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// WriteBytes(ptr, size == -1 ? value.Length : size, offset);
		uint8_t* L_4 = V_0;
		int32_t L_5 = ___size1;
		G_B5_0 = L_4;
		G_B5_1 = __this;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			G_B6_0 = L_4;
			G_B6_1 = __this;
			goto IL_0021;
		}
	}
	{
		int32_t L_6 = ___size1;
		G_B7_0 = L_6;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0024;
	}

IL_0021:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___value0;
		NullCheck(L_7);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0024:
	{
		int32_t L_8 = ___offset2;
		FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline(G_B7_2, G_B7_1, G_B7_0, L_8, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mBA4E60C790DF9834AF295A11D71F8FFE5D0C63EA_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t* G_B6_0 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B6_1 = NULL;
	uint8_t* G_B5_0 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	uint8_t* G_B7_1 = NULL;
	FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* G_B7_2 = NULL;
	{
		// fixed (byte* ptr = value)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// WriteBytesSafe(ptr, size == -1 ? value.Length : size, offset);
		uint8_t* L_4 = V_0;
		int32_t L_5 = ___size1;
		G_B5_0 = L_4;
		G_B5_1 = __this;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			G_B6_0 = L_4;
			G_B6_1 = __this;
			goto IL_0021;
		}
	}
	{
		int32_t L_6 = ___size1;
		G_B7_0 = L_6;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0024;
	}

IL_0021:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___value0;
		NullCheck(L_7);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0024:
	{
		int32_t L_8 = ___offset2;
		FastBufferWriter_WriteBytesSafe_mEB57787BD55111BB993D38E8EAB8F2CEAA5F3383_inline(G_B7_2, G_B7_1, G_B7_0, L_8, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_CopyTo_m101384A202A2DB4CD669955967E9CBCE80202358_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___other0, const RuntimeMethod* method) 
{
	{
		// other.WriteBytes(Handle->BufferPointer, Handle->Position);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline((&___other0), L_1, L_3, 0, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_CopyFrom_m216BB971A08EC2F01D7E9783FE1D32E6BE45B237_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 ___other0, const RuntimeMethod* method) 
{
	{
		// WriteBytes(other.Handle->BufferPointer, other.Handle->Position);
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_0 = ___other0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_1 = L_0.___Handle_0;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___BufferPointer_0;
		FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2 L_3 = ___other0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_4 = L_3.___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position_1;
		FastBufferWriter_WriteBytes_m8BD60B0ACBCD73F03635FDC92AC2620AB5A3BD76_inline(__this, L_2, L_5, 0, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricHeader_set_EventFactoryTypeName_mA1214A10912E33A7545164CB45F5CF934F53FC26_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___value0, const RuntimeMethod* method) 
{
	{
		// public FixedString128Bytes EventFactoryTypeName { get; set; }
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_0 = ___value0;
		__this->___U3CEventFactoryTypeNameU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricHeader_set_MetricContainerType_m377CFBDE2D7F52DCAD1E3DB116A34744F7893F56_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public MetricContainerType MetricContainerType { get; set; }
		uint32_t L_0 = ___value0;
		__this->___U3CMetricContainerTypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricHeader_set_MetricId_mE80D44D6F362F50FDAE347AD156F0DF072F10114_inline (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* __this, MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___value0, const RuntimeMethod* method) 
{
	{
		// public MetricId MetricId { get; set; }
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = ___value0;
		__this->___U3CMetricIdU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MetricCollection_get_Metrics_m8944AF8C292CBD38316F9926DB7E732A8D749426_inline (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<IMetric> Metrics { get; }
		RuntimeObject* L_0 = __this->___U3CMetricsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MetricCollection_get_ConnectionId_m9642B5D987352E9CC35A0252F96EB7544E583BE3_inline (MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* __this, const RuntimeMethod* method) 
{
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		uint64_t L_0 = __this->___U3CConnectionIdU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_inline (BaseUnits_tEF94864B54EB65192F2B574EEF21FCA8CBC98DDA* __this, const RuntimeMethod* method) 
{
	{
		// internal sbyte BytesExponent { get; }
		int8_t L_0 = __this->___U3CBytesExponentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t Math_Abs_m58E959B262B65D499F0CA605CC256C125E558D4C_inline (int8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int8_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int8_t L_1 = ___value0;
		___value0 = ((int8_t)((-L_1)));
		int8_t L_2 = ___value0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Math_ThrowAbsOverflow_m6BE7D786CB9020E3E0F83D515639F4C8BA6B069F(NULL);
	}

IL_0012:
	{
		int8_t L_3 = ___value0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C Metric_1_get_Id_m6A7B07AC7AC1A9C32308ED32A9C459E41803884A_gshared_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, const RuntimeMethod* method) 
{
	{
		// public MetricId Id { get; }
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C)__this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C Metric_1_get_Id_mC529C04F22D39B0A7C860DAFAEAC6B414571D501_gshared_inline (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, const RuntimeMethod* method) 
{
	{
		// public MetricId Id { get; }
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C)__this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C Metric_1_get_Id_mB054BD8BD9AFD7037D0A2828EFB7351C88E7C4FB_gshared_inline (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F* __this, const RuntimeMethod* method) 
{
	{
		// public MetricId Id { get; }
		MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C L_0 = (MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C)__this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Metric_1_get_Value_m1D2BF8139FF98F985BA7D047982873AB7B80AB49_gshared_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, const RuntimeMethod* method) 
{
	{
		// public TValue Value { get; protected set; }
		int64_t L_0 = (int64_t)__this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_m24C8BE1A5B5142177E0D9BC55E8C72C6F2A2A566_gshared_inline (Metric_1_tAC80D0B795895C4298E15D4CD7FAB14EAA01D334* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public TValue Value { get; protected set; }
		int64_t L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_m0A786E4071DFABE2662E097144A452FDDE697F68_gshared_inline (Metric_1_t33DDF1E9BC33571E392F46497B6E77D909E63390* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public TValue Value { get; protected set; }
		double L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_mE469305499E24FFF5BB88E7A52506DBC33FB1F9C_gshared_inline (Metric_1_tD33D9DCBAC4B6124F78514442EC8A390E127271F* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) 
{
	{
		// public TValue Value { get; protected set; }
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_gshared_inline (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitReader_ReadPartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7CE9F8E7F571F935B51876F0D52CCD9DAF5C7221_gshared_inline (BitReader_tC2C5972F82B2C666BA22750BC9D094A2A4196528* __this, uint64_t* ___value0, int32_t ___bytesToRead1, int32_t ___offsetBytes2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint64_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		// var val = new T();
		uint64_t L_0;
		L_0 = Activator_CreateInstance_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCDF808CDA81B0ABCCE66D0FFE7CB57DE73119E5C(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		// byte* ptr = ((byte*)&val) + offsetBytes;
		int32_t L_1 = ___offsetBytes2;
		// byte* bufferPointer = m_BufferPointer + m_Position;
		uint8_t* L_2 = (uint8_t*)__this->___m_BufferPointer_1;
		int32_t L_3 = (int32_t)__this->___m_Position_2;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3));
		// UnsafeUtility.MemCpy(ptr, bufferPointer, bytesToRead);
		uint8_t* L_4 = V_1;
		int32_t L_5 = ___bytesToRead1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)(&V_0)), L_1)), (void*)L_4, ((int64_t)L_5), NULL);
		// m_BitPosition += bytesToRead * k_BitsPerByte;
		int32_t L_6 = (int32_t)__this->___m_BitPosition_3;
		int32_t L_7 = ___bytesToRead1;
		__this->___m_BitPosition_3 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_multiply(L_7, 8))));
		// value = val;
		uint64_t* L_8 = ___value0;
		uint64_t L_9 = V_0;
		*(uint64_t*)L_8 = L_9;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitWriter_WritePartialValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2141D5870D1F4E0362442402A575164053AD5BC3_gshared_inline (BitWriter_tDD5F64ADBAEF0587AA8AE53E946AF0A2436A605C* __this, uint64_t ___value0, int32_t ___bytesToWrite1, int32_t ___offsetBytes2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		// byte* ptr = ((byte*)&value) + offsetBytes;
		int32_t L_0 = ___offsetBytes2;
		V_0 = (uint8_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)(&___value0)), L_0));
		// byte* bufferPointer = m_BufferPointer + m_Position;
		uint8_t* L_1 = (uint8_t*)__this->___m_BufferPointer_1;
		int32_t L_2 = (int32_t)__this->___m_Position_2;
		// UnsafeUtility.MemCpy(bufferPointer, ptr, bytesToWrite);
		uint8_t* L_3 = V_0;
		int32_t L_4 = ___bytesToWrite1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), (void*)L_3, ((int64_t)L_4), NULL);
		// m_BitPosition += bytesToWrite * k_BitsPerByte;
		int32_t L_5 = (int32_t)__this->___m_BitPosition_3;
		int32_t L_6 = ___bytesToWrite1;
		__this->___m_BitPosition_3 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_multiply(L_6, 8))));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB0BC6278DE63DB9413D2F07D37071687CAC0DFDE_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(uint8_t);
		V_0 = (int32_t)L_0;
		uint8_t* L_1 = ___value0;
		V_1 = L_1;
		// fixed (T* ptr = &value)
		uint8_t* L_2 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->___Position_1;
		int32_t L_7 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)L_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_6)), ((int64_t)L_7), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_8 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t* L_9 = (int32_t*)(&L_8->___Position_1);
		int32_t* L_10 = L_9;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = V_0;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, L_12));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA2502681A3ECC4F0F8BDD9E7AB27AE905706E432_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint32_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(uint32_t);
		V_0 = (int32_t)L_0;
		uint32_t* L_1 = ___value0;
		V_1 = L_1;
		// fixed (T* ptr = &value)
		uint32_t* L_2 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_3 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_5 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->___Position_1;
		int32_t L_7 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)L_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_6)), ((int64_t)L_7), NULL);
		V_1 = (uint32_t*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_8 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t* L_9 = (int32_t*)(&L_8->___Position_1);
		int32_t* L_10 = L_9;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = V_0;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, L_12));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE59DCE7C32D46CBDAD1F33E05992276E7E897D9C_gshared_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint32_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(uint32_t);
		V_0 = (int32_t)L_0;
		uint32_t* L_1 = ___value0;
		V_2 = L_1;
		// fixed (T* ptr = &value)
		uint32_t* L_2 = V_2;
		V_1 = (uint32_t*)((uintptr_t)L_2);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_3 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_5 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->___Position_1;
		uint32_t* L_7 = V_1;
		int32_t L_8 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_6)), (void*)L_7, ((int64_t)L_8), NULL);
		V_2 = (uint32_t*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_9 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_9);
		int32_t* L_10 = (int32_t*)(&L_9->___Position_1);
		int32_t* L_11 = L_10;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_0;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5F5C9000217BB7839B7146F5E5C76D6CF0DFA0B3_gshared_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, uint64_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	uint64_t* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(uint64_t);
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m5F5C9000217BB7839B7146F5E5C76D6CF0DFA0B3_RuntimeMethod_var)));
	}

IL_001b:
	{
		uint64_t* L_4 = ___value0;
		V_2 = L_4;
		// fixed (T* ptr = &value)
		uint64_t* L_5 = V_2;
		V_1 = (uint64_t*)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_6 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_8 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		uint64_t* L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), (void*)L_10, ((int64_t)L_11), NULL);
		V_2 = (uint64_t*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)(&L_12->___Position_1);
		int32_t* L_14 = L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4A7524495BACD1B2C706221F5419C8783633F221_gshared_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, int32_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(int32_t);
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4A7524495BACD1B2C706221F5419C8783633F221_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t* L_4 = ___value0;
		V_2 = L_4;
		// fixed (T* ptr = &value)
		int32_t* L_5 = V_2;
		V_1 = (int32_t*)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_6 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_8 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		int32_t* L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), (void*)L_10, ((int64_t)L_11), NULL);
		V_2 = (int32_t*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)(&L_12->___Position_1);
		int32_t* L_14 = L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m15736FBAFD419473C583C710188DB2FB93A9CE85_gshared_inline (FastBufferWriter_tF193B61974B2583495CB76604E0FF864145385D2* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* V_1 = NULL;
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C);
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m996E3917C723DC557F30B9265A122C198A33D630_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m15736FBAFD419473C583C710188DB2FB93A9CE85_RuntimeMethod_var)));
	}

IL_001b:
	{
		MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* L_4 = ___value0;
		V_2 = L_4;
		// fixed (T* ptr = &value)
		MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* L_5 = V_2;
		V_1 = (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_6 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_8 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), (void*)L_10, ((int64_t)L_11), NULL);
		V_2 = (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D* L_12 = (WriterHandle_t09D6CAC7C96C65EFA84ABCEB42C480438E1F632D*)__this->___Handle_0;
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)(&L_12->___Position_1);
		int32_t* L_14 = L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB606784170577636C0C8612B9C23547AAD78F8E4_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, uint64_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(uint64_t);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB606784170577636C0C8612B9C23547AAD78F8E4_RuntimeMethod_var)));
	}

IL_001b:
	{
		uint64_t* L_4 = ___value0;
		V_1 = L_4;
		// fixed (T* ptr = &value)
		uint64_t* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_6 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_8 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)L_5), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), ((int64_t)L_10), NULL);
		V_1 = (uint64_t*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_11 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)(&L_11->___Position_1);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C62D190000EAAB69F20F921A12908AB1DC8E97A_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, int32_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(int32_t);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C62D190000EAAB69F20F921A12908AB1DC8E97A_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t* L_4 = ___value0;
		V_1 = L_4;
		// fixed (T* ptr = &value)
		int32_t* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_6 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_8 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)L_5), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), ((int64_t)L_10), NULL);
		V_1 = (int32_t*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_11 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)(&L_11->___Position_1);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m9B9FC681AF5522CE6EEC94A603F62AB443E997C4_gshared_inline (FastBufferReader_t6A21E108478D9135887B4FA4CCEE013493B22141* __this, MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_mDDBCE3193145584F47FB8987A0EF727D0B76296D_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisMetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C_m9B9FC681AF5522CE6EEC94A603F62AB443E997C4_RuntimeMethod_var)));
	}

IL_001b:
	{
		MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* L_4 = ___value0;
		V_1 = L_4;
		// fixed (T* ptr = &value)
		MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_6 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_8 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)L_5), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), ((int64_t)L_10), NULL);
		V_1 = (MetricHeader_tA0B0767D6B8B5647E33B93EF28A5D0C85EEB343C*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8* L_11 = (ReaderHandle_t098E77ED5F9EECB54BBB136544FF910614B417E8*)__this->___Handle_0;
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)(&L_11->___Position_1);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, L_15));
		// }
		return;
	}
}
