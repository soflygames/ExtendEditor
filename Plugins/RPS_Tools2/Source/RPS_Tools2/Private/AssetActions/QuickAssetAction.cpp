// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetActions/QuickAssetAction.h"
#include "EditorUtilityLibrary.h"
#include "EditorAssetLibrary.h"


void UQuickAssetAction::TestFunc2()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,8.f,FColor::Cyan,TEXT("Working!"));
	}
}