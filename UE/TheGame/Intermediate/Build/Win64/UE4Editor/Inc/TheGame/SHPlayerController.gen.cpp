// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Player/SHPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHPlayerController() {}
// Cross Module References
	THEGAME_API UClass* Z_Construct_UClass_ASHPlayerController_NoRegister();
	THEGAME_API UClass* Z_Construct_UClass_ASHPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References
	void ASHPlayerController::StaticRegisterNativesASHPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASHPlayerController_NoRegister()
	{
		return ASHPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASHPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/SHPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/SHPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASHPlayerController_Statics::ClassParams = {
		&ASHPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASHPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASHPlayerController, 2739314218);
	template<> THEGAME_API UClass* StaticClass<ASHPlayerController>()
	{
		return ASHPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASHPlayerController(Z_Construct_UClass_ASHPlayerController, &ASHPlayerController::StaticClass, TEXT("/Script/TheGame"), TEXT("ASHPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
