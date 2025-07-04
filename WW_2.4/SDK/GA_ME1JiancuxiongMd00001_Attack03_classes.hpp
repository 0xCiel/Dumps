﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ME1JiancuxiongMd00001_Attack03

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ME1JiancuxiongMd00001_Attack03.GA_ME1JiancuxiongMd00001_Attack03_C
// 0x0028 (0x05A0 - 0x0578)
class UGA_ME1JiancuxiongMd00001_Attack03_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ME1JiancuxiongMd00001_Attack03_C; // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                NewVar_0;                                          // 0x0580(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewVar_1;                                          // 0x058C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          瘫痪;                                              // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnTick_5D118C384AE61F1C80292E81F2216746();
	void OnCancelled_5D118C384AE61F1C80292E81F2216746();
	void OnInterrupted_5D118C384AE61F1C80292E81F2216746();
	void OnBlendOut_5D118C384AE61F1C80292E81F2216746();
	void OnCompleted_5D118C384AE61F1C80292E81F2216746();
	void OnTick_5D118C384AE61F1C80292E81D749901C();
	void OnCancelled_5D118C384AE61F1C80292E81D749901C();
	void OnInterrupted_5D118C384AE61F1C80292E81D749901C();
	void OnBlendOut_5D118C384AE61F1C80292E81D749901C();
	void OnCompleted_5D118C384AE61F1C80292E81D749901C();
	void OnTick_5D118C384AE61F1C80292E815593A74C();
	void OnCancelled_5D118C384AE61F1C80292E815593A74C();
	void OnInterrupted_5D118C384AE61F1C80292E815593A74C();
	void OnBlendOut_5D118C384AE61F1C80292E815593A74C();
	void OnCompleted_5D118C384AE61F1C80292E815593A74C();
	void OnTick_5D118C384AE61F1C80292E8112178A1D();
	void OnCancelled_5D118C384AE61F1C80292E8112178A1D();
	void OnInterrupted_5D118C384AE61F1C80292E8112178A1D();
	void OnBlendOut_5D118C384AE61F1C80292E8112178A1D();
	void OnCompleted_5D118C384AE61F1C80292E8112178A1D();
	void OnTick_5D118C384AE61F1C80292E81997A3E60();
	void OnCancelled_5D118C384AE61F1C80292E81997A3E60();
	void OnInterrupted_5D118C384AE61F1C80292E81997A3E60();
	void OnBlendOut_5D118C384AE61F1C80292E81997A3E60();
	void OnCompleted_5D118C384AE61F1C80292E81997A3E60();
	void OnFinish_AAE9DE6D49FBD9E03A3396BB5E80186C();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void 事件JIancuxiong(class ATsBaseCharacter_C* 角色, const struct FSHitInformation& 受击数据);
	void ExecuteUbergraph_GA_ME1JiancuxiongMd00001_Attack03(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ME1JiancuxiongMd00001_Attack03_C">();
	}
	static class UGA_ME1JiancuxiongMd00001_Attack03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ME1JiancuxiongMd00001_Attack03_C>();
	}
};
static_assert(alignof(UGA_ME1JiancuxiongMd00001_Attack03_C) == 0x000008, "Wrong alignment on UGA_ME1JiancuxiongMd00001_Attack03_C");
static_assert(sizeof(UGA_ME1JiancuxiongMd00001_Attack03_C) == 0x0005A0, "Wrong size on UGA_ME1JiancuxiongMd00001_Attack03_C");
static_assert(offsetof(UGA_ME1JiancuxiongMd00001_Attack03_C, UberGraphFrame_GA_ME1JiancuxiongMd00001_Attack03_C) == 0x000578, "Member 'UGA_ME1JiancuxiongMd00001_Attack03_C::UberGraphFrame_GA_ME1JiancuxiongMd00001_Attack03_C' has a wrong offset!");
static_assert(offsetof(UGA_ME1JiancuxiongMd00001_Attack03_C, NewVar_0) == 0x000580, "Member 'UGA_ME1JiancuxiongMd00001_Attack03_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UGA_ME1JiancuxiongMd00001_Attack03_C, NewVar_1) == 0x00058C, "Member 'UGA_ME1JiancuxiongMd00001_Attack03_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(UGA_ME1JiancuxiongMd00001_Attack03_C, 瘫痪) == 0x000598, "Member 'UGA_ME1JiancuxiongMd00001_Attack03_C::瘫痪' has a wrong offset!");

}

