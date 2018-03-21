// Fill out your copyright notice in the Description page of Project Settings.

#include "PostionReporter.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UPostionReporter::UPostionReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPostionReporter::BeginPlay()
{
	Super::BeginPlay();

	FString name = GetOwner()->GetName();
	FVector pos = GetOwner()->GetActorTransform().GetLocation();
	FString posStr = pos.ToCompactString();
	UE_LOG(LogTemp, Warning, TEXT("In coordinate %s c'e' un dio %s di mona che sbatte le porte"), *posStr, *name);
	
}


// Called every frame
void UPostionReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

