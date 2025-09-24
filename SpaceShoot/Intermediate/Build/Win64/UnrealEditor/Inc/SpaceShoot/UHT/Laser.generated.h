// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/Laser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHOOT_Laser_generated_h
#error "Laser.generated.h already included, missing '#pragma once' in Laser.h"
#endif
#define SPACESHOOT_Laser_generated_h

#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetThrowDirection);


#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaser(); \
	friend struct Z_Construct_UClass_ALaser_Statics; \
public: \
	DECLARE_CLASS(ALaser, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceShoot"), NO_API) \
	DECLARE_SERIALIZER(ALaser)


#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALaser(ALaser&&); \
	ALaser(const ALaser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaser) \
	NO_API virtual ~ALaser();


#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_10_PROLOG
#define FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHOOT_API UClass* StaticClass<class ALaser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_laula_Documents_GitHub_SpaceShooter_TP1_SpaceShoot_Source_SpaceShoot_Public_Object_Laser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
