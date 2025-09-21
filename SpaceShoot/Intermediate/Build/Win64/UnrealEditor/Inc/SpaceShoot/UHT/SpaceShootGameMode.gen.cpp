// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShoot/SpaceShootGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceShootGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPACESHOOT_API UClass* Z_Construct_UClass_ASpaceShootGameMode();
SPACESHOOT_API UClass* Z_Construct_UClass_ASpaceShootGameMode_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceShoot();
// End Cross Module References

// Begin Class ASpaceShootGameMode Function GameOver
struct Z_Construct_UFunction_ASpaceShootGameMode_GameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpaceShootGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpaceShootGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceShootGameMode, nullptr, "GameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpaceShootGameMode_GameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpaceShootGameMode_GameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpaceShootGameMode_GameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpaceShootGameMode_GameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpaceShootGameMode::execGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameOver();
	P_NATIVE_END;
}
// End Class ASpaceShootGameMode Function GameOver

// Begin Class ASpaceShootGameMode
void ASpaceShootGameMode::StaticRegisterNativesASpaceShootGameMode()
{
	UClass* Class = ASpaceShootGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GameOver", &ASpaceShootGameMode::execGameOver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpaceShootGameMode);
UClass* Z_Construct_UClass_ASpaceShootGameMode_NoRegister()
{
	return ASpaceShootGameMode::StaticClass();
}
struct Z_Construct_UClass_ASpaceShootGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpaceShootGameMode.h" },
		{ "ModuleRelativePath", "SpaceShootGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SpaceShootGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidget_MetaData[] = {
		{ "Category", "SpaceShootGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceShootGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameOverWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpaceShootGameMode_GameOver, "GameOver" }, // 3412591215
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShootGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpaceShootGameMode_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceShootGameMode, GameOverWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidgetClass_MetaData), NewProp_GameOverWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceShootGameMode_Statics::NewProp_GameOverWidget = { "GameOverWidget", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceShootGameMode, GameOverWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidget_MetaData), NewProp_GameOverWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceShootGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShootGameMode_Statics::NewProp_GameOverWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShootGameMode_Statics::NewProp_GameOverWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShootGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpaceShootGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShootGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceShootGameMode_Statics::ClassParams = {
	&ASpaceShootGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpaceShootGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShootGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShootGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpaceShootGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpaceShootGameMode()
{
	if (!Z_Registration_Info_UClass_ASpaceShootGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceShootGameMode.OuterSingleton, Z_Construct_UClass_ASpaceShootGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpaceShootGameMode.OuterSingleton;
}
template<> SPACESHOOT_API UClass* StaticClass<ASpaceShootGameMode>()
{
	return ASpaceShootGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceShootGameMode);
ASpaceShootGameMode::~ASpaceShootGameMode() {}
// End Class ASpaceShootGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShootGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceShootGameMode, ASpaceShootGameMode::StaticClass, TEXT("ASpaceShootGameMode"), &Z_Registration_Info_UClass_ASpaceShootGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceShootGameMode), 3261794265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShootGameMode_h_361808631(TEXT("/Script/SpaceShoot"),
	Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShootGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShootGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
