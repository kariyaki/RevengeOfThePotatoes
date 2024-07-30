// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiWaitForChannelSubscribeEvent.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiWaitForChannelSubscribeEvent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForChannelSubscribeEvent();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiWaitForChannelSubscribeEvent_Parms
		{
			FTwitchSDKChannelSubscribeEvent Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelSubscribeEvent_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKChannelSubscribeEvent, METADATA_PARAMS(nullptr, 0) }; // 1295601202
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelSubscribeEvent_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelSubscribeEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelSubscribeEvent_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiWaitForChannelSubscribeEvent_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiWaitForChannelSubscribeEvent, FTwitchSDKChannelSubscribeEvent Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiWaitForChannelSubscribeEvent_Parms
	{
		FTwitchSDKChannelSubscribeEvent Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelSubscribeEvent_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiWaitForChannelSubscribeEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiWaitForChannelSubscribeEvent::execWaitForChannelSubscribeEvent)
	{
		P_GET_STRUCT(FTwitchSDKEventStreamDesc,Z_Param_desc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiWaitForChannelSubscribeEvent**)Z_Param__Result=UApiWaitForChannelSubscribeEvent::WaitForChannelSubscribeEvent(Z_Param_desc);
		P_NATIVE_END;
	}
	void UApiWaitForChannelSubscribeEvent::StaticRegisterNativesUApiWaitForChannelSubscribeEvent()
	{
		UClass* Class = UApiWaitForChannelSubscribeEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForChannelSubscribeEvent", &UApiWaitForChannelSubscribeEvent::execWaitForChannelSubscribeEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics
	{
		struct ApiWaitForChannelSubscribeEvent_eventWaitForChannelSubscribeEvent_Parms
		{
			FTwitchSDKEventStreamDesc desc;
			UApiWaitForChannelSubscribeEvent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_desc;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::NewProp_desc = { "desc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForChannelSubscribeEvent_eventWaitForChannelSubscribeEvent_Parms, desc), Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc, METADATA_PARAMS(nullptr, 0) }; // 607524476
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForChannelSubscribeEvent_eventWaitForChannelSubscribeEvent_Parms, ReturnValue), Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::NewProp_desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * A notification when a specified channel receives a subscriber. This does not include resubscribes.\n     *\n     * You may only call this with a subscription for the correct event type.\n     *\n     * @param desc An object describing the subscription.\n     */" },
		{ "ModuleRelativePath", "Private/ApiWaitForChannelSubscribeEvent.h" },
		{ "ToolTip", "A notification when a specified channel receives a subscriber. This does not include resubscribes.\n\nYou may only call this with a subscription for the correct event type.\n\n@param desc An object describing the subscription." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiWaitForChannelSubscribeEvent, nullptr, "WaitForChannelSubscribeEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::ApiWaitForChannelSubscribeEvent_eventWaitForChannelSubscribeEvent_Parms), Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiWaitForChannelSubscribeEvent);
	UClass* Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_NoRegister()
	{
		return UApiWaitForChannelSubscribeEvent::StaticClass();
	}
	struct Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics
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
	UObject* (*const Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiWaitForChannelSubscribeEvent_WaitForChannelSubscribeEvent, "WaitForChannelSubscribeEvent" }, // 2815257392
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiWaitForChannelSubscribeEvent.h" },
		{ "ModuleRelativePath", "Private/ApiWaitForChannelSubscribeEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelSubscribeEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForChannelSubscribeEvent, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Done_MetaData)) }; // 4208026290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelSubscribeEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForChannelSubscribeEvent, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelSubscribeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Error_MetaData)) }; // 4208026290
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiWaitForChannelSubscribeEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::ClassParams = {
		&UApiWaitForChannelSubscribeEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiWaitForChannelSubscribeEvent()
	{
		if (!Z_Registration_Info_UClass_UApiWaitForChannelSubscribeEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiWaitForChannelSubscribeEvent.OuterSingleton, Z_Construct_UClass_UApiWaitForChannelSubscribeEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiWaitForChannelSubscribeEvent.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiWaitForChannelSubscribeEvent>()
	{
		return UApiWaitForChannelSubscribeEvent::StaticClass();
	}
	UApiWaitForChannelSubscribeEvent::UApiWaitForChannelSubscribeEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiWaitForChannelSubscribeEvent);
	UApiWaitForChannelSubscribeEvent::~UApiWaitForChannelSubscribeEvent() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelSubscribeEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelSubscribeEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiWaitForChannelSubscribeEvent, UApiWaitForChannelSubscribeEvent::StaticClass, TEXT("UApiWaitForChannelSubscribeEvent"), &Z_Registration_Info_UClass_UApiWaitForChannelSubscribeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiWaitForChannelSubscribeEvent), 616222431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelSubscribeEvent_h_3480919624(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelSubscribeEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelSubscribeEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
