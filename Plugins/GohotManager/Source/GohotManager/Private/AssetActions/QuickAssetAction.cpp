#include "AssetActions/QuickAssetAction.h"
#include "DebugHeader.h"
//编辑器工具库
#include "EditorUtilityLibrary.h"
//编辑器资源库
//默认是Include不了的，因为这个文件不在原先被包含的module里面
#include "EditorAssetLibrary.h"


void UQuickAssetAction::TestFunc()
{
	Print(TEXT("Working"),FColor::Cyan);
	PrintLog(TEXT("Working"));
}
