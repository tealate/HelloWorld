// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TameshiInstancedMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
struct FMapLocate;
struct FMapPointArray;
#ifdef HELLOSLIME3_TameshiInstancedMesh_generated_h
#error "TameshiInstancedMesh.generated.h already included, missing '#pragma once' in TameshiInstancedMesh.h"
#endif
#define HELLOSLIME3_TameshiInstancedMesh_generated_h

#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapPoint_Statics; \
	HELLOSLIME3_API static class UScriptStruct* StaticStruct();


template<> HELLOSLIME3_API UScriptStruct* StaticStruct<struct FMapPoint>();

#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapLocate_Statics; \
	HELLOSLIME3_API static class UScriptStruct* StaticStruct();


template<> HELLOSLIME3_API UScriptStruct* StaticStruct<struct FMapLocate>();

#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapPointArray_Statics; \
	HELLOSLIME3_API static class UScriptStruct* StaticStruct();


template<> HELLOSLIME3_API UScriptStruct* StaticStruct<struct FMapPointArray>();

#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_SPARSE_DATA
#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSampleDefMapMaker); \
	DECLARE_FUNCTION(execAddInstancesBySplitTime); \
	DECLARE_FUNCTION(execCreateMeshDataArrayOrder); \
	DECLARE_FUNCTION(execSetFMapPointArray); \
	DECLARE_FUNCTION(execCreateMeshDataArray); \
	DECLARE_FUNCTION(execCreateMapPointArray); \
	DECLARE_FUNCTION(execCreateInstances);


#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_ACCESSORS
#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTameshiInstancedMesh(); \
	friend struct Z_Construct_UClass_UTameshiInstancedMesh_Statics; \
public: \
	DECLARE_CLASS(UTameshiInstancedMesh, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelloSlime3"), NO_API) \
	DECLARE_SERIALIZER(UTameshiInstancedMesh)


#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTameshiInstancedMesh(UTameshiInstancedMesh&&); \
	NO_API UTameshiInstancedMesh(const UTameshiInstancedMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTameshiInstancedMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTameshiInstancedMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTameshiInstancedMesh) \
	NO_API virtual ~UTameshiInstancedMesh();


#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_43_PROLOG
#define FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_SPARSE_DATA \
	FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_ACCESSORS \
	FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_INCLASS_NO_PURE_DECLS \
	FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELLOSLIME3_API UClass* StaticClass<class UTameshiInstancedMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CUEProject_HelloSlime3_Source_HelloSlime3_TameshiInstancedMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
