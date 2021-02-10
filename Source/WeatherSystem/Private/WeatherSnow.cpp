// Fill out your copyright notice in the Description page of Project Settings.


#include "WeatherSnow.h"
#include "GeneratedCodeHelpers.h"

// Sets default values
AWeatherSnow::AWeatherSnow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Snow = CreateDefaultSubobject<AEmitter>(TEXT("Snow ref"));
}

// Called when the game starts or when spawned
void AWeatherSnow::BeginPlay()
{
	Super::BeginPlay();
	AWeatherSnow::BeginSnow();
}

// Called every frame
void AWeatherSnow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeatherSnow::BeginSnow() 
{
	// Starts the rain emiiter
	(*(AccessPrivateProperty<UParticleSystemComponent* >((Snow), AEmitter::__PPO__ParticleSystemComponent())))->Activate(true);
}

