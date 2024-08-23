// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebConnectControlPlugin/Public/WebConnectControlPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebConnectControlPluginBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WebConnectControlPlugin();
WEBCONNECTCONTROLPLUGIN_API UClass* Z_Construct_UClass_UWebConnectControlPluginBPLibrary();
WEBCONNECTCONTROLPLUGIN_API UClass* Z_Construct_UClass_UWebConnectControlPluginBPLibrary_NoRegister();
// End Cross Module References

// Begin Class UWebConnectControlPluginBPLibrary Function SimpleHttpGet
struct Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics
{
	struct WebConnectControlPluginBPLibrary_eventSimpleHttpGet_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebConnect" },
		{ "ModuleRelativePath", "Public/WebConnectControlPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebConnectControlPluginBPLibrary_eventSimpleHttpGet_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebConnectControlPluginBPLibrary, nullptr, "SimpleHttpGet", nullptr, nullptr, Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::WebConnectControlPluginBPLibrary_eventSimpleHttpGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::WebConnectControlPluginBPLibrary_eventSimpleHttpGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebConnectControlPluginBPLibrary::execSimpleHttpGet)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWebConnectControlPluginBPLibrary::SimpleHttpGet(Z_Param_Url);
	P_NATIVE_END;
}
// End Class UWebConnectControlPluginBPLibrary Function SimpleHttpGet

// Begin Class UWebConnectControlPluginBPLibrary
void UWebConnectControlPluginBPLibrary::StaticRegisterNativesUWebConnectControlPluginBPLibrary()
{
	UClass* Class = UWebConnectControlPluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SimpleHttpGet", &UWebConnectControlPluginBPLibrary::execSimpleHttpGet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebConnectControlPluginBPLibrary);
UClass* Z_Construct_UClass_UWebConnectControlPluginBPLibrary_NoRegister()
{
	return UWebConnectControlPluginBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UWebConnectControlPluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WebConnectControlPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/WebConnectControlPluginBPLibrary.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebConnectControlPluginBPLibrary_SimpleHttpGet, "SimpleHttpGet" }, // 1798474597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebConnectControlPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebConnectControlPluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WebConnectControlPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebConnectControlPluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebConnectControlPluginBPLibrary_Statics::ClassParams = {
	&UWebConnectControlPluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebConnectControlPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebConnectControlPluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebConnectControlPluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UWebConnectControlPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebConnectControlPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UWebConnectControlPluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebConnectControlPluginBPLibrary.OuterSingleton;
}
template<> WEBCONNECTCONTROLPLUGIN_API UClass* StaticClass<UWebConnectControlPluginBPLibrary>()
{
	return UWebConnectControlPluginBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebConnectControlPluginBPLibrary);
UWebConnectControlPluginBPLibrary::~UWebConnectControlPluginBPLibrary() {}
// End Class UWebConnectControlPluginBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_CretatePlugins_Plugins_WebConnectControlPlugin_Source_WebConnectControlPlugin_Public_WebConnectControlPluginBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebConnectControlPluginBPLibrary, UWebConnectControlPluginBPLibrary::StaticClass, TEXT("UWebConnectControlPluginBPLibrary"), &Z_Registration_Info_UClass_UWebConnectControlPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebConnectControlPluginBPLibrary), 4241810739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_CretatePlugins_Plugins_WebConnectControlPlugin_Source_WebConnectControlPlugin_Public_WebConnectControlPluginBPLibrary_h_369292000(TEXT("/Script/WebConnectControlPlugin"),
	Z_CompiledInDeferFile_FID_Game_CretatePlugins_Plugins_WebConnectControlPlugin_Source_WebConnectControlPlugin_Public_WebConnectControlPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_CretatePlugins_Plugins_WebConnectControlPlugin_Source_WebConnectControlPlugin_Public_WebConnectControlPluginBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
