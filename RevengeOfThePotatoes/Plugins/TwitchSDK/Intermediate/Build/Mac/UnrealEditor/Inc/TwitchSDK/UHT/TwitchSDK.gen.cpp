// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Public/TwitchSDK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchSDK() {}
// Cross Module References
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTwitchSDKOAuthScope;
	static UEnum* FTwitchSDKOAuthScope_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKOAuthScope.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTwitchSDKOAuthScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("FTwitchSDKOAuthScope"));
		}
		return Z_Registration_Info_UEnum_FTwitchSDKOAuthScope.OuterSingleton;
	}
	template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKOAuthScope>()
	{
		return FTwitchSDKOAuthScope_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope_Statics::Enumerators[] = {
		{ "FTwitchSDKOAuthScope::ChannelManagePolls", (int64)FTwitchSDKOAuthScope::ChannelManagePolls },
		{ "FTwitchSDKOAuthScope::ChannelManagePredictions", (int64)FTwitchSDKOAuthScope::ChannelManagePredictions },
		{ "FTwitchSDKOAuthScope::ChannelManageBroadcast", (int64)FTwitchSDKOAuthScope::ChannelManageBroadcast },
		{ "FTwitchSDKOAuthScope::ChannelManageRedemptions", (int64)FTwitchSDKOAuthScope::ChannelManageRedemptions },
		{ "FTwitchSDKOAuthScope::ChannelReadHype_Train", (int64)FTwitchSDKOAuthScope::ChannelReadHype_Train },
		{ "FTwitchSDKOAuthScope::ClipsEdit", (int64)FTwitchSDKOAuthScope::ClipsEdit },
		{ "FTwitchSDKOAuthScope::UserReadSubscriptions", (int64)FTwitchSDKOAuthScope::UserReadSubscriptions },
		{ "FTwitchSDKOAuthScope::BitsRead", (int64)FTwitchSDKOAuthScope::BitsRead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope_Statics::Enum_MetaDataParams[] = {
		{ "BitsRead.DisplayName", "bits:read" },
		{ "BitsRead.Name", "FTwitchSDKOAuthScope::BitsRead" },
		{ "BlueprintType", "true" },
		{ "ChannelManageBroadcast.DisplayName", "channel:manage:broadcast" },
		{ "ChannelManageBroadcast.Name", "FTwitchSDKOAuthScope::ChannelManageBroadcast" },
		{ "ChannelManagePolls.DisplayName", "channel:manage:polls" },
		{ "ChannelManagePolls.Name", "FTwitchSDKOAuthScope::ChannelManagePolls" },
		{ "ChannelManagePredictions.DisplayName", "channel:manage:predictions" },
		{ "ChannelManagePredictions.Name", "FTwitchSDKOAuthScope::ChannelManagePredictions" },
		{ "ChannelManageRedemptions.DisplayName", "channel:manage:redemptions" },
		{ "ChannelManageRedemptions.Name", "FTwitchSDKOAuthScope::ChannelManageRedemptions" },
		{ "ChannelReadHype_Train.DisplayName", "channel:read:hype_train" },
		{ "ChannelReadHype_Train.Name", "FTwitchSDKOAuthScope::ChannelReadHype_Train" },
		{ "ClipsEdit.DisplayName", "clips:edit" },
		{ "ClipsEdit.Name", "FTwitchSDKOAuthScope::ClipsEdit" },
		{ "ModuleRelativePath", "Public/TwitchSDK.h" },
		{ "UserReadSubscriptions.DisplayName", "user:read:subscriptions" },
		{ "UserReadSubscriptions.Name", "FTwitchSDKOAuthScope::UserReadSubscriptions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		"FTwitchSDKOAuthScope",
		"FTwitchSDKOAuthScope",
		Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKOAuthScope.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTwitchSDKOAuthScope.InnerSingleton, Z_Construct_UEnum_TwitchSDK_FTwitchSDKOAuthScope_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTwitchSDKOAuthScope.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDK_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDK_h_Statics::EnumInfo[] = {
		{ FTwitchSDKOAuthScope_StaticEnum, TEXT("FTwitchSDKOAuthScope"), &Z_Registration_Info_UEnum_FTwitchSDKOAuthScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1907614600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDK_h_2714978388(TEXT("/Script/TwitchSDK"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDK_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDK_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
