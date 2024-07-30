// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiGetUserInfoById.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiGetUserInfoById() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetUserInfoById();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiGetUserInfoById_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKUserInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiGetUserInfoById_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetUserInfoById_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKUserInfo, METADATA_PARAMS(nullptr, 0) }; // 3138084840
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiGetUserInfoById_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiGetUserInfoById.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiGetUserInfoById__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiGetUserInfoById_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiGetUserInfoById_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiGetUserInfoById, FTwitchSDKUserInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiGetUserInfoById_Parms
	{
		FTwitchSDKUserInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiGetUserInfoById_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiGetUserInfoById.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiGetUserInfoById::execGetUserInfoById)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiGetUserInfoById**)Z_Param__Result=UApiGetUserInfoById::GetUserInfoById(Z_Param_id);
		P_NATIVE_END;
	}
	void UApiGetUserInfoById::StaticRegisterNativesUApiGetUserInfoById()
	{
		UClass* Class = UApiGetUserInfoById::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserInfoById", &UApiGetUserInfoById::execGetUserInfoById },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics
	{
		struct ApiGetUserInfoById_eventGetUserInfoById_Parms
		{
			FString id;
			UApiGetUserInfoById* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetUserInfoById_eventGetUserInfoById_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiGetUserInfoById_eventGetUserInfoById_Parms, ReturnValue), Z_Construct_UClass_UApiGetUserInfoById_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Gets information about a specific Twitch user account.\n     *\n     * Returns an empty object if no such user could be found.\n     *\n     * @param id The account ID to query for.\n     */" },
		{ "ModuleRelativePath", "Private/ApiGetUserInfoById.h" },
		{ "ToolTip", "Gets information about a specific Twitch user account.\n\nReturns an empty object if no such user could be found.\n\n@param id The account ID to query for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiGetUserInfoById, nullptr, "GetUserInfoById", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::ApiGetUserInfoById_eventGetUserInfoById_Parms), Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiGetUserInfoById);
	UClass* Z_Construct_UClass_UApiGetUserInfoById_NoRegister()
	{
		return UApiGetUserInfoById::StaticClass();
	}
	struct Z_Construct_UClass_UApiGetUserInfoById_Statics
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
	UObject* (*const Z_Construct_UClass_UApiGetUserInfoById_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiGetUserInfoById_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiGetUserInfoById_GetUserInfoById, "GetUserInfoById" }, // 2043300913
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetUserInfoById_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiGetUserInfoById.h" },
		{ "ModuleRelativePath", "Private/ApiGetUserInfoById.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetUserInfoById.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetUserInfoById, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Done_MetaData)) }; // 1784112364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiGetUserInfoById.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiGetUserInfoById, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiGetUserInfoById__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Error_MetaData)) }; // 1784112364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiGetUserInfoById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiGetUserInfoById_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiGetUserInfoById_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiGetUserInfoById>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiGetUserInfoById_Statics::ClassParams = {
		&UApiGetUserInfoById::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiGetUserInfoById_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetUserInfoById_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiGetUserInfoById_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiGetUserInfoById_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiGetUserInfoById()
	{
		if (!Z_Registration_Info_UClass_UApiGetUserInfoById.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiGetUserInfoById.OuterSingleton, Z_Construct_UClass_UApiGetUserInfoById_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiGetUserInfoById.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiGetUserInfoById>()
	{
		return UApiGetUserInfoById::StaticClass();
	}
	UApiGetUserInfoById::UApiGetUserInfoById(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiGetUserInfoById);
	UApiGetUserInfoById::~UApiGetUserInfoById() {}
	struct Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoById_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoById_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiGetUserInfoById, UApiGetUserInfoById::StaticClass, TEXT("UApiGetUserInfoById"), &Z_Registration_Info_UClass_UApiGetUserInfoById, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiGetUserInfoById), 596157656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoById_h_3805080288(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoById_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kahau289_Documents_Unreal_Projects_RevengeOfThePotatoes_RevengeOfThePotatoes_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiGetUserInfoById_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
