// Fill out your copyright notice in the Description page of Project Settings.


#include "TameshiInstancedMesh.h"
#include "Async/Async.h"
#include "Kismet/KismetSystemLibrary.h"
#include <future>
#include "Containers/ArrayView.h"
#include "TameshiInstancedMesh.h"

UTameshiInstancedMesh::UTameshiInstancedMesh()
{
    PrimaryComponentTick.bCanEverTick = true;
    //SetInstAtArray();
    //AddInstances(Forms, false);
}

void UTameshiInstancedMesh::BeginPlay()
{
    /*MapPoint = MapMakerHub(FVector(0,0,0), 10000, 50, 100);
    MapPointVec = MapPointToVector(MapPoint, DrowCount, 100, FVector(0,0,0));
    //DebugMapDrawMan(MapPoint, FColor::Red, DrowCount, 1000/DrowCount);
    for(int i = 0;i < DrowCount; i++)
    {
        for( int j = 0; j < DrowCount; j++)
        {
            Setform.SetLocation(MapPointVec[i][j]);
            Forms.Add(Setform);
        }
    }
    AddInstances(Forms, false);*/
}

void UTameshiInstancedMesh::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    //DebugMapDrawMan(MapPoint, FColor::Red, DrowCount, 1000/DrowCount);
    /*static int delaycount = 0;
    static int delaycountatinst = 0;

    if(delaycount == 100) SetInstAtArray();
    if(delaycount == 200)
    {
        AddInstances(Forms, false);
    }

    delaycount++;
    delaycountatinst++;*/
}
void UTameshiInstancedMesh::SetInst()
{
    static int counterx = 0;
    static int countery = 0;
    static int counterz = 0;
    static int countman = 0;
    static bool kasu = false;
    countman++;
    if(countman < 100)return;
    for(int i = 0; i < callcount; i++)
    {
        if(kasu)break;
        if(counterx < InstCount)
        {
            counterx++;
        }
        else
        {
            counterx = 0;
            if(countery < InstCount)
            {
                countery++;
            }
            else
            {
                countery = 0;
                if(counterz < InstCount)
                {
                    counterz++;
                }
                else
                {
                    kasu = true;
                    break;
                }
            }
        }
        SetLoc = FirstLoc + FVector(Distance * counterx, Distance * countery, Distance * counterz);
        Setform.SetLocation(SetLoc);
        AddInstance(Setform);
    }
}
void UTameshiInstancedMesh::SetInstAtArray()
{
    for(int i = 0; i < InstCount; i++)
    {
        for(int j = 0; j < InstCount; j++)
        {
            for(int l = 0; l < InstCount; l++)
            {
                SetLoc = FirstLoc + FVector(Distance * i, Distance * j, Distance * l);
                Setform.SetLocation(SetLoc);
                Forms.Add(Setform);
            }
        }
    }
}
void UTameshiInstancedMesh::CreateInstances(TArray<FTransform>& InstancesToCreate, int amount)
{
    for(int i = 0; i < amount; i++)
    {
        for(int j = 0; j < amount; j++)
        {
            for(int l = 0; l < amount; l++)
            {
                SetLoc = FirstLoc + FVector(Distance * i, Distance * j, Distance * l);
                Setform.SetLocation(SetLoc);
                InstancesToCreate.Add(Setform);
            }
        }
    }
}
FMapPoint** UTameshiInstancedMesh::MapMakerHub(FVector FirstPoint, float MakeDistance, float DeltaMin, float DeltaMax)
{
    if(DrowCount % 2 == 0)DrowCount++;
    FMapPoint** VertPoint = new FMapPoint*[DrowCount];
    for(int i = 0; i < DrowCount; i++)
    {
        VertPoint[i] = new FMapPoint[DrowCount];
        for(int j = 0; j < DrowCount; j++)
        {
            VertPoint[i][j].IsNotNull = false;
        }
    }
    RandomMapMaker(VertPoint, FirstPoint, DrowCount, DeltaMin, DeltaMax);
    return VertPoint;
    //DebugMapDrawMan(VertPoint, FColor::Red, DrowCount, MakeDistance/DrowCount);
}
void UTameshiInstancedMesh::RandomMapMaker(FMapPoint**& VertPoint, const FVector& FirstPoint, int amount, float DeltaMin, float DeltaMax)
{
    //ダイアモンドスクエアアルゴリズムで地形生成
    if(true){//試作1
        //FVector** VertPoint = new FVector*[amount];
        /*for(int i = 0; i < amount; i++)
        {
            VertPoint[i] = new FVector[amount];
        }*/
        VertPoint[(amount-1)/2][(amount-1)/2].Point = FirstPoint.Z;
        VertPoint[(amount-1)/2][(amount-1)/2].IsNotNull = true;
        InductiveMapPartsGenerator(VertPoint, (amount-1)/2, (amount-1)/2, amount, DeltaMin, DeltaMax, FirstPoint);
    }
}
void UTameshiInstancedMesh::DebugMapDrawMan(FMapPoint**& VertPoint, FColor Color, int amount, float Scale)
{
    int centor = (amount-1)/2;
    for(int i = 0; i < amount; i++)
    {
        for(int j = 0; j < amount; j++)
        {
            if(VertPoint[i][j].IsNotNull)
            {
                DrawDebugPoint(GetWorld(), FVector(Scale * i , Scale * j,  VertPoint[i][j].Point), 10, Color, false, 0.1);
                //UE_LOG(LogTemp, Display, TEXT("DrawPoint:%d,%d = %s"),i,j,*FVector(Scale * i , Scale * j,  VertPoint[i][j].Point).ToString());
            }
            if(i == amount - 1 && j == amount - 1)break;
            //if(j != amount-1)DrawDebugLine(GetWorld(), FVector(Scale * (i - centor) , Scale *(j - centor) ,  VertPoint[i][j].Point), FVector(Scale * (i - centor) , Scale *(j+1-centor) ,  VertPoint[i][j+1].Point), Color);
            //if(i != amount-1)DrawDebugLine(GetWorld(), FVector(Scale * (i - centor) , Scale *j ,  VertPoint[i][j].Point), FVector(Scale *(i+1-centor) , Scale *(j - centor) ,  VertPoint[i+1][j].Point), Color);
        }
    }
}

