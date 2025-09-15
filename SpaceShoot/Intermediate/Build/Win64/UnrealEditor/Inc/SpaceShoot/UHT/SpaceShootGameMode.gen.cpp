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
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPACESHOOT_API UClass* Z_Construct_UClass_ASpaceShootGameMode();
SPACESHOOT_API UClass* Z_Construct_UClass_ASpaceShootGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceShoot();
// End Cross Module References

// Begin Class ASpaceShootGameMode
void ASpaceShootGameMode::StaticRegisterNativesASpaceShootGameMode()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShootGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ASpaceShootGameMode, ASpaceShootGameMode::StaticClass, TEXT("ASpaceShootGameMode"), &Z_Registration_Info_UClass_ASpaceShootGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceShootGameMode), 670685234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShootGameMode_h_2024801416(TEXT("/Script/SpaceShoot"),
	Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShootGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShootGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
