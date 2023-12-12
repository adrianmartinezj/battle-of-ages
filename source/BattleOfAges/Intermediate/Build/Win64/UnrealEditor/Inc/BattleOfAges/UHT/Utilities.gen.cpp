// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleOfAges/Utilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilities() {}
// Cross Module References
	BATTLEOFAGES_API UClass* Z_Construct_UClass_AUtilities();
	BATTLEOFAGES_API UClass* Z_Construct_UClass_AUtilities_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BattleOfAges();
// End Cross Module References
	void AUtilities::StaticRegisterNativesAUtilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUtilities);
	UClass* Z_Construct_UClass_AUtilities_NoRegister()
	{
		return AUtilities::StaticClass();
	}
	struct Z_Construct_UClass_AUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleOfAges,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUtilities_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUtilities_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Utilities.h" },
		{ "ModuleRelativePath", "Utilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUtilities_Statics::ClassParams = {
		&AUtilities::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_AUtilities_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUtilities()
	{
		if (!Z_Registration_Info_UClass_AUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUtilities.OuterSingleton, Z_Construct_UClass_AUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUtilities.OuterSingleton;
	}
	template<> BATTLEOFAGES_API UClass* StaticClass<AUtilities>()
	{
		return AUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUtilities);
	AUtilities::~AUtilities() {}
	struct Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Utilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Utilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUtilities, AUtilities::StaticClass, TEXT("AUtilities"), &Z_Registration_Info_UClass_AUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUtilities), 2695596831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Utilities_h_3903462166(TEXT("/Script/BattleOfAges"),
		Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Utilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Utilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
