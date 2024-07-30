// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiGetUserInfoByLoginName.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiGetUserInfoByLoginName() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetUserInfoByLoginName();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetUserInfoByLoginName_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKUserInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiGetUserInfoByLoginName_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetUserInfoByLoginName_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKUserInfo, METADATA_PARAMS(nullptr, 0) }; // 3138084840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetUserInfoByLoginName_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiGetUserInfoByLoginName.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiGetUserInfoByLoginName__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiGetUserInfoByLoginName_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiGetUserInfoByLoginName_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiGetUserInfoByLoginName, FTwitchSDKUserInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiGetUserInfoByLoginName_Parms
	{
		FTwitchSDKUserInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiGetUserInfoByLoginName_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiGetUserInfoByLoginName.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiGetUserInfoByLoginName::execGetUserInfoByLoginName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_login);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiGetUserInfoByLoginName**)Z_Param__Result=UApiGetUserInfoByLoginName::GetUserInfoByLoginName(Z_Param_login);
		P_NATIVE_END;
	}
	void UApiGetUserInfoByLoginName::StaticRegisterNativesUApiGetUserInfoByLoginName()
	{
		UClass* Class = UApiGetUserInfoByLoginName::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserInfoByLoginName", &UApiGetUserInfoByLoginName::execGetUserInfoByLoginName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics
	{
		struct ApiGetUserInfoByLoginName_eventGetUserInfoByLoginName_Parms
		{
			FString login;
			UApiGetUserInfoByLoginName* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_login;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::NewProp_login = { "login", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetUserInfoByLoginName_eventGetUserInfoByLoginName_Parms, login), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetUserInfoByLoginName_eventGetUserInfoByLoginName_Parms, ReturnValue), Z_Construct_UClass_UApiGetUserInfoByLoginName_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::NewProp_login,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Gets information about a specific Twitch user account.\n     *\n     * Returns an empty object if no such user could be found.\n     *\n     * @param login The login name to query for.\n     */" },
		{ "ModuleRelativePath", "Private/ApiGetUserInfoByLoginName.h" },
		{ "ToolTip", "Gets information about a specific Twitch user account.\n\nReturns an empty object if no such user could be found.\n\n@param login The login name to query for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiGetUserInfoByLoginName, nullptr, "GetUserInfoByLoginName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::ApiGetUserInfoByLoginName_eventGetUserInfoByLoginName_Parms), Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiGetUserInfoByLoginName);
	UClass* Z_Construct_UClass_UApiGetUserInfoByLoginName_NoRegister()
	{
		return UApiGetUserInfoByLoginName::StaticClass();
	}
	struct Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics
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
	UObject* (*const Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiGetUserInfoByLoginName_GetUserInfoByLoginName, "GetUserInfoByLoginName" }, // 2768298844
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiGetUserInfoByLoginName.h" },
		{ "ModuleRelativePath", "Private/ApiGetUserInfoByLoginName.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetUserInfoByLoginName.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetUserInfoByLoginName, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Done_MetaData)) }; // 1305287314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetUserInfoByLoginName.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetUserInfoByLoginName, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoByLoginName__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Error_MetaData)) }; // 1305287314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiGetUserInfoByLoginName>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::ClassParams = {
		&UApiGetUserInfoByLoginName::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiGetUserInfoByLoginName()
	{
		if (!Z_Registration_Info_UClass_UApiGetUserInfoByLoginName.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiGetUserInfoByLoginName.OuterSingleton, Z_Construct_UClass_UApiGetUserInfoByLoginName_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiGetUserInfoByLoginName.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiGetUserInfoByLoginName>()
	{
		return UApiGetUserInfoByLoginName::StaticClass();
	}
	UApiGetUserInfoByLoginName::UApiGetUserInfoByLoginName(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiGetUserInfoByLoginName);
	UApiGetUserInfoByLoginName::~UApiGetUserInfoByLoginName() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoByLoginName_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoByLoginName_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiGetUserInfoByLoginName, UApiGetUserInfoByLoginName::StaticClass, TEXT("UApiGetUserInfoByLoginName"), &Z_Registration_Info_UClass_UApiGetUserInfoByLoginName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiGetUserInfoByLoginName), 1550308201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoByLoginName_h_339926377(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoByLoginName_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoByLoginName_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
