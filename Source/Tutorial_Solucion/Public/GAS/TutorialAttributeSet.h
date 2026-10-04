// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "TutorialAttributeSet.generated.h"



UCLASS()
class TUTORIAL_SOLUCION_API UTutorialAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UTutorialAttributeSet();
	
	ATTRIBUTE_ACCESSORS_BASIC(UTutorialAttributeSet, Health)
	UPROPERTY(VisibleAnywhere, Category="Tutorial")
	FGameplayAttributeData Health;
	
	ATTRIBUTE_ACCESSORS_BASIC(UTutorialAttributeSet, MaxHealth)
	UPROPERTY(VisibleAnywhere, Category="Tutorial")
	FGameplayAttributeData MaxHealth;
	
	ATTRIBUTE_ACCESSORS_BASIC(UTutorialAttributeSet, Speed)
	UPROPERTY(VisibleAnywhere, Category="Tutorial")
	FGameplayAttributeData Speed;
	
	
};
