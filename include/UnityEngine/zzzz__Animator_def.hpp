#pragma once
// IWYU pragma private; include "UnityEngine/Animator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Animator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
struct AnimatorClipInfo;
}
namespace UnityEngine {
class AnimatorControllerParameter;
}
namespace UnityEngine {
struct AnimatorCullingMode;
}
namespace UnityEngine {
struct AnimatorRecorderMode;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
struct AnimatorTransitionInfo;
}
namespace UnityEngine {
struct AnimatorUpdateMode;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
struct AvatarIKHint;
}
namespace UnityEngine {
struct AvatarTarget;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
struct HumanBodyBones;
}
namespace UnityEngine {
struct MatchTargetWeightMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct StateInfoIndex;
}
namespace UnityEngine {
class StateMachineBehaviour;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Animator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animator);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Animator
class CORDL_TYPE Animator : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_allowConstantClipSamplingOptimization, put=set_allowConstantClipSamplingOptimization)) bool  allowConstantClipSamplingOptimization;

 __declspec(property(get=get_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

 __declspec(property(get=get_animatePhysics, put=set_animatePhysics)) bool  animatePhysics;

 __declspec(property(get=get_applyRootMotion, put=set_applyRootMotion)) bool  applyRootMotion;

 __declspec(property(get=get_avatar, put=set_avatar)) ::UnityW<::UnityEngine::Avatar>  avatar;

 __declspec(property(get=get_avatarRoot)) ::UnityW<::UnityEngine::Transform>  avatarRoot;

 __declspec(property(get=get_bodyPosition, put=set_bodyPosition)) ::UnityEngine::Vector3  bodyPosition;

 __declspec(property(get=get_bodyPositionInternal, put=set_bodyPositionInternal)) ::UnityEngine::Vector3  bodyPositionInternal;

 __declspec(property(get=get_bodyRotation, put=set_bodyRotation)) ::UnityEngine::Quaternion  bodyRotation;

 __declspec(property(get=get_bodyRotationInternal, put=set_bodyRotationInternal)) ::UnityEngine::Quaternion  bodyRotationInternal;

 __declspec(property(get=get_cullingMode, put=set_cullingMode)) ::UnityEngine::AnimatorCullingMode  cullingMode;

 __declspec(property(get=get_deltaPosition)) ::UnityEngine::Vector3  deltaPosition;

 __declspec(property(get=get_deltaRotation)) ::UnityEngine::Quaternion  deltaRotation;

 __declspec(property(get=get_feetPivotActive, put=set_feetPivotActive)) float_t  feetPivotActive;

 __declspec(property(get=get_fireEvents, put=set_fireEvents)) bool  fireEvents;

 __declspec(property(get=get_gravityWeight)) float_t  gravityWeight;

 __declspec(property(get=get_hasBoundPlayables)) bool  hasBoundPlayables;

 __declspec(property(get=get_hasRootMotion)) bool  hasRootMotion;

 __declspec(property(get=get_hasTransformHierarchy)) bool  hasTransformHierarchy;

 __declspec(property(get=get_humanScale)) float_t  humanScale;

 __declspec(property(get=get_isHuman)) bool  isHuman;

 __declspec(property(get=get_isInitialized)) bool  isInitialized;

 __declspec(property(get=get_isMatchingTarget)) bool  isMatchingTarget;

 __declspec(property(get=get_isOptimizable)) bool  isOptimizable;

 __declspec(property(get=get_isRootPositionOrRotationControlledByCurves)) bool  isRootPositionOrRotationControlledByCurves;

 __declspec(property(get=get_keepAnimatorControllerStateOnDisable, put=set_keepAnimatorControllerStateOnDisable)) bool  keepAnimatorControllerStateOnDisable;

 __declspec(property(get=get_keepAnimatorStateOnDisable, put=set_keepAnimatorStateOnDisable)) bool  keepAnimatorStateOnDisable;

 __declspec(property(get=get_layerCount)) int32_t  layerCount;

 __declspec(property(get=get_layersAffectMassCenter, put=set_layersAffectMassCenter)) bool  layersAffectMassCenter;

 __declspec(property(get=get_leftFeetBottomHeight)) float_t  leftFeetBottomHeight;

 __declspec(property(get=get_linearVelocityBlending, put=set_linearVelocityBlending)) bool  linearVelocityBlending;

 __declspec(property(get=get_logWarnings, put=set_logWarnings)) bool  logWarnings;

 __declspec(property(get=get_parameterCount)) int32_t  parameterCount;

 __declspec(property(get=get_parameters)) ::ArrayW<::UnityEngine::AnimatorControllerParameter*,::Array<::UnityEngine::AnimatorControllerParameter*>*>  parameters;

 __declspec(property(get=get_pivotPosition)) ::UnityEngine::Vector3  pivotPosition;

 __declspec(property(get=get_pivotWeight)) float_t  pivotWeight;

 __declspec(property(get=get_playableGraph)) ::UnityEngine::Playables::PlayableGraph  playableGraph;

 __declspec(property(get=get_playbackTime, put=set_playbackTime)) float_t  playbackTime;

 __declspec(property(get=get_recorderMode)) ::UnityEngine::AnimatorRecorderMode  recorderMode;

 __declspec(property(get=get_recorderStartTime, put=set_recorderStartTime)) float_t  recorderStartTime;

 __declspec(property(get=get_recorderStopTime, put=set_recorderStopTime)) float_t  recorderStopTime;

 __declspec(property(get=get_rightFeetBottomHeight)) float_t  rightFeetBottomHeight;

 __declspec(property(get=get_rootPosition, put=set_rootPosition)) ::UnityEngine::Vector3  rootPosition;

 __declspec(property(get=get_rootRotation, put=set_rootRotation)) ::UnityEngine::Quaternion  rootRotation;

 __declspec(property(get=get_runtimeAnimatorController, put=set_runtimeAnimatorController)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  runtimeAnimatorController;

 __declspec(property(get=get_speed, put=set_speed)) float_t  speed;

 __declspec(property(get=get_stabilizeFeet, put=set_stabilizeFeet)) bool  stabilizeFeet;

 __declspec(property(get=get_supportsOnAnimatorMove)) bool  supportsOnAnimatorMove;

 __declspec(property(get=get_targetPosition)) ::UnityEngine::Vector3  targetPosition;

 __declspec(property(get=get_targetRotation)) ::UnityEngine::Quaternion  targetRotation;

 __declspec(property(get=get_updateMode, put=set_updateMode)) ::UnityEngine::AnimatorUpdateMode  updateMode;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

 __declspec(property(get=get_writeDefaultValuesOnDisable, put=set_writeDefaultValuesOnDisable)) bool  writeDefaultValuesOnDisable;

/// @brief Method ApplyBuiltinRootMotion, addr 0x68e84c8, size 0x80, virtual false, abstract: false, final false
inline void ApplyBuiltinRootMotion() ;

/// @brief Method ApplyBuiltinRootMotion_Injected, addr 0x68e8548, size 0x3c, virtual false, abstract: false, final false
static inline void ApplyBuiltinRootMotion_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method CheckIfInIKPass, addr 0x68e17a0, size 0x98, virtual false, abstract: false, final false
inline void CheckIfInIKPass() ;

/// @brief Method ClearInternalControllerPlayable, addr 0x68e7048, size 0x80, virtual false, abstract: false, final false
inline void ClearInternalControllerPlayable() ;

/// @brief Method ClearInternalControllerPlayable_Injected, addr 0x68e70c8, size 0x3c, virtual false, abstract: false, final false
static inline void ClearInternalControllerPlayable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ConvertStateMachineBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*,::Array<::UnityEngine::ScriptableObject*>*>  rawObjects) ;

/// @brief Method CrossFade, addr 0x68e5650, size 0x14, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateHashName, float_t  normalizedTransitionDuration) ;

/// @brief Method CrossFade, addr 0x68e5640, size 0x10, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateHashName, float_t  normalizedTransitionDuration, int32_t  layer) ;

/// @brief Method CrossFade, addr 0x68e5638, size 0x8, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateHashName, float_t  normalizedTransitionDuration, int32_t  layer, float_t  normalizedTimeOffset) ;

/// @brief Method CrossFade, addr 0x68e54fc, size 0xc0, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateHashName, float_t  normalizedTransitionDuration, int32_t  layer, float_t  normalizedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method CrossFade, addr 0x68e54bc, size 0x40, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  normalizedTransitionDuration) ;

/// @brief Method CrossFade, addr 0x68e5470, size 0x4c, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  normalizedTransitionDuration, int32_t  layer) ;

/// @brief Method CrossFade, addr 0x68e53cc, size 0x4c, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  normalizedTransitionDuration, int32_t  layer, float_t  normalizedTimeOffset) ;

/// @brief Method CrossFade, addr 0x68e5418, size 0x58, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  normalizedTransitionDuration, int32_t  layer, float_t  normalizedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x68e5284, size 0x10, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateHashName, float_t  fixedTransitionDuration) ;

/// @brief Method CrossFadeInFixedTime, addr 0x68e5278, size 0xc, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateHashName, float_t  fixedTransitionDuration, int32_t  layer) ;

/// @brief Method CrossFadeInFixedTime, addr 0x68e5270, size 0x8, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateHashName, float_t  fixedTransitionDuration, int32_t  layer, float_t  fixedTimeOffset) ;

/// @brief Method CrossFadeInFixedTime, addr 0x68e50c4, size 0xc0, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateHashName, float_t  fixedTransitionDuration, int32_t  layer, float_t  fixedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x68e4f5c, size 0x3c, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  fixedTransitionDuration) ;

/// @brief Method CrossFadeInFixedTime, addr 0x68e5184, size 0x48, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  fixedTransitionDuration, int32_t  layer) ;

/// @brief Method CrossFadeInFixedTime, addr 0x68e51cc, size 0x4c, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  fixedTransitionDuration, int32_t  layer, float_t  fixedTimeOffset) ;

/// @brief Method CrossFadeInFixedTime, addr 0x68e5218, size 0x58, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  fixedTransitionDuration, int32_t  layer, float_t  fixedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method CrossFadeInFixedTime_Injected, addr 0x68e5294, size 0x7c, virtual false, abstract: false, final false
static inline void CrossFadeInFixedTime_Injected(::System::IntPtr  _unity_self, int32_t  stateHashName, float_t  fixedTransitionDuration, int32_t  layer, float_t  fixedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method CrossFade_Injected, addr 0x68e55bc, size 0x7c, virtual false, abstract: false, final false
static inline void CrossFade_Injected(::System::IntPtr  _unity_self, int32_t  stateHashName, float_t  normalizedTransitionDuration, int32_t  layer, float_t  normalizedTimeOffset, float_t  normalizedTransitionTime) ;

/// @brief Method EvaluateController, addr 0x68e8584, size 0x8, virtual false, abstract: false, final false
inline void EvaluateController() ;

/// @brief Method EvaluateController, addr 0x68e858c, size 0x90, virtual false, abstract: false, final false
inline void EvaluateController(float_t  deltaTime) ;

/// @brief Method EvaluateController_Injected, addr 0x68e861c, size 0x4c, virtual false, abstract: false, final false
static inline void EvaluateController_Injected(::System::IntPtr  _unity_self, float_t  deltaTime) ;

/// @brief Method ForceStateNormalizedTime, addr 0x68e4ea8, size 0xc, virtual false, abstract: false, final false
inline void ForceStateNormalizedTime(float_t  normalizedTime) ;

/// @brief Method GetAnimatorClipInfoCount, addr 0x68e3e48, size 0x98, virtual false, abstract: false, final false
inline int32_t GetAnimatorClipInfoCount(int32_t  layerIndex, bool  current) ;

/// @brief Method GetAnimatorClipInfoCount_Injected, addr 0x68e3ee0, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetAnimatorClipInfoCount_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, bool  current) ;

/// @brief Method GetAnimatorClipInfoInternal, addr 0x68e4148, size 0xa8, virtual false, abstract: false, final false
inline void GetAnimatorClipInfoInternal(int32_t  layerIndex, bool  isCurrent, ::System::Object*  clips) ;

/// @brief Method GetAnimatorClipInfoInternal_Injected, addr 0x68e41f0, size 0x5c, virtual false, abstract: false, final false
static inline void GetAnimatorClipInfoInternal_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, bool  isCurrent, ::System::Object*  clips) ;

/// @brief Method GetAnimatorStateInfo, addr 0x68e3ba8, size 0xa8, virtual false, abstract: false, final false
inline void GetAnimatorStateInfo(int32_t  layerIndex, ::UnityEngine::StateInfoIndex  stateInfoIndex, ::ByRef<::UnityEngine::AnimatorStateInfo>  info) ;

/// @brief Method GetAnimatorStateInfo_Injected, addr 0x68e3c50, size 0x5c, virtual false, abstract: false, final false
static inline void GetAnimatorStateInfo_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, ::UnityEngine::StateInfoIndex  stateInfoIndex, ::ByRef<::UnityEngine::AnimatorStateInfo>  info) ;

/// @brief Method GetAnimatorStateName, addr 0x68e8670, size 0x144, virtual false, abstract: false, final false
inline ::StringW GetAnimatorStateName(int32_t  layerIndex, bool  current) ;

/// @brief Method GetAnimatorStateName_Injected, addr 0x68e87bc, size 0x5c, virtual false, abstract: false, final false
static inline void GetAnimatorStateName_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, bool  current, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetAnimatorTransitionInfo, addr 0x68e3e18, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t  layerIndex) ;

