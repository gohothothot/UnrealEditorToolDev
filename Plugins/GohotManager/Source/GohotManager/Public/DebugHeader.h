#pragma once

inline void Print(const FString& Message,const FColor& Color)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 8.f, Color, Message);
	}
}

inline void PrintLog(const FString& Message)
{
	//通过UELOG可以从这个函数输出东西到UE的日志里面，然后可以选择是Warning还是ERROR
	UE_LOG(LogTemp, Warning, TEXT("%s"),*Message);
}