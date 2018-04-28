// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
enum class EAIState : uint8;
#ifdef FPSGAME_FPSAIGuard_generated_h
#error "FPSAIGuard.generated.h already included, missing '#pragma once' in FPSAIGuard.h"
#endif
#define FPSGAME_FPSAIGuard_generated_h

#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_GuardState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GuardState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSFX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetSFX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIdleState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IdleState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPatrolState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PatrolState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspisciousState) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuspisciousState(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAlertState) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AlertState(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_GuardState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GuardState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSFX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetSFX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIdleState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IdleState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPatrolState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PatrolState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspisciousState) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SuspisciousState(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAlertState) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AlertState(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_EVENT_PARMS \
	struct FPSAIGuard_eventOnStateChanged_Parms \
	{ \
		EAIState NewState; \
	};


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_CALLBACK_WRAPPERS
#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSAIGuard(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSAIGuard(); \
public: \
	DECLARE_CLASS(AFPSAIGuard, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGuard) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAFPSAIGuard(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSAIGuard(); \
public: \
	DECLARE_CLASS(AFPSAIGuard, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGuard) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSAIGuard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSAIGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGuard(AFPSAIGuard&&); \
	NO_API AFPSAIGuard(const AFPSAIGuard&); \
public:


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGuard(AFPSAIGuard&&); \
	NO_API AFPSAIGuard(const AFPSAIGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSAIGuard)


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(AFPSAIGuard, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__GuardState() { return STRUCT_OFFSET(AFPSAIGuard, GuardState); } \
	FORCEINLINE static uint32 __PPO__bPatrol() { return STRUCT_OFFSET(AFPSAIGuard, bPatrol); } \
	FORCEINLINE static uint32 __PPO__FirstPatrolPoint() { return STRUCT_OFFSET(AFPSAIGuard, FirstPatrolPoint); } \
	FORCEINLINE static uint32 __PPO__SecondPatrolPoint() { return STRUCT_OFFSET(AFPSAIGuard, SecondPatrolPoint); }


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_26_PROLOG \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_EVENT_PARMS


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_PRIVATE_PROPERTY_OFFSET \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_RPC_WRAPPERS \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_CALLBACK_WRAPPERS \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_INCLASS \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_PRIVATE_PROPERTY_OFFSET \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_CALLBACK_WRAPPERS \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_INCLASS_NO_PURE_DECLS \
	StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGameProto_Source_FPSGame_Public_FPSAIGuard_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) \
	op(EAIState::Alerted) \
	op(EAIState::Patrol) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
