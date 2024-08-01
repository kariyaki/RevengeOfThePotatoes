// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiCreateClip.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiCreateClip() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCreateClip();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiCreateClip_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKClipInfo();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiCreateClip_Parms
		{
			FTwitchSDKClipInfo Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCreateClip_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKClipInfo, METADATA_PARAMS(nullptr, 0) }; // 1649784404
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiCreateClip_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiCreateClip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiCreateClip__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiCreateClip_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiCreateClip_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiCreateClip, FTwitchSDKClipInfo Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiCreateClip_Parms
	{
		FTwitchSDKClipInfo Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiCreateClip_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiCreateClip.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiCreateClip::execCreateClip)
	{
		P_GET_UBOOL(Z_Param_hasDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiCreateClip**)Z_Param__Result=UApiCreateClip::CreateClip(Z_Param_hasDelay);
		P_NATIVE_END;
	}
	void UApiCreateClip::StaticRegisterNativesUApiCreateClip()
	{
		UClass* Class = UApiCreateClip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateClip", &UApiCreateClip::execCreateClip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics
	{
		struct ApiCreateClip_eventCreateClip_Parms
		{
			bool hasDelay;
			UApiCreateClip* ReturnValue;
		};
		static void NewProp_hasDelay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasDelay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::NewProp_hasDelay_SetBit(void* Obj)
	{
		((ApiCreateClip_eventCreateClip_Parms*)Obj)->hasDelay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::NewProp_hasDelay = { "hasDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ApiCreateClip_eventCreateClip_Parms), &Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::NewProp_hasDelay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiCreateClip_eventCreateClip_Parms, ReturnValue), Z_Construct_UClass_UApiCreateClip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::NewProp_hasDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Creates a clip programmatically. This returns both an ID and an edit URL for the new clip.\n     *\n     * Required scope: clips:edit\n     *\n     * Creating a clip can take up to 15 seconds.\n     *\n     * If hasDelay is false, the clip is captured from the live stream when the API is called; otherwise, a delay is added before the clip is captured (to account for the brief delay between the broadcaster\xe2\x80\x99s stream and the viewer\xe2\x80\x99s experience of that stream).\n     *\n     * @param hasDelay Whether stream delay should be added before capturing the clip.\n     */" },
		{ "ModuleRelativePath", "Private/ApiCreateClip.h" },
		{ "ToolTip", "Creates a clip programmatically. This returns both an ID and an edit URL for the new clip.\n\nRequired scope: clips:edit\n\nCreating a clip can take up to 15 seconds.\n\nIf hasDelay is false, the clip is captured from the live stream when the API is called; otherwise, a delay is added before the clip is captured (to account for the brief delay between the broadcaster\xe2\x80\x99s stream and the viewer\xe2\x80\x99s experience of that stream).\n\n@param hasDelay Whether stream delay should be added before capturing the clip." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiCreateClip, nullptr, "CreateClip", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::ApiCreateClip_eventCreateClip_Parms), Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiCreateClip_CreateClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiCreateClip_CreateClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiCreateClip);
	UClass* Z_Construct_UClass_UApiCreateClip_NoRegister()
	{
		return UApiCreateClip::StaticClass();
	}
	struct Z_Construct_UClass_UApiCreateClip_Statics
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
	UObject* (*const Z_Construct_UClass_UApiCreateClip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiCreateClip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiCreateClip_CreateClip, "CreateClip" }, // 1657345224
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreateClip_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiCreateClip.h" },
		{ "ModuleRelativePath", "Private/ApiCreateClip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCreateClip.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCreateClip, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Done_MetaData)) }; // 803444575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiCreateClip.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiCreateClip, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiCreateClip__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Error_MetaData)) }; // 803444575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiCreateClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiCreateClip_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiCreateClip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiCreateClip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiCreateClip_Statics::ClassParams = {
		&UApiCreateClip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiCreateClip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreateClip_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiCreateClip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiCreateClip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiCreateClip()
	{
		if (!Z_Registration_Info_UClass_UApiCreateClip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiCreateClip.OuterSingleton, Z_Construct_UClass_UApiCreateClip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiCreateClip.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiCreateClip>()
	{
		return UApiCreateClip::StaticClass();
	}
	UApiCreateClip::UApiCreateClip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiCreateClip);
	UApiCreateClip::~UApiCreateClip() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateClip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateClip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiCreateClip, UApiCreateClip::StaticClass, TEXT("UApiCreateClip"), &Z_Registration_Info_UClass_UApiCreateClip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiCreateClip), 2074583263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateClip_h_1178422714(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateClip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiCreateClip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
