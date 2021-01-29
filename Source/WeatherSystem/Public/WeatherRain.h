#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeatherRain.generated.h"
class USceneComponent;
class UTimelineComponent;
class ADirectionalLight;
UCLASS(config = Engine, Blueprintable, BlueprintType, meta = (ReplaceConverted = "/Game/Blueprints/WeatherBP_Rain.WeatherBP_Rain_C", OverrideNativeName = "WeatherBP_Rain_C"))
class AWeatherRain : public AActor
{
public:
    GENERATED_BODY()

	/*UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta = (DisplayName = "Sky", Category = "Default", MultiLine = "true", OverrideNativeName = "Sky"))
	class ABP_Sky_Sphere_C__pf1379775596* bpv__Sky__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta = (DisplayName = "Light", Category = "Default", MultiLine = "true", OverrideNativeName = "light"))
	class ADirectionalLight* bpv__light__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta = (DisplayName = "Rain Ref", Category = "Default", MultiLine = "true", OverrideNativeName = "Rain ref"))
	class AEmitter* bpv__Rainxref__pfT;*/


};
