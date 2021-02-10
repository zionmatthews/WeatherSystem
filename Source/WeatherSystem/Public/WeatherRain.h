//#pragma once
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "Blueprint/BlueprintSupport.h"
//#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
//#include "WeatherRain.generated.h"
//
//
//UCLASS(config = Engine, Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
//class WEATHERSYSTEM_API AWeatherRain : public AActor
//{
//	GENERATED_BODY()
//
//		
//
//
//
//public:
//			
//
//	//Variables
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
//		ADirectionalLight* light;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Rain Ref", AllowPrivateAccess = "true", Category = "Default", MultiLine = "true", Override = "Rain ref"))
//		AEmitter* Rainref;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Sky", AllowPrivateAccess = "true", Category = "Default", MultiLine = "true", Override = "Sky"))
//		UStaticMesh* Sky;
//
//	UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "Components", AllowPrivateAccess = "true", Override = "DefaultSceneRoot"))
//		USceneComponent* DefaultSceneRoot;
//	UPROPERTY(meta = (Override = "Timeline_NewTrack"))
//		float Timeline_NewTrack;
//	UPROPERTY(meta = (Override = "Timeline_Dir"))
//		TEnumAsByte<ETimelineDirection::Type> TimelineTrack;
//	UPROPERTY(BlueprintReadWrite, meta = (Category = "Components", AllowPrivateAccess = "true", Override = "Timeline"))
//		UTimelineComponent* Timeline;
//	UPROPERTY(Transient, meta = (Override = "K2Node"))
//		FKey K2Node;
//	UPROPERTY(Transient, meta = (Override = "Temp"))
//		bool Temp;
//
//	AWeatherRain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
//	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
//
//	static void CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
//	static void StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
//	static void StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
//
//	UFUNCTION(meta = (Override = "ExecuteUbergraph_WeatherBp"))
//		void ExecuteUbergraph_WeatherBp(int32 EntryPoint);
//	void ExecuteUbergraph_WeatherBp1(int32 EntryPoint);
//	void ExecuteUbergraph_WeatherBp2(int32 EntryPoint);
//
//	UFUNCTION(meta = (Override = "InpActEvt_R_K2Node"))
//		virtual void InpActEvt_R_K2Node(FKey Key);
//
//	UFUNCTION(meta = (Override = "TimelineUpdateFunc"))
//		virtual void TimelineUpdateFunc();
//	UFUNCTION(meta = (Override = "TimelineFinishedFunc"))
//		virtual void TimelineFinishedFunc();
//
//protected:
//	
//
//public:
//
//};
