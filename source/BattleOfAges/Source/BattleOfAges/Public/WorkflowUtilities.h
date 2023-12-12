// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class BATTLEOFAGES_API WorkflowUtilities
{
public:
	WorkflowUtilities();
	~WorkflowUtilities();
    /** Spawns and returns class T, respects default rotation and translation of root component. */
    template< class T >
    T* SpawnActor
    (
        AActor* Owner = NULL,
        APawn* Instigator = NULL,
        bool bNoCollisionFail = false
    )
    {
        return (T*)(GetWorld()->SpawnActor(T::StaticClass(), NAME_None, NULL, NULL, NULL, bNoCollisionFail, false, Owner, Instigator));
    }
};
