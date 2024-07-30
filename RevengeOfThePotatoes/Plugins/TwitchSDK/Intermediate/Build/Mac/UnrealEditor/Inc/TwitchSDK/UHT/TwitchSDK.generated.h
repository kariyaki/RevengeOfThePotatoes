// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TwitchSDK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWITCHSDK_TwitchSDK_generated_h
#error "TwitchSDK.generated.h already included, missing '#pragma once' in TwitchSDK.h"
#endif
#define TWITCHSDK_TwitchSDK_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Public_TwitchSDK_h


#define FOREACH_ENUM_FTWITCHSDKOAUTHSCOPE(op) \
	op(FTwitchSDKOAuthScope::ChannelManagePolls) \
	op(FTwitchSDKOAuthScope::ChannelManagePredictions) \
	op(FTwitchSDKOAuthScope::ChannelManageBroadcast) \
	op(FTwitchSDKOAuthScope::ChannelManageRedemptions) \
	op(FTwitchSDKOAuthScope::ChannelReadHype_Train) \
	op(FTwitchSDKOAuthScope::ClipsEdit) \
	op(FTwitchSDKOAuthScope::UserReadSubscriptions) \
	op(FTwitchSDKOAuthScope::BitsRead) 

enum class FTwitchSDKOAuthScope : uint8;
template<> struct TIsUEnumClass<FTwitchSDKOAuthScope> { enum { Value = true }; };
template<> TWITCHSDK_API UEnum* StaticEnum<FTwitchSDKOAuthScope>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
