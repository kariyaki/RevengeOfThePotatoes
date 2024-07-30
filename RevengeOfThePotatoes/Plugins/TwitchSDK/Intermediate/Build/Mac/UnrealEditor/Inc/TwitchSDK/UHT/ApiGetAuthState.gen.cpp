// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiGetAuthState.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiGetAuthState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetAuthState();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetAuthState_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKAuthState();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiGetAuthState_Parms
		{
			FTwitchSDKAuthState Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetAuthState_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKAuthState, METADATA_PARAMS(nullptr, 0) }; // 339271613
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetAuthState_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiGetAuthState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiGetAuthState__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiGetAuthState_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiGetAuthState_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiGetAuthState, FTwitchSDKAuthState Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiGetAuthState_Parms
	{
		FTwitchSDKAuthState Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiGetAuthState_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiGetAuthState.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiGetAuthState::execGetAuthState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiGetAuthState**)Z_Param__Result=UApiGetAuthState::GetAuthState();
		P_NATIVE_END;
	}
	void UApiGetAuthState::StaticRegisterNativesUApiGetAuthState()
	{
		UClass* Class = UApiGetAuthState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAuthState", &UApiGetAuthState::execGetAuthState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics
	{
		struct ApiGetAuthState_eventGetAuthState_Parms
		{
			UApiGetAuthState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetAuthState_eventGetAuthState_Parms, ReturnValue), Z_Construct_UClass_UApiGetAuthState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Query the current authentication state.\n     *\n     * This call always returns immediately.\n     *\n     */" },
		{ "ModuleRelativePath", "Private/ApiGetAuthState.h" },
		{ "ToolTip", "Query the current authentication state.\n\nThis call always returns immediately." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiGetAuthState, nullptr, "GetAuthState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::ApiGetAuthState_eventGetAuthState_Parms), Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiGetAuthState_GetAuthState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiGetAuthState_GetAuthState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiGetAuthState);
	UClass* Z_Construct_UClass_UApiGetAuthState_NoRegister()
	{
		return UApiGetAuthState::StaticClass();
	}
	struct Z_Construct_UClass_UApiGetAuthState_Statics
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
	UObject* (*const Z_Construct_UClass_UApiGetAuthState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiGetAuthState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiGetAuthState_GetAuthState, "GetAuthState" }, // 3424284954
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetAuthState_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiGetAuthState.h" },
		{ "ModuleRelativePath", "Private/ApiGetAuthState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetAuthState.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetAuthState, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Done_MetaData)) }; // 404695096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetAuthState.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetAuthState, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Error_MetaData)) }; // 404695096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiGetAuthState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetAuthState_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiGetAuthState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiGetAuthState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiGetAuthState_Statics::ClassParams = {
		&UApiGetAuthState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiGetAuthState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetAuthState_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiGetAuthState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetAuthState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiGetAuthState()
	{
		if (!Z_Registration_Info_UClass_UApiGetAuthState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiGetAuthState.OuterSingleton, Z_Construct_UClass_UApiGetAuthState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiGetAuthState.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiGetAuthState>()
	{
		return UApiGetAuthState::StaticClass();
	}
	UApiGetAuthState::UApiGetAuthState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiGetAuthState);
	UApiGetAuthState::~UApiGetAuthState() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiGetAuthState, UApiGetAuthState::StaticClass, TEXT("UApiGetAuthState"), &Z_Registration_Info_UClass_UApiGetAuthState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiGetAuthState), 2935018410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthState_h_2617697790(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
