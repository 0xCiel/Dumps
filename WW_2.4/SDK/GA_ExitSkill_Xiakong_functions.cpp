﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ExitSkill_Xiakong

#include "Basic.hpp"

#include "GA_ExitSkill_Xiakong_classes.hpp"
#include "GA_ExitSkill_Xiakong_parameters.hpp"


namespace SDK
{

// Function GA_ExitSkill_Xiakong.GA_ExitSkill_Xiakong_C.ExecuteUbergraph_GA_ExitSkill_Xiakong
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ExitSkill_Xiakong_C::ExecuteUbergraph_GA_ExitSkill_Xiakong(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExitSkill_Xiakong_C", "ExecuteUbergraph_GA_ExitSkill_Xiakong");

	Params::GA_ExitSkill_Xiakong_C_ExecuteUbergraph_GA_ExitSkill_Xiakong Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ExitSkill_Xiakong.GA_ExitSkill_Xiakong_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_ExitSkill_Xiakong_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExitSkill_Xiakong_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ExitSkill_Xiakong.GA_ExitSkill_Xiakong_C.OnFinish_08662FD2466D1DEA5ED1CABFC8BE0BE6
// (BlueprintCallable, BlueprintEvent)

void UGA_ExitSkill_Xiakong_C::OnFinish_08662FD2466D1DEA5ED1CABFC8BE0BE6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExitSkill_Xiakong_C", "OnFinish_08662FD2466D1DEA5ED1CABFC8BE0BE6");

	UObject::ProcessEvent(Func, nullptr);
}

}