/// @brief Method GetAnimatorTransitionInfo, addr 0x68e3d2c, size 0x98, virtual false, abstract: false, final false
inline void GetAnimatorTransitionInfo(int32_t  layerIndex, ::ByRef<::UnityEngine::AnimatorTransitionInfo>  info) ;

/// @brief Method GetAnimatorTransitionInfo_Injected, addr 0x68e3dc4, size 0x54, virtual false, abstract: false, final false
static inline void GetAnimatorTransitionInfo_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, ::ByRef<::UnityEngine::AnimatorTransitionInfo>  info) ;

/// @brief Method GetBehaviour, addr 0x68e2fa8, size 0x184, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ScriptableObject> GetBehaviour(::System::Type*  type) ;

/// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetBehaviour() ;

/// @brief Method GetBehaviour_Injected, addr 0x68e312c, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBehaviour_Injected(::System::IntPtr  _unity_self, ::System::Type*  type) ;

/// @brief Method GetBehaviours, addr 0x68e3270, size 0xa8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>,::Array<::UnityW<::UnityEngine::StateMachineBehaviour>>*> GetBehaviours(int32_t  fullPathHash, int32_t  layerIndex) ;

/// @brief Method GetBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetBehaviours() ;

/// @brief Method GetBoneTransform, addr 0x68e5ea4, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones  humanBoneId) ;

/// @brief Method GetBoneTransformInternal, addr 0x68e62ec, size 0x158, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransformInternal(int32_t  humanBoneId) ;

/// @brief Method GetBoneTransformInternal_Injected, addr 0x68e6444, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBoneTransformInternal_Injected(::System::IntPtr  _unity_self, int32_t  humanBoneId) ;

/// @brief Method GetBool, addr 0x68dfa60, size 0x4, virtual false, abstract: false, final false
inline bool GetBool(int32_t  id) ;

/// @brief Method GetBool, addr 0x68df8e4, size 0x4, virtual false, abstract: false, final false
inline bool GetBool(::StringW  name) ;

/// @brief Method GetBoolID, addr 0x68dfa64, size 0x90, virtual false, abstract: false, final false
inline bool GetBoolID(int32_t  id) ;

/// @brief Method GetBoolID_Injected, addr 0x68e7934, size 0x44, virtual false, abstract: false, final false
static inline bool GetBoolID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method GetBoolString, addr 0x68df8e8, size 0x178, virtual false, abstract: false, final false
inline bool GetBoolString(::StringW  name) ;

/// @brief Method GetBoolString_Injected, addr 0x68e78f0, size 0x44, virtual false, abstract: false, final false
static inline bool GetBoolString_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x68e3f44, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo,::Array<::UnityEngine::AnimatorClipInfo>*> GetCurrentAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x68e40ec, size 0x5c, virtual false, abstract: false, final false
inline void GetCurrentAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x68e3f34, size 0x8, virtual false, abstract: false, final false
inline int32_t GetCurrentAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfo_Injected, addr 0x68e3fd4, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::AnimatorClipInfo,::Array<::UnityEngine::AnimatorClipInfo>*> GetCurrentAnimatorClipInfo_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorStateInfo, addr 0x68e3cac, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetCurrentGraph, addr 0x68e7508, size 0x90, virtual false, abstract: false, final false
inline void GetCurrentGraph(::ByRef<::UnityEngine::Playables::PlayableGraph>  graph) ;

/// @brief Method GetCurrentGraph_Injected, addr 0x68e7598, size 0x44, virtual false, abstract: false, final false
static inline void GetCurrentGraph_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Playables::PlayableGraph>  graph) ;

/// @brief Method GetCurrentStateName, addr 0x68e8668, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetCurrentStateName(int32_t  layerIndex) ;

/// @brief Method GetFloat, addr 0x68df3d8, size 0x4, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  id) ;

/// @brief Method GetFloat, addr 0x68df264, size 0x4, virtual false, abstract: false, final false
inline float_t GetFloat(::StringW  name) ;

