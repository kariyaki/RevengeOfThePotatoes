// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiEndPrediction.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiEndPrediction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiEndPrediction();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiEndPrediction_NoRegister();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiEndPrediction_Parms
		{
			FTwitchSDKPredictionInfo Result;
			FString Error;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiEndPrediction_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo, METADATA_PARAMS(nullptr, 0) }; // 829981025
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiEndPrediction_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiEndPrediction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiEndPrediction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiEndPrediction_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiEndPrediction_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiEndPrediction, FTwitchSDKPredictionInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiEndPrediction_Parms
	{
		FTwitchSDKPredictionInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiEndPrediction_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiEndPrediction.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiEndPrediction::execEndPrediction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_broadcasterId);
		P_GET_PROPERTY(FStrProperty,Z_Param_predictionId);
		P_GET_ENUM(FTwitchSDKPredictionStatus,Z_Param_status);
		P_GET_PROPERTY(FStrProperty,Z_Param_winningOutcomeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiEndPrediction**)Z_Param__Result=UApiEndPrediction::EndPrediction(Z_Param_broadcasterId,Z_Param_predictionId,FTwitchSDKPredictionStatus(Z_Param_status),Z_Param_winningOutcomeId);
		P_NATIVE_END;
	}
	void UApiEndPrediction::StaticRegisterNativesUApiEndPrediction()
	{
		UClass* Class = UApiEndPrediction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPrediction", &UApiEndPrediction::execEndPrediction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics
	{
		struct ApiEndPrediction_eventEndPrediction_Parms
		{
			FString broadcasterId;
			FString predictionId;
			FTwitchSDKPredictionStatus status;
			FString winningOutcomeId;
			UApiEndPrediction* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_broadcasterId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_predictionId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_status_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_winningOutcomeId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_broadcasterId = { "broadcasterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiEndPrediction_eventEndPrediction_Parms, broadcasterId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_predictionId = { "predictionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiEndPrediction_eventEndPrediction_Parms, predictionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiEndPrediction_eventEndPrediction_Parms, status), Z_Construct_UEnum_TwitchSDK_FTwitchSDKPredictionStatus, METADATA_PARAMS(nullptr, 0) }; // 833952321
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_winningOutcomeId = { "winningOutcomeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiEndPrediction_eventEndPrediction_Parms, winningOutcomeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiEndPrediction_eventEndPrediction_Parms, ReturnValue), Z_Construct_UClass_UApiEndPrediction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_broadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_predictionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_winningOutcomeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Lock, resolve, or cancel a Channel Points Prediction.\n     *\n     * Required scope: channel:manage:predictions\n     *\n     * @param broadcasterId The broadcaster running prediction events.\n     * @param predictionId ID of the Prediction.\n     * @param status The Prediction status to be set.\n     * @param winningOutcomeId ID of the winning outcome for the Prediction, if EndPredictionRequest::Status is being set to PredictionStatus::Resolved.\n     */" },
		{ "ModuleRelativePath", "Private/ApiEndPrediction.h" },
		{ "ToolTip", "Lock, resolve, or cancel a Channel Points Prediction.\n\nRequired scope: channel:manage:predictions\n\n@param broadcasterId The broadcaster running prediction events.\n@param predictionId ID of the Prediction.\n@param status The Prediction status to be set.\n@param winningOutcomeId ID of the winning outcome for the Prediction, if EndPredictionRequest::Status is being set to PredictionStatus::Resolved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiEndPrediction, nullptr, "EndPrediction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::ApiEndPrediction_eventEndPrediction_Parms), Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiEndPrediction_EndPrediction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiEndPrediction_EndPrediction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiEndPrediction);
	UClass* Z_Construct_UClass_UApiEndPrediction_NoRegister()
	{
		return UApiEndPrediction::StaticClass();
	}
	struct Z_Construct_UClass_UApiEndPrediction_Statics
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
	UObject* (*const Z_Construct_UClass_UApiEndPrediction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiEndPrediction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiEndPrediction_EndPrediction, "EndPrediction" }, // 1404434914
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiEndPrediction_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiEndPrediction.h" },
		{ "ModuleRelativePath", "Private/ApiEndPrediction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiEndPrediction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiEndPrediction, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Done_MetaData)) }; // 137600121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiEndPrediction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiEndPrediction, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPrediction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Error_MetaData)) }; // 137600121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiEndPrediction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiEndPrediction_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiEndPrediction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiEndPrediction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiEndPrediction_Statics::ClassParams = {
		&UApiEndPrediction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiEndPrediction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiEndPrediction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiEndPrediction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiEndPrediction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiEndPrediction()
	{
		if (!Z_Registration_Info_UClass_UApiEndPrediction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiEndPrediction.OuterSingleton, Z_Construct_UClass_UApiEndPrediction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiEndPrediction.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiEndPrediction>()
	{
		return UApiEndPrediction::StaticClass();
	}
	UApiEndPrediction::UApiEndPrediction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiEndPrediction);
	UApiEndPrediction::~UApiEndPrediction() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiEndPrediction, UApiEndPrediction::StaticClass, TEXT("UApiEndPrediction"), &Z_Registration_Info_UClass_UApiEndPrediction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiEndPrediction), 136202640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_2357088929(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPrediction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
