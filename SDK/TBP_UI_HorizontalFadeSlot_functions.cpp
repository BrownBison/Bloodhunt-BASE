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
//		Name   -> Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.SetFadeWidth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InLeftFadeWidth                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InRightFadeWidth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HorizontalFadeSlot_C::SetFadeWidth(float InLeftFadeWidth, float InRightFadeWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.SetFadeWidth");

	UTBP_UI_HorizontalFadeSlot_C_SetFadeWidth_Params params;
	params.InLeftFadeWidth = InLeftFadeWidth;
	params.InRightFadeWidth = InRightFadeWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_HorizontalFadeSlot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.PreConstruct");

	UTBP_UI_HorizontalFadeSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_HorizontalFadeSlot_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.Construct");

	UTBP_UI_HorizontalFadeSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_HorizontalFadeSlot
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HorizontalFadeSlot_C::ExecuteUbergraph_TBP_UI_HorizontalFadeSlot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_HorizontalFadeSlot");

	UTBP_UI_HorizontalFadeSlot_C_ExecuteUbergraph_TBP_UI_HorizontalFadeSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
