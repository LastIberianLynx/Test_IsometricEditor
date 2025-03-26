// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
//#include "EditorViewportClient.h"




void UMyBlueprintFunctionLibrary::MoveCamera(FVector newLocation, FRotator newRotation, float newFoV) {
    FEditorViewportClient* client = (FEditorViewportClient*)(GEditor->GetActiveViewport()->GetClient());
    client->SetViewLocation(newLocation);
    client->SetViewRotation(newRotation);
    client->ViewFOV = newFoV;
}

