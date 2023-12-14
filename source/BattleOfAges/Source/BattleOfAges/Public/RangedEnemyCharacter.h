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

	// Resets the location of an existing projectile to the ProjectileSource. Exposed to Blueprint since it's useful to have in both spots.
	UFUNCTION(BlueprintCallable)
	void ResetProjectile(AActor* projectile);

	// Fires an EnemyProjectile from the ProjectileSource component directed along this characters forward.
	void RangedAttackForward();

	// Adds a timer after we've completed a burst of shots. Effectively delays the next salvo.
	void PauseAttacks();

	// Rotates the character 180degrees on the yaw and starts up the shooting logic again.
	void FlipAndResumeAttacks();

	// How many projectiles should this fire per burst?
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Projectile Settings")
	int ProjectilesPerBurst = 1;

	// How long of a delay between each shot in a burst? In seconds.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Projectile Settings")
	float DelayBetweenProjectiles = 0.25;
	
	// How long of a delay between each burst? In seconds.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Projectile Settings")
	float DelayBetweenBursts = 2.5;

	// Which class to use for the projectile. Technically any class could be dropped in here as long as it behaves somewhat like our existing projectiles.
	UPROPERTY(EditDefaultsOnly, Category = "Projectile Settings")
	TSubclassOf<AActor> ProjectileClass;

	// Exposed to Blueprint in case it's useful in the future.
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Projectile Settings")
	int ShotsRemaining;

	// Placeable offset of where to start our projectiles.
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class USceneComponent* ProjectileSource;

	// Array of all of our spawned projectile actors.
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<AActor*> ProjectileList;
private:
	// Member timer handle to keep a reference of our current running timer (if any).
	UPROPERTY()
	FTimerHandle MemberTimerHandle;

	// Spawns projectiles and adds them to the ProjectileList TArray for later use.
	void SetupProjectiles();

	// Resets how many shots we've made and sets up the repeating timer for projectiles.
	void SetupLoopingAttacks();
};

