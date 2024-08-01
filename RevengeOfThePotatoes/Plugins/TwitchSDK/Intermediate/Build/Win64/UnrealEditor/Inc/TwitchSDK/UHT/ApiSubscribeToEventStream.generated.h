// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ApiSubscribeToEventStream.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UApiSubscribeToEventStream;
enum class FTwitchSDKEventStreamKind : uint8;
struct FTwitchSDKEventStreamDesc;
#ifdef TWITCHSDK_ApiSubscribeToEventStream_generated_h
#error "ApiSubscribeToEventStream.generated.h already included, missing '#pragma once' in ApiSubscribeToEventStream.h"
#endif
#define TWITCHSDK_ApiSubscribeToEventStream_generated_h

#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_9_DELEGATE \
TWITCHSDK_API void FAsyncDoneApiSubscribeToEventStream_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiSubscribeToEventStream, FTwitchSDKEventStreamDesc Result, const FString& Error);


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_SPARSE_DATA
#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSubscribeToEventStream);


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSubscribeToEventStream);


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_ACCESSORS
#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUApiSubscribeToEventStream(); \
	friend struct Z_Construct_UClass_UApiSubscribeToEventStream_Statics; \
public: \
	DECLARE_CLASS(UApiSubscribeToEventStream, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwitchSDK"), NO_API) \
	DECLARE_SERIALIZER(UApiSubscribeToEventStream)


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUApiSubscribeToEventStream(); \
	friend struct Z_Construct_UClass_UApiSubscribeToEventStream_Statics; \
public: \
	DECLARE_CLASS(UApiSubscribeToEventStream, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwitchSDK"), NO_API) \
	DECLARE_SERIALIZER(UApiSubscribeToEventStream)


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApiSubscribeToEventStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApiSubscribeToEventStream) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApiSubscribeToEventStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApiSubscribeToEventStream); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApiSubscribeToEventStream(UApiSubscribeToEventStream&&); \
	NO_API UApiSubscribeToEventStream(const UApiSubscribeToEventStream&); \
public: \
	NO_API virtual ~UApiSubscribeToEventStream();


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApiSubscribeToEventStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApiSubscribeToEventStream(UApiSubscribeToEventStream&&); \
	NO_API UApiSubscribeToEventStream(const UApiSubscribeToEventStream&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApiSubscribeToEventStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApiSubscribeToEventStream); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApiSubscribeToEventStream) \
	NO_API virtual ~UApiSubscribeToEventStream();


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_11_PROLOG
#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_SPARSE_DATA \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_RPC_WRAPPERS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_ACCESSORS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_INCLASS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_SPARSE_DATA \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_ACCESSORS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_INCLASS_NO_PURE_DECLS \
	FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHSDK_API UClass* StaticClass<class UApiSubscribeToEventStream>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
