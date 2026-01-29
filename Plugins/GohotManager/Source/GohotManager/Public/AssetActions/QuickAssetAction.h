#pragma once

#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "DebugHeader.h"
#include "QuickAssetAction.generated.h"


/**
 * 
 */
UCLASS()
class GOHOTMANAGER_API UQuickAssetAction : public UAssetActionUtility
{
	GENERATED_BODY()
public:
	UFUNCTION(CallInEditor)
	void TestFunc();
};
