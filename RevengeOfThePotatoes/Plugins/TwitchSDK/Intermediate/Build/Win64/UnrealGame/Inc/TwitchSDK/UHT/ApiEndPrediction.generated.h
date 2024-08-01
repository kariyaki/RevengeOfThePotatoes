// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ApiEndPrediction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UApiEndPrediction;
enum class FTwitchSDKPredictionStatus : uint8;
struct FTwitchSDKPredictionInfo;
#ifdef TWITCHSDK_ApiEndPrediction_generated_h
#error "ApiEndPrediction.generated.h already included, missing '#pragma once' in ApiEndPrediction.h"
#endif
#define TWITCHSDK_ApiEndPrediction_generated_h

#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_9_DELEGATE \
TWITCHSDK_API void FAsyncDoneApiEndPrediction_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiEndPrediction, FTwitchSDKPredictionInfo Result, const FString& Error);


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_SPARSE_DATA
#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPrediction);


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPrediction);


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_ACCESSORS
#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUApiEndPrediction(); \
	friend struct Z_Construct_UClass_UApiEndPrediction_Statics; \
public: \
	DECLARE_CLASS(UApiEndPrediction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwitchSDK"), NO_API) \
	DECLARE_SERIALIZER(UApiEndPrediction)


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUApiEndPrediction(); \
	friend struct Z_Construct_UClass_UApiEndPrediction_Statics; \
public: \
	DECLARE_CLASS(UApiEndPrediction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwitchSDK"), NO_API) \
	DECLARE_SERIALIZER(UApiEndPrediction)


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApiEndPrediction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApiEndPrediction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApiEndPrediction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApiEndPrediction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApiEndPrediction(UApiEndPrediction&&); \
	NO_API UApiEndPrediction(const UApiEndPrediction&); \
public: \
	NO_API virtual ~UApiEndPrediction();


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApiEndPrediction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApiEndPrediction(UApiEndPrediction&&); \
	NO_API UApiEndPrediction(const UApiEndPrediction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApiEndPrediction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApiEndPrediction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApiEndPrediction) \
	NO_API virtual ~UApiEndPrediction();


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_11_PROLOG
#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_SPARSE_DATA \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_RPC_WRAPPERS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_ACCESSORS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_INCLASS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_SPARSE_DATA \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_ACCESSORS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_INCLASS_NO_PURE_DECLS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHSDK_API UClass* StaticClass<class UApiEndPrediction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
