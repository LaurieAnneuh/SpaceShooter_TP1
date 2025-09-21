// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/SpaceShip.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SPACESHOOT_SpaceShip_generated_h
#error "SpaceShip.generated.h already included, missing '#pragma once' in SpaceShip.h"
#endif
#define SPACESHOOT_SpaceShip_generated_h

#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_SpaceShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_SpaceShip_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceShip(); \
	friend struct Z_Construct_UClass_ASpaceShip_Statics; \
public: \
	DECLARE_CLASS(ASpaceShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShoot"), NO_API) \
	DECLARE_SERIALIZER(ASpaceShip)


#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_SpaceShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpaceShip(ASpaceShip&&); \
	ASpaceShip(const ASpaceShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceShip) \
	NO_API virtual ~ASpaceShip();


#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_SpaceShip_h_14_PROLOG
#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_SpaceShip_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_SpaceShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_SpaceShip_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_SpaceShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOT_API UClass* StaticClass<class ASpaceShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_SpaceShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
