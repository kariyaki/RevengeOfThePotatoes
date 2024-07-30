// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiCreateStreamMarker.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiCreateStreamMarker() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCreateStreamMarker();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCreateStreamMarker_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiCreateStreamMarker_Parms
		{
			FTwitchSDKStreamMarkerInfo Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCreateStreamMarker_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKStreamMarkerInfo, METADATA_PARAMS(nullptr, 0) }; // 2767334547
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCreateStreamMarker_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiCreateStreamMarker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiCreateStreamMarker__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiCreateStreamMarker_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiCreateStreamMarker_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiCreateStreamMarker, FTwitchSDKStreamMarkerInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiCreateStreamMarker_Parms
	{
		FTwitchSDKStreamMarkerInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiCreateStreamMarker_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiCreateStreamMarker.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiCreateStreamMarker::execCreateStreamMarker)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_description);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiCreateStreamMarker**)Z_Param__Result=UApiCreateStreamMarker::CreateStreamMarker(Z_Param_description);
		P_NATIVE_END;
	}
	void UApiCreateStreamMarker::StaticRegisterNativesUApiCreateStreamMarker()
	{
		UClass* Class = UApiCreateStreamMarker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateStreamMarker", &UApiCreateStreamMarker::execCreateStreamMarker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics
	{
		struct ApiCreateStreamMarker_eventCreateStreamMarker_Parms
		{
			FString description;
			UApiCreateStreamMarker* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreateStreamMarker_eventCreateStreamMarker_Parms, description), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreateStreamMarker_eventCreateStreamMarker_Parms, ReturnValue), Z_Construct_UClass_UApiCreateStreamMarker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Creates a marker in the stream of a user.\n     *\n     * Required scope: channel:manage:broadcast\n     *\n     * A marker is an arbitrary point in a stream that the broadcaster wants to mark; e.g., to easily return to later. The marker is created at the current timestamp in the live broadcast when the request is processed. Markers can be created by the stream owner or editors.\n     *\n     * Markers cannot be created in some cases (an error will occur):\n     * - If the specified user\xe2\x80\x99s stream is not live.\n     * - If VOD (past broadcast) storage is not enabled for the stream.\n     * - For premieres (live, first-viewing events that combine uploaded videos with live chat).\n     * - For reruns (subsequent (not live) streaming of any past broadcast, including past premieres).\n     *\n     *\n     * @param description Optional. Description of or comments on the marker. Max length is 140 characters.\n     */" },
		{ "ModuleRelativePath", "Private/ApiCreateStreamMarker.h" },
		{ "ToolTip", "Creates a marker in the stream of a user.\n\nRequired scope: channel:manage:broadcast\n\nA marker is an arbitrary point in a stream that the broadcaster wants to mark; e.g., to easily return to later. The marker is created at the current timestamp in the live broadcast when the request is processed. Markers can be created by the stream owner or editors.\n\nMarkers cannot be created in some cases (an error will occur):\n- If the specified user\xe2\x80\x99s stream is not live.\n- If VOD (past broadcast) storage is not enabled for the stream.\n- For premieres (live, first-viewing events that combine uploaded videos with live chat).\n- For reruns (subsequent (not live) streaming of any past broadcast, including past premieres).\n\n\n@param description Optional. Description of or comments on the marker. Max length is 140 characters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiCreateStreamMarker, nullptr, "CreateStreamMarker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::ApiCreateStreamMarker_eventCreateStreamMarker_Parms), Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiCreateStreamMarker);
	UClass* Z_Construct_UClass_UApiCreateStreamMarker_NoRegister()
	{
		return UApiCreateStreamMarker::StaticClass();
	}
	struct Z_Construct_UClass_UApiCreateStreamMarker_Statics
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
	UObject* (*const Z_Construct_UClass_UApiCreateStreamMarker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiCreateStreamMarker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiCreateStreamMarker_CreateStreamMarker, "CreateStreamMarker" }, // 2836857358
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreateStreamMarker_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiCreateStreamMarker.h" },
		{ "ModuleRelativePath", "Private/ApiCreateStreamMarker.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCreateStreamMarker.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCreateStreamMarker, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Done_MetaData)) }; // 296483149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCreateStreamMarker.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCreateStreamMarker, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateStreamMarker__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Error_MetaData)) }; // 296483149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiCreateStreamMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCreateStreamMarker_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiCreateStreamMarker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiCreateStreamMarker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiCreateStreamMarker_Statics::ClassParams = {
		&UApiCreateStreamMarker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiCreateStreamMarker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreateStreamMarker_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiCreateStreamMarker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreateStreamMarker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiCreateStreamMarker()
	{
		if (!Z_Registration_Info_UClass_UApiCreateStreamMarker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiCreateStreamMarker.OuterSingleton, Z_Construct_UClass_UApiCreateStreamMarker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiCreateStreamMarker.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiCreateStreamMarker>()
	{
		return UApiCreateStreamMarker::StaticClass();
	}
	UApiCreateStreamMarker::UApiCreateStreamMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiCreateStreamMarker);
	UApiCreateStreamMarker::~UApiCreateStreamMarker() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateStreamMarker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateStreamMarker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiCreateStreamMarker, UApiCreateStreamMarker::StaticClass, TEXT("UApiCreateStreamMarker"), &Z_Registration_Info_UClass_UApiCreateStreamMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiCreateStreamMarker), 647699412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateStreamMarker_h_3243451131(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateStreamMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateStreamMarker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
