// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchSDKSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	TWITCHSDK_API UClass* Z_Construct_UClass_UTwitchSDKSettings();
	TWITCHSDK_API UClass* Z_Construct_UClass_UTwitchSDKSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	void UTwitchSDKSettings::StaticRegisterNativesUTwitchSDKSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwitchSDKSettings);
	UClass* Z_Construct_UClass_UTwitchSDKSettings_NoRegister()
	{
		return UTwitchSDKSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTwitchSDKSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseEventSubProxy_MetaData[];
#endif
		static void NewProp_UseEventSubProxy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseEventSubProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwitchSDKSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchSDKSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Create your application at https://dev.twitch.tv/ and enter the OAuth credentials below.\n */" },
		{ "DisplayName", "Twitch" },
		{ "IncludePath", "TwitchSDKSettings.h" },
		{ "ModuleRelativePath", "Public/TwitchSDKSettings.h" },
		{ "ToolTip", "Create your application at https://dev.twitch.tv/ and enter the OAuth credentials below." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "Authentication" },
		{ "ModuleRelativePath", "Public/TwitchSDKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTwitchSDKSettings, ClientId), METADATA_PARAMS(Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_UseEventSubProxy_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/**\n\x09 * Do not enable this in releases. This option instructs the plugin to connect to a local EventSubProxy instead of directly to Twitch.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TwitchSDKSettings.h" },
		{ "ToolTip", "Do not enable this in releases. This option instructs the plugin to connect to a local EventSubProxy instead of directly to Twitch." },
	};
#endif
	void Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_UseEventSubProxy_SetBit(void* Obj)
	{
		((UTwitchSDKSettings*)Obj)->UseEventSubProxy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_UseEventSubProxy = { "UseEventSubProxy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTwitchSDKSettings), &Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_UseEventSubProxy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_UseEventSubProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_UseEventSubProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwitchSDKSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_ClientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwitchSDKSettings_Statics::NewProp_UseEventSubProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwitchSDKSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwitchSDKSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwitchSDKSettings_Statics::ClassParams = {
		&UTwitchSDKSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTwitchSDKSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchSDKSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTwitchSDKSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwitchSDKSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwitchSDKSettings()
	{
		if (!Z_Registration_Info_UClass_UTwitchSDKSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwitchSDKSettings.OuterSingleton, Z_Construct_UClass_UTwitchSDKSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTwitchSDKSettings.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UTwitchSDKSettings>()
	{
		return UTwitchSDKSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwitchSDKSettings);
	UTwitchSDKSettings::~UTwitchSDKSettings() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTwitchSDKSettings, UTwitchSDKSettings::StaticClass, TEXT("UTwitchSDKSettings"), &Z_Registration_Info_UClass_UTwitchSDKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwitchSDKSettings), 1936622300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKSettings_h_753332859(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
