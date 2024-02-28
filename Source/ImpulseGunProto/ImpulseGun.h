// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "ImpulseGun.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class IMPULSEGUNPROTO_API UImpulseGun : public USkeletalMeshComponent
{
	GENERATED_BODY()
public:
	UImpulseGun();
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ImpulseCharge")
	int m_MaxImpulseCharges = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ImpulseCharge")
	int m_ImpulseCharges = 2;
};
