// Fill out your copyright notice in the Description page of Project Settings.


#include "RangedEnemyCharacter.h"

// Sets default values
ARangedEnemyCharacter::ARangedEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SetupProjectiles();
}

// Called when the game starts or when spawned
void ARangedEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARangedEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARangedEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Fires an EnemyProjectile from the ProjectileSource component directed along this characters forward.
bool ARangedEnemyCharacter::RangedAttackForward()
{
	return false;
}

void ARangedEnemyCharacter::SetupProjectiles()
{
	// Initialize our projectile list
	ProjectileList.Init(0, ProjectilesPerBurst);

	for (int i = 0; i < ProjectilesPerBurst; i++)
	{
		WorkflowUtilities::SpawnActor(EnemyProjectile, NAME_None, &Location);
	}
}

