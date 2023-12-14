// Fill out your copyright notice in the Description page of Project Settings.


#include "RangedEnemyCharacter.h"

// Sets default values
ARangedEnemyCharacter::ARangedEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileSource = CreateDefaultSubobject<USceneComponent>(FName("ProjectileSource"));
	ProjectileSource->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ARangedEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	SetupProjectiles();
	SetupLoopingAttacks();
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

void ARangedEnemyCharacter::ResetProjectile(AActor* projectile)
{
	projectile->SetActorRelativeLocation(ProjectileSource->GetRelativeLocation());
	projectile->SetActorHiddenInGame(true);
	UProjectileMovementComponent* projectileMovement = projectile->GetComponentByClass<UProjectileMovementComponent>();
	projectileMovement->SetVelocityInLocalSpace(FVector(0, 0, 0));
}

// Fires an EnemyProjectile from the ProjectileSource component directed along this characters forward.
void ARangedEnemyCharacter::RangedAttackForward()
{
	ShotsRemaining--;
	if (ShotsRemaining < 0)
	{
		GetWorldTimerManager().ClearTimer(MemberTimerHandle);
		PauseAttacks();
	}
	else
	{
		AActor* projectile = ProjectileList[ShotsRemaining];
		ResetProjectile(projectile);
		projectile->SetActorHiddenInGame(false);
		UProjectileMovementComponent* projectileMovement = projectile->GetComponentByClass<UProjectileMovementComponent>();
		FVector newVelocity = FVector(1.0, 0.0, 0.0) * projectileMovement->InitialSpeed;
		projectileMovement->SetVelocityInLocalSpace(newVelocity);
	}
}

void ARangedEnemyCharacter::PauseAttacks()
{
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ARangedEnemyCharacter::FlipAndResumeAttacks, DelayBetweenBursts, false);
}

void ARangedEnemyCharacter::FlipAndResumeAttacks()
{
	AddActorLocalRotation(FRotator(0.0, 180.0, 0.0));
	SetupLoopingAttacks();
}

void ARangedEnemyCharacter::SetupProjectiles()
{
	for (int i = 0; i < ProjectilesPerBurst; i++)
	{
		FVector Location = GetActorLocation();
		FRotator Rotation(0.0f, 0.0f, 0.0f);
		FActorSpawnParameters SpawnInfo;
		//AEnemyProjectile* projectile = (AEnemyProjectile*) GetWorld()->SpawnActor<AEnemyProjectile>(ProjectileClass.Get(), Location, Rotation, SpawnInfo);
		AActor* projectile = GetWorld()->SpawnActor<AActor>(ProjectileClass.Get(), Location, Rotation, SpawnInfo);
		projectile->SetActorLocation(GetActorLocation());
		projectile->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

		ProjectileList.Add(projectile);
	}
}



void ARangedEnemyCharacter::SetupLoopingAttacks()
{
	ShotsRemaining = ProjectilesPerBurst;
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ARangedEnemyCharacter::RangedAttackForward, DelayBetweenProjectiles, true, 0.0);
}

