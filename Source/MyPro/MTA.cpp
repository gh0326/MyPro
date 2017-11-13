// Fill out your copyright notice in the Description page of Project Settings.

#include "MTA.h"


// Sets default values
AMTA::AMTA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMTA::BeginPlay()
{
	Super::BeginPlay();
	MDF.Execute(FVector(1.f,1.f,1.f));
}

void AMTA::BF(UObject * o, FName f)
{
	MDF.BindUFunction(o, f);
}

