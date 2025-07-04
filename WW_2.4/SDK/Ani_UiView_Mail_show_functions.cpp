﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ani_UiView_Mail_show

#include "Basic.hpp"

#include "Ani_UiView_Mail_show_classes.hpp"
#include "Ani_UiView_Mail_show_parameters.hpp"


namespace SDK
{

// Function Ani_UiView_Mail_show.SequenceDirector_C.Content_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUIContainerActor*                Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ani_UiView_Mail_show::USequenceDirector_C::Content_Event_0(class AUIContainerActor* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "Content_Event_0");

	Params::SequenceDirector_C_Content_Event_0 Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ani_UiView_Mail_show.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ani_UiView_Mail_show::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

