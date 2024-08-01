// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiResolveCustomReward.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiResolveCustomReward() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiResolveCustomReward();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiResolveCustomReward_NoRegister();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiResolveCustomReward_Parms
		{
			FString Error;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiResolveCustomReward_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiResolveCustomReward.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiResolveCustomReward__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiResolveCustomReward_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiResolveCustomReward_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiResolveCustomReward, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiResolveCustomReward_Parms
	{
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiResolveCustomReward_Parms Parms;
	Parms.Error=Error;
	AsyncDoneApiResolveCustomReward.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiResolveCustomReward::execResolveCustomReward)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_redemptionId);
		P_GET_PROPERTY(FStrProperty,Z_Param_customRewardId);
		P_GET_PROPERTY(FStrProperty,Z_Param_broadcasterId);
		P_GET_ENUM(FTwitchSDKCustomRewardRedemptionState,Z_Param_resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiResolveCustomReward**)Z_Param__Result=UApiResolveCustomReward::ResolveCustomReward(Z_Param_redemptionId,Z_Param_customRewardId,Z_Param_broadcasterId,FTwitchSDKCustomRewardRedemptionState(Z_Param_resolution));
		P_NATIVE_END;
	}
	void UApiResolveCustomReward::StaticRegisterNativesUApiResolveCustomReward()
	{
		UClass* Class = UApiResolveCustomReward::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResolveCustomReward", &UApiResolveCustomReward::execResolveCustomReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics
	{
		struct ApiResolveCustomReward_eventResolveCustomReward_Parms
		{
			FString redemptionId;
			FString customRewardId;
			FString broadcasterId;
			FTwitchSDKCustomRewardRedemptionState resolution;
			UApiResolveCustomReward* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_redemptionId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_customRewardId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_broadcasterId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_resolution_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_resolution;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_redemptionId = { "redemptionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiResolveCustomReward_eventResolveCustomReward_Parms, redemptionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_customRewardId = { "customRewardId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiResolveCustomReward_eventResolveCustomReward_Parms, customRewardId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_broadcasterId = { "broadcasterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiResolveCustomReward_eventResolveCustomReward_Parms, broadcasterId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiResolveCustomReward_eventResolveCustomReward_Parms, resolution), Z_Construct_UEnum_TwitchSDK_FTwitchSDKCustomRewardRedemptionState, METADATA_PARAMS(nullptr, 0) }; // 2819677623
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiResolveCustomReward_eventResolveCustomReward_Parms, ReturnValue), Z_Construct_UClass_UApiResolveCustomReward_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_redemptionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_customRewardId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_broadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_resolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Updates the status of Custom Reward Redemption objects on a channel that are in the CustomRewardRedemptionState::Unfulfilled status.\n     *\n     * Required scope: channel:manage:redemptions\n     *\n     * @param redemptionId ID of the Custom Reward Redemption to update.\n     * @param customRewardId ID of the Custom Reward the redemptions to be updated are for.\n     * @param resolution The new status to set redemptions to.\n     */" },
		{ "ModuleRelativePath", "Private/ApiResolveCustomReward.h" },
		{ "ToolTip", "Updates the status of Custom Reward Redemption objects on a channel that are in the CustomRewardRedemptionState::Unfulfilled status.\n\nRequired scope: channel:manage:redemptions\n\n@param redemptionId ID of the Custom Reward Redemption to update.\n@param customRewardId ID of the Custom Reward the redemptions to be updated are for.\n@param resolution The new status to set redemptions to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiResolveCustomReward, nullptr, "ResolveCustomReward", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::ApiResolveCustomReward_eventResolveCustomReward_Parms), Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiResolveCustomReward);
	UClass* Z_Construct_UClass_UApiResolveCustomReward_NoRegister()
	{
		return UApiResolveCustomReward::StaticClass();
	}
	struct Z_Construct_UClass_UApiResolveCustomReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Done_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Done;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApiResolveCustomReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiResolveCustomReward_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiResolveCustomReward_ResolveCustomReward, "ResolveCustomReward" }, // 1731129421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiResolveCustomReward_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiResolveCustomReward.h" },
		{ "ModuleRelativePath", "Private/ApiResolveCustomReward.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiResolveCustomReward.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiResolveCustomReward, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Done_MetaData)) }; // 4060134159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiResolveCustomReward.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiResolveCustomReward, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiResolveCustomReward__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Error_MetaData)) }; // 4060134159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiResolveCustomReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiResolveCustomReward_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiResolveCustomReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiResolveCustomReward>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiResolveCustomReward_Statics::ClassParams = {
		&UApiResolveCustomReward::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiResolveCustomReward_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiResolveCustomReward_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiResolveCustomReward_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiResolveCustomReward_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiResolveCustomReward()
	{
		if (!Z_Registration_Info_UClass_UApiResolveCustomReward.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiResolveCustomReward.OuterSingleton, Z_Construct_UClass_UApiResolveCustomReward_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiResolveCustomReward.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiResolveCustomReward>()
	{
		return UApiResolveCustomReward::StaticClass();
	}
	UApiResolveCustomReward::UApiResolveCustomReward(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiResolveCustomReward);
	UApiResolveCustomReward::~UApiResolveCustomReward() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiResolveCustomReward_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiResolveCustomReward_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiResolveCustomReward, UApiResolveCustomReward::StaticClass, TEXT("UApiResolveCustomReward"), &Z_Registration_Info_UClass_UApiResolveCustomReward, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiResolveCustomReward), 2095624075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiResolveCustomReward_h_1783694046(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiResolveCustomReward_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiResolveCustomReward_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
