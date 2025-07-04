﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UiSceneRenderingComponent

#include "Basic.hpp"

#include "BP_UiSceneRenderingComponent_classes.hpp"
#include "BP_UiSceneRenderingComponent_parameters.hpp"


namespace SDK
{

// Function BP_UiSceneRenderingComponent.BP_UiSceneRenderingComponent_C.OnKuroEndUiScene
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UiSceneRenderingComponent_C::OnKuroEndUiScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UiSceneRenderingComponent_C", "OnKuroEndUiScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UiSceneRenderingComponent.BP_UiSceneRenderingComponent_C.OnKuroStartUiScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    UiScenePath                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UiSceneRenderingComponent_C::OnKuroStartUiScene(const class FString& UiScenePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UiSceneRenderingComponent_C", "OnKuroStartUiScene");

	Params::BP_UiSceneRenderingComponent_C_OnKuroStartUiScene Parms{};

	Parms.UiScenePath = std::move(UiScenePath);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UiSceneRenderingComponent.BP_UiSceneRenderingComponent_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GlobalGI_C*                   InGlobalGI                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UiSceneRenderingComponent_C::Init(class ABP_GlobalGI_C* InGlobalGI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UiSceneRenderingComponent_C", "Init");

	Params::BP_UiSceneRenderingComponent_C_Init Parms{};

	Parms.InGlobalGI = InGlobalGI;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UiSceneRenderingComponent.BP_UiSceneRenderingComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UiSceneRenderingComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UiSceneRenderingComponent_C", "ReceiveEndPlay");

	Params::BP_UiSceneRenderingComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UiSceneRenderingComponent.BP_UiSceneRenderingComponent_C.ExecuteUbergraph_BP_UiSceneRenderingComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UiSceneRenderingComponent_C::ExecuteUbergraph_BP_UiSceneRenderingComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UiSceneRenderingComponent_C", "ExecuteUbergraph_BP_UiSceneRenderingComponent");

	Params::BP_UiSceneRenderingComponent_C_ExecuteUbergraph_BP_UiSceneRenderingComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