/// @brief Method GetFloatID, addr 0x68df3dc, size 0x90, virtual false, abstract: false, final false
inline float_t GetFloatID(int32_t  id) ;

/// @brief Method GetFloatID_Injected, addr 0x68e7804, size 0x44, virtual false, abstract: false, final false
static inline float_t GetFloatID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method GetFloatString, addr 0x68df268, size 0x170, virtual false, abstract: false, final false
inline float_t GetFloatString(::StringW  name) ;

/// @brief Method GetFloatString_Injected, addr 0x68e77c0, size 0x44, virtual false, abstract: false, final false
static inline float_t GetFloatString_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetGoalPosition, addr 0x68e1c7c, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetGoalPosition_Injected, addr 0x68e1d2c, size 0x54, virtual false, abstract: false, final false
static inline void GetGoalPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetGoalRotation, addr 0x68e1ef4, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetGoalRotation(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetGoalRotation_Injected, addr 0x68e1fa0, size 0x54, virtual false, abstract: false, final false
static inline void GetGoalRotation_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, ::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method GetGoalWeightPosition, addr 0x68e2170, size 0x90, virtual false, abstract: false, final false
inline float_t GetGoalWeightPosition(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetGoalWeightPosition_Injected, addr 0x68e2200, size 0x44, virtual false, abstract: false, final false
static inline float_t GetGoalWeightPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetGoalWeightRotation, addr 0x68e2398, size 0x90, virtual false, abstract: false, final false
inline float_t GetGoalWeightRotation(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetGoalWeightRotation_Injected, addr 0x68e2428, size 0x44, virtual false, abstract: false, final false
static inline float_t GetGoalWeightRotation_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetHintPosition, addr 0x68e25c0, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHintPosition(::UnityEngine::AvatarIKHint  hint) ;

/// @brief Method GetHintPosition_Injected, addr 0x68e2670, size 0x54, virtual false, abstract: false, final false
static inline void GetHintPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKHint  hint, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetHintWeightPosition, addr 0x68e2838, size 0x90, virtual false, abstract: false, final false
inline float_t GetHintWeightPosition(::UnityEngine::AvatarIKHint  hint) ;

/// @brief Method GetHintWeightPosition_Injected, addr 0x68e28c8, size 0x44, virtual false, abstract: false, final false
static inline float_t GetHintWeightPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKHint  hint) ;

/// @brief Method GetIKHintPosition, addr 0x68e2598, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetIKHintPosition(::UnityEngine::AvatarIKHint  hint) ;

/// @brief Method GetIKHintPositionWeight, addr 0x68e2810, size 0x28, virtual false, abstract: false, final false
inline float_t GetIKHintPositionWeight(::UnityEngine::AvatarIKHint  hint) ;

/// @brief Method GetIKPosition, addr 0x68e1c54, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetIKPositionWeight, addr 0x68e2148, size 0x28, virtual false, abstract: false, final false
inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetIKRotation, addr 0x68e1ecc, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetIKRotationWeight, addr 0x68e2370, size 0x28, virtual false, abstract: false, final false
inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetInteger, addr 0x68dfe80, size 0x4, virtual false, abstract: false, final false
inline int32_t GetInteger(int32_t  id) ;

/// @brief Method GetInteger, addr 0x68dfd08, size 0x4, virtual false, abstract: false, final false
inline int32_t GetInteger(::StringW  name) ;

/// @brief Method GetIntegerID, addr 0x68dfe84, size 0x90, virtual false, abstract: false, final false
inline int32_t GetIntegerID(int32_t  id) ;

/// @brief Method GetIntegerID_Injected, addr 0x68e7a64, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetIntegerID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method GetIntegerString, addr 0x68dfd0c, size 0x174, virtual false, abstract: false, final false
inline int32_t GetIntegerString(::StringW  name) ;

/// @brief Method GetIntegerString_Injected, addr 0x68e7a20, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetIntegerString_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetLayerIndex, addr 0x68e3828, size 0x174, virtual false, abstract: false, final false
inline int32_t GetLayerIndex(::StringW  layerName) ;

/// @brief Method GetLayerIndex_Injected, addr 0x68e399c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetLayerIndex_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  layerName) ;

/// @brief Method GetLayerName, addr 0x68e3694, size 0x140, virtual false, abstract: false, final false
inline ::StringW GetLayerName(int32_t  layerIndex) ;

/// @brief Method GetLayerName_Injected, addr 0x68e37d4, size 0x54, virtual false, abstract: false, final false
static inline void GetLayerName_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetLayerWeight, addr 0x68e39e0, size 0x90, virtual false, abstract: false, final false
inline float_t GetLayerWeight(int32_t  layerIndex) ;

/// @brief Method GetLayerWeight_Injected, addr 0x68e3a70, size 0x44, virtual false, abstract: false, final false
static inline float_t GetLayerWeight_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x68e4018, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo,::Array<::UnityEngine::AnimatorClipInfo>*> GetNextAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x68e424c, size 0x5c, virtual false, abstract: false, final false
inline void GetNextAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetNextAnimatorClipInfoCount, addr 0x68e3f3c, size 0x8, virtual false, abstract: false, final false
inline int32_t GetNextAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo_Injected, addr 0x68e40a8, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::AnimatorClipInfo,::Array<::UnityEngine::AnimatorClipInfo>*> GetNextAnimatorClipInfo_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorStateInfo, addr 0x68e3cec, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetNextStateName, addr 0x68e87b4, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetNextStateName(int32_t  layerIndex) ;

/// @brief Method GetParameter, addr 0x68e45c8, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t  index) ;

/// @brief Method GetParameterInternal, addr 0x68e44f4, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal(int32_t  index) ;

/// @brief Method GetParameterInternal_Injected, addr 0x68e4584, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method GetQuaternion, addr 0x68e906c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetQuaternion(int32_t  id) ;

/// @brief Method GetQuaternion, addr 0x68e901c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetQuaternion(::StringW  name) ;

/// @brief Method GetRecorderStartTime, addr 0x68e6abc, size 0x80, virtual false, abstract: false, final false
inline float_t GetRecorderStartTime() ;

/// @brief Method GetRecorderStartTime_Injected, addr 0x68e6b40, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetRecorderStartTime_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetRecorderStopTime, addr 0x68e6b80, size 0x80, virtual false, abstract: false, final false
inline float_t GetRecorderStopTime() ;

/// @brief Method GetRecorderStopTime_Injected, addr 0x68e6c04, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetRecorderStopTime_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetStats, addr 0x68e736c, size 0x134, virtual false, abstract: false, final false
inline ::StringW GetStats() ;

/// @brief Method GetStats_Injected, addr 0x68e74a0, size 0x44, virtual false, abstract: false, final false
static inline void GetStats_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetVector, addr 0x68e8fc4, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVector(int32_t  id) ;

/// @brief Method GetVector, addr 0x68e8f74, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVector(::StringW  name) ;

/// @brief Method HasState, addr 0x68e7104, size 0x98, virtual false, abstract: false, final false
inline bool HasState(int32_t  layerIndex, int32_t  stateID) ;

/// @brief Method HasState_Injected, addr 0x68e719c, size 0x54, virtual false, abstract: false, final false
static inline bool HasState_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, int32_t  stateID) ;

/// @brief Method InternalGetBehaviours, addr 0x68e3170, size 0xbc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>,::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehaviours(::System::Type*  type) ;

/// @brief Method InternalGetBehavioursByKey, addr 0x68e3318, size 0xd4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>,::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehavioursByKey(int32_t  fullPathHash, int32_t  layerIndex, ::System::Type*  type) ;

/// @brief Method InternalGetBehavioursByKey_Injected, addr 0x68e33ec, size 0x5c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>,::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehavioursByKey_Injected(::System::IntPtr  _unity_self, int32_t  fullPathHash, int32_t  layerIndex, ::System::Type*  type) ;

/// @brief Method InternalGetBehaviours_Injected, addr 0x68e322c, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>,::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehaviours_Injected(::System::IntPtr  _unity_self, ::System::Type*  type) ;

/// @brief Method InterruptMatchTarget, addr 0x68e4b78, size 0x8, virtual false, abstract: false, final false
inline void InterruptMatchTarget() ;

/// @brief Method InterruptMatchTarget, addr 0x68e4b80, size 0x90, virtual false, abstract: false, final false
inline void InterruptMatchTarget(bool  completeMatch) ;

/// @brief Method InterruptMatchTarget_Injected, addr 0x68e4c10, size 0x44, virtual false, abstract: false, final false
static inline void InterruptMatchTarget_Injected(::System::IntPtr  _unity_self, bool  completeMatch) ;

/// @brief Method IsBoneTransform, addr 0x68e5c14, size 0xc0, virtual false, abstract: false, final false
inline bool IsBoneTransform(::UnityEngine::Transform*  transform) ;

/// @brief Method IsBoneTransform_Injected, addr 0x68e5cd4, size 0x44, virtual false, abstract: false, final false
static inline bool IsBoneTransform_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  transform) ;

