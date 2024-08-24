#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "WebConnectControlPluginBPLibrary.generated.h"

UCLASS()
class WEBCONNECTCONTROLPLUGIN_API UWebConnectControlPluginBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "WebClient")
    static void GetRequest(const FString& URL);
};
