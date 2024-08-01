// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiQueryStreams.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiQueryStreams() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiQueryStreams();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiQueryStreams_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiQueryStreams_Parms
		{
			FTwitchSDKStreamQueryResult Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiQueryStreams_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKStreamQueryResult, METADATA_PARAMS(nullptr, 0) }; // 846233278
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiQueryStreams_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiQueryStreams.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiQueryStreams__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiQueryStreams_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiQueryStreams_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiQueryStreams, FTwitchSDKStreamQueryResult Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiQueryStreams_Parms
	{
		FTwitchSDKStreamQueryResult Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiQueryStreams_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiQueryStreams.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiQueryStreams::execQueryStreams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_after);
		P_GET_PROPERTY(FIntProperty,Z_Param_first);
		P_GET_TARRAY(FString,Z_Param_gameIds);
		P_GET_TARRAY(FString,Z_Param_languages);
		P_GET_TARRAY(FString,Z_Param_userIds);
		P_GET_TARRAY(FString,Z_Param_userLogins);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiQueryStreams**)Z_Param__Result=UApiQueryStreams::QueryStreams(Z_Param_after,Z_Param_first,Z_Param_gameIds,Z_Param_languages,Z_Param_userIds,Z_Param_userLogins);
		P_NATIVE_END;
	}
	void UApiQueryStreams::StaticRegisterNativesUApiQueryStreams()
	{
		UClass* Class = UApiQueryStreams::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryStreams", &UApiQueryStreams::execQueryStreams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics
	{
		struct ApiQueryStreams_eventQueryStreams_Parms
		{
			FString after;
			int32 first;
			TArray<FString> gameIds;
			TArray<FString> languages;
			TArray<FString> userIds;
			TArray<FString> userLogins;
			UApiQueryStreams* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_after;
		static const UECodeGen_Private::FIntPropertyParams NewProp_first;
		static const UECodeGen_Private::FStrPropertyParams NewProp_gameIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_gameIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_languages_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_languages;
		static const UECodeGen_Private::FStrPropertyParams NewProp_userIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_userIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_userLogins_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_userLogins;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_after = { "after", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiQueryStreams_eventQueryStreams_Parms, after), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_first = { "first", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiQueryStreams_eventQueryStreams_Parms, first), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_gameIds_Inner = { "gameIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_gameIds = { "gameIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiQueryStreams_eventQueryStreams_Parms, gameIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_languages_Inner = { "languages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_languages = { "languages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiQueryStreams_eventQueryStreams_Parms, languages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_userIds_Inner = { "userIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_userIds = { "userIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiQueryStreams_eventQueryStreams_Parms, userIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_userLogins_Inner = { "userLogins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_userLogins = { "userLogins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiQueryStreams_eventQueryStreams_Parms, userLogins), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiQueryStreams_eventQueryStreams_Parms, ReturnValue), Z_Construct_UClass_UApiQueryStreams_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_after,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_first,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_gameIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_gameIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_languages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_languages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_userIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_userIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_userLogins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_userLogins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Gets information about active streams. Streams are returned sorted by number of current viewers, in descending order.\n     *\n     * Submitting an empty query is valid and fetches the top streams currently on Twitch. Across multiple pages of results, there may be duplicate or missing streams, as viewers join and leave streams.\n     *\n     * @param after Cursor for forward pagination: tells the server where to start fetching the next set of results, in a multi-page response. The cursor value specified here is from the PaginationCursor response field of a prior query.\n     * @param first Maximum number of objects to return. Maximum: 100. Default: 20.\n     * @param gameIds Returns streams broadcasting a specified game ID. You can specify up to 100 IDs.\n     * @param languages Stream language. You can specify up to 100 languages. A language value must be either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d.\n     * @param userIds Returns streams broadcast by one or more specified user IDs. You can specify up to 100 IDs.\n     * @param userLogins Returns streams broadcast by one or more specified user login names. You can specify up to 100 names.\n     */" },
		{ "ModuleRelativePath", "Private/ApiQueryStreams.h" },
		{ "ToolTip", "Gets information about active streams. Streams are returned sorted by number of current viewers, in descending order.\n\nSubmitting an empty query is valid and fetches the top streams currently on Twitch. Across multiple pages of results, there may be duplicate or missing streams, as viewers join and leave streams.\n\n@param after Cursor for forward pagination: tells the server where to start fetching the next set of results, in a multi-page response. The cursor value specified here is from the PaginationCursor response field of a prior query.\n@param first Maximum number of objects to return. Maximum: 100. Default: 20.\n@param gameIds Returns streams broadcasting a specified game ID. You can specify up to 100 IDs.\n@param languages Stream language. You can specify up to 100 languages. A language value must be either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d.\n@param userIds Returns streams broadcast by one or more specified user IDs. You can specify up to 100 IDs.\n@param userLogins Returns streams broadcast by one or more specified user login names. You can specify up to 100 names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiQueryStreams, nullptr, "QueryStreams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::ApiQueryStreams_eventQueryStreams_Parms), Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiQueryStreams_QueryStreams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiQueryStreams_QueryStreams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiQueryStreams);
	UClass* Z_Construct_UClass_UApiQueryStreams_NoRegister()
	{
		return UApiQueryStreams::StaticClass();
	}
	struct Z_Construct_UClass_UApiQueryStreams_Statics
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
	UObject* (*const Z_Construct_UClass_UApiQueryStreams_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiQueryStreams_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiQueryStreams_QueryStreams, "QueryStreams" }, // 1174091572
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiQueryStreams_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiQueryStreams.h" },
		{ "ModuleRelativePath", "Private/ApiQueryStreams.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiQueryStreams.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiQueryStreams, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Done_MetaData)) }; // 60213677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiQueryStreams.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiQueryStreams, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiQueryStreams__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Error_MetaData)) }; // 60213677
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiQueryStreams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiQueryStreams_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiQueryStreams_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiQueryStreams>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiQueryStreams_Statics::ClassParams = {
		&UApiQueryStreams::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiQueryStreams_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiQueryStreams_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiQueryStreams_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiQueryStreams_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiQueryStreams()
	{
		if (!Z_Registration_Info_UClass_UApiQueryStreams.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiQueryStreams.OuterSingleton, Z_Construct_UClass_UApiQueryStreams_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiQueryStreams.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiQueryStreams>()
	{
		return UApiQueryStreams::StaticClass();
	}
	UApiQueryStreams::UApiQueryStreams(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiQueryStreams);
	UApiQueryStreams::~UApiQueryStreams() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiQueryStreams_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiQueryStreams_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiQueryStreams, UApiQueryStreams::StaticClass, TEXT("UApiQueryStreams"), &Z_Registration_Info_UClass_UApiQueryStreams, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiQueryStreams), 2285748208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiQueryStreams_h_3680886770(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiQueryStreams_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiQueryStreams_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
