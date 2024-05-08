// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanoPortaNavesAereas.h"

#include "PortaNavesAereas.generated.h"

UCLASS()
class GALAGAUSFX_LAB06_API APortaNavesAereas : public AActor, public IPlanoPortaNavesAereas
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APortaNavesAereas();
private:
	FString hangar;
	FString recargarMuniciones;
	FString escudoAmericano;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetHangar(FString _hangar) override;
	void SetRecargarMunicioines(FString _recargarMuniciones) override;
	void SetEscudoAmericano(FString _escudoAmericano) override;

	void CaracteristicasPortaNaveAerea();
};
