// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TEST_ISOMETRICEDITOR_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		//https://forums.unrealengine.com/t/making-2-5d-game-isometric-camera-in-editor/140954/9

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Move Camera", Keywords = "Move Camera"), Category = "Editor Camera")
		static void MoveCamera(FVector newLocation, FRotator newRotation, float newFoV);
	
};
