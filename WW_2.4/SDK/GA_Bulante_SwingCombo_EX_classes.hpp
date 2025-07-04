﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Bulante_SwingCombo_EX

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Bulante_SwingCombo_EX.GA_Bulante_SwingCombo_EX_C
// 0x0048 (0x05B0 - 0x0568)
class UGA_Bulante_SwingCombo_EX_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Bulante_SwingCombo_EX_C;         // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     施法角色;                                          // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          落地攻击;                                          // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_579[0x3];                                      // 0x0579(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlockTime;                                         // 0x057C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      异步任务;                                          // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      异步任务_0;                                        // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          正在飞旋到不可弹飞枪射_;                           // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_591[0x3];                                      // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         角色EntityID;                                      // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          已自动弹飞枪射;                                    // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_599[0x7];                                      // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     技能目标;                                          // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          正在A路径;                                         // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          正在B路径;                                         // 0x05A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Bulante_SwingCombo_EX(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnFinish_361AACC64790359B81C40BA933E0560E();
	void OnCompleted_5D118C384AE61F1C80292E81F461F850();
	void OnBlendOut_5D118C384AE61F1C80292E81F461F850();
	void OnInterrupted_5D118C384AE61F1C80292E81F461F850();
	void OnCancelled_5D118C384AE61F1C80292E81F461F850();
	void OnTick_5D118C384AE61F1C80292E81F461F850();
	void OnCompleted_5D118C384AE61F1C80292E81667C727A();
	void OnBlendOut_5D118C384AE61F1C80292E81667C727A();
	void OnInterrupted_5D118C384AE61F1C80292E81667C727A();
	void OnCancelled_5D118C384AE61F1C80292E81667C727A();
	void OnTick_5D118C384AE61F1C80292E81667C727A();
	void OnCompleted_5D118C384AE61F1C80292E81B1A2BA01();
	void OnBlendOut_5D118C384AE61F1C80292E81B1A2BA01();
	void OnInterrupted_5D118C384AE61F1C80292E81B1A2BA01();
	void OnCancelled_5D118C384AE61F1C80292E81B1A2BA01();
	void OnTick_5D118C384AE61F1C80292E81B1A2BA01();
	void OnCompleted_5D118C384AE61F1C80292E819AC8C195();
	void OnBlendOut_5D118C384AE61F1C80292E819AC8C195();
	void OnInterrupted_5D118C384AE61F1C80292E819AC8C195();
	void OnCancelled_5D118C384AE61F1C80292E819AC8C195();
	void OnTick_5D118C384AE61F1C80292E819AC8C195();
	void Added_21071CB943CD992BF8EFD6A3E69C0900(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E818C48ACB6();
	void OnBlendOut_5D118C384AE61F1C80292E818C48ACB6();
	void OnInterrupted_5D118C384AE61F1C80292E818C48ACB6();
	void OnCancelled_5D118C384AE61F1C80292E818C48ACB6();
	void OnTick_5D118C384AE61F1C80292E818C48ACB6();
	void Added_21071CB943CD992BF8EFD6A34D02358F(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E81450CA0C2();
	void OnBlendOut_5D118C384AE61F1C80292E81450CA0C2();
	void OnInterrupted_5D118C384AE61F1C80292E81450CA0C2();
	void OnCancelled_5D118C384AE61F1C80292E81450CA0C2();
	void OnTick_5D118C384AE61F1C80292E81450CA0C2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Bulante_SwingCombo_EX_C">();
	}
	static class UGA_Bulante_SwingCombo_EX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Bulante_SwingCombo_EX_C>();
	}
};
static_assert(alignof(UGA_Bulante_SwingCombo_EX_C) == 0x000008, "Wrong alignment on UGA_Bulante_SwingCombo_EX_C");
static_assert(sizeof(UGA_Bulante_SwingCombo_EX_C) == 0x0005B0, "Wrong size on UGA_Bulante_SwingCombo_EX_C");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, UberGraphFrame_GA_Bulante_SwingCombo_EX_C) == 0x000568, "Member 'UGA_Bulante_SwingCombo_EX_C::UberGraphFrame_GA_Bulante_SwingCombo_EX_C' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 施法角色) == 0x000570, "Member 'UGA_Bulante_SwingCombo_EX_C::施法角色' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 落地攻击) == 0x000578, "Member 'UGA_Bulante_SwingCombo_EX_C::落地攻击' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, BlockTime) == 0x00057C, "Member 'UGA_Bulante_SwingCombo_EX_C::BlockTime' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 异步任务) == 0x000580, "Member 'UGA_Bulante_SwingCombo_EX_C::异步任务' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 异步任务_0) == 0x000588, "Member 'UGA_Bulante_SwingCombo_EX_C::异步任务_0' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 正在飞旋到不可弹飞枪射_) == 0x000590, "Member 'UGA_Bulante_SwingCombo_EX_C::正在飞旋到不可弹飞枪射_' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 角色EntityID) == 0x000594, "Member 'UGA_Bulante_SwingCombo_EX_C::角色EntityID' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 已自动弹飞枪射) == 0x000598, "Member 'UGA_Bulante_SwingCombo_EX_C::已自动弹飞枪射' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 技能目标) == 0x0005A0, "Member 'UGA_Bulante_SwingCombo_EX_C::技能目标' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 正在A路径) == 0x0005A8, "Member 'UGA_Bulante_SwingCombo_EX_C::正在A路径' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo_EX_C, 正在B路径) == 0x0005A9, "Member 'UGA_Bulante_SwingCombo_EX_C::正在B路径' has a wrong offset!");

}

