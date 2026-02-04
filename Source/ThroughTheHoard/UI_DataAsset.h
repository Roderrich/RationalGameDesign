// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UI_DataAsset.generated.h"
USTRUCT()
struct FMyAssetInfo {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    FString UpgradeName;

    UPROPERTY(EditAnywhere)
    FString UpgradeDesc;

    UPROPERTY(EditAnywhere)
    UTexture2D* UIThumbnail;
};
UCLASS()
class THROUGHTHEHOARD_API UUI_DataAsset : public UDataAsset
{
	GENERATED_BODY()
	
};
