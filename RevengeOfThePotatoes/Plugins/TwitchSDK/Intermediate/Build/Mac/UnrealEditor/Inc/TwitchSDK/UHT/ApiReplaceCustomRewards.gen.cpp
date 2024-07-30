// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiReplaceCustomRewards.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiReplaceCustomRewards() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiReplaceCustomRewards();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiReplaceCustomRewards_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiReplaceCustomRewards_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiReplaceCustomRewards_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiReplaceCustomRewards.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiReplaceCustomRewards__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiReplaceCustomRewards_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiReplaceCustomRewards_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiReplaceCustomRewards, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiReplaceCustomRewards_Parms
	{
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiReplaceCustomRewards_Parms Parms;
	Parms.Error=Error;
	AsyncDoneApiReplaceCustomRewards.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiReplaceCustomRewards::execReplaceCustomRewards)
	{
		P_GET_STRUCT(FTwitchSDKCustomRewardList,Z_Param_req);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiReplaceCustomRewards**)Z_Param__Result=UApiReplaceCustomRewards::ReplaceCustomRewards(Z_Param_req);
		P_NATIVE_END;
	}
	void UApiReplaceCustomRewards::StaticRegisterNativesUApiReplaceCustomRewards()
	{
		UClass* Class = UApiReplaceCustomRewards::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReplaceCustomRewards", &UApiReplaceCustomRewards::execReplaceCustomRewards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics
	{
		struct ApiReplaceCustomRewards_eventReplaceCustomRewards_Parms
		{
			FTwitchSDKCustomRewardList req;
			UApiReplaceCustomRewards* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_req;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::NewProp_req = { "req", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiReplaceCustomRewards_eventReplaceCustomRewards_Parms, req), Z_Construct_UScriptStruct_FTwitchSDKCustomRewardList, METADATA_PARAMS(nullptr, 0) }; // 1177183375
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiReplaceCustomRewards_eventReplaceCustomRewards_Parms, ReturnValue), Z_Construct_UClass_UApiReplaceCustomRewards_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::NewProp_req,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Updates the set of available custom channel points rewards on a channel.\n     *\n     * Required scope: channel:manage:redemptions\n     *\n     * If you enable any custom rewards, please clear them by invoking this function with an empty rewards list when the game terminates.\n     *\n     * Note that removing rewards that still have pending redemptions will set those redemptions to CustomRewardRedemptionState::Fulfilled.\n     *\n     */" },
		{ "ModuleRelativePath", "Private/ApiReplaceCustomRewards.h" },
		{ "ToolTip", "Updates the set of available custom channel points rewards on a channel.\n\nRequired scope: channel:manage:redemptions\n\nIf you enable any custom rewards, please clear them by invoking this function with an empty rewards list when the game terminates.\n\nNote that removing rewards that still have pending redemptions will set those redemptions to CustomRewardRedemptionState::Fulfilled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiReplaceCustomRewards, nullptr, "ReplaceCustomRewards", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::ApiReplaceCustomRewards_eventReplaceCustomRewards_Parms), Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiReplaceCustomRewards);
	UClass* Z_Construct_UClass_UApiReplaceCustomRewards_NoRegister()
	{
		return UApiReplaceCustomRewards::StaticClass();
	}
	struct Z_Construct_UClass_UApiReplaceCustomRewards_Statics
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
	UObject* (*const Z_Construct_UClass_UApiReplaceCustomRewards_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiReplaceCustomRewards_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiReplaceCustomRewards_ReplaceCustomRewards, "ReplaceCustomRewards" }, // 3976594703
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiReplaceCustomRewards_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiReplaceCustomRewards.h" },
		{ "ModuleRelativePath", "Private/ApiReplaceCustomRewards.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiReplaceCustomRewards.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiReplaceCustomRewards, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Done_MetaData)) }; // 2673937672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiReplaceCustomRewards.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiReplaceCustomRewards, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiReplaceCustomRewards__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Error_MetaData)) }; // 2673937672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiReplaceCustomRewards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiReplaceCustomRewards_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiReplaceCustomRewards_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiReplaceCustomRewards>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiReplaceCustomRewards_Statics::ClassParams = {
		&UApiReplaceCustomRewards::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiReplaceCustomRewards_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiReplaceCustomRewards_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiReplaceCustomRewards_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiReplaceCustomRewards_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiReplaceCustomRewards()
	{
		if (!Z_Registration_Info_UClass_UApiReplaceCustomRewards.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiReplaceCustomRewards.OuterSingleton, Z_Construct_UClass_UApiReplaceCustomRewards_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiReplaceCustomRewards.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiReplaceCustomRewards>()
	{
		return UApiReplaceCustomRewards::StaticClass();
	}
	UApiReplaceCustomRewards::UApiReplaceCustomRewards(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiReplaceCustomRewards);
	UApiReplaceCustomRewards::~UApiReplaceCustomRewards() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiReplaceCustomRewards_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiReplaceCustomRewards_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiReplaceCustomRewards, UApiReplaceCustomRewards::StaticClass, TEXT("UApiReplaceCustomRewards"), &Z_Registration_Info_UClass_UApiReplaceCustomRewards, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiReplaceCustomRewards), 4058837810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiReplaceCustomRewards_h_782560999(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiReplaceCustomRewards_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiReplaceCustomRewards_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