/// @brief Method IsControlled, addr 0x68e5c0c, size 0x8, virtual false, abstract: false, final false
inline bool IsControlled(::UnityEngine::Transform*  transform) ;

/// @brief Method IsInIKPass, addr 0x68e765c, size 0x80, virtual false, abstract: false, final false
inline bool IsInIKPass() ;

/// @brief Method IsInIKPass_Injected, addr 0x68e76dc, size 0x3c, virtual false, abstract: false, final false
static inline bool IsInIKPass_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method IsInTransition, addr 0x68e42a8, size 0x90, virtual false, abstract: false, final false
inline bool IsInTransition(int32_t  layerIndex) ;

/// @brief Method IsInTransition_Injected, addr 0x68e4338, size 0x44, virtual false, abstract: false, final false
static inline bool IsInTransition_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex) ;

/// @brief Method IsParameterControlledByCurve, addr 0x68e06a4, size 0x4, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(int32_t  id) ;

/// @brief Method IsParameterControlledByCurve, addr 0x68e0528, size 0x4, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(::StringW  name) ;

/// @brief Method IsParameterControlledByCurveID, addr 0x68e06a8, size 0x90, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurveID(int32_t  id) ;

/// @brief Method IsParameterControlledByCurveID_Injected, addr 0x68e7bfc, size 0x44, virtual false, abstract: false, final false
static inline bool IsParameterControlledByCurveID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method IsParameterControlledByCurveString, addr 0x68e052c, size 0x178, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurveString(::StringW  name) ;

/// @brief Method IsParameterControlledByCurveString_Injected, addr 0x68e7bb8, size 0x44, virtual false, abstract: false, final false
static inline bool IsParameterControlledByCurveString_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method MatchTarget, addr 0x68e4b08, size 0x34, virtual false, abstract: false, final false
inline void MatchTarget(::UnityEngine::Vector3  matchPosition, ::UnityEngine::Quaternion  matchRotation, ::UnityEngine::AvatarTarget  targetBodyPart, ::UnityEngine::MatchTargetWeightMask  weightMask, float_t  startNormalizedTime) ;

/// @brief Method MatchTarget, addr 0x68e4b3c, size 0x20, virtual false, abstract: false, final false
inline void MatchTarget(::UnityEngine::Vector3  matchPosition, ::UnityEngine::Quaternion  matchRotation, ::UnityEngine::AvatarTarget  targetBodyPart, ::UnityEngine::MatchTargetWeightMask  weightMask, float_t  startNormalizedTime, float_t  targetNormalizedTime) ;

/// @brief Method MatchTarget, addr 0x68e4b5c, size 0x1c, virtual false, abstract: false, final false
inline void MatchTarget(::UnityEngine::Vector3  matchPosition, ::UnityEngine::Quaternion  matchRotation, ::UnityEngine::AvatarTarget  targetBodyPart, ::UnityEngine::MatchTargetWeightMask  weightMask, float_t  startNormalizedTime, float_t  targetNormalizedTime, bool  completeMatch) ;

/// @brief Method MatchTarget, addr 0x68e499c, size 0xe0, virtual false, abstract: false, final false
inline void MatchTarget(::UnityEngine::Vector3  matchPosition, ::UnityEngine::Quaternion  matchRotation, int32_t  targetBodyPart, ::UnityEngine::MatchTargetWeightMask  weightMask, float_t  startNormalizedTime, float_t  targetNormalizedTime, bool  completeMatch) ;

/// @brief Method MatchTarget_Injected, addr 0x68e4a7c, size 0x8c, virtual false, abstract: false, final false
static inline void MatchTarget_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  matchPosition, ::ByRef<::UnityEngine::Quaternion>  matchRotation, int32_t  targetBodyPart, ::ByRef<::UnityEngine::MatchTargetWeightMask>  weightMask, float_t  startNormalizedTime, float_t  targetNormalizedTime, bool  completeMatch) ;

static inline ::UnityEngine::Animator* New_ctor() ;

/// @brief Method OnCullingModeChanged, addr 0x68e8198, size 0x80, virtual false, abstract: false, final false
inline void OnCullingModeChanged() ;

/// @brief Method OnCullingModeChanged_Injected, addr 0x68e8218, size 0x3c, virtual false, abstract: false, final false
static inline void OnCullingModeChanged_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method OnUpdateModeChanged, addr 0x68e80dc, size 0x80, virtual false, abstract: false, final false
inline void OnUpdateModeChanged() ;

/// @brief Method OnUpdateModeChanged_Injected, addr 0x68e815c, size 0x3c, virtual false, abstract: false, final false
static inline void OnUpdateModeChanged_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Play, addr 0x68e58a8, size 0x2c, virtual false, abstract: false, final false
inline void Play(::StringW  stateName) ;

/// @brief Method Play, addr 0x68e5830, size 0x38, virtual false, abstract: false, final false
inline void Play(::StringW  stateName, int32_t  layer) ;

/// @brief Method Play, addr 0x68e5868, size 0x40, virtual false, abstract: false, final false
inline void Play(::StringW  stateName, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Play, addr 0x68e5944, size 0x10, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash) ;

/// @brief Method Play, addr 0x68e5938, size 0xc, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash, int32_t  layer) ;

/// @brief Method Play, addr 0x68e4eb4, size 0xa8, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method PlayInFixedTime, addr 0x68e56dc, size 0x2c, virtual false, abstract: false, final false
inline void PlayInFixedTime(::StringW  stateName) ;

/// @brief Method PlayInFixedTime, addr 0x68e5664, size 0x38, virtual false, abstract: false, final false
inline void PlayInFixedTime(::StringW  stateName, int32_t  layer) ;

/// @brief Method PlayInFixedTime, addr 0x68e569c, size 0x40, virtual false, abstract: false, final false
inline void PlayInFixedTime(::StringW  stateName, int32_t  layer, float_t  fixedTime) ;

/// @brief Method PlayInFixedTime, addr 0x68e5820, size 0x10, virtual false, abstract: false, final false
inline void PlayInFixedTime(int32_t  stateNameHash) ;

/// @brief Method PlayInFixedTime, addr 0x68e5814, size 0xc, virtual false, abstract: false, final false
inline void PlayInFixedTime(int32_t  stateNameHash, int32_t  layer) ;

/// @brief Method PlayInFixedTime, addr 0x68e5708, size 0xa8, virtual false, abstract: false, final false
inline void PlayInFixedTime(int32_t  stateNameHash, int32_t  layer, float_t  fixedTime) ;

/// @brief Method PlayInFixedTime_Injected, addr 0x68e57b0, size 0x64, virtual false, abstract: false, final false
static inline void PlayInFixedTime_Injected(::System::IntPtr  _unity_self, int32_t  stateNameHash, int32_t  layer, float_t  fixedTime) ;

/// @brief Method Play_Injected, addr 0x68e58d4, size 0x64, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self, int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Rebind, addr 0x68e83ec, size 0x8, virtual false, abstract: false, final false
inline void Rebind() ;

/// @brief Method Rebind, addr 0x68e83f4, size 0x90, virtual false, abstract: false, final false
inline void Rebind(bool  writeDefaultValues) ;

/// @brief Method Rebind_Injected, addr 0x68e8484, size 0x44, virtual false, abstract: false, final false
static inline void Rebind_Injected(::System::IntPtr  _unity_self, bool  writeDefaultValues) ;

/// @brief Method ResetTrigger, addr 0x68e0494, size 0x4, virtual false, abstract: false, final false
inline void ResetTrigger(int32_t  id) ;

/// @brief Method ResetTrigger, addr 0x68e0328, size 0x4, virtual false, abstract: false, final false
inline void ResetTrigger(::StringW  name) ;

/// @brief Method ResetTriggerID, addr 0x68e0498, size 0x90, virtual false, abstract: false, final false
inline void ResetTriggerID(int32_t  id) ;

/// @brief Method ResetTriggerID_Injected, addr 0x68e7b74, size 0x44, virtual false, abstract: false, final false
static inline void ResetTriggerID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method ResetTriggerString, addr 0x68e032c, size 0x168, virtual false, abstract: false, final false
inline void ResetTriggerString(::StringW  name) ;

/// @brief Method ResetTriggerString_Injected, addr 0x68e7b30, size 0x44, virtual false, abstract: false, final false
static inline void ResetTriggerString_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method ResolveHash, addr 0x68e8818, size 0x140, virtual false, abstract: false, final false
inline ::StringW ResolveHash(int32_t  hash) ;