void UTameshiInstancedMesh::InductiveMapPartsGenerator(FMapPoint**& VertPoint, int MyX, int MyY, int amount, float DeltaMin, float DeltaMax, const FVector& FirstPoint)
{
    //DeltaMaxは高低差の最大値Deltamaxは高さの最大値、ややこしいね
    int Sidecount = 1;
    float sum = FirstPoint.Z;
    float Deltamax = DeltaMin;
    float Deltamin = -DeltaMin;
    float Delta = 0;
    bool SideCall[3][3];
    float MyDelta = 0;
    UE_LOG(LogTemp, Warning, TEXT("MyX:%d,MyY:%d,amount:%d"),MyX,MyY,amount);
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            SideCall[i+1][j+1] = (MyX + i >= 0 && MyX + i < amount && MyY + j >= 0 && MyY + j < amount);
        }
    }
    SideCall[1][1] = false;
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1;j++)
        {
            if(SideCall[i+1][j+1] && VertPoint[MyX + i][MyY + j].IsNotNull && !VertPoint[MyX + i][MyY + j].IsHoll)//自分の隣があるか、穴じゃないか
            {
                sum += VertPoint[MyX + i][MyY + j].Point;
                Sidecount++;
                SideCall[i+1][j+1] = false;
                if(MyY + i * 2 >= 0 && MyY + i * 2 < amount && MyX + j * 2 >= 0 && MyX + j * 2 < amount)//自分の2マス先があるか(実質nullチェック)
                {
                    if(VertPoint[MyX + i * 2][MyY + j * 2].IsNotNull && !VertPoint[MyX + i * 2][MyY + j * 2].IsHoll)//自分の2マス先が作られているか、穴じゃないか
                    {
                        MyDelta = VertPoint[MyX + i][MyY + j].Point - VertPoint[MyX + i*2][MyY + j*2].Point;//なんて言えばいいんだこれ、なんか積分みたいなやつ
                        //隣があった場合、そのさらに隣のマスの高さとの差を取る、これがデルタの最大値、最小値になる
                        if(Deltamax < MyDelta)Deltamax = MyDelta;
                        if(Deltamin > MyDelta)Deltamin = MyDelta;
                    }
                }
            }
        }
    }
    VertPoint[MyX][MyY].Point = sum / Sidecount;
    if(-DeltaMax > Deltamin)Deltamin = -DeltaMax;
    if(DeltaMax < Deltamax)Deltamax = DeltaMax;
    Delta = FMath::RandRange(Deltamin, Deltamax);
    VertPoint[MyX][MyY].Point += Delta;
    VertPoint[MyX][MyY].IsNotNull = true;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2;j++)
        {
            if(SideCall[i][j])
            {
                InductiveMapPartsGenerator(VertPoint, MyX + i - 1, MyY + j - 1, amount, DeltaMin, DeltaMax, FirstPoint);
            }
        }
    }
}

