// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/DirectionalLightComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "WeatherSnow.generated.h"

UCLASS()
class WEATHERSYSTEM_API AWeatherSnow : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeatherSnow();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
	AEmitter* Snow;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void BeginSnow();
};
