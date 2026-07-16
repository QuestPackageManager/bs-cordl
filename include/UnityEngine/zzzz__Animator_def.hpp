#pragma once
// IWYU pragma private; include "UnityEngine/Animator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Animator)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
MARK_REF_T(::UnityEngine::Animator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animator*, "UnityEngine", "Animator");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Animator
class CORDL_TYPE Animator : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_allowConstantClipSamplingOptimization, put = set_allowConstantClipSamplingOptimization)) bool allowConstantClipSamplingOptimization;

  __declspec(property(get = get_angularVelocity)) ::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_animatePhysics, put = set_animatePhysics)) bool animatePhysics;

  __declspec(property(get = get_applyRootMotion, put = set_applyRootMotion)) bool applyRootMotion;

  __declspec(property(get = get_avatar, put = set_avatar)) ::UnityW<::UnityEngine::Avatar> avatar;

  __declspec(property(get = get_avatarRoot)) ::UnityW<::UnityEngine::Transform> avatarRoot;

  __declspec(property(get = get_bodyPosition, put = set_bodyPosition)) ::UnityEngine::Vector3 bodyPosition;

  __declspec(property(get = get_bodyPositionInternal, put = set_bodyPositionInternal)) ::UnityEngine::Vector3 bodyPositionInternal;

  __declspec(property(get = get_bodyRotation, put = set_bodyRotation)) ::UnityEngine::Quaternion bodyRotation;

  __declspec(property(get = get_bodyRotationInternal, put = set_bodyRotationInternal)) ::UnityEngine::Quaternion bodyRotationInternal;

  __declspec(property(get = get_cullingMode, put = set_cullingMode)) ::UnityEngine::AnimatorCullingMode cullingMode;

  __declspec(property(get = get_deltaPosition)) ::UnityEngine::Vector3 deltaPosition;

  __declspec(property(get = get_deltaRotation)) ::UnityEngine::Quaternion deltaRotation;

  __declspec(property(get = get_feetPivotActive, put = set_feetPivotActive)) float_t feetPivotActive;

  __declspec(property(get = get_fireEvents, put = set_fireEvents)) bool fireEvents;

  __declspec(property(get = get_gravityWeight)) float_t gravityWeight;

  __declspec(property(get = get_hasBoundPlayables)) bool hasBoundPlayables;

  __declspec(property(get = get_hasRootMotion)) bool hasRootMotion;

  __declspec(property(get = get_hasTransformHierarchy)) bool hasTransformHierarchy;

  __declspec(property(get = get_humanScale)) float_t humanScale;

  __declspec(property(get = get_isHuman)) bool isHuman;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_isMatchingTarget)) bool isMatchingTarget;

  __declspec(property(get = get_isOptimizable)) bool isOptimizable;

  __declspec(property(get = get_isRootPositionOrRotationControlledByCurves)) bool isRootPositionOrRotationControlledByCurves;

  __declspec(property(get = get_keepAnimatorControllerStateOnDisable, put = set_keepAnimatorControllerStateOnDisable)) bool keepAnimatorControllerStateOnDisable;

  __declspec(property(get = get_keepAnimatorStateOnDisable, put = set_keepAnimatorStateOnDisable)) bool keepAnimatorStateOnDisable;

  __declspec(property(get = get_layerCount)) int32_t layerCount;

  __declspec(property(get = get_layersAffectMassCenter, put = set_layersAffectMassCenter)) bool layersAffectMassCenter;

  __declspec(property(get = get_leftFeetBottomHeight)) float_t leftFeetBottomHeight;

  __declspec(property(get = get_linearVelocityBlending, put = set_linearVelocityBlending)) bool linearVelocityBlending;

  __declspec(property(get = get_logWarnings, put = set_logWarnings)) bool logWarnings;

  __declspec(property(get = get_parameterCount)) int32_t parameterCount;

  __declspec(property(get = get_parameters)) ::ArrayW<::UnityEngine::AnimatorControllerParameter*> parameters;

  __declspec(property(get = get_pivotPosition)) ::UnityEngine::Vector3 pivotPosition;

  __declspec(property(get = get_pivotWeight)) float_t pivotWeight;

  __declspec(property(get = get_playableGraph)) ::UnityEngine::Playables::PlayableGraph playableGraph;

  __declspec(property(get = get_playbackTime, put = set_playbackTime)) float_t playbackTime;

  __declspec(property(get = get_recorderMode)) ::UnityEngine::AnimatorRecorderMode recorderMode;

  __declspec(property(get = get_recorderStartTime, put = set_recorderStartTime)) float_t recorderStartTime;

  __declspec(property(get = get_recorderStopTime, put = set_recorderStopTime)) float_t recorderStopTime;

  __declspec(property(get = get_rightFeetBottomHeight)) float_t rightFeetBottomHeight;

  __declspec(property(get = get_rootPosition, put = set_rootPosition)) ::UnityEngine::Vector3 rootPosition;

  __declspec(property(get = get_rootRotation, put = set_rootRotation)) ::UnityEngine::Quaternion rootRotation;

  __declspec(property(get = get_runtimeAnimatorController, put = set_runtimeAnimatorController)) ::UnityW<::UnityEngine::RuntimeAnimatorController> runtimeAnimatorController;

  __declspec(property(get = get_speed, put = set_speed)) float_t speed;

  __declspec(property(get = get_stabilizeFeet, put = set_stabilizeFeet)) bool stabilizeFeet;

  __declspec(property(get = get_supportsOnAnimatorMove)) bool supportsOnAnimatorMove;

  __declspec(property(get = get_targetPosition)) ::UnityEngine::Vector3 targetPosition;

  __declspec(property(get = get_targetRotation)) ::UnityEngine::Quaternion targetRotation;

  __declspec(property(get = get_updateMode, put = set_updateMode)) ::UnityEngine::AnimatorUpdateMode updateMode;

  __declspec(property(get = get_velocity)) ::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_writeDefaultValuesOnDisable, put = set_writeDefaultValuesOnDisable)) bool writeDefaultValuesOnDisable;

  /// @brief Method ApplyBuiltinRootMotion, addr 0x6a3f3e0, size 0x80, virtual false, abstract: false, final false
  inline void ApplyBuiltinRootMotion();

  /// @brief Method ApplyBuiltinRootMotion_Injected, addr 0x6a3f460, size 0x3c, virtual false, abstract: false, final false
  static inline void ApplyBuiltinRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method CheckIfInIKPass, addr 0x6a386b8, size 0x98, virtual false, abstract: false, final false
  inline void CheckIfInIKPass();

  /// @brief Method ClearInternalControllerPlayable, addr 0x6a3df60, size 0x80, virtual false, abstract: false, final false
  inline void ClearInternalControllerPlayable();

  /// @brief Method ClearInternalControllerPlayable_Injected, addr 0x6a3dfe0, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearInternalControllerPlayable_Injected(::System::IntPtr _unity_self);

  /// @brief Method ConvertStateMachineBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*> rawObjects);

  /// @brief Method CrossFade, addr 0x6a3c568, size 0x14, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade, addr 0x6a3c558, size 0x10, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x6a3c550, size 0x8, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade, addr 0x6a3c414, size 0xc0, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFade, addr 0x6a3c3d4, size 0x40, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade, addr 0x6a3c388, size 0x4c, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x6a3c2e4, size 0x4c, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade, addr 0x6a3c330, size 0x58, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a3c19c, size 0x10, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a3c190, size 0xc, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a3c188, size 0x8, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a3bfdc, size 0xc0, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a3be74, size 0x3c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a3c09c, size 0x48, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a3c0e4, size 0x4c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a3c130, size 0x58, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime_Injected, addr 0x6a3c1ac, size 0x7c, virtual false, abstract: false, final false
  static inline void CrossFadeInFixedTime_Injected(::System::IntPtr _unity_self, int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset,
                                                   float_t normalizedTransitionTime);

  /// @brief Method CrossFade_Injected, addr 0x6a3c4d4, size 0x7c, virtual false, abstract: false, final false
  static inline void CrossFade_Injected(::System::IntPtr _unity_self, int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset,
                                        float_t normalizedTransitionTime);

  /// @brief Method EvaluateController, addr 0x6a3f49c, size 0x8, virtual false, abstract: false, final false
  inline void EvaluateController();

  /// @brief Method EvaluateController, addr 0x6a3f4a4, size 0x90, virtual false, abstract: false, final false
  inline void EvaluateController(float_t deltaTime);

  /// @brief Method EvaluateController_Injected, addr 0x6a3f534, size 0x4c, virtual false, abstract: false, final false
  static inline void EvaluateController_Injected(::System::IntPtr _unity_self, float_t deltaTime);

  /// @brief Method ForceStateNormalizedTime, addr 0x6a3bdc0, size 0xc, virtual false, abstract: false, final false
  inline void ForceStateNormalizedTime(float_t normalizedTime);

  /// @brief Method GetAnimatorClipInfoCount, addr 0x6a3ad60, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetAnimatorClipInfoCount(int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorClipInfoCount_Injected, addr 0x6a3adf8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetAnimatorClipInfoCount_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorClipInfoInternal, addr 0x6a3b060, size 0xa8, virtual false, abstract: false, final false
  inline void GetAnimatorClipInfoInternal(int32_t layerIndex, bool isCurrent, ::System::Object* clips);

  /// @brief Method GetAnimatorClipInfoInternal_Injected, addr 0x6a3b108, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAnimatorClipInfoInternal_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool isCurrent, ::System::Object* clips);

  /// @brief Method GetAnimatorStateInfo, addr 0x6a3aac0, size 0xa8, virtual false, abstract: false, final false
  inline void GetAnimatorStateInfo(int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo> info);

  /// @brief Method GetAnimatorStateInfo_Injected, addr 0x6a3ab68, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAnimatorStateInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo> info);

  /// @brief Method GetAnimatorStateName, addr 0x6a3f588, size 0x144, virtual false, abstract: false, final false
  inline ::StringW GetAnimatorStateName(int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorStateName_Injected, addr 0x6a3f6d4, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAnimatorStateName_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool current, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x6a3ad30, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t layerIndex);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x6a3ac44, size 0x98, virtual false, abstract: false, final false
  inline void GetAnimatorTransitionInfo(int32_t layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo> info);

  /// @brief Method GetAnimatorTransitionInfo_Injected, addr 0x6a3acdc, size 0x54, virtual false, abstract: false, final false
  static inline void GetAnimatorTransitionInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo> info);

  /// @brief Method GetBehaviour, addr 0x6a39ec0, size 0x184, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> GetBehaviour(::System::Type* type);

  /// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetBehaviour();

  /// @brief Method GetBehaviour_Injected, addr 0x6a3a044, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBehaviour_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method GetBehaviours, addr 0x6a3a188, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>> GetBehaviours(int32_t fullPathHash, int32_t layerIndex);

  /// @brief Method GetBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetBehaviours();

  /// @brief Method GetBoneTransform, addr 0x6a3cdbc, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones humanBoneId);

  /// @brief Method GetBoneTransformInternal, addr 0x6a3d204, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransformInternal(int32_t humanBoneId);

  /// @brief Method GetBoneTransformInternal_Injected, addr 0x6a3d35c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBoneTransformInternal_Injected(::System::IntPtr _unity_self, int32_t humanBoneId);

  /// @brief Method GetBool, addr 0x6a36978, size 0x4, virtual false, abstract: false, final false
  inline bool GetBool(int32_t id);

  /// @brief Method GetBool, addr 0x6a367fc, size 0x4, virtual false, abstract: false, final false
  inline bool GetBool(::StringW name);

  /// @brief Method GetBoolID, addr 0x6a3697c, size 0x90, virtual false, abstract: false, final false
  inline bool GetBoolID(int32_t id);

  /// @brief Method GetBoolID_Injected, addr 0x6a3e84c, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBoolID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method GetBoolString, addr 0x6a36800, size 0x178, virtual false, abstract: false, final false
  inline bool GetBoolString(::StringW name);

  /// @brief Method GetBoolString_Injected, addr 0x6a3e808, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBoolString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x6a3ae5c, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x6a3b004, size 0x5c, virtual false, abstract: false, final false
  inline void GetCurrentAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x6a3ae4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetCurrentAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo_Injected, addr 0x6a3aeec, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorStateInfo, addr 0x6a3abc4, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetCurrentGraph, addr 0x6a3e420, size 0x90, virtual false, abstract: false, final false
  inline void GetCurrentGraph(::by_ref<::UnityEngine::Playables::PlayableGraph> graph);

  /// @brief Method GetCurrentGraph_Injected, addr 0x6a3e4b0, size 0x44, virtual false, abstract: false, final false
  static inline void GetCurrentGraph_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph> graph);

  /// @brief Method GetCurrentStateName, addr 0x6a3f580, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetCurrentStateName(int32_t layerIndex);

  /// @brief Method GetFloat, addr 0x6a362f0, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t id);

  /// @brief Method GetFloat, addr 0x6a3617c, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloatID, addr 0x6a362f4, size 0x90, virtual false, abstract: false, final false
  inline float_t GetFloatID(int32_t id);

  /// @brief Method GetFloatID_Injected, addr 0x6a3e71c, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method GetFloatString, addr 0x6a36180, size 0x170, virtual false, abstract: false, final false
  inline float_t GetFloatString(::StringW name);

  /// @brief Method GetFloatString_Injected, addr 0x6a3e6d8, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetGoalPosition, addr 0x6a38b94, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalPosition_Injected, addr 0x6a38c44, size 0x54, virtual false, abstract: false, final false
  static inline void GetGoalPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetGoalRotation, addr 0x6a38e0c, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetGoalRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalRotation_Injected, addr 0x6a38eb8, size 0x54, virtual false, abstract: false, final false
  static inline void GetGoalRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method GetGoalWeightPosition, addr 0x6a39088, size 0x90, virtual false, abstract: false, final false
  inline float_t GetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightPosition_Injected, addr 0x6a39118, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetGoalWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightRotation, addr 0x6a392b0, size 0x90, virtual false, abstract: false, final false
  inline float_t GetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightRotation_Injected, addr 0x6a39340, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetGoalWeightRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetHintPosition, addr 0x6a394d8, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintPosition_Injected, addr 0x6a39588, size 0x54, virtual false, abstract: false, final false
  static inline void GetHintPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetHintWeightPosition, addr 0x6a39750, size 0x90, virtual false, abstract: false, final false
  inline float_t GetHintWeightPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintWeightPosition_Injected, addr 0x6a397e0, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetHintWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKHintPosition, addr 0x6a394b0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKHintPositionWeight, addr 0x6a39728, size 0x28, virtual false, abstract: false, final false
  inline float_t GetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKPosition, addr 0x6a38b6c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKPositionWeight, addr 0x6a39060, size 0x28, virtual false, abstract: false, final false
  inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotation, addr 0x6a38de4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotationWeight, addr 0x6a39288, size 0x28, virtual false, abstract: false, final false
  inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetInteger, addr 0x6a36d98, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t id);

  /// @brief Method GetInteger, addr 0x6a36c20, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetIntegerID, addr 0x6a36d9c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetIntegerID(int32_t id);

  /// @brief Method GetIntegerID_Injected, addr 0x6a3e97c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntegerID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method GetIntegerString, addr 0x6a36c24, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetIntegerString(::StringW name);

  /// @brief Method GetIntegerString_Injected, addr 0x6a3e938, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntegerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetLayerIndex, addr 0x6a3a740, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetLayerIndex(::StringW layerName);

  /// @brief Method GetLayerIndex_Injected, addr 0x6a3a8b4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetLayerIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> layerName);

  /// @brief Method GetLayerName, addr 0x6a3a5ac, size 0x140, virtual false, abstract: false, final false
  inline ::StringW GetLayerName(int32_t layerIndex);

  /// @brief Method GetLayerName_Injected, addr 0x6a3a6ec, size 0x54, virtual false, abstract: false, final false
  static inline void GetLayerName_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetLayerWeight, addr 0x6a3a8f8, size 0x90, virtual false, abstract: false, final false
  inline float_t GetLayerWeight(int32_t layerIndex);

  /// @brief Method GetLayerWeight_Injected, addr 0x6a3a988, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetLayerWeight_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo, addr 0x6a3af30, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo, addr 0x6a3b164, size 0x5c, virtual false, abstract: false, final false
  inline void GetNextAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetNextAnimatorClipInfoCount, addr 0x6a3ae54, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetNextAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo_Injected, addr 0x6a3afc0, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method GetNextAnimatorStateInfo, addr 0x6a3ac04, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetNextStateName, addr 0x6a3f6cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetNextStateName(int32_t layerIndex);

  /// @brief Method GetParameter, addr 0x6a3b4e0, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t index);

  /// @brief Method GetParameterInternal, addr 0x6a3b40c, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal(int32_t index);

  /// @brief Method GetParameterInternal_Injected, addr 0x6a3b49c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetQuaternion, addr 0x6a3ff84, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(int32_t id);

  /// @brief Method GetQuaternion, addr 0x6a3ff34, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(::StringW name);

  /// @brief Method GetRecorderStartTime, addr 0x6a3d9d4, size 0x80, virtual false, abstract: false, final false
  inline float_t GetRecorderStartTime();

  /// @brief Method GetRecorderStartTime_Injected, addr 0x6a3da58, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetRecorderStartTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetRecorderStopTime, addr 0x6a3da98, size 0x80, virtual false, abstract: false, final false
  inline float_t GetRecorderStopTime();

  /// @brief Method GetRecorderStopTime_Injected, addr 0x6a3db1c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetRecorderStopTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetStats, addr 0x6a3e284, size 0x134, virtual false, abstract: false, final false
  inline ::StringW GetStats();

  /// @brief Method GetStats_Injected, addr 0x6a3e3b8, size 0x44, virtual false, abstract: false, final false
  static inline void GetStats_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetVector, addr 0x6a3fedc, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(int32_t id);

  /// @brief Method GetVector, addr 0x6a3fe8c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(::StringW name);

  /// @brief Method HasState, addr 0x6a3e01c, size 0x98, virtual false, abstract: false, final false
  inline bool HasState(int32_t layerIndex, int32_t stateID);

  /// @brief Method HasState_Injected, addr 0x6a3e0b4, size 0x54, virtual false, abstract: false, final false
  static inline bool HasState_Injected(::System::IntPtr _unity_self, int32_t layerIndex, int32_t stateID);

  /// @brief Method InternalGetBehaviours, addr 0x6a3a088, size 0xbc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehaviours(::System::Type* type);

  /// @brief Method InternalGetBehavioursByKey, addr 0x6a3a230, size 0xd4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehavioursByKey(int32_t fullPathHash, int32_t layerIndex, ::System::Type* type);

  /// @brief Method InternalGetBehavioursByKey_Injected, addr 0x6a3a304, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehavioursByKey_Injected(::System::IntPtr _unity_self, int32_t fullPathHash, int32_t layerIndex, ::System::Type* type);

  /// @brief Method InternalGetBehaviours_Injected, addr 0x6a3a144, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehaviours_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method InterruptMatchTarget, addr 0x6a3ba90, size 0x8, virtual false, abstract: false, final false
  inline void InterruptMatchTarget();

  /// @brief Method InterruptMatchTarget, addr 0x6a3ba98, size 0x90, virtual false, abstract: false, final false
  inline void InterruptMatchTarget(bool completeMatch);

  /// @brief Method InterruptMatchTarget_Injected, addr 0x6a3bb28, size 0x44, virtual false, abstract: false, final false
  static inline void InterruptMatchTarget_Injected(::System::IntPtr _unity_self, bool completeMatch);

  /// @brief Method IsBoneTransform, addr 0x6a3cb2c, size 0xc0, virtual false, abstract: false, final false
  inline bool IsBoneTransform(::UnityEngine::Transform* transform);

  /// @brief Method IsBoneTransform_Injected, addr 0x6a3cbec, size 0x44, virtual false, abstract: false, final false
  static inline bool IsBoneTransform_Injected(::System::IntPtr _unity_self, ::System::IntPtr transform);

  /// @brief Method IsControlled, addr 0x6a3cb24, size 0x8, virtual false, abstract: false, final false
  inline bool IsControlled(::UnityEngine::Transform* transform);

  /// @brief Method IsInIKPass, addr 0x6a3e574, size 0x80, virtual false, abstract: false, final false
  inline bool IsInIKPass();

  /// @brief Method IsInIKPass_Injected, addr 0x6a3e5f4, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsInIKPass_Injected(::System::IntPtr _unity_self);

  /// @brief Method IsInTransition, addr 0x6a3b1c0, size 0x90, virtual false, abstract: false, final false
  inline bool IsInTransition(int32_t layerIndex);

  /// @brief Method IsInTransition_Injected, addr 0x6a3b250, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInTransition_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method IsParameterControlledByCurve, addr 0x6a375bc, size 0x4, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(int32_t id);

  /// @brief Method IsParameterControlledByCurve, addr 0x6a37440, size 0x4, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(::StringW name);

  /// @brief Method IsParameterControlledByCurveID, addr 0x6a375c0, size 0x90, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveID(int32_t id);

  /// @brief Method IsParameterControlledByCurveID_Injected, addr 0x6a3eb14, size 0x44, virtual false, abstract: false, final false
  static inline bool IsParameterControlledByCurveID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method IsParameterControlledByCurveString, addr 0x6a37444, size 0x178, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveString(::StringW name);

  /// @brief Method IsParameterControlledByCurveString_Injected, addr 0x6a3ead0, size 0x44, virtual false, abstract: false, final false
  static inline bool IsParameterControlledByCurveString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method MatchTarget, addr 0x6a3ba20, size 0x34, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime);

  /// @brief Method MatchTarget, addr 0x6a3ba54, size 0x20, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime);

  /// @brief Method MatchTarget, addr 0x6a3ba74, size 0x1c, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method MatchTarget, addr 0x6a3b8b4, size 0xe0, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method MatchTarget_Injected, addr 0x6a3b994, size 0x8c, virtual false, abstract: false, final false
  static inline void MatchTarget_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> matchPosition, ::by_ref<::UnityEngine::Quaternion> matchRotation, int32_t targetBodyPart,
                                          ::by_ref<::UnityEngine::MatchTargetWeightMask> weightMask, float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  static inline ::UnityEngine::Animator* New_ctor();

  /// @brief Method OnCullingModeChanged, addr 0x6a3f0b0, size 0x80, virtual false, abstract: false, final false
  inline void OnCullingModeChanged();

  /// @brief Method OnCullingModeChanged_Injected, addr 0x6a3f130, size 0x3c, virtual false, abstract: false, final false
  static inline void OnCullingModeChanged_Injected(::System::IntPtr _unity_self);

  /// @brief Method OnUpdateModeChanged, addr 0x6a3eff4, size 0x80, virtual false, abstract: false, final false
  inline void OnUpdateModeChanged();

  /// @brief Method OnUpdateModeChanged_Injected, addr 0x6a3f074, size 0x3c, virtual false, abstract: false, final false
  static inline void OnUpdateModeChanged_Injected(::System::IntPtr _unity_self);

  /// @brief Method Play, addr 0x6a3c7c0, size 0x2c, virtual false, abstract: false, final false
  inline void Play(::StringW stateName);

  /// @brief Method Play, addr 0x6a3c748, size 0x38, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, int32_t layer);

  /// @brief Method Play, addr 0x6a3c780, size 0x40, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, int32_t layer, float_t normalizedTime);

  /// @brief Method Play, addr 0x6a3c85c, size 0x10, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash);

  /// @brief Method Play, addr 0x6a3c850, size 0xc, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, int32_t layer);

  /// @brief Method Play, addr 0x6a3bdcc, size 0xa8, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, int32_t layer, float_t normalizedTime);

  /// @brief Method PlayInFixedTime, addr 0x6a3c5f4, size 0x2c, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName);

  /// @brief Method PlayInFixedTime, addr 0x6a3c57c, size 0x38, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer);

  /// @brief Method PlayInFixedTime, addr 0x6a3c5b4, size 0x40, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer, float_t fixedTime);

  /// @brief Method PlayInFixedTime, addr 0x6a3c738, size 0x10, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash);

  /// @brief Method PlayInFixedTime, addr 0x6a3c72c, size 0xc, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer);

  /// @brief Method PlayInFixedTime, addr 0x6a3c620, size 0xa8, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer, float_t fixedTime);

  /// @brief Method PlayInFixedTime_Injected, addr 0x6a3c6c8, size 0x64, virtual false, abstract: false, final false
  static inline void PlayInFixedTime_Injected(::System::IntPtr _unity_self, int32_t stateNameHash, int32_t layer, float_t fixedTime);

  /// @brief Method Play_Injected, addr 0x6a3c7ec, size 0x64, virtual false, abstract: false, final false
  static inline void Play_Injected(::System::IntPtr _unity_self, int32_t stateNameHash, int32_t layer, float_t normalizedTime);

  /// @brief Method Rebind, addr 0x6a3f304, size 0x8, virtual false, abstract: false, final false
  inline void Rebind();

  /// @brief Method Rebind, addr 0x6a3f30c, size 0x90, virtual false, abstract: false, final false
  inline void Rebind(bool writeDefaultValues);

  /// @brief Method Rebind_Injected, addr 0x6a3f39c, size 0x44, virtual false, abstract: false, final false
  static inline void Rebind_Injected(::System::IntPtr _unity_self, bool writeDefaultValues);

  /// @brief Method ResetTrigger, addr 0x6a373ac, size 0x4, virtual false, abstract: false, final false
  inline void ResetTrigger(int32_t id);

  /// @brief Method ResetTrigger, addr 0x6a37240, size 0x4, virtual false, abstract: false, final false
  inline void ResetTrigger(::StringW name);

  /// @brief Method ResetTriggerID, addr 0x6a373b0, size 0x90, virtual false, abstract: false, final false
  inline void ResetTriggerID(int32_t id);

  /// @brief Method ResetTriggerID_Injected, addr 0x6a3ea8c, size 0x44, virtual false, abstract: false, final false
  static inline void ResetTriggerID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method ResetTriggerString, addr 0x6a37244, size 0x168, virtual false, abstract: false, final false
  inline void ResetTriggerString(::StringW name);

  /// @brief Method ResetTriggerString_Injected, addr 0x6a3ea48, size 0x44, virtual false, abstract: false, final false
  static inline void ResetTriggerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method ResolveHash, addr 0x6a3f730, size 0x140, virtual false, abstract: false, final false
  inline ::StringW ResolveHash(int32_t hash);

  /// @brief Method ResolveHash_Injected, addr 0x6a3f870, size 0x54, virtual false, abstract: false, final false
  static inline void ResolveHash_Injected(::System::IntPtr _unity_self, int32_t hash, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method SetBoneLocalRotation, addr 0x6a39d08, size 0x80, virtual false, abstract: false, final false
  inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetBoneLocalRotationInternal, addr 0x6a39dc4, size 0xa8, virtual false, abstract: false, final false
  inline void SetBoneLocalRotationInternal(int32_t humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetBoneLocalRotationInternal_Injected, addr 0x6a39e6c, size 0x54, virtual false, abstract: false, final false
  static inline void SetBoneLocalRotationInternal_Injected(::System::IntPtr _unity_self, int32_t humanBoneId, ::by_ref<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetBool, addr 0x6a36b84, size 0x4, virtual false, abstract: false, final false
  inline void SetBool(int32_t id, bool value);

  /// @brief Method SetBool, addr 0x6a36a0c, size 0x4, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool value);

  /// @brief Method SetBoolID, addr 0x6a36b88, size 0x98, virtual false, abstract: false, final false
  inline void SetBoolID(int32_t id, bool value);

  /// @brief Method SetBoolID_Injected, addr 0x6a3e7b4, size 0x54, virtual false, abstract: false, final false
  static inline void SetBoolID_Injected(::System::IntPtr _unity_self, int32_t id, bool value);

  /// @brief Method SetBoolString, addr 0x6a36a10, size 0x174, virtual false, abstract: false, final false
  inline void SetBoolString(::StringW name, bool value);

  /// @brief Method SetBoolString_Injected, addr 0x6a3e760, size 0x54, virtual false, abstract: false, final false
  static inline void SetBoolString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, bool value);

  /// @brief Method SetFloat, addr 0x6a3669c, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value);

  /// @brief Method SetFloat, addr 0x6a36740, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloat, addr 0x6a36384, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x6a36504, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatID, addr 0x6a366a0, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloatID(int32_t id, float_t value);

  /// @brief Method SetFloatIDDamp, addr 0x6a36744, size 0xb8, virtual false, abstract: false, final false
  inline void SetFloatIDDamp(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatIDDamp_Injected, addr 0x6a3ebc4, size 0x6c, virtual false, abstract: false, final false
  static inline void SetFloatIDDamp_Injected(::System::IntPtr _unity_self, int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatID_Injected, addr 0x6a3e684, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatID_Injected(::System::IntPtr _unity_self, int32_t id, float_t value);

  /// @brief Method SetFloatString, addr 0x6a36388, size 0x17c, virtual false, abstract: false, final false
  inline void SetFloatString(::StringW name, float_t value);

  /// @brief Method SetFloatStringDamp, addr 0x6a36508, size 0x194, virtual false, abstract: false, final false
  inline void SetFloatStringDamp(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatStringDamp_Injected, addr 0x6a3eb58, size 0x6c, virtual false, abstract: false, final false
  static inline void SetFloatStringDamp_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatString_Injected, addr 0x6a3e630, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value);

  /// @brief Method SetGoalPosition, addr 0x6a38ce8, size 0xa8, virtual false, abstract: false, final false
  inline void SetGoalPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetGoalPosition_Injected, addr 0x6a38d90, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Vector3> goalPosition);

  /// @brief Method SetGoalRotation, addr 0x6a38f64, size 0xa8, virtual false, abstract: false, final false
  inline void SetGoalRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetGoalRotation_Injected, addr 0x6a3900c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Quaternion> goalRotation);

  /// @brief Method SetGoalWeightPosition, addr 0x6a39194, size 0xa0, virtual false, abstract: false, final false
  inline void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightPosition_Injected, addr 0x6a39234, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightRotation, addr 0x6a393bc, size 0xa0, virtual false, abstract: false, final false
  inline void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightRotation_Injected, addr 0x6a3945c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalWeightRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetHintPosition, addr 0x6a3962c, size 0xa8, virtual false, abstract: false, final false
  inline void SetHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetHintPosition_Injected, addr 0x6a396d4, size 0x54, virtual false, abstract: false, final false
  static inline void SetHintPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, ::by_ref<::UnityEngine::Vector3> hintPosition);

  /// @brief Method SetHintWeightPosition, addr 0x6a3985c, size 0xa0, virtual false, abstract: false, final false
  inline void SetHintWeightPosition(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetHintWeightPosition_Injected, addr 0x6a398fc, size 0x54, virtual false, abstract: false, final false
  static inline void SetHintWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetIKHintPosition, addr 0x6a395dc, size 0x50, virtual false, abstract: false, final false
  inline void SetIKHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetIKHintPositionWeight, addr 0x6a39824, size 0x38, virtual false, abstract: false, final false
  inline void SetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetIKPosition, addr 0x6a38c98, size 0x50, virtual false, abstract: false, final false
  inline void SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetIKPositionWeight, addr 0x6a3915c, size 0x38, virtual false, abstract: false, final false
  inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetIKRotation, addr 0x6a38f0c, size 0x58, virtual false, abstract: false, final false
  inline void SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetIKRotationWeight, addr 0x6a39384, size 0x38, virtual false, abstract: false, final false
  inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetInteger, addr 0x6a36fa4, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(int32_t id, int32_t value);

  /// @brief Method SetInteger, addr 0x6a36e2c, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetIntegerID, addr 0x6a36fa8, size 0x98, virtual false, abstract: false, final false
  inline void SetIntegerID(int32_t id, int32_t value);

  /// @brief Method SetIntegerID_Injected, addr 0x6a3e8e4, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntegerID_Injected(::System::IntPtr _unity_self, int32_t id, int32_t value);

  /// @brief Method SetIntegerString, addr 0x6a36e30, size 0x174, virtual false, abstract: false, final false
  inline void SetIntegerString(::StringW name, int32_t value);

  /// @brief Method SetIntegerString_Injected, addr 0x6a3e890, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntegerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, int32_t value);

  /// @brief Method SetLayerWeight, addr 0x6a3a9cc, size 0xa0, virtual false, abstract: false, final false
  inline void SetLayerWeight(int32_t layerIndex, float_t weight);

  /// @brief Method SetLayerWeight_Injected, addr 0x6a3aa6c, size 0x54, virtual false, abstract: false, final false
  static inline void SetLayerWeight_Injected(::System::IntPtr _unity_self, int32_t layerIndex, float_t weight);

  /// @brief Method SetLookAtPosition, addr 0x6a39950, size 0x40, virtual false, abstract: false, final false
  inline void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtPositionInternal, addr 0x6a39990, size 0x98, virtual false, abstract: false, final false
  inline void SetLookAtPositionInternal(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtPositionInternal_Injected, addr 0x6a39a28, size 0x44, virtual false, abstract: false, final false
  static inline void SetLookAtPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> lookAtPosition);

  /// @brief Method SetLookAtWeight, addr 0x6a39a6c, size 0x38, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight);

  /// @brief Method SetLookAtWeight, addr 0x6a39b64, size 0x3c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight);

  /// @brief Method SetLookAtWeight, addr 0x6a39ba0, size 0x48, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight);

  /// @brief Method SetLookAtWeight, addr 0x6a39be8, size 0x4c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight);

  /// @brief Method SetLookAtWeight, addr 0x6a39c34, size 0x58, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeightInternal, addr 0x6a39aa4, size 0xc0, virtual false, abstract: false, final false
  inline void SetLookAtWeightInternal(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeightInternal_Injected, addr 0x6a39c8c, size 0x7c, virtual false, abstract: false, final false
  static inline void SetLookAtWeightInternal_Injected(::System::IntPtr _unity_self, float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetQuaternion, addr 0x6a3ffd8, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(int32_t id, ::UnityEngine::Quaternion value);

  /// @brief Method SetQuaternion, addr 0x6a3ffd4, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(::StringW name, ::UnityEngine::Quaternion value);

  /// @brief Method SetTarget, addr 0x6a3c86c, size 0xa0, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime);

  /// @brief Method SetTarget_Injected, addr 0x6a3c90c, size 0x54, virtual false, abstract: false, final false
  static inline void SetTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime);

  /// @brief Method SetTrigger, addr 0x6a371ac, size 0x4, virtual false, abstract: false, final false
  inline void SetTrigger(int32_t id);

  /// @brief Method SetTrigger, addr 0x6a37040, size 0x4, virtual false, abstract: false, final false
  inline void SetTrigger(::StringW name);

  /// @brief Method SetTriggerID, addr 0x6a371b0, size 0x90, virtual false, abstract: false, final false
  inline void SetTriggerID(int32_t id);

  /// @brief Method SetTriggerID_Injected, addr 0x6a3ea04, size 0x44, virtual false, abstract: false, final false
  static inline void SetTriggerID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method SetTriggerString, addr 0x6a37044, size 0x168, virtual false, abstract: false, final false
  inline void SetTriggerString(::StringW name);

  /// @brief Method SetTriggerString_Injected, addr 0x6a3e9c0, size 0x44, virtual false, abstract: false, final false
  static inline void SetTriggerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method SetVector, addr 0x6a3ff30, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t id, ::UnityEngine::Vector3 value);

  /// @brief Method SetVector, addr 0x6a3ff2c, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector3 value);

  /// @brief Method StartPlayback, addr 0x6a3d530, size 0x80, virtual false, abstract: false, final false
  inline void StartPlayback();

  /// @brief Method StartPlayback_Injected, addr 0x6a3d5b0, size 0x3c, virtual false, abstract: false, final false
  static inline void StartPlayback_Injected(::System::IntPtr _unity_self);

  /// @brief Method StartRecording, addr 0x6a3d840, size 0x90, virtual false, abstract: false, final false
  inline void StartRecording(int32_t frameCount);

  /// @brief Method StartRecording_Injected, addr 0x6a3d8d0, size 0x44, virtual false, abstract: false, final false
  static inline void StartRecording_Injected(::System::IntPtr _unity_self, int32_t frameCount);

  /// @brief Method StopPlayback, addr 0x6a3d5ec, size 0x80, virtual false, abstract: false, final false
  inline void StopPlayback();

  /// @brief Method StopPlayback_Injected, addr 0x6a3d66c, size 0x3c, virtual false, abstract: false, final false
  static inline void StopPlayback_Injected(::System::IntPtr _unity_self);

  /// @brief Method StopRecording, addr 0x6a3d914, size 0x80, virtual false, abstract: false, final false
  inline void StopRecording();

  /// @brief Method StopRecording_Injected, addr 0x6a3d994, size 0x3c, virtual false, abstract: false, final false
  static inline void StopRecording_Injected(::System::IntPtr _unity_self);

  /// @brief Method StringToHash, addr 0x6a3beb0, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t StringToHash(::StringW name);

  /// @brief Method StringToHash_Injected, addr 0x6a3e108, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t StringToHash_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Update, addr 0x6a3f228, size 0x90, virtual false, abstract: false, final false
  inline void Update(float_t deltaTime);

  /// @brief Method Update_Injected, addr 0x6a3f2b8, size 0x4c, virtual false, abstract: false, final false
  static inline void Update_Injected(::System::IntPtr _unity_self, float_t deltaTime);

  /// @brief Method WriteDefaultPose, addr 0x6a3f16c, size 0x80, virtual false, abstract: false, final false
  inline void WriteDefaultPose();

  /// @brief Method WriteDefaultPose_Injected, addr 0x6a3f1ec, size 0x3c, virtual false, abstract: false, final false
  static inline void WriteDefaultPose_Injected(::System::IntPtr _unity_self);

  /// @brief Method WriteDefaultValues, addr 0x6a3c228, size 0x80, virtual false, abstract: false, final false
  inline void WriteDefaultValues();

  /// @brief Method WriteDefaultValues_Injected, addr 0x6a3c2a8, size 0x3c, virtual false, abstract: false, final false
  static inline void WriteDefaultValues_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x6a3ffdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowConstantClipSamplingOptimization, addr 0x6a38454, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowConstantClipSamplingOptimization();

  /// @brief Method get_allowConstantClipSamplingOptimization_Injected, addr 0x6a384d4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowConstantClipSamplingOptimization_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularVelocity, addr 0x6a378f8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x6a37998, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_animatePhysics, addr 0x6a38078, size 0x80, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method get_animatePhysics_Injected, addr 0x6a380f8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_animatePhysics_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_applyRootMotion, addr 0x6a37d58, size 0x80, virtual false, abstract: false, final false
  inline bool get_applyRootMotion();

  /// @brief Method get_applyRootMotion_Injected, addr 0x6a37dd8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_applyRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_avatar, addr 0x6a3cfb4, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Avatar> get_avatar();

  /// @brief Method get_avatarRoot, addr 0x6a3cc30, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_avatarRoot();

  /// @brief Method get_avatarRoot_Injected, addr 0x6a3cd80, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_avatarRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_avatar_Injected, addr 0x6a3e144, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_avatar_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bodyPosition, addr 0x6a386a0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPosition();

  /// @brief Method get_bodyPositionInternal, addr 0x6a38750, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPositionInternal();

  /// @brief Method get_bodyPositionInternal_Injected, addr 0x6a388c8, size 0x44, virtual false, abstract: false, final false
  static inline void get_bodyPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_bodyRotation, addr 0x6a38950, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotation();

  /// @brief Method get_bodyRotationInternal, addr 0x6a38968, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotationInternal();

  /// @brief Method get_bodyRotationInternal_Injected, addr 0x6a38ae4, size 0x44, virtual false, abstract: false, final false
  static inline void get_bodyRotationInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_cullingMode, addr 0x6a3d3a0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorCullingMode get_cullingMode();

  /// @brief Method get_cullingMode_Injected, addr 0x6a3d420, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorCullingMode get_cullingMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_deltaPosition, addr 0x6a37650, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_deltaPosition();

  /// @brief Method get_deltaPosition_Injected, addr 0x6a376f0, size 0x44, virtual false, abstract: false, final false
  static inline void get_deltaPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_deltaRotation, addr 0x6a37734, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_deltaRotation();

  /// @brief Method get_deltaRotation_Injected, addr 0x6a377d0, size 0x44, virtual false, abstract: false, final false
  static inline void get_deltaRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_feetPivotActive, addr 0x6a3b57c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_feetPivotActive();

  /// @brief Method get_feetPivotActive_Injected, addr 0x6a3b5fc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_feetPivotActive_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fireEvents, addr 0x6a3f9d4, size 0x80, virtual false, abstract: false, final false
  inline bool get_fireEvents();

  /// @brief Method get_fireEvents_Injected, addr 0x6a3fa54, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_fireEvents_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_gravityWeight, addr 0x6a385e4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_gravityWeight();

  /// @brief Method get_gravityWeight_Injected, addr 0x6a38664, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_gravityWeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasBoundPlayables, addr 0x6a3dea4, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasBoundPlayables();

  /// @brief Method get_hasBoundPlayables_Injected, addr 0x6a3df24, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasBoundPlayables_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasRootMotion, addr 0x6a35e8c, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasRootMotion();

  /// @brief Method get_hasRootMotion_Injected, addr 0x6a35f0c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasTransformHierarchy, addr 0x6a38398, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasTransformHierarchy();

  /// @brief Method get_hasTransformHierarchy_Injected, addr 0x6a38418, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasTransformHierarchy_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_humanScale, addr 0x6a36004, size 0x80, virtual false, abstract: false, final false
  inline float_t get_humanScale();

  /// @brief Method get_humanScale_Injected, addr 0x6a36084, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_humanScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isHuman, addr 0x6a35dd0, size 0x80, virtual false, abstract: false, final false
  inline bool get_isHuman();

  /// @brief Method get_isHuman_Injected, addr 0x6a35e50, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isHuman_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isInitialized, addr 0x6a360c0, size 0x80, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_isInitialized_Injected, addr 0x6a36140, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isInitialized_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isMatchingTarget, addr 0x6a3bb6c, size 0x80, virtual false, abstract: false, final false
  inline bool get_isMatchingTarget();

  /// @brief Method get_isMatchingTarget_Injected, addr 0x6a3bbec, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isMatchingTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isOptimizable, addr 0x6a35d14, size 0x80, virtual false, abstract: false, final false
  inline bool get_isOptimizable();

  /// @brief Method get_isOptimizable_Injected, addr 0x6a35d94, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isOptimizable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isRootPositionOrRotationControlledByCurves, addr 0x6a35f48, size 0x80, virtual false, abstract: false, final false
  inline bool get_isRootPositionOrRotationControlledByCurves();

  /// @brief Method get_isRootPositionOrRotationControlledByCurves_Injected, addr 0x6a35fc8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isRootPositionOrRotationControlledByCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_keepAnimatorControllerStateOnDisable, addr 0x6a3fb64, size 0x4, virtual false, abstract: false, final false
  inline bool get_keepAnimatorControllerStateOnDisable();

  /// @brief Method get_keepAnimatorStateOnDisable, addr 0x6a3fb68, size 0x80, virtual false, abstract: false, final false
  inline bool get_keepAnimatorStateOnDisable();

  /// @brief Method get_keepAnimatorStateOnDisable_Injected, addr 0x6a3fc7c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_keepAnimatorStateOnDisable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layerCount, addr 0x6a3a4f0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_layerCount();

  /// @brief Method get_layerCount_Injected, addr 0x6a3a570, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_layerCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layersAffectMassCenter, addr 0x6a3ec30, size 0x80, virtual false, abstract: false, final false
  inline bool get_layersAffectMassCenter();

  /// @brief Method get_layersAffectMassCenter_Injected, addr 0x6a3ecb0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_layersAffectMassCenter_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_leftFeetBottomHeight, addr 0x6a3edc0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_leftFeetBottomHeight();

  /// @brief Method get_leftFeetBottomHeight_Injected, addr 0x6a3ee40, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_leftFeetBottomHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearVelocityBlending, addr 0x6a37ee8, size 0x80, virtual false, abstract: false, final false
  inline bool get_linearVelocityBlending();

  /// @brief Method get_linearVelocityBlending_Injected, addr 0x6a37f68, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_linearVelocityBlending_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_logWarnings, addr 0x6a3e4f4, size 0x80, virtual false, abstract: false, final false
  inline bool get_logWarnings();

  /// @brief Method get_logWarnings_Injected, addr 0x6a3f8c4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_logWarnings_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_parameterCount, addr 0x6a3b350, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_parameterCount();

  /// @brief Method get_parameterCount_Injected, addr 0x6a3b3d0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_parameterCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_parameters, addr 0x6a3b294, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters();

  /// @brief Method get_parameters_Injected, addr 0x6a3b314, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pivotPosition, addr 0x6a3b7d0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivotPosition();

  /// @brief Method get_pivotPosition_Injected, addr 0x6a3b870, size 0x44, virtual false, abstract: false, final false
  static inline void get_pivotPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_pivotWeight, addr 0x6a3b714, size 0x80, virtual false, abstract: false, final false
  inline float_t get_pivotWeight();

  /// @brief Method get_pivotWeight_Injected, addr 0x6a3b794, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_pivotWeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_playableGraph, addr 0x6a3e3fc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph get_playableGraph();

  /// @brief Method get_playbackTime, addr 0x6a3d6a8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_playbackTime();

  /// @brief Method get_playbackTime_Injected, addr 0x6a3d728, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_playbackTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_recorderMode, addr 0x6a3db58, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorRecorderMode get_recorderMode();

  /// @brief Method get_recorderMode_Injected, addr 0x6a3dbd8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorRecorderMode get_recorderMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_recorderStartTime, addr 0x6a3d9d0, size 0x4, virtual false, abstract: false, final false
  inline float_t get_recorderStartTime();

  /// @brief Method get_recorderStopTime, addr 0x6a3da94, size 0x4, virtual false, abstract: false, final false
  inline float_t get_recorderStopTime();

  /// @brief Method get_rightFeetBottomHeight, addr 0x6a3ee7c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_rightFeetBottomHeight();

  /// @brief Method get_rightFeetBottomHeight_Injected, addr 0x6a3eefc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_rightFeetBottomHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rootPosition, addr 0x6a379dc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rootPosition();

  /// @brief Method get_rootPosition_Injected, addr 0x6a37a7c, size 0x44, virtual false, abstract: false, final false
  static inline void get_rootPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_rootRotation, addr 0x6a37b9c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rootRotation();

  /// @brief Method get_rootRotation_Injected, addr 0x6a37c38, size 0x44, virtual false, abstract: false, final false
  static inline void get_rootRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_runtimeAnimatorController, addr 0x6a3dc14, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController();

  /// @brief Method get_runtimeAnimatorController_Injected, addr 0x6a3dd64, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_runtimeAnimatorController_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_speed, addr 0x6a3bc28, size 0x80, virtual false, abstract: false, final false
  inline float_t get_speed();

  /// @brief Method get_speed_Injected, addr 0x6a3bca8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_speed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stabilizeFeet, addr 0x6a3a360, size 0x80, virtual false, abstract: false, final false
  inline bool get_stabilizeFeet();

  /// @brief Method get_stabilizeFeet_Injected, addr 0x6a3a3e0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_stabilizeFeet_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_supportsOnAnimatorMove, addr 0x6a3ef38, size 0x80, virtual false, abstract: false, final false
  inline bool get_supportsOnAnimatorMove();

  /// @brief Method get_supportsOnAnimatorMove_Injected, addr 0x6a3efb8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_supportsOnAnimatorMove_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetPosition, addr 0x6a3c960, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetPosition_Injected, addr 0x6a3ca00, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation, addr 0x6a3ca44, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method get_targetRotation_Injected, addr 0x6a3cae0, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_updateMode, addr 0x6a38208, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorUpdateMode get_updateMode();

  /// @brief Method get_updateMode_Injected, addr 0x6a38288, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorUpdateMode get_updateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x6a37814, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x6a378b4, size 0x44, virtual false, abstract: false, final false
  static inline void get_velocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_writeDefaultValuesOnDisable, addr 0x6a3fcfc, size 0x80, virtual false, abstract: false, final false
  inline bool get_writeDefaultValuesOnDisable();

  /// @brief Method get_writeDefaultValuesOnDisable_Injected, addr 0x6a3fd7c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_writeDefaultValuesOnDisable_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_allowConstantClipSamplingOptimization, addr 0x6a38510, size 0x90, virtual false, abstract: false, final false
  inline void set_allowConstantClipSamplingOptimization(bool value);

  /// @brief Method set_allowConstantClipSamplingOptimization_Injected, addr 0x6a385a0, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowConstantClipSamplingOptimization_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_animatePhysics, addr 0x6a38134, size 0x90, virtual false, abstract: false, final false
  inline void set_animatePhysics(bool value);

  /// @brief Method set_animatePhysics_Injected, addr 0x6a381c4, size 0x44, virtual false, abstract: false, final false
  static inline void set_animatePhysics_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_applyRootMotion, addr 0x6a37e14, size 0x90, virtual false, abstract: false, final false
  inline void set_applyRootMotion(bool value);

  /// @brief Method set_applyRootMotion_Injected, addr 0x6a37ea4, size 0x44, virtual false, abstract: false, final false
  static inline void set_applyRootMotion_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_avatar, addr 0x6a3e180, size 0xc0, virtual false, abstract: false, final false
  inline void set_avatar(::UnityEngine::Avatar* value);

  /// @brief Method set_avatar_Injected, addr 0x6a3e240, size 0x44, virtual false, abstract: false, final false
  static inline void set_avatar_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_bodyPosition, addr 0x6a387f0, size 0x40, virtual false, abstract: false, final false
  inline void set_bodyPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_bodyPositionInternal, addr 0x6a38830, size 0x98, virtual false, abstract: false, final false
  inline void set_bodyPositionInternal(::UnityEngine::Vector3 value);

  /// @brief Method set_bodyPositionInternal_Injected, addr 0x6a3890c, size 0x44, virtual false, abstract: false, final false
  static inline void set_bodyPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_bodyRotation, addr 0x6a38a04, size 0x48, virtual false, abstract: false, final false
  inline void set_bodyRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_bodyRotationInternal, addr 0x6a38a4c, size 0x98, virtual false, abstract: false, final false
  inline void set_bodyRotationInternal(::UnityEngine::Quaternion value);

  /// @brief Method set_bodyRotationInternal_Injected, addr 0x6a38b28, size 0x44, virtual false, abstract: false, final false
  static inline void set_bodyRotationInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_cullingMode, addr 0x6a3d45c, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingMode(::UnityEngine::AnimatorCullingMode value);

  /// @brief Method set_cullingMode_Injected, addr 0x6a3d4ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimatorCullingMode value);

  /// @brief Method set_feetPivotActive, addr 0x6a3b638, size 0x90, virtual false, abstract: false, final false
  inline void set_feetPivotActive(float_t value);

  /// @brief Method set_feetPivotActive_Injected, addr 0x6a3b6c8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_feetPivotActive_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_fireEvents, addr 0x6a3fa90, size 0x90, virtual false, abstract: false, final false
  inline void set_fireEvents(bool value);

  /// @brief Method set_fireEvents_Injected, addr 0x6a3fb20, size 0x44, virtual false, abstract: false, final false
  static inline void set_fireEvents_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_keepAnimatorControllerStateOnDisable, addr 0x6a3fbe8, size 0x4, virtual false, abstract: false, final false
  inline void set_keepAnimatorControllerStateOnDisable(bool value);

  /// @brief Method set_keepAnimatorStateOnDisable, addr 0x6a3fbec, size 0x90, virtual false, abstract: false, final false
  inline void set_keepAnimatorStateOnDisable(bool value);

  /// @brief Method set_keepAnimatorStateOnDisable_Injected, addr 0x6a3fcb8, size 0x44, virtual false, abstract: false, final false
  static inline void set_keepAnimatorStateOnDisable_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_layersAffectMassCenter, addr 0x6a3ecec, size 0x90, virtual false, abstract: false, final false
  inline void set_layersAffectMassCenter(bool value);

  /// @brief Method set_layersAffectMassCenter_Injected, addr 0x6a3ed7c, size 0x44, virtual false, abstract: false, final false
  static inline void set_layersAffectMassCenter_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_linearVelocityBlending, addr 0x6a37fa4, size 0x90, virtual false, abstract: false, final false
  inline void set_linearVelocityBlending(bool value);

  /// @brief Method set_linearVelocityBlending_Injected, addr 0x6a38034, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearVelocityBlending_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_logWarnings, addr 0x6a3f900, size 0x90, virtual false, abstract: false, final false
  inline void set_logWarnings(bool value);

  /// @brief Method set_logWarnings_Injected, addr 0x6a3f990, size 0x44, virtual false, abstract: false, final false
  static inline void set_logWarnings_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_playbackTime, addr 0x6a3d764, size 0x90, virtual false, abstract: false, final false
  inline void set_playbackTime(float_t value);

  /// @brief Method set_playbackTime_Injected, addr 0x6a3d7f4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_playbackTime_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_recorderStartTime, addr 0x6a3da54, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStartTime(float_t value);

  /// @brief Method set_recorderStopTime, addr 0x6a3db18, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStopTime(float_t value);

  /// @brief Method set_rootPosition, addr 0x6a37ac0, size 0x98, virtual false, abstract: false, final false
  inline void set_rootPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_rootPosition_Injected, addr 0x6a37b58, size 0x44, virtual false, abstract: false, final false
  static inline void set_rootPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_rootRotation, addr 0x6a37c7c, size 0x98, virtual false, abstract: false, final false
  inline void set_rootRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rootRotation_Injected, addr 0x6a37d14, size 0x44, virtual false, abstract: false, final false
  static inline void set_rootRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_runtimeAnimatorController, addr 0x6a3dda0, size 0xc0, virtual false, abstract: false, final false
  inline void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* value);

  /// @brief Method set_runtimeAnimatorController_Injected, addr 0x6a3de60, size 0x44, virtual false, abstract: false, final false
  static inline void set_runtimeAnimatorController_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_speed, addr 0x6a3bce4, size 0x90, virtual false, abstract: false, final false
  inline void set_speed(float_t value);

  /// @brief Method set_speed_Injected, addr 0x6a3bd74, size 0x4c, virtual false, abstract: false, final false
  static inline void set_speed_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stabilizeFeet, addr 0x6a3a41c, size 0x90, virtual false, abstract: false, final false
  inline void set_stabilizeFeet(bool value);

  /// @brief Method set_stabilizeFeet_Injected, addr 0x6a3a4ac, size 0x44, virtual false, abstract: false, final false
  static inline void set_stabilizeFeet_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_updateMode, addr 0x6a382c4, size 0x90, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::AnimatorUpdateMode value);

  /// @brief Method set_updateMode_Injected, addr 0x6a38354, size 0x44, virtual false, abstract: false, final false
  static inline void set_updateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimatorUpdateMode value);

  /// @brief Method set_writeDefaultValuesOnDisable, addr 0x6a3fdb8, size 0x90, virtual false, abstract: false, final false
  inline void set_writeDefaultValuesOnDisable(bool value);

  /// @brief Method set_writeDefaultValuesOnDisable_Injected, addr 0x6a3fe48, size 0x44, virtual false, abstract: false, final false
  static inline void set_writeDefaultValuesOnDisable_Injected(::System::IntPtr _unity_self, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Animator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Animator(Animator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Animator(Animator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20193 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animator) == 0x18, "Size mismatch!");

} // namespace UnityEngine
