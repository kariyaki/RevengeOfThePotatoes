// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchSDKStructs() {}
// Cross Module References
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKAuthState();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKClipInfo();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPollDefinition();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPollInfo();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamInfo();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamQuery();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKUserInfo();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTwitchSDKLogLevel;
	static UEnum* FTwitchSDKLogLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKLogLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTwitchSDKLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("FTwitchSDKLogLevel"));
		}
		return Z_Registration_Info_UEnum_FTwitchSDKLogLevel.OuterSingleton;
	}
	template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKLogLevel>()
	{
		return FTwitchSDKLogLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel_Statics::Enumerators[] = {
		{ "FTwitchSDKLogLevel::Debug", (int64)FTwitchSDKLogLevel::Debug },
		{ "FTwitchSDKLogLevel::Info", (int64)FTwitchSDKLogLevel::Info },
		{ "FTwitchSDKLogLevel::Warning", (int64)FTwitchSDKLogLevel::Warning },
		{ "FTwitchSDKLogLevel::Error", (int64)FTwitchSDKLogLevel::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Debug.Name", "FTwitchSDKLogLevel::Debug" },
		{ "Error.Name", "FTwitchSDKLogLevel::Error" },
		{ "Info.Name", "FTwitchSDKLogLevel::Info" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "Warning.Name", "FTwitchSDKLogLevel::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		"FTwitchSDKLogLevel",
		"FTwitchSDKLogLevel",
		Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKLogLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTwitchSDKLogLevel.InnerSingleton, Z_Construct_UEnum_TwitchSDK_FTwitchSDKLogLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTwitchSDKLogLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTwitchSDKAuthStatus;
	static UEnum* FTwitchSDKAuthStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKAuthStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTwitchSDKAuthStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("FTwitchSDKAuthStatus"));
		}
		return Z_Registration_Info_UEnum_FTwitchSDKAuthStatus.OuterSingleton;
	}
	template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKAuthStatus>()
	{
		return FTwitchSDKAuthStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus_Statics::Enumerators[] = {
		{ "FTwitchSDKAuthStatus::LoggedOut", (int64)FTwitchSDKAuthStatus::LoggedOut },
		{ "FTwitchSDKAuthStatus::Loading", (int64)FTwitchSDKAuthStatus::Loading },
		{ "FTwitchSDKAuthStatus::WaitingForCode", (int64)FTwitchSDKAuthStatus::WaitingForCode },
		{ "FTwitchSDKAuthStatus::LoggedIn", (int64)FTwitchSDKAuthStatus::LoggedIn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The current user authentication status. */" },
		{ "Loading.Comment", "/** The status can not be determined because an operation affecting it is currently in progress. */" },
		{ "Loading.Name", "FTwitchSDKAuthStatus::Loading" },
		{ "Loading.ToolTip", "The status can not be determined because an operation affecting it is currently in progress." },
		{ "LoggedIn.Comment", "/** We have valid OAuth credentials. */" },
		{ "LoggedIn.Name", "FTwitchSDKAuthStatus::LoggedIn" },
		{ "LoggedIn.ToolTip", "We have valid OAuth credentials." },
		{ "LoggedOut.Comment", "/** The core library is logged out. */" },
		{ "LoggedOut.Name", "FTwitchSDKAuthStatus::LoggedOut" },
		{ "LoggedOut.ToolTip", "The core library is logged out." },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The current user authentication status." },
		{ "WaitingForCode.Comment", "/** The authorization code flow is in progress and we are currently waiting for the user to authorize. */" },
		{ "WaitingForCode.Name", "FTwitchSDKAuthStatus::WaitingForCode" },
		{ "WaitingForCode.ToolTip", "The authorization code flow is in progress and we are currently waiting for the user to authorize." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		"FTwitchSDKAuthStatus",
		"FTwitchSDKAuthStatus",
		Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKAuthStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTwitchSDKAuthStatus.InnerSingleton, Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTwitchSDKAuthStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTwitchSDKHypeTrainContributionType;
	static UEnum* FTwitchSDKHypeTrainContributionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKHypeTrainContributionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTwitchSDKHypeTrainContributionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("FTwitchSDKHypeTrainContributionType"));
		}
		return Z_Registration_Info_UEnum_FTwitchSDKHypeTrainContributionType.OuterSingleton;
	}
	template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKHypeTrainContributionType>()
	{
		return FTwitchSDKHypeTrainContributionType_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType_Statics::Enumerators[] = {
		{ "FTwitchSDKHypeTrainContributionType::Bits", (int64)FTwitchSDKHypeTrainContributionType::Bits },
		{ "FTwitchSDKHypeTrainContributionType::Subscription", (int64)FTwitchSDKHypeTrainContributionType::Subscription },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType_Statics::Enum_MetaDataParams[] = {
		{ "Bits.Name", "FTwitchSDKHypeTrainContributionType::Bits" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "Subscription.Name", "FTwitchSDKHypeTrainContributionType::Subscription" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		"FTwitchSDKHypeTrainContributionType",
		"FTwitchSDKHypeTrainContributionType",
		Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKHypeTrainContributionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTwitchSDKHypeTrainContributionType.InnerSingleton, Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTwitchSDKHypeTrainContributionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTwitchSDKCustomRewardRedemptionState;
	static UEnum* FTwitchSDKCustomRewardRedemptionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKCustomRewardRedemptionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTwitchSDKCustomRewardRedemptionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("FTwitchSDKCustomRewardRedemptionState"));
		}
		return Z_Registration_Info_UEnum_FTwitchSDKCustomRewardRedemptionState.OuterSingleton;
	}
	template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKCustomRewardRedemptionState>()
	{
		return FTwitchSDKCustomRewardRedemptionState_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState_Statics::Enumerators[] = {
		{ "FTwitchSDKCustomRewardRedemptionState::Unknown", (int64)FTwitchSDKCustomRewardRedemptionState::Unknown },
		{ "FTwitchSDKCustomRewardRedemptionState::Unfulfilled", (int64)FTwitchSDKCustomRewardRedemptionState::Unfulfilled },
		{ "FTwitchSDKCustomRewardRedemptionState::Fulfilled", (int64)FTwitchSDKCustomRewardRedemptionState::Fulfilled },
		{ "FTwitchSDKCustomRewardRedemptionState::Canceled", (int64)FTwitchSDKCustomRewardRedemptionState::Canceled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Canceled.Comment", "/** The channel points reward has been canceled, and the channel points have been refunded. */" },
		{ "Canceled.Name", "FTwitchSDKCustomRewardRedemptionState::Canceled" },
		{ "Canceled.ToolTip", "The channel points reward has been canceled, and the channel points have been refunded." },
		{ "Fulfilled.Comment", "/** The channel points reward has been fulfilled. */" },
		{ "Fulfilled.Name", "FTwitchSDKCustomRewardRedemptionState::Fulfilled" },
		{ "Fulfilled.ToolTip", "The channel points reward has been fulfilled." },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "Unfulfilled.Comment", "/** The channel points reward has been redeemed and is now waiting to be fulfilled. */" },
		{ "Unfulfilled.Name", "FTwitchSDKCustomRewardRedemptionState::Unfulfilled" },
		{ "Unfulfilled.ToolTip", "The channel points reward has been redeemed and is now waiting to be fulfilled." },
		{ "Unknown.Comment", "/** There was an error determining the state of the redemption. */" },
		{ "Unknown.Name", "FTwitchSDKCustomRewardRedemptionState::Unknown" },
		{ "Unknown.ToolTip", "There was an error determining the state of the redemption." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		"FTwitchSDKCustomRewardRedemptionState",
		"FTwitchSDKCustomRewardRedemptionState",
		Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKCustomRewardRedemptionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTwitchSDKCustomRewardRedemptionState.InnerSingleton, Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTwitchSDKCustomRewardRedemptionState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTwitchSDKEventStreamKind;
	static UEnum* FTwitchSDKEventStreamKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKEventStreamKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTwitchSDKEventStreamKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("FTwitchSDKEventStreamKind"));
		}
		return Z_Registration_Info_UEnum_FTwitchSDKEventStreamKind.OuterSingleton;
	}
	template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKEventStreamKind>()
	{
		return FTwitchSDKEventStreamKind_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind_Statics::Enumerators[] = {
		{ "FTwitchSDKEventStreamKind::Subscription", (int64)FTwitchSDKEventStreamKind::Subscription },
		{ "FTwitchSDKEventStreamKind::Follower", (int64)FTwitchSDKEventStreamKind::Follower },
		{ "FTwitchSDKEventStreamKind::Cheer", (int64)FTwitchSDKEventStreamKind::Cheer },
		{ "FTwitchSDKEventStreamKind::CustomRewardRedemption", (int64)FTwitchSDKEventStreamKind::CustomRewardRedemption },
		{ "FTwitchSDKEventStreamKind::HypeTrain", (int64)FTwitchSDKEventStreamKind::HypeTrain },
		{ "FTwitchSDKEventStreamKind::ChannelRaid", (int64)FTwitchSDKEventStreamKind::ChannelRaid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChannelRaid.Comment", "/** A broadcaster raids another broadcaster\xe2\x80\x99s channel. */" },
		{ "ChannelRaid.Name", "FTwitchSDKEventStreamKind::ChannelRaid" },
		{ "ChannelRaid.ToolTip", "A broadcaster raids another broadcaster\xe2\x80\x99s channel." },
		{ "Cheer.Comment", "/** A user cheers on the specified channel. */" },
		{ "Cheer.Name", "FTwitchSDKEventStreamKind::Cheer" },
		{ "Cheer.ToolTip", "A user cheers on the specified channel." },
		{ "Comment", "/** The type of an EventSub subscription. */" },
		{ "CustomRewardRedemption.Comment", "/** A viewer has redeemed a custom channel points reward on the specified channel or the redemption has been updated (i.e., fulfilled or cancelled). */" },
		{ "CustomRewardRedemption.Name", "FTwitchSDKEventStreamKind::CustomRewardRedemption" },
		{ "CustomRewardRedemption.ToolTip", "A viewer has redeemed a custom channel points reward on the specified channel or the redemption has been updated (i.e., fulfilled or cancelled)." },
		{ "Follower.Comment", "/** A specified channel receives a follow. */" },
		{ "Follower.Name", "FTwitchSDKEventStreamKind::Follower" },
		{ "Follower.ToolTip", "A specified channel receives a follow." },
		{ "HypeTrain.Comment", "/** A Hype Train makes progress on the user's channel. Requires the channel:read:hype_train scope. */" },
		{ "HypeTrain.Name", "FTwitchSDKEventStreamKind::HypeTrain" },
		{ "HypeTrain.ToolTip", "A Hype Train makes progress on the user's channel. Requires the channel:read:hype_train scope." },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "Subscription.Comment", "/** A notification when a specified channel receives a subscriber. This does not include resubscribes. */" },
		{ "Subscription.Name", "FTwitchSDKEventStreamKind::Subscription" },
		{ "Subscription.ToolTip", "A notification when a specified channel receives a subscriber. This does not include resubscribes." },
		{ "ToolTip", "The type of an EventSub subscription." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		"FTwitchSDKEventStreamKind",
		"FTwitchSDKEventStreamKind",
		Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKEventStreamKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTwitchSDKEventStreamKind.InnerSingleton, Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTwitchSDKEventStreamKind.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTwitchSDKPredictionStatus;
	static UEnum* FTwitchSDKPredictionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKPredictionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTwitchSDKPredictionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("FTwitchSDKPredictionStatus"));
		}
		return Z_Registration_Info_UEnum_FTwitchSDKPredictionStatus.OuterSingleton;
	}
	template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKPredictionStatus>()
	{
		return FTwitchSDKPredictionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus_Statics::Enumerators[] = {
		{ "FTwitchSDKPredictionStatus::Active", (int64)FTwitchSDKPredictionStatus::Active },
		{ "FTwitchSDKPredictionStatus::Locked", (int64)FTwitchSDKPredictionStatus::Locked },
		{ "FTwitchSDKPredictionStatus::Resolved", (int64)FTwitchSDKPredictionStatus::Resolved },
		{ "FTwitchSDKPredictionStatus::Canceled", (int64)FTwitchSDKPredictionStatus::Canceled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "/** The Prediction is active and viewers can make predictions. */" },
		{ "Active.Name", "FTwitchSDKPredictionStatus::Active" },
		{ "Active.ToolTip", "The Prediction is active and viewers can make predictions." },
		{ "BlueprintType", "true" },
		{ "Canceled.Comment", "/** The Prediction has been canceled and the Channel Points have been refunded to participants. */" },
		{ "Canceled.Name", "FTwitchSDKPredictionStatus::Canceled" },
		{ "Canceled.ToolTip", "The Prediction has been canceled and the Channel Points have been refunded to participants." },
		{ "Comment", "/** Status of a Prediction. */" },
		{ "Locked.Comment", "/** The Prediction has been locked and viewers can no longer make predictions. */" },
		{ "Locked.Name", "FTwitchSDKPredictionStatus::Locked" },
		{ "Locked.ToolTip", "The Prediction has been locked and viewers can no longer make predictions." },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "Resolved.Comment", "/** A winning outcome has been chosen and the Channel Points have been distributed to the users who guessed the correct outcome. */" },
		{ "Resolved.Name", "FTwitchSDKPredictionStatus::Resolved" },
		{ "Resolved.ToolTip", "A winning outcome has been chosen and the Channel Points have been distributed to the users who guessed the correct outcome." },
		{ "ToolTip", "Status of a Prediction." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		"FTwitchSDKPredictionStatus",
		"FTwitchSDKPredictionStatus",
		Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKPredictionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTwitchSDKPredictionStatus.InnerSingleton, Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTwitchSDKPredictionStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTwitchSDKPollStatus;
	static UEnum* FTwitchSDKPollStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKPollStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTwitchSDKPollStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("FTwitchSDKPollStatus"));
		}
		return Z_Registration_Info_UEnum_FTwitchSDKPollStatus.OuterSingleton;
	}
	template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKPollStatus>()
	{
		return FTwitchSDKPollStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus_Statics::Enumerators[] = {
		{ "FTwitchSDKPollStatus::Active", (int64)FTwitchSDKPollStatus::Active },
		{ "FTwitchSDKPollStatus::Completed", (int64)FTwitchSDKPollStatus::Completed },
		{ "FTwitchSDKPollStatus::Terminated", (int64)FTwitchSDKPollStatus::Terminated },
		{ "FTwitchSDKPollStatus::Archived", (int64)FTwitchSDKPollStatus::Archived },
		{ "FTwitchSDKPollStatus::Moderated", (int64)FTwitchSDKPollStatus::Moderated },
		{ "FTwitchSDKPollStatus::Invalid", (int64)FTwitchSDKPollStatus::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "/** Poll is currently in progress. */" },
		{ "Active.Name", "FTwitchSDKPollStatus::Active" },
		{ "Active.ToolTip", "Poll is currently in progress." },
		{ "Archived.Comment", "/** Poll is no longer visible on the channel. */" },
		{ "Archived.Name", "FTwitchSDKPollStatus::Archived" },
		{ "Archived.ToolTip", "Poll is no longer visible on the channel." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Status of a poll. */" },
		{ "Completed.Comment", "/** Poll has reached its PollInfo::EndedAt time. */" },
		{ "Completed.Name", "FTwitchSDKPollStatus::Completed" },
		{ "Completed.ToolTip", "Poll has reached its PollInfo::EndedAt time." },
		{ "Invalid.Comment", "/** Something went wrong determining the state. */" },
		{ "Invalid.Name", "FTwitchSDKPollStatus::Invalid" },
		{ "Invalid.ToolTip", "Something went wrong determining the state." },
		{ "Moderated.Comment", "/** Poll is no longer visible to any user on Twitch. */" },
		{ "Moderated.Name", "FTwitchSDKPollStatus::Moderated" },
		{ "Moderated.ToolTip", "Poll is no longer visible to any user on Twitch." },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "Terminated.Comment", "/** Poll has been manually terminated before its PollInfo::EndedAt time. */" },
		{ "Terminated.Name", "FTwitchSDKPollStatus::Terminated" },
		{ "Terminated.ToolTip", "Poll has been manually terminated before its PollInfo::EndedAt time." },
		{ "ToolTip", "Status of a poll." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		"FTwitchSDKPollStatus",
		"FTwitchSDKPollStatus",
		Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKPollStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTwitchSDKPollStatus.InnerSingleton, Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTwitchSDKPollStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTwitchSDKHttpMethod;
	static UEnum* FTwitchSDKHttpMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKHttpMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTwitchSDKHttpMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("FTwitchSDKHttpMethod"));
		}
		return Z_Registration_Info_UEnum_FTwitchSDKHttpMethod.OuterSingleton;
	}
	template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKHttpMethod>()
	{
		return FTwitchSDKHttpMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod_Statics::Enumerators[] = {
		{ "FTwitchSDKHttpMethod::Get", (int64)FTwitchSDKHttpMethod::Get },
		{ "FTwitchSDKHttpMethod::Post", (int64)FTwitchSDKHttpMethod::Post },
		{ "FTwitchSDKHttpMethod::Put", (int64)FTwitchSDKHttpMethod::Put },
		{ "FTwitchSDKHttpMethod::Patch", (int64)FTwitchSDKHttpMethod::Patch },
		{ "FTwitchSDKHttpMethod::Delete", (int64)FTwitchSDKHttpMethod::Delete },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Delete.Name", "FTwitchSDKHttpMethod::Delete" },
		{ "Get.Name", "FTwitchSDKHttpMethod::Get" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "Patch.Name", "FTwitchSDKHttpMethod::Patch" },
		{ "Post.Name", "FTwitchSDKHttpMethod::Post" },
		{ "Put.Name", "FTwitchSDKHttpMethod::Put" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		"FTwitchSDKHttpMethod",
		"FTwitchSDKHttpMethod",
		Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod()
	{
		if (!Z_Registration_Info_UEnum_FTwitchSDKHttpMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTwitchSDKHttpMethod.InnerSingleton, Z_Construct_UEnum_TwitchSDK_FTwitchSDKHttpMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTwitchSDKHttpMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKAuthState;
class UScriptStruct* FTwitchSDKAuthState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKAuthState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKAuthState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKAuthState, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKAuthState"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKAuthState.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKAuthState>()
{
	return FTwitchSDKAuthState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Scopes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scopes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scopes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The library's user authentication state. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The library's user authentication state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKAuthState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The current authentication status. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The current authentication status." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKAuthState, Status), Z_Construct_UEnum_TwitchSDK_FTwitchSDKAuthStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Status_MetaData)) }; // 934493663
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Scopes_Inner = { "Scopes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Scopes_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** If Status is AuthStatus.LoggedIn, this is the set of available OAuth scopes. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "If Status is AuthStatus.LoggedIn, this is the set of available OAuth scopes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Scopes = { "Scopes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKAuthState, Scopes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Scopes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Scopes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Scopes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewProp_Scopes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKAuthState",
		sizeof(FTwitchSDKAuthState),
		alignof(FTwitchSDKAuthState),
		Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKAuthState()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKAuthState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKAuthState.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKAuthState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKChannelRaidEvent;
class UScriptStruct* FTwitchSDKChannelRaidEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKChannelRaidEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKChannelRaidEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKChannelRaidEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKChannelRaidEvent.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKChannelRaidEvent>()
{
	return FTwitchSDKChannelRaidEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromBroadcasterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FromBroadcasterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromBroadcasterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FromBroadcasterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToBroadcasterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToBroadcasterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToBroadcasterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToBroadcasterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Viewers_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Viewers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A broadcaster raids another broadcaster\xe2\x80\x99s channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "A broadcaster raids another broadcaster\xe2\x80\x99s channel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKChannelRaidEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The broadcaster ID that created the raid. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The broadcaster ID that created the raid." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterId = { "FromBroadcasterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelRaidEvent, FromBroadcasterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The broadcaster display name that created the raid. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The broadcaster display name that created the raid." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterName = { "FromBroadcasterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelRaidEvent, FromBroadcasterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The broadcaster ID that received the raid. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The broadcaster ID that received the raid." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterId = { "ToBroadcasterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelRaidEvent, ToBroadcasterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The broadcaster display name that received the raid. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The broadcaster display name that received the raid." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterName = { "ToBroadcasterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelRaidEvent, ToBroadcasterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_Viewers_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The number of viewers in the raid. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The number of viewers in the raid." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_Viewers = { "Viewers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelRaidEvent, Viewers), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_Viewers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_Viewers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_FromBroadcasterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_ToBroadcasterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewProp_Viewers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKChannelRaidEvent",
		sizeof(FTwitchSDKChannelRaidEvent),
		alignof(FTwitchSDKChannelRaidEvent),
		Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKChannelRaidEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKChannelRaidEvent.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKChannelRaidEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardResolveRequest;
class UScriptStruct* FTwitchSDKCustomRewardResolveRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardResolveRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardResolveRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKCustomRewardResolveRequest"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardResolveRequest.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKCustomRewardResolveRequest>()
{
	return FTwitchSDKCustomRewardResolveRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedemptionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RedemptionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRewardId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomRewardId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKCustomRewardResolveRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_RedemptionId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the Custom Reward Redemption to update. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the Custom Reward Redemption to update." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_RedemptionId = { "RedemptionId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardResolveRequest, RedemptionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_RedemptionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_RedemptionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_CustomRewardId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the Custom Reward the redemptions to be updated are for. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the Custom Reward the redemptions to be updated are for." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_CustomRewardId = { "CustomRewardId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardResolveRequest, CustomRewardId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_CustomRewardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_CustomRewardId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_BroadcasterId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_BroadcasterId = { "BroadcasterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardResolveRequest, BroadcasterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_BroadcasterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_BroadcasterId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The new status to set redemptions to. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The new status to set redemptions to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardResolveRequest, Resolution), Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_Resolution_MetaData)) }; // 2819677623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_RedemptionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_CustomRewardId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_BroadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_Resolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewProp_Resolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKCustomRewardResolveRequest",
		sizeof(FTwitchSDKCustomRewardResolveRequest),
		alignof(FTwitchSDKCustomRewardResolveRequest),
		Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardResolveRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardResolveRequest.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardResolveRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainContribution;
class UScriptStruct* FTwitchSDKHypeTrainContribution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainContribution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainContribution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKHypeTrainContribution"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainContribution.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKHypeTrainContribution>()
{
	return FTwitchSDKHypeTrainContribution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Total;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes a contribution to a Hype Train. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Describes a contribution to a Hype Train." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKHypeTrainContribution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The ID of the user who contributed to the Hype Train. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The ID of the user who contributed to the Hype Train." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainContribution, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The display name of the user who contributed to the Hype Train. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The display name of the user who contributed to the Hype Train." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainContribution, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Type of contribution. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Type of contribution." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainContribution, Type), Z_Construct_UEnum_TwitchSDK_FTwitchSDKHypeTrainContributionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Type_MetaData)) }; // 4197105389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Total_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The total contributed. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The total contributed." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainContribution, Total), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Total_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Total_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewProp_Total,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKHypeTrainContribution",
		sizeof(FTwitchSDKHypeTrainContribution),
		alignof(FTwitchSDKHypeTrainContribution),
		Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainContribution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainContribution.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainContribution.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainEvent;
class UScriptStruct* FTwitchSDKHypeTrainEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKHypeTrainEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainEvent.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKHypeTrainEvent>()
{
	return FTwitchSDKHypeTrainEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HypeTrainId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HypeTrainId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalPoints_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TotalPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpiresAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpiresAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EndedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownEndsAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CooldownEndsAt;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TopContributions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopContributions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TopContributions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastContribution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastContribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A Hype Train makes progress on the user's channel. Requires the channel:read:hype_train scope. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "A Hype Train makes progress on the user's channel. Requires the channel:read:hype_train scope." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKHypeTrainEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_HypeTrainId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The Hype Train ID. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The Hype Train ID." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_HypeTrainId = { "HypeTrainId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, HypeTrainId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_HypeTrainId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_HypeTrainId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The requested broadcaster ID. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The requested broadcaster ID." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterId = { "BroadcasterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, BroadcasterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The requested broadcaster display name. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The requested broadcaster display name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterName = { "BroadcasterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, BroadcasterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The current level of the Hype Train. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The current level of the Hype Train." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TotalPoints_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Total points contributed to the Hype Train. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Total points contributed to the Hype Train." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TotalPoints = { "TotalPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, TotalPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TotalPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TotalPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The number of points contributed to the Hype Train at the current level. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The number of points contributed to the Hype Train at the current level." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The number of points required to reach the next level. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The number of points required to reach the next level." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, Goal), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Goal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_StartedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The time when the Hype Train started. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The time when the Hype Train started." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_StartedAt = { "StartedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, StartedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_StartedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_StartedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_ExpiresAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The time when the Hype Train expires. The expiration is extended when the Hype Train reaches a new level. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The time when the Hype Train expires. The expiration is extended when the Hype Train reaches a new level." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_ExpiresAt = { "ExpiresAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, ExpiresAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_ExpiresAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_ExpiresAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_EndedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The time when the Hype Train ended. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The time when the Hype Train ended." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_EndedAt = { "EndedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, EndedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_EndedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_EndedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_CooldownEndsAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The time when the Hype Train cooldown ends so that the next Hype Train can start. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The time when the Hype Train cooldown ends so that the next Hype Train can start." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_CooldownEndsAt = { "CooldownEndsAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, CooldownEndsAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_CooldownEndsAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_CooldownEndsAt_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TopContributions_Inner = { "TopContributions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution, METADATA_PARAMS(nullptr, 0) }; // 934620673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TopContributions_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The contributors with the most points contributed. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The contributors with the most points contributed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TopContributions = { "TopContributions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, TopContributions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TopContributions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TopContributions_MetaData)) }; // 934620673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_LastContribution_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The most recent contribution. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The most recent contribution." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_LastContribution = { "LastContribution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKHypeTrainEvent, LastContribution), Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_LastContribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_LastContribution_MetaData)) }; // 934620673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_HypeTrainId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_BroadcasterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TotalPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_Goal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_StartedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_ExpiresAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_EndedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_CooldownEndsAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TopContributions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_TopContributions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewProp_LastContribution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKHypeTrainEvent",
		sizeof(FTwitchSDKHypeTrainEvent),
		alignof(FTwitchSDKHypeTrainEvent),
		Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainEvent.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardDefinition;
class UScriptStruct* FTwitchSDKCustomRewardDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKCustomRewardDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardDefinition.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKCustomRewardDefinition>()
{
	return FTwitchSDKCustomRewardDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsUserInputRequired_MetaData[];
#endif
		static void NewProp_IsUserInputRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsUserInputRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMaxPerStreamEnabled_MetaData[];
#endif
		static void NewProp_IsMaxPerStreamEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMaxPerStreamEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPerStream_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPerStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMaxPerUserPerStreamEnabled_MetaData[];
#endif
		static void NewProp_IsMaxPerUserPerStreamEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMaxPerUserPerStreamEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPerUserPerStream_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPerUserPerStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsGlobalCooldownEnabled_MetaData[];
#endif
		static void NewProp_IsGlobalCooldownEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGlobalCooldownEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalCooldownSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalCooldownSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldRedemptionsSkipRequestQueue_MetaData[];
#endif
		static void NewProp_ShouldRedemptionsSkipRequestQueue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldRedemptionsSkipRequestQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKCustomRewardDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The title of the reward. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The title of the reward." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardDefinition, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The cost of the reward. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The cost of the reward." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardDefinition, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Prompt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. The prompt for the viewer when redeeming the reward. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. The prompt for the viewer when redeeming the reward." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardDefinition, Prompt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Prompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Prompt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. Is the reward currently enabled, if false the reward won't show up to viewers. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. Is the reward currently enabled, if false the reward won't show up to viewers." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FTwitchSDKCustomRewardDefinition*)Obj)->IsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKCustomRewardDefinition), &Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. Custom background color for the reward. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. Custom background color for the reward." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardDefinition, BackgroundColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsUserInputRequired_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. Does the user need to enter information when redeeming the reward. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. Does the user need to enter information when redeeming the reward." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsUserInputRequired_SetBit(void* Obj)
	{
		((FTwitchSDKCustomRewardDefinition*)Obj)->IsUserInputRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsUserInputRequired = { "IsUserInputRequired", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKCustomRewardDefinition), &Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsUserInputRequired_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsUserInputRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsUserInputRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerStreamEnabled_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. Whether a maximum per stream is enabled. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. Whether a maximum per stream is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerStreamEnabled_SetBit(void* Obj)
	{
		((FTwitchSDKCustomRewardDefinition*)Obj)->IsMaxPerStreamEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerStreamEnabled = { "IsMaxPerStreamEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKCustomRewardDefinition), &Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerStreamEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerStreamEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerStreamEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerStream_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. The maximum number per stream if enabled. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. The maximum number per stream if enabled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerStream = { "MaxPerStream", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardDefinition, MaxPerStream), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerStream_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerUserPerStreamEnabled_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. Whether a maximum per user per stream is enabled. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. Whether a maximum per user per stream is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerUserPerStreamEnabled_SetBit(void* Obj)
	{
		((FTwitchSDKCustomRewardDefinition*)Obj)->IsMaxPerUserPerStreamEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerUserPerStreamEnabled = { "IsMaxPerUserPerStreamEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKCustomRewardDefinition), &Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerUserPerStreamEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerUserPerStreamEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerUserPerStreamEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerUserPerStream_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. The maximum number per user per stream if enabled. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. The maximum number per user per stream if enabled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerUserPerStream = { "MaxPerUserPerStream", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardDefinition, MaxPerUserPerStream), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerUserPerStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerUserPerStream_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsGlobalCooldownEnabled_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. Whether a cooldown is enabled. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. Whether a cooldown is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsGlobalCooldownEnabled_SetBit(void* Obj)
	{
		((FTwitchSDKCustomRewardDefinition*)Obj)->IsGlobalCooldownEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsGlobalCooldownEnabled = { "IsGlobalCooldownEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKCustomRewardDefinition), &Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsGlobalCooldownEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsGlobalCooldownEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsGlobalCooldownEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_GlobalCooldownSeconds_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. The cooldown in seconds if enabled. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. The cooldown in seconds if enabled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_GlobalCooldownSeconds = { "GlobalCooldownSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardDefinition, GlobalCooldownSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_GlobalCooldownSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_GlobalCooldownSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_ShouldRedemptionsSkipRequestQueue_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Optional. Should redemptions be set to CustomRewardRedemptionState::Fulfilled status immediately when redeemed and skip the request queue instead of the normal CustomRewardRedemptionState::Unfulfilled status. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Optional. Should redemptions be set to CustomRewardRedemptionState::Fulfilled status immediately when redeemed and skip the request queue instead of the normal CustomRewardRedemptionState::Unfulfilled status." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_ShouldRedemptionsSkipRequestQueue_SetBit(void* Obj)
	{
		((FTwitchSDKCustomRewardDefinition*)Obj)->ShouldRedemptionsSkipRequestQueue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_ShouldRedemptionsSkipRequestQueue = { "ShouldRedemptionsSkipRequestQueue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKCustomRewardDefinition), &Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_ShouldRedemptionsSkipRequestQueue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_ShouldRedemptionsSkipRequestQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_ShouldRedemptionsSkipRequestQueue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_Prompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsUserInputRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerStreamEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsMaxPerUserPerStreamEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_MaxPerUserPerStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_IsGlobalCooldownEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_GlobalCooldownSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewProp_ShouldRedemptionsSkipRequestQueue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKCustomRewardDefinition",
		sizeof(FTwitchSDKCustomRewardDefinition),
		alignof(FTwitchSDKCustomRewardDefinition),
		Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardDefinition.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardList;
class UScriptStruct* FTwitchSDKCustomRewardList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKCustomRewardList"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardList.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKCustomRewardList>()
{
	return FTwitchSDKCustomRewardList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rewards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rewards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKCustomRewardList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::NewProp_Rewards_Inner = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition, METADATA_PARAMS(nullptr, 0) }; // 2661298695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::NewProp_Rewards_MetaData[] = {
		{ "Category", "Twitch" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardList, Rewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::NewProp_Rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::NewProp_Rewards_MetaData)) }; // 2661298695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::NewProp_Rewards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::NewProp_Rewards,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKCustomRewardList",
		sizeof(FTwitchSDKCustomRewardList),
		alignof(FTwitchSDKCustomRewardList),
		Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardList.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardEntry;
class UScriptStruct* FTwitchSDKBitsLeaderboardEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKBitsLeaderboardEntry"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardEntry.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKBitsLeaderboardEntry>()
{
	return FTwitchSDKBitsLeaderboardEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Score;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKBitsLeaderboardEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the user (viewer) in the leaderboard entry. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the user (viewer) in the leaderboard entry." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboardEntry, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Display name corresponding to BitsLeaderboardEntry::UserId. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Display name corresponding to BitsLeaderboardEntry::UserId." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboardEntry, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Rank_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Leaderboard rank of the user. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Leaderboard rank of the user." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboardEntry, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Leaderboard score (number of Bits) of the user. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Leaderboard score (number of Bits) of the user." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboardEntry, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Score_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewProp_Score,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKBitsLeaderboardEntry",
		sizeof(FTwitchSDKBitsLeaderboardEntry),
		alignof(FTwitchSDKBitsLeaderboardEntry),
		Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardEntry.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboard;
class UScriptStruct* FTwitchSDKBitsLeaderboard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKBitsLeaderboard"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboard.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKBitsLeaderboard>()
{
	return FTwitchSDKBitsLeaderboard::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EndedAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKBitsLeaderboard>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry, METADATA_PARAMS(nullptr, 0) }; // 1169496485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Entries on the bits leaderboard, in no particular order. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Entries on the bits leaderboard, in no particular order." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboard, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_Data_MetaData)) }; // 1169496485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_StartedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Start of the date range for the returned data. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Start of the date range for the returned data." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_StartedAt = { "StartedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboard, StartedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_StartedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_StartedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_EndedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** End of the date range for the returned data. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "End of the date range for the returned data." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_EndedAt = { "EndedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboard, EndedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_EndedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_EndedAt_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_StartedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewProp_EndedAt,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKBitsLeaderboard",
		sizeof(FTwitchSDKBitsLeaderboard),
		alignof(FTwitchSDKBitsLeaderboard),
		Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboard.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboard.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboard.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardRequest;
class UScriptStruct* FTwitchSDKBitsLeaderboardRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKBitsLeaderboardRequest"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardRequest.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKBitsLeaderboardRequest>()
{
	return FTwitchSDKBitsLeaderboardRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKBitsLeaderboardRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Number of results to be returned. Maximum: 100. Default: 10. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Number of results to be returned. Maximum: 100. Default: 10." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboardRequest, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Time period over which data is aggregated (PST time zone). This parameter interacts with BitsLeaderboardRequest::StartedAt. Default: all. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Time period over which data is aggregated (PST time zone). This parameter interacts with BitsLeaderboardRequest::StartedAt. Default: all." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboardRequest, Period), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_StartedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Timestamp for the period over which the returned data is aggregated. Must be in RFC 3339 format. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Timestamp for the period over which the returned data is aggregated. Must be in RFC 3339 format." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_StartedAt = { "StartedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboardRequest, StartedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_StartedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_StartedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the user whose results are returned; i.e., the person who paid for the Bits. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the user whose results are returned; i.e., the person who paid for the Bits." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKBitsLeaderboardRequest, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_UserId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_StartedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewProp_UserId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKBitsLeaderboardRequest",
		sizeof(FTwitchSDKBitsLeaderboardRequest),
		alignof(FTwitchSDKBitsLeaderboardRequest),
		Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardRequest.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKChannelFollowEvent;
class UScriptStruct* FTwitchSDKChannelFollowEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKChannelFollowEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKChannelFollowEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKChannelFollowEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKChannelFollowEvent.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKChannelFollowEvent>()
{
	return FTwitchSDKChannelFollowEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FollowedAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A specified channel receives a follow. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "A specified channel receives a follow." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKChannelFollowEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The user ID for the user now following the specified channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The user ID for the user now following the specified channel." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelFollowEvent, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserDisplayName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The user display name for the user now following the specified channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The user display name for the user now following the specified channel." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserDisplayName = { "UserDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelFollowEvent, UserDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_FollowedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** RFC3339 timestamp of when the follow occurred. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "RFC3339 timestamp of when the follow occurred." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_FollowedAt = { "FollowedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelFollowEvent, FollowedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_FollowedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_FollowedAt_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_UserDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewProp_FollowedAt,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKChannelFollowEvent",
		sizeof(FTwitchSDKChannelFollowEvent),
		alignof(FTwitchSDKChannelFollowEvent),
		Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKChannelFollowEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKChannelFollowEvent.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKChannelFollowEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKChannelCheerEvent;
class UScriptStruct* FTwitchSDKChannelCheerEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKChannelCheerEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKChannelCheerEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKChannelCheerEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKChannelCheerEvent.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKChannelCheerEvent>()
{
	return FTwitchSDKChannelCheerEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAnonymous_MetaData[];
#endif
		static void NewProp_IsAnonymous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAnonymous;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bits_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Bits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A user cheers on the specified channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "A user cheers on the specified channel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKChannelCheerEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_IsAnonymous_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Whether the user cheered anonymously or not. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Whether the user cheered anonymously or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_IsAnonymous_SetBit(void* Obj)
	{
		((FTwitchSDKChannelCheerEvent*)Obj)->IsAnonymous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_IsAnonymous = { "IsAnonymous", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKChannelCheerEvent), &Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_IsAnonymous_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_IsAnonymous_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_IsAnonymous_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The user ID for the user who cheered on the specified channel. This is null if ChannelCheerEvent::IsAnonymous is true. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The user ID for the user who cheered on the specified channel. This is null if ChannelCheerEvent::IsAnonymous is true." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelCheerEvent, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserDisplayName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The user display name for the user who cheered on the specified channel. This is null if ChannelCheerEvent::IsAnonymous is true. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The user display name for the user who cheered on the specified channel. This is null if ChannelCheerEvent::IsAnonymous is true." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserDisplayName = { "UserDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelCheerEvent, UserDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The message sent with the cheer. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The message sent with the cheer." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelCheerEvent, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Bits_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The number of bits cheered. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The number of bits cheered." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Bits = { "Bits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelCheerEvent, Bits), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Bits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Bits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_IsAnonymous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_UserDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewProp_Bits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKChannelCheerEvent",
		sizeof(FTwitchSDKChannelCheerEvent),
		alignof(FTwitchSDKChannelCheerEvent),
		Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKChannelCheerEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKChannelCheerEvent.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKChannelCheerEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardEvent;
class UScriptStruct* FTwitchSDKCustomRewardEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKCustomRewardEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardEvent.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKCustomRewardEvent>()
{
	return FTwitchSDKCustomRewardEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedemptionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RedemptionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedeemerId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RedeemerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedeemerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RedeemerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInput_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserInput;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRewardId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomRewardId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRewardTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomRewardTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRewardCost_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_CustomRewardCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRewardPrompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomRewardPrompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedeemedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RedeemedAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A viewer has redeemed a custom channel points reward on the specified channel or the redemption has been updated (i.e., fulfilled or cancelled). */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "A viewer has redeemed a custom channel points reward on the specified channel or the redemption has been updated (i.e., fulfilled or cancelled)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKCustomRewardEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedemptionId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The redemption identifier. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The redemption identifier." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedemptionId = { "RedemptionId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, RedemptionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedemptionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedemptionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The requested broadcaster ID. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The requested broadcaster ID." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterId = { "BroadcasterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, BroadcasterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** User ID of the user that redeemed the reward. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "User ID of the user that redeemed the reward." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerId = { "RedeemerId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, RedeemerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The requested broadcaster display name. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The requested broadcaster display name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterName = { "BroadcasterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, BroadcasterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Display name of the user that redeemed the reward. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Display name of the user that redeemed the reward." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerName = { "RedeemerName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, RedeemerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_UserInput_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The user input provided. Empty string if not provided. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The user input provided. Empty string if not provided." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_UserInput = { "UserInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, UserInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_UserInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_UserInput_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Status of the redemption. If you resolve or cancel all redemptions from your code, you should discard all events of this type with a status other than CustomRewardRedemptionState::Unfulfilled. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Status of the redemption. If you resolve or cancel all redemptions from your code, you should discard all events of this type with a status other than CustomRewardRedemptionState::Unfulfilled." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, Status), Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_Status_MetaData)) }; // 2819677623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The reward identifier. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The reward identifier." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardId = { "CustomRewardId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, CustomRewardId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardTitle_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The reward name. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The reward name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardTitle = { "CustomRewardTitle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, CustomRewardTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardCost_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The reward cost. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The reward cost." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardCost = { "CustomRewardCost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, CustomRewardCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardPrompt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The reward description. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The reward description." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardPrompt = { "CustomRewardPrompt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, CustomRewardPrompt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardPrompt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** RFC3339 timestamp of when the reward was redeemed. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "RFC3339 timestamp of when the reward was redeemed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemedAt = { "RedeemedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKCustomRewardEvent, RedeemedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemedAt_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedemptionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_BroadcasterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_UserInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_CustomRewardPrompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewProp_RedeemedAt,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKCustomRewardEvent",
		sizeof(FTwitchSDKCustomRewardEvent),
		alignof(FTwitchSDKCustomRewardEvent),
		Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardEvent.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamRequest;
class UScriptStruct* FTwitchSDKEventStreamRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKEventStreamRequest"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamRequest.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKEventStreamRequest>()
{
	return FTwitchSDKEventStreamRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKEventStreamRequest>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::NewProp_Kind_MetaData[] = {
		{ "Category", "Twitch" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKEventStreamRequest, Kind), Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::NewProp_Kind_MetaData)) }; // 2471831533
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::NewProp_Kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::NewProp_Kind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKEventStreamRequest",
		sizeof(FTwitchSDKEventStreamRequest),
		alignof(FTwitchSDKEventStreamRequest),
		Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamRequest.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamDesc;
class UScriptStruct* FTwitchSDKEventStreamDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKEventStreamDesc"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamDesc.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKEventStreamDesc>()
{
	return FTwitchSDKEventStreamDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKEventStreamDesc>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Kind_MetaData[] = {
		{ "Category", "Twitch" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKEventStreamDesc, Kind), Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Kind_MetaData)) }; // 2471831533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Opaque token identifying the subscription. Do not touch. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Opaque token identifying the subscription. Do not touch." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKEventStreamDesc, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Token_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewProp_Token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKEventStreamDesc",
		sizeof(FTwitchSDKEventStreamDesc),
		alignof(FTwitchSDKEventStreamDesc),
		Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamDesc.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKModifyChannelInfoRequest;
class UScriptStruct* FTwitchSDKModifyChannelInfoRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKModifyChannelInfoRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKModifyChannelInfoRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKModifyChannelInfoRequest"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKModifyChannelInfoRequest.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKModifyChannelInfoRequest>()
{
	return FTwitchSDKModifyChannelInfoRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceUpdateTags_MetaData[];
#endif
		static void NewProp_ForceUpdateTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceUpdateTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKModifyChannelInfoRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_GameId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The current game ID being played on the channel. Use \xe2\x80\x9c""0\xe2\x80\x9d to unset the game. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The current game ID being played on the channel. Use \xe2\x80\x9c""0\xe2\x80\x9d to unset the game." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKModifyChannelInfoRequest, GameId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_GameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_GameId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The language of the channel. A language value must be either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The language of the channel. A language value must be either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKModifyChannelInfoRequest, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The title of the stream. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The title of the stream." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKModifyChannelInfoRequest, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Stream delay in seconds. Stream delay is a Twitch Partner feature; trying to set this value for other account types will return a 400 error. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Stream delay in seconds. Stream delay is a Twitch Partner feature; trying to set this value for other account types will return a 400 error." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKModifyChannelInfoRequest, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Delay_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** A list of channel-defined tags to apply to the channel. Tags help identify the content that the channel streams. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "A list of channel-defined tags to apply to the channel. Tags help identify the content that the channel streams." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKModifyChannelInfoRequest, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_ForceUpdateTags_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** If ModifyChannelInfoRequest::Tags is missing or empty, channel tags will not be altered by default (if ModifyChannelInfoRequest::ForceUpdateTags is false). If ModifyChannelInfoRequest::ForceUpdateTags is true, passing an empty (or missing) array ModifyChannelInfoRequest::Tags causes all tags to be removed from the channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "If ModifyChannelInfoRequest::Tags is missing or empty, channel tags will not be altered by default (if ModifyChannelInfoRequest::ForceUpdateTags is false). If ModifyChannelInfoRequest::ForceUpdateTags is true, passing an empty (or missing) array ModifyChannelInfoRequest::Tags causes all tags to be removed from the channel." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_ForceUpdateTags_SetBit(void* Obj)
	{
		((FTwitchSDKModifyChannelInfoRequest*)Obj)->ForceUpdateTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_ForceUpdateTags = { "ForceUpdateTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKModifyChannelInfoRequest), &Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_ForceUpdateTags_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_ForceUpdateTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_ForceUpdateTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_GameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewProp_ForceUpdateTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKModifyChannelInfoRequest",
		sizeof(FTwitchSDKModifyChannelInfoRequest),
		alignof(FTwitchSDKModifyChannelInfoRequest),
		Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKModifyChannelInfoRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKModifyChannelInfoRequest.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKModifyChannelInfoRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKPredictionDefinition;
class UScriptStruct* FTwitchSDKPredictionDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKPredictionDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKPredictionDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKPredictionDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKPredictionDefinition.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKPredictionDefinition>()
{
	return FTwitchSDKPredictionDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Outcomes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outcomes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outcomes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Contains the information necessary to create a new prediction. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Contains the information necessary to create a new prediction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKPredictionDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Title for the Prediction. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Title for the Prediction." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionDefinition, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Title_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Outcomes_Inner = { "Outcomes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Outcomes_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Array of outcome titles for the Prediction. Array size must be 2. The first outcome object is the \xe2\x80\x9c""blue\xe2\x80\x9d outcome and the second outcome object is the \xe2\x80\x9cpink\xe2\x80\x9d outcome when viewing the Prediction on Twitch. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Array of outcome titles for the Prediction. Array size must be 2. The first outcome object is the \xe2\x80\x9c""blue\xe2\x80\x9d outcome and the second outcome object is the \xe2\x80\x9cpink\xe2\x80\x9d outcome when viewing the Prediction on Twitch." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Outcomes = { "Outcomes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionDefinition, Outcomes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Outcomes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Outcomes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Total duration for the Prediction (in seconds). Minimum: 1. Maximum: 1800. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Total duration for the Prediction (in seconds). Minimum: 1. Maximum: 1800." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionDefinition, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Outcomes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Outcomes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewProp_Duration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKPredictionDefinition",
		sizeof(FTwitchSDKPredictionDefinition),
		alignof(FTwitchSDKPredictionDefinition),
		Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKPredictionDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKPredictionDefinition.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKPredictionDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKPredictionOutcome;
class UScriptStruct* FTwitchSDKPredictionOutcome::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKPredictionOutcome.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKPredictionOutcome.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKPredictionOutcome"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKPredictionOutcome.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKPredictionOutcome>()
{
	return FTwitchSDKPredictionOutcome::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Users;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelPoints_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ChannelPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKPredictionOutcome>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID for the outcome. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID for the outcome." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionOutcome, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Text displayed for outcome. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Text displayed for outcome." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionOutcome, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Users_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Number of unique users that chose the outcome. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Number of unique users that chose the outcome." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionOutcome, Users), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Users_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Users_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_ChannelPoints_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Number of Channel Points used for the outcome. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Number of Channel Points used for the outcome." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_ChannelPoints = { "ChannelPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionOutcome, ChannelPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_ChannelPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_ChannelPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Color for the outcome. Valid values: BLUE, PINK */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Color for the outcome. Valid values: BLUE, PINK" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionOutcome, Color), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Users,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_ChannelPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKPredictionOutcome",
		sizeof(FTwitchSDKPredictionOutcome),
		alignof(FTwitchSDKPredictionOutcome),
		Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKPredictionOutcome.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKPredictionOutcome.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKPredictionOutcome.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKPredictionInfo;
class UScriptStruct* FTwitchSDKPredictionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKPredictionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKPredictionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKPredictionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKPredictionInfo.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKPredictionInfo>()
{
	return FTwitchSDKPredictionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WinningOutcomeId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WinningOutcomeId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outcomes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outcomes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outcomes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EndedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LockedAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes a Channel Points Predictions on a Twitch channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Describes a Channel Points Predictions on a Twitch channel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKPredictionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the Prediction. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the Prediction." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_BroadcasterId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the broadcaster. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the broadcaster." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_BroadcasterId = { "BroadcasterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionInfo, BroadcasterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_BroadcasterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_BroadcasterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Title for the Prediction. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Title for the Prediction." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionInfo, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_WinningOutcomeId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the winning outcome. If PredictionInfo::Status is PredictionStatus::Active, this is set to null. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the winning outcome. If PredictionInfo::Status is PredictionStatus::Active, this is set to null." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_WinningOutcomeId = { "WinningOutcomeId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionInfo, WinningOutcomeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_WinningOutcomeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_WinningOutcomeId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Outcomes_Inner = { "Outcomes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome, METADATA_PARAMS(nullptr, 0) }; // 266690464
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Outcomes_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Array of possible outcomes for the Prediction. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Array of possible outcomes for the Prediction." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Outcomes = { "Outcomes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionInfo, Outcomes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Outcomes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Outcomes_MetaData)) }; // 266690464
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Status of the Prediction. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Status of the Prediction." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionInfo, Status), Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Status_MetaData)) }; // 833952321
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** UTC timestamp for the Prediction\xe2\x80\x99s start time. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "UTC timestamp for the Prediction\xe2\x80\x99s start time." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionInfo, CreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_EndedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** UTC timestamp for when the Prediction ended. If PredictionInfo::Status is PredictionStatus::Active, this is set to null. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "UTC timestamp for when the Prediction ended. If PredictionInfo::Status is PredictionStatus::Active, this is set to null." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_EndedAt = { "EndedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionInfo, EndedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_EndedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_EndedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_LockedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** UTC timestamp for when the Prediction was locked. If PredictionInfo::Status is PredictionStatus::Active, this is set to null. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "UTC timestamp for when the Prediction was locked. If PredictionInfo::Status is PredictionStatus::Active, this is set to null." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_LockedAt = { "LockedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPredictionInfo, LockedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_LockedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_LockedAt_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_BroadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_WinningOutcomeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Outcomes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Outcomes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_CreatedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_EndedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewProp_LockedAt,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKPredictionInfo",
		sizeof(FTwitchSDKPredictionInfo),
		alignof(FTwitchSDKPredictionInfo),
		Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKPredictionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKPredictionInfo.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKPredictionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKEndPredictionRequest;
class UScriptStruct* FTwitchSDKEndPredictionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKEndPredictionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKEndPredictionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKEndPredictionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKEndPredictionRequest.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKEndPredictionRequest>()
{
	return FTwitchSDKEndPredictionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PredictionId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WinningOutcomeId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WinningOutcomeId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKEndPredictionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_BroadcasterId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The broadcaster running prediction events. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The broadcaster running prediction events." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_BroadcasterId = { "BroadcasterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKEndPredictionRequest, BroadcasterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_BroadcasterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_BroadcasterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_PredictionId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the Prediction. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the Prediction." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_PredictionId = { "PredictionId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKEndPredictionRequest, PredictionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_PredictionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_PredictionId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The Prediction status to be set. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The Prediction status to be set." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKEndPredictionRequest, Status), Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_Status_MetaData)) }; // 833952321
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_WinningOutcomeId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the winning outcome for the Prediction, if EndPredictionRequest::Status is being set to PredictionStatus::Resolved. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the winning outcome for the Prediction, if EndPredictionRequest::Status is being set to PredictionStatus::Resolved." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_WinningOutcomeId = { "WinningOutcomeId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKEndPredictionRequest, WinningOutcomeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_WinningOutcomeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_WinningOutcomeId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_BroadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_PredictionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewProp_WinningOutcomeId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKEndPredictionRequest",
		sizeof(FTwitchSDKEndPredictionRequest),
		alignof(FTwitchSDKEndPredictionRequest),
		Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKEndPredictionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKEndPredictionRequest.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKEndPredictionRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKStreamMarkerInfo;
class UScriptStruct* FTwitchSDKStreamMarkerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKStreamMarkerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKStreamMarkerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKStreamMarkerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKStreamMarkerInfo.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKStreamMarkerInfo>()
{
	return FTwitchSDKStreamMarkerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_PositionSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes a Stream Marker. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Describes a Stream Marker." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKStreamMarkerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Unique ID of the marker. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Unique ID of the marker." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamMarkerInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** RFC3339 timestamp of the marker. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "RFC3339 timestamp of the marker." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamMarkerInfo, CreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Description of the marker. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Description of the marker." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamMarkerInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_PositionSeconds_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Relative offset (in seconds) of the marker, from the beginning of the stream. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Relative offset (in seconds) of the marker, from the beginning of the stream." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_PositionSeconds = { "PositionSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamMarkerInfo, PositionSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_PositionSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_PositionSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_CreatedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewProp_PositionSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKStreamMarkerInfo",
		sizeof(FTwitchSDKStreamMarkerInfo),
		alignof(FTwitchSDKStreamMarkerInfo),
		Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKStreamMarkerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKStreamMarkerInfo.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKStreamMarkerInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKClipInfo;
class UScriptStruct* FTwitchSDKClipInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKClipInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKClipInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKClipInfo, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKClipInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKClipInfo.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKClipInfo>()
{
	return FTwitchSDKClipInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmbedUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EmbedUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes a Clip. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Describes a Clip." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKClipInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the clip being queried. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the clip being queried." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKClipInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** URL where the clip can be viewed. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "URL where the clip can be viewed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKClipInfo, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_EmbedUrl_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** URL to embed the clip. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "URL to embed the clip." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_EmbedUrl = { "EmbedUrl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKClipInfo, EmbedUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_EmbedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_EmbedUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Date when the clip was created. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Date when the clip was created." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKClipInfo, CreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_ThumbnailUrl_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** URL of the clip thumbnail. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "URL of the clip thumbnail." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_ThumbnailUrl = { "ThumbnailUrl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKClipInfo, ThumbnailUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_ThumbnailUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_ThumbnailUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Duration of the Clip in seconds. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Duration of the Clip in seconds." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKClipInfo, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_EmbedUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_CreatedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_ThumbnailUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewProp_Duration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKClipInfo",
		sizeof(FTwitchSDKClipInfo),
		alignof(FTwitchSDKClipInfo),
		Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKClipInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKClipInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKClipInfo.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKClipInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKEndPollRequest;
class UScriptStruct* FTwitchSDKEndPollRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKEndPollRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKEndPollRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKEndPollRequest"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKEndPollRequest.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKEndPollRequest>()
{
	return FTwitchSDKEndPollRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PollId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowResults_MetaData[];
#endif
		static void NewProp_ShowResults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKEndPollRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_BroadcasterId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the broadcaster. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the broadcaster." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_BroadcasterId = { "BroadcasterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKEndPollRequest, BroadcasterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_BroadcasterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_BroadcasterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_PollId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the poll. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the poll." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_PollId = { "PollId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKEndPollRequest, PollId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_PollId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_PollId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_ShowResults_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** If true, sets the poll status to PollStatus::Terminated so that results are shown. If false, sets the poll status to PollStatus::Archived so that the poll is canceled immediately and no results are shown. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "If true, sets the poll status to PollStatus::Terminated so that results are shown. If false, sets the poll status to PollStatus::Archived so that the poll is canceled immediately and no results are shown." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_ShowResults_SetBit(void* Obj)
	{
		((FTwitchSDKEndPollRequest*)Obj)->ShowResults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_ShowResults = { "ShowResults", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKEndPollRequest), &Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_ShowResults_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_ShowResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_ShowResults_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_BroadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_PollId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewProp_ShowResults,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKEndPollRequest",
		sizeof(FTwitchSDKEndPollRequest),
		alignof(FTwitchSDKEndPollRequest),
		Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKEndPollRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKEndPollRequest.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKEndPollRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKPollChoiceInfo;
class UScriptStruct* FTwitchSDKPollChoiceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKPollChoiceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKPollChoiceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKPollChoiceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKPollChoiceInfo.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKPollChoiceInfo>()
{
	return FTwitchSDKPollChoiceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Votes_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Votes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelPointsVotes_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ChannelPointsVotes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKPollChoiceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID for the choice. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID for the choice." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollChoiceInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Text displayed for the choice. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Text displayed for the choice." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollChoiceInfo, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Votes_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Total number of votes received for the choice across all methods of voting. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Total number of votes received for the choice across all methods of voting." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Votes = { "Votes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollChoiceInfo, Votes), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Votes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Votes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_ChannelPointsVotes_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Number of votes received via Channel Points. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Number of votes received via Channel Points." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_ChannelPointsVotes = { "ChannelPointsVotes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollChoiceInfo, ChannelPointsVotes), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_ChannelPointsVotes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_ChannelPointsVotes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_Votes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewProp_ChannelPointsVotes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKPollChoiceInfo",
		sizeof(FTwitchSDKPollChoiceInfo),
		alignof(FTwitchSDKPollChoiceInfo),
		Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKPollChoiceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKPollChoiceInfo.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKPollChoiceInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKPollInfo;
class UScriptStruct* FTwitchSDKPollInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKPollInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKPollInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKPollInfo, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKPollInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKPollInfo.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKPollInfo>()
{
	return FTwitchSDKPollInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Choices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelPointsVotingEnabled_MetaData[];
#endif
		static void NewProp_ChannelPointsVotingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChannelPointsVotingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelPointsPerVote_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelPointsPerVote;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EndedAt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes a Poll on a Twitch channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Describes a Poll on a Twitch channel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKPollInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the poll. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the poll." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_BroadcasterId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the broadcaster. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the broadcaster." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_BroadcasterId = { "BroadcasterId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollInfo, BroadcasterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_BroadcasterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_BroadcasterId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Question displayed for the poll. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Question displayed for the poll." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollInfo, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Title_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo, METADATA_PARAMS(nullptr, 0) }; // 3958817716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Choices_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Array of the poll choices. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Array of the poll choices." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollInfo, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Choices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Choices_MetaData)) }; // 3958817716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsVotingEnabled_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Indicates if Channel Points can be used for voting. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Indicates if Channel Points can be used for voting." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsVotingEnabled_SetBit(void* Obj)
	{
		((FTwitchSDKPollInfo*)Obj)->ChannelPointsVotingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsVotingEnabled = { "ChannelPointsVotingEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKPollInfo), &Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsVotingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsVotingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsVotingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsPerVote_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Number of Channel Points required to vote once with Channel Points. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Number of Channel Points required to vote once with Channel Points." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsPerVote = { "ChannelPointsPerVote", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollInfo, ChannelPointsPerVote), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsPerVote_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsPerVote_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Poll status. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Poll status." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollInfo, Status), Z_Construct_UEnum_TwitchSDK_FTwitchSDKPollStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Status_MetaData)) }; // 2967441344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_StartedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** UTC timestamp for the poll\xe2\x80\x99s start time. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "UTC timestamp for the poll\xe2\x80\x99s start time." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_StartedAt = { "StartedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollInfo, StartedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_StartedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_StartedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_EndedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** UTC timestamp for the poll\xe2\x80\x99s end time. Set to null if the poll is still PollStatus::Active. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "UTC timestamp for the poll\xe2\x80\x99s end time. Set to null if the poll is still PollStatus::Active." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_EndedAt = { "EndedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollInfo, EndedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_EndedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_EndedAt_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_BroadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Choices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Choices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsVotingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_ChannelPointsPerVote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_StartedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewProp_EndedAt,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKPollInfo",
		sizeof(FTwitchSDKPollInfo),
		alignof(FTwitchSDKPollInfo),
		Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPollInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKPollInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKPollInfo.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKPollInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKStreamQuery;
class UScriptStruct* FTwitchSDKStreamQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKStreamQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKStreamQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKStreamQuery"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKStreamQuery.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKStreamQuery>()
{
	return FTwitchSDKStreamQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_After_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_After;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_First_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_First;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Languages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Languages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Languages;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserLogins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserLogins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserLogins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes a query for streams. All fields are optional. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Describes a query for streams. All fields are optional." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKStreamQuery>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_After_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Cursor for forward pagination: tells the server where to start fetching the next set of results, in a multi-page response. The cursor value specified here is from the PaginationCursor response field of a prior query. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Cursor for forward pagination: tells the server where to start fetching the next set of results, in a multi-page response. The cursor value specified here is from the PaginationCursor response field of a prior query." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_After = { "After", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamQuery, After), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_After_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_After_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_First_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Maximum number of objects to return. Maximum: 100. Default: 20. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Maximum number of objects to return. Maximum: 100. Default: 20." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_First = { "First", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamQuery, First), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_First_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_First_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_GameIds_Inner = { "GameIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_GameIds_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Returns streams broadcasting a specified game ID. You can specify up to 100 IDs. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Returns streams broadcasting a specified game ID. You can specify up to 100 IDs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_GameIds = { "GameIds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamQuery, GameIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_GameIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_GameIds_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_Languages_Inner = { "Languages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_Languages_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Stream language. You can specify up to 100 languages. A language value must be either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Stream language. You can specify up to 100 languages. A language value must be either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_Languages = { "Languages", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamQuery, Languages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_Languages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_Languages_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserIds_Inner = { "UserIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserIds_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Returns streams broadcast by one or more specified user IDs. You can specify up to 100 IDs. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Returns streams broadcast by one or more specified user IDs. You can specify up to 100 IDs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserIds = { "UserIds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamQuery, UserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserIds_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserLogins_Inner = { "UserLogins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserLogins_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Returns streams broadcast by one or more specified user login names. You can specify up to 100 names. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Returns streams broadcast by one or more specified user login names. You can specify up to 100 names." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserLogins = { "UserLogins", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamQuery, UserLogins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserLogins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserLogins_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_After,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_First,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_GameIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_GameIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_Languages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_Languages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserLogins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewProp_UserLogins,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKStreamQuery",
		sizeof(FTwitchSDKStreamQuery),
		alignof(FTwitchSDKStreamQuery),
		Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKStreamQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKStreamQuery.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKStreamQuery.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKWebRequestResult;
class UScriptStruct* FTwitchSDKWebRequestResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKWebRequestResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKWebRequestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKWebRequestResult"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKWebRequestResult.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKWebRequestResult>()
{
	return FTwitchSDKWebRequestResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HttpStatus_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HttpStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseBody_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseBody;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKWebRequestResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_HttpStatus_MetaData[] = {
		{ "Category", "Twitch" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_HttpStatus = { "HttpStatus", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKWebRequestResult, HttpStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_HttpStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_HttpStatus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_ResponseBody_MetaData[] = {
		{ "Category", "Twitch" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_ResponseBody = { "ResponseBody", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKWebRequestResult, ResponseBody), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_ResponseBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_ResponseBody_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_HttpStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewProp_ResponseBody,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKWebRequestResult",
		sizeof(FTwitchSDKWebRequestResult),
		alignof(FTwitchSDKWebRequestResult),
		Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKWebRequestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKWebRequestResult.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKWebRequestResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKAuthenticationInfo;
class UScriptStruct* FTwitchSDKAuthenticationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKAuthenticationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKAuthenticationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKAuthenticationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKAuthenticationInfo.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKAuthenticationInfo>()
{
	return FTwitchSDKAuthenticationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uri;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKAuthenticationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_Uri_MetaData[] = {
		{ "Category", "Twitch" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKAuthenticationInfo, Uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_Uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_Uri_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_UserCode_MetaData[] = {
		{ "Category", "Twitch" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_UserCode = { "UserCode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKAuthenticationInfo, UserCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_UserCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_UserCode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_Uri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewProp_UserCode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKAuthenticationInfo",
		sizeof(FTwitchSDKAuthenticationInfo),
		alignof(FTwitchSDKAuthenticationInfo),
		Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKAuthenticationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKAuthenticationInfo.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKAuthenticationInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKUserInfo;
class UScriptStruct* FTwitchSDKUserInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKUserInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKUserInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKUserInfo, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKUserInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKUserInfo.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKUserInfo>()
{
	return FTwitchSDKUserInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LoginName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileImageUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProfileImageUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfflineImageUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OfflineImageUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ViewCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKUserInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ChannelId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** User\xe2\x80\x99s ID. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "User\xe2\x80\x99s ID." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, ChannelId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_LoginName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** User\xe2\x80\x99s login name. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "User\xe2\x80\x99s login name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_LoginName = { "LoginName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, LoginName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_LoginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_LoginName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** User\xe2\x80\x99s display name. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "User\xe2\x80\x99s display name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_UserType_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** User\xe2\x80\x99s type: \"staff\", \"admin\", \"global_mod\", or \"\". */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "User\xe2\x80\x99s type: \"staff\", \"admin\", \"global_mod\", or \"\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_UserType = { "UserType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, UserType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_UserType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_UserType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_BroadcasterType_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** User\xe2\x80\x99s broadcaster type: \"partner\", \"affiliate\", or \"\". */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "User\xe2\x80\x99s broadcaster type: \"partner\", \"affiliate\", or \"\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_BroadcasterType = { "BroadcasterType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, BroadcasterType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_BroadcasterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_BroadcasterType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** User\xe2\x80\x99s channel description. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "User\xe2\x80\x99s channel description." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ProfileImageUrl_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** URL of the user\xe2\x80\x99s profile image. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "URL of the user\xe2\x80\x99s profile image." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ProfileImageUrl = { "ProfileImageUrl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, ProfileImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ProfileImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ProfileImageUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_OfflineImageUrl_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** URL of the user\xe2\x80\x99s offline image. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "URL of the user\xe2\x80\x99s offline image." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_OfflineImageUrl = { "OfflineImageUrl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, OfflineImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_OfflineImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_OfflineImageUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ViewCount_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Total number of views of the user\xe2\x80\x99s channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Total number of views of the user\xe2\x80\x99s channel." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ViewCount = { "ViewCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, ViewCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ViewCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ViewCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Date when the user was created. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Date when the user was created." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, CreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** User\xe2\x80\x99s verified email address. Only available if you have the user:read:email scope. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "User\xe2\x80\x99s verified email address. Only available if you have the user:read:email scope." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserInfo, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Email_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_LoginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_UserType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_BroadcasterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ProfileImageUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_OfflineImageUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_ViewCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_CreatedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewProp_Email,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKUserInfo",
		sizeof(FTwitchSDKUserInfo),
		alignof(FTwitchSDKUserInfo),
		Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKUserInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKUserInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKUserInfo.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKUserInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKStreamInfo;
class UScriptStruct* FTwitchSDKStreamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKStreamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKStreamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKStreamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKStreamInfo.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKStreamInfo>()
{
	return FTwitchSDKStreamInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserLogin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserLogin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewerCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ViewerCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartedAt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailUrl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMature_MetaData[];
#endif
		static void NewProp_IsMature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes an active stream on Twitch. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Describes an active stream on Twitch." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKStreamInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Stream ID. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Stream ID." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the user who is streaming. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the user who is streaming." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserLogin_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Login of the user who is streaming. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Login of the user who is streaming." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserLogin = { "UserLogin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, UserLogin), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserLogin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Display name of the user who is streaming. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Display name of the user who is streaming." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** ID of the game being played on the stream. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "ID of the game being played on the stream." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, GameId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Name of the game being played. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Name of the game being played." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, GameName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Stream type: \"live\" or \"\" (in case of error). */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Stream type: \"live\" or \"\" (in case of error)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Stream title. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Stream title." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ViewerCount_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Number of viewers watching the stream at the time of the query. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Number of viewers watching the stream at the time of the query." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ViewerCount = { "ViewerCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, ViewerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ViewerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ViewerCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_StartedAt_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** UTC timestamp. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "UTC timestamp." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_StartedAt = { "StartedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, StartedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_StartedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_StartedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Stream language. A language value is either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Stream language. A language value is either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ThumbnailUrl_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Thumbnail URL of the stream. All image URLs have variable width and height. You can replace {width} and {height} with any values to get that size image */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Thumbnail URL of the stream. All image URLs have variable width and height. You can replace {width} and {height} with any values to get that size image" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ThumbnailUrl = { "ThumbnailUrl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, ThumbnailUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ThumbnailUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ThumbnailUrl_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Shows tag IDs that apply to the stream. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Shows tag IDs that apply to the stream." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamInfo, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_IsMature_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Indicates if the broadcaster has specified their channel contains mature content that may be inappropriate for younger audiences. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Indicates if the broadcaster has specified their channel contains mature content that may be inappropriate for younger audiences." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_IsMature_SetBit(void* Obj)
	{
		((FTwitchSDKStreamInfo*)Obj)->IsMature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_IsMature = { "IsMature", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKStreamInfo), &Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_IsMature_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_IsMature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_IsMature_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_GameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ViewerCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_StartedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_ThumbnailUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewProp_IsMature,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKStreamInfo",
		sizeof(FTwitchSDKStreamInfo),
		alignof(FTwitchSDKStreamInfo),
		Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKStreamInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKStreamInfo.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKStreamInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKStreamQueryResult;
class UScriptStruct* FTwitchSDKStreamQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKStreamQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKStreamQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKStreamQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKStreamQueryResult.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKStreamQueryResult>()
{
	return FTwitchSDKStreamQueryResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Streams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Streams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Streams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaginationCursor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PaginationCursor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKStreamQueryResult>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_Streams_Inner = { "Streams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTwitchSDKStreamInfo, METADATA_PARAMS(nullptr, 0) }; // 3489471818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_Streams_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** List of streams matching the query. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "List of streams matching the query." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_Streams = { "Streams", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamQueryResult, Streams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_Streams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_Streams_MetaData)) }; // 3489471818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_PaginationCursor_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Pagination cursor to fetch the next page of results. May be empty if there are no further results. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Pagination cursor to fetch the next page of results. May be empty if there are no further results." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_PaginationCursor = { "PaginationCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKStreamQueryResult, PaginationCursor), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_PaginationCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_PaginationCursor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_Streams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_Streams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewProp_PaginationCursor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKStreamQueryResult",
		sizeof(FTwitchSDKStreamQueryResult),
		alignof(FTwitchSDKStreamQueryResult),
		Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKStreamQueryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKStreamQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKStreamQueryResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKChannelSubscribeEvent;
class UScriptStruct* FTwitchSDKChannelSubscribeEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKChannelSubscribeEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKChannelSubscribeEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKChannelSubscribeEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKChannelSubscribeEvent.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKChannelSubscribeEvent>()
{
	return FTwitchSDKChannelSubscribeEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserLogin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserLogin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsGift_MetaData[];
#endif
		static void NewProp_IsGift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulativeMonths_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CumulativeMonths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreakMonths_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StreakMonths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationMonths_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DurationMonths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A notification when a specified channel receives a subscriber. This does not include resubscribes. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "A notification when a specified channel receives a subscriber. This does not include resubscribes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKChannelSubscribeEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The user ID for the user who subscribed to the specified channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The user ID for the user who subscribed to the specified channel." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelSubscribeEvent, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserLogin_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The user login for the user who subscribed to the specified channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The user login for the user who subscribed to the specified channel." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserLogin = { "UserLogin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelSubscribeEvent, UserLogin), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserLogin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserDisplayName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The user display name for the user who subscribed to the specified channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The user display name for the user who subscribed to the specified channel." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserDisplayName = { "UserDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelSubscribeEvent, UserDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_Tier_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The tier of the subscription. Valid values are 1000, 2000, and 3000. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The tier of the subscription. Valid values are 1000, 2000, and 3000." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_Tier = { "Tier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelSubscribeEvent, Tier), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_Tier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_Tier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_IsGift_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Whether the subscription is a gift. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Whether the subscription is a gift." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_IsGift_SetBit(void* Obj)
	{
		((FTwitchSDKChannelSubscribeEvent*)Obj)->IsGift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_IsGift = { "IsGift", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKChannelSubscribeEvent), &Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_IsGift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_IsGift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_IsGift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_CumulativeMonths_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The total number of months the user has been subscribed to the channel. This is nonzero only for resubscriptions. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The total number of months the user has been subscribed to the channel. This is nonzero only for resubscriptions." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_CumulativeMonths = { "CumulativeMonths", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelSubscribeEvent, CumulativeMonths), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_CumulativeMonths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_CumulativeMonths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_StreakMonths_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The number of consecutive months the user\xe2\x80\x99s current subscription has been active. This value is -1 if the user has opted out of sharing this information. This is nonzero only for resubscriptions. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The number of consecutive months the user\xe2\x80\x99s current subscription has been active. This value is -1 if the user has opted out of sharing this information. This is nonzero only for resubscriptions." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_StreakMonths = { "StreakMonths", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelSubscribeEvent, StreakMonths), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_StreakMonths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_StreakMonths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_DurationMonths_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** The month duration of the subscription. This is nonzero only for resubscriptions. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "The month duration of the subscription. This is nonzero only for resubscriptions." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_DurationMonths = { "DurationMonths", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKChannelSubscribeEvent, DurationMonths), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_DurationMonths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_DurationMonths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_UserDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_Tier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_IsGift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_CumulativeMonths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_StreakMonths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewProp_DurationMonths,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKChannelSubscribeEvent",
		sizeof(FTwitchSDKChannelSubscribeEvent),
		alignof(FTwitchSDKChannelSubscribeEvent),
		Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKChannelSubscribeEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKChannelSubscribeEvent.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKChannelSubscribeEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKUserSubscriptionCheckResult;
class UScriptStruct* FTwitchSDKUserSubscriptionCheckResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKUserSubscriptionCheckResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKUserSubscriptionCheckResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKUserSubscriptionCheckResult"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKUserSubscriptionCheckResult.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKUserSubscriptionCheckResult>()
{
	return FTwitchSDKUserSubscriptionCheckResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GifterLogin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GifterLogin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GifterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GifterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsGift_MetaData[];
#endif
		static void NewProp_IsGift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSubscribed_MetaData[];
#endif
		static void NewProp_IsSubscribed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSubscribed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes a user's subscription to a specified channel. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Describes a user's subscription to a specified channel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKUserSubscriptionCheckResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_Tier_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Subscription tier. 1000 is tier 1, 2000 is tier 2, and 3000 is tier 3. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Subscription tier. 1000 is tier 1, 2000 is tier 2, and 3000 is tier 3." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_Tier = { "Tier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserSubscriptionCheckResult, Tier), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_Tier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_Tier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterLogin_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Login of the gifter (if UserSubscriptionCheckResult::IsGift is true). */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Login of the gifter (if UserSubscriptionCheckResult::IsGift is true)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterLogin = { "GifterLogin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserSubscriptionCheckResult, GifterLogin), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterLogin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterName_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Display name of the gifter (if UserSubscriptionCheckResult::IsGift is true). */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Display name of the gifter (if UserSubscriptionCheckResult::IsGift is true)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterName = { "GifterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKUserSubscriptionCheckResult, GifterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsGift_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Indicates if the subscription is a gift. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Indicates if the subscription is a gift." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsGift_SetBit(void* Obj)
	{
		((FTwitchSDKUserSubscriptionCheckResult*)Obj)->IsGift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsGift = { "IsGift", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKUserSubscriptionCheckResult), &Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsGift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsGift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsGift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsSubscribed_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Indicates if the user is subscribed at all. If this is false, all other fields are empty. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Indicates if the user is subscribed at all. If this is false, all other fields are empty." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsSubscribed_SetBit(void* Obj)
	{
		((FTwitchSDKUserSubscriptionCheckResult*)Obj)->IsSubscribed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsSubscribed = { "IsSubscribed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKUserSubscriptionCheckResult), &Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsSubscribed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsSubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsSubscribed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_Tier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_GifterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsGift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewProp_IsSubscribed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKUserSubscriptionCheckResult",
		sizeof(FTwitchSDKUserSubscriptionCheckResult),
		alignof(FTwitchSDKUserSubscriptionCheckResult),
		Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKUserSubscriptionCheckResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKUserSubscriptionCheckResult.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKUserSubscriptionCheckResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwitchSDKPollDefinition;
class UScriptStruct* FTwitchSDKPollDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwitchSDKPollDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwitchSDKPollDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition, (UObject*)Z_Construct_UPackage__Script_TwitchSDK(), TEXT("TwitchSDKPollDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_TwitchSDKPollDefinition.OuterSingleton;
}
template<> TWITCHSDK_API UScriptStruct* StaticStruct<FTwitchSDKPollDefinition>()
{
	return FTwitchSDKPollDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Choices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitsVotingEnabled_MetaData[];
#endif
		static void NewProp_BitsVotingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BitsVotingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitsPerVote_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BitsPerVote;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelPointsVotingEnabled_MetaData[];
#endif
		static void NewProp_ChannelPointsVotingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChannelPointsVotingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelPointsPerVote_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelPointsPerVote;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Contains the information necessary to create a new poll. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Contains the information necessary to create a new poll." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwitchSDKPollDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Question displayed for the poll. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Question displayed for the poll." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollDefinition, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Title_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Choices_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Array of the poll choices. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Array of the poll choices." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollDefinition, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Choices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Choices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Total duration for the poll (in seconds). */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Total duration for the poll (in seconds)." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollDefinition, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsVotingEnabled_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Indicates if Bits can be used for voting. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Indicates if Bits can be used for voting." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsVotingEnabled_SetBit(void* Obj)
	{
		((FTwitchSDKPollDefinition*)Obj)->BitsVotingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsVotingEnabled = { "BitsVotingEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKPollDefinition), &Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsVotingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsVotingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsVotingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsPerVote_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Number of Bits required to vote once with Bits. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Number of Bits required to vote once with Bits." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsPerVote = { "BitsPerVote", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollDefinition, BitsPerVote), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsPerVote_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsPerVote_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsVotingEnabled_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Indicates if Channel Points can be used for voting. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Indicates if Channel Points can be used for voting." },
	};
#endif
	void Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsVotingEnabled_SetBit(void* Obj)
	{
		((FTwitchSDKPollDefinition*)Obj)->ChannelPointsVotingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsVotingEnabled = { "ChannelPointsVotingEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTwitchSDKPollDefinition), &Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsVotingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsVotingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsVotingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsPerVote_MetaData[] = {
		{ "Category", "Twitch" },
		{ "Comment", "/** Number of Channel Points required to vote once with Channel Points. */" },
		{ "ModuleRelativePath", "Public/TwitchSDKStructs.h" },
		{ "ToolTip", "Number of Channel Points required to vote once with Channel Points." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsPerVote = { "ChannelPointsPerVote", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTwitchSDKPollDefinition, ChannelPointsPerVote), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsPerVote_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsPerVote_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Choices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Choices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsVotingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_BitsPerVote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsVotingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewProp_ChannelPointsPerVote,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
		nullptr,
		&NewStructOps,
		"TwitchSDKPollDefinition",
		sizeof(FTwitchSDKPollDefinition),
		alignof(FTwitchSDKPollDefinition),
		Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPollDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_TwitchSDKPollDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwitchSDKPollDefinition.InnerSingleton, Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwitchSDKPollDefinition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKStructs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKStructs_h_Statics::EnumInfo[] = {
		{ FTwitchSDKLogLevel_StaticEnum, TEXT("FTwitchSDKLogLevel"), &Z_Registration_Info_UEnum_FTwitchSDKLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2880989027U) },
		{ FTwitchSDKAuthStatus_StaticEnum, TEXT("FTwitchSDKAuthStatus"), &Z_Registration_Info_UEnum_FTwitchSDKAuthStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 934493663U) },
		{ FTwitchSDKHypeTrainContributionType_StaticEnum, TEXT("FTwitchSDKHypeTrainContributionType"), &Z_Registration_Info_UEnum_FTwitchSDKHypeTrainContributionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4197105389U) },
		{ FTwitchSDKCustomRewardRedemptionState_StaticEnum, TEXT("FTwitchSDKCustomRewardRedemptionState"), &Z_Registration_Info_UEnum_FTwitchSDKCustomRewardRedemptionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2819677623U) },
		{ FTwitchSDKEventStreamKind_StaticEnum, TEXT("FTwitchSDKEventStreamKind"), &Z_Registration_Info_UEnum_FTwitchSDKEventStreamKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2471831533U) },
		{ FTwitchSDKPredictionStatus_StaticEnum, TEXT("FTwitchSDKPredictionStatus"), &Z_Registration_Info_UEnum_FTwitchSDKPredictionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 833952321U) },
		{ FTwitchSDKPollStatus_StaticEnum, TEXT("FTwitchSDKPollStatus"), &Z_Registration_Info_UEnum_FTwitchSDKPollStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2967441344U) },
		{ FTwitchSDKHttpMethod_StaticEnum, TEXT("FTwitchSDKHttpMethod"), &Z_Registration_Info_UEnum_FTwitchSDKHttpMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2948769151U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKStructs_h_Statics::ScriptStructInfo[] = {
		{ FTwitchSDKAuthState::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKAuthState_Statics::NewStructOps, TEXT("TwitchSDKAuthState"), &Z_Registration_Info_UScriptStruct_TwitchSDKAuthState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKAuthState), 339271613U) },
		{ FTwitchSDKChannelRaidEvent::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent_Statics::NewStructOps, TEXT("TwitchSDKChannelRaidEvent"), &Z_Registration_Info_UScriptStruct_TwitchSDKChannelRaidEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKChannelRaidEvent), 3042060871U) },
		{ FTwitchSDKCustomRewardResolveRequest::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKCustomRewardResolveRequest_Statics::NewStructOps, TEXT("TwitchSDKCustomRewardResolveRequest"), &Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardResolveRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKCustomRewardResolveRequest), 747338989U) },
		{ FTwitchSDKHypeTrainContribution::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKHypeTrainContribution_Statics::NewStructOps, TEXT("TwitchSDKHypeTrainContribution"), &Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainContribution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKHypeTrainContribution), 934620673U) },
		{ FTwitchSDKHypeTrainEvent::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent_Statics::NewStructOps, TEXT("TwitchSDKHypeTrainEvent"), &Z_Registration_Info_UScriptStruct_TwitchSDKHypeTrainEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKHypeTrainEvent), 1521674675U) },
		{ FTwitchSDKCustomRewardDefinition::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKCustomRewardDefinition_Statics::NewStructOps, TEXT("TwitchSDKCustomRewardDefinition"), &Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKCustomRewardDefinition), 2661298695U) },
		{ FTwitchSDKCustomRewardList::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList_Statics::NewStructOps, TEXT("TwitchSDKCustomRewardList"), &Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKCustomRewardList), 1177183375U) },
		{ FTwitchSDKBitsLeaderboardEntry::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardEntry_Statics::NewStructOps, TEXT("TwitchSDKBitsLeaderboardEntry"), &Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKBitsLeaderboardEntry), 1169496485U) },
		{ FTwitchSDKBitsLeaderboard::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard_Statics::NewStructOps, TEXT("TwitchSDKBitsLeaderboard"), &Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKBitsLeaderboard), 1108289092U) },
		{ FTwitchSDKBitsLeaderboardRequest::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboardRequest_Statics::NewStructOps, TEXT("TwitchSDKBitsLeaderboardRequest"), &Z_Registration_Info_UScriptStruct_TwitchSDKBitsLeaderboardRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKBitsLeaderboardRequest), 1813217483U) },
		{ FTwitchSDKChannelFollowEvent::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent_Statics::NewStructOps, TEXT("TwitchSDKChannelFollowEvent"), &Z_Registration_Info_UScriptStruct_TwitchSDKChannelFollowEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKChannelFollowEvent), 2626537624U) },
		{ FTwitchSDKChannelCheerEvent::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent_Statics::NewStructOps, TEXT("TwitchSDKChannelCheerEvent"), &Z_Registration_Info_UScriptStruct_TwitchSDKChannelCheerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKChannelCheerEvent), 2534425410U) },
		{ FTwitchSDKCustomRewardEvent::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKCustomRewardEvent_Statics::NewStructOps, TEXT("TwitchSDKCustomRewardEvent"), &Z_Registration_Info_UScriptStruct_TwitchSDKCustomRewardEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKCustomRewardEvent), 3256343047U) },
		{ FTwitchSDKEventStreamRequest::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKEventStreamRequest_Statics::NewStructOps, TEXT("TwitchSDKEventStreamRequest"), &Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKEventStreamRequest), 584859929U) },
		{ FTwitchSDKEventStreamDesc::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc_Statics::NewStructOps, TEXT("TwitchSDKEventStreamDesc"), &Z_Registration_Info_UScriptStruct_TwitchSDKEventStreamDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKEventStreamDesc), 607524476U) },
		{ FTwitchSDKModifyChannelInfoRequest::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKModifyChannelInfoRequest_Statics::NewStructOps, TEXT("TwitchSDKModifyChannelInfoRequest"), &Z_Registration_Info_UScriptStruct_TwitchSDKModifyChannelInfoRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKModifyChannelInfoRequest), 1139834744U) },
		{ FTwitchSDKPredictionDefinition::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKPredictionDefinition_Statics::NewStructOps, TEXT("TwitchSDKPredictionDefinition"), &Z_Registration_Info_UScriptStruct_TwitchSDKPredictionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKPredictionDefinition), 290988665U) },
		{ FTwitchSDKPredictionOutcome::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKPredictionOutcome_Statics::NewStructOps, TEXT("TwitchSDKPredictionOutcome"), &Z_Registration_Info_UScriptStruct_TwitchSDKPredictionOutcome, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKPredictionOutcome), 266690464U) },
		{ FTwitchSDKPredictionInfo::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo_Statics::NewStructOps, TEXT("TwitchSDKPredictionInfo"), &Z_Registration_Info_UScriptStruct_TwitchSDKPredictionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKPredictionInfo), 829981025U) },
		{ FTwitchSDKEndPredictionRequest::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKEndPredictionRequest_Statics::NewStructOps, TEXT("TwitchSDKEndPredictionRequest"), &Z_Registration_Info_UScriptStruct_TwitchSDKEndPredictionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKEndPredictionRequest), 722555935U) },
		{ FTwitchSDKStreamMarkerInfo::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo_Statics::NewStructOps, TEXT("TwitchSDKStreamMarkerInfo"), &Z_Registration_Info_UScriptStruct_TwitchSDKStreamMarkerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKStreamMarkerInfo), 2767334547U) },
		{ FTwitchSDKClipInfo::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKClipInfo_Statics::NewStructOps, TEXT("TwitchSDKClipInfo"), &Z_Registration_Info_UScriptStruct_TwitchSDKClipInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKClipInfo), 1649784404U) },
		{ FTwitchSDKEndPollRequest::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKEndPollRequest_Statics::NewStructOps, TEXT("TwitchSDKEndPollRequest"), &Z_Registration_Info_UScriptStruct_TwitchSDKEndPollRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKEndPollRequest), 483135822U) },
		{ FTwitchSDKPollChoiceInfo::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKPollChoiceInfo_Statics::NewStructOps, TEXT("TwitchSDKPollChoiceInfo"), &Z_Registration_Info_UScriptStruct_TwitchSDKPollChoiceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKPollChoiceInfo), 3958817716U) },
		{ FTwitchSDKPollInfo::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKPollInfo_Statics::NewStructOps, TEXT("TwitchSDKPollInfo"), &Z_Registration_Info_UScriptStruct_TwitchSDKPollInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKPollInfo), 1030971679U) },
		{ FTwitchSDKStreamQuery::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKStreamQuery_Statics::NewStructOps, TEXT("TwitchSDKStreamQuery"), &Z_Registration_Info_UScriptStruct_TwitchSDKStreamQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKStreamQuery), 3806370045U) },
		{ FTwitchSDKWebRequestResult::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKWebRequestResult_Statics::NewStructOps, TEXT("TwitchSDKWebRequestResult"), &Z_Registration_Info_UScriptStruct_TwitchSDKWebRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKWebRequestResult), 3274239637U) },
		{ FTwitchSDKAuthenticationInfo::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo_Statics::NewStructOps, TEXT("TwitchSDKAuthenticationInfo"), &Z_Registration_Info_UScriptStruct_TwitchSDKAuthenticationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKAuthenticationInfo), 2958114298U) },
		{ FTwitchSDKUserInfo::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKUserInfo_Statics::NewStructOps, TEXT("TwitchSDKUserInfo"), &Z_Registration_Info_UScriptStruct_TwitchSDKUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKUserInfo), 3138084840U) },
		{ FTwitchSDKStreamInfo::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKStreamInfo_Statics::NewStructOps, TEXT("TwitchSDKStreamInfo"), &Z_Registration_Info_UScriptStruct_TwitchSDKStreamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKStreamInfo), 3489471818U) },
		{ FTwitchSDKStreamQueryResult::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult_Statics::NewStructOps, TEXT("TwitchSDKStreamQueryResult"), &Z_Registration_Info_UScriptStruct_TwitchSDKStreamQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKStreamQueryResult), 846233278U) },
		{ FTwitchSDKChannelSubscribeEvent::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent_Statics::NewStructOps, TEXT("TwitchSDKChannelSubscribeEvent"), &Z_Registration_Info_UScriptStruct_TwitchSDKChannelSubscribeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKChannelSubscribeEvent), 1295601202U) },
		{ FTwitchSDKUserSubscriptionCheckResult::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult_Statics::NewStructOps, TEXT("TwitchSDKUserSubscriptionCheckResult"), &Z_Registration_Info_UScriptStruct_TwitchSDKUserSubscriptionCheckResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKUserSubscriptionCheckResult), 2877005969U) },
		{ FTwitchSDKPollDefinition::StaticStruct, Z_Construct_UScriptStruct_FTwitchSDKPollDefinition_Statics::NewStructOps, TEXT("TwitchSDKPollDefinition"), &Z_Registration_Info_UScriptStruct_TwitchSDKPollDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwitchSDKPollDefinition), 1277538794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKStructs_h_712883(TEXT("/Script/TwitchSDK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKStructs_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDKStructs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
