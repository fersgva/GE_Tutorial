// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/TutorialPlayerCharacter.h"

#include "AbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GAS/TutorialAttributeSet.h"

// Sets default values
ATutorialPlayerCharacter::ATutorialPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	ASC = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("ASC"));
	AS = CreateDefaultSubobject<UTutorialAttributeSet>(TEXT("AS"));
}

// Called when the game starts or when spawned
void ATutorialPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	ASC->InitAbilityActorInfo(this, this);
}

