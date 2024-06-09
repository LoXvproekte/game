// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/UI/SHPlayerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHPlayerHUD() {}
// Cross Module References
	THEGAME_API UClass* Z_Construct_UClass_ASHPlayerHUD_NoRegister();
	THEGAME_API UClass* Z_Construct_UClass_ASHPlayerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References
	void ASHPlayerHUD::StaticRegisterNativesASHPlayerHUD()
	{
	}
	UClass* Z_Construct_UClass_ASHPlayerHUD_NoRegister()
	{
		return ASHPlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASHPlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHPlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHPlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/SHPlayerHUD.h" },
		{ "ModuleRelativePath", "Public/UI/SHPlayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHPlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHPlayerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASHPlayerHUD_Statics::ClassParams = {
		&ASHPlayerHUD::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASHPlayerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHPlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHPlayerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASHPlayerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASHPlayerHUD, 4277190186);
	template<> THEGAME_API UClass* StaticClass<ASHPlayerHUD>()
	{
		return ASHPlayerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASHPlayerHUD(Z_Construct_UClass_ASHPlayerHUD, &ASHPlayerHUD::StaticClass, TEXT("/Script/TheGame"), TEXT("ASHPlayerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHPlayerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
