﻿// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C.SetIconFromKey
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UTBP_UI_KeyboardIcon_C::SetIconFromKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C.SetIconFromKey");

	UTBP_UI_KeyboardIcon_C_SetIconFromKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C.ExecuteUbergraph_TBP_UI_KeyboardIcon
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_KeyboardIcon_C::ExecuteUbergraph_TBP_UI_KeyboardIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C.ExecuteUbergraph_TBP_UI_KeyboardIcon");

	UTBP_UI_KeyboardIcon_C_ExecuteUbergraph_TBP_UI_KeyboardIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