/// @brief Method ResolveHash_Injected, addr 0x68e8958, size 0x54, virtual false, abstract: false, final false
static inline void ResolveHash_Injected(::System::IntPtr  _unity_self, int32_t  hash, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method SetBoneLocalRotation, addr 0x68e2df0, size 0x80, virtual false, abstract: false, final false
inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones  humanBoneId, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetBoneLocalRotationInternal, addr 0x68e2eac, size 0xa8, virtual false, abstract: false, final false
inline void SetBoneLocalRotationInternal(int32_t  humanBoneId, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetBoneLocalRotationInternal_Injected, addr 0x68e2f54, size 0x54, virtual false, abstract: false, final false
static inline void SetBoneLocalRotationInternal_Injected(::System::IntPtr  _unity_self, int32_t  humanBoneId, ::ByRef<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method SetBool, addr 0x68dfc6c, size 0x4, virtual false, abstract: false, final false
inline void SetBool(int32_t  id, bool  value) ;

/// @brief Method SetBool, addr 0x68dfaf4, size 0x4, virtual false, abstract: false, final false
inline void SetBool(::StringW  name, bool  value) ;

/// @brief Method SetBoolID, addr 0x68dfc70, size 0x98, virtual false, abstract: false, final false
inline void SetBoolID(int32_t  id, bool  value) ;

/// @brief Method SetBoolID_Injected, addr 0x68e789c, size 0x54, virtual false, abstract: false, final false
static inline void SetBoolID_Injected(::System::IntPtr  _unity_self, int32_t  id, bool  value) ;

/// @brief Method SetBoolString, addr 0x68dfaf8, size 0x174, virtual false, abstract: false, final false
inline void SetBoolString(::StringW  name, bool  value) ;

/// @brief Method SetBoolString_Injected, addr 0x68e7848, size 0x54, virtual false, abstract: false, final false
static inline void SetBoolString_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name, bool  value) ;

/// @brief Method SetFloat, addr 0x68df784, size 0x4, virtual false, abstract: false, final false
inline void SetFloat(int32_t  id, float_t  value) ;

/// @brief Method SetFloat, addr 0x68df828, size 0x4, virtual false, abstract: false, final false
inline void SetFloat(int32_t  id, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloat, addr 0x68df46c, size 0x4, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloat, addr 0x68df5ec, size 0x4, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatID, addr 0x68df788, size 0xa0, virtual false, abstract: false, final false
inline void SetFloatID(int32_t  id, float_t  value) ;

/// @brief Method SetFloatIDDamp, addr 0x68df82c, size 0xb8, virtual false, abstract: false, final false
inline void SetFloatIDDamp(int32_t  id, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatIDDamp_Injected, addr 0x68e7cac, size 0x6c, virtual false, abstract: false, final false
static inline void SetFloatIDDamp_Injected(::System::IntPtr  _unity_self, int32_t  id, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatID_Injected, addr 0x68e776c, size 0x54, virtual false, abstract: false, final false
static inline void SetFloatID_Injected(::System::IntPtr  _unity_self, int32_t  id, float_t  value) ;

/// @brief Method SetFloatString, addr 0x68df470, size 0x17c, virtual false, abstract: false, final false
inline void SetFloatString(::StringW  name, float_t  value) ;

/// @brief Method SetFloatStringDamp, addr 0x68df5f0, size 0x194, virtual false, abstract: false, final false
inline void SetFloatStringDamp(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatStringDamp_Injected, addr 0x68e7c40, size 0x6c, virtual false, abstract: false, final false
static inline void SetFloatStringDamp_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatString_Injected, addr 0x68e7718, size 0x54, virtual false, abstract: false, final false
static inline void SetFloatString_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name, float_t  value) ;

/// @brief Method SetGoalPosition, addr 0x68e1dd0, size 0xa8, virtual false, abstract: false, final false
inline void SetGoalPosition(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Vector3  goalPosition) ;

/// @brief Method SetGoalPosition_Injected, addr 0x68e1e78, size 0x54, virtual false, abstract: false, final false
static inline void SetGoalPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, ::ByRef<::UnityEngine::Vector3>  goalPosition) ;

/// @brief Method SetGoalRotation, addr 0x68e204c, size 0xa8, virtual false, abstract: false, final false
inline void SetGoalRotation(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Quaternion  goalRotation) ;

/// @brief Method SetGoalRotation_Injected, addr 0x68e20f4, size 0x54, virtual false, abstract: false, final false
static inline void SetGoalRotation_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, ::ByRef<::UnityEngine::Quaternion>  goalRotation) ;

/// @brief Method SetGoalWeightPosition, addr 0x68e227c, size 0xa0, virtual false, abstract: false, final false
inline void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetGoalWeightPosition_Injected, addr 0x68e231c, size 0x54, virtual false, abstract: false, final false
static inline void SetGoalWeightPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetGoalWeightRotation, addr 0x68e24a4, size 0xa0, virtual false, abstract: false, final false
inline void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetGoalWeightRotation_Injected, addr 0x68e2544, size 0x54, virtual false, abstract: false, final false
static inline void SetGoalWeightRotation_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetHintPosition, addr 0x68e2714, size 0xa8, virtual false, abstract: false, final false
inline void SetHintPosition(::UnityEngine::AvatarIKHint  hint, ::UnityEngine::Vector3  hintPosition) ;

/// @brief Method SetHintPosition_Injected, addr 0x68e27bc, size 0x54, virtual false, abstract: false, final false
static inline void SetHintPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKHint  hint, ::ByRef<::UnityEngine::Vector3>  hintPosition) ;

/// @brief Method SetHintWeightPosition, addr 0x68e2944, size 0xa0, virtual false, abstract: false, final false
inline void SetHintWeightPosition(::UnityEngine::AvatarIKHint  hint, float_t  value) ;

/// @brief Method SetHintWeightPosition_Injected, addr 0x68e29e4, size 0x54, virtual false, abstract: false, final false
static inline void SetHintWeightPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKHint  hint, float_t  value) ;

/// @brief Method SetIKHintPosition, addr 0x68e26c4, size 0x50, virtual false, abstract: false, final false
inline void SetIKHintPosition(::UnityEngine::AvatarIKHint  hint, ::UnityEngine::Vector3  hintPosition) ;

/// @brief Method SetIKHintPositionWeight, addr 0x68e290c, size 0x38, virtual false, abstract: false, final false
inline void SetIKHintPositionWeight(::UnityEngine::AvatarIKHint  hint, float_t  value) ;

/// @brief Method SetIKPosition, addr 0x68e1d80, size 0x50, virtual false, abstract: false, final false
inline void SetIKPosition(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Vector3  goalPosition) ;

/// @brief Method SetIKPositionWeight, addr 0x68e2244, size 0x38, virtual false, abstract: false, final false
inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetIKRotation, addr 0x68e1ff4, size 0x58, virtual false, abstract: false, final false
inline void SetIKRotation(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Quaternion  goalRotation) ;

/// @brief Method SetIKRotationWeight, addr 0x68e246c, size 0x38, virtual false, abstract: false, final false
inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetInteger, addr 0x68e008c, size 0x4, virtual false, abstract: false, final false
inline void SetInteger(int32_t  id, int32_t  value) ;

/// @brief Method SetInteger, addr 0x68dff14, size 0x4, virtual false, abstract: false, final false
inline void SetInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetIntegerID, addr 0x68e0090, size 0x98, virtual false, abstract: false, final false
inline void SetIntegerID(int32_t  id, int32_t  value) ;

/// @brief Method SetIntegerID_Injected, addr 0x68e79cc, size 0x54, virtual false, abstract: false, final false
static inline void SetIntegerID_Injected(::System::IntPtr  _unity_self, int32_t  id, int32_t  value) ;

/// @brief Method SetIntegerString, addr 0x68dff18, size 0x174, virtual false, abstract: false, final false
inline void SetIntegerString(::StringW  name, int32_t  value) ;

/// @brief Method SetIntegerString_Injected, addr 0x68e7978, size 0x54, virtual false, abstract: false, final false
static inline void SetIntegerString_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name, int32_t  value) ;

/// @brief Method SetLayerWeight, addr 0x68e3ab4, size 0xa0, virtual false, abstract: false, final false
inline void SetLayerWeight(int32_t  layerIndex, float_t  weight) ;

/// @brief Method SetLayerWeight_Injected, addr 0x68e3b54, size 0x54, virtual false, abstract: false, final false
static inline void SetLayerWeight_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, float_t  weight) ;

/// @brief Method SetLookAtPosition, addr 0x68e2a38, size 0x40, virtual false, abstract: false, final false
inline void SetLookAtPosition(::UnityEngine::Vector3  lookAtPosition) ;

/// @brief Method SetLookAtPositionInternal, addr 0x68e2a78, size 0x98, virtual false, abstract: false, final false
inline void SetLookAtPositionInternal(::UnityEngine::Vector3  lookAtPosition) ;

