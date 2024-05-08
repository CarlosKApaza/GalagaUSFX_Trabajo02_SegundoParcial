// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorPortaNavesAereas.h"
#include "PortaNavesAereas.h"

// Sets default values
ADirectorPortaNavesAereas::ADirectorPortaNavesAereas()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorPortaNavesAereas::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADirectorPortaNavesAereas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorPortaNavesAereas::ConstruirPortaNaveAerea()
{
	//Log if the Builder is NULL
	if (!BuilderPortaNavesAereas) {
		UE_LOG(LogTemp, Error, TEXT("ConstructLodging(): LodgingBuilder is NULL, make sure it's initialized.")); return;
	}

	//Creates the buildings
	BuilderPortaNavesAereas->ConstruirHangar();
	BuilderPortaNavesAereas->ConstruirRecargarMuniciones();
	BuilderPortaNavesAereas->ConstruirEscudoAmericano();
}

void ADirectorPortaNavesAereas::SetBuilderPortaNavesAereas(AActor* Builder)
{
	//Cast the passed Actor and set the Builder
	BuilderPortaNavesAereas = Cast<IBuilderPortaNavesAereas>(Builder);

	if (!BuilderPortaNavesAereas) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetBuilderPortaNavesAereas(): The Actor is not a LodgingBuilder!Are you sure that the Actor implements thatinterface ? "));
	}
}

APortaNavesAereas* ADirectorPortaNavesAereas::GetPortaNaveAerea()
{
	if (BuilderPortaNavesAereas)
	{
		//Return the Lodging of the Builder
		return BuilderPortaNavesAereas->GetPortaNaveAerea();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetPortaNaveAerea(): Return nullptr"));
	return nullptr;
}

