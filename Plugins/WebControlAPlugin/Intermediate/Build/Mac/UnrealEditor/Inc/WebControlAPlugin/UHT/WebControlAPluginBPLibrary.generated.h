// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebControlAPluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEBCONTROLAPLUGIN_WebControlAPluginBPLibrary_generated_h
#error "WebControlAPluginBPLibrary.generated.h already included, missing '#pragma once' in WebControlAPluginBPLibrary.h"
#endif
#define WEBCONTROLAPLUGIN_WebControlAPluginBPLibrary_generated_h

#define FID_Game_CretatePlugins_Plugins_WebControlAPlugin_Source_WebControlAPlugin_Public_WebControlAPluginBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWebControlAPluginSampleFunction);


#define FID_Game_CretatePlugins_Plugins_WebControlAPlugin_Source_WebControlAPlugin_Public_WebControlAPluginBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUWebControlAPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UWebControlAPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UWebControlAPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebControlAPlugin"), NO_API) \
	DECLARE_SERIALIZER(UWebControlAPluginBPLibrary)


#define FID_Game_CretatePlugins_Plugins_WebControlAPlugin_Source_WebControlAPlugin_Public_WebControlAPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebControlAPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebControlAPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebControlAPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebControlAPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWebControlAPluginBPLibrary(UWebControlAPluginBPLibrary&&); \
	UWebControlAPluginBPLibrary(const UWebControlAPluginBPLibrary&); \
public: \
	NO_API virtual ~UWebControlAPluginBPLibrary();


#define FID_Game_CretatePlugins_Plugins_WebControlAPlugin_Source_WebControlAPlugin_Public_WebControlAPluginBPLibrary_h_25_PROLOG
#define FID_Game_CretatePlugins_Plugins_WebControlAPlugin_Source_WebControlAPlugin_Public_WebControlAPluginBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_CretatePlugins_Plugins_WebControlAPlugin_Source_WebControlAPlugin_Public_WebControlAPluginBPLibrary_h_28_RPC_WRAPPERS \
	FID_Game_CretatePlugins_Plugins_WebControlAPlugin_Source_WebControlAPlugin_Public_WebControlAPluginBPLibrary_h_28_INCLASS \
	FID_Game_CretatePlugins_Plugins_WebControlAPlugin_Source_WebControlAPlugin_Public_WebControlAPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBCONTROLAPLUGIN_API UClass* StaticClass<class UWebControlAPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_CretatePlugins_Plugins_WebControlAPlugin_Source_WebControlAPlugin_Public_WebControlAPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
