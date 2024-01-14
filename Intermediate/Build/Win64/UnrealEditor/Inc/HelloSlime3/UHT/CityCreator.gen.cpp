// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloSlime3/CityCreator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCityCreator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HELLOSLIME3_API UClass* Z_Construct_UClass_ACityCreator();
	HELLOSLIME3_API UClass* Z_Construct_UClass_ACityCreator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HelloSlime3();
// End Cross Module References
	DEFINE_FUNCTION(ACityCreator::execCallCountMan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->CallCountMan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACityCreator::execGetChankCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChankCount();
		P_NATIVE_END;
	}
	void ACityCreator::StaticRegisterNativesACityCreator()
	{
		UClass* Class = ACityCreator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallCountMan", &ACityCreator::execCallCountMan },
			{ "GetChankCount", &ACityCreator::execGetChankCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACityCreator_CallCountMan_Statics
	{
		struct CityCreator_eventCallCountMan_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CityCreator_eventCallCountMan_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CityCreator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACityCreator, nullptr, "CallCountMan", nullptr, nullptr, Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::CityCreator_eventCallCountMan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::CityCreator_eventCallCountMan_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACityCreator_CallCountMan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACityCreator_CallCountMan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACityCreator_GetChankCount_Statics
	{
		struct CityCreator_eventGetChankCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CityCreator_eventGetChankCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CityCreator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACityCreator, nullptr, "GetChankCount", nullptr, nullptr, Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::CityCreator_eventGetChankCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::CityCreator_eventGetChankCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACityCreator_GetChankCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACityCreator_GetChankCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACityCreator);
	UClass* Z_Construct_UClass_ACityCreator_NoRegister()
	{
		return ACityCreator::StaticClass();
	}
	struct Z_Construct_UClass_ACityCreator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTarget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceTarget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChankCount_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChankCount_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChankCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstChankScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstChankScale;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slice_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slice_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slice;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChankColor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChankColor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChankColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawChank_MetaData[];
#endif
		static void NewProp_DrawChank_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawChank;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACityCreator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACityCreator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACityCreator_CallCountMan, "CallCountMan" }, // 3530834615
		{ &Z_Construct_UFunction_ACityCreator_GetChankCount, "GetChankCount" }, // 3456266546
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACityCreator_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xba\xe3\x82\x92\xe7\x94\x9f\xe6\x88\x90\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x80\x81\xe3\x81\xae\xe3\x81\xa4\xe3\x82\x82\xe3\x82\x8a\xe3\x81\xa0\xe3\x81\xa3\xe3\x81\x9f\xe4\xbd\x95\xe3\x81\x8b\n//\xe7\xa9\xba\xe9\x96\x93\xe3\x82\x92\xe3\x83\x81\xe3\x83\xa3\xe3\x83\xb3\xe3\x82\xaf\xe3\x81\xa7\xe5\x8c\xba\xe5\x88\x87\xe3\x82\x8a\xe3\x82\x92\xe3\x81\xa4\xe3\x81\x91\xe3\x81\xa6\xe7\xae\xa1\xe7\x90\x86\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe5\x87\xa6\xe7\x90\x86\xe9\x80\x9f\xe5\xba\xa6\xe3\x81\xa8\xe7\xae\xa1\xe7\x90\x86\xe5\x8a\xb9\xe7\x8e\x87\xe3\x82\x92\xe4\xb8\x8a\xe3\x81\x92\xe3\x82\x8b\xe7\x9b\xae\xe7\x9a\x84\xe3\x81\xa7\xe4\xbd\x9c\xe3\x81\xa3\xe3\x81\x9f\n//WorldCreatorHub\xe3\x81\xa8\xe3\x81\x84\xe3\x81\x86\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe3\x81\x97\xe3\x81\x9f\xe3\x82\x84\xe3\x81\xa4\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8b\xe3\x81\xae\xe3\x81\xa7\xe3\x81\x9d\xe3\x81\xa3\xe3\x81\xa1\xe3\x82\x92\xe4\xbd\xbf\xe3\x81\x86\xe3\x81\x93\xe3\x81\xa8\n" },
#endif
		{ "IncludePath", "CityCreator.h" },
		{ "ModuleRelativePath", "CityCreator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xba\xe3\x82\x92\xe7\x94\x9f\xe6\x88\x90\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x80\x81\xe3\x81\xae\xe3\x81\xa4\xe3\x82\x82\xe3\x82\x8a\xe3\x81\xa0\xe3\x81\xa3\xe3\x81\x9f\xe4\xbd\x95\xe3\x81\x8b\n\xe7\xa9\xba\xe9\x96\x93\xe3\x82\x92\xe3\x83\x81\xe3\x83\xa3\xe3\x83\xb3\xe3\x82\xaf\xe3\x81\xa7\xe5\x8c\xba\xe5\x88\x87\xe3\x82\x8a\xe3\x82\x92\xe3\x81\xa4\xe3\x81\x91\xe3\x81\xa6\xe7\xae\xa1\xe7\x90\x86\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe5\x87\xa6\xe7\x90\x86\xe9\x80\x9f\xe5\xba\xa6\xe3\x81\xa8\xe7\xae\xa1\xe7\x90\x86\xe5\x8a\xb9\xe7\x8e\x87\xe3\x82\x92\xe4\xb8\x8a\xe3\x81\x92\xe3\x82\x8b\xe7\x9b\xae\xe7\x9a\x84\xe3\x81\xa7\xe4\xbd\x9c\xe3\x81\xa3\xe3\x81\x9f\nWorldCreatorHub\xe3\x81\xa8\xe3\x81\x84\xe3\x81\x86\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe3\x81\x97\xe3\x81\x9f\xe3\x82\x84\xe3\x81\xa4\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8b\xe3\x81\xae\xe3\x81\xa7\xe3\x81\x9d\xe3\x81\xa3\xe3\x81\xa1\xe3\x82\x92\xe4\xbd\xbf\xe3\x81\x86\xe3\x81\x93\xe3\x81\xa8" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACityCreator_Statics::NewProp_InstanceTarget_MetaData[] = {
		{ "Category", "CityCreator" },
		{ "ModuleRelativePath", "CityCreator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACityCreator_Statics::NewProp_InstanceTarget = { "InstanceTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACityCreator, InstanceTarget), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::NewProp_InstanceTarget_MetaData), Z_Construct_UClass_ACityCreator_Statics::NewProp_InstanceTarget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankCount_Inner = { "ChankCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankCount_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "CityCreator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankCount = { "ChankCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACityCreator, ChankCount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankCount_MetaData), Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACityCreator_Statics::NewProp_FirstChankScale_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "CityCreator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACityCreator_Statics::NewProp_FirstChankScale = { "FirstChankScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACityCreator, FirstChankScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::NewProp_FirstChankScale_MetaData), Z_Construct_UClass_ACityCreator_Statics::NewProp_FirstChankScale_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACityCreator_Statics::NewProp_Slice_Inner = { "Slice", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACityCreator_Statics::NewProp_Slice_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "CityCreator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACityCreator_Statics::NewProp_Slice = { "Slice", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACityCreator, Slice), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::NewProp_Slice_MetaData), Z_Construct_UClass_ACityCreator_Statics::NewProp_Slice_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankColor_Inner = { "ChankColor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankColor_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "CityCreator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankColor = { "ChankColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACityCreator, ChankColor), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankColor_MetaData), Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACityCreator_Statics::NewProp_DrawChank_MetaData[] = {
		{ "Category", "ChankDebug" },
		{ "ModuleRelativePath", "CityCreator.h" },
	};
#endif
	void Z_Construct_UClass_ACityCreator_Statics::NewProp_DrawChank_SetBit(void* Obj)
	{
		((ACityCreator*)Obj)->DrawChank = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACityCreator_Statics::NewProp_DrawChank = { "DrawChank", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACityCreator), &Z_Construct_UClass_ACityCreator_Statics::NewProp_DrawChank_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::NewProp_DrawChank_MetaData), Z_Construct_UClass_ACityCreator_Statics::NewProp_DrawChank_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACityCreator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACityCreator_Statics::NewProp_InstanceTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankCount_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACityCreator_Statics::NewProp_FirstChankScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACityCreator_Statics::NewProp_Slice_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACityCreator_Statics::NewProp_Slice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankColor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACityCreator_Statics::NewProp_ChankColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACityCreator_Statics::NewProp_DrawChank,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACityCreator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACityCreator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACityCreator_Statics::ClassParams = {
		&ACityCreator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACityCreator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::Class_MetaDataParams), Z_Construct_UClass_ACityCreator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACityCreator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACityCreator()
	{
		if (!Z_Registration_Info_UClass_ACityCreator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACityCreator.OuterSingleton, Z_Construct_UClass_ACityCreator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACityCreator.OuterSingleton;
	}
	template<> HELLOSLIME3_API UClass* StaticClass<ACityCreator>()
	{
		return ACityCreator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACityCreator);
	ACityCreator::~ACityCreator() {}
	struct Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_CityCreator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_CityCreator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACityCreator, ACityCreator::StaticClass, TEXT("ACityCreator"), &Z_Registration_Info_UClass_ACityCreator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACityCreator), 1034352873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_CityCreator_h_2662966778(TEXT("/Script/HelloSlime3"),
		Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_CityCreator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_CityCreator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
