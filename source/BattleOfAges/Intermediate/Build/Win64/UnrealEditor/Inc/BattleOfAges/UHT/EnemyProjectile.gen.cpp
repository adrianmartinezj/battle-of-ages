// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleOfAges/Public/EnemyProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectile() {}
// Cross Module References
	BATTLEOFAGES_API UClass* Z_Construct_UClass_AEnemyProjectile();
	BATTLEOFAGES_API UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BattleOfAges();
// End Cross Module References
	void AEnemyProjectile::StaticRegisterNativesAEnemyProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyProjectile);
	UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister()
	{
		return AEnemyProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleOfAges,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyProjectile.h" },
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyProjectile_Statics::ClassParams = {
		&AEnemyProjectile::StaticClass,
		"Engine",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnemyProjectile()
	{
		if (!Z_Registration_Info_UClass_AEnemyProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyProjectile.OuterSingleton, Z_Construct_UClass_AEnemyProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyProjectile.OuterSingleton;
	}
	template<> BATTLEOFAGES_API UClass* StaticClass<AEnemyProjectile>()
	{
		return AEnemyProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyProjectile);
	AEnemyProjectile::~AEnemyProjectile() {}
	struct Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyProjectile, AEnemyProjectile::StaticClass, TEXT("AEnemyProjectile"), &Z_Registration_Info_UClass_AEnemyProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyProjectile), 4270226213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_1858231772(TEXT("/Script/BattleOfAges"),
		Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
