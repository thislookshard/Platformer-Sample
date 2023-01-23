// Fill out your copyright notice in the Description page of Project Settings.


#include "BoySource.h"

// Sets default values
ABoySource::ABoySource()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void ABoySource::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoySource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABoySource::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

