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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BattleOfAges();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyProjectile::execStartProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyProjectile::execStopProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyProjectile::execRevealProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RevealProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyProjectile::execHideProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyProjectile::execResetProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetProjectile();
		P_NATIVE_END;
	}
	void AEnemyProjectile::StaticRegisterNativesAEnemyProjectile()
	{
		UClass* Class = AEnemyProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideProjectile", &AEnemyProjectile::execHideProjectile },
			{ "ResetProjectile", &AEnemyProjectile::execResetProjectile },
			{ "RevealProjectile", &AEnemyProjectile::execRevealProjectile },
			{ "StartProjectile", &AEnemyProjectile::execStartProjectile },
			{ "StopProjectile", &AEnemyProjectile::execStopProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyProjectile_HideProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyProjectile_HideProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyProjectile_HideProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyProjectile, nullptr, "HideProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_HideProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyProjectile_HideProjectile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyProjectile_HideProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyProjectile_HideProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyProjectile_ResetProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyProjectile_ResetProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyProjectile_ResetProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyProjectile, nullptr, "ResetProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_ResetProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyProjectile_ResetProjectile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyProjectile_ResetProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyProjectile_ResetProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyProjectile_RevealProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyProjectile_RevealProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyProjectile_RevealProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyProjectile, nullptr, "RevealProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_RevealProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyProjectile_RevealProjectile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyProjectile_RevealProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyProjectile_RevealProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyProjectile_StartProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyProjectile_StartProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyProjectile_StartProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyProjectile, nullptr, "StartProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_StartProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyProjectile_StartProjectile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyProjectile_StartProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyProjectile_StartProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyProjectile_StopProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyProjectile_StopProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyProjectile_StopProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyProjectile, nullptr, "StopProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_StopProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyProjectile_StopProjectile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyProjectile_StopProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyProjectile_StopProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyProjectile);
	UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister()
	{
		return AEnemyProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleOfAges,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyProjectile_HideProjectile, "HideProjectile" }, // 1296149965
		{ &Z_Construct_UFunction_AEnemyProjectile_ResetProjectile, "ResetProjectile" }, // 3151661775
		{ &Z_Construct_UFunction_AEnemyProjectile_RevealProjectile, "RevealProjectile" }, // 1774892707
		{ &Z_Construct_UFunction_AEnemyProjectile_StartProjectile, "StartProjectile" }, // 2314764441
		{ &Z_Construct_UFunction_AEnemyProjectile_StopProjectile, "StopProjectile" }, // 1417438069
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyProjectile.h" },
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "EnemyProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileMovement_MetaData), Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "Category", "EnemyProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyProjectile, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SphereCollision_MetaData), Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SphereCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "EnemyProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyProjectile, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileOwner_MetaData[] = {
		{ "Category", "EnemyProjectile" },
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileOwner = { "ProjectileOwner", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyProjectile, ProjectileOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileOwner_MetaData), Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SourceOffset_MetaData[] = {
		{ "Category", "EnemyProjectile" },
		{ "ModuleRelativePath", "Public/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SourceOffset = { "SourceOffset", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyProjectile, SourceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SourceOffset_MetaData), Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SourceOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SphereCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_ProjectileOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_SourceOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyProjectile_Statics::ClassParams = {
		&AEnemyProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyProjectile, AEnemyProjectile::StaticClass, TEXT("AEnemyProjectile"), &Z_Registration_Info_UClass_AEnemyProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyProjectile), 478957957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_516754375(TEXT("/Script/BattleOfAges"),
		Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
