// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class HOMEWORK_3_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBaseActor();
	//ACppBaseActor(const FString name, const int enemy, const bool* alive);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere);
	FString PlayerName = "default";

	UPROPERTY(EditAnywhere);
	int EnemyNum = 0;

	UPROPERTY(EditAnywhere);
	bool IsAlive = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void ShowActorInformation();

};
