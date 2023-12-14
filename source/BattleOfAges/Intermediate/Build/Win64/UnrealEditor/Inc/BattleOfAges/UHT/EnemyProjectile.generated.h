// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEOFAGES_EnemyProjectile_generated_h
#error "EnemyProjectile.generated.h already included, missing '#pragma once' in EnemyProjectile.h"
#endif
#define BATTLEOFAGES_EnemyProjectile_generated_h

#define FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_SPARSE_DATA
#define FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartProjectile); \
	DECLARE_FUNCTION(execStopProjectile); \
	DECLARE_FUNCTION(execRevealProjectile); \
	DECLARE_FUNCTION(execHideProjectile); \
	DECLARE_FUNCTION(execResetProjectile);


#define FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_ACCESSORS
#define FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyProjectile(); \
	friend struct Z_Construct_UClass_AEnemyProjectile_Statics; \
public: \
	DECLARE_CLASS(AEnemyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleOfAges"), NO_API) \
	DECLARE_SERIALIZER(AEnemyProjectile)


#define FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyProjectile(AEnemyProjectile&&); \
	NO_API AEnemyProjectile(const AEnemyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyProjectile) \
	NO_API virtual ~AEnemyProjectile();


#define FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_13_PROLOG
#define FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_SPARSE_DATA \
	FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_ACCESSORS \
	FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_INCLASS_NO_PURE_DECLS \
	FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEOFAGES_API UClass* StaticClass<class AEnemyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_battle_of_ages_source_BattleOfAges_Source_BattleOfAges_Public_EnemyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
