﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KuroMasterSeqEvent

#include "Basic.hpp"

#include "BP_KuroMasterSeqEvent_classes.hpp"
#include "BP_KuroMasterSeqEvent_parameters.hpp"


namespace SDK
{

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.ExecuteUbergraph_BP_KuroMasterSeqEvent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::ExecuteUbergraph_BP_KuroMasterSeqEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "ExecuteUbergraph_BP_KuroMasterSeqEvent");

	Params::BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_KuroMasterSeqEvent_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "ReceiveTick");

	Params::BP_KuroMasterSeqEvent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.禁用动态模糊
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroMasterSeqEvent_C::禁用动态模糊()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "禁用动态模糊");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.启用动态模糊
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroMasterSeqEvent_C::启用动态模糊()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "启用动态模糊");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.主触发切镜
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    shouldBlend                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   blendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EViewTargetBlendFunction                blendFunction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendExp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::主触发切镜(bool shouldBlend, float blendTime, EViewTargetBlendFunction blendFunction, float blendExp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "主触发切镜");

	Params::BP_KuroMasterSeqEvent_C_主触发切镜 Parms{};

	Parms.shouldBlend = shouldBlend;
	Parms.blendTime = blendTime;
	Parms.blendFunction = blendFunction;
	Parms.blendExp = blendExp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.副触发切镜
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroMasterSeqEvent_C::副触发切镜()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "副触发切镜");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.调整镜头裁剪距离
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NearClip                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::调整镜头裁剪距离(int32 NearClip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "调整镜头裁剪距离");

	Params::BP_KuroMasterSeqEvent_C_调整镜头裁剪距离 Parms{};

	Parms.NearClip = NearClip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.恢复镜头裁剪距离
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroMasterSeqEvent_C::恢复镜头裁剪距离()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "恢复镜头裁剪距离");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.开关人物飘带
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KuroMasterSeqEvent_C::开关人物飘带(bool enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "开关人物飘带");

	Params::BP_KuroMasterSeqEvent_C_开关人物飘带 Parms{};

	Parms.enable = enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.执行流程行为
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::执行流程行为(const class FString& key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "执行流程行为");

	Params::BP_KuroMasterSeqEvent_C_执行流程行为 Parms{};

	Parms.key = std::move(key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.开始叠化
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroMasterSeqEvent_C::开始叠化()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "开始叠化");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.触发切镜
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroMasterSeqEvent_C::触发切镜()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "触发切镜");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.打开章节提示
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ChapterState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ChapterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::打开章节提示(int32 ChapterState, int32 ChapterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "打开章节提示");

	Params::BP_KuroMasterSeqEvent_C_打开章节提示 Parms{};

	Parms.ChapterState = ChapterState;
	Parms.ChapterId = ChapterId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.展示游戏Logo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::展示游戏Logo(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "展示游戏Logo");

	Params::BP_KuroMasterSeqEvent_C_展示游戏Logo Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.显示预览图
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    MaleAssetPath                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    FemaleAssetPath                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    maleSpineName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    femaleSpineName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    needLoop                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KuroMasterSeqEvent_C::显示预览图(const class FString& MaleAssetPath, const class FString& FemaleAssetPath, const class FString& maleSpineName, const class FString& femaleSpineName, bool needLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "显示预览图");

	Params::BP_KuroMasterSeqEvent_C_显示预览图 Parms{};

	Parms.MaleAssetPath = std::move(MaleAssetPath);
	Parms.FemaleAssetPath = std::move(FemaleAssetPath);
	Parms.maleSpineName = std::move(maleSpineName);
	Parms.femaleSpineName = std::move(femaleSpineName);
	Parms.needLoop = needLoop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.显示预览图(数组)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    MaleAssetPath                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    FemaleAssetPath                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FSpineThingsInfo>&        maleSpineArray                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSpineThingsInfo>&        femaleSpineArray                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_KuroMasterSeqEvent_C::显示预览图_数组_(const class FString& MaleAssetPath, const class FString& FemaleAssetPath, TArray<struct FSpineThingsInfo>& maleSpineArray, TArray<struct FSpineThingsInfo>& femaleSpineArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "显示预览图(数组)");

	Params::BP_KuroMasterSeqEvent_C_显示预览图_数组_ Parms{};

	Parms.MaleAssetPath = std::move(MaleAssetPath);
	Parms.FemaleAssetPath = std::move(FemaleAssetPath);
	Parms.maleSpineArray = std::move(maleSpineArray);
	Parms.femaleSpineArray = std::move(femaleSpineArray);

	UObject::ProcessEvent(Func, &Parms);

	maleSpineArray = std::move(Parms.maleSpineArray);
	femaleSpineArray = std::move(Parms.femaleSpineArray);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.关闭预览图
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroMasterSeqEvent_C::关闭预览图()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "关闭预览图");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.播放预览图动画
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    seqName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::播放预览图动画(const class FString& seqName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "播放预览图动画");

	Params::BP_KuroMasterSeqEvent_C_播放预览图动画 Parms{};

	Parms.seqName = std::move(seqName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.执行实体帧事件
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   EntityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::执行实体帧事件(const class FString& Key, int32 EntityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "执行实体帧事件");

	Params::BP_KuroMasterSeqEvent_C_执行实体帧事件 Parms{};

	Parms.Key = std::move(Key);
	Parms.EntityId = EntityId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.播放Spine动画
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    SpineName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    needLoop                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KuroMasterSeqEvent_C::播放Spine动画(const class FString& SpineName, bool needLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "播放Spine动画");

	Params::BP_KuroMasterSeqEvent_C_播放Spine动画 Parms{};

	Parms.SpineName = std::move(SpineName);
	Parms.needLoop = needLoop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.播放Spine动画(性别)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    maleSpineName1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    femaleSpineName1                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    needLoop                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KuroMasterSeqEvent_C::播放Spine动画_性别_(const class FString& maleSpineName1, const class FString& femaleSpineName1, bool needLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "播放Spine动画(性别)");

	Params::BP_KuroMasterSeqEvent_C_播放Spine动画_性别_ Parms{};

	Parms.maleSpineName1 = std::move(maleSpineName1);
	Parms.femaleSpineName1 = std::move(femaleSpineName1);
	Parms.needLoop = needLoop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.播放Spine动画(数组)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSpineThingsInfo>&        maleSpineArray                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSpineThingsInfo>&        femaleSpineArray                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_KuroMasterSeqEvent_C::播放Spine动画_数组_(TArray<struct FSpineThingsInfo>& maleSpineArray, TArray<struct FSpineThingsInfo>& femaleSpineArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "播放Spine动画(数组)");

	Params::BP_KuroMasterSeqEvent_C_播放Spine动画_数组_ Parms{};

	Parms.maleSpineArray = std::move(maleSpineArray);
	Parms.femaleSpineArray = std::move(femaleSpineArray);

	UObject::ProcessEvent(Func, &Parms);

	maleSpineArray = std::move(Parms.maleSpineArray);
	femaleSpineArray = std::move(Parms.femaleSpineArray);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.关闭Spine动画
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    spineName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::关闭Spine动画(const class FString& spineName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "关闭Spine动画");

	Params::BP_KuroMasterSeqEvent_C_关闭Spine动画 Parms{};

	Parms.spineName = std::move(spineName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.关闭Spine动画(数组)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>&                  spineArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_KuroMasterSeqEvent_C::关闭Spine动画_数组_(TArray<class FString>& spineArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "关闭Spine动画(数组)");

	Params::BP_KuroMasterSeqEvent_C_关闭Spine动画_数组_ Parms{};

	Parms.spineArray = std::move(spineArray);

	UObject::ProcessEvent(Func, &Parms);

	spineArray = std::move(Parms.spineArray);
}


// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.背景Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    显示                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KuroMasterSeqEvent_C::背景Icon(bool 显示, class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroMasterSeqEvent_C", "背景Icon");

	Params::BP_KuroMasterSeqEvent_C_背景Icon Parms{};

	Parms.显示 = 显示;
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}

}

