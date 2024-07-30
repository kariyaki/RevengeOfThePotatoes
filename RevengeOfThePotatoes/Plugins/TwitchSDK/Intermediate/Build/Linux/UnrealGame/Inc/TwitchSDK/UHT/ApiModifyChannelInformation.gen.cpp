// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiModifyChannelInformation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiModifyChannelInformation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiModifyChannelInformation();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiModifyChannelInformation_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiModifyChannelInformation_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiModifyChannelInformation_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiModifyChannelInformation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiModifyChannelInformation__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiModifyChannelInformation_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiModifyChannelInformation_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiModifyChannelInformation, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiModifyChannelInformation_Parms
	{
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiModifyChannelInformation_Parms Parms;
	Parms.Error=Error;
	AsyncDoneApiModifyChannelInformation.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiModifyChannelInformation::execModifyChannelInformation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_gameId);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_GET_PROPERTY(FStrProperty,Z_Param_title);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_TARRAY(FString,Z_Param_tags);
		P_GET_UBOOL(Z_Param_forceUpdateTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiModifyChannelInformation**)Z_Param__Result=UApiModifyChannelInformation::ModifyChannelInformation(Z_Param_gameId,Z_Param_language,Z_Param_title,Z_Param_delay,Z_Param_tags,Z_Param_forceUpdateTags);
		P_NATIVE_END;
	}
	void UApiModifyChannelInformation::StaticRegisterNativesUApiModifyChannelInformation()
	{
		UClass* Class = UApiModifyChannelInformation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyChannelInformation", &UApiModifyChannelInformation::execModifyChannelInformation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics
	{
		struct ApiModifyChannelInformation_eventModifyChannelInformation_Parms
		{
			FString gameId;
			FString language;
			FString title;
			int32 delay;
			TArray<FString> tags;
			bool forceUpdateTags;
			UApiModifyChannelInformation* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_gameId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_language;
		static const UECodeGen_Private::FStrPropertyParams NewProp_title;
		static const UECodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tags;
		static void NewProp_forceUpdateTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceUpdateTags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_gameId = { "gameId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiModifyChannelInformation_eventModifyChannelInformation_Parms, gameId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiModifyChannelInformation_eventModifyChannelInformation_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiModifyChannelInformation_eventModifyChannelInformation_Parms, title), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiModifyChannelInformation_eventModifyChannelInformation_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_tags_Inner = { "tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiModifyChannelInformation_eventModifyChannelInformation_Parms, tags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_forceUpdateTags_SetBit(void* Obj)
	{
		((ApiModifyChannelInformation_eventModifyChannelInformation_Parms*)Obj)->forceUpdateTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_forceUpdateTags = { "forceUpdateTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ApiModifyChannelInformation_eventModifyChannelInformation_Parms), &Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_forceUpdateTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiModifyChannelInformation_eventModifyChannelInformation_Parms, ReturnValue), Z_Construct_UClass_UApiModifyChannelInformation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_gameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_forceUpdateTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * Modifies channel information for the currently logged-in user.\n     *\n     * Required scope: channel:manage:broadcast\n     *\n     * @param gameId The current game ID being played on the channel. Use \xe2\x80\x9c""0\xe2\x80\x9d to unset the game.\n     * @param language The language of the channel. A language value must be either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d.\n     * @param title The title of the stream.\n     * @param delay Stream delay in seconds. Stream delay is a Twitch Partner feature; trying to set this value for other account types will return a 400 error.\n     * @param tags A list of channel-defined tags to apply to the channel. Tags help identify the content that the channel streams.\n     * @param forceUpdateTags If ModifyChannelInfoRequest::Tags is missing or empty, channel tags will not be altered by default (if ModifyChannelInfoRequest::ForceUpdateTags is false). If ModifyChannelInfoRequest::ForceUpdateTags is true, passing an empty (or missing) array ModifyChannelInfoRequest::Tags causes all tags to be removed from the channel.\n     */" },
		{ "ModuleRelativePath", "Private/ApiModifyChannelInformation.h" },
		{ "ToolTip", "Modifies channel information for the currently logged-in user.\n\nRequired scope: channel:manage:broadcast\n\n@param gameId The current game ID being played on the channel. Use \xe2\x80\x9c""0\xe2\x80\x9d to unset the game.\n@param language The language of the channel. A language value must be either the ISO 639-1 two-letter code for a supported stream language or \xe2\x80\x9cother\xe2\x80\x9d.\n@param title The title of the stream.\n@param delay Stream delay in seconds. Stream delay is a Twitch Partner feature; trying to set this value for other account types will return a 400 error.\n@param tags A list of channel-defined tags to apply to the channel. Tags help identify the content that the channel streams.\n@param forceUpdateTags If ModifyChannelInfoRequest::Tags is missing or empty, channel tags will not be altered by default (if ModifyChannelInfoRequest::ForceUpdateTags is false). If ModifyChannelInfoRequest::ForceUpdateTags is true, passing an empty (or missing) array ModifyChannelInfoRequest::Tags causes all tags to be removed from the channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiModifyChannelInformation, nullptr, "ModifyChannelInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::ApiModifyChannelInformation_eventModifyChannelInformation_Parms), Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiModifyChannelInformation);
	UClass* Z_Construct_UClass_UApiModifyChannelInformation_NoRegister()
	{
		return UApiModifyChannelInformation::StaticClass();
	}
	struct Z_Construct_UClass_UApiModifyChannelInformation_Statics
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
	UObject* (*const Z_Construct_UClass_UApiModifyChannelInformation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiModifyChannelInformation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiModifyChannelInformation_ModifyChannelInformation, "ModifyChannelInformation" }, // 455964371
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiModifyChannelInformation_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiModifyChannelInformation.h" },
		{ "ModuleRelativePath", "Private/ApiModifyChannelInformation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiModifyChannelInformation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiModifyChannelInformation, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Done_MetaData)) }; // 2289566843
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiModifyChannelInformation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiModifyChannelInformation, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiModifyChannelInformation__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Error_MetaData)) }; // 2289566843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiModifyChannelInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiModifyChannelInformation_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiModifyChannelInformation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiModifyChannelInformation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiModifyChannelInformation_Statics::ClassParams = {
		&UApiModifyChannelInformation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiModifyChannelInformation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiModifyChannelInformation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiModifyChannelInformation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiModifyChannelInformation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiModifyChannelInformation()
	{
		if (!Z_Registration_Info_UClass_UApiModifyChannelInformation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiModifyChannelInformation.OuterSingleton, Z_Construct_UClass_UApiModifyChannelInformation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiModifyChannelInformation.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiModifyChannelInformation>()
	{
		return UApiModifyChannelInformation::StaticClass();
	}
	UApiModifyChannelInformation::UApiModifyChannelInformation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiModifyChannelInformation);
	UApiModifyChannelInformation::~UApiModifyChannelInformation() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiModifyChannelInformation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiModifyChannelInformation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiModifyChannelInformation, UApiModifyChannelInformation::StaticClass, TEXT("UApiModifyChannelInformation"), &Z_Registration_Info_UClass_UApiModifyChannelInformation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiModifyChannelInformation), 30902945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiModifyChannelInformation_h_3760042404(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiModifyChannelInformation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiModifyChannelInformation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
