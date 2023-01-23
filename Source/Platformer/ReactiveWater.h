// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReactiveWater.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWaterEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLATFORMER_API UReactiveWater : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UReactiveWater();

	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Custom Water Event", Category="AA"))
	FOnWaterEvent onTouchWater;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
