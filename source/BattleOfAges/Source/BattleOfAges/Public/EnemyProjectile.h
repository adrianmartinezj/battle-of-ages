// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "EnemyProjectile.generated.h"

UCLASS()
class BATTLEOFAGES_API AEnemyProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class USphereComponent* SphereCollision;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UStaticMeshComponent* StaticMesh;

	UFUNCTION(BlueprintCallable)
	void ResetProjectile();

	UFUNCTION(BlueprintCallable)
	void HideProjectile();

	UFUNCTION(BlueprintCallable)
	void RevealProjectile();

	UFUNCTION(BlueprintCallable)
	void StopProjectile();

	UFUNCTION(BlueprintCallable)
	void StartProjectile();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	AActor* ProjectileOwner;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	FVector SourceOffset;

private:
	bool bShouldTrackSourceLocationRotation = false;
};

