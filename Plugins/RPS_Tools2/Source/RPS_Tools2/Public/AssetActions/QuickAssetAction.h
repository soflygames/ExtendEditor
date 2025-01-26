
#pragma once
#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Particles/ParticleSystem.h"	
#include "Sound/SoundCue.h"
#include "Sound/SoundWave.h"
#include "Engine/Texture.h"
#include "Blueprint/UserWidget.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraEmitter.h"	
#include "QuickAssetAction.generated.h"


UCLASS()
class RPS_TOOLS2_API UQuickAssetAction : public UAssetActionUtility
{
	GENERATED_BODY()
	
public:
UFUNCTION(CallInEditor)
	void TestFunc2();

private:
};