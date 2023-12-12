// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleOfAges/Public/RangedEnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangedEnemyCharacter() {}
// Cross Module References
	BATTLEOFAGES_API UClass* Z_Construct_UClass_ARangedEnemyCharacter();
	BATTLEOFAGES_API UClass* Z_Construct_UClass_ARangedEnemyCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BattleOfAges();
// End Cross Module References
	void ARangedEnemyCharacter::StaticRegisterNativesARangedEnemyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARangedEnemyCharacter);
	UClass* Z_Construct_UClass_ARangedEnemyCharacter_NoRegister()
	{
		return ARangedEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARangedEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilesPerBurst_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectilesPerBurst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangedEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleOfAges,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RangedEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst_MetaData[] = {
		{ "Category", "RangedEnemyCharacter" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst = { "ProjectilesPerBurst", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangedEnemyCharacter, ProjectilesPerBurst), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst_MetaData), Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARangedEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangedEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangedEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::ClassParams = {
		&ARangedEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARangedEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARangedEnemyCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARangedEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_ARangedEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARangedEnemyCharacter.OuterSingleton, Z_Construct_UClass_ARangedEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARangedEnemyCharacter.OuterSingleton;
	}
	template<> BATTLEOFAGES_API UClass* StaticClass<ARangedEnemyCharacter>()
	{
		return ARangedEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARangedEnemyCharacter);
	ARangedEnemyCharacter::~ARangedEnemyCharacter() {}
	struct Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARangedEnemyCharacter, ARangedEnemyCharacter::StaticClass, TEXT("ARangedEnemyCharacter"), &Z_Registration_Info_UClass_ARangedEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARangedEnemyCharacter), 1725020405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_2985695085(TEXT("/Script/BattleOfAges"),
		Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
