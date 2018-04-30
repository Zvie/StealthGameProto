// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef FPSGAME_FPSGameState_generated_h
#error "FPSGameState.generated.h already included, missing '#pragma once' in FPSGameState.h"
#endif
#define FPSGAME_FPSGameState_generated_h

#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_RPC_WRAPPERS \
	virtual void MulticastOnMissionComplete_Implementation(APawn* InstigatorPawn, bool bMissionComplete); \
 \
	DECLARE_FUNCTION(execMulticastOnMissionComplete) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn); \
		P_GET_UBOOL(Z_Param_bMissionComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastOnMissionComplete_Implementation(Z_Param_InstigatorPawn,Z_Param_bMissionComplete); \
		P_NATIVE_END; \
	}


#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnMissionComplete_Implementation(APawn* InstigatorPawn, bool bMissionComplete); \
 \
	DECLARE_FUNCTION(execMulticastOnMissionComplete) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn); \
		P_GET_UBOOL(Z_Param_bMissionComplete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastOnMissionComplete_Implementation(Z_Param_InstigatorPawn,Z_Param_bMissionComplete); \
		P_NATIVE_END; \
	}


#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_EVENT_PARMS \
	struct FPSGameState_eventMulticastOnMissionComplete_Parms \
	{ \
		APawn* InstigatorPawn; \
		bool bMissionComplete; \
	};


#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_CALLBACK_WRAPPERS
#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameState(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSGameState(); \
public: \
	DECLARE_CLASS(AFPSGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSGameState(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSGameState(); \
public: \
	DECLARE_CLASS(AFPSGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameState(AFPSGameState&&); \
	NO_API AFPSGameState(const AFPSGameState&); \
public:


#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameState(AFPSGameState&&); \
	NO_API AFPSGameState(const AFPSGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameState)


#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_PRIVATE_PROPERTY_OFFSET
#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_12_PROLOG \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_EVENT_PARMS


#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_RPC_WRAPPERS \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_CALLBACK_WRAPPERS \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_INCLASS \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_CALLBACK_WRAPPERS \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_INCLASS_NO_PURE_DECLS \
	StealthGameProto_Source_FPSGame_Public_FPSGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGameProto_Source_FPSGame_Public_FPSGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
