// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClipboardFunctionsBPLibrary.h"
#include "ClipboardFunctions.h"
#include "HAL/PlatformApplicationMisc.h"

void UClipboardFunctionsBPLibrary::CopyText(FString Text)
{

	FPlatformApplicationMisc::ClipboardCopy(*Text);

}

FString UClipboardFunctionsBPLibrary::PasteText()
{

	FString LocalString;
	FPlatformApplicationMisc::ClipboardPaste(LocalString);
	return LocalString;

}