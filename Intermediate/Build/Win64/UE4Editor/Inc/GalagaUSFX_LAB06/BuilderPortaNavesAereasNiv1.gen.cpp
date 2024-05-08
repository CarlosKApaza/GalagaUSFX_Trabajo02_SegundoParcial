// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/BuilderPortaNavesAereasNiv1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderPortaNavesAereasNiv1() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ABuilderPortaNavesAereasNiv1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_APortaNavesAereas_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_UBuilderPortaNavesAereas_NoRegister();
// End Cross Module References
	void ABuilderPortaNavesAereasNiv1::StaticRegisterNativesABuilderPortaNavesAereasNiv1()
	{
	}
	UClass* Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_NoRegister()
	{
		return ABuilderPortaNavesAereasNiv1::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortaNaveAerea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortaNaveAerea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderPortaNavesAereasNiv1.h" },
		{ "ModuleRelativePath", "BuilderPortaNavesAereasNiv1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::NewProp_PortaNaveAerea_MetaData[] = {
		{ "Category", "PortaNaveAerea" },
		{ "Comment", "//The PNA Actor\n" },
		{ "ModuleRelativePath", "BuilderPortaNavesAereasNiv1.h" },
		{ "ToolTip", "The PNA Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::NewProp_PortaNaveAerea = { "PortaNaveAerea", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuilderPortaNavesAereasNiv1, PortaNaveAerea), Z_Construct_UClass_APortaNavesAereas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::NewProp_PortaNaveAerea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::NewProp_PortaNaveAerea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::NewProp_PortaNaveAerea,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderPortaNavesAereas_NoRegister, (int32)VTABLE_OFFSET(ABuilderPortaNavesAereasNiv1, IBuilderPortaNavesAereas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderPortaNavesAereasNiv1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::ClassParams = {
		&ABuilderPortaNavesAereasNiv1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderPortaNavesAereasNiv1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderPortaNavesAereasNiv1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderPortaNavesAereasNiv1, 2206253705);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ABuilderPortaNavesAereasNiv1>()
	{
		return ABuilderPortaNavesAereasNiv1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderPortaNavesAereasNiv1(Z_Construct_UClass_ABuilderPortaNavesAereasNiv1, &ABuilderPortaNavesAereasNiv1::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ABuilderPortaNavesAereasNiv1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderPortaNavesAereasNiv1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
