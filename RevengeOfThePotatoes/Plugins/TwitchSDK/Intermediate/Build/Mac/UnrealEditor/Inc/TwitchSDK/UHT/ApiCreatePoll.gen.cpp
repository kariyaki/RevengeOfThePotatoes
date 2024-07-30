// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiCreatePoll.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiCreatePoll() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCreatePoll();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCreatePoll_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPollInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiCreatePoll_Parms
		{
			FTwitchSDKPollInfo Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCreatePoll_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKPollInfo, METADATA_PARAMS(nullptr, 0) }; // 1030971679
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCreatePoll_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiCreatePoll.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiCreatePoll__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiCreatePoll_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiCreatePoll_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiCreatePoll, FTwitchSDKPollInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiCreatePoll_Parms
	{
		FTwitchSDKPollInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiCreatePoll_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiCreatePoll.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiCreatePoll::execCreatePoll)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_title);
		P_GET_TARRAY(FString,Z_Param_choices);
		P_GET_PROPERTY(FInt64Property,Z_Param_duration);
		P_GET_UBOOL(Z_Param_bitsVotingEnabled);
		P_GET_PROPERTY(FIntProperty,Z_Param_bitsPerVote);
		P_GET_UBOOL(Z_Param_channelPointsVotingEnabled);
		P_GET_PROPERTY(FIntProperty,Z_Param_channelPointsPerVote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiCreatePoll**)Z_Param__Result=UApiCreatePoll::CreatePoll(Z_Param_title,Z_Param_choices,Z_Param_duration,Z_Param_bitsVotingEnabled,Z_Param_bitsPerVote,Z_Param_channelPointsVotingEnabled,Z_Param_channelPointsPerVote);
		P_NATIVE_END;
	}
	void UApiCreatePoll::StaticRegisterNativesUApiCreatePoll()
	{
		UClass* Class = UApiCreatePoll::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePoll", &UApiCreatePoll::execCreatePoll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics
	{
		struct ApiCreatePoll_eventCreatePoll_Parms
		{
			FString title;
			TArray<FString> choices;
			int64 duration;
			bool bitsVotingEnabled;
			int32 bitsPerVote;
			bool channelPointsVotingEnabled;
			int32 channelPointsPerVote;
			UApiCreatePoll* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_title;
		static const UECodeGen_Private::FStrPropertyParams NewProp_choices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_choices;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_duration;
		static void NewProp_bitsVotingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bitsVotingEnabled;
		static const UECodeGen_Private::FIntPropertyParams NewProp_bitsPerVote;
		static void NewProp_channelPointsVotingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_channelPointsVotingEnabled;
		static const UECodeGen_Private::FIntPropertyParams NewProp_channelPointsPerVote;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePoll_eventCreatePoll_Parms, title), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_choices_Inner = { "choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_choices = { "choices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePoll_eventCreatePoll_Parms, choices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePoll_eventCreatePoll_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_bitsVotingEnabled_SetBit(void* Obj)
	{
		((ApiCreatePoll_eventCreatePoll_Parms*)Obj)->bitsVotingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_bitsVotingEnabled = { "bitsVotingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ApiCreatePoll_eventCreatePoll_Parms), &Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_bitsVotingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_bitsPerVote = { "bitsPerVote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePoll_eventCreatePoll_Parms, bitsPerVote), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_channelPointsVotingEnabled_SetBit(void* Obj)
	{
		((ApiCreatePoll_eventCreatePoll_Parms*)Obj)->channelPointsVotingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_channelPointsVotingEnabled = { "channelPointsVotingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ApiCreatePoll_eventCreatePoll_Parms), &Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_channelPointsVotingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_channelPointsPerVote = { "channelPointsPerVote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePoll_eventCreatePoll_Parms, channelPointsPerVote), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreatePoll_eventCreatePoll_Parms, ReturnValue), Z_Construct_UClass_UApiCreatePoll_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_choices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_choices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_bitsVotingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_bitsPerVote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_channelPointsVotingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_channelPointsPerVote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Create a poll on the user's Twitch channel.\n     *\n     * Required scope: channel:manage:polls\n     *\n     * Creating a poll automatically subscribes to updates for this poll. Avoid unnecessary traffic by invoking UnsubscribeFromPoll at some point for every poll you create.\n     *\n     * @param title Question displayed for the poll.\n     * @param choices Array of the poll choices.\n     * @param duration Total duration for the poll (in seconds).\n     * @param bitsVotingEnabled Indicates if Bits can be used for voting.\n     * @param bitsPerVote Number of Bits required to vote once with Bits.\n     * @param channelPointsVotingEnabled Indicates if Channel Points can be used for voting.\n     * @param channelPointsPerVote Number of Channel Points required to vote once with Channel Points.\n     */" },
		{ "ModuleRelativePath", "Private/ApiCreatePoll.h" },
		{ "ToolTip", "Create a poll on the user's Twitch channel.\n\nRequired scope: channel:manage:polls\n\nCreating a poll automatically subscribes to updates for this poll. Avoid unnecessary traffic by invoking UnsubscribeFromPoll at some point for every poll you create.\n\n@param title Question displayed for the poll.\n@param choices Array of the poll choices.\n@param duration Total duration for the poll (in seconds).\n@param bitsVotingEnabled Indicates if Bits can be used for voting.\n@param bitsPerVote Number of Bits required to vote once with Bits.\n@param channelPointsVotingEnabled Indicates if Channel Points can be used for voting.\n@param channelPointsPerVote Number of Channel Points required to vote once with Channel Points." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiCreatePoll, nullptr, "CreatePoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::ApiCreatePoll_eventCreatePoll_Parms), Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiCreatePoll_CreatePoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiCreatePoll_CreatePoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiCreatePoll);
	UClass* Z_Construct_UClass_UApiCreatePoll_NoRegister()
	{
		return UApiCreatePoll::StaticClass();
	}
	struct Z_Construct_UClass_UApiCreatePoll_Statics
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
	UObject* (*const Z_Construct_UClass_UApiCreatePoll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiCreatePoll_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiCreatePoll_CreatePoll, "CreatePoll" }, // 3047373012
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreatePoll_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiCreatePoll.h" },
		{ "ModuleRelativePath", "Private/ApiCreatePoll.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCreatePoll.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCreatePoll, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Done_MetaData)) }; // 3401692756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCreatePoll.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCreatePoll, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreatePoll__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Error_MetaData)) }; // 3401692756
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiCreatePoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCreatePoll_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiCreatePoll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiCreatePoll>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiCreatePoll_Statics::ClassParams = {
		&UApiCreatePoll::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiCreatePoll_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreatePoll_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiCreatePoll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreatePoll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiCreatePoll()
	{
		if (!Z_Registration_Info_UClass_UApiCreatePoll.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiCreatePoll.OuterSingleton, Z_Construct_UClass_UApiCreatePoll_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiCreatePoll.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiCreatePoll>()
	{
		return UApiCreatePoll::StaticClass();
	}
	UApiCreatePoll::UApiCreatePoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiCreatePoll);
	UApiCreatePoll::~UApiCreatePoll() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePoll_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePoll_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiCreatePoll, UApiCreatePoll::StaticClass, TEXT("UApiCreatePoll"), &Z_Registration_Info_UClass_UApiCreatePoll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiCreatePoll), 1591796497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePoll_h_1037434677(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePoll_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreatePoll_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
