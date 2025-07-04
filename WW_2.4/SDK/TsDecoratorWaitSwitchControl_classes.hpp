﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsDecoratorWaitSwitchControl

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsDecoratorWaitSwitchControl.TsDecoratorWaitSwitchControl_C
// 0x0000 (0x00A8 - 0x00A8)
class UTsDecoratorWaitSwitchControl_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsDecoratorWaitSwitchControl_C">();
	}
	static class UTsDecoratorWaitSwitchControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsDecoratorWaitSwitchControl_C>();
	}
};
static_assert(alignof(UTsDecoratorWaitSwitchControl_C) == 0x000008, "Wrong alignment on UTsDecoratorWaitSwitchControl_C");
static_assert(sizeof(UTsDecoratorWaitSwitchControl_C) == 0x0000A8, "Wrong size on UTsDecoratorWaitSwitchControl_C");

}

