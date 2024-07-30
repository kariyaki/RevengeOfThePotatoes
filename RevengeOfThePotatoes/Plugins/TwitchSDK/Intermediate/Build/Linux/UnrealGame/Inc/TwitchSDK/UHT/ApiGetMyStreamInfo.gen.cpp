// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiGetMyStreamInfo.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiGetMyStreamInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetMyStreamInfo();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetMyStreamInfo_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKStreamInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiGetMyStreamInfo_Parms
		{
			FTwitchSDKStreamInfo Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetMyStreamInfo_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKStreamInfo, METADATA_PARAMS(nullptr, 0) }; // 3489471818
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetMyStreamInfo_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiGetMyStreamInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiGetMyStreamInfo__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiGetMyStreamInfo_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiGetMyStreamInfo_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiGetMyStreamInfo, FTwitchSDKStreamInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiGetMyStreamInfo_Parms
	{
		FTwitchSDKStreamInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiGetMyStreamInfo_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiGetMyStreamInfo.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiGetMyStreamInfo::execGetMyStreamInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiGetMyStreamInfo**)Z_Param__Result=UApiGetMyStreamInfo::GetMyStreamInfo();
		P_NATIVE_END;
	}
	void UApiGetMyStreamInfo::StaticRegisterNativesUApiGetMyStreamInfo()
	{
		UClass* Class = UApiGetMyStreamInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMyStreamInfo", &UApiGetMyStreamInfo::execGetMyStreamInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics
	{
		struct ApiGetMyStreamInfo_eventGetMyStreamInfo_Parms
		{
			UApiGetMyStreamInfo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetMyStreamInfo_eventGetMyStreamInfo_Parms, ReturnValue), Z_Construct_UClass_UApiGetMyStreamInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Gets information about the currently logged-in user's stream.\n     *\n     * If the user is not logged in, this also waits for a successful login. Returns null if the user is currently not live.\n     *\n     */" },
		{ "ModuleRelativePath", "Private/ApiGetMyStreamInfo.h" },
		{ "ToolTip", "Gets information about the currently logged-in user's stream.\n\nIf the user is not logged in, this also waits for a successful login. Returns null if the user is currently not live." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiGetMyStreamInfo, nullptr, "GetMyStreamInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::ApiGetMyStreamInfo_eventGetMyStreamInfo_Parms), Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiGetMyStreamInfo);
	UClass* Z_Construct_UClass_UApiGetMyStreamInfo_NoRegister()
	{
		return UApiGetMyStreamInfo::StaticClass();
	}
	struct Z_Construct_UClass_UApiGetMyStreamInfo_Statics
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
	UObject* (*const Z_Construct_UClass_UApiGetMyStreamInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiGetMyStreamInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiGetMyStreamInfo_GetMyStreamInfo, "GetMyStreamInfo" }, // 2611278919
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetMyStreamInfo_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiGetMyStreamInfo.h" },
		{ "ModuleRelativePath", "Private/ApiGetMyStreamInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetMyStreamInfo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetMyStreamInfo, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Done_MetaData)) }; // 4043587846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetMyStreamInfo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetMyStreamInfo, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyStreamInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Error_MetaData)) }; // 4043587846
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiGetMyStreamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetMyStreamInfo_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiGetMyStreamInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiGetMyStreamInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiGetMyStreamInfo_Statics::ClassParams = {
		&UApiGetMyStreamInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiGetMyStreamInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetMyStreamInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiGetMyStreamInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetMyStreamInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiGetMyStreamInfo()
	{
		if (!Z_Registration_Info_UClass_UApiGetMyStreamInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiGetMyStreamInfo.OuterSingleton, Z_Construct_UClass_UApiGetMyStreamInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiGetMyStreamInfo.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiGetMyStreamInfo>()
	{
		return UApiGetMyStreamInfo::StaticClass();
	}
	UApiGetMyStreamInfo::UApiGetMyStreamInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiGetMyStreamInfo);
	UApiGetMyStreamInfo::~UApiGetMyStreamInfo() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyStreamInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyStreamInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiGetMyStreamInfo, UApiGetMyStreamInfo::StaticClass, TEXT("UApiGetMyStreamInfo"), &Z_Registration_Info_UClass_UApiGetMyStreamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiGetMyStreamInfo), 1820509499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyStreamInfo_h_3150274280(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyStreamInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyStreamInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
