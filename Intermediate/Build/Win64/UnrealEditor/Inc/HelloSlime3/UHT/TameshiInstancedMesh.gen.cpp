// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloSlime3/TameshiInstancedMesh.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTameshiInstancedMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	HELLOSLIME3_API UClass* Z_Construct_UClass_UTameshiInstancedMesh();
	HELLOSLIME3_API UClass* Z_Construct_UClass_UTameshiInstancedMesh_NoRegister();
	HELLOSLIME3_API UScriptStruct* Z_Construct_UScriptStruct_FMapLocate();
	HELLOSLIME3_API UScriptStruct* Z_Construct_UScriptStruct_FMapPoint();
	HELLOSLIME3_API UScriptStruct* Z_Construct_UScriptStruct_FMapPointArray();
	UPackage* Z_Construct_UPackage__Script_HelloSlime3();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapPoint;
class UScriptStruct* FMapPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapPoint, (UObject*)Z_Construct_UPackage__Script_HelloSlime3(), TEXT("MapPoint"));
	}
	return Z_Registration_Info_UScriptStruct_MapPoint.OuterSingleton;
}
template<> HELLOSLIME3_API UScriptStruct* StaticStruct<FMapPoint>()
{
	return FMapPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsNotNull_MetaData[];
#endif
		static void NewProp_IsNotNull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNotNull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHoll_MetaData[];
#endif
		static void NewProp_IsHoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHoll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_Point_MetaData[] = {
		{ "Category", "MapPoint" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapPoint, Point), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_Point_MetaData), Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_Point_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsNotNull_MetaData[] = {
		{ "Category", "MapPoint" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsNotNull_SetBit(void* Obj)
	{
		((FMapPoint*)Obj)->IsNotNull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsNotNull = { "IsNotNull", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMapPoint), &Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsNotNull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsNotNull_MetaData), Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsNotNull_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsHoll_MetaData[] = {
		{ "Category", "MapPoint" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsHoll_SetBit(void* Obj)
	{
		((FMapPoint*)Obj)->IsHoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsHoll = { "IsHoll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMapPoint), &Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsHoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsHoll_MetaData), Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsHoll_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsNotNull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPoint_Statics::NewProp_IsHoll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
		nullptr,
		&NewStructOps,
		"MapPoint",
		Z_Construct_UScriptStruct_FMapPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPoint_Statics::PropPointers),
		sizeof(FMapPoint),
		alignof(FMapPoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapPoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMapPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_MapPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapPoint.InnerSingleton, Z_Construct_UScriptStruct_FMapPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapLocate;
class UScriptStruct* FMapLocate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapLocate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapLocate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapLocate, (UObject*)Z_Construct_UPackage__Script_HelloSlime3(), TEXT("MapLocate"));
	}
	return Z_Registration_Info_UScriptStruct_MapLocate.OuterSingleton;
}
template<> HELLOSLIME3_API UScriptStruct* StaticStruct<FMapLocate>()
{
	return FMapLocate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapLocate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapLocate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapLocate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapLocate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_x_MetaData[] = {
		{ "Category", "MapLocate" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapLocate, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_x_MetaData), Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_y_MetaData[] = {
		{ "Category", "MapLocate" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapLocate, y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_y_MetaData), Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_y_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapLocate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapLocate_Statics::NewProp_y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapLocate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
		nullptr,
		&NewStructOps,
		"MapLocate",
		Z_Construct_UScriptStruct_FMapLocate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapLocate_Statics::PropPointers),
		sizeof(FMapLocate),
		alignof(FMapLocate),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapLocate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapLocate_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapLocate_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMapLocate()
	{
		if (!Z_Registration_Info_UScriptStruct_MapLocate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapLocate.InnerSingleton, Z_Construct_UScriptStruct_FMapLocate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapLocate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapPointArray;
class UScriptStruct* FMapPointArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapPointArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapPointArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapPointArray, (UObject*)Z_Construct_UPackage__Script_HelloSlime3(), TEXT("MapPointArray"));
	}
	return Z_Registration_Info_UScriptStruct_MapPointArray.OuterSingleton;
}
template<> HELLOSLIME3_API UScriptStruct* StaticStruct<FMapPointArray>()
{
	return FMapPointArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapPointArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapPointArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapPointArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapPointArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapPointArray_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "MapPointArray" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x85\x8d\xe5\x88\x97\xe3\x81\xae\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x99\xe3\x82\x8b\n" },
#endif
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe5\x88\x97\xe3\x81\xae\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x99\xe3\x82\x8b" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapPointArray_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapPointArray, Size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPointArray_Statics::NewProp_Size_MetaData), Z_Construct_UScriptStruct_FMapPointArray_Statics::NewProp_Size_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapPointArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPointArray_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapPointArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
		nullptr,
		&NewStructOps,
		"MapPointArray",
		Z_Construct_UScriptStruct_FMapPointArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPointArray_Statics::PropPointers),
		sizeof(FMapPointArray),
		alignof(FMapPointArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPointArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapPointArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPointArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMapPointArray()
	{
		if (!Z_Registration_Info_UScriptStruct_MapPointArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapPointArray.InnerSingleton, Z_Construct_UScriptStruct_FMapPointArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapPointArray.InnerSingleton;
	}
	DEFINE_FUNCTION(UTameshiInstancedMesh::execSampleDefMapMaker)
	{
		P_GET_STRUCT_REF(FMapPointArray,Z_Param_Out_SetArray);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FirstPoint);
		P_GET_STRUCT_REF(FMapPointArray,Z_Param_Out_DefArray);
		P_GET_TARRAY_REF(FMapLocate,Z_Param_Out_DefPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SampleDefMapMaker(Z_Param_Out_SetArray,Z_Param_Out_FirstPoint,Z_Param_Out_DefArray,Z_Param_Out_DefPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTameshiInstancedMesh::execAddInstancesBySplitTime)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_InstancesTransform);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CompleteCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OrderDiv);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInstancesBySplitTime(Z_Param_Out_InstancesTransform,Z_Param_StartIndex,Z_Param_Out_CompleteCount,Z_Param_OrderDiv,Z_Param_TickTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTameshiInstancedMesh::execCreateMeshDataArrayOrder)
	{
		P_GET_STRUCT_REF(FMapPointArray,Z_Param_Out_SetArray);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ScaleArray);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_LocateArray);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FirstPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_TARRAY_REF(FMapLocate,Z_Param_Out_OrderList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMeshDataArrayOrder(Z_Param_Out_SetArray,Z_Param_Out_ScaleArray,Z_Param_Out_LocateArray,Z_Param_Out_FirstPoint,Z_Param_Scale,Z_Param_Out_OrderList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTameshiInstancedMesh::execSetFMapPointArray)
	{
		P_GET_STRUCT_REF(FMapPointArray,Z_Param_Out_SetArray);
		P_GET_STRUCT_REF(FMapPointArray,Z_Param_Out_DefArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFMapPointArray(Z_Param_Out_SetArray,Z_Param_Out_DefArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTameshiInstancedMesh::execCreateMeshDataArray)
	{
		P_GET_STRUCT_REF(FMapPointArray,Z_Param_Out_SetArray);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ScaleArray);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_LocateArray);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FirstPoint);
		P_GET_STRUCT_REF(FMapLocate,Z_Param_Out_FirstDex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMeshDataArray(Z_Param_Out_SetArray,Z_Param_Out_ScaleArray,Z_Param_Out_LocateArray,Z_Param_Out_FirstPoint,Z_Param_Out_FirstDex,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTameshiInstancedMesh::execCreateMapPointArray)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FMapPointArray,Z_Param_Out_DefArray);
		P_GET_STRUCT_REF(FMapPointArray,Z_Param_Out_MyArray);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaMax);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FirstPoint);
		P_GET_TARRAY_REF(FMapLocate,Z_Param_Out_OrderList);
		P_GET_TARRAY_REF(FMapLocate,Z_Param_Out_DefPoint);
		P_GET_STRUCT_REF(FMapLocate,Z_Param_Out_StartPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMapPointArray(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_DefArray,Z_Param_Out_MyArray,Z_Param_DeltaMin,Z_Param_DeltaMax,Z_Param_Out_FirstPoint,Z_Param_Out_OrderList,Z_Param_Out_DefPoint,Z_Param_Out_StartPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTameshiInstancedMesh::execCreateInstances)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_InstancesToCreate);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInstances(Z_Param_Out_InstancesToCreate,Z_Param_amount);
		P_NATIVE_END;
	}
	void UTameshiInstancedMesh::StaticRegisterNativesUTameshiInstancedMesh()
	{
		UClass* Class = UTameshiInstancedMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInstancesBySplitTime", &UTameshiInstancedMesh::execAddInstancesBySplitTime },
			{ "CreateInstances", &UTameshiInstancedMesh::execCreateInstances },
			{ "CreateMapPointArray", &UTameshiInstancedMesh::execCreateMapPointArray },
			{ "CreateMeshDataArray", &UTameshiInstancedMesh::execCreateMeshDataArray },
			{ "CreateMeshDataArrayOrder", &UTameshiInstancedMesh::execCreateMeshDataArrayOrder },
			{ "SampleDefMapMaker", &UTameshiInstancedMesh::execSampleDefMapMaker },
			{ "SetFMapPointArray", &UTameshiInstancedMesh::execSetFMapPointArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics
	{
		struct TameshiInstancedMesh_eventAddInstancesBySplitTime_Parms
		{
			TArray<FTransform> InstancesTransform;
			int32 StartIndex;
			int32 CompleteCount;
			int32 OrderDiv;
			float TickTime;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancesTransform_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancesTransform_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesTransform;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompleteCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OrderDiv;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_InstancesTransform_Inner = { "InstancesTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_InstancesTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_InstancesTransform = { "InstancesTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventAddInstancesBySplitTime_Parms, InstancesTransform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_InstancesTransform_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_InstancesTransform_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventAddInstancesBySplitTime_Parms, StartIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_CompleteCount = { "CompleteCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventAddInstancesBySplitTime_Parms, CompleteCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_OrderDiv = { "OrderDiv", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventAddInstancesBySplitTime_Parms, OrderDiv), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_TickTime = { "TickTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventAddInstancesBySplitTime_Parms, TickTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_InstancesTransform_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_InstancesTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_CompleteCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_OrderDiv,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::NewProp_TickTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//addinstances\xe3\x82\x92\xe6\x99\x82\xe9\x96\x93\xe3\x81\xa7\xe5\x88\x86\xe5\x89\xb2\xe3\x81\x97\xe3\x81\xa6\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe9\x96\xa2\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "addinstances\xe3\x82\x92\xe6\x99\x82\xe9\x96\x93\xe3\x81\xa7\xe5\x88\x86\xe5\x89\xb2\xe3\x81\x97\xe3\x81\xa6\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe9\x96\xa2\xe6\x95\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTameshiInstancedMesh, nullptr, "AddInstancesBySplitTime", nullptr, nullptr, Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::TameshiInstancedMesh_eventAddInstancesBySplitTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::TameshiInstancedMesh_eventAddInstancesBySplitTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics
	{
		struct TameshiInstancedMesh_eventCreateInstances_Parms
		{
			TArray<FTransform> InstancesToCreate;
			int32 amount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancesToCreate_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesToCreate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::NewProp_InstancesToCreate_Inner = { "InstancesToCreate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::NewProp_InstancesToCreate = { "InstancesToCreate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateInstances_Parms, InstancesToCreate), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateInstances_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::NewProp_InstancesToCreate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::NewProp_InstancesToCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTameshiInstancedMesh, nullptr, "CreateInstances", nullptr, nullptr, Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::TameshiInstancedMesh_eventCreateInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::TameshiInstancedMesh_eventCreateInstances_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics
	{
		struct TameshiInstancedMesh_eventCreateMapPointArray_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FMapPointArray DefArray;
			FMapPointArray MyArray;
			float DeltaMin;
			float DeltaMax;
			FVector FirstPoint;
			TArray<FMapLocate> OrderList;
			TArray<FMapLocate> DefPoint;
			FMapLocate StartPoint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrderList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefPoint_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefPoint_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefArray = { "DefArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, DefArray), Z_Construct_UScriptStruct_FMapPointArray, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefArray_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefArray_MetaData) }; // 3534224835
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_MyArray = { "MyArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, MyArray), Z_Construct_UScriptStruct_FMapPointArray, METADATA_PARAMS(0, nullptr) }; // 3534224835
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DeltaMin = { "DeltaMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, DeltaMin), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DeltaMax = { "DeltaMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, DeltaMax), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_FirstPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_FirstPoint = { "FirstPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, FirstPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_FirstPoint_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_FirstPoint_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_OrderList_Inner = { "OrderList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMapLocate, METADATA_PARAMS(0, nullptr) }; // 3310570964
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_OrderList = { "OrderList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, OrderList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3310570964
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefPoint_Inner = { "DefPoint", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMapLocate, METADATA_PARAMS(0, nullptr) }; // 3310570964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefPoint = { "DefPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, DefPoint), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefPoint_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefPoint_MetaData) }; // 3310570964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_StartPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMapPointArray_Parms, StartPoint), Z_Construct_UScriptStruct_FMapLocate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_StartPoint_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_StartPoint_MetaData) }; // 3310570964
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_MyArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DeltaMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DeltaMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_FirstPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_OrderList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_OrderList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefPoint_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_DefPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::NewProp_StartPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xb0\xe5\xbd\xa2\xe7\x94\x9f\xe6\x88\x90:\xe3\x81\x9d\xe3\x81\xae\xe9\x85\x8d\xe5\x88\x97\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\xe4\xb9\xb1\xe6\x95\xb0\xe5\x80\xa4\xe3\x81\x84\xe3\x81\x98\xe3\x81\xa3\xe3\x81\x9f\xe3\x82\x89\xe3\x81\x86\xe3\x81\xbe\xe3\x81\x84\xe5\x85\xb7\xe5\x90\x88\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8b\xef\xbc\x9f\xe6\xb0\x97\xe3\x81\x8c\xe3\x81\x99\xe3\x82\x8b\n//void RandomMapMaker(FVector** VertPoint,const FVector** ParentVertPoint,const FVector& FirstPoint);\n" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe5\xbd\xa2\xe7\x94\x9f\xe6\x88\x90:\xe3\x81\x9d\xe3\x81\xae\xe9\x85\x8d\xe5\x88\x97\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\xe4\xb9\xb1\xe6\x95\xb0\xe5\x80\xa4\xe3\x81\x84\xe3\x81\x98\xe3\x81\xa3\xe3\x81\x9f\xe3\x82\x89\xe3\x81\x86\xe3\x81\xbe\xe3\x81\x84\xe5\x85\xb7\xe5\x90\x88\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8b\xef\xbc\x9f\xe6\xb0\x97\xe3\x81\x8c\xe3\x81\x99\xe3\x82\x8b\nvoid RandomMapMaker(FVector** VertPoint,const FVector** ParentVertPoint,const FVector& FirstPoint);" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTameshiInstancedMesh, nullptr, "CreateMapPointArray", nullptr, nullptr, Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::TameshiInstancedMesh_eventCreateMapPointArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::TameshiInstancedMesh_eventCreateMapPointArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics
	{
		struct TameshiInstancedMesh_eventCreateMeshDataArray_Parms
		{
			FMapPointArray SetArray;
			TArray<FVector> ScaleArray;
			TArray<FVector> LocateArray;
			FVector FirstPoint;
			FMapLocate FirstDex;
			float Scale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScaleArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocateArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocateArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstDex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstDex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_SetArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_SetArray = { "SetArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArray_Parms, SetArray), Z_Construct_UScriptStruct_FMapPointArray, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_SetArray_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_SetArray_MetaData) }; // 3534224835
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_ScaleArray_Inner = { "ScaleArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_ScaleArray = { "ScaleArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArray_Parms, ScaleArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_LocateArray_Inner = { "LocateArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_LocateArray = { "LocateArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArray_Parms, LocateArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstPoint = { "FirstPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArray_Parms, FirstPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstPoint_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstDex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstDex = { "FirstDex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArray_Parms, FirstDex), Z_Construct_UScriptStruct_FMapLocate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstDex_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstDex_MetaData) }; // 3310570964
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArray_Parms, Scale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_SetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_ScaleArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_ScaleArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_LocateArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_LocateArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_FirstDex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTameshiInstancedMesh, nullptr, "CreateMeshDataArray", nullptr, nullptr, Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::TameshiInstancedMesh_eventCreateMeshDataArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::TameshiInstancedMesh_eventCreateMeshDataArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics
	{
		struct TameshiInstancedMesh_eventCreateMeshDataArrayOrder_Parms
		{
			FMapPointArray SetArray;
			TArray<FVector> ScaleArray;
			TArray<FVector> LocateArray;
			FVector FirstPoint;
			float Scale;
			TArray<FMapLocate> OrderList;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScaleArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocateArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocateArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrderList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_SetArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_SetArray = { "SetArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArrayOrder_Parms, SetArray), Z_Construct_UScriptStruct_FMapPointArray, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_SetArray_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_SetArray_MetaData) }; // 3534224835
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_ScaleArray_Inner = { "ScaleArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_ScaleArray = { "ScaleArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArrayOrder_Parms, ScaleArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_LocateArray_Inner = { "LocateArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_LocateArray = { "LocateArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArrayOrder_Parms, LocateArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_FirstPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_FirstPoint = { "FirstPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArrayOrder_Parms, FirstPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_FirstPoint_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_FirstPoint_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArrayOrder_Parms, Scale), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_OrderList_Inner = { "OrderList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMapLocate, METADATA_PARAMS(0, nullptr) }; // 3310570964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_OrderList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_OrderList = { "OrderList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventCreateMeshDataArrayOrder_Parms, OrderList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_OrderList_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_OrderList_MetaData) }; // 3310570964
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_SetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_ScaleArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_ScaleArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_LocateArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_LocateArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_FirstPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_OrderList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::NewProp_OrderList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa8\x88\xe7\xae\x97\xe9\xa0\x86\xe3\x81\xab\xe4\xb8\xa6\xe3\x81\xb9\xe3\x81\x9f\xe9\x85\x8d\xe5\x88\x97\xe3\x82\x92\xe4\xbd\x9c\xe3\x82\x8b\n" },
#endif
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa8\x88\xe7\xae\x97\xe9\xa0\x86\xe3\x81\xab\xe4\xb8\xa6\xe3\x81\xb9\xe3\x81\x9f\xe9\x85\x8d\xe5\x88\x97\xe3\x82\x92\xe4\xbd\x9c\xe3\x82\x8b" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTameshiInstancedMesh, nullptr, "CreateMeshDataArrayOrder", nullptr, nullptr, Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::TameshiInstancedMesh_eventCreateMeshDataArrayOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::TameshiInstancedMesh_eventCreateMeshDataArrayOrder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics
	{
		struct TameshiInstancedMesh_eventSampleDefMapMaker_Parms
		{
			FMapPointArray SetArray;
			FVector FirstPoint;
			FMapPointArray DefArray;
			TArray<FMapLocate> DefPoint;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefPoint_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_SetArray = { "SetArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventSampleDefMapMaker_Parms, SetArray), Z_Construct_UScriptStruct_FMapPointArray, METADATA_PARAMS(0, nullptr) }; // 3534224835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_FirstPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_FirstPoint = { "FirstPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventSampleDefMapMaker_Parms, FirstPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_FirstPoint_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_FirstPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_DefArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_DefArray = { "DefArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventSampleDefMapMaker_Parms, DefArray), Z_Construct_UScriptStruct_FMapPointArray, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_DefArray_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_DefArray_MetaData) }; // 3534224835
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_DefPoint_Inner = { "DefPoint", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMapLocate, METADATA_PARAMS(0, nullptr) }; // 3310570964
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_DefPoint = { "DefPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventSampleDefMapMaker_Parms, DefPoint), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3310570964
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_SetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_FirstPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_DefArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_DefPoint_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::NewProp_DefPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTameshiInstancedMesh, nullptr, "SampleDefMapMaker", nullptr, nullptr, Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::TameshiInstancedMesh_eventSampleDefMapMaker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::TameshiInstancedMesh_eventSampleDefMapMaker_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics
	{
		struct TameshiInstancedMesh_eventSetFMapPointArray_Parms
		{
			FMapPointArray SetArray;
			FMapPointArray DefArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::NewProp_SetArray = { "SetArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventSetFMapPointArray_Parms, SetArray), Z_Construct_UScriptStruct_FMapPointArray, METADATA_PARAMS(0, nullptr) }; // 3534224835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::NewProp_DefArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::NewProp_DefArray = { "DefArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TameshiInstancedMesh_eventSetFMapPointArray_Parms, DefArray), Z_Construct_UScriptStruct_FMapPointArray, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::NewProp_DefArray_MetaData), Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::NewProp_DefArray_MetaData) }; // 3534224835
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::NewProp_SetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::NewProp_DefArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTameshiInstancedMesh, nullptr, "SetFMapPointArray", nullptr, nullptr, Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::TameshiInstancedMesh_eventSetFMapPointArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::TameshiInstancedMesh_eventSetFMapPointArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTameshiInstancedMesh);
	UClass* Z_Construct_UClass_UTameshiInstancedMesh_NoRegister()
	{
		return UTameshiInstancedMesh::StaticClass();
	}
	struct Z_Construct_UClass_UTameshiInstancedMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Setform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Setform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_callcount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_callcount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrowCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DrowCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTameshiInstancedMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloSlime3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTameshiInstancedMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTameshiInstancedMesh_AddInstancesBySplitTime, "AddInstancesBySplitTime" }, // 1043304441
		{ &Z_Construct_UFunction_UTameshiInstancedMesh_CreateInstances, "CreateInstances" }, // 1997070363
		{ &Z_Construct_UFunction_UTameshiInstancedMesh_CreateMapPointArray, "CreateMapPointArray" }, // 1045852476
		{ &Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArray, "CreateMeshDataArray" }, // 1475672562
		{ &Z_Construct_UFunction_UTameshiInstancedMesh_CreateMeshDataArrayOrder, "CreateMeshDataArrayOrder" }, // 2159918692
		{ &Z_Construct_UFunction_UTameshiInstancedMesh_SampleDefMapMaker, "SampleDefMapMaker" }, // 2377415072
		{ &Z_Construct_UFunction_UTameshiInstancedMesh_SetFMapPointArray, "SetFMapPointArray" }, // 1890134610
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "TameshiInstancedMesh.h" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount = { "InstCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, InstCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform = { "Setform", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, Setform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc = { "FirstLoc", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, FirstLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount = { "callcount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, callcount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_DrowCount_MetaData[] = {
		{ "Category", "TameshiInstancedMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa5\x87\xe6\x95\xb0\xe5\x80\xa4\xe3\x81\xae\xe3\x81\xbf\xe3\x80\x81\xe5\xa4\x9a\xe5\x88\x86\xe5\x81\xb6\xe6\x95\xb0\xe3\x83\x90\xe3\x82\xb0\xe3\x82\x8b\n" },
#endif
		{ "ModuleRelativePath", "TameshiInstancedMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa5\x87\xe6\x95\xb0\xe5\x80\xa4\xe3\x81\xae\xe3\x81\xbf\xe3\x80\x81\xe5\xa4\x9a\xe5\x88\x86\xe5\x81\xb6\xe6\x95\xb0\xe3\x83\x90\xe3\x82\xb0\xe3\x82\x8b" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_DrowCount = { "DrowCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTameshiInstancedMesh, DrowCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_DrowCount_MetaData), Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_DrowCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTameshiInstancedMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_InstCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Setform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_FirstLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_callcount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameshiInstancedMesh_Statics::NewProp_DrowCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTameshiInstancedMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTameshiInstancedMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTameshiInstancedMesh_Statics::ClassParams = {
		&UTameshiInstancedMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTameshiInstancedMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UTameshiInstancedMesh_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTameshiInstancedMesh_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTameshiInstancedMesh()
	{
		if (!Z_Registration_Info_UClass_UTameshiInstancedMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTameshiInstancedMesh.OuterSingleton, Z_Construct_UClass_UTameshiInstancedMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTameshiInstancedMesh.OuterSingleton;
	}
	template<> HELLOSLIME3_API UClass* StaticClass<UTameshiInstancedMesh>()
	{
		return UTameshiInstancedMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTameshiInstancedMesh);
	UTameshiInstancedMesh::~UTameshiInstancedMesh() {}
	struct Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics::ScriptStructInfo[] = {
		{ FMapPoint::StaticStruct, Z_Construct_UScriptStruct_FMapPoint_Statics::NewStructOps, TEXT("MapPoint"), &Z_Registration_Info_UScriptStruct_MapPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapPoint), 318524278U) },
		{ FMapLocate::StaticStruct, Z_Construct_UScriptStruct_FMapLocate_Statics::NewStructOps, TEXT("MapLocate"), &Z_Registration_Info_UScriptStruct_MapLocate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapLocate), 3310570964U) },
		{ FMapPointArray::StaticStruct, Z_Construct_UScriptStruct_FMapPointArray_Statics::NewStructOps, TEXT("MapPointArray"), &Z_Registration_Info_UScriptStruct_MapPointArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapPointArray), 3534224835U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTameshiInstancedMesh, UTameshiInstancedMesh::StaticClass, TEXT("UTameshiInstancedMesh"), &Z_Registration_Info_UClass_UTameshiInstancedMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTameshiInstancedMesh), 1209306755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_3921117740(TEXT("/Script/HelloSlime3"),
		Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
