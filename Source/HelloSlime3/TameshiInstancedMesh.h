// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"

#include "TameshiInstancedMesh.generated.h"



USTRUCT(BlueprintType)
struct FMapPoint
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	float Point;
	UPROPERTY(EditAnywhere)
	bool IsNotNull = false;
	UPROPERTY(EditAnywhere)
	bool IsHoll = false;
};
USTRUCT(BlueprintType)
struct FMapLocate
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	int x;
	UPROPERTY(EditAnywhere)
	int y;
};
USTRUCT(BlueprintType)
struct FMapPointArray
{
	GENERATED_BODY()
	//配列のサイズを取得する
	UPROPERTY(EditAnywhere)
	int Size;
	TArray<TArray<FMapPoint>> PointArray;
};

USTRUCT(BlueprintType)
struct FSampleMapPoint
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	float Point;
	UPROPERTY(EditAnywhere)
	bool IsNotNull = false;
	UPROPERTY(EditAnywhere)
	bool IsHoll = false;
	UPROPERTY(EditAnywhere)
	int x;
	UPROPERTY(EditAnywhere)
	int xlength = x;
	UPROPERTY(EditAnywhere)
	int y;
	UPROPERTY(EditAnywhere)
	int ylength = y;
};
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class HELLOSLIME3_API UTameshiInstancedMesh : public UInstancedStaticMeshComponent
{
	GENERATED_BODY()
public:
	UTameshiInstancedMesh();
	UPROPERTY(Editanywhere)
	int InstCount = 10;

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	TArray<TArray<FVector>> MapPointVec;
	int threadcount = 0;
private:
	UPROPERTY(EditAnywhere)
	FTransform Setform;
	UPROPERTY(EditAnywhere)
	FVector FirstLoc;
	FVector SetLoc;
	UPROPERTY(EditAnywhere)
	int Distance = 500;
	UPROPERTY(EditAnywhere)
	int callcount = 100;
	TArray<FTransform> Forms;
	//奇数値のみ、多分偶数バグる
	UPROPERTY(EditAnywhere)
	int DrowCount = 101;
	FMapPoint** MapPoint;

	void DiamondSquare();
	void SetInst();
	void SetInstAtArray();
	UFUNCTION(BlueprintCallable)
	void CreateInstances(TArray<FTransform>& InstancesToCreate, int amount);
	FMapPoint** MapMakerHub(FVector FirstPoint, float MakeDistance, float DeltaMin, float DeltaMax);
	void RandomMapMaker(FMapPoint**& VertPoint, const FVector& FirstPoint, int amount, float DeltaMin, float DeltaMax);
	void DebugMapDrawMan(FMapPoint**& VertPoint, FColor Color, int amount, float Scale);
	//再起をやる関数
	void InductiveMapPartsGenerator(FMapPoint**& VertPoint, int MyX, int MyY, int amount, float DeltaMin, float DeltaMax, const FVector& FirstPoint);
	TArray<TArray<FVector>> MapPointToVector(FMapPoint**& VertPoint, int amount, float Scale,const FVector& FirstPoint);
	//地形生成:その配列からの距離に応じて乱数値いじったらうまい具合になる？気がする
	//void RandomMapMaker(FVector** VertPoint,const FVector** ParentVertPoint,const FVector& FirstPoint);
	UFUNCTION(BlueprintCallable, meta=(Latent, WorldContext="WorldContextObject", LatentInfo="LatentInfo"))
	void CreateMapPointArray(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FMapPointArray& DefArray, FMapPointArray& MyArray, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& OrderList, const TArray<FMapLocate>& DefPoint, const FMapLocate& StartPoint);
	UFUNCTION(BlueprintCallable)
	void CreateMeshDataArray(const FMapPointArray& SetArray, TArray<FVector>& ScaleArray, TArray<FVector>& LocateArray,const FVector& FirstPoint,const FMapLocate& FirstDex, float Scale);
	UFUNCTION(BlueprintCallable)
	void SetFMapPointArray(FMapPointArray& SetArray, const FMapPointArray& DefArray);
	//計算順に並べた配列を作る
	UFUNCTION(BlueprintCallable)
	void CreateMeshDataArrayOrder(const FMapPointArray& SetArray, TArray<FVector>& ScaleArray, TArray<FVector>& LocateArray, const FVector& FirstPoint, float Scale, const TArray<FMapLocate>& OrderList);
	//addinstancesを時間で分割して呼び出す関数
	UFUNCTION(BlueprintCallable)
	void AddInstancesBySplitTime(const TArray<FTransform>& InstancesTransform, int StartIndex, int& CompleteCount, int OrderDiv, float TickTime);
	UFUNCTION(BlueprintCallable)
	void SampleDefMapMaker(FMapPointArray& SetArray, const FVector& FirstPoint,const FMapPointArray& DefArray, TArray<FMapLocate>& DefPoint, float Hight);
};

class FSyncMapGenerator : public FPendingLatentAction
{
	FLatentActionInfo m_LatentInfo;
	TSharedPtr<bool> Complete = MakeShared<bool>(false);
	int MaxToken;
	float m_TotalSecond = 0.0f;
public :
	FSyncMapGenerator(const FLatentActionInfo& LatentInfo, FMapPointArray& VertPoint, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& OrderList, const TArray<FMapLocate>& DefPoint, const FMapLocate& StartPoint);
	//再起っぽい何かやるもの、円状に広がる
	bool InductiveMapPartsGeneratorCircle(FMapPointArray& VertPoint, FMapLocate MyPoint, const float DeltaMin, const float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& MyTaskList, TArray<FMapLocate>& DefList);
	//本体、呼び出し、終了の判定と再起処理の呼び出し行う
	void SyncMapGeneratorHub(FMapPointArray& VertPoint, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& OrderList, const TArray<FMapLocate>& DefPoint, const FMapLocate& StartPoint);
	virtual void UpdateOperation(FLatentResponse& Response) override;
};