TArray<TArray<FVector>> UTameshiInstancedMesh::MapPointToVector(FMapPoint**& VertPoint, int amount, float Scale,const FVector& FirstPoint)
{
    TArray<TArray<FVector>> VertPointVec;
    TArray<FVector> VertPointVecRow;
    for(int i = 0; i < amount; i++)
    {
        for(int j = 0; j < amount; j++)
        {
            VertPointVecRow.Add(FVector(Scale * i, Scale * j,  VertPoint[i][j].Point) + FirstPoint);
        }
        VertPointVec.Add(VertPointVecRow);
        VertPointVecRow.Empty();
    }
    return VertPointVec;
}

void UTameshiInstancedMesh::CreateMapPointArray(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FMapPointArray& DefArray, FMapPointArray& MyArray, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& OrderList, const TArray<FMapLocate>& DefPoint = TArray<FMapLocate>(), const FMapLocate& StartPoint = FMapLocate{-1,0})
{
    MyArray.Size = DefArray.Size;
    if(DefArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMapPointArray"));
        return;
    }
    MyArray.PointArray.SetNum(DefArray.Size);
    if(MyArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMapPointArray2"));
        return;
    }
    //DefArray.PointArray.SetNum(DefArray.Size);
    for(int i = 0; i < DefArray.PointArray.Num(); i++)
    {
        MyArray.PointArray[i].SetNum(DefArray.Size);
        //DefArray.PointArray[i].SetNum(DefArray.Size);
        for(int j = 0; j < DefArray.Size; j++)
        {
            MyArray.PointArray[i][j] = DefArray.PointArray[i][j];
        }
    }
    if(MyArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMapPointArray3"));
        return;
    }
    OrderList = DefPoint;
    if(UWorld* World=GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FSyncMapGenerator(LatentInfo, MyArray, DeltaMin, DeltaMax, FirstPoint, OrderList, DefPoint, StartPoint));
	}
}
void UTameshiInstancedMesh::SetFMapPointArray(FMapPointArray& SetArray, const FMapPointArray& DefArray)
{
    SetArray.Size = DefArray.Size;
    SetArray.PointArray.SetNum(DefArray.Size);
    for(int i = 0; i < DefArray.Size; i++)
    {
        SetArray.PointArray[i].SetNum(DefArray.Size);
        for(int j = 0; j < DefArray.Size; j++)
        {
            //SetArray.PointArray[i][j] = DefArray.PointArray[i][j];
            SetArray.PointArray[i][j].Point = 0;
        }
    }
    if(SetArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatSetFMapPointArray"));
    }
}

void UTameshiInstancedMesh::CreateMeshDataArray(const FMapPointArray& SetArray, TArray<FVector>& ScaleArray, TArray<FVector>& LocateArray,const FVector& FirstPoint,const FMapLocate& FirstDex, float Scale)
{
    if(SetArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMeshDataArray"));
        return;
    }
    for(int i = 0; i < SetArray.Size; i++)
    {
        for(int j = 0; j < SetArray.Size; j++)
        {
            ScaleArray.Add(FVector(1,1,SetArray.PointArray[i][j].Point));
            LocateArray.Add(FVector(FirstPoint.X + Scale * i, FirstPoint.Y + Scale * j,SetArray.PointArray[i][j].Point));
        }
    }

}

