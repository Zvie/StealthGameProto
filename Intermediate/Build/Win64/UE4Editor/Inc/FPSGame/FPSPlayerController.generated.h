// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef FPSGAME_FPSPlayerController_generated_h
#error "FPSPlayerController.generated.h already included, missing '#pragma once' in FPSPlayerController.h"
#endif
#define FPSGAME_FPSPlayerController_generated_h

#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_RPC_WRAPPERS
#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_EVENT_PARMS \
	struct FPSPlayerController_eventOnMissionComplete_Parms \
	{ \
		APawn* InstigatorPawn; \
		bool bMissionSuccess; \
	};


#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_CALLBACK_WRAPPERS
#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSPlayerController(); \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSPlayerController(); \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public:


#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController)


#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_12_PROLOG \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_EVENT_PARMS


#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_RPC_WRAPPERS \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_CALLBACK_WRAPPERS \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_INCLASS \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_CALLBACK_WRAPPERS \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGameProto_Source_FPSGame_Public_FPSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
