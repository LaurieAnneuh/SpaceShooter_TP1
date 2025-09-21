// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShoot/Public/Object/Laser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaser() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SPACESHOOT_API UClass* Z_Construct_UClass_ALaser();
SPACESHOOT_API UClass* Z_Construct_UClass_ALaser_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceShoot();
// End Cross Module References

// Begin Class ALaser Function SetThrowDirection
struct Z_Construct_UFunction_ALaser_SetThrowDirection_Statics
{
	struct Laser_eventSetThrowDirection_Parms
	{
		FVector InDirection;
		float InSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/Laser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Laser_eventSetThrowDirection_Parms, InDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDirection_MetaData), NewProp_InDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::NewProp_InSpeed = { "InSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Laser_eventSetThrowDirection_Parms, InSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::NewProp_InDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::NewProp_InSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaser, nullptr, "SetThrowDirection", nullptr, nullptr, Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::Laser_eventSetThrowDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::Laser_eventSetThrowDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaser_SetThrowDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaser_SetThrowDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaser::execSetThrowDirection)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetThrowDirection(Z_Param_Out_InDirection,Z_Param_InSpeed);
	P_NATIVE_END;
}
// End Class ALaser Function SetThrowDirection

// Begin Class ALaser
void ALaser::StaticRegisterNativesALaser()
{
	UClass* Class = ALaser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetThrowDirection", &ALaser::execSetThrowDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaser);
UClass* Z_Construct_UClass_ALaser_NoRegister()
{
	return ALaser::StaticClass();
}
struct Z_Construct_UClass_ALaser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Object/Laser.h" },
		{ "ModuleRelativePath", "Public/Object/Laser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/Laser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/Laser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Object/Laser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Object/Laser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALaser_SetThrowDirection, "SetThrowDirection" }, // 1769634699
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaser_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaser, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaser_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaser, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALaser_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaser, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALaser_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaser, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaser_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaser_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaser_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaser_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaser_Statics::ClassParams = {
	&ALaser::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALaser_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaser()
{
	if (!Z_Registration_Info_UClass_ALaser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaser.OuterSingleton, Z_Construct_UClass_ALaser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaser.OuterSingleton;
}
template<> SPACESHOOT_API UClass* StaticClass<ALaser>()
{
	return ALaser::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaser);
ALaser::~ALaser() {}
// End Class ALaser

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaser, ALaser::StaticClass, TEXT("ALaser"), &Z_Registration_Info_UClass_ALaser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaser), 122687395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_2415222184(TEXT("/Script/SpaceShoot"),
	Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
