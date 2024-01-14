// Fill out your copyright notice in the Description page of Project Settings.

//最初にアクタークラスで作成したCityCreatorをアクターコンポーネントにしたやつ、猛省しろ
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WorldCreatorHub.generated.h"


USTRUCT(BlueprintType)
struct FChankGroup
{
	GENERATED_BODY()
	FChank**** ChankVecList;
	int Count;
	float Scale;
	float Distance;
	int Centor;
};

USTRUCT(BlueprintType)
struct FChank
	{
		GENERATED_BODY()
		TArray<FChank*> ChildChank;
		TArray<FChank*> ParentChank;
		FVector MyLocationStart;
		FVector MyLocationEnd;
		FVector MyScale;
		int8 MyFloorNumber;
	};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HELLOSLIME3_API UWorldCreatorHub : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWorldCreatorHub();

	UPROPERTY(EditAnywhere)
	UClass* InstanceTarget;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	TArray<int> ChankCount;
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	float FirstChankScale;
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	TArray<int> Slice;
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	TArray<FColor> ChankColor;
	UPROPERTY(EditAnywhere, Category = "ChankDebug")
	bool DrawChank;
	AActor* Chactor;
	TArray<int> CallCount;
	TArray<float> ChankScale;

	int counter[5] = {0,0,0,0,0};

	//UFUNCTION(BlueprintCallable)
	void DebugAtBoxList(FChankGroup** MyBoxList);
	void DebugAtLineList(const TArray<FVector>& LineList);
	void CityShadowMaker();
	void SponeMan(UClass* Target, TArray<FTransform>& Basyo);
	void ChankCreateMan(const FVector PLocate, bool Draw);
	UFUNCTION(BlueprintCallable)
	int GetChankCount();
	UFUNCTION(BlueprintCallable)
	TArray<int> CallCountMan();
	TArray<FTransform> BoxList;
	TArray<FVector> LineList;
	//TArray<FChank> ChankList;//全部のチャンクのリスト
	FChankGroup* ChankGroupList;//全チャンクのサイズごとの配列,アドレス格納の四重配列
	FChank** ChankList;//全部のチャンクの配列のサイズごとの配列
	TArray<FChank*>* EmptMemList;//チャンク配列の空いたインデックスを保管するやつ
	FChank* FirstSetChank(int dex, int x, int y, int z, float Size, FVector CentorPoint);//チャンクを配列の空いた位置にぶち込み太郎
};
