// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GalagaUSFX_LAB06GameMode.generated.h"

class ANaveEnemiga; //Forward Declaration

UCLASS(MinimalAPI)
class AGalagaUSFX_LAB06GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalagaUSFX_LAB06GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas; //Array de Naves Enemigas

	int ClaveNaves = 0; // clave para las naves enemigas
	//int Puntaje; //Puntaje del jugador

UPROPERTY()
	TMap<ANaveEnemiga*, int> TMClavesNavesEnemigas; //Mapa de Naves Enemigas
	TMap<ANaveEnemiga*, FVector> TMNavesEnemigas; //Mapa de Naves Enemigas

public:

	FTimerHandle FTHMostrarClaves;


	FTimerHandle FTHEliminarEnemigosAleatorios;
	FTimerHandle FTHCrearEnemigosAleatorios;

	void MostrarClavesNaves(); //Funcion para mostrar las claves de las naves
	void OcultarClavesNaves(); //Funcion para ocultar las claves de las naves


	void CrearEnemigosAleatoriamente(TArray<FString> TiposNaves, FVector PosicionInicial, float EspacioEntreNavesY, int CantidadNaves); //Funcion para crear enemigos aleatoriamente
	void CrearEnemigos(); //Funcion para crear enemigos de un tipo especifico

	//void Score(); //Funcion para mostrar el score
};



