// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShoot/Public/SpaceShip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceShip() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
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
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpaceShip.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "SpaceShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpaceShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpaceShip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpaceShip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceShip_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceShip, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceShip_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceShip, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceShip_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceShip, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceShip_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceShip, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceShip_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceShip, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceShip_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpaceShip, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceShip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShip_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShip_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShip_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShip_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShip_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShip_Statics::NewProp_MovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShip_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ASpaceShip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShip_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_SpaceShip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceShip, ASpaceShip::StaticClass, TEXT("ASpaceShip"), &Z_Registration_Info_UClass_ASpaceShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceShip), 777322743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_SpaceShip_h_991823475(TEXT("/Script/SpaceShoot"),
	Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_SpaceShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_SpaceShip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
