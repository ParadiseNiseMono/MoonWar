// Copyright Paradise_NiseMono. All Rights Reserved.


#include "Characters/MWCharacter.h"

AMWCharacter::AMWCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AMWCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

