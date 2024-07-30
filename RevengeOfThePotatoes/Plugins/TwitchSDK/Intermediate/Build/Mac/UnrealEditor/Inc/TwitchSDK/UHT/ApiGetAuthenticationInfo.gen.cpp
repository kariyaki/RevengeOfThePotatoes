// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiGetAuthenticationInfo.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiGetAuthenticationInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetAuthenticationInfo();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetAuthenticationInfo_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiGetAuthenticationInfo_Parms
		{
			FTwitchSDKAuthenticationInfo Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetAuthenticationInfo_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKAuthenticationInfo, METADATA_PARAMS(nullptr, 0) }; // 2958114298
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetAuthenticationInfo_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiGetAuthenticationInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiGetAuthenticationInfo__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiGetAuthenticationInfo_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiGetAuthenticationInfo_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiGetAuthenticationInfo, FTwitchSDKAuthenticationInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiGetAuthenticationInfo_Parms
	{
		FTwitchSDKAuthenticationInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiGetAuthenticationInfo_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiGetAuthenticationInfo.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiGetAuthenticationInfo::execGetAuthenticationInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_scopes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiGetAuthenticationInfo**)Z_Param__Result=UApiGetAuthenticationInfo::GetAuthenticationInfo(Z_Param_scopes);
		P_NATIVE_END;
	}
	void UApiGetAuthenticationInfo::StaticRegisterNativesUApiGetAuthenticationInfo()
	{
		UClass* Class = UApiGetAuthenticationInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAuthenticationInfo", &UApiGetAuthenticationInfo::execGetAuthenticationInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics
	{
		struct ApiGetAuthenticationInfo_eventGetAuthenticationInfo_Parms
		{
			FString scopes;
			UApiGetAuthenticationInfo* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_scopes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::NewProp_scopes = { "scopes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetAuthenticationInfo_eventGetAuthenticationInfo_Parms, scopes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetAuthenticationInfo_eventGetAuthenticationInfo_Parms, ReturnValue), Z_Construct_UClass_UApiGetAuthenticationInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::NewProp_scopes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Start the authorization code flow. If a user is currently logged in, this does nothing. After a successfull call to GetAuthenticationInfo, subsequent calls will return the same AuthenticationInfo until the login is either completed or timed out.\n     *\n     * Credentials are stored persistently, so after loggin in successfully and restarting your application, the library remains in the LoggedIn state.\n     *\n     * @param scopes The set of OAuth scopes you would like to request.\n     */" },
		{ "ModuleRelativePath", "Private/ApiGetAuthenticationInfo.h" },
		{ "ToolTip", "Start the authorization code flow. If a user is currently logged in, this does nothing. After a successfull call to GetAuthenticationInfo, subsequent calls will return the same AuthenticationInfo until the login is either completed or timed out.\n\nCredentials are stored persistently, so after loggin in successfully and restarting your application, the library remains in the LoggedIn state.\n\n@param scopes The set of OAuth scopes you would like to request." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiGetAuthenticationInfo, nullptr, "GetAuthenticationInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::ApiGetAuthenticationInfo_eventGetAuthenticationInfo_Parms), Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiGetAuthenticationInfo);
	UClass* Z_Construct_UClass_UApiGetAuthenticationInfo_NoRegister()
	{
		return UApiGetAuthenticationInfo::StaticClass();
	}
	struct Z_Construct_UClass_UApiGetAuthenticationInfo_Statics
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
	UObject* (*const Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiGetAuthenticationInfo_GetAuthenticationInfo, "GetAuthenticationInfo" }, // 3978689503
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiGetAuthenticationInfo.h" },
		{ "ModuleRelativePath", "Private/ApiGetAuthenticationInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetAuthenticationInfo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetAuthenticationInfo, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Done_MetaData)) }; // 1488519420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetAuthenticationInfo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetAuthenticationInfo, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetAuthenticationInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Error_MetaData)) }; // 1488519420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiGetAuthenticationInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::ClassParams = {
		&UApiGetAuthenticationInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiGetAuthenticationInfo()
	{
		if (!Z_Registration_Info_UClass_UApiGetAuthenticationInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiGetAuthenticationInfo.OuterSingleton, Z_Construct_UClass_UApiGetAuthenticationInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiGetAuthenticationInfo.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiGetAuthenticationInfo>()
	{
		return UApiGetAuthenticationInfo::StaticClass();
	}
	UApiGetAuthenticationInfo::UApiGetAuthenticationInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiGetAuthenticationInfo);
	UApiGetAuthenticationInfo::~UApiGetAuthenticationInfo() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthenticationInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthenticationInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiGetAuthenticationInfo, UApiGetAuthenticationInfo::StaticClass, TEXT("UApiGetAuthenticationInfo"), &Z_Registration_Info_UClass_UApiGetAuthenticationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiGetAuthenticationInfo), 679359907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthenticationInfo_h_483909715(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthenticationInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetAuthenticationInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