/// @brief Method SetLookAtPositionInternal_Injected, addr 0x68e2b10, size 0x44, virtual false, abstract: false, final false
static inline void SetLookAtPositionInternal_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  lookAtPosition) ;

/// @brief Method SetLookAtWeight, addr 0x68e2b54, size 0x38, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight) ;

/// @brief Method SetLookAtWeight, addr 0x68e2c4c, size 0x3c, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight, float_t  bodyWeight) ;

/// @brief Method SetLookAtWeight, addr 0x68e2c88, size 0x48, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight, float_t  bodyWeight, float_t  headWeight) ;

/// @brief Method SetLookAtWeight, addr 0x68e2cd0, size 0x4c, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight) ;

/// @brief Method SetLookAtWeight, addr 0x68e2d1c, size 0x58, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight, float_t  clampWeight) ;

/// @brief Method SetLookAtWeightInternal, addr 0x68e2b8c, size 0xc0, virtual false, abstract: false, final false
inline void SetLookAtWeightInternal(float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight, float_t  clampWeight) ;

/// @brief Method SetLookAtWeightInternal_Injected, addr 0x68e2d74, size 0x7c, virtual false, abstract: false, final false
static inline void SetLookAtWeightInternal_Injected(::System::IntPtr  _unity_self, float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight, float_t  clampWeight) ;

/// @brief Method SetQuaternion, addr 0x68e90c0, size 0x4, virtual false, abstract: false, final false
inline void SetQuaternion(int32_t  id, ::UnityEngine::Quaternion  value) ;

/// @brief Method SetQuaternion, addr 0x68e90bc, size 0x4, virtual false, abstract: false, final false
inline void SetQuaternion(::StringW  name, ::UnityEngine::Quaternion  value) ;

/// @brief Method SetTarget, addr 0x68e5954, size 0xa0, virtual false, abstract: false, final false
inline void SetTarget(::UnityEngine::AvatarTarget  targetIndex, float_t  targetNormalizedTime) ;

/// @brief Method SetTarget_Injected, addr 0x68e59f4, size 0x54, virtual false, abstract: false, final false
static inline void SetTarget_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarTarget  targetIndex, float_t  targetNormalizedTime) ;

/// @brief Method SetTrigger, addr 0x68e0294, size 0x4, virtual false, abstract: false, final false
inline void SetTrigger(int32_t  id) ;

/// @brief Method SetTrigger, addr 0x68e0128, size 0x4, virtual false, abstract: false, final false
inline void SetTrigger(::StringW  name) ;

/// @brief Method SetTriggerID, addr 0x68e0298, size 0x90, virtual false, abstract: false, final false
inline void SetTriggerID(int32_t  id) ;

/// @brief Method SetTriggerID_Injected, addr 0x68e7aec, size 0x44, virtual false, abstract: false, final false
static inline void SetTriggerID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method SetTriggerString, addr 0x68e012c, size 0x168, virtual false, abstract: false, final false
inline void SetTriggerString(::StringW  name) ;

/// @brief Method SetTriggerString_Injected, addr 0x68e7aa8, size 0x44, virtual false, abstract: false, final false
static inline void SetTriggerString_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method SetVector, addr 0x68e9018, size 0x4, virtual false, abstract: false, final false
inline void SetVector(int32_t  id, ::UnityEngine::Vector3  value) ;

/// @brief Method SetVector, addr 0x68e9014, size 0x4, virtual false, abstract: false, final false
inline void SetVector(::StringW  name, ::UnityEngine::Vector3  value) ;

/// @brief Method StartPlayback, addr 0x68e6618, size 0x80, virtual false, abstract: false, final false
inline void StartPlayback() ;

/// @brief Method StartPlayback_Injected, addr 0x68e6698, size 0x3c, virtual false, abstract: false, final false
static inline void StartPlayback_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method StartRecording, addr 0x68e6928, size 0x90, virtual false, abstract: false, final false
inline void StartRecording(int32_t  frameCount) ;

/// @brief Method StartRecording_Injected, addr 0x68e69b8, size 0x44, virtual false, abstract: false, final false
static inline void StartRecording_Injected(::System::IntPtr  _unity_self, int32_t  frameCount) ;

/// @brief Method StopPlayback, addr 0x68e66d4, size 0x80, virtual false, abstract: false, final false
inline void StopPlayback() ;

/// @brief Method StopPlayback_Injected, addr 0x68e6754, size 0x3c, virtual false, abstract: false, final false
static inline void StopPlayback_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method StopRecording, addr 0x68e69fc, size 0x80, virtual false, abstract: false, final false
inline void StopRecording() ;

/// @brief Method StopRecording_Injected, addr 0x68e6a7c, size 0x3c, virtual false, abstract: false, final false
static inline void StopRecording_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method StringToHash, addr 0x68e4f98, size 0x12c, virtual false, abstract: false, final false
static inline int32_t StringToHash(::StringW  name) ;

/// @brief Method StringToHash_Injected, addr 0x68e71f0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t StringToHash_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method Update, addr 0x68e8310, size 0x90, virtual false, abstract: false, final false
inline void Update(float_t  deltaTime) ;

/// @brief Method Update_Injected, addr 0x68e83a0, size 0x4c, virtual false, abstract: false, final false
static inline void Update_Injected(::System::IntPtr  _unity_self, float_t  deltaTime) ;

/// @brief Method WriteDefaultPose, addr 0x68e8254, size 0x80, virtual false, abstract: false, final false
inline void WriteDefaultPose() ;

/// @brief Method WriteDefaultPose_Injected, addr 0x68e82d4, size 0x3c, virtual false, abstract: false, final false
static inline void WriteDefaultPose_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method WriteDefaultValues, addr 0x68e5310, size 0x80, virtual false, abstract: false, final false
inline void WriteDefaultValues() ;

/// @brief Method WriteDefaultValues_Injected, addr 0x68e5390, size 0x3c, virtual false, abstract: false, final false
static inline void WriteDefaultValues_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method .ctor, addr 0x68e90c4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_allowConstantClipSamplingOptimization, addr 0x68e153c, size 0x80, virtual false, abstract: false, final false
inline bool get_allowConstantClipSamplingOptimization() ;

/// @brief Method get_allowConstantClipSamplingOptimization_Injected, addr 0x68e15bc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_allowConstantClipSamplingOptimization_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_angularVelocity, addr 0x68e09e0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_angularVelocity() ;

/// @brief Method get_angularVelocity_Injected, addr 0x68e0a80, size 0x44, virtual false, abstract: false, final false
static inline void get_angularVelocity_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_animatePhysics, addr 0x68e1160, size 0x80, virtual false, abstract: false, final false
inline bool get_animatePhysics() ;

/// @brief Method get_animatePhysics_Injected, addr 0x68e11e0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_animatePhysics_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_applyRootMotion, addr 0x68e0e40, size 0x80, virtual false, abstract: false, final false
inline bool get_applyRootMotion() ;

/// @brief Method get_applyRootMotion_Injected, addr 0x68e0ec0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_applyRootMotion_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_avatar, addr 0x68e609c, size 0x150, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Avatar> get_avatar() ;

/// @brief Method get_avatarRoot, addr 0x68e5d18, size 0x150, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_avatarRoot() ;

/// @brief Method get_avatarRoot_Injected, addr 0x68e5e68, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_avatarRoot_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_avatar_Injected, addr 0x68e722c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_avatar_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bodyPosition, addr 0x68e1788, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_bodyPosition() ;

/// @brief Method get_bodyPositionInternal, addr 0x68e1838, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_bodyPositionInternal() ;

/// @brief Method get_bodyPositionInternal_Injected, addr 0x68e19b0, size 0x44, virtual false, abstract: false, final false
static inline void get_bodyPositionInternal_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_bodyRotation, addr 0x68e1a38, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_bodyRotation() ;

/// @brief Method get_bodyRotationInternal, addr 0x68e1a50, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_bodyRotationInternal() ;

/// @brief Method get_bodyRotationInternal_Injected, addr 0x68e1bcc, size 0x44, virtual false, abstract: false, final false
static inline void get_bodyRotationInternal_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_cullingMode, addr 0x68e6488, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorCullingMode get_cullingMode() ;

/// @brief Method get_cullingMode_Injected, addr 0x68e6508, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorCullingMode get_cullingMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_deltaPosition, addr 0x68e0738, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method get_deltaPosition_Injected, addr 0x68e07d8, size 0x44, virtual false, abstract: false, final false
static inline void get_deltaPosition_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_deltaRotation, addr 0x68e081c, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_deltaRotation() ;

/// @brief Method get_deltaRotation_Injected, addr 0x68e08b8, size 0x44, virtual false, abstract: false, final false
static inline void get_deltaRotation_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_feetPivotActive, addr 0x68e4664, size 0x80, virtual false, abstract: false, final false
inline float_t get_feetPivotActive() ;

