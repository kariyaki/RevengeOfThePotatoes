// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiCreatePrediction.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiCreatePrediction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCreatePrediction();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCreatePrediction_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiCreatePrediction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCreatePrediction_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo, METADATA_PARAMS(nullptr, 0) }; // 829981025
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCreatePrediction_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiCreatePrediction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiCreatePrediction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiCreatePrediction_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiCreatePrediction_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiCreatePrediction, FTwitchSDKPredictionInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiCreatePrediction_Parms
	{
		FTwitchSDKPredictionInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiCreatePrediction_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiCreatePrediction.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiCreatePrediction::execCreatePrediction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_title);
		P_GET_TARRAY(FString,Z_Param_outcomes);
		P_GET_PROPERTY(FIntProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiCreatePrediction**)Z_Param__Result=UApiCreatePrediction::CreatePrediction(Z_Param_title,Z_Param_outcomes,Z_Param_duration);
		P_NATIVE_END;
	}
	void UApiCreatePrediction::StaticRegisterNativesUApiCreatePrediction()
	{
		UClass* Class = UApiCreatePrediction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePrediction", &UApiCreatePrediction::execCreatePrediction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics
	{
		struct ApiCreatePrediction_eventCreatePrediction_Parms
		{
			FString title;
			TArray<FString> outcomes;
			int32 duration;
			UApiCreatePrediction* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_title;
		static const UECodeGen_Private::FStrPropertyParams NewProp_outcomes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outcomes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_duration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePrediction_eventCreatePrediction_Parms, title), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_outcomes_Inner = { "outcomes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_outcomes = { "outcomes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePrediction_eventCreatePrediction_Parms, outcomes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePrediction_eventCreatePrediction_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePrediction_eventCreatePrediction_Parms, ReturnValue), Z_Construct_UClass_UApiCreatePrediction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_outcomes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_outcomes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Create a Channel Points Prediction on the user's Twitch channel.\n     *\n     * Required scope: channel:manage:predictions\n     *\n     * Creating a prediction automatically subscribes to updates for this prediction. Avoid unnecessary traffic by invoking UnsubscribeFromPrediction at some point for every poll you create.\n     *\n     * @param title Title for the Prediction.\n     * @param outcomes Array of outcome titles for the Prediction. Array size must be 2. The first outcome object is the \xe2\x80\x9c""blue\xe2\x80\x9d outcome and the second outcome object is the \xe2\x80\x9cpink\xe2\x80\x9d outcome when viewing the Prediction on Twitch.\n     * @param duration Total duration for the Prediction (in seconds). Minimum: 1. Maximum: 1800.\n     */" },
		{ "ModuleRelativePath", "Private/ApiCreatePrediction.h" },
		{ "ToolTip", "Create a Channel Points Prediction on the user's Twitch channel.\n\nRequired scope: channel:manage:predictions\n\nCreating a prediction automatically subscribes to updates for this prediction. Avoid unnecessary traffic by invoking UnsubscribeFromPrediction at some point for every poll you create.\n\n@param title Title for the Prediction.\n@param outcomes Array of outcome titles for the Prediction. Array size must be 2. The first outcome object is the \xe2\x80\x9c""blue\xe2\x80\x9d outcome and the second outcome object is the \xe2\x80\x9cpink\xe2\x80\x9d outcome when viewing the Prediction on Twitch.\n@param duration Total duration for the Prediction (in seconds). Minimum: 1. Maximum: 1800." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiCreatePrediction, nullptr, "CreatePrediction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::ApiCreatePrediction_eventCreatePrediction_Parms), Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiCreatePrediction);
	UClass* Z_Construct_UClass_UApiCreatePrediction_NoRegister()
	{
		return UApiCreatePrediction::StaticClass();
	}
	struct Z_Construct_UClass_UApiCreatePrediction_Statics
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
	UObject* (*const Z_Construct_UClass_UApiCreatePrediction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiCreatePrediction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiCreatePrediction_CreatePrediction, "CreatePrediction" }, // 1312939804
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreatePrediction_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiCreatePrediction.h" },
		{ "ModuleRelativePath", "Private/ApiCreatePrediction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCreatePrediction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCreatePrediction, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Done_MetaData)) }; // 2523183927
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCreatePrediction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCreatePrediction, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePrediction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Error_MetaData)) }; // 2523183927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiCreatePrediction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCreatePrediction_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiCreatePrediction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiCreatePrediction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiCreatePrediction_Statics::ClassParams = {
		&UApiCreatePrediction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiCreatePrediction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreatePrediction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiCreatePrediction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreatePrediction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiCreatePrediction()
	{
		if (!Z_Registration_Info_UClass_UApiCreatePrediction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiCreatePrediction.OuterSingleton, Z_Construct_UClass_UApiCreatePrediction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiCreatePrediction.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiCreatePrediction>()
	{
		return UApiCreatePrediction::StaticClass();
	}
	UApiCreatePrediction::UApiCreatePrediction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiCreatePrediction);
	UApiCreatePrediction::~UApiCreatePrediction() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePrediction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePrediction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiCreatePrediction, UApiCreatePrediction::StaticClass, TEXT("UApiCreatePrediction"), &Z_Registration_Info_UClass_UApiCreatePrediction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiCreatePrediction), 729140522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePrediction_h_257978874(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePrediction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePrediction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
