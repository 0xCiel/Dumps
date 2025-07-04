﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "NetCore_structs.hpp"


namespace SDK
{

// Class NetCore.NetAnalyticsAggregatorConfig
// 0x0010 (0x0040 - 0x0030)
class UNetAnalyticsAggregatorConfig final : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>        NetAnalyticsData;                                  // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetAnalyticsAggregatorConfig">();
	}
	static class UNetAnalyticsAggregatorConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetAnalyticsAggregatorConfig>();
	}
};
static_assert(alignof(UNetAnalyticsAggregatorConfig) == 0x000008, "Wrong alignment on UNetAnalyticsAggregatorConfig");
static_assert(sizeof(UNetAnalyticsAggregatorConfig) == 0x000040, "Wrong size on UNetAnalyticsAggregatorConfig");
static_assert(offsetof(UNetAnalyticsAggregatorConfig, NetAnalyticsData) == 0x000030, "Member 'UNetAnalyticsAggregatorConfig::NetAnalyticsData' has a wrong offset!");

}

