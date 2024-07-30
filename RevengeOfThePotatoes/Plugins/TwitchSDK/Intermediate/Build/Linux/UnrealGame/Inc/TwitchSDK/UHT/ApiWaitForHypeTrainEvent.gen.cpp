// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiWaitForHypeTrainEvent.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiWaitForHypeTrainEvent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForHypeTrainEvent();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForHypeTrainEvent_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiWaitForHypeTrainEvent_Parms
		{
			FTwitchSDKHypeTrainEvent Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForHypeTrainEvent_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKHypeTrainEvent, METADATA_PARAMS(nullptr, 0) }; // 1521674675
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForHypeTrainEvent_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForHypeTrainEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiWaitForHypeTrainEvent_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiWaitForHypeTrainEvent_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiWaitForHypeTrainEvent, FTwitchSDKHypeTrainEvent Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiWaitForHypeTrainEvent_Parms
	{
		FTwitchSDKHypeTrainEvent Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiWaitForHypeTrainEvent_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiWaitForHypeTrainEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiWaitForHypeTrainEvent::execWaitForHypeTrainEvent)
	{
		P_GET_STRUCT(FTwitchSDKEventStreamDesc,Z_Param_desc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiWaitForHypeTrainEvent**)Z_Param__Result=UApiWaitForHypeTrainEvent::WaitForHypeTrainEvent(Z_Param_desc);
		P_NATIVE_END;
	}
	void UApiWaitForHypeTrainEvent::StaticRegisterNativesUApiWaitForHypeTrainEvent()
	{
		UClass* Class = UApiWaitForHypeTrainEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForHypeTrainEvent", &UApiWaitForHypeTrainEvent::execWaitForHypeTrainEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics
	{
		struct ApiWaitForHypeTrainEvent_eventWaitForHypeTrainEvent_Parms
		{
			FTwitchSDKEventStreamDesc desc;
			UApiWaitForHypeTrainEvent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_desc;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::NewProp_desc = { "desc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForHypeTrainEvent_eventWaitForHypeTrainEvent_Parms, desc), Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc, METADATA_PARAMS(nullptr, 0) }; // 607524476
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForHypeTrainEvent_eventWaitForHypeTrainEvent_Parms, ReturnValue), Z_Construct_UClass_UApiWaitForHypeTrainEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::NewProp_desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * A Hype Train makes progress on the user's channel. Requires the channel:read:hype_train scope.\n     *\n     * You may only call this with a subscription for the correct event type.\n     *\n     * @param desc An object describing the subscription.\n     */" },
		{ "ModuleRelativePath", "Private/ApiWaitForHypeTrainEvent.h" },
		{ "ToolTip", "A Hype Train makes progress on the user's channel. Requires the channel:read:hype_train scope.\n\nYou may only call this with a subscription for the correct event type.\n\n@param desc An object describing the subscription." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiWaitForHypeTrainEvent, nullptr, "WaitForHypeTrainEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::ApiWaitForHypeTrainEvent_eventWaitForHypeTrainEvent_Parms), Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiWaitForHypeTrainEvent);
	UClass* Z_Construct_UClass_UApiWaitForHypeTrainEvent_NoRegister()
	{
		return UApiWaitForHypeTrainEvent::StaticClass();
	}
	struct Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics
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
	UObject* (*const Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiWaitForHypeTrainEvent_WaitForHypeTrainEvent, "WaitForHypeTrainEvent" }, // 2805165144
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiWaitForHypeTrainEvent.h" },
		{ "ModuleRelativePath", "Private/ApiWaitForHypeTrainEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForHypeTrainEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForHypeTrainEvent, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Done_MetaData)) }; // 3907149645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForHypeTrainEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForHypeTrainEvent, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForHypeTrainEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Error_MetaData)) }; // 3907149645
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiWaitForHypeTrainEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::ClassParams = {
		&UApiWaitForHypeTrainEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiWaitForHypeTrainEvent()
	{
		if (!Z_Registration_Info_UClass_UApiWaitForHypeTrainEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiWaitForHypeTrainEvent.OuterSingleton, Z_Construct_UClass_UApiWaitForHypeTrainEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiWaitForHypeTrainEvent.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiWaitForHypeTrainEvent>()
	{
		return UApiWaitForHypeTrainEvent::StaticClass();
	}
	UApiWaitForHypeTrainEvent::UApiWaitForHypeTrainEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiWaitForHypeTrainEvent);
	UApiWaitForHypeTrainEvent::~UApiWaitForHypeTrainEvent() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForHypeTrainEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForHypeTrainEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiWaitForHypeTrainEvent, UApiWaitForHypeTrainEvent::StaticClass, TEXT("UApiWaitForHypeTrainEvent"), &Z_Registration_Info_UClass_UApiWaitForHypeTrainEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiWaitForHypeTrainEvent), 2410487165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForHypeTrainEvent_h_2793882848(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForHypeTrainEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForHypeTrainEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
