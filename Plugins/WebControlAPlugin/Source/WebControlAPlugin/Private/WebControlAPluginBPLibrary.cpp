// Copyright Epic Games, Inc. All Rights Reserved.

#include "WebControlAPluginBPLibrary.h"
#include "WebControlAPlugin.h"
#include <libwebsockets.h>


UWebControlAPluginBPLibrary::UWebControlAPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UWebControlAPluginBPLibrary::WebControlAPluginSampleFunction(float Param)
{
	return -1;
}

