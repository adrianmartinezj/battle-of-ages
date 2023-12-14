// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyProjectile.h"
#include "Engine/TimerHandle.h"
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

	UFUNCTION(BlueprintCallable)
	void ResetProjectile(AActor* projectile);

	// Fires an EnemyProjectile from the ProjectileSource component directed along this characters forward.
	void RangedAttackForward();

	void PauseAttacks();

	void FlipAndResumeAttacks();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Projectile Settings")
	int ProjectilesPerBurst = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Projectile Settings")
	float DelayBetweenProjectiles = 0.25;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Projectile Settings")
	float DelayBetweenBursts = 2.5;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile Settings")
	TSubclassOf<AActor> ProjectileClass;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Projectile Settings")
	int ShotsRemaining;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class USceneComponent* ProjectileSource;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<AActor*> ProjectileList;
private:
	UPROPERTY()
	FTimerHandle MemberTimerHandle;

	void SetupProjectiles();

	void SetupLoopingAttacks();
};