void UTameshiInstancedMesh::CreateMeshDataArrayOrder(const FMapPointArray& SetArray, TArray<FVector>& ScaleArray, TArray<FVector>& LocateArray, const FVector& FirstPoint,float Scale,const TArray<FMapLocate>& OrderList)
{
    if(SetArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatCreateMeshDataArray"));
        return;
    }
    for(int i = 0; i < OrderList.Num(); i++)
    {
        ScaleArray.Add(FVector(1,1,SetArray.PointArray[OrderList[i].x][OrderList[i].y].Point));
        LocateArray.Add(FVector(FirstPoint.X + Scale * OrderList[i].x, FirstPoint.Y + Scale * OrderList[i].y, SetArray.PointArray[OrderList[i].x][OrderList[i].y].Point));
    }
}
//VertPoint:地形の途中データ、MyPoint:自分の座標？中心座標、試しに中心から生成（通常のアルゴリズム）試すためのやつ、使うな、DeltaMin:高低差の最小値、DeltaMax:高低差の最大値、FirstPoint:地形の中心座標、OrderList:計算順に並べた座標のリスト、生成するときに使う
FSyncMapGenerator::FSyncMapGenerator(const FLatentActionInfo& LatentInfo, FMapPointArray& VertPoint, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& OrderList, const TArray<FMapLocate>& DefPoint = TArray<FMapLocate>(), const FMapLocate& StartPoint = FMapLocate{-1,0}) : m_LatentInfo(LatentInfo)
{
    *Complete = false;
    SyncMapGeneratorHub(VertPoint,DeltaMin,DeltaMax,FirstPoint,OrderList,DefPoint,StartPoint);
}

void FSyncMapGenerator::SyncMapGeneratorHub(FMapPointArray& VertPoint, float DeltaMin, float DeltaMax, const FVector& FirstPoint,TArray<FMapLocate>& OrderList, const TArray<FMapLocate>& DefPoint = TArray<FMapLocate>(), const FMapLocate& StartPoint = FMapLocate{-1,0})
{
    double timecount = FPlatformTime::Seconds();
    TArray<TArray<FMapLocate>> MyTaskList;
    for(int i = 0; i < 3; i++)MyTaskList.Add(TArray<FMapLocate>());
    if(DefPoint.Num() != 0)MyTaskList[0] = DefPoint;
    else{
        for(int i = 0; i < VertPoint.Size; i++)
        {
            for(int j = 0; j < VertPoint.Size; j++)
            {
                if(VertPoint.PointArray[i][j].IsNotNull && !VertPoint.PointArray[i][j].IsHoll)
                {
                    MyTaskList[0].Add(FMapLocate{i,j});
                }
            }
        }
    }
    if(MyTaskList[0].Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNull at SyncMapGeneratorHub"));
        return;
    }
    for(int i = 0; i < MyTaskList[0].Num(); i++)
    {
        for(int x = 0; x < 3; x++)
        {
            for(int y = 0; y < 3; y++)
            {
                if(MyTaskList[0][i].x + x - 1 >= 0 && MyTaskList[0][i].x + x - 1 < VertPoint.Size && MyTaskList[0][i].y + y - 1 >= 0 && MyTaskList[0][i].y + y - 1 < VertPoint.Size)
                {
                    if(!VertPoint.PointArray[MyTaskList[0][i].x + x - 1][MyTaskList[0][i].y + y - 1].IsNotNull && !VertPoint.PointArray[MyTaskList[0][i].x + x - 1][MyTaskList[0][i].y + y - 1].IsHoll)
                    {
                        UE_LOG(LogTemp, Display, TEXT("AddTask:%d,%d"),MyTaskList[0][i].x + x - 1,MyTaskList[0][i].y + y - 1);
                        MyTaskList[1].Add(FMapLocate{MyTaskList[0][i].x + x - 1,MyTaskList[0][i].y + y - 1});
                    }
                }
            }
        }
    }
    UE_LOG(LogTemp, Display, TEXT("TaskList0:%d"),MyTaskList[0].Num());
    UE_LOG(LogTemp, Display, TEXT("TaskList1:%d"),MyTaskList[1].Num());
    //InductiveMapPartsGeneratorCircleに自己再起させると座標指定の順番キショいので、段階的？に呼び出している
    //自己再起だと呼び出し地点から一番遠いところからわけわからん順番
    //今のだとInductive以下略でタスク追加させて、また塊で呼び出してなので呼び出し地点から円形？に呼び出している
    //リストを毎回入れなおすと重いのでその防止のためだいぶ汚いコード、以下に説明
    //MyTaskListを三つ用意、座標を決定するための参照するリスト、座標を決めるタスクのリスト、次の座標を決めるためのリスト
    //MyTaskList[i]を処理する場合はi-1を計算に必要な座標リスト、i+1を次の計算タスクリストとして使う
    for(int i = 0;true;i++){
        for(int j = 0; j < MyTaskList[(i+1)%3].Num(); j++){
            if(VertPoint.PointArray[MyTaskList[(i+1)%3][j].x][MyTaskList[(i+1)%3][j].y].IsNotNull)
            {
                continue;
            }
            else 
            {
                OrderList.Add(MyTaskList[(i+1)%3][j]);
                InductiveMapPartsGeneratorCircle(VertPoint, MyTaskList[(i+1)%3][j], DeltaMin, DeltaMax, FirstPoint, MyTaskList[(i+2)%3], MyTaskList[i%3]);
            }
        }
        if(MyTaskList[(i+2)%3].Num() == 0)break;
        MyTaskList[i%3].Empty();
    }
    *Complete = true;
    UE_LOG(LogTemp, Display, TEXT("Time:%f"),FPlatformTime::Seconds() - timecount);
}

