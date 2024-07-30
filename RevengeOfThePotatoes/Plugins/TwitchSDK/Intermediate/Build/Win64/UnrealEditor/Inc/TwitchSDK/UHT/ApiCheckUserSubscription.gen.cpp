// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiCheckUserSubscription.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiCheckUserSubscription() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCheckUserSubscription();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCheckUserSubscription_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiCheckUserSubscription_Parms
		{
			FTwitchSDKUserSubscriptionCheckResult Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCheckUserSubscription_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKUserSubscriptionCheckResult, METADATA_PARAMS(nullptr, 0) }; // 2877005969
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCheckUserSubscription_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiCheckUserSubscription.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiCheckUserSubscription__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiCheckUserSubscription_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiCheckUserSubscription_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiCheckUserSubscription, FTwitchSDKUserSubscriptionCheckResult Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiCheckUserSubscription_Parms
	{
		FTwitchSDKUserSubscriptionCheckResult Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiCheckUserSubscription_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiCheckUserSubscription.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiCheckUserSubscription::execCheckUserSubscription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_broadcaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiCheckUserSubscription**)Z_Param__Result=UApiCheckUserSubscription::CheckUserSubscription(Z_Param_broadcaster);
		P_NATIVE_END;
	}
	void UApiCheckUserSubscription::StaticRegisterNativesUApiCheckUserSubscription()
	{
		UClass* Class = UApiCheckUserSubscription::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckUserSubscription", &UApiCheckUserSubscription::execCheckUserSubscription },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics
	{
		struct ApiCheckUserSubscription_eventCheckUserSubscription_Parms
		{
			FString broadcaster;
			UApiCheckUserSubscription* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_broadcaster;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::NewProp_broadcaster = { "broadcaster", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCheckUserSubscription_eventCheckUserSubscription_Parms, broadcaster), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCheckUserSubscription_eventCheckUserSubscription_Parms, ReturnValue), Z_Construct_UClass_UApiCheckUserSubscription_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::NewProp_broadcaster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Checks if the currently logged-in user is subscribed to a specific channel.\n     *\n     * Required scope: user:read:subscriptions\n     *\n     * @param broadcaster ID of the broadcaster to check for.\n     */" },
		{ "ModuleRelativePath", "Private/ApiCheckUserSubscription.h" },
		{ "ToolTip", "Checks if the currently logged-in user is subscribed to a specific channel.\n\nRequired scope: user:read:subscriptions\n\n@param broadcaster ID of the broadcaster to check for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiCheckUserSubscription, nullptr, "CheckUserSubscription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::ApiCheckUserSubscription_eventCheckUserSubscription_Parms), Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiCheckUserSubscription);
	UClass* Z_Construct_UClass_UApiCheckUserSubscription_NoRegister()
	{
		return UApiCheckUserSubscription::StaticClass();
	}
	struct Z_Construct_UClass_UApiCheckUserSubscription_Statics
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
	UObject* (*const Z_Construct_UClass_UApiCheckUserSubscription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiCheckUserSubscription_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiCheckUserSubscription_CheckUserSubscription, "CheckUserSubscription" }, // 1363491055
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCheckUserSubscription_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiCheckUserSubscription.h" },
		{ "ModuleRelativePath", "Private/ApiCheckUserSubscription.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCheckUserSubscription.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCheckUserSubscription, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Done_MetaData)) }; // 1945310842
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCheckUserSubscription.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCheckUserSubscription, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCheckUserSubscription__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Error_MetaData)) }; // 1945310842
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiCheckUserSubscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCheckUserSubscription_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiCheckUserSubscription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiCheckUserSubscription>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiCheckUserSubscription_Statics::ClassParams = {
		&UApiCheckUserSubscription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiCheckUserSubscription_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiCheckUserSubscription_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiCheckUserSubscription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCheckUserSubscription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiCheckUserSubscription()
	{
		if (!Z_Registration_Info_UClass_UApiCheckUserSubscription.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiCheckUserSubscription.OuterSingleton, Z_Construct_UClass_UApiCheckUserSubscription_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiCheckUserSubscription.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiCheckUserSubscription>()
	{
		return UApiCheckUserSubscription::StaticClass();
	}
	UApiCheckUserSubscription::UApiCheckUserSubscription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiCheckUserSubscription);
	UApiCheckUserSubscription::~UApiCheckUserSubscription() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCheckUserSubscription_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCheckUserSubscription_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiCheckUserSubscription, UApiCheckUserSubscription::StaticClass, TEXT("UApiCheckUserSubscription"), &Z_Registration_Info_UClass_UApiCheckUserSubscription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiCheckUserSubscription), 1680809385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCheckUserSubscription_h_2057429675(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCheckUserSubscription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCheckUserSubscription_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
