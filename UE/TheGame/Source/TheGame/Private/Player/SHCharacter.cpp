// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SHCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
ASHCharacter::ASHCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
    SpringArmComponent->SetupAttachment(GetRootComponent());
    SpringArmComponent->bUsePawnControlRotation = true;

    CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraCompopnent");
    CameraComponent->SetupAttachment(SpringArmComponent);

}

// Called when the game starts or when spawned
void ASHCharacter::BeginPlay()
{
    Super::BeginPlay();
    GetCharacterMovement()->MaxWalkSpeed = 0;
}

// Called every frame
void ASHCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}


// Called to bind functionality to input
void ASHCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("MoveForward", this, &ASHCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASHCharacter::MoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &ASHCharacter::LookUp);
    PlayerInputComponent->BindAxis("Turn", this, &ASHCharacter::AddControllerYawInput);


    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASHCharacter::Jump);
}





void ASHCharacter::MoveForward(float Value)
{
    float acceleration = 0.01f; // Коэффициент ускорения
    float maxSpeed = 400.0f; // Максимальная скорость передвижения

    float currentSpeed = GetCharacterMovement()->MaxWalkSpeed;
    currentSpeed = FMath::Lerp(currentSpeed, maxSpeed, acceleration);
    GetCharacterMovement()->MaxWalkSpeed = currentSpeed;
    AddMovementInput(GetActorForwardVector(), Value);
}
/*
void ASHCharacter::MoveForward(float Value)
{
    AddMovementInput(GetActorForwardVector(), Value);
}
*/
void ASHCharacter::MoveRight(float Value)
{
    AddMovementInput(GetActorRightVector(), Value);
}

void ASHCharacter::LookUp(float Value)
{
    // Получите компонент камеры
    UCameraComponent* LCameraComponent = FindComponentByClass<UCameraComponent>();

    if (LCameraComponent)
    {
        // Определите минимальный и максимальный угол поворота по вертикали
        float MinPitch = -55.0f; // Минимальный угол
        float MaxPitch = 45.0f; // Максимальный угол

        // Получите текущий поворот камеры
        FRotator CurrentRotation = LCameraComponent->GetRelativeRotation();

        // Измените угол поворота по вертикали с учетом входного значения
        float NewPitch = FMath::Clamp(CurrentRotation.Pitch + Value * (-1), MinPitch, MaxPitch);

        // Установите новый поворот камеры
        LCameraComponent->SetRelativeRotation(FRotator(NewPitch, CurrentRotation.Yaw, CurrentRotation.Roll));
    }
}

void ASHCharacter::LookRight(float Value)
{
    if (Value != 0.f && Controller && Controller->IsLocalPlayerController())
    {
        APlayerController* const PC = CastChecked<APlayerController>(Controller);
        PC->AddYawInput(Value);
    }
}



