// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiGetMyUserInfo.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiGetMyUserInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetMyUserInfo();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetMyUserInfo_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKUserInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiGetMyUserInfo_Parms
		{
			FTwitchSDKUserInfo Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetMyUserInfo_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKUserInfo, METADATA_PARAMS(nullptr, 0) }; // 3138084840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetMyUserInfo_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiGetMyUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiGetMyUserInfo__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiGetMyUserInfo_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiGetMyUserInfo_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiGetMyUserInfo, FTwitchSDKUserInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiGetMyUserInfo_Parms
	{
		FTwitchSDKUserInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiGetMyUserInfo_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiGetMyUserInfo.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiGetMyUserInfo::execGetMyUserInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiGetMyUserInfo**)Z_Param__Result=UApiGetMyUserInfo::GetMyUserInfo();
		P_NATIVE_END;
	}
	void UApiGetMyUserInfo::StaticRegisterNativesUApiGetMyUserInfo()
	{
		UClass* Class = UApiGetMyUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMyUserInfo", &UApiGetMyUserInfo::execGetMyUserInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics
	{
		struct ApiGetMyUserInfo_eventGetMyUserInfo_Parms
		{
			UApiGetMyUserInfo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetMyUserInfo_eventGetMyUserInfo_Parms, ReturnValue), Z_Construct_UClass_UApiGetMyUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Gets information about the currently logged-in user's account.\n     *\n     * If the user is not logged in, this also waits for a successful login.\n     *\n     */" },
		{ "ModuleRelativePath", "Private/ApiGetMyUserInfo.h" },
		{ "ToolTip", "Gets information about the currently logged-in user's account.\n\nIf the user is not logged in, this also waits for a successful login." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiGetMyUserInfo, nullptr, "GetMyUserInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::ApiGetMyUserInfo_eventGetMyUserInfo_Parms), Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiGetMyUserInfo);
	UClass* Z_Construct_UClass_UApiGetMyUserInfo_NoRegister()
	{
		return UApiGetMyUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UApiGetMyUserInfo_Statics
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
	UObject* (*const Z_Construct_UClass_UApiGetMyUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiGetMyUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiGetMyUserInfo_GetMyUserInfo, "GetMyUserInfo" }, // 178610100
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetMyUserInfo_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiGetMyUserInfo.h" },
		{ "ModuleRelativePath", "Private/ApiGetMyUserInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetMyUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetMyUserInfo, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Done_MetaData)) }; // 2168257198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetMyUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetMyUserInfo, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetMyUserInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Error_MetaData)) }; // 2168257198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiGetMyUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetMyUserInfo_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiGetMyUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiGetMyUserInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiGetMyUserInfo_Statics::ClassParams = {
		&UApiGetMyUserInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiGetMyUserInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetMyUserInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiGetMyUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetMyUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiGetMyUserInfo()
	{
		if (!Z_Registration_Info_UClass_UApiGetMyUserInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiGetMyUserInfo.OuterSingleton, Z_Construct_UClass_UApiGetMyUserInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiGetMyUserInfo.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiGetMyUserInfo>()
	{
		return UApiGetMyUserInfo::StaticClass();
	}
	UApiGetMyUserInfo::UApiGetMyUserInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiGetMyUserInfo);
	UApiGetMyUserInfo::~UApiGetMyUserInfo() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyUserInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyUserInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiGetMyUserInfo, UApiGetMyUserInfo::StaticClass, TEXT("UApiGetMyUserInfo"), &Z_Registration_Info_UClass_UApiGetMyUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiGetMyUserInfo), 4230594395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyUserInfo_h_3676526686(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyUserInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetMyUserInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
