﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BulletLogicType

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "EBulletType_structs.hpp"
#include "EBulletHitDirectionType_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BulletLogicType.BulletLogicType_C
// 0x0058 (0x0090 - 0x0038)
class UBulletLogicType_C final : public UPrimaryDataAsset
{
public:
	bool                                          次数为0时销毁;                                     // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          是否可以触发拼刀;                                  // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          是否可以触发极限闪避;                              // 0x003A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          拼刀忽略距离;                                      // 0x003B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          拼刀忽略角度;                                      // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          触发前摇拼刀;                                      // 0x003D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          是否可以触发对策;                                  // 0x003E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F[0x1];                                       // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   子弹碰撞预设;                                      // 0x0040(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          子弹碰撞障碍销毁;                                  // 0x004C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          子弹碰撞单位销毁;                                  // 0x004D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EBulletType                                   子弹类型;                                          // 0x004E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBulletHitDirectionType                       子弹受击类型角度判断;                              // 0x004F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         弹反通道;                                          // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          开启水面交互;                                      // 0x0054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  预设标签;                                          // 0x0058(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 只碰撞胶囊体;                                      // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          忽略水体;                                          // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          冰冻时销毁;                                        // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          开启空气墙交互;                                    // 0x008A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BulletLogicType_C">();
	}
	static class UBulletLogicType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBulletLogicType_C>();
	}
};
static_assert(alignof(UBulletLogicType_C) == 0x000008, "Wrong alignment on UBulletLogicType_C");
static_assert(sizeof(UBulletLogicType_C) == 0x000090, "Wrong size on UBulletLogicType_C");
static_assert(offsetof(UBulletLogicType_C, 次数为0时销毁) == 0x000038, "Member 'UBulletLogicType_C::次数为0时销毁' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 是否可以触发拼刀) == 0x000039, "Member 'UBulletLogicType_C::是否可以触发拼刀' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 是否可以触发极限闪避) == 0x00003A, "Member 'UBulletLogicType_C::是否可以触发极限闪避' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 拼刀忽略距离) == 0x00003B, "Member 'UBulletLogicType_C::拼刀忽略距离' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 拼刀忽略角度) == 0x00003C, "Member 'UBulletLogicType_C::拼刀忽略角度' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 触发前摇拼刀) == 0x00003D, "Member 'UBulletLogicType_C::触发前摇拼刀' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 是否可以触发对策) == 0x00003E, "Member 'UBulletLogicType_C::是否可以触发对策' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 子弹碰撞预设) == 0x000040, "Member 'UBulletLogicType_C::子弹碰撞预设' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 子弹碰撞障碍销毁) == 0x00004C, "Member 'UBulletLogicType_C::子弹碰撞障碍销毁' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 子弹碰撞单位销毁) == 0x00004D, "Member 'UBulletLogicType_C::子弹碰撞单位销毁' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 子弹类型) == 0x00004E, "Member 'UBulletLogicType_C::子弹类型' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 子弹受击类型角度判断) == 0x00004F, "Member 'UBulletLogicType_C::子弹受击类型角度判断' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 弹反通道) == 0x000050, "Member 'UBulletLogicType_C::弹反通道' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 开启水面交互) == 0x000054, "Member 'UBulletLogicType_C::开启水面交互' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 预设标签) == 0x000058, "Member 'UBulletLogicType_C::预设标签' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 只碰撞胶囊体) == 0x000078, "Member 'UBulletLogicType_C::只碰撞胶囊体' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 忽略水体) == 0x000088, "Member 'UBulletLogicType_C::忽略水体' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 冰冻时销毁) == 0x000089, "Member 'UBulletLogicType_C::冰冻时销毁' has a wrong offset!");
static_assert(offsetof(UBulletLogicType_C, 开启空气墙交互) == 0x00008A, "Member 'UBulletLogicType_C::开启空气墙交互' has a wrong offset!");

}

