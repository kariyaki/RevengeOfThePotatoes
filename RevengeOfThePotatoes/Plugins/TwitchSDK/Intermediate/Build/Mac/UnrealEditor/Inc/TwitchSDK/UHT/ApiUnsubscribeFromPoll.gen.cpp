// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiUnsubscribeFromPoll.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiUnsubscribeFromPoll() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiUnsubscribeFromPoll();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiUnsubscribeFromPoll_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiUnsubscribeFromPoll_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiUnsubscribeFromPoll_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiUnsubscribeFromPoll.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiUnsubscribeFromPoll__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiUnsubscribeFromPoll_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiUnsubscribeFromPoll_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiUnsubscribeFromPoll, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiUnsubscribeFromPoll_Parms
	{
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiUnsubscribeFromPoll_Parms Parms;
	Parms.Error=Error;
	AsyncDoneApiUnsubscribeFromPoll.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiUnsubscribeFromPoll::execUnsubscribeFromPoll)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiUnsubscribeFromPoll**)Z_Param__Result=UApiUnsubscribeFromPoll::UnsubscribeFromPoll(Z_Param_id);
		P_NATIVE_END;
	}
	void UApiUnsubscribeFromPoll::StaticRegisterNativesUApiUnsubscribeFromPoll()
	{
		UClass* Class = UApiUnsubscribeFromPoll::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UnsubscribeFromPoll", &UApiUnsubscribeFromPoll::execUnsubscribeFromPoll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics
	{
		struct ApiUnsubscribeFromPoll_eventUnsubscribeFromPoll_Parms
		{
			FString id;
			UApiUnsubscribeFromPoll* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiUnsubscribeFromPoll_eventUnsubscribeFromPoll_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiUnsubscribeFromPoll_eventUnsubscribeFromPoll_Parms, ReturnValue), Z_Construct_UClass_UApiUnsubscribeFromPoll_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Unsubscribe from updates for a specific poll.\n     *\n     * You must not invoke this function multiple times for the same poll. Unsubscribing from polls is optional. Failing to do so results in unnecessary traffic, but will not cause any malfunction or memory leak.\n     *\n     * @param id Id of the poll to unsubscribe from.\n     */" },
		{ "ModuleRelativePath", "Private/ApiUnsubscribeFromPoll.h" },
		{ "ToolTip", "Unsubscribe from updates for a specific poll.\n\nYou must not invoke this function multiple times for the same poll. Unsubscribing from polls is optional. Failing to do so results in unnecessary traffic, but will not cause any malfunction or memory leak.\n\n@param id Id of the poll to unsubscribe from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiUnsubscribeFromPoll, nullptr, "UnsubscribeFromPoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::ApiUnsubscribeFromPoll_eventUnsubscribeFromPoll_Parms), Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiUnsubscribeFromPoll);
	UClass* Z_Construct_UClass_UApiUnsubscribeFromPoll_NoRegister()
	{
		return UApiUnsubscribeFromPoll::StaticClass();
	}
	struct Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics
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
	UObject* (*const Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiUnsubscribeFromPoll_UnsubscribeFromPoll, "UnsubscribeFromPoll" }, // 1067505866
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiUnsubscribeFromPoll.h" },
		{ "ModuleRelativePath", "Private/ApiUnsubscribeFromPoll.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiUnsubscribeFromPoll.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiUnsubscribeFromPoll, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Done_MetaData)) }; // 166903299
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiUnsubscribeFromPoll.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiUnsubscribeFromPoll, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiUnsubscribeFromPoll__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Error_MetaData)) }; // 166903299
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiUnsubscribeFromPoll>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::ClassParams = {
		&UApiUnsubscribeFromPoll::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiUnsubscribeFromPoll()
	{
		if (!Z_Registration_Info_UClass_UApiUnsubscribeFromPoll.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiUnsubscribeFromPoll.OuterSingleton, Z_Construct_UClass_UApiUnsubscribeFromPoll_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiUnsubscribeFromPoll.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiUnsubscribeFromPoll>()
	{
		return UApiUnsubscribeFromPoll::StaticClass();
	}
	UApiUnsubscribeFromPoll::UApiUnsubscribeFromPoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiUnsubscribeFromPoll);
	UApiUnsubscribeFromPoll::~UApiUnsubscribeFromPoll() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiUnsubscribeFromPoll_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiUnsubscribeFromPoll_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiUnsubscribeFromPoll, UApiUnsubscribeFromPoll::StaticClass, TEXT("UApiUnsubscribeFromPoll"), &Z_Registration_Info_UClass_UApiUnsubscribeFromPoll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiUnsubscribeFromPoll), 1816139172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiUnsubscribeFromPoll_h_2415002676(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiUnsubscribeFromPoll_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiUnsubscribeFromPoll_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
