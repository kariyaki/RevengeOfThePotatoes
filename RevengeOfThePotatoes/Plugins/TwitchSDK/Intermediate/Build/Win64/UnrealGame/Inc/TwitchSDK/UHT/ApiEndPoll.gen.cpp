// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiEndPoll.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiEndPoll() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiEndPoll();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiEndPoll_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKPollInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiEndPoll_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiEndPoll_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKPollInfo, METADATA_PARAMS(nullptr, 0) }; // 1030971679
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiEndPoll_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiEndPoll.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiEndPoll__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiEndPoll_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiEndPoll_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiEndPoll, FTwitchSDKPollInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiEndPoll_Parms
	{
		FTwitchSDKPollInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiEndPoll_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiEndPoll.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiEndPoll::execEndPoll)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_broadcasterId);
		P_GET_PROPERTY(FStrProperty,Z_Param_pollId);
		P_GET_UBOOL(Z_Param_showResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiEndPoll**)Z_Param__Result=UApiEndPoll::EndPoll(Z_Param_broadcasterId,Z_Param_pollId,Z_Param_showResults);
		P_NATIVE_END;
	}
	void UApiEndPoll::StaticRegisterNativesUApiEndPoll()
	{
		UClass* Class = UApiEndPoll::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPoll", &UApiEndPoll::execEndPoll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics
	{
		struct ApiEndPoll_eventEndPoll_Parms
		{
			FString broadcasterId;
			FString pollId;
			bool showResults;
			UApiEndPoll* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_broadcasterId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_pollId;
		static void NewProp_showResults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showResults;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_broadcasterId = { "broadcasterId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiEndPoll_eventEndPoll_Parms, broadcasterId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_pollId = { "pollId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiEndPoll_eventEndPoll_Parms, pollId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_showResults_SetBit(void* Obj)
	{
		((ApiEndPoll_eventEndPoll_Parms*)Obj)->showResults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_showResults = { "showResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ApiEndPoll_eventEndPoll_Parms), &Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_showResults_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiEndPoll_eventEndPoll_Parms, ReturnValue), Z_Construct_UClass_UApiEndPoll_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_broadcasterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_pollId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_showResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * End a poll prematurely.\n     *\n     * x\n     *\n     * @param broadcasterId ID of the broadcaster.\n     * @param pollId ID of the poll.\n     * @param showResults If true, sets the poll status to PollStatus::Terminated so that results are shown. If false, sets the poll status to PollStatus::Archived so that the poll is canceled immediately and no results are shown.\n     */" },
		{ "ModuleRelativePath", "Private/ApiEndPoll.h" },
		{ "ToolTip", "End a poll prematurely.\n\nx\n\n@param broadcasterId ID of the broadcaster.\n@param pollId ID of the poll.\n@param showResults If true, sets the poll status to PollStatus::Terminated so that results are shown. If false, sets the poll status to PollStatus::Archived so that the poll is canceled immediately and no results are shown." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiEndPoll, nullptr, "EndPoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::ApiEndPoll_eventEndPoll_Parms), Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiEndPoll_EndPoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiEndPoll_EndPoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiEndPoll);
	UClass* Z_Construct_UClass_UApiEndPoll_NoRegister()
	{
		return UApiEndPoll::StaticClass();
	}
	struct Z_Construct_UClass_UApiEndPoll_Statics
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
	UObject* (*const Z_Construct_UClass_UApiEndPoll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiEndPoll_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiEndPoll_EndPoll, "EndPoll" }, // 4012345987
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiEndPoll_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiEndPoll.h" },
		{ "ModuleRelativePath", "Private/ApiEndPoll.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiEndPoll.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiEndPoll, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Done_MetaData)) }; // 3704073904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiEndPoll.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiEndPoll, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiEndPoll__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Error_MetaData)) }; // 3704073904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiEndPoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiEndPoll_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiEndPoll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiEndPoll>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiEndPoll_Statics::ClassParams = {
		&UApiEndPoll::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiEndPoll_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiEndPoll_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiEndPoll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiEndPoll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiEndPoll()
	{
		if (!Z_Registration_Info_UClass_UApiEndPoll.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiEndPoll.OuterSingleton, Z_Construct_UClass_UApiEndPoll_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiEndPoll.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiEndPoll>()
	{
		return UApiEndPoll::StaticClass();
	}
	UApiEndPoll::UApiEndPoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiEndPoll);
	UApiEndPoll::~UApiEndPoll() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPoll_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPoll_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiEndPoll, UApiEndPoll::StaticClass, TEXT("UApiEndPoll"), &Z_Registration_Info_UClass_UApiEndPoll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiEndPoll), 2615039136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPoll_h_3796011194(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPoll_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiEndPoll_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
