﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroPuertsWrapper

#include "Basic.hpp"

#include "KuroPuertsWrapper_classes.hpp"
#include "KuroPuertsWrapper_parameters.hpp"


namespace SDK
{

// Function KuroPuertsWrapper.KuroDataTableFunctionLibrary.AddOnDataTableChangedDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                       Table                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TDelegate<void()>&                OnDataTableChanged                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UKuroDataTableFunctionLibrary::AddOnDataTableChangedDelegate(class UDataTable* Table, class UObject* Object, const TDelegate<void()>& OnDataTableChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroDataTableFunctionLibrary", "AddOnDataTableChangedDelegate");

	Params::KuroDataTableFunctionLibrary_AddOnDataTableChangedDelegate Parms{};

	Parms.Table = Table;
	Parms.Object = Object;
	Parms.OnDataTableChanged = OnDataTableChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroPuertsWrapper.KuroDataTableFunctionLibrary.GetDataTableRowFromName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                       Table                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    RowName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase*                   OutRow                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKuroDataTableFunctionLibrary::GetDataTableRowFromName(class UDataTable* Table, const class FString& RowName, struct FTableRowBase* OutRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroDataTableFunctionLibrary", "GetDataTableRowFromName");

	Params::KuroDataTableFunctionLibrary_GetDataTableRowFromName Parms{};

	Parms.Table = Table;
	Parms.RowName = std::move(RowName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);

	return Parms.ReturnValue;
}


// Function KuroPuertsWrapper.KuroDataTableFunctionLibrary.RemoveOnDataTableChangedDelegate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                       Table                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKuroDataTableFunctionLibrary::RemoveOnDataTableChangedDelegate(class UDataTable* Table, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroDataTableFunctionLibrary", "RemoveOnDataTableChangedDelegate");

	Params::KuroDataTableFunctionLibrary_RemoveOnDataTableChangedDelegate Parms{};

	Parms.Table = Table;
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

