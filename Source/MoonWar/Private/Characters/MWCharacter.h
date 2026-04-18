// Copyright Paradise_NiseMono. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MWCharacter.generated.h"

UCLASS()
class AMWCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMWCharacter();

protected:
	virtual void BeginPlay() override;
};
