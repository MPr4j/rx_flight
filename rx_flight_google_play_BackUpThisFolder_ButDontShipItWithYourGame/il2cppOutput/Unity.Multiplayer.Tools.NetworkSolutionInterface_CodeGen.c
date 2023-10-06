#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Object Unity.Multiplayer.Tools.INetworkObjectProvider::GetNetworkObject(System.UInt64)
// 0x00000002 System.Void Unity.Multiplayer.Tools.NetworkSolutionInterface::SetInterface(Unity.Multiplayer.Tools.NetworkSolutionInterfaceParameters)
extern void NetworkSolutionInterface_SetInterface_m6951E0453FA56CD6F66C3A009BB0499DFE06BD37 (void);
// 0x00000003 Unity.Multiplayer.Tools.INetworkObjectProvider Unity.Multiplayer.Tools.NetworkSolutionInterface::get_NetworkObjectProvider()
extern void NetworkSolutionInterface_get_NetworkObjectProvider_m496222ED2FAAE98DCE8047ECDCDC8877D0612E2F (void);
// 0x00000004 UnityEngine.Object Unity.Multiplayer.Tools.NullNetworkObjectProvider::Unity.Multiplayer.Tools.INetworkObjectProvider.GetNetworkObject(System.UInt64)
extern void NullNetworkObjectProvider_Unity_Multiplayer_Tools_INetworkObjectProvider_GetNetworkObject_m6191B3B1BFACD2224CBCDB6A9FF6FF8EDDAA660E (void);
// 0x00000005 System.Void Unity.Multiplayer.Tools.NullNetworkObjectProvider::.ctor()
extern void NullNetworkObjectProvider__ctor_mF315AE0B009BB80E13E6860F1E4D1E9B2C0C52F2 (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	NULL,
	NetworkSolutionInterface_SetInterface_m6951E0453FA56CD6F66C3A009BB0499DFE06BD37,
	NetworkSolutionInterface_get_NetworkObjectProvider_m496222ED2FAAE98DCE8047ECDCDC8877D0612E2F,
	NullNetworkObjectProvider_Unity_Multiplayer_Tools_INetworkObjectProvider_GetNetworkObject_m6191B3B1BFACD2224CBCDB6A9FF6FF8EDDAA660E,
	NullNetworkObjectProvider__ctor_mF315AE0B009BB80E13E6860F1E4D1E9B2C0C52F2,
};
static const int32_t s_InvokerIndices[5] = 
{
	0,
	12853,
	13664,
	5202,
	7473,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Multiplayer_Tools_NetworkSolutionInterface_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Multiplayer_Tools_NetworkSolutionInterface_CodeGenModule = 
{
	"Unity.Multiplayer.Tools.NetworkSolutionInterface.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
