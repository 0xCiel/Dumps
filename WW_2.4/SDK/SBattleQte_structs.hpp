﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SBattleQte

#include "Basic.hpp"

#include "SBattleQteAction_structs.hpp"


namespace SDK
{

// UserDefinedStruct SBattleQte.SBattleQte
// 0x0038 (0x0038 - 0x0000)
struct FSBattleQte final
{
public:
	int32                                         QteId_10_C78131FE4CA06026042A7997195BF719;         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Desc_5_58B32E9B44AD94231BD73694B9EE2545;           // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBattleQteAction>              SuccessActions_19_506FEAA44A005BFD064270AC8A817C19; // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBattleQteAction>              FailActions_20_6D495DC345A6875BAB1B6AA948882C55;   // 0x0028(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSBattleQte) == 0x000008, "Wrong alignment on FSBattleQte");
static_assert(sizeof(FSBattleQte) == 0x000038, "Wrong size on FSBattleQte");
static_assert(offsetof(FSBattleQte, QteId_10_C78131FE4CA06026042A7997195BF719) == 0x000000, "Member 'FSBattleQte::QteId_10_C78131FE4CA06026042A7997195BF719' has a wrong offset!");
static_assert(offsetof(FSBattleQte, Desc_5_58B32E9B44AD94231BD73694B9EE2545) == 0x000008, "Member 'FSBattleQte::Desc_5_58B32E9B44AD94231BD73694B9EE2545' has a wrong offset!");
static_assert(offsetof(FSBattleQte, SuccessActions_19_506FEAA44A005BFD064270AC8A817C19) == 0x000018, "Member 'FSBattleQte::SuccessActions_19_506FEAA44A005BFD064270AC8A817C19' has a wrong offset!");
static_assert(offsetof(FSBattleQte, FailActions_20_6D495DC345A6875BAB1B6AA948882C55) == 0x000028, "Member 'FSBattleQte::FailActions_20_6D495DC345A6875BAB1B6AA948882C55' has a wrong offset!");

}

