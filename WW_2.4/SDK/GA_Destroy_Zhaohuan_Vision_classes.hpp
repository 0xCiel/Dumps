﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Destroy_Zhaohuan_Vision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C
// 0x0090 (0x05F8 - 0x0568)
class GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Destroy_Zhaohuan_Vision_C;       // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         召唤者ID;                                          // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_574[0x4];                                      // 0x0574(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     召唤者;                                            // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         材质Handle;                                        // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_584[0x4];                                      // 0x0584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPD_CharacterControllerData_C*          材质配置;                                          // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          外部结束;                                          // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_591[0x7];                                      // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, class ATsBaseCharacter_C*>        伴生物销毁材质Handle;                              // 0x0598(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         伴生物数量;                                        // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EC[0x4];                                      // 0x05EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                召唤销毁材质;                                      // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Destroy_Zhaohuan_Vision(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81FBB8B5B5();
	void OnBlendOut_5D118C384AE61F1C80292E81FBB8B5B5();
	void OnInterrupted_5D118C384AE61F1C80292E81FBB8B5B5();
	void OnCancelled_5D118C384AE61F1C80292E81FBB8B5B5();
	void OnTick_5D118C384AE61F1C80292E81FBB8B5B5();
	void EventReceived_18B59F5945020DB23C42FD882782F9D4(const struct FGameplayEventData& Payload);
	void 初始化参数();
	void 获取幻象数据(class ATsBaseCharacter_C* entity, bool* 是否找到, struct FSVisionData* 输出行);
	void 结束召唤状态();
	void 清理伴生物();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass GA_Destroy_Zhaohuan_Vision.GA_Destroy_Zhaohuan_Vision_C", true, "GA_Destroy_Zhaohuan_Vision_C">();
	}
	static class GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C>();
	}
};
static_assert(alignof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C) == 0x000008, "Wrong alignment on GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C");
static_assert(sizeof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C) == 0x0005F8, "Wrong size on GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C");
static_assert(offsetof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C, UberGraphFrame_GA_Destroy_Zhaohuan_Vision_C) == 0x000568, "Member 'GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C::UberGraphFrame_GA_Destroy_Zhaohuan_Vision_C' has a wrong offset!");
static_assert(offsetof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C, 召唤者ID) == 0x000570, "Member 'GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C::召唤者ID' has a wrong offset!");
static_assert(offsetof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C, 召唤者) == 0x000578, "Member 'GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C::召唤者' has a wrong offset!");
static_assert(offsetof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C, 材质Handle) == 0x000580, "Member 'GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C::材质Handle' has a wrong offset!");
static_assert(offsetof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C, 材质配置) == 0x000588, "Member 'GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C::材质配置' has a wrong offset!");
static_assert(offsetof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C, 外部结束) == 0x000590, "Member 'GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C::外部结束' has a wrong offset!");
static_assert(offsetof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C, 伴生物销毁材质Handle) == 0x000598, "Member 'GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C::伴生物销毁材质Handle' has a wrong offset!");
static_assert(offsetof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C, 伴生物数量) == 0x0005E8, "Member 'GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C::伴生物数量' has a wrong offset!");
static_assert(offsetof(GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C, 召唤销毁材质) == 0x0005F0, "Member 'GA_Destroy_Zhaohuan_Vision::UGA_Destroy_Zhaohuan_Vision_C::召唤销毁材质' has a wrong offset!");

}

