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
//		Name   -> Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemPreview
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_OutfitItemListener_C::OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemPreview");

	UTBP_UI_OutfitItemListener_C_OnItemPreview_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemUnhovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItemListener_C::OnItemUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemUnhovered");

	UTBP_UI_OutfitItemListener_C_OnItemUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTBP_UI_OutfitItem_C*                        OutfitItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItemListener_C::OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_C* OutfitItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemSelected");

	UTBP_UI_OutfitItemListener_C_OnItemSelected_Params params;
	params.Item = Item;
	params.OutfitItem = OutfitItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_OutfitItemListener_C::OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C.OnItemHovered");

	UTBP_UI_OutfitItemListener_C_OnItemHovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
