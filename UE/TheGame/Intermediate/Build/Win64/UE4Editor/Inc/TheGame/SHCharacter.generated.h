// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_SHCharacter_generated_h
#error "SHCharacter.generated.h already included, missing '#pragma once' in SHCharacter.h"
#endif
#define THEGAME_SHCharacter_generated_h

#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_SPARSE_DATA
#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveDirection);


#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveDirection);


#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASHCharacter(); \
	friend struct Z_Construct_UClass_ASHCharacter_Statics; \
public: \
	DECLARE_CLASS(ASHCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(ASHCharacter)


#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASHCharacter(); \
	friend struct Z_Construct_UClass_ASHCharacter_Statics; \
public: \
	DECLARE_CLASS(ASHCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(ASHCharacter)


#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASHCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASHCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHCharacter(ASHCharacter&&); \
	NO_API ASHCharacter(const ASHCharacter&); \
public:


#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHCharacter(ASHCharacter&&); \
	NO_API ASHCharacter(const ASHCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASHCharacter)


#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(ASHCharacter, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ASHCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(ASHCharacter, SpringArmComponent); }


#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_13_PROLOG
#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_SPARSE_DATA \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_RPC_WRAPPERS \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_INCLASS \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_SPARSE_DATA \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_INCLASS_NO_PURE_DECLS \
	TheGame_Source_TheGame_Public_Player_SHCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class ASHCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGame_Source_TheGame_Public_Player_SHCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
