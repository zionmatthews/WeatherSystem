// Fill out your copyright notice in the Description page of Project Settings.


#include "Weather.h"


// Sets default values
AWeather::AWeather()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// The T Key
void AWeather::bpf__InpActEvt_T_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_WeatherBP__pf_0(33);
}

//The R Key
void AWeather::bpf__InpActEvt_R_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_WeatherBP__pf_2(20);
}


