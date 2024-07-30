// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiCloseEventStream.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiCloseEventStream() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCloseEventStream();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCloseEventStream_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiCloseEventStream_Parms
		{
			FString Error;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCloseEventStream_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiCloseEventStream.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiCloseEventStream__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiCloseEventStream_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiCloseEventStream_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiCloseEventStream, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiCloseEventStream_Parms
	{
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiCloseEventStream_Parms Parms;
	Parms.Error=Error;
	AsyncDoneApiCloseEventStream.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiCloseEventStream::execCloseEventStream)
	{
		P_GET_STRUCT(FTwitchSDKEventStreamDesc,Z_Param_desc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiCloseEventStream**)Z_Param__Result=UApiCloseEventStream::CloseEventStream(Z_Param_desc);
		P_NATIVE_END;
	}
	void UApiCloseEventStream::StaticRegisterNativesUApiCloseEventStream()
	{
		UClass* Class = UApiCloseEventStream::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseEventStream", &UApiCloseEventStream::execCloseEventStream },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics
	{
		struct ApiCloseEventStream_eventCloseEventStream_Parms
		{
			FTwitchSDKEventStreamDesc desc;
			UApiCloseEventStream* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_desc;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::NewProp_desc = { "desc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCloseEventStream_eventCloseEventStream_Parms, desc), Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc, METADATA_PARAMS(nullptr, 0) }; // 607524476
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCloseEventStream_eventCloseEventStream_Parms, ReturnValue), Z_Construct_UClass_UApiCloseEventStream_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::NewProp_desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Close a Twitch EventSub subscription.\n     *\n     * After the subscription is closed, trying to receive events from it is an error.\n     *\n     * @param desc An object describing the subscription.\n     */" },
		{ "ModuleRelativePath", "Private/ApiCloseEventStream.h" },
		{ "ToolTip", "Close a Twitch EventSub subscription.\n\nAfter the subscription is closed, trying to receive events from it is an error.\n\n@param desc An object describing the subscription." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiCloseEventStream, nullptr, "CloseEventStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::ApiCloseEventStream_eventCloseEventStream_Parms), Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiCloseEventStream);
	UClass* Z_Construct_UClass_UApiCloseEventStream_NoRegister()
	{
		return UApiCloseEventStream::StaticClass();
	}
	struct Z_Construct_UClass_UApiCloseEventStream_Statics
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
	UObject* (*const Z_Construct_UClass_UApiCloseEventStream_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiCloseEventStream_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiCloseEventStream_CloseEventStream, "CloseEventStream" }, // 1694249191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCloseEventStream_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiCloseEventStream.h" },
		{ "ModuleRelativePath", "Private/ApiCloseEventStream.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCloseEventStream.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCloseEventStream, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Done_MetaData)) }; // 274183757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCloseEventStream.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCloseEventStream, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCloseEventStream__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Error_MetaData)) }; // 274183757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiCloseEventStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCloseEventStream_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiCloseEventStream_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiCloseEventStream>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiCloseEventStream_Statics::ClassParams = {
		&UApiCloseEventStream::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiCloseEventStream_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiCloseEventStream_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiCloseEventStream_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCloseEventStream_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiCloseEventStream()
	{
		if (!Z_Registration_Info_UClass_UApiCloseEventStream.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiCloseEventStream.OuterSingleton, Z_Construct_UClass_UApiCloseEventStream_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiCloseEventStream.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiCloseEventStream>()
	{
		return UApiCloseEventStream::StaticClass();
	}
	UApiCloseEventStream::UApiCloseEventStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiCloseEventStream);
	UApiCloseEventStream::~UApiCloseEventStream() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCloseEventStream_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCloseEventStream_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiCloseEventStream, UApiCloseEventStream::StaticClass, TEXT("UApiCloseEventStream"), &Z_Registration_Info_UClass_UApiCloseEventStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiCloseEventStream), 2204201363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCloseEventStream_h_114933174(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCloseEventStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCloseEventStream_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
