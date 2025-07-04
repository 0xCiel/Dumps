﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Xiakong_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Xiakong_Base.GA_Xiakong_Base_C
// 0x0038 (0x05A0 - 0x0568)
class UGA_Xiakong_Base_C : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Xiakong_Base_C;                  // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         夏空;                                              // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         幻影;                                              // 0x0574(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     幻影对象;                                          // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          召唤位置;                                          // 0x0580(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          打断继承;                                          // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_599[0x3];                                      // 0x0599(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         幻影id;                                            // 0x059C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Xiakong_Base(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_B53A06724E811332DFBB108025BBB785(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Xiakong_Base_C">();
	}
	static class UGA_Xiakong_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Xiakong_Base_C>();
	}
};
static_assert(alignof(UGA_Xiakong_Base_C) == 0x000008, "Wrong alignment on UGA_Xiakong_Base_C");
static_assert(sizeof(UGA_Xiakong_Base_C) == 0x0005A0, "Wrong size on UGA_Xiakong_Base_C");
static_assert(offsetof(UGA_Xiakong_Base_C, UberGraphFrame_GA_Xiakong_Base_C) == 0x000568, "Member 'UGA_Xiakong_Base_C::UberGraphFrame_GA_Xiakong_Base_C' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_Base_C, 夏空) == 0x000570, "Member 'UGA_Xiakong_Base_C::夏空' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_Base_C, 幻影) == 0x000574, "Member 'UGA_Xiakong_Base_C::幻影' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_Base_C, 幻影对象) == 0x000578, "Member 'UGA_Xiakong_Base_C::幻影对象' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_Base_C, 召唤位置) == 0x000580, "Member 'UGA_Xiakong_Base_C::召唤位置' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_Base_C, 打断继承) == 0x000598, "Member 'UGA_Xiakong_Base_C::打断继承' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_Base_C, 幻影id) == 0x00059C, "Member 'UGA_Xiakong_Base_C::幻影id' has a wrong offset!");

}

