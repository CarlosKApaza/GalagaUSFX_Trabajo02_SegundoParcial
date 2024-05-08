// Fill out your copyright notice in the Description page of Project Settings.


#include "PortaNavesAereas.h"

// Sets default values
APortaNavesAereas::APortaNavesAereas()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APortaNavesAereas::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APortaNavesAereas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APortaNavesAereas::SetHangar(FString _hangar)
{
	hangar = _hangar;
}

void APortaNavesAereas::SetRecargarMunicioines(FString _recargarMuniciones)
{
	recargarMuniciones = _recargarMuniciones;
}

void APortaNavesAereas::SetEscudoAmericano(FString _escudoAmericano)
{
	escudoAmericano = _escudoAmericano;
}

void APortaNavesAereas::CaracteristicasPortaNaveAerea()
{
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Yellow, FString::Printf(TEXT("Se creo el Hangar %s"), *hangar));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Yellow, FString::Printf(TEXT("Puedes Recargar Municiones %s"), *recargarMuniciones));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Yellow, FString::Printf(TEXT("Escudo Americano cuesta 100 monedas %s"), *escudoAmericano));


	//// Mostrar "Hangar" en la esquina superior derecha
	//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Yellow, FString::Printf(TEXT("Hangar: %s"), *hangar), false, FVector2D(1.f, 0.f));

	//// Mostrar "Recargar Municiones" debajo del mensaje "Hangar" en la esquina superior derecha
	//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Yellow, FString::Printf(TEXT("Recargar Municiones: %s"), *recargarMuniciones), false,  FVector2D(1.f, 0.f));

	//// Mostrar "Escudo Americano" debajo del mensaje "Recargar Municiones" en la esquina superior derecha
	//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Yellow, FString::Printf(TEXT("Escudo Americano: %s"), *escudoAmericano), false, FVector2D(1.f, 0.f) * 2);
}

