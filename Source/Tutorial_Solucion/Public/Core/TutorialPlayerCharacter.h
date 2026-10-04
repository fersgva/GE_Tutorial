// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameFramework/Character.h"
#include "TutorialPlayerCharacter.generated.h"

class UGameplayEffect;
class UTutorialAttributeSet;
class UAbilitySystemComponent;

UCLASS()
class TUTORIAL_SOLUCION_API ATutorialPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATutorialPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Tutorial", meta=(AllowPrivateAccess= true))
	TObjectPtr<UAbilitySystemComponent> ASC;
	
	UPROPERTY(EditAnywhere, Category="Tutorial")
	TObjectPtr<UTutorialAttributeSet> AS;

};
