// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleOfAges/Public/RangedEnemyCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangedEnemyCharacter() {}
// Cross Module References
	BATTLEOFAGES_API UClass* Z_Construct_UClass_ARangedEnemyCharacter();
	BATTLEOFAGES_API UClass* Z_Construct_UClass_ARangedEnemyCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	UPackage* Z_Construct_UPackage__Script_BattleOfAges();
// End Cross Module References
	DEFINE_FUNCTION(ARangedEnemyCharacter::execResetProjectile)
	{
		P_GET_OBJECT(AActor,Z_Param_projectile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetProjectile(Z_Param_projectile);
		P_NATIVE_END;
	}
	void ARangedEnemyCharacter::StaticRegisterNativesARangedEnemyCharacter()
	{
		UClass* Class = ARangedEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetProjectile", &ARangedEnemyCharacter::execResetProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics
	{
		struct RangedEnemyCharacter_eventResetProjectile_Parms
		{
			AActor* projectile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RangedEnemyCharacter_eventResetProjectile_Parms, projectile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::NewProp_projectile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARangedEnemyCharacter, nullptr, "ResetProjectile", nullptr, nullptr, Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::RangedEnemyCharacter_eventResetProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::RangedEnemyCharacter_eventResetProjectile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARangedEnemyCharacter);
	UClass* Z_Construct_UClass_ARangedEnemyCharacter_NoRegister()
	{
		return ARangedEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARangedEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilesPerBurst_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProjectilesPerBurst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayBetweenProjectiles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBetweenProjectiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayBetweenBursts_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBetweenBursts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotsRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotsRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileSource;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectileList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangedEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleOfAges,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARangedEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARangedEnemyCharacter_ResetProjectile, "ResetProjectile" }, // 4115277183
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RangedEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst_MetaData[] = {
		{ "Category", "Projectile Settings" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst = { "ProjectilesPerBurst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangedEnemyCharacter, ProjectilesPerBurst), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst_MetaData), Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenProjectiles_MetaData[] = {
		{ "Category", "Projectile Settings" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenProjectiles = { "DelayBetweenProjectiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangedEnemyCharacter, DelayBetweenProjectiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenProjectiles_MetaData), Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenProjectiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenBursts_MetaData[] = {
		{ "Category", "Projectile Settings" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenBursts = { "DelayBetweenBursts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangedEnemyCharacter, DelayBetweenBursts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenBursts_MetaData), Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenBursts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile Settings" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangedEnemyCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ShotsRemaining_MetaData[] = {
		{ "Category", "Projectile Settings" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ShotsRemaining = { "ShotsRemaining", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangedEnemyCharacter, ShotsRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ShotsRemaining_MetaData), Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ShotsRemaining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileSource_MetaData[] = {
		{ "Category", "RangedEnemyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileSource = { "ProjectileSource", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangedEnemyCharacter, ProjectileSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileSource_MetaData), Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileSource_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileList_Inner = { "ProjectileList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileList_MetaData[] = {
		{ "Category", "RangedEnemyCharacter" },
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileList = { "ProjectileList", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangedEnemyCharacter, ProjectileList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileList_MetaData), Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_MemberTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/RangedEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_MemberTimerHandle = { "MemberTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangedEnemyCharacter, MemberTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_MemberTimerHandle_MetaData), Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_MemberTimerHandle_MetaData) }; // 3999327403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARangedEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectilesPerBurst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenProjectiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_DelayBetweenBursts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ShotsRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_ProjectileList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedEnemyCharacter_Statics::NewProp_MemberTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangedEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangedEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARangedEnemyCharacter_Statics::ClassParams = {
		&ARangedEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARangedEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARangedEnemyCharacter, ARangedEnemyCharacter::StaticClass, TEXT("ARangedEnemyCharacter"), &Z_Registration_Info_UClass_ARangedEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARangedEnemyCharacter), 2794604109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_659647766(TEXT("/Script/BattleOfAges"),
		Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_RangedEnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
