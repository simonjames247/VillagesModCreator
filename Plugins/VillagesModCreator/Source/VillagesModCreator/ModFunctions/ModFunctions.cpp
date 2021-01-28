// Fill out your copyright notice in the Description page of Project Settings.


#include "ModFunctions.h"

void UModFunctions::CXT_CreateProc(FString ExecutablePath, FString Parameter)
{
	FPlatformProcess::CreateProc(*ExecutablePath, *Parameter, false, false, false, nullptr, 0, nullptr, nullptr);
}

void UModFunctions::CXT_SaveStringToTextFile(FString StringToSave, FString FilePath)
{
	FFileHelper::SaveStringToFile(StringToSave, *FilePath);
}
