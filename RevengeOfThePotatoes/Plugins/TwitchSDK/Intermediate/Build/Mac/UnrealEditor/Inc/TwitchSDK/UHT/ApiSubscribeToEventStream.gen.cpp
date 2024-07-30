// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiSubscribeToEventStream.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiSubscribeToEventStream() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiSubscribeToEventStream();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiSubscribeToEventStream_NoRegister();
	TWITCHSDK_API UEnum* Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiSubscribeToEventStream_Parms
		{
			FTwitchSDKEventStreamDesc Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiSubscribeToEventStream_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc, METADATA_PARAMS(nullptr, 0) }; // 607524476
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiSubscribeToEventStream_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiSubscribeToEventStream.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiSubscribeToEventStream__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiSubscribeToEventStream_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiSubscribeToEventStream_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiSubscribeToEventStream, FTwitchSDKEventStreamDesc Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiSubscribeToEventStream_Parms
	{
		FTwitchSDKEventStreamDesc Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiSubscribeToEventStream_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiSubscribeToEventStream.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiSubscribeToEventStream::execSubscribeToEventStream)
	{
		P_GET_ENUM(FTwitchSDKEventStreamKind,Z_Param_kind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiSubscribeToEventStream**)Z_Param__Result=UApiSubscribeToEventStream::SubscribeToEventStream(FTwitchSDKEventStreamKind(Z_Param_kind));
		P_NATIVE_END;
	}
	void UApiSubscribeToEventStream::StaticRegisterNativesUApiSubscribeToEventStream()
	{
		UClass* Class = UApiSubscribeToEventStream::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SubscribeToEventStream", &UApiSubscribeToEventStream::execSubscribeToEventStream },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics
	{
		struct ApiSubscribeToEventStream_eventSubscribeToEventStream_Parms
		{
			FTwitchSDKEventStreamKind kind;
			UApiSubscribeToEventStream* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_kind_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_kind;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::NewProp_kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::NewProp_kind = { "kind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiSubscribeToEventStream_eventSubscribeToEventStream_Parms, kind), Z_Construct_UEnum_TwitchSDK_FTwitchSDKEventStreamKind, METADATA_PARAMS(nullptr, 0) }; // 2471831533
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiSubscribeToEventStream_eventSubscribeToEventStream_Parms, ReturnValue), Z_Construct_UClass_UApiSubscribeToEventStream_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::NewProp_kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::NewProp_kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Subscribe to a Twitch EventSub stream.\n     *\n     * You must periodically receive events from your event stream. You must call CloseEventStream once you are done.\n     *\n     * To avoid leaking memory indefinitely in this case, there is an internal limit of 512 buffered events per event stream subscription, as well as an internal limit of 64 subscription per event type in total. When the internal buffer of a subscription is full, incoming events will be discarded silently. When the subscriptions limit is reached, an arbitrary subscription of the same type will be closed, and a warning message will be logged.\n     *\n     */" },
		{ "ModuleRelativePath", "Private/ApiSubscribeToEventStream.h" },
		{ "ToolTip", "Subscribe to a Twitch EventSub stream.\n\nYou must periodically receive events from your event stream. You must call CloseEventStream once you are done.\n\nTo avoid leaking memory indefinitely in this case, there is an internal limit of 512 buffered events per event stream subscription, as well as an internal limit of 64 subscription per event type in total. When the internal buffer of a subscription is full, incoming events will be discarded silently. When the subscriptions limit is reached, an arbitrary subscription of the same type will be closed, and a warning message will be logged." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiSubscribeToEventStream, nullptr, "SubscribeToEventStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::ApiSubscribeToEventStream_eventSubscribeToEventStream_Parms), Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiSubscribeToEventStream);
	UClass* Z_Construct_UClass_UApiSubscribeToEventStream_NoRegister()
	{
		return UApiSubscribeToEventStream::StaticClass();
	}
	struct Z_Construct_UClass_UApiSubscribeToEventStream_Statics
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
	UObject* (*const Z_Construct_UClass_UApiSubscribeToEventStream_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiSubscribeToEventStream_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiSubscribeToEventStream_SubscribeToEventStream, "SubscribeToEventStream" }, // 893645799
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiSubscribeToEventStream_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiSubscribeToEventStream.h" },
		{ "ModuleRelativePath", "Private/ApiSubscribeToEventStream.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiSubscribeToEventStream.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiSubscribeToEventStream, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Done_MetaData)) }; // 881459742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiSubscribeToEventStream.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiSubscribeToEventStream, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiSubscribeToEventStream__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Error_MetaData)) }; // 881459742
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiSubscribeToEventStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiSubscribeToEventStream_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiSubscribeToEventStream_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiSubscribeToEventStream>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiSubscribeToEventStream_Statics::ClassParams = {
		&UApiSubscribeToEventStream::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiSubscribeToEventStream_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiSubscribeToEventStream_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiSubscribeToEventStream_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiSubscribeToEventStream_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiSubscribeToEventStream()
	{
		if (!Z_Registration_Info_UClass_UApiSubscribeToEventStream.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiSubscribeToEventStream.OuterSingleton, Z_Construct_UClass_UApiSubscribeToEventStream_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiSubscribeToEventStream.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiSubscribeToEventStream>()
	{
		return UApiSubscribeToEventStream::StaticClass();
	}
	UApiSubscribeToEventStream::UApiSubscribeToEventStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiSubscribeToEventStream);
	UApiSubscribeToEventStream::~UApiSubscribeToEventStream() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiSubscribeToEventStream, UApiSubscribeToEventStream::StaticClass, TEXT("UApiSubscribeToEventStream"), &Z_Registration_Info_UClass_UApiSubscribeToEventStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiSubscribeToEventStream), 604455094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_4114572191(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiSubscribeToEventStream_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
