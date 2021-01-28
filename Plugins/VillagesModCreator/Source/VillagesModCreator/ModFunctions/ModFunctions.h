// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModFunctions.generated.h"

/**
 * 
 */
UCLASS()
class VILLAGESMODCREATOR_API UModFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "ModHelper")
		static void CXT_CreateProc(FString ExecutablePath, FString Parameter);
};
