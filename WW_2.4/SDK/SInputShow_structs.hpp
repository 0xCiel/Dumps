﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SInputShow

#include "Basic.hpp"

#include "EInputAction_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// UserDefinedStruct SInputShow.SInputShow
// 0x0068 (0x0068 - 0x0000)
struct FSInputShow final
{
public:
	EInputAction                                  InputActionType_32_405A09014CEBF436EC9BE186461169A3; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkillId_29_75DD2CF342F572C8D314B990BFA49AF1;       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  BlockTag_26_3A78B26145DC9C4C38940493986D3A5E;      // 0x0008(0x0020)(Edit, BlueprintVisible)
	int32                                         ListenAttributeId_17_C47E9360431CC9F558063A8DFD0D8B59; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ListenMaxAttributeId_19_CE8030984B2B7F9A351C388A5CCCE63C; // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          MaxAttributeEffect_40_0FDC1E42412EC92297325984CFAE4AB2; // 0x0030(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FColor                                 MaxAttributeColor_35_CB81B343416FA9FB5879E2A72342745C; // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseElementColor_37_15A1082745AFD064E56547A83269C9A3; // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLongPressControlCamera_39_926D6E8445062855484838BB453FE0A9; // 0x0065(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSInputShow) == 0x000008, "Wrong alignment on FSInputShow");
static_assert(sizeof(FSInputShow) == 0x000068, "Wrong size on FSInputShow");
static_assert(offsetof(FSInputShow, InputActionType_32_405A09014CEBF436EC9BE186461169A3) == 0x000000, "Member 'FSInputShow::InputActionType_32_405A09014CEBF436EC9BE186461169A3' has a wrong offset!");
static_assert(offsetof(FSInputShow, SkillId_29_75DD2CF342F572C8D314B990BFA49AF1) == 0x000004, "Member 'FSInputShow::SkillId_29_75DD2CF342F572C8D314B990BFA49AF1' has a wrong offset!");
static_assert(offsetof(FSInputShow, BlockTag_26_3A78B26145DC9C4C38940493986D3A5E) == 0x000008, "Member 'FSInputShow::BlockTag_26_3A78B26145DC9C4C38940493986D3A5E' has a wrong offset!");
static_assert(offsetof(FSInputShow, ListenAttributeId_17_C47E9360431CC9F558063A8DFD0D8B59) == 0x000028, "Member 'FSInputShow::ListenAttributeId_17_C47E9360431CC9F558063A8DFD0D8B59' has a wrong offset!");
static_assert(offsetof(FSInputShow, ListenMaxAttributeId_19_CE8030984B2B7F9A351C388A5CCCE63C) == 0x00002C, "Member 'FSInputShow::ListenMaxAttributeId_19_CE8030984B2B7F9A351C388A5CCCE63C' has a wrong offset!");
static_assert(offsetof(FSInputShow, MaxAttributeEffect_40_0FDC1E42412EC92297325984CFAE4AB2) == 0x000030, "Member 'FSInputShow::MaxAttributeEffect_40_0FDC1E42412EC92297325984CFAE4AB2' has a wrong offset!");
static_assert(offsetof(FSInputShow, MaxAttributeColor_35_CB81B343416FA9FB5879E2A72342745C) == 0x000060, "Member 'FSInputShow::MaxAttributeColor_35_CB81B343416FA9FB5879E2A72342745C' has a wrong offset!");
static_assert(offsetof(FSInputShow, bUseElementColor_37_15A1082745AFD064E56547A83269C9A3) == 0x000064, "Member 'FSInputShow::bUseElementColor_37_15A1082745AFD064E56547A83269C9A3' has a wrong offset!");
static_assert(offsetof(FSInputShow, bLongPressControlCamera_39_926D6E8445062855484838BB453FE0A9) == 0x000065, "Member 'FSInputShow::bLongPressControlCamera_39_926D6E8445062855484838BB453FE0A9' has a wrong offset!");

}

