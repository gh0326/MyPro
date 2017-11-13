// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MTA.generated.h"

UCLASS()
class MYPRO_API AMTA : public AActor
{
	GENERATED_BODY()
	
private:
	DECLARE_DELEGATE_OneParam(MD,FVector)
	MD MDF;


public:	
	// Sets default values for this actor's properties
	AMTA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	
	void BF(UObject* o, FName f);

	

};
