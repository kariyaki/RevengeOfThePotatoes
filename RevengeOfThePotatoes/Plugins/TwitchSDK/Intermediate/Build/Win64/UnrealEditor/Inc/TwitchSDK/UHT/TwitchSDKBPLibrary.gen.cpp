// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchSDKBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TWITCHSDK_API UClass* Z_Construct_UClass_UTwitchSDKBPLibrary();
	TWITCHSDK_API UClass* Z_Construct_UClass_UTwitchSDKBPLibrary_NoRegister();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	DEFINE_FUNCTION(UTwitchSDKBPLibrary::execBuildOAuthScopes)
	{
		P_GET_TARRAY(FTwitchSDKOAuthScope,Z_Param_Scopes);
		P_GET_TARRAY(FString,Z_Param_CustomScopes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTwitchSDKBPLibrary::BuildOAuthScopes(Z_Param_Scopes,Z_Param_CustomScopes);
		P_NATIVE_END;
	}
	void UTwitchSDKBPLibrary::StaticRegisterNativesUTwitchSDKBPLibrary()
	{
		UClass* Class = UTwitchSDKBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildOAuthScopes", &UTwitchSDKBPLibrary::execBuildOAuthScopes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics
	{
		struct TwitchSDKBPLibrary_eventBuildOAuthScopes_Parms
		{
			TArray<FTwitchSDKOAuthScope> Scopes;
			TArray<FString> CustomScopes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Scopes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Scopes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scopes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomScopes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomScopes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_Scopes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_Scopes_Inner = { "Scopes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope, METADATA_PARAMS(nullptr, 0) }; // 1907614600
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_Scopes = { "Scopes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitchSDKBPLibrary_eventBuildOAuthScopes_Parms, Scopes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1907614600
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_CustomScopes_Inner = { "CustomScopes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_CustomScopes = { "CustomScopes", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitchSDKBPLibrary_eventBuildOAuthScopes_Parms, CustomScopes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitchSDKBPLibrary_eventBuildOAuthScopes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_Scopes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_Scopes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_Scopes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_CustomScopes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_CustomScopes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "CustomScopes" },
		{ "Category", "Twitch" },
		{ "DisplayName", "Build OAuth Scopes" },
		{ "ModuleRelativePath", "Public/TwitchSDKBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitchSDKBPLibrary, nullptr, "BuildOAuthScopes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::TwitchSDKBPLibrary_eventBuildOAuthScopes_Parms), Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwitchSDKBPLibrary);
	UClass* Z_Construct_UClass_UTwitchSDKBPLibrary_NoRegister()
	{
		return UTwitchSDKBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTwitchSDKBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwitchSDKBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwitchSDKBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwitchSDKBPLibrary_BuildOAuthScopes, "BuildOAuthScopes" }, // 3706154613
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchSDKBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwitchSDKBPLibrary.h" },
		{ "ModuleRelativePath", "Public/TwitchSDKBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwitchSDKBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwitchSDKBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwitchSDKBPLibrary_Statics::ClassParams = {
		&UTwitchSDKBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTwitchSDKBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchSDKBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwitchSDKBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UTwitchSDKBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwitchSDKBPLibrary.OuterSingleton, Z_Construct_UClass_UTwitchSDKBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTwitchSDKBPLibrary.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UTwitchSDKBPLibrary>()
	{
		return UTwitchSDKBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwitchSDKBPLibrary);
	UTwitchSDKBPLibrary::~UTwitchSDKBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTwitchSDKBPLibrary, UTwitchSDKBPLibrary::StaticClass, TEXT("UTwitchSDKBPLibrary"), &Z_Registration_Info_UClass_UTwitchSDKBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwitchSDKBPLibrary), 643370380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKBPLibrary_h_2828853730(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