/// @brief Method get_feetPivotActive_Injected, addr 0x68e46e4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_feetPivotActive_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_fireEvents, addr 0x68e8abc, size 0x80, virtual false, abstract: false, final false
inline bool get_fireEvents() ;

/// @brief Method get_fireEvents_Injected, addr 0x68e8b3c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_fireEvents_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_gravityWeight, addr 0x68e16cc, size 0x80, virtual false, abstract: false, final false
inline float_t get_gravityWeight() ;

/// @brief Method get_gravityWeight_Injected, addr 0x68e174c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_gravityWeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasBoundPlayables, addr 0x68e6f8c, size 0x80, virtual false, abstract: false, final false
inline bool get_hasBoundPlayables() ;

/// @brief Method get_hasBoundPlayables_Injected, addr 0x68e700c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_hasBoundPlayables_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasRootMotion, addr 0x68def74, size 0x80, virtual false, abstract: false, final false
inline bool get_hasRootMotion() ;

/// @brief Method get_hasRootMotion_Injected, addr 0x68deff4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_hasRootMotion_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasTransformHierarchy, addr 0x68e1480, size 0x80, virtual false, abstract: false, final false
inline bool get_hasTransformHierarchy() ;

/// @brief Method get_hasTransformHierarchy_Injected, addr 0x68e1500, size 0x3c, virtual false, abstract: false, final false
static inline bool get_hasTransformHierarchy_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_humanScale, addr 0x68df0ec, size 0x80, virtual false, abstract: false, final false
inline float_t get_humanScale() ;

/// @brief Method get_humanScale_Injected, addr 0x68df16c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_humanScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isHuman, addr 0x68deeb8, size 0x80, virtual false, abstract: false, final false
inline bool get_isHuman() ;

/// @brief Method get_isHuman_Injected, addr 0x68def38, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isHuman_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isInitialized, addr 0x68df1a8, size 0x80, virtual false, abstract: false, final false
inline bool get_isInitialized() ;

/// @brief Method get_isInitialized_Injected, addr 0x68df228, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isInitialized_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isMatchingTarget, addr 0x68e4c54, size 0x80, virtual false, abstract: false, final false
inline bool get_isMatchingTarget() ;

/// @brief Method get_isMatchingTarget_Injected, addr 0x68e4cd4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isMatchingTarget_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isOptimizable, addr 0x68dedfc, size 0x80, virtual false, abstract: false, final false
inline bool get_isOptimizable() ;

/// @brief Method get_isOptimizable_Injected, addr 0x68dee7c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isOptimizable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isRootPositionOrRotationControlledByCurves, addr 0x68df030, size 0x80, virtual false, abstract: false, final false
inline bool get_isRootPositionOrRotationControlledByCurves() ;

/// @brief Method get_isRootPositionOrRotationControlledByCurves_Injected, addr 0x68df0b0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isRootPositionOrRotationControlledByCurves_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_keepAnimatorControllerStateOnDisable, addr 0x68e8c4c, size 0x4, virtual false, abstract: false, final false
inline bool get_keepAnimatorControllerStateOnDisable() ;

/// @brief Method get_keepAnimatorStateOnDisable, addr 0x68e8c50, size 0x80, virtual false, abstract: false, final false
inline bool get_keepAnimatorStateOnDisable() ;

/// @brief Method get_keepAnimatorStateOnDisable_Injected, addr 0x68e8d64, size 0x3c, virtual false, abstract: false, final false
static inline bool get_keepAnimatorStateOnDisable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_layerCount, addr 0x68e35d8, size 0x80, virtual false, abstract: false, final false
inline int32_t get_layerCount() ;

/// @brief Method get_layerCount_Injected, addr 0x68e3658, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_layerCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_layersAffectMassCenter, addr 0x68e7d18, size 0x80, virtual false, abstract: false, final false
inline bool get_layersAffectMassCenter() ;

/// @brief Method get_layersAffectMassCenter_Injected, addr 0x68e7d98, size 0x3c, virtual false, abstract: false, final false
static inline bool get_layersAffectMassCenter_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_leftFeetBottomHeight, addr 0x68e7ea8, size 0x80, virtual false, abstract: false, final false
inline float_t get_leftFeetBottomHeight() ;

/// @brief Method get_leftFeetBottomHeight_Injected, addr 0x68e7f28, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_leftFeetBottomHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_linearVelocityBlending, addr 0x68e0fd0, size 0x80, virtual false, abstract: false, final false
inline bool get_linearVelocityBlending() ;

/// @brief Method get_linearVelocityBlending_Injected, addr 0x68e1050, size 0x3c, virtual false, abstract: false, final false
static inline bool get_linearVelocityBlending_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_logWarnings, addr 0x68e75dc, size 0x80, virtual false, abstract: false, final false
inline bool get_logWarnings() ;

/// @brief Method get_logWarnings_Injected, addr 0x68e89ac, size 0x3c, virtual false, abstract: false, final false
static inline bool get_logWarnings_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_parameterCount, addr 0x68e4438, size 0x80, virtual false, abstract: false, final false
inline int32_t get_parameterCount() ;

/// @brief Method get_parameterCount_Injected, addr 0x68e44b8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_parameterCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_parameters, addr 0x68e437c, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*,::Array<::UnityEngine::AnimatorControllerParameter*>*> get_parameters() ;

/// @brief Method get_parameters_Injected, addr 0x68e43fc, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*,::Array<::UnityEngine::AnimatorControllerParameter*>*> get_parameters_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pivotPosition, addr 0x68e48b8, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_pivotPosition() ;

/// @brief Method get_pivotPosition_Injected, addr 0x68e4958, size 0x44, virtual false, abstract: false, final false
static inline void get_pivotPosition_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_pivotWeight, addr 0x68e47fc, size 0x80, virtual false, abstract: false, final false
inline float_t get_pivotWeight() ;

/// @brief Method get_pivotWeight_Injected, addr 0x68e487c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_pivotWeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_playableGraph, addr 0x68e74e4, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph get_playableGraph() ;

/// @brief Method get_playbackTime, addr 0x68e6790, size 0x80, virtual false, abstract: false, final false
inline float_t get_playbackTime() ;

/// @brief Method get_playbackTime_Injected, addr 0x68e6810, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_playbackTime_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_recorderMode, addr 0x68e6c40, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorRecorderMode get_recorderMode() ;

/// @brief Method get_recorderMode_Injected, addr 0x68e6cc0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorRecorderMode get_recorderMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_recorderStartTime, addr 0x68e6ab8, size 0x4, virtual false, abstract: false, final false
inline float_t get_recorderStartTime() ;

/// @brief Method get_recorderStopTime, addr 0x68e6b7c, size 0x4, virtual false, abstract: false, final false
inline float_t get_recorderStopTime() ;

/// @brief Method get_rightFeetBottomHeight, addr 0x68e7f64, size 0x80, virtual false, abstract: false, final false
inline float_t get_rightFeetBottomHeight() ;

/// @brief Method get_rightFeetBottomHeight_Injected, addr 0x68e7fe4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_rightFeetBottomHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rootPosition, addr 0x68e0ac4, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rootPosition() ;

/// @brief Method get_rootPosition_Injected, addr 0x68e0b64, size 0x44, virtual false, abstract: false, final false
static inline void get_rootPosition_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_rootRotation, addr 0x68e0c84, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rootRotation() ;

/// @brief Method get_rootRotation_Injected, addr 0x68e0d20, size 0x44, virtual false, abstract: false, final false
static inline void get_rootRotation_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_runtimeAnimatorController, addr 0x68e6cfc, size 0x150, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController() ;

/// @brief Method get_runtimeAnimatorController_Injected, addr 0x68e6e4c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_runtimeAnimatorController_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_speed, addr 0x68e4d10, size 0x80, virtual false, abstract: false, final false
inline float_t get_speed() ;

/// @brief Method get_speed_Injected, addr 0x68e4d90, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_speed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stabilizeFeet, addr 0x68e3448, size 0x80, virtual false, abstract: false, final false
inline bool get_stabilizeFeet() ;

/// @brief Method get_stabilizeFeet_Injected, addr 0x68e34c8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_stabilizeFeet_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_supportsOnAnimatorMove, addr 0x68e8020, size 0x80, virtual false, abstract: false, final false
inline bool get_supportsOnAnimatorMove() ;

/// @brief Method get_supportsOnAnimatorMove_Injected, addr 0x68e80a0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_supportsOnAnimatorMove_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_targetPosition, addr 0x68e5a48, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_targetPosition() ;

/// @brief Method get_targetPosition_Injected, addr 0x68e5ae8, size 0x44, virtual false, abstract: false, final false
static inline void get_targetPosition_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_targetRotation, addr 0x68e5b2c, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_targetRotation() ;

