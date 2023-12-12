// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyProjectile.h"
#include "RangedEnemyCharacter.generated.h"

UCLASS()
class BATTLEOFAGES_API ARangedEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARangedEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Fires an EnemyProjectile from the ProjectileSource component directed along this characters forward.
	bool RangedAttackForward();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Projectile Settings")
	int ProjectilesPerBurst = 3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Projectile Settings")
	float DelayBetweenProjectiles = 0.25;

private:
	UPROPERTY(EditAnywhere)
	TArray<AActor*> ProjectileList;

	void SetupProjectiles();

};

