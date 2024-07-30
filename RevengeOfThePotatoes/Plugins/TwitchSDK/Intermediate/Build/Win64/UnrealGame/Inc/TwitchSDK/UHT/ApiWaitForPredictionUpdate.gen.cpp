// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiWaitForPredictionUpdate.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiWaitForPredictionUpdate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForPredictionUpdate();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForPredictionUpdate_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiWaitForPredictionUpdate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForPredictionUpdate_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKPredictionInfo, METADATA_PARAMS(nullptr, 0) }; // 829981025
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForPredictionUpdate_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForPredictionUpdate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiWaitForPredictionUpdate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiWaitForPredictionUpdate_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiWaitForPredictionUpdate_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiWaitForPredictionUpdate, FTwitchSDKPredictionInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiWaitForPredictionUpdate_Parms
	{
		FTwitchSDKPredictionInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiWaitForPredictionUpdate_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiWaitForPredictionUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiWaitForPredictionUpdate::execWaitForPredictionUpdate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_prediction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiWaitForPredictionUpdate**)Z_Param__Result=UApiWaitForPredictionUpdate::WaitForPredictionUpdate(Z_Param_prediction);
		P_NATIVE_END;
	}
	void UApiWaitForPredictionUpdate::StaticRegisterNativesUApiWaitForPredictionUpdate()
	{
		UClass* Class = UApiWaitForPredictionUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForPredictionUpdate", &UApiWaitForPredictionUpdate::execWaitForPredictionUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics
	{
		struct ApiWaitForPredictionUpdate_eventWaitForPredictionUpdate_Parms
		{
			FString prediction;
			UApiWaitForPredictionUpdate* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_prediction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::NewProp_prediction = { "prediction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForPredictionUpdate_eventWaitForPredictionUpdate_Parms, prediction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForPredictionUpdate_eventWaitForPredictionUpdate_Parms, ReturnValue), Z_Construct_UClass_UApiWaitForPredictionUpdate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::NewProp_prediction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Wait for updates to a specified prediction. Updates occur when users submit votes, and finally, when the prediction ends.\n     *\n     * Avoid calling this function on predictions after they have ended, as they will no longer recieve updates at that point.\n     *\n     * @param prediction Id of the prediction to wait for.\n     */" },
		{ "ModuleRelativePath", "Private/ApiWaitForPredictionUpdate.h" },
		{ "ToolTip", "Wait for updates to a specified prediction. Updates occur when users submit votes, and finally, when the prediction ends.\n\nAvoid calling this function on predictions after they have ended, as they will no longer recieve updates at that point.\n\n@param prediction Id of the prediction to wait for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiWaitForPredictionUpdate, nullptr, "WaitForPredictionUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::ApiWaitForPredictionUpdate_eventWaitForPredictionUpdate_Parms), Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiWaitForPredictionUpdate);
	UClass* Z_Construct_UClass_UApiWaitForPredictionUpdate_NoRegister()
	{
		return UApiWaitForPredictionUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics
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
	UObject* (*const Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiWaitForPredictionUpdate_WaitForPredictionUpdate, "WaitForPredictionUpdate" }, // 1464582149
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiWaitForPredictionUpdate.h" },
		{ "ModuleRelativePath", "Private/ApiWaitForPredictionUpdate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForPredictionUpdate.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForPredictionUpdate, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Done_MetaData)) }; // 1201586485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForPredictionUpdate.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForPredictionUpdate, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForPredictionUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Error_MetaData)) }; // 1201586485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiWaitForPredictionUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::ClassParams = {
		&UApiWaitForPredictionUpdate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiWaitForPredictionUpdate()
	{
		if (!Z_Registration_Info_UClass_UApiWaitForPredictionUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiWaitForPredictionUpdate.OuterSingleton, Z_Construct_UClass_UApiWaitForPredictionUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiWaitForPredictionUpdate.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiWaitForPredictionUpdate>()
	{
		return UApiWaitForPredictionUpdate::StaticClass();
	}
	UApiWaitForPredictionUpdate::UApiWaitForPredictionUpdate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiWaitForPredictionUpdate);
	UApiWaitForPredictionUpdate::~UApiWaitForPredictionUpdate() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForPredictionUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForPredictionUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiWaitForPredictionUpdate, UApiWaitForPredictionUpdate::StaticClass, TEXT("UApiWaitForPredictionUpdate"), &Z_Registration_Info_UClass_UApiWaitForPredictionUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiWaitForPredictionUpdate), 2034256373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForPredictionUpdate_h_3199290140(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForPredictionUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForPredictionUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
