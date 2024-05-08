// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/PlanoPortaNavesAereas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanoPortaNavesAereas() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_UPlanoPortaNavesAereas_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_UPlanoPortaNavesAereas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void UPlanoPortaNavesAereas::StaticRegisterNativesUPlanoPortaNavesAereas()
	{
	}
	UClass* Z_Construct_UClass_UPlanoPortaNavesAereas_NoRegister()
	{
		return UPlanoPortaNavesAereas::StaticClass();
	}
	struct Z_Construct_UClass_UPlanoPortaNavesAereas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanoPortaNavesAereas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanoPortaNavesAereas_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlanoPortaNavesAereas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanoPortaNavesAereas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlanoPortaNavesAereas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanoPortaNavesAereas_Statics::ClassParams = {
		&UPlanoPortaNavesAereas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlanoPortaNavesAereas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanoPortaNavesAereas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanoPortaNavesAereas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanoPortaNavesAereas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanoPortaNavesAereas, 1699878644);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<UPlanoPortaNavesAereas>()
	{
		return UPlanoPortaNavesAereas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanoPortaNavesAereas(Z_Construct_UClass_UPlanoPortaNavesAereas, &UPlanoPortaNavesAereas::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("UPlanoPortaNavesAereas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanoPortaNavesAereas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
