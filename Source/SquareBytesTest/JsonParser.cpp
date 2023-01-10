// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonParser.h"



// Sets default values
AJsonParser::AJsonParser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

FString AJsonParser::Parser(int index, FString Data) {
	const FString JsonFilePath = FPaths::ProjectContentDir() + "/Json/JsonTest.json";
	FString JsonString;

	FFileHelper::LoadFileToString(JsonString, *JsonFilePath);

	//GLog->Log(JsonString);

	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);

	if (FJsonSerializer::Deserialize(JsonReader, JsonParsed)) {

		TArray <TSharedPtr<FJsonValue>> objects = JsonParsed->GetArrayField("objects");

		TSharedPtr<FJsonObject> temp = objects[index]->AsObject();
		temp->GetStringField("ImageURL");


		return temp->GetStringField(Data);
	}
	
	else {
		GLog->Log("AAAAA");
		return "There is no such data";
	}


}
// Called when the game starts or when spawned
void AJsonParser::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void AJsonParser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




