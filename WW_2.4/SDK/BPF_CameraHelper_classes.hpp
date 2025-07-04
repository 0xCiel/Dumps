﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_CameraHelper

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPF_CameraHelper.BPF_CameraHelper_C
// 0x0000 (0x0030 - 0x0030)
class UBPF_CameraHelper_C final : public UBlueprintFunctionLibrary
{
public:
	static void D_GetCameraTransform(int32 PlayerIndex, class UObject* __WorldContext, bool* Success, struct FTransformDouble* Transform);
	static void D_GetCameraLocation(int32 PlayerIndex, class UObject* __WorldContext, bool* Success, struct FVectorDouble* Location);
	static void GetCameraRotator(int32 PlayerIndex, class UObject* __WorldContext, bool* Success, struct FRotator* Rotator);
	static void GetCameraLocation(int32 PlayerIndex, class UObject* __WorldContext, bool* Success, struct FVectorDouble* Location);
	static void GetCameraTransform(int32 PlayerIndex, class UObject* __WorldContext, bool* Success, struct FTransformDouble* Transform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPF_CameraHelper_C">();
	}
	static class UBPF_CameraHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPF_CameraHelper_C>();
	}
};
static_assert(alignof(UBPF_CameraHelper_C) == 0x000008, "Wrong alignment on UBPF_CameraHelper_C");
static_assert(sizeof(UBPF_CameraHelper_C) == 0x000030, "Wrong size on UBPF_CameraHelper_C");

}

