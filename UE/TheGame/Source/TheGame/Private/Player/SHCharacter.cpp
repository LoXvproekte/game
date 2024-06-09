// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SHCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/WidgetTree.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
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
    GetCharacterMovement()->MaxWalkSpeed = 50;
}



// Called every frame
void ASHCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UE_LOG(LogTemp, Warning, TEXT("MaxWalkSpeed: %f"), GetCharacterMovement()->MaxWalkSpeed);

}


// Called to bind functionality to input
void ASHCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("MoveForward", this, &ASHCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASHCharacter::MoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &ASHCharacter::LookUp);
    PlayerInputComponent->BindAxis("Turn", this, &ASHCharacter::LookRight);


    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASHCharacter::Jump);
    
    PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ASHCharacter::Sprint);
    PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ASHCharacter::StopSprint);

}


float acceleration = 0.01f;
float maxSpeed = 600.0f;


void ASHCharacter::MoveForward(float Value)
{
    if (Value != 0) {
        float currentSpeed = GetCharacterMovement()->MaxWalkSpeed;
        currentSpeed = FMath::Lerp(currentSpeed, maxSpeed, acceleration);
        GetCharacterMovement()->MaxWalkSpeed = currentSpeed;
    }
    else {
        float currentSpeed = GetCharacterMovement()->MaxWalkSpeed;
        currentSpeed = FMath::Lerp(50.0f, currentSpeed, acceleration);
        GetCharacterMovement()->MaxWalkSpeed = currentSpeed;
    }
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
    UCameraComponent* LCameraComponent = FindComponentByClass<UCameraComponent>();

    if (LCameraComponent)
    {
        float MinPitch = -55.0f;
        float MaxPitch = 45.0f;

        FRotator CurrentRotation = LCameraComponent->GetRelativeRotation();

        float NewPitch = FMath::Clamp(CurrentRotation.Pitch + Value * (-1), MinPitch, MaxPitch);

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




float ASHCharacter::MoveDirection() const {
    FVector VelocityNormalVector = GetVelocity().GetSafeNormal();
    float Angel = FMath::Acos(FVector::DotProduct(GetActorForwardVector(), VelocityNormalVector));
    FVector SignAngle = FVector::CrossProduct(GetActorForwardVector(), VelocityNormalVector);
    float DegreesAngle = FMath::RadiansToDegrees(Angel) * FMath::Sign(SignAngle.Z);
    return DegreesAngle;
}



void ASHCharacter::Sprint()
{
    // Устанавливаем желаемую скорость
    float DesiredSpeed = GetCharacterMovement()->MaxWalkSpeed + 600;

    // Интерполируем текущую скорость к желаемой скорости
    float InterpolatedSpeed = FMath::FInterpTo(GetCharacterMovement()->MaxWalkSpeed, DesiredSpeed, GetWorld()->GetDeltaSeconds(), 5.0f);

    // Устанавливаем новую скорость
    GetCharacterMovement()->MaxWalkSpeed = InterpolatedSpeed;
}

void ASHCharacter::StopSprint()
{
    // Устанавливаем желаемую скорость
    float DesiredSpeed = GetCharacterMovement()->MaxWalkSpeed - 600;

    // Интерполируем текущую скорость к желаемой скорости
    float InterpolatedSpeed = FMath::FInterpTo(GetCharacterMovement()->MaxWalkSpeed, DesiredSpeed, GetWorld()->GetDeltaSeconds(), 5.0f);

    // Устанавливаем новую скорость
    GetCharacterMovement()->MaxWalkSpeed = InterpolatedSpeed;
}
