// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiLogOut.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiLogOut() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiLogOut();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiLogOut_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiLogOut_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiLogOut_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiLogOut.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiLogOut__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiLogOut_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiLogOut_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiLogOut, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiLogOut_Parms
	{
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiLogOut_Parms Parms;
	Parms.Error=Error;
	AsyncDoneApiLogOut.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiLogOut::execLogOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiLogOut**)Z_Param__Result=UApiLogOut::LogOut();
		P_NATIVE_END;
	}
	void UApiLogOut::StaticRegisterNativesUApiLogOut()
	{
		UClass* Class = UApiLogOut::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogOut", &UApiLogOut::execLogOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiLogOut_LogOut_Statics
	{
		struct ApiLogOut_eventLogOut_Parms
		{
			UApiLogOut* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiLogOut_LogOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiLogOut_eventLogOut_Parms, ReturnValue), Z_Construct_UClass_UApiLogOut_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiLogOut_LogOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiLogOut_LogOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiLogOut_LogOut_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Log out.\n     *\n     * This call always returns immediately.\n     *\n     */" },
		{ "ModuleRelativePath", "Private/ApiLogOut.h" },
		{ "ToolTip", "Log out.\n\nThis call always returns immediately." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiLogOut_LogOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiLogOut, nullptr, "LogOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiLogOut_LogOut_Statics::ApiLogOut_eventLogOut_Parms), Z_Construct_UFunction_UApiLogOut_LogOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiLogOut_LogOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiLogOut_LogOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiLogOut_LogOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiLogOut_LogOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiLogOut_LogOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiLogOut);
	UClass* Z_Construct_UClass_UApiLogOut_NoRegister()
	{
		return UApiLogOut::StaticClass();
	}
	struct Z_Construct_UClass_UApiLogOut_Statics
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
	UObject* (*const Z_Construct_UClass_UApiLogOut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiLogOut_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiLogOut_LogOut, "LogOut" }, // 3593149506
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiLogOut_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiLogOut.h" },
		{ "ModuleRelativePath", "Private/ApiLogOut.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiLogOut_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiLogOut.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiLogOut_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiLogOut, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiLogOut_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiLogOut_Statics::NewProp_Done_MetaData)) }; // 2452580566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiLogOut_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiLogOut.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiLogOut_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiLogOut, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiLogOut__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiLogOut_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiLogOut_Statics::NewProp_Error_MetaData)) }; // 2452580566
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiLogOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiLogOut_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiLogOut_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiLogOut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiLogOut>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiLogOut_Statics::ClassParams = {
		&UApiLogOut::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiLogOut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiLogOut_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiLogOut_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiLogOut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiLogOut()
	{
		if (!Z_Registration_Info_UClass_UApiLogOut.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiLogOut.OuterSingleton, Z_Construct_UClass_UApiLogOut_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiLogOut.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiLogOut>()
	{
		return UApiLogOut::StaticClass();
	}
	UApiLogOut::UApiLogOut(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiLogOut);
	UApiLogOut::~UApiLogOut() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiLogOut_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiLogOut_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiLogOut, UApiLogOut::StaticClass, TEXT("UApiLogOut"), &Z_Registration_Info_UClass_UApiLogOut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiLogOut), 2003342535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiLogOut_h_1709983280(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiLogOut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiLogOut_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
