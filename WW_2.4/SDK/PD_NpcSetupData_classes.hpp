﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PD_NpcSetupData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SNpcHookPart_structs.hpp"
#include "Engine_classes.hpp"
#include "ENpcSetupType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PD_NpcSetupData.PD_NpcSetupData_C
// 0x01A0 (0x01D8 - 0x0038)
class UPD_NpcSetupData_C final : public UPrimaryDataAsset
{
public:
	class USkeletalMesh*                          Skel_Hair;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Skel_Hair_Color;                                   // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          Skel_Face;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          Skel_BodyUp;                                       // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Skel_BodyUp_Color;                                 // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          Skel_BodyDown;                                     // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Skel_BodyDown_Color;                               // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          Skel_Body;                                         // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDyeColor;                                         // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SkinDyeColor;                                      // 0x007C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENpcSetupType                                 NpcSetupType;                                      // 0x008C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          Skel_Main;                                         // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSNpcHookPart>                  Hook_Arm;                                          // 0x0098(0x0010)(Edit, BlueprintVisible)
	class FName                                   Hook_Arm_Socket;                                   // 0x00A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSNpcHookPart>                  Hook_Waist;                                        // 0x00B8(0x0010)(Edit, BlueprintVisible)
	class FName                                   Hook_Waist_Socket;                                 // 0x00C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSNpcHookPart>                  Hook_Back;                                         // 0x00D8(0x0010)(Edit, BlueprintVisible)
	class FName                                   Hook_Back_Socket;                                  // 0x00E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSNpcHookPart>                  Hook_Weapon;                                       // 0x00F8(0x0010)(Edit, BlueprintVisible)
	class FName                                   Hook_Weapon_Socket;                                // 0x0108(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSNpcHookPart>                  Hook_Leg;                                          // 0x0118(0x0010)(Edit, BlueprintVisible)
	class FName                                   Hook_Leg_Socket;                                   // 0x0128(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Body_Dyecolor01;                                   // 0x0134(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Body_Dyecolor02;                                   // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSNpcHookPart>                  Hook_Head;                                         // 0x0140(0x0010)(Edit, BlueprintVisible)
	class FName                                   Hook_Head_Socket;                                  // 0x0150(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      Hair_Mat;                                          // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Face_Mat;                                          // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Skel_BodyUp_Mat;                                   // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Skel_BodyDown_Mat;                                 // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Skel_Body_Mat;                                     // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstance*>              Skel_Body_Mat_Extra;                               // 0x0188(0x0010)(Edit, BlueprintVisible)
	TArray<class UMaterialInstance*>              Hair_Mat_Extra;                                    // 0x0198(0x0010)(Edit, BlueprintVisible)
	TArray<class UMaterialInstance*>              Face_Mat_Extra;                                    // 0x01A8(0x0010)(Edit, BlueprintVisible)
	TArray<class UMaterialInstance*>              Skel_BodyUp_Mat_Extra;                             // 0x01B8(0x0010)(Edit, BlueprintVisible)
	TArray<class UMaterialInstance*>              Skel_BodyDown_Mat_Extra;                           // 0x01C8(0x0010)(Edit, BlueprintVisible)

public:
	void IsEmpty(bool* Result);
	void HasSkelMain(bool* Result);
	void HasSkelHair(bool* Result);
	void HasSkelFace(bool* Result);
	void HasSkelBodyUp(bool* Result);
	void HasSkelBodyDown(bool* Result);
	void HasSkelBody(bool* Result);
	void GetAllParts(TArray<class USkeletalMesh*>* OutParts);
	void GetAllPartMaterials(TArray<class UMaterialInstance*>* Results);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PD_NpcSetupData_C">();
	}
	static class UPD_NpcSetupData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPD_NpcSetupData_C>();
	}
};
static_assert(alignof(UPD_NpcSetupData_C) == 0x000008, "Wrong alignment on UPD_NpcSetupData_C");
static_assert(sizeof(UPD_NpcSetupData_C) == 0x0001D8, "Wrong size on UPD_NpcSetupData_C");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_Hair) == 0x000038, "Member 'UPD_NpcSetupData_C::Skel_Hair' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_Hair_Color) == 0x000040, "Member 'UPD_NpcSetupData_C::Skel_Hair_Color' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_Face) == 0x000048, "Member 'UPD_NpcSetupData_C::Skel_Face' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_BodyUp) == 0x000050, "Member 'UPD_NpcSetupData_C::Skel_BodyUp' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_BodyUp_Color) == 0x000058, "Member 'UPD_NpcSetupData_C::Skel_BodyUp_Color' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_BodyDown) == 0x000060, "Member 'UPD_NpcSetupData_C::Skel_BodyDown' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_BodyDown_Color) == 0x000068, "Member 'UPD_NpcSetupData_C::Skel_BodyDown_Color' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_Body) == 0x000070, "Member 'UPD_NpcSetupData_C::Skel_Body' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, bDyeColor) == 0x000078, "Member 'UPD_NpcSetupData_C::bDyeColor' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, SkinDyeColor) == 0x00007C, "Member 'UPD_NpcSetupData_C::SkinDyeColor' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, NpcSetupType) == 0x00008C, "Member 'UPD_NpcSetupData_C::NpcSetupType' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_Main) == 0x000090, "Member 'UPD_NpcSetupData_C::Skel_Main' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Arm) == 0x000098, "Member 'UPD_NpcSetupData_C::Hook_Arm' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Arm_Socket) == 0x0000A8, "Member 'UPD_NpcSetupData_C::Hook_Arm_Socket' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Waist) == 0x0000B8, "Member 'UPD_NpcSetupData_C::Hook_Waist' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Waist_Socket) == 0x0000C8, "Member 'UPD_NpcSetupData_C::Hook_Waist_Socket' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Back) == 0x0000D8, "Member 'UPD_NpcSetupData_C::Hook_Back' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Back_Socket) == 0x0000E8, "Member 'UPD_NpcSetupData_C::Hook_Back_Socket' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Weapon) == 0x0000F8, "Member 'UPD_NpcSetupData_C::Hook_Weapon' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Weapon_Socket) == 0x000108, "Member 'UPD_NpcSetupData_C::Hook_Weapon_Socket' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Leg) == 0x000118, "Member 'UPD_NpcSetupData_C::Hook_Leg' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Leg_Socket) == 0x000128, "Member 'UPD_NpcSetupData_C::Hook_Leg_Socket' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Body_Dyecolor01) == 0x000134, "Member 'UPD_NpcSetupData_C::Body_Dyecolor01' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Body_Dyecolor02) == 0x000138, "Member 'UPD_NpcSetupData_C::Body_Dyecolor02' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Head) == 0x000140, "Member 'UPD_NpcSetupData_C::Hook_Head' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hook_Head_Socket) == 0x000150, "Member 'UPD_NpcSetupData_C::Hook_Head_Socket' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hair_Mat) == 0x000160, "Member 'UPD_NpcSetupData_C::Hair_Mat' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Face_Mat) == 0x000168, "Member 'UPD_NpcSetupData_C::Face_Mat' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_BodyUp_Mat) == 0x000170, "Member 'UPD_NpcSetupData_C::Skel_BodyUp_Mat' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_BodyDown_Mat) == 0x000178, "Member 'UPD_NpcSetupData_C::Skel_BodyDown_Mat' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_Body_Mat) == 0x000180, "Member 'UPD_NpcSetupData_C::Skel_Body_Mat' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_Body_Mat_Extra) == 0x000188, "Member 'UPD_NpcSetupData_C::Skel_Body_Mat_Extra' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Hair_Mat_Extra) == 0x000198, "Member 'UPD_NpcSetupData_C::Hair_Mat_Extra' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Face_Mat_Extra) == 0x0001A8, "Member 'UPD_NpcSetupData_C::Face_Mat_Extra' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_BodyUp_Mat_Extra) == 0x0001B8, "Member 'UPD_NpcSetupData_C::Skel_BodyUp_Mat_Extra' has a wrong offset!");
static_assert(offsetof(UPD_NpcSetupData_C, Skel_BodyDown_Mat_Extra) == 0x0001C8, "Member 'UPD_NpcSetupData_C::Skel_BodyDown_Mat_Extra' has a wrong offset!");

}