void FSyncMapGenerator::InductiveMapPartsGeneratorCircle(FMapPointArray& VertPoint, FMapLocate MyPoint, float DeltaMin, float DeltaMax, const FVector& FirstPoint, TArray<FMapLocate>& MyTaskList, TArray<FMapLocate>& DefList)
{
    //DeltaMaxは高低差の最大値Deltamaxは高さの最大値、ややこしいね
    int amount = VertPoint.PointArray.Num();
    int Sidecount = 0;
    float sum = 0;
    float Deltamax = DeltaMin;
    float Deltamin = -DeltaMin;
    float Delta = 0;
    bool SideCall[3][3];
    float MyDelta = 0;
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            SideCall[i+1][j+1] = (MyPoint.x + i >= 0 && MyPoint.x + i < amount && MyPoint.y + j >= 0 && MyPoint.y + j < amount);
        }
    }
    SideCall[1][1] = false;
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1;j++)
        {
            if(SideCall[i+1][j+1] && VertPoint.PointArray[MyPoint.x + i][MyPoint.y + j].IsNotNull && !VertPoint.PointArray[MyPoint.x + i][MyPoint.y + j].IsHoll)//自分の隣があるか、穴じゃないか
            {
                sum += VertPoint.PointArray[MyPoint.x + i][MyPoint.y + j].Point;
                Sidecount++;
                SideCall[i+1][j+1] = false;
                if(MyPoint.x + i * 2 >= 0 && MyPoint.x + i * 2 < amount && MyPoint.y + j * 2 >= 0 && MyPoint.y + j * 2 < amount)//自分の2マス先があるか(実質nullチェック)
                {
                    if(VertPoint.PointArray[MyPoint.x + i * 2][MyPoint.y + j * 2].IsNotNull && !VertPoint.PointArray[MyPoint.x + i * 2][MyPoint.y + j * 2].IsHoll)//自分の2マス先が作られているか、穴じゃないか
                    {
                        MyDelta = VertPoint.PointArray[MyPoint.x + i][MyPoint.y + j].Point - VertPoint.PointArray[MyPoint.x + i*2][MyPoint.y + j*2].Point;//なんて言えばいいんだこれ、なんか積分みたいなやつ
                        //隣があった場合、そのさらに隣のマスの高さとの差を取る、これがデルタの最大値、最小値になる
                        if(Deltamax < MyDelta)Deltamax = MyDelta;
                        if(Deltamin > MyDelta)Deltamin = MyDelta;
                    }
                }
            }
        }
    }

    if(Sidecount != 0)VertPoint.PointArray[MyPoint.x][MyPoint.y].Point = sum / Sidecount;
    else {
        UE_LOG(LogTemp, Display, TEXT("Sidecount0"));
        return;
    }
    if(-DeltaMax > Deltamin)Deltamin = -DeltaMax;
    if(DeltaMax < Deltamax)Deltamax = DeltaMax;
    Delta = FMath::RandRange(Deltamin, Deltamax);
    VertPoint.PointArray[MyPoint.x][MyPoint.y].Point += Delta;
    VertPoint.PointArray[MyPoint.x][MyPoint.y].IsNotNull = true;
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1;j++)
        {
            if(SideCall[i+1][j+1])
            {
                MyTaskList.Add(FMapLocate{MyPoint.x + i, MyPoint.y + j});
            }
        }
    }
}

