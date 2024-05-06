// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTerrestre_Artilleria.h"
#include "TimerManager.h"

void ANaveTerrestre_Artilleria::BeginPlay()
{
	Super::BeginPlay();
}

ANaveTerrestre_Artilleria::ANaveTerrestre_Artilleria()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveTerrestre_Artilleria"; //Nombre de la nave
	VelocidadYArtilleria = 350.0f;
	/*VelocidadXArtilleria = 0.0f;*/
}

void ANaveTerrestre_Artilleria::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveTerrestre_Artilleria::Mover(float DeltaTime)
{
	//Obtenemos la posici�n actual del actor
	FVector PosicionActual = GetActorLocation();

	// Generamos nuevas coordenadas X e Y aleatorias
	float NuevaX = 0.0f; // No se mueve en el eje X
	// Calculamos la nueva posici�n en el eje Y
	float MovimientoY = PosicionActual.Y + (VelocidadYArtilleria * DeltaTime);

	// Verificamos si la nave ha alcanzado el l�mite superior o inferior en el eje Y
	if (MovimientoY >= 1100.0f || MovimientoY  <= -1100.0f)
	{
		// Cambiamos la direcci�n multiplicando por -1
		VelocidadYArtilleria *= -1.0f;
	}
	// Establecemos la nueva posici�n del actor
	SetActorLocation(FVector(PosicionActual.X + NuevaX, MovimientoY, PosicionActual.Z));

 
}
