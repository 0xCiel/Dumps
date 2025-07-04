﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_EXiakongMaikefengMd1001

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_EXiakongMaikefengMd1001.ABP_EXiakongMaikefengMd1001_C.ExecuteUbergraph_ABP_EXiakongMaikefengMd1001
// 0x0030 (0x0030 - 0x0000)
struct ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_MainAnimInstance_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001) == 0x000008, "Wrong alignment on ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001");
static_assert(sizeof(ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001) == 0x000030, "Wrong size on ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001");
static_assert(offsetof(ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001, EntryPoint) == 0x000000, "Member 'ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001, K2Node_DynamicCast_AsTs_Base_Character) == 0x000018, "Member 'ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001, CallFunc_MainAnimInstance_ReturnValue) == 0x000028, "Member 'ABP_EXiakongMaikefengMd1001_C_ExecuteUbergraph_ABP_EXiakongMaikefengMd1001::CallFunc_MainAnimInstance_ReturnValue' has a wrong offset!");

// Function ABP_EXiakongMaikefengMd1001.ABP_EXiakongMaikefengMd1001_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_EXiakongMaikefengMd1001_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_EXiakongMaikefengMd1001_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_EXiakongMaikefengMd1001_C_AnimGraph");
static_assert(sizeof(ABP_EXiakongMaikefengMd1001_C_AnimGraph) == 0x000010, "Wrong size on ABP_EXiakongMaikefengMd1001_C_AnimGraph");
static_assert(offsetof(ABP_EXiakongMaikefengMd1001_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_EXiakongMaikefengMd1001_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

