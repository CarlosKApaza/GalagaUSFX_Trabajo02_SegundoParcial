// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/PortaNavesAereas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortaNavesAereas() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_APortaNavesAereas_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_APortaNavesAereas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_UPlanoPortaNavesAereas_NoRegister();
// End Cross Module References
	void APortaNavesAereas::StaticRegisterNativesAPortaNavesAereas()
	{
	}
	UClass* Z_Construct_UClass_APortaNavesAereas_NoRegister()
	{
		return APortaNavesAereas::StaticClass();
	}
	struct Z_Construct_UClass_APortaNavesAereas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortaNavesAereas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortaNavesAereas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PortaNavesAereas.h" },
		{ "ModuleRelativePath", "PortaNavesAereas.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APortaNavesAereas_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlanoPortaNavesAereas_NoRegister, (int32)VTABLE_OFFSET(APortaNavesAereas, IPlanoPortaNavesAereas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortaNavesAereas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortaNavesAereas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortaNavesAereas_Statics::ClassParams = {
		&APortaNavesAereas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortaNavesAereas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortaNavesAereas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortaNavesAereas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortaNavesAereas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortaNavesAereas, 3238986311);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<APortaNavesAereas>()
	{
		return APortaNavesAereas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortaNavesAereas(Z_Construct_UClass_APortaNavesAereas, &APortaNavesAereas::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("APortaNavesAereas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortaNavesAereas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
