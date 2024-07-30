// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiGetBitsLeaderboard.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiGetBitsLeaderboard() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetBitsLeaderboard();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetBitsLeaderboard_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiGetBitsLeaderboard_Parms
		{
			FTwitchSDKBitsLeaderboard Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetBitsLeaderboard_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKBitsLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1108289092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetBitsLeaderboard_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiGetBitsLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiGetBitsLeaderboard__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiGetBitsLeaderboard_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiGetBitsLeaderboard_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiGetBitsLeaderboard, FTwitchSDKBitsLeaderboard Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiGetBitsLeaderboard_Parms
	{
		FTwitchSDKBitsLeaderboard Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiGetBitsLeaderboard_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiGetBitsLeaderboard.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiGetBitsLeaderboard::execGetBitsLeaderboard)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_PROPERTY(FStrProperty,Z_Param_period);
		P_GET_PROPERTY(FStrProperty,Z_Param_startedAt);
		P_GET_PROPERTY(FStrProperty,Z_Param_userId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiGetBitsLeaderboard**)Z_Param__Result=UApiGetBitsLeaderboard::GetBitsLeaderboard(Z_Param_count,Z_Param_period,Z_Param_startedAt,Z_Param_userId);
		P_NATIVE_END;
	}
	void UApiGetBitsLeaderboard::StaticRegisterNativesUApiGetBitsLeaderboard()
	{
		UClass* Class = UApiGetBitsLeaderboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBitsLeaderboard", &UApiGetBitsLeaderboard::execGetBitsLeaderboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics
	{
		struct ApiGetBitsLeaderboard_eventGetBitsLeaderboard_Parms
		{
			int32 count;
			FString period;
			FString startedAt;
			FString userId;
			UApiGetBitsLeaderboard* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FStrPropertyParams NewProp_period;
		static const UECodeGen_Private::FStrPropertyParams NewProp_startedAt;
		static const UECodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetBitsLeaderboard_eventGetBitsLeaderboard_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_period = { "period", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetBitsLeaderboard_eventGetBitsLeaderboard_Parms, period), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_startedAt = { "startedAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetBitsLeaderboard_eventGetBitsLeaderboard_Parms, startedAt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetBitsLeaderboard_eventGetBitsLeaderboard_Parms, userId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetBitsLeaderboard_eventGetBitsLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UApiGetBitsLeaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_startedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_userId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Gets a ranked list of Bits leaderboard information for an authorized broadcaster.\n     *\n     * Required scope: bits:read\n     *\n     * @param count Number of results to be returned. Maximum: 100. Default: 10.\n     * @param period Time period over which data is aggregated (PST time zone). This parameter interacts with BitsLeaderboardRequest::StartedAt. Default: all.\n     * @param startedAt Timestamp for the period over which the returned data is aggregated. Must be in RFC 3339 format.\n     * @param userId ID of the user whose results are returned; i.e., the person who paid for the Bits.\n     */" },
		{ "ModuleRelativePath", "Private/ApiGetBitsLeaderboard.h" },
		{ "ToolTip", "Gets a ranked list of Bits leaderboard information for an authorized broadcaster.\n\nRequired scope: bits:read\n\n@param count Number of results to be returned. Maximum: 100. Default: 10.\n@param period Time period over which data is aggregated (PST time zone). This parameter interacts with BitsLeaderboardRequest::StartedAt. Default: all.\n@param startedAt Timestamp for the period over which the returned data is aggregated. Must be in RFC 3339 format.\n@param userId ID of the user whose results are returned; i.e., the person who paid for the Bits." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiGetBitsLeaderboard, nullptr, "GetBitsLeaderboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::ApiGetBitsLeaderboard_eventGetBitsLeaderboard_Parms), Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiGetBitsLeaderboard);
	UClass* Z_Construct_UClass_UApiGetBitsLeaderboard_NoRegister()
	{
		return UApiGetBitsLeaderboard::StaticClass();
	}
	struct Z_Construct_UClass_UApiGetBitsLeaderboard_Statics
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
	UObject* (*const Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiGetBitsLeaderboard_GetBitsLeaderboard, "GetBitsLeaderboard" }, // 2655925570
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiGetBitsLeaderboard.h" },
		{ "ModuleRelativePath", "Private/ApiGetBitsLeaderboard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetBitsLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetBitsLeaderboard, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Done_MetaData)) }; // 845727428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetBitsLeaderboard.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetBitsLeaderboard, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetBitsLeaderboard__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Error_MetaData)) }; // 845727428
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiGetBitsLeaderboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::ClassParams = {
		&UApiGetBitsLeaderboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiGetBitsLeaderboard()
	{
		if (!Z_Registration_Info_UClass_UApiGetBitsLeaderboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiGetBitsLeaderboard.OuterSingleton, Z_Construct_UClass_UApiGetBitsLeaderboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiGetBitsLeaderboard.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiGetBitsLeaderboard>()
	{
		return UApiGetBitsLeaderboard::StaticClass();
	}
	UApiGetBitsLeaderboard::UApiGetBitsLeaderboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiGetBitsLeaderboard);
	UApiGetBitsLeaderboard::~UApiGetBitsLeaderboard() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetBitsLeaderboard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetBitsLeaderboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiGetBitsLeaderboard, UApiGetBitsLeaderboard::StaticClass, TEXT("UApiGetBitsLeaderboard"), &Z_Registration_Info_UClass_UApiGetBitsLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiGetBitsLeaderboard), 2379585850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetBitsLeaderboard_h_3362059088(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetBitsLeaderboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetBitsLeaderboard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