void FSyncMapGenerator::UpdateOperation(FLatentResponse& Response)
{
    Response.FinishAndTriggerIf(*Complete, m_LatentInfo.ExecutionFunction, m_LatentInfo.Linkage, m_LatentInfo.CallbackTarget);
}

void UTameshiInstancedMesh::AddInstancesBySplitTime(const TArray<FTransform>& InstancesTransform, int StartIndex, int& CompleteCount, int OrderDiv, float TickTime)
{
    CompleteCount = 0;
    if(InstancesTransform.Num() <= StartIndex)return;
    TFuture<void> MyAsyncTask = Async(EAsyncExecution::ThreadPool, [TickTime]()
    {
        FPlatformProcess::Sleep(TickTime);
    });
    int Sdex = StartIndex;
    int Anum = InstancesTransform.Num() - 1;
    while(true)
    {
        if(MyAsyncTask.IsReady())break;
        if(Sdex + OrderDiv > Anum)
        {
            //TArray<FTransform> InstancesArray(InstancesTransform.GetData() + Sdex, Anum - Sdex + 1);
            TArray<FTransform> InstancesArray;
            for(int i = Sdex; i <= Anum; i++)
            {
                InstancesArray.Add(InstancesTransform[i]);
            }
            AddInstances(InstancesArray, false);
            CompleteCount += Anum - Sdex + 1;
            break;
        }
        else
        {
            //TArray<FTransform> InstancesArray(InstancesTransform.GetData() + Sdex, OrderDiv);
            TArray<FTransform> InstancesArray;
            for(int i = Sdex; i < Sdex + OrderDiv; i++)
            {
                InstancesArray.Add(InstancesTransform[i]);
            }
            AddInstances(InstancesArray, false);
            CompleteCount += OrderDiv;
            Sdex += OrderDiv;
        }
    }
}
void UTameshiInstancedMesh::SampleDefMapMaker(FMapPointArray& SetArray, const FVector& FirstPoint,const FMapPointArray& DefArray, TArray<FMapLocate>& DefPoint)
{
    if(DefArray.PointArray.Num() == 0)
    {
        UE_LOG(LogTemp, Display, TEXT("ArrayNullatSampleDefMapMaker"));
        return;
    }
    SetArray = DefArray;
    SetArray.PointArray[0][0].Point = FirstPoint.Z;
    SetArray.PointArray[0][0].IsNotNull = true;
    SetArray.PointArray[0][0].IsHoll = false;
    DefPoint.Add(FMapLocate{0,0});
    SetArray.PointArray[50][50].Point = FirstPoint.Z;
    SetArray.PointArray[50][50].IsNotNull = true;
    SetArray.PointArray[50][50].IsHoll = false;
    DefPoint.Add(FMapLocate{50,50});
}