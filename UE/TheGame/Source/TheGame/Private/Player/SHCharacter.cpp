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
    PrimaryActorTick.bCanEverTick = true;



    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    SpringArmComponent->SetupAttachment(GetRootComponent());
    SpringArmComponent->bUsePawnControlRotation = true;
    SpringArmComponent->CameraLagMaxDistance = 50;
    SpringArmComponent->CameraLagMaxTimeStep = 0.2f;

    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(SpringArmComponent);


}

// Called when the game starts or when spawned
void ASHCharacter::BeginPlay()
{
    Super::BeginPlay();



}



// Called every frame
void ASHCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UE_LOG(LogTemp, Warning, TEXT("MaxWalkSpeed: %f"), GetCharacterMovement()->MaxWalkSpeed);

}



// Переменная чтобы манипулировать скоростью, можно заменить если поможет оптимизации
float maxSpeed = 500.0f;


// Called to bind functionality to input
void ASHCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{


    // Бинды кнопок
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("MoveForward", this, &ASHCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASHCharacter::MoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &ASHCharacter::LookUp);
    PlayerInputComponent->BindAxis("Turn", this, &ASHCharacter::LookRight);



    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASHCharacter::Jump);
    
    PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ASHCharacter::Sprint);
    PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ASHCharacter::StopSprint);

}



void ASHCharacter::MoveForward(float Value)
{

    // Код для постепенного увеличения скорости
    /*
    if (Value != 0) {
        float currentSpeed = GetCharacterMovement()->MaxWalkSpeed;
        currentSpeed = FMath::Lerp(currentSpeed, maxSpeed, acceleration);
        GetCharacterMovement()->MaxWalkSpeed = currentSpeed;
    }
    else {
        float currentSpeed = GetCharacterMovement()->MaxWalkSpeed;
        currentSpeed = FMath::Lerp(50.0f, currentSpeed, 1.0f - acceleration);
        GetCharacterMovement()->MaxWalkSpeed = currentSpeed;
    }
    */
    
    // Кодык для работы ускорения
    float currentSpeed = GetCharacterMovement()->MaxWalkSpeed;
    currentSpeed = FMath::Lerp(currentSpeed, maxSpeed, 1);
    GetCharacterMovement()->MaxWalkSpeed = currentSpeed;

    AddMovementInput(GetActorForwardVector(), Value);
}

// Движение по сторонам, кодык не нужен
void ASHCharacter::MoveRight(float Value)
{
    AddMovementInput(GetActorRightVector(), Value);
}


// Функция движения камеры по вертикали 
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


// Функция движения камеры по горизонтали
void ASHCharacter::LookRight(float Value)
{
    if (Value != 0.f && Controller && Controller->IsLocalPlayerController())
    {
        APlayerController* const PC = CastChecked<APlayerController>(Controller);
        PC->AddYawInput(Value);
    }
}


// Код для анимации, оспределяет вектор двежения персонажа
float ASHCharacter::MoveDirection() const {
    FVector VelocityNormalVector = GetVelocity().GetSafeNormal();
    float Angel = FMath::Acos(FVector::DotProduct(GetActorForwardVector(), VelocityNormalVector));
    FVector SignAngle = FVector::CrossProduct(GetActorForwardVector(), VelocityNormalVector);
    float DegreesAngle = FMath::RadiansToDegrees(Angel) * FMath::Sign(SignAngle.Z);
    return DegreesAngle;
}



// Нужны для ускорения
bool bIsSprinting = false;
float SprintMultiplier = 1.5f;

// Функция ускорения
void ASHCharacter::Sprint()
{
    if(bIsSprinting == false)
{
        bIsSprinting = true;
        maxSpeed *= SprintMultiplier;
    }
}

//Функция остановки после ускорения
void ASHCharacter::StopSprint(){
    if
        (bIsSprinting == true)
    {
        bIsSprinting = false;
        maxSpeed /= SprintMultiplier;
    }
}





