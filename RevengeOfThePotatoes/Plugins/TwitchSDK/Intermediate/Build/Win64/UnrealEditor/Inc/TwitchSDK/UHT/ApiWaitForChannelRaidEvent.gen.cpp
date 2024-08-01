// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiWaitForChannelRaidEvent.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiWaitForChannelRaidEvent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForChannelRaidEvent();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForChannelRaidEvent_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiWaitForChannelRaidEvent_Parms
		{
			FTwitchSDKChannelRaidEvent Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelRaidEvent_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKChannelRaidEvent, METADATA_PARAMS(nullptr, 0) }; // 3042060871
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelRaidEvent_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelRaidEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelRaidEvent_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiWaitForChannelRaidEvent_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiWaitForChannelRaidEvent, FTwitchSDKChannelRaidEvent Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiWaitForChannelRaidEvent_Parms
	{
		FTwitchSDKChannelRaidEvent Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelRaidEvent_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiWaitForChannelRaidEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiWaitForChannelRaidEvent::execWaitForChannelRaidEvent)
	{
		P_GET_STRUCT(FTwitchSDKEventStreamDesc,Z_Param_desc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiWaitForChannelRaidEvent**)Z_Param__Result=UApiWaitForChannelRaidEvent::WaitForChannelRaidEvent(Z_Param_desc);
		P_NATIVE_END;
	}
	void UApiWaitForChannelRaidEvent::StaticRegisterNativesUApiWaitForChannelRaidEvent()
	{
		UClass* Class = UApiWaitForChannelRaidEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForChannelRaidEvent", &UApiWaitForChannelRaidEvent::execWaitForChannelRaidEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics
	{
		struct ApiWaitForChannelRaidEvent_eventWaitForChannelRaidEvent_Parms
		{
			FTwitchSDKEventStreamDesc desc;
			UApiWaitForChannelRaidEvent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_desc;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::NewProp_desc = { "desc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForChannelRaidEvent_eventWaitForChannelRaidEvent_Parms, desc), Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc, METADATA_PARAMS(nullptr, 0) }; // 607524476
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForChannelRaidEvent_eventWaitForChannelRaidEvent_Parms, ReturnValue), Z_Construct_UClass_UApiWaitForChannelRaidEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::NewProp_desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * A broadcaster raids another broadcaster\xe2\x80\x99s channel.\n     *\n     * You may only call this with a subscription for the correct event type.\n     *\n     * @param desc An object describing the subscription.\n     */" },
		{ "ModuleRelativePath", "Private/ApiWaitForChannelRaidEvent.h" },
		{ "ToolTip", "A broadcaster raids another broadcaster\xe2\x80\x99s channel.\n\nYou may only call this with a subscription for the correct event type.\n\n@param desc An object describing the subscription." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiWaitForChannelRaidEvent, nullptr, "WaitForChannelRaidEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::ApiWaitForChannelRaidEvent_eventWaitForChannelRaidEvent_Parms), Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiWaitForChannelRaidEvent);
	UClass* Z_Construct_UClass_UApiWaitForChannelRaidEvent_NoRegister()
	{
		return UApiWaitForChannelRaidEvent::StaticClass();
	}
	struct Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics
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
	UObject* (*const Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiWaitForChannelRaidEvent_WaitForChannelRaidEvent, "WaitForChannelRaidEvent" }, // 2096915884
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiWaitForChannelRaidEvent.h" },
		{ "ModuleRelativePath", "Private/ApiWaitForChannelRaidEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelRaidEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForChannelRaidEvent, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Done_MetaData)) }; // 989553052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelRaidEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForChannelRaidEvent, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelRaidEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Error_MetaData)) }; // 989553052
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiWaitForChannelRaidEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::ClassParams = {
		&UApiWaitForChannelRaidEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiWaitForChannelRaidEvent()
	{
		if (!Z_Registration_Info_UClass_UApiWaitForChannelRaidEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiWaitForChannelRaidEvent.OuterSingleton, Z_Construct_UClass_UApiWaitForChannelRaidEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiWaitForChannelRaidEvent.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiWaitForChannelRaidEvent>()
	{
		return UApiWaitForChannelRaidEvent::StaticClass();
	}
	UApiWaitForChannelRaidEvent::UApiWaitForChannelRaidEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiWaitForChannelRaidEvent);
	UApiWaitForChannelRaidEvent::~UApiWaitForChannelRaidEvent() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelRaidEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelRaidEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiWaitForChannelRaidEvent, UApiWaitForChannelRaidEvent::StaticClass, TEXT("UApiWaitForChannelRaidEvent"), &Z_Registration_Info_UClass_UApiWaitForChannelRaidEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiWaitForChannelRaidEvent), 3964381983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelRaidEvent_h_160858871(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelRaidEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelRaidEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
