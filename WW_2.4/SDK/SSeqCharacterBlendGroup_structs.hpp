﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSeqCharacterBlendGroup

#include "Basic.hpp"

#include "SSeqCharacterBlend_structs.hpp"


namespace SDK
{

// UserDefinedStruct SSeqCharacterBlendGroup.SSeqCharacterBlendGroup
// 0x0010 (0x0010 - 0x0000)
struct FSSeqCharacterBlendGroup final
{
public:
	TArray<struct FSSeqCharacterBlend>            BlendGroup_3_51F7C8044314BC2AC5181B9B0D072F2A;     // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSSeqCharacterBlendGroup) == 0x000008, "Wrong alignment on FSSeqCharacterBlendGroup");
static_assert(sizeof(FSSeqCharacterBlendGroup) == 0x000010, "Wrong size on FSSeqCharacterBlendGroup");
static_assert(offsetof(FSSeqCharacterBlendGroup, BlendGroup_3_51F7C8044314BC2AC5181B9B0D072F2A) == 0x000000, "Member 'FSSeqCharacterBlendGroup::BlendGroup_3_51F7C8044314BC2AC5181B9B0D072F2A' has a wrong offset!");

}

