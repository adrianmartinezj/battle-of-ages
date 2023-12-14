// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile.h"

// Sets default values
AEnemyProjectile::AEnemyProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(FName("ProjectileMovement"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("StaticMesh"));
	StaticMesh->SetupAttachment(GetRootComponent());
	SphereCollision = CreateDefaultSubobject<USphereComponent>(FName("SphereCollision"));
	SphereCollision->SetupAttachment(StaticMesh);

	SetRootComponent(StaticMesh);
}

// Called when the game starts or when spawned
void AEnemyProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyProjectile::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);
}

void AEnemyProjectile::ResetProjectile()
{
	StopProjectile();
	SetActorLocation(ProjectileOwner->GetActorLocation());
	SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), (ProjectileOwner->GetActorLocation() + ProjectileOwner->GetActorForwardVector())));
	HideProjectile();
}

void AEnemyProjectile::HideProjectile()
{
	SetActorHiddenInGame(true);
}

void AEnemyProjectile::RevealProjectile()
{
	SetActorHiddenInGame(false);
}

void AEnemyProjectile::StopProjectile()
{
	ProjectileMovement->SetActive(false);
}

void AEnemyProjectile::StartProjectile()
{
	RevealProjectile();
	ProjectileMovement->SetActive(true);
	ProjectileMovement->Velocity = ProjectileOwner->GetActorForwardVector() * ProjectileMovement->InitialSpeed;
}

