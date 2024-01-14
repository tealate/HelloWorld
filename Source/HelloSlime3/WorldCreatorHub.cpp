// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldCreatorHub.h"

// Sets default values for this component's properties
UWorldCreatorHub::UWorldCreatorHub()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldCreatorHub::BeginPlay()
{
	Super::BeginPlay();
	ChankCreateMan(GetOwner()->GetActorLocation(), true);
	// ...
	
}


// Called every frame
void UWorldCreatorHub::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(DrawChank)DebugAtBoxList(&ChankGroupList);
	// ...
}

void UWorldCreatorHub::DebugAtBoxList(FChankGroup** MyBoxList)
{
	if(Slice.Num() == 0)return;
	FVector CentorMan;
	FVector ScaleMan;
	//UE_LOG(LogTemp, Display, TEXT("%d"),a);
	for(int i = Slice.Num() - 1; i >= 0; i--)
	{
		CentorMan = FVector(((*MyBoxList)[i].Scale)/2,((*MyBoxList)[i].Scale)/2,((*MyBoxList)[i].Scale)/2);
		ScaleMan = FVector(((*MyBoxList)[i].Scale),((*MyBoxList)[i].Scale),((*MyBoxList)[i].Scale));
		int unko = 0;
		for(int j = ChankCount[i]-1; j >= 0; j--)
		{
			for(int k = ChankCount[i]-1; k >= 0; k--)
			{
				for(int l = ChankCount[i]-1; l >= 0; l--)
				{
					unko++;
					//UE_LOG(LogTemp, Display, TEXT("DrawBy:%d,%d,%d,%d"),i,j,k,l);
					FVector a = (*((*MyBoxList)[i].ChankVecList[j][k][l])).MyLocationStart;
					FVector b = (*((*MyBoxList)[i].ChankVecList[j][k][l])).MyLocationEnd;
					FString DebugText = FString::Printf(TEXT("MyStart : %s \n MyEnd : %s \n MySize : %d \n MyIndex : %d,%d,%d"),*a.ToString(),*b.ToString(),i,j,k,l);
					//DrawDebugLine(GetWorld(), (*((*MyBoxList)[i].ChankVecList[j][k][l])).MyLocationStart,(*((*MyBoxList)[i].ChankVecList[j][k][l])).MyLocationEnd,FColor(j*10,k*10,l*10));
					//DrawDebugBox(GetWorld(), (*((*MyBoxList)[i].ChankVecList[j][k][l])).MyLocationStart + CentorMan /*+ FVector(j*10,k*10,l*10)*/,ScaleMan,ChankColor[i],0);
					DrawDebugLine(GetWorld(), a,FVector(a.X,a.Y,b.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), a,FVector(a.X,b.Y,a.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), a,FVector(b.X,a.Y,a.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), b,FVector(a.X,b.Y,b.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), b,FVector(b.X,a.Y,b.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), b,FVector(b.X,b.Y,a.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), FVector(a.X,b.Y,b.Z),FVector(a.X,a.Y,b.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), FVector(a.X,b.Y,b.Z),FVector(a.X,b.Y,a.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), FVector(b.X,b.Y,a.Z),FVector(a.X,b.Y,a.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), FVector(b.X,b.Y,a.Z),FVector(b.X,a.Y,a.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), FVector(b.X,a.Y,b.Z),FVector(a.X,a.Y,b.Z),ChankColor[i]);
					DrawDebugLine(GetWorld(), FVector(b.X,a.Y,b.Z),FVector(b.X,a.Y,a.Z),ChankColor[i]);
					//DrawDebugString(GetWorld(), a, DebugText, nullptr, ChankColor[i]);
				}
			}
		}
	}
}

void UWorldCreatorHub::DebugAtLineList(const TArray<FVector>& MyLineList)
{
	if(MyLineList.Num() == 0)return;
	for(int i = 0; i < MyLineList.Num();i++)
	{
		DrawDebugLine(GetWorld(),LineList[i],LineList[(i+1)%LineList.Num()],FColor::Red, false, 5);
	}
}

