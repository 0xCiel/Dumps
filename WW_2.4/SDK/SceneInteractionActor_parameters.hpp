﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SceneInteractionActor

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SceneInteractionActor.SceneInteractionActor_C.ExecuteUbergraph_SceneInteractionActor
// 0x0008 (0x0008 - 0x0000)
struct SceneInteractionActor_C_ExecuteUbergraph_SceneInteractionActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SceneInteractionActor_C_ExecuteUbergraph_SceneInteractionActor) == 0x000004, "Wrong alignment on SceneInteractionActor_C_ExecuteUbergraph_SceneInteractionActor");
static_assert(sizeof(SceneInteractionActor_C_ExecuteUbergraph_SceneInteractionActor) == 0x000008, "Wrong size on SceneInteractionActor_C_ExecuteUbergraph_SceneInteractionActor");
static_assert(offsetof(SceneInteractionActor_C_ExecuteUbergraph_SceneInteractionActor, EntryPoint) == 0x000000, "Member 'SceneInteractionActor_C_ExecuteUbergraph_SceneInteractionActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(SceneInteractionActor_C_ExecuteUbergraph_SceneInteractionActor, K2Node_Event_EndPlayReason) == 0x000004, "Member 'SceneInteractionActor_C_ExecuteUbergraph_SceneInteractionActor::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function SceneInteractionActor.SceneInteractionActor_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct SceneInteractionActor_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SceneInteractionActor_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on SceneInteractionActor_C_ReceiveEndPlay");
static_assert(sizeof(SceneInteractionActor_C_ReceiveEndPlay) == 0x000001, "Wrong size on SceneInteractionActor_C_ReceiveEndPlay");
static_assert(offsetof(SceneInteractionActor_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'SceneInteractionActor_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function SceneInteractionActor.SceneInteractionActor_C.AddMatrialDataForChildrenActor
// 0x0010 (0x0010 - 0x0000)
struct SceneInteractionActor_C_AddMatrialDataForChildrenActor final
{
public:
	class AActor*                                 actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UItemMaterialControllerActorData_C*     materialData;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(SceneInteractionActor_C_AddMatrialDataForChildrenActor) == 0x000008, "Wrong alignment on SceneInteractionActor_C_AddMatrialDataForChildrenActor");
static_assert(sizeof(SceneInteractionActor_C_AddMatrialDataForChildrenActor) == 0x000010, "Wrong size on SceneInteractionActor_C_AddMatrialDataForChildrenActor");
static_assert(offsetof(SceneInteractionActor_C_AddMatrialDataForChildrenActor, actor) == 0x000000, "Member 'SceneInteractionActor_C_AddMatrialDataForChildrenActor::actor' has a wrong offset!");
static_assert(offsetof(SceneInteractionActor_C_AddMatrialDataForChildrenActor, materialData) == 0x000008, "Member 'SceneInteractionActor_C_AddMatrialDataForChildrenActor::materialData' has a wrong offset!");

// Function SceneInteractionActor.SceneInteractionActor_C.ResetTagActorHide
// 0x000C (0x000C - 0x0000)
struct SceneInteractionActor_C_ResetTagActorHide final
{
public:
	struct FGameplayTag                           tag;                                               // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(SceneInteractionActor_C_ResetTagActorHide) == 0x000004, "Wrong alignment on SceneInteractionActor_C_ResetTagActorHide");
static_assert(sizeof(SceneInteractionActor_C_ResetTagActorHide) == 0x00000C, "Wrong size on SceneInteractionActor_C_ResetTagActorHide");
static_assert(offsetof(SceneInteractionActor_C_ResetTagActorHide, tag) == 0x000000, "Member 'SceneInteractionActor_C_ResetTagActorHide::tag' has a wrong offset!");

// Function SceneInteractionActor.SceneInteractionActor_C.StopExtraEffectOnTagsChange
// 0x000C (0x000C - 0x0000)
struct SceneInteractionActor_C_StopExtraEffectOnTagsChange final
{
public:
	struct FGameplayTag                           tag;                                               // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(SceneInteractionActor_C_StopExtraEffectOnTagsChange) == 0x000004, "Wrong alignment on SceneInteractionActor_C_StopExtraEffectOnTagsChange");
static_assert(sizeof(SceneInteractionActor_C_StopExtraEffectOnTagsChange) == 0x00000C, "Wrong size on SceneInteractionActor_C_StopExtraEffectOnTagsChange");
static_assert(offsetof(SceneInteractionActor_C_StopExtraEffectOnTagsChange, tag) == 0x000000, "Member 'SceneInteractionActor_C_StopExtraEffectOnTagsChange::tag' has a wrong offset!");

// Function SceneInteractionActor.SceneInteractionActor_C.GetDirectorBySequence
// 0x0010 (0x0010 - 0x0000)
struct SceneInteractionActor_C_GetDirectorBySequence final
{
public:
	class ULevelSequence*                         sequence;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SceneInteractionActor_C_GetDirectorBySequence) == 0x000008, "Wrong alignment on SceneInteractionActor_C_GetDirectorBySequence");
static_assert(sizeof(SceneInteractionActor_C_GetDirectorBySequence) == 0x000010, "Wrong size on SceneInteractionActor_C_GetDirectorBySequence");
static_assert(offsetof(SceneInteractionActor_C_GetDirectorBySequence, sequence) == 0x000000, "Member 'SceneInteractionActor_C_GetDirectorBySequence::sequence' has a wrong offset!");
static_assert(offsetof(SceneInteractionActor_C_GetDirectorBySequence, ReturnValue) == 0x000008, "Member 'SceneInteractionActor_C_GetDirectorBySequence::ReturnValue' has a wrong offset!");

// Function SceneInteractionActor.SceneInteractionActor_C.StopTagAkEvent
// 0x000C (0x000C - 0x0000)
struct SceneInteractionActor_C_StopTagAkEvent final
{
public:
	struct FGameplayTag                           tag;                                               // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SceneInteractionActor_C_StopTagAkEvent) == 0x000004, "Wrong alignment on SceneInteractionActor_C_StopTagAkEvent");
static_assert(sizeof(SceneInteractionActor_C_StopTagAkEvent) == 0x00000C, "Wrong size on SceneInteractionActor_C_StopTagAkEvent");
static_assert(offsetof(SceneInteractionActor_C_StopTagAkEvent, tag) == 0x000000, "Member 'SceneInteractionActor_C_StopTagAkEvent::tag' has a wrong offset!");

// Function SceneInteractionActor.SceneInteractionActor_C.UpdateProjectionActorTransform
// 0x0040 (0x0040 - 0x0000)
struct SceneInteractionActor_C_UpdateProjectionActorTransform final
{
public:
	struct FTransformDouble                       transform1;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SceneInteractionActor_C_UpdateProjectionActorTransform) == 0x000010, "Wrong alignment on SceneInteractionActor_C_UpdateProjectionActorTransform");
static_assert(sizeof(SceneInteractionActor_C_UpdateProjectionActorTransform) == 0x000040, "Wrong size on SceneInteractionActor_C_UpdateProjectionActorTransform");
static_assert(offsetof(SceneInteractionActor_C_UpdateProjectionActorTransform, transform1) == 0x000000, "Member 'SceneInteractionActor_C_UpdateProjectionActorTransform::transform1' has a wrong offset!");

// Function SceneInteractionActor.SceneInteractionActor_C.ApplyAnimOptimizationParams
// 0x0001 (0x0001 - 0x0000)
struct SceneInteractionActor_C_ApplyAnimOptimizationParams final
{
public:
	bool                                          bUseDistanceMap;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SceneInteractionActor_C_ApplyAnimOptimizationParams) == 0x000001, "Wrong alignment on SceneInteractionActor_C_ApplyAnimOptimizationParams");
static_assert(sizeof(SceneInteractionActor_C_ApplyAnimOptimizationParams) == 0x000001, "Wrong size on SceneInteractionActor_C_ApplyAnimOptimizationParams");
static_assert(offsetof(SceneInteractionActor_C_ApplyAnimOptimizationParams, bUseDistanceMap) == 0x000000, "Member 'SceneInteractionActor_C_ApplyAnimOptimizationParams::bUseDistanceMap' has a wrong offset!");

// Function SceneInteractionActor.SceneInteractionActor_C.PlayKuroSkeletalMeshDestruction
// 0x0010 (0x0010 - 0x0000)
struct SceneInteractionActor_C_PlayKuroSkeletalMeshDestruction final
{
public:
	class AActor*                                 actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isJumpToEnd;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SceneInteractionActor_C_PlayKuroSkeletalMeshDestruction) == 0x000008, "Wrong alignment on SceneInteractionActor_C_PlayKuroSkeletalMeshDestruction");
static_assert(sizeof(SceneInteractionActor_C_PlayKuroSkeletalMeshDestruction) == 0x000010, "Wrong size on SceneInteractionActor_C_PlayKuroSkeletalMeshDestruction");
static_assert(offsetof(SceneInteractionActor_C_PlayKuroSkeletalMeshDestruction, actor) == 0x000000, "Member 'SceneInteractionActor_C_PlayKuroSkeletalMeshDestruction::actor' has a wrong offset!");
static_assert(offsetof(SceneInteractionActor_C_PlayKuroSkeletalMeshDestruction, isJumpToEnd) == 0x000008, "Member 'SceneInteractionActor_C_PlayKuroSkeletalMeshDestruction::isJumpToEnd' has a wrong offset!");

}