/// @brief Method get_targetRotation_Injected, addr 0x68e5bc8, size 0x44, virtual false, abstract: false, final false
static inline void get_targetRotation_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_updateMode, addr 0x68e12f0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorUpdateMode get_updateMode() ;

/// @brief Method get_updateMode_Injected, addr 0x68e1370, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorUpdateMode get_updateMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocity, addr 0x68e08fc, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method get_velocity_Injected, addr 0x68e099c, size 0x44, virtual false, abstract: false, final false
static inline void get_velocity_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_writeDefaultValuesOnDisable, addr 0x68e8de4, size 0x80, virtual false, abstract: false, final false
inline bool get_writeDefaultValuesOnDisable() ;

/// @brief Method get_writeDefaultValuesOnDisable_Injected, addr 0x68e8e64, size 0x3c, virtual false, abstract: false, final false
static inline bool get_writeDefaultValuesOnDisable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_allowConstantClipSamplingOptimization, addr 0x68e15f8, size 0x90, virtual false, abstract: false, final false
inline void set_allowConstantClipSamplingOptimization(bool  value) ;

/// @brief Method set_allowConstantClipSamplingOptimization_Injected, addr 0x68e1688, size 0x44, virtual false, abstract: false, final false
static inline void set_allowConstantClipSamplingOptimization_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_animatePhysics, addr 0x68e121c, size 0x90, virtual false, abstract: false, final false
inline void set_animatePhysics(bool  value) ;

/// @brief Method set_animatePhysics_Injected, addr 0x68e12ac, size 0x44, virtual false, abstract: false, final false
static inline void set_animatePhysics_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_applyRootMotion, addr 0x68e0efc, size 0x90, virtual false, abstract: false, final false
inline void set_applyRootMotion(bool  value) ;

/// @brief Method set_applyRootMotion_Injected, addr 0x68e0f8c, size 0x44, virtual false, abstract: false, final false
static inline void set_applyRootMotion_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_avatar, addr 0x68e7268, size 0xc0, virtual false, abstract: false, final false
inline void set_avatar(::UnityEngine::Avatar*  value) ;

/// @brief Method set_avatar_Injected, addr 0x68e7328, size 0x44, virtual false, abstract: false, final false
static inline void set_avatar_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_bodyPosition, addr 0x68e18d8, size 0x40, virtual false, abstract: false, final false
inline void set_bodyPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_bodyPositionInternal, addr 0x68e1918, size 0x98, virtual false, abstract: false, final false
inline void set_bodyPositionInternal(::UnityEngine::Vector3  value) ;

/// @brief Method set_bodyPositionInternal_Injected, addr 0x68e19f4, size 0x44, virtual false, abstract: false, final false
static inline void set_bodyPositionInternal_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_bodyRotation, addr 0x68e1aec, size 0x48, virtual false, abstract: false, final false
inline void set_bodyRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_bodyRotationInternal, addr 0x68e1b34, size 0x98, virtual false, abstract: false, final false
inline void set_bodyRotationInternal(::UnityEngine::Quaternion  value) ;

/// @brief Method set_bodyRotationInternal_Injected, addr 0x68e1c10, size 0x44, virtual false, abstract: false, final false
static inline void set_bodyRotationInternal_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_cullingMode, addr 0x68e6544, size 0x90, virtual false, abstract: false, final false
inline void set_cullingMode(::UnityEngine::AnimatorCullingMode  value) ;

/// @brief Method set_cullingMode_Injected, addr 0x68e65d4, size 0x44, virtual false, abstract: false, final false
static inline void set_cullingMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AnimatorCullingMode  value) ;

/// @brief Method set_feetPivotActive, addr 0x68e4720, size 0x90, virtual false, abstract: false, final false
inline void set_feetPivotActive(float_t  value) ;

/// @brief Method set_feetPivotActive_Injected, addr 0x68e47b0, size 0x4c, virtual false, abstract: false, final false
static inline void set_feetPivotActive_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_fireEvents, addr 0x68e8b78, size 0x90, virtual false, abstract: false, final false
inline void set_fireEvents(bool  value) ;

/// @brief Method set_fireEvents_Injected, addr 0x68e8c08, size 0x44, virtual false, abstract: false, final false
static inline void set_fireEvents_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_keepAnimatorControllerStateOnDisable, addr 0x68e8cd0, size 0x4, virtual false, abstract: false, final false
inline void set_keepAnimatorControllerStateOnDisable(bool  value) ;

/// @brief Method set_keepAnimatorStateOnDisable, addr 0x68e8cd4, size 0x90, virtual false, abstract: false, final false
inline void set_keepAnimatorStateOnDisable(bool  value) ;

/// @brief Method set_keepAnimatorStateOnDisable_Injected, addr 0x68e8da0, size 0x44, virtual false, abstract: false, final false
static inline void set_keepAnimatorStateOnDisable_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_layersAffectMassCenter, addr 0x68e7dd4, size 0x90, virtual false, abstract: false, final false
inline void set_layersAffectMassCenter(bool  value) ;

/// @brief Method set_layersAffectMassCenter_Injected, addr 0x68e7e64, size 0x44, virtual false, abstract: false, final false
static inline void set_layersAffectMassCenter_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_linearVelocityBlending, addr 0x68e108c, size 0x90, virtual false, abstract: false, final false
inline void set_linearVelocityBlending(bool  value) ;

/// @brief Method set_linearVelocityBlending_Injected, addr 0x68e111c, size 0x44, virtual false, abstract: false, final false
static inline void set_linearVelocityBlending_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_logWarnings, addr 0x68e89e8, size 0x90, virtual false, abstract: false, final false
inline void set_logWarnings(bool  value) ;

/// @brief Method set_logWarnings_Injected, addr 0x68e8a78, size 0x44, virtual false, abstract: false, final false
static inline void set_logWarnings_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_playbackTime, addr 0x68e684c, size 0x90, virtual false, abstract: false, final false
inline void set_playbackTime(float_t  value) ;

/// @brief Method set_playbackTime_Injected, addr 0x68e68dc, size 0x4c, virtual false, abstract: false, final false
static inline void set_playbackTime_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_recorderStartTime, addr 0x68e6b3c, size 0x4, virtual false, abstract: false, final false
inline void set_recorderStartTime(float_t  value) ;

/// @brief Method set_recorderStopTime, addr 0x68e6c00, size 0x4, virtual false, abstract: false, final false
inline void set_recorderStopTime(float_t  value) ;

/// @brief Method set_rootPosition, addr 0x68e0ba8, size 0x98, virtual false, abstract: false, final false
inline void set_rootPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_rootPosition_Injected, addr 0x68e0c40, size 0x44, virtual false, abstract: false, final false
static inline void set_rootPosition_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_rootRotation, addr 0x68e0d64, size 0x98, virtual false, abstract: false, final false
inline void set_rootRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rootRotation_Injected, addr 0x68e0dfc, size 0x44, virtual false, abstract: false, final false
static inline void set_rootRotation_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_runtimeAnimatorController, addr 0x68e6e88, size 0xc0, virtual false, abstract: false, final false
inline void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController*  value) ;

/// @brief Method set_runtimeAnimatorController_Injected, addr 0x68e6f48, size 0x44, virtual false, abstract: false, final false
static inline void set_runtimeAnimatorController_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_speed, addr 0x68e4dcc, size 0x90, virtual false, abstract: false, final false
inline void set_speed(float_t  value) ;

/// @brief Method set_speed_Injected, addr 0x68e4e5c, size 0x4c, virtual false, abstract: false, final false
static inline void set_speed_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_stabilizeFeet, addr 0x68e3504, size 0x90, virtual false, abstract: false, final false
inline void set_stabilizeFeet(bool  value) ;

/// @brief Method set_stabilizeFeet_Injected, addr 0x68e3594, size 0x44, virtual false, abstract: false, final false
static inline void set_stabilizeFeet_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_updateMode, addr 0x68e13ac, size 0x90, virtual false, abstract: false, final false
inline void set_updateMode(::UnityEngine::AnimatorUpdateMode  value) ;

/// @brief Method set_updateMode_Injected, addr 0x68e143c, size 0x44, virtual false, abstract: false, final false
static inline void set_updateMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AnimatorUpdateMode  value) ;

/// @brief Method set_writeDefaultValuesOnDisable, addr 0x68e8ea0, size 0x90, virtual false, abstract: false, final false
inline void set_writeDefaultValuesOnDisable(bool  value) ;

/// @brief Method set_writeDefaultValuesOnDisable_Injected, addr 0x68e8f30, size 0x44, virtual false, abstract: false, final false
static inline void set_writeDefaultValuesOnDisable_Injected(::System::IntPtr  _unity_self, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Animator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Animator(Animator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Animator(Animator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20013};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animator, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Animator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animator*, "UnityEngine", "Animator");
