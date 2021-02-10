// Fill out your copyright notice in the Description page of Project Settings.

#include "WeatherEffect.h"
#include "CoreMinimal.h"
#include "GeneratedCodeHelpers.h"

// Sets default values
AWeatherEffect::AWeatherEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Rain = CreateDefaultSubobject<AEmitter>(TEXT("Rain ref"));	
}

// Called when the game starts or when spawned
void AWeatherEffect::BeginPlay()
{
	Super::BeginPlay();	
	AWeatherEffect::BeginRain();	
}

// Called every frame
void AWeatherEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AWeatherEffect::BeginRain()
{	
	// Starts the rain emiiter
	(*(AccessPrivateProperty<UParticleSystemComponent* >((Rain), AEmitter::__PPO__ParticleSystemComponent())))->Activate(true);
}
