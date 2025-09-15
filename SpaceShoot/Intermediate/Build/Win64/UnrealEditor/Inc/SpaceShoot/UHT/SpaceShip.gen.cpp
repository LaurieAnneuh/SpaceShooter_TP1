// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShoot/SpaceShip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceShip() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
SPACESHOOT_API UClass* Z_Construct_UClass_ASpaceShip();
SPACESHOOT_API UClass* Z_Construct_UClass_ASpaceShip_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceShoot();
// End Cross Module References

// Begin Class ASpaceShip
void ASpaceShip::StaticRegisterNativesASpaceShip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpaceShip);
UClass* Z_Construct_UClass_ASpaceShip_NoRegister()
{
	return ASpaceShip::StaticClass();
}
struct Z_Construct_UClass_ASpaceShip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpaceShip.h" },
		{ "ModuleRelativePath", "SpaceShip.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpaceShip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceShip_Statics::ClassParams = {
	&ASpaceShip::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShip_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpaceShip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpaceShip()
{
	if (!Z_Registration_Info_UClass_ASpaceShip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceShip.OuterSingleton, Z_Construct_UClass_ASpaceShip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpaceShip.OuterSingleton;
}
template<> SPACESHOOT_API UClass* StaticClass<ASpaceShip>()
{
	return ASpaceShip::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceShip);
ASpaceShip::~ASpaceShip() {}
// End Class ASpaceShip

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceShip, ASpaceShip::StaticClass, TEXT("ASpaceShip"), &Z_Registration_Info_UClass_ASpaceShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceShip), 3004232257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShip_h_891321253(TEXT("/Script/SpaceShoot"),
	Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_SpaceShip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