void UWorldCreatorHub::SponeMan(UClass* Target, TArray<FTransform>& Basyo)
{

}
void UWorldCreatorHub::CityShadowMaker()
{
	//チャンクの描画、プレイヤーからの距離ごとの細分化
	//列車やら無限に続く道やらの優先順位一番のやつ配置
}

void UWorldCreatorHub::ChankCreateMan(const FVector PLocate, bool Draw)//チャンクの初期値設定
{
	float MinChankSize = FirstChankScale;
	for(int a : Slice)MinChankSize = MinChankSize/a;
	FVector PlayerChank;
	ChankList = new FChank*[Slice.Num()];
	for(int i = 0; i < Slice.Num(); i++)ChankList[i] = new FChank[1100];
	ChankGroupList = new FChankGroup[Slice.Num()];
	int ChankKind = Slice.Num();
	float ChankSize = FirstChankScale;
	int setcount = 0;
	int Countman;
	for(int i = 0; i < ChankKind; i++)
	{
		ChankGroupList[i].Scale = ChankSize/Slice[i];
		float MyScale = ChankSize/Slice[i];
		ChankSize = MyScale;

		ChankGroupList[i].Count = ChankCount[i];
		int MyCount = ChankCount[i];

		ChankGroupList[i].Distance = ChankCount[i] * ChankGroupList[i].Scale;
		float MyDistance = ChankGroupList[i].Distance;

		Countman = ChankGroupList[i].Count - 1;

		ChankGroupList[i].ChankVecList = new FChank***[ChankCount[i]];

		PlayerChank = FVector(
		FMath::FloorToInt(PLocate.X / MyScale) * MyScale,
    	FMath::FloorToInt(PLocate.Y / MyScale) * MyScale,
    	FMath::FloorToInt(PLocate.Z / MyScale) * MyScale);

		for(int x = Countman; x >= 0; x--)
		{
			ChankGroupList[i].ChankVecList[x] = new FChank**[Countman+1];
			for(int y = Countman; y >= 0; y--)
			{
				ChankGroupList[i].ChankVecList[x][y] = new FChank*[Countman+1];
				for(int z = Countman; z >= 0; z--)
				{
					//UE_LOG(LogTemp, Display, TEXT("%d,%d,%d,%d"),i,x,y,z);
					ChankGroupList[i].ChankVecList[x][y][z] = FirstSetChank(i,x,y,z,MyScale,PlayerChank);
					setcount++;
				}
			}
		}
	}
	UE_LOG(LogTemp, Display, TEXT("setcount:%d"),setcount);
}

int UWorldCreatorHub::GetChankCount()
{
	return 0;//ChankList.Num()いれてた
}

TArray<int> UWorldCreatorHub::CallCountMan()
{
	return CallCount;
}

FChank* UWorldCreatorHub::FirstSetChank(int dexa, int x, int y, int z, float Size, FVector CentorPoint)
{
	//UE_LOG(LogTemp, Display, TEXT("Callto:%d,%d,%d,%f"),x,y,z,Size);
	float firstpoint = (Size / 2) * ChankCount[dexa];
	float pointx = (Size * x) - firstpoint + CentorPoint.X;
	float pointy = (Size * y) - firstpoint + CentorPoint.Y;
	float pointz = (Size * z) - firstpoint + CentorPoint.Z;
	ChankList[dexa][counter[dexa]].MyLocationStart = FVector(pointx,pointy,pointz);
	ChankList[dexa][counter[dexa]].MyLocationEnd = FVector(pointx + Size, pointy + Size, pointz + Size);
	counter[dexa]++;
	//UE_LOG(LogTemp, Display, TEXT("Set: %d,%d"),dexa,counter[dexa]-1);
	return &(ChankList[dexa][counter[dexa]-1]);
}