// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShoot/Public/Managers/AsteroidManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroidManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPACESHOOT_API UClass* Z_Construct_UClass_AAsteroid_NoRegister();
SPACESHOOT_API UClass* Z_Construct_UClass_AAsteroidManager();
SPACESHOOT_API UClass* Z_Construct_UClass_AAsteroidManager_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceShoot();
// End Cross Module References

// Begin Class AAsteroidManager Function AddScore
struct Z_Construct_UFunction_AAsteroidManager_AddScore_Statics
{
	struct AsteroidManager_eventAddScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/AsteroidManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsteroidManager_eventAddScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroidManager, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::AsteroidManager_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::AsteroidManager_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAsteroidManager_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsteroidManager_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAsteroidManager::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class AAsteroidManager Function AddScore

// Begin Class AAsteroidManager
void AAsteroidManager::StaticRegisterNativesAAsteroidManager()
{
	UClass* Class = AAsteroidManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &AAsteroidManager::execAddScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsteroidManager);
UClass* Z_Construct_UClass_AAsteroidManager_NoRegister()
{
	return AAsteroidManager::StaticClass();
}
struct Z_Construct_UClass_AAsteroidManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/AsteroidManager.h" },
		{ "ModuleRelativePath", "Public/Managers/AsteroidManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsteroidClass_MetaData[] = {
		{ "Category", "AsteroidManager" },
		{ "ModuleRelativePath", "Public/Managers/AsteroidManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsteroidHUDClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Managers/AsteroidManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsteroidHUD_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Managers/AsteroidManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "AsteroidManager" },
		{ "ModuleRelativePath", "Public/Managers/AsteroidManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AsteroidClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AsteroidHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsteroidHUD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsteroidManager_AddScore, "AddScore" }, // 959262248
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroidManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsteroidManager_Statics::NewProp_AsteroidClass = { "AsteroidClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidManager, AsteroidClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAsteroid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsteroidClass_MetaData), NewProp_AsteroidClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsteroidManager_Statics::NewProp_AsteroidHUDClass = { "AsteroidHUDClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidManager, AsteroidHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsteroidHUDClass_MetaData), NewProp_AsteroidHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroidManager_Statics::NewProp_AsteroidHUD = { "AsteroidHUD", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidManager, AsteroidHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsteroidHUD_MetaData), NewProp_AsteroidHUD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsteroidManager_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidManager, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRadius_MetaData), NewProp_SpawnRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsteroidManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidManager_Statics::NewProp_AsteroidClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidManager_Statics::NewProp_AsteroidHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidManager_Statics::NewProp_AsteroidHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidManager_Statics::NewProp_SpawnRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAsteroidManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsteroidManager_Statics::ClassParams = {
	&AAsteroidManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAsteroidManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsteroidManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAsteroidManager()
{
	if (!Z_Registration_Info_UClass_AAsteroidManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsteroidManager.OuterSingleton, Z_Construct_UClass_AAsteroidManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAsteroidManager.OuterSingleton;
}
template<> SPACESHOOT_API UClass* StaticClass<AAsteroidManager>()
{
	return AAsteroidManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroidManager);
AAsteroidManager::~AAsteroidManager() {}
// End Class AAsteroidManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Managers_AsteroidManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAsteroidManager, AAsteroidManager::StaticClass, TEXT("AAsteroidManager"), &Z_Registration_Info_UClass_AAsteroidManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsteroidManager), 2571338942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Managers_AsteroidManager_h_1662886946(TEXT("/Script/SpaceShoot"),
	Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Managers_AsteroidManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Managers_AsteroidManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
