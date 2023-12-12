// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
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

	UPROPERTY(EditAnywhere)
	int ProjectilesPerBurst = 3;

private:
	TArray<AActor*> ProjectileList;

	void SetupProjectiles();

};

