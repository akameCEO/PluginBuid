#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WebConnectControlPluginBPLibrary.generated.h"

UCLASS()
class WEBCONNECTCONTROLPLUGIN_API UWebConnectControlPluginBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UWebConnectControlPluginBPLibrary(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "WebConnect")
    static void SimpleHttpGet(const FString& Url);
};
