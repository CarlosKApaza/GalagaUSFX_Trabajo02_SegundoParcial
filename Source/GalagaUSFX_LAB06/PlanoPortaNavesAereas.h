// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlanoPortaNavesAereas.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlanoPortaNavesAereas : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class GALAGAUSFX_LAB06_API IPlanoPortaNavesAereas
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetHangar(FString hangar) = 0;
	virtual void SetRecargarMunicioines(FString recargarMuniciones) = 0;
	virtual void SetEscudoAmericano(FString escudoAmericano) = 0;
};
