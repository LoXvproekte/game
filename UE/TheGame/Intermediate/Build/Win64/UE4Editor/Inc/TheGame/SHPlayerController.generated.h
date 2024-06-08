// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_SHPlayerController_generated_h
#error "SHPlayerController.generated.h already included, missing '#pragma once' in SHPlayerController.h"
#endif
#define THEGAME_SHPlayerController_generated_h

#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_SPARSE_DATA
#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_RPC_WRAPPERS
#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASHPlayerController(); \
	friend struct Z_Construct_UClass_ASHPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASHPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(ASHPlayerController)


#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASHPlayerController(); \
	friend struct Z_Construct_UClass_ASHPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASHPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(ASHPlayerController)


#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASHPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASHPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHPlayerController(ASHPlayerController&&); \
	NO_API ASHPlayerController(const ASHPlayerController&); \
public:


#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASHPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHPlayerController(ASHPlayerController&&); \
	NO_API ASHPlayerController(const ASHPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASHPlayerController)


#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_12_PROLOG
#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_SPARSE_DATA \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_RPC_WRAPPERS \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_INCLASS \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_SPARSE_DATA \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	TheGame_Source_TheGame_Public_Player_SHPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class ASHPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheGame_Source_TheGame_Public_Player_SHPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
