// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DlgDialogueParticipant.h"
#include "MyActor.generated.h"

UCLASS()
class CONTENTEXAMPLES_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "tester")
		TScriptInterface<IDlgDialogueParticipant> testerInterface;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "tester")
		TWeakObjectPtr<IDlgDialogueParticipant> interfacePtr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "tester",meta = (AllowedClasses="DlgDialogueParticipant"))
		TWeakObjectPtr<AActor> interfaceActor;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//		TWeakUIntrfacePtr<IDlgDialogueParticipant> ptrtest;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GM CameraPlacement")
		void SelectACamera(UPARAM(ref) TScriptInterface<IDlgDialogueParticipant>& selectedCamera);
	virtual void SelectACamera_Implementation(UPARAM(ref) TScriptInterface<IDlgDialogueParticipant>& selectedCamera);
};
