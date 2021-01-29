// Fill out your copyright notice in the Description page of Project Settings.


#include "WeatherSnow.h"

// Sets default values
AWeatherSnow::AWeatherSnow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeatherSnow::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeatherSnow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

