// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloSlime3/MyTameshiInstancedMesh2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTameshiInstancedMesh2() {}
// Cross Module References
	HELLOSLIME3_API UClass* Z_Construct_UClass_UMyTameshiInstancedMesh2();
	HELLOSLIME3_API UClass* Z_Construct_UClass_UMyTameshiInstancedMesh2_NoRegister();
	HELLOSLIME3_API UClass* Z_Construct_UClass_UTameshiInstancedMesh();
	UPackage* Z_Construct_UPackage__Script_HelloSlime3();
// End Cross Module References
	void UMyTameshiInstancedMesh2::StaticRegisterNativesUMyTameshiInstancedMesh2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyTameshiInstancedMesh2);
	UClass* Z_Construct_UClass_UMyTameshiInstancedMesh2_NoRegister()
	{
		return UMyTameshiInstancedMesh2::StaticClass();
	}
	struct Z_Construct_UClass_UMyTameshiInstancedMesh2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyTameshiInstancedMesh2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTameshiInstancedMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTameshiInstancedMesh2_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyTameshiInstancedMesh2_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MyTameshiInstancedMesh2.h" },
		{ "ModuleRelativePath", "MyTameshiInstancedMesh2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyTameshiInstancedMesh2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyTameshiInstancedMesh2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyTameshiInstancedMesh2_Statics::ClassParams = {
		&UMyTameshiInstancedMesh2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTameshiInstancedMesh2_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyTameshiInstancedMesh2_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyTameshiInstancedMesh2()
	{
		if (!Z_Registration_Info_UClass_UMyTameshiInstancedMesh2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyTameshiInstancedMesh2.OuterSingleton, Z_Construct_UClass_UMyTameshiInstancedMesh2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyTameshiInstancedMesh2.OuterSingleton;
	}
	template<> HELLOSLIME3_API UClass* StaticClass<UMyTameshiInstancedMesh2>()
	{
		return UMyTameshiInstancedMesh2::StaticClass();
	}
	UMyTameshiInstancedMesh2::UMyTameshiInstancedMesh2() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyTameshiInstancedMesh2);
	UMyTameshiInstancedMesh2::~UMyTameshiInstancedMesh2() {}
	struct Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_MyTameshiInstancedMesh2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_MyTameshiInstancedMesh2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyTameshiInstancedMesh2, UMyTameshiInstancedMesh2::StaticClass, TEXT("UMyTameshiInstancedMesh2"), &Z_Registration_Info_UClass_UMyTameshiInstancedMesh2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyTameshiInstancedMesh2), 709999581U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_MyTameshiInstancedMesh2_h_3011739409(TEXT("/Script/HelloSlime3"),
		Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_MyTameshiInstancedMesh2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_MyTameshiInstancedMesh2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
