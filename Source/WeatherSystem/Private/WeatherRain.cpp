// Fill out your copyright notice in the Description page of Project Settings.
//
//#include "WeatherRain.h"
//#include "WeatherSystem.h"
//#include "GeneratedCodeHelpers.h"
//#include "ASkySphere.h"
//#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
//#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
//#include "Runtime/Engine/Classes/Components/SceneComponent.h"
//#include "Runtime/Engine/Classes/Components/ActorComponent.h"
//#include "Runtime/Engine/Classes/Components/InputComponent.h"
//#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
//#include "Runtime/Engine/Classes/Materials/Material.h"
//#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
//#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
//#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
//#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
//#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h" 
//#include "Runtime/Engine/Classes/Curves/CurveVector.h"
//#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
//#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
//#include "Runtime/Engine/Classes/Particles/Emitter.h"
//#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
//#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
//#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
//#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
//#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
//#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
//#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
//#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
//#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
//#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
//#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
//#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
//#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
//#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
//#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
//#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
//#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
//#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
//#include "Runtime/Engine/Classes/Engine/DirectionalLight.h"
//#include "Runtime/Engine/Classes/Engine/Light.h"
//#include "Runtime/Engine/Classes/Components/LightComponent.h"
//#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
//
//
//AWeatherRain::AWeatherRain(const FObjectInitializer & ObjectInitializer)
//{
//	if (HasAnyFlags(RF_ClassDefaultObject) && (AWeatherRain::StaticClass() == GetClass()))
//	{
//		AWeatherRain::CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
//	}
//
//	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
//	RootComponent = DefaultSceneRoot;
//	DefaultSceneRoot->CreationMethod = EComponentCreationMethod::Native;
//	DefaultSceneRoot->bAutoActivate = true;
//	static TWeakObjectPtr<UProperty> __Local__1{};
//	const UProperty* __Local__0 = __Local__1.Get();
//
//	if (nullptr == __Local__0)
//	{
//		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffactNavigation")));
//		check(__Local__0);
//		__Local__1 = __Local__0;
//	}
//	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((DefaultSceneRoot), false, 0));
//	Timeline_NewTrack = 0.000000f;
//	TimelineTrack = ETimelineDirection::Type::Forward;
//	Timeline = nullptr;
//	Sky = nullptr;
//	light = nullptr;
//	Rainref = nullptr;
//}
//
//void AWeatherRain::PostLoadSubobjects(FObjectInstancingGraph * OuterInstanceGraph)
//{
//	Super::PostLoadSubobjects(OuterInstanceGraph);
//	if (DefaultSceneRoot) 
//	{
//		DefaultSceneRoot->CreationMethod = EComponentCreationMethod::Native;
//	}
//}
//
//void AWeatherRain::CustomDynamicClassInitialization(UDynamicClass * InDynamicClass)
//{
//	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
//	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
//	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
//	ensure(0 == InDynamicClass->ComponentTemplates.Num());
//	ensure(0 == InDynamicClass->Timelines.Num());
//	ensure(nullptr == InDynamicClass->AnimClassImplementation);
//	InDynamicClass->AssembleReferenceTokenStream();
//
//	List of all refernced classes
//	InDynamicClass->ReferencedConvertedFields.Add(ASkySphere::StaticClass());
//	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &StaticDependencies_DirectlyUsedAssets);
//
//	auto __Local__2 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_1_Template"), (EObjectFlags)0x00280008);
//	InDynamicClass->Timelines.Add(__Local__2);
//
//	auto __Local__3 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
//	InDynamicClass->DynamicBindingObjects.Add(__Local__3);
//
//	__Local__2->FloatTracks = TArray<FTTFloatTrack>();
//	__Local__2->FloatTracks.AddUninitialized(1);
//
//	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__2->FloatTracks.GetData(), 1);
//
//	auto& __Local__4 = __Local__2->FloatTracks[0];
//
//	auto __Local__5 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1_2"), (EObjectFlags)0x00280009);
//	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
//
//	__Local__5->FloatCurve.Keys = TArray<FRichCurveKey>();
//	__Local__5->FloatCurve.Keys.AddUninitialized(2);
//
//	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__5->FloatCurve.Keys.GetData(), 2);
//
//	auto& __Local__6 = __Local__5->FloatCurve.Keys[0];
//	auto& __Local__7 = __Local__5->FloatCurve.Keys[1];
//	__Local__7.Time = 5.000000f;
//	__Local__7.Value = 1.000000f;
//	__Local__4.CurveFloat = __Local__5;
//
//	auto& __Local__8 = (*(AccessPrivateProperty<FName >(&(__Local__4), FTTPropertyTrack::__PPO__PropertyName())));
//	__Local__8 = FName(TEXT("Timeline_NewTrack"));
//
//	auto& __Local__9 = (*(AccessPrivateProperty<FName >(&(__Local__4), FTTTrackBase::__PPO__TrackName())));
//	__Local__9 = FName(TEXT("NewTrack_1"));
//
//	__Local__2->MetaDataArray = TArray<FBPVariableMetaDataEntry>();
//	__Local__2->MetaDataArray.AddUninitialized(1);
//	FBPVariableMetaDataEntry::StaticStruct()->InitializeStruct(__Local__2->MetaDataArray.GetData(), 1);
//
//	auto& __Local__10 = __Local__2->MetaDataArray[0];
//	__Local__10.DataKey = FName(TEXT("Category"));
//	__Local__10.DataValue = FString(TEXT("Components"));
//	__Local__2->TimelineGuid = FGuid(0xE4816F06, 0x4D580744, 0x8A216984, 0xCA4E21F9);
//
//	auto& __Local__11 = (*(AccessPrivateProperty<FName >((__Local__2), UTimelineTemplate::__PPO__VariableName())));
//	__Local__11 = FName(TEXT("Timeline"));
//
//	auto& __Local__12 = (*(AccessPrivateProperty<FName >((__Local__2), UTimelineTemplate::__PPO__DirectionPropertyName())));
//	__Local__12 = FName(TEXT("Timeline_Dir"));
//
//	auto& __Local__13 = (*(AccessPrivateProperty<FName >((__Local__2), UTimelineTemplate::__PPO__UpdateFunctionName())));
//	__Local__13 = FName(TEXT("TimelineUpdateFunc"));
//
//	auto& __Local__14 = (*(AccessPrivateProperty<FName >((__Local__2), UTimelineTemplate::__PPO__FinishedFunctionName())));
//	__Local__14 = FName(TEXT("TimelineFinishedFunc"));
//
//	__Local__3->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding>();
//	__Local__3->InputKeyDelegateBindings.AddUninitialized(1);
//
//	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__3->InputKeyDelegateBindings.GetData(), 1);
//	auto& __Local__15 = __Local__3->InputKeyDelegateBindings[0];
//	__Local__15.InputChord.Key = FKey(TEXT("R"));
//	__Local__15.FunctionNameToBind = FName(TEXT("InpActEvt_R_K2Node"));
//}
//
//TimeLine Node
//void AWeatherRain::ExecuteUbergraph_WeatherBp(int32 EntryPoint)
//{
//	bool NotValid{};
//	bool Valid{};
//	TArray< int32, TInlineAllocator<8> > _StateStack;
//
//	int32 _CurrentState = EntryPoint;
//	do
//	{
//		switch (_CurrentState)
//		{
//		case 2:
//		{
//		}
//		case 3:
//		{
//			if (::IsValid(Rainref) && ::IsValid((*(AccessPrivateProperty<UParticleSystemComponent* >((Rainref), AEmitter::__PPO__ParticleSystemComponent() )))))
//			{
//				(*(AccessPrivateProperty<UParticleSystemComponent* >((Rainref), AEmitter::__PPO__ParticleSystemComponent() )))->Activate(false);
//			}
//			_CurrentState = (_StateStack.Num() > 0) ? _StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
//			break;
//		}
//		case 4:
//		{
//		}
//		case 5:
//		{
//			Reverse the rain effect sequence 
//			if (::IsValid(Timeline))
//			{
//				Timeline->UTimelineComponent::Reverse();
//			}
//			_CurrentState = (_StateStack.Num() > 0) ? _StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
//			break;
//		}
//		case 6:
//		{
//			Play the rain effect sequence
//			if (::IsValid(Timeline))
//			{
//				Timeline->UTimelineComponent::Play();
//			}
//			_CurrentState = (_StateStack.Num() > 0) ? _StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
//			break;
//		}
//		case 7:
//		{
//		}
//		case 8:
//		{
//			Valid = UKismetSystemLibrary::IsValid(Sky);
//			if (!Valid)
//			{
//				_CurrentState = (_StateStack.Num() > 0) ? _StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
//				break;
//			}
//		}
//		case 9:
//		{
//		}
//		case 10:
//		{
//		}
//		case 11:
//		{
//			NotValid = UKismetMathLibrary::Not_PreBool(Temp);
//			Temp = NotValid;
//		}
//		case 12:
//		{
//			if (!Temp)
//			{
//				_CurrentState = 17;
//				break;
//			}
//		}
//		case 13:
//		{
//		}
//		case 14:
//		{
//			_StateStack.Push(15);
//			_CurrentState = 6;
//			break;
//		}
//		case 15:
//		{
//		}
//		case 16:
//		{
//			UKismetSystemLibrary::Delay(this, 5.000000, FLatentActionInfo(2, -985275877, TEXT("ExecuteUbergraph_WeatherBp_R_0"), this));
//			_CurrentState = (_StateStack.Num() > 0) ? _StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
//			break;
//		}
//		case 17:
//		{
//		}
//		case 18:
//		{
//			if (::IsValid(Rainref) && ::IsValid((*(AccessPrivateProperty<UParticleSystemComponent* >((Rainref), AEmitter::__PPO__ParticleSystemComponent())))))
//			{
//				(*(AccessPrivateProperty<UParticleSystemComponent* >((Rainref), AEmitter::__PPO__ParticleSystemComponent())))->Deactivate();
//			}
//		}
//		case 19:
//		{
//			UKismetSystemLibrary::Delay(this, 3.000000, FLatentActionInfo(4, 1990998434, TEXT("ExecuteUbergraph_WeatherBp_R_0"), this));
//			_CurrentState = (_StateStack.Num() > 0) ? _StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
//			break;
//		}
//		default:
//			check(false); // Invalid state
//			break;
//		}
//	} while (_CurrentState != -1);
//
//}
//
//Vector parameters
//void AWeatherRain::ExecuteUbergraph_WeatherBp1(int32 EntryPoint)
//{
//	FLinearColor LinearColorLerp(EForceInit::ForceInit);
//	float Lerp_ReturnValue{};
//	FLinearColor Lerp_ReturnValue_1(EForceInit::ForceInit);
//	FLinearColor Lerp_ReturnValue_2(EForceInit::ForceInit);
//	FLinearColor LerpReturnValue_3(EForceInit::ForceInit);
//	check(EntryPoint == 20);
//	LerpReturnValue_3 = UKismetMathLibrary::LinearColorLerp(FLinearColor(0.034046, 0.109247, 0.295000, 1.000000), FLinearColor(0.046875, 0.046875, 0.046875, 1.000000), Timeline_NewTrack);
//	if (::IsValid(Sky) && ::IsValid(Sky->bpv__Skyxmaterial__pfT))
//	{
//		Sky->bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Zenith Color")), LerpReturnValue_3);
//	}
//	Lerp_ReturnValue_2 = UKismetMathLibrary::LinearColorLerp(FLinearColor(1.979559, 2.586644, 3.000000, 1.000000), FLinearColor(0.052083, 0.052083, 0.052083, 1.000000), Timeline_NewTrack);
//	if (::IsValid(Sky) && ::IsValid(Sky->bpv__Skyxmaterial__pfT))
//	{
//		Sky->bpv_Skymaterial_pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Horizon Color")), Lerp_ReturnValue_2);
//	}
//	Lerp_ReturnValue_1 = UKismetMathLibrary::LinearColorLerp(FLinearColor(0.855778, 0.919020, 1.000000, 1.000000), FLinearColor(0.031250, 0.031250, 0.031250, 1.000000), Timeline_NewTrack);
//	if (::IsValid(Sky) && ::IsValid(Sky->bpv__Skyxmaterial__pfT))
//	{
//		Sky->bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Cloud Color")), Lerp_ReturnValue_1);
//	}
//	Lerp_ReturnValue = UKismetMathLibrary::Lerp(1.000000, 5.000000, Timeline_NewTrack);
//	if (::IsValid(Sky) && ::IsValid(Sky->bpv__Skyxmaterial__pfT))
//	{
//		Sky->bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Cloud Opacity")), Lerp_ReturnValue);
//	}
//	LinearColorLerp = UKismetMathLibrary::LinearColorLerp(FLinearColor(0.855778, 0.919020, 1.000000, 1.000000), FLinearColor(0.026042, 0.026042, 0.026042, 1.000000), Timeline_NewTrack);
//	if (::IsValid(light) && ::IsValid((*(AccessPrivateProperty<ULightComponent* >((light), ALight::__PPO__LightComponent() )))))
//	{
//		(*(AccessPrivateProperty<ULightComponent* >((light), ALight::__PPO__LightComponent())))->ULightComponent::SetLightColor(LinearColorLerp, true);
//	}
//	return; //KCST_EndOfThread
//}
//
//void AWeatherRain::ExecuteUbergraph_WeatherBp2(int32 EntryPoint)
//{
//	check(EntryPoint == 1);
//	return; //KCST_EndOfThread
//}
//
//R Key Function
//void AWeatherRain::InpActEvt_R_K2Node(FKey Key)
//{
//	K2Node = Key;
//	ExecuteUbergraph_WeatherBp(7);
//}
//
// Updates the timeline
//void AWeatherRain::TimelineUpdateFunc()
//{
//	ExecuteUbergraph_WeatherBp1(20);
//}
// Returns finished timeline
//void AWeatherRain::TimelineFinishedFunc()
//{
//	ExecuteUbergraph_WeatherBp2(1);
//}
//
//
//void AWeatherRain::StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
//{
//}
//
//
//void AWeatherRain::StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
//{
//	StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
//	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
//	{
//		{0, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
//		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
//		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
//		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Emitter 
//		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
//		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
//		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
//		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
//		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
//		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DirectionalLight 
//		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Light 
//		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponent 
//		{12, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
//		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
//		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
//		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineSky/SM_SkySphere.SM_SkySphere 
//		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineSky/M_Sky_Panning_Clouds2.M_Sky_Panning_Clouds2 
//		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponentBase 
//		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveLinearColor 
//		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Engine/EngineSky/C_Sky_Horizon_Color.C_Sky_Horizon_Color 
//		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Engine/EngineSky/C_Sky_Zenith_Color.C_Sky_Zenith_Color 
//		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Engine/EngineSky/C_Sky_Cloud_Color.C_Sky_Cloud_Color 
//		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C 
//	};
//	for (const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
//	{
//		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
//	}
//}
