// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weather.generated.h"


class USceneComponent;
class UTimelineComponent;
class ABP_Sky_Sphere_C__pf1379775596;
class ADirectionalLight;
class AEmitter;

UCLASS()
class WEATHERSYSTEM_API AWeather : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeather();

	// My Variables 
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta = (DisplayName = "Sky", Category = "Default", MultiLine = "true", OverrideNativeName = "Sky"))
		ABP_Sky_Sphere_C__pf1379775596* bpv__Sky__pf;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta = (DisplayName = "Light", Category = "Default", MultiLine = "true", OverrideNativeName = "light"))
		ADirectionalLight* bpv__light__pf;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta = (DisplayName = "Rain Ref", Category = "Default", MultiLine = "true", OverrideNativeName = "Rain ref"))
		AEmitter* bpv__Rainxref__pfT;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta = (DisplayName = "Snow Ref", Category = "Default", MultiLine = "true", OverrideNativeName = "Snow ref"))
		AEmitter* bpv__Snowxref__pfT;

	//Keyboard binds

	//T
	UFUNCTION(meta = (OverrideNativeName = "InpActEvt_T_K2Node_InputKeyEvent_0"))
		virtual void bpf__InpActEvt_T_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	//R
	UFUNCTION(meta = (OverrideNativeName = "InpActEvt_R_K2Node_InputKeyEvent_1"))
		virtual void bpf__InpActEvt_R_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
