// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MBB.generated.h"

UCLASS()
class MYPRO_API AMBB : public AActor
{
	GENERATED_BODY()
	
private:
	UFUNCTION()
	void EF(FVector vp);

public:	
	// Sets default values for this actor's properties
	AMBB();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	
	
};
