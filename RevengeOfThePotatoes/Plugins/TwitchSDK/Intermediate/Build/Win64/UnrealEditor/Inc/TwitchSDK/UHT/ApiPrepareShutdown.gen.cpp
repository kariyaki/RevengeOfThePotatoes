// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiPrepareShutdown.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiPrepareShutdown() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiPrepareShutdown();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiPrepareShutdown_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiPrepareShutdown_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiPrepareShutdown_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiPrepareShutdown.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiPrepareShutdown__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiPrepareShutdown_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiPrepareShutdown_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiPrepareShutdown, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiPrepareShutdown_Parms
	{
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiPrepareShutdown_Parms Parms;
	Parms.Error=Error;
	AsyncDoneApiPrepareShutdown.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiPrepareShutdown::execPrepareShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiPrepareShutdown**)Z_Param__Result=UApiPrepareShutdown::PrepareShutdown();
		P_NATIVE_END;
	}
	void UApiPrepareShutdown::StaticRegisterNativesUApiPrepareShutdown()
	{
		UClass* Class = UApiPrepareShutdown::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrepareShutdown", &UApiPrepareShutdown::execPrepareShutdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics
	{
		struct ApiPrepareShutdown_eventPrepareShutdown_Parms
		{
			UApiPrepareShutdown* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiPrepareShutdown_eventPrepareShutdown_Parms, ReturnValue), Z_Construct_UClass_UApiPrepareShutdown_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Prepare for shutdown.\n     *\n     * You should invoke this function and wait for it to return before exiting from your game process. This function resets state associated with your session such as available channel points rewards.\n     *\n     */" },
		{ "ModuleRelativePath", "Private/ApiPrepareShutdown.h" },
		{ "ToolTip", "Prepare for shutdown.\n\nYou should invoke this function and wait for it to return before exiting from your game process. This function resets state associated with your session such as available channel points rewards." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiPrepareShutdown, nullptr, "PrepareShutdown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::ApiPrepareShutdown_eventPrepareShutdown_Parms), Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiPrepareShutdown);
	UClass* Z_Construct_UClass_UApiPrepareShutdown_NoRegister()
	{
		return UApiPrepareShutdown::StaticClass();
	}
	struct Z_Construct_UClass_UApiPrepareShutdown_Statics
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
	UObject* (*const Z_Construct_UClass_UApiPrepareShutdown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiPrepareShutdown_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiPrepareShutdown_PrepareShutdown, "PrepareShutdown" }, // 2987835615
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiPrepareShutdown_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiPrepareShutdown.h" },
		{ "ModuleRelativePath", "Private/ApiPrepareShutdown.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiPrepareShutdown.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiPrepareShutdown, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Done_MetaData)) }; // 1643613605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiPrepareShutdown.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiPrepareShutdown, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiPrepareShutdown__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Error_MetaData)) }; // 1643613605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiPrepareShutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiPrepareShutdown_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiPrepareShutdown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiPrepareShutdown>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiPrepareShutdown_Statics::ClassParams = {
		&UApiPrepareShutdown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiPrepareShutdown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiPrepareShutdown_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiPrepareShutdown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiPrepareShutdown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiPrepareShutdown()
	{
		if (!Z_Registration_Info_UClass_UApiPrepareShutdown.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiPrepareShutdown.OuterSingleton, Z_Construct_UClass_UApiPrepareShutdown_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiPrepareShutdown.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiPrepareShutdown>()
	{
		return UApiPrepareShutdown::StaticClass();
	}
	UApiPrepareShutdown::UApiPrepareShutdown(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiPrepareShutdown);
	UApiPrepareShutdown::~UApiPrepareShutdown() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiPrepareShutdown_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiPrepareShutdown_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiPrepareShutdown, UApiPrepareShutdown::StaticClass, TEXT("UApiPrepareShutdown"), &Z_Registration_Info_UClass_UApiPrepareShutdown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiPrepareShutdown), 1489218014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiPrepareShutdown_h_584067443(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiPrepareShutdown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiPrepareShutdown_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
