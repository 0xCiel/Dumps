﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1FHuxiuxiuMd00401

#include "Basic.hpp"

#include "AIC_MO1FHuxiuxiuMd00401_classes.hpp"
#include "AIC_MO1FHuxiuxiuMd00401_parameters.hpp"


namespace SDK
{

// Function AIC_MO1FHuxiuxiuMd00401.AIC_MO1FHuxiuxiuMd00401_C.OnStart
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_MO1FHuxiuxiuMd00401_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1FHuxiuxiuMd00401_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_MO1FHuxiuxiuMd00401.AIC_MO1FHuxiuxiuMd00401_C.自爆死亡申请
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_MO1FHuxiuxiuMd00401_C::自爆死亡申请(bool bContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1FHuxiuxiuMd00401_C", "自爆死亡申请");

	Params::AIC_MO1FHuxiuxiuMd00401_C_自爆死亡申请 Parms{};

	Parms.bContent = bContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_MO1FHuxiuxiuMd00401.AIC_MO1FHuxiuxiuMd00401_C.自爆检测
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_MO1FHuxiuxiuMd00401_C::自爆检测(bool bContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1FHuxiuxiuMd00401_C", "自爆检测");

	Params::AIC_MO1FHuxiuxiuMd00401_C_自爆检测 Parms{};

	Parms.bContent = bContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_MO1FHuxiuxiuMd00401.AIC_MO1FHuxiuxiuMd00401_C.ExecuteUbergraph_AIC_MO1FHuxiuxiuMd00401
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_MO1FHuxiuxiuMd00401_C::ExecuteUbergraph_AIC_MO1FHuxiuxiuMd00401(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_MO1FHuxiuxiuMd00401_C", "ExecuteUbergraph_AIC_MO1FHuxiuxiuMd00401");

	Params::AIC_MO1FHuxiuxiuMd00401_C_ExecuteUbergraph_AIC_MO1FHuxiuxiuMd00401 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

