#pragma once
// IWYU pragma private; include "UnityEngine\Animator.hpp"
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

  /// @brief Method ApplyBuiltinRootMotion, addr 0x6a44bf8, size 0x80, virtual false, abstract: false, final false
  inline void ApplyBuiltinRootMotion();

  /// @brief Method ApplyBuiltinRootMotion_Injected, addr 0x6a44c78, size 0x3c, virtual false, abstract: false, final false
  static inline void ApplyBuiltinRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method CheckIfInIKPass, addr 0x6a3ded0, size 0x98, virtual false, abstract: false, final false
  inline void CheckIfInIKPass();

  /// @brief Method ClearInternalControllerPlayable, addr 0x6a43778, size 0x80, virtual false, abstract: false, final false
  inline void ClearInternalControllerPlayable();

  /// @brief Method ClearInternalControllerPlayable_Injected, addr 0x6a437f8, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearInternalControllerPlayable_Injected(::System::IntPtr _unity_self);

  /// @brief Method ConvertStateMachineBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*> rawObjects);

  /// @brief Method CrossFade, addr 0x6a41d80, size 0x14, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade, addr 0x6a41d70, size 0x10, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x6a41d68, size 0x8, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade, addr 0x6a41c2c, size 0xc0, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFade, addr 0x6a41bec, size 0x40, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade, addr 0x6a41ba0, size 0x4c, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x6a41afc, size 0x4c, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade, addr 0x6a41b48, size 0x58, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a419b4, size 0x10, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a419a8, size 0xc, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a419a0, size 0x8, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a417f4, size 0xc0, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a4168c, size 0x3c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a418b4, size 0x48, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a418fc, size 0x4c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime, addr 0x6a41948, size 0x58, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime_Injected, addr 0x6a419c4, size 0x7c, virtual false, abstract: false, final false
  static inline void CrossFadeInFixedTime_Injected(::System::IntPtr _unity_self, int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset,
                                                   float_t normalizedTransitionTime);

  /// @brief Method CrossFade_Injected, addr 0x6a41cec, size 0x7c, virtual false, abstract: false, final false
  static inline void CrossFade_Injected(::System::IntPtr _unity_self, int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset,
                                        float_t normalizedTransitionTime);

  /// @brief Method EvaluateController, addr 0x6a44cb4, size 0x8, virtual false, abstract: false, final false
  inline void EvaluateController();

  /// @brief Method EvaluateController, addr 0x6a44cbc, size 0x90, virtual false, abstract: false, final false
  inline void EvaluateController(float_t deltaTime);

  /// @brief Method EvaluateController_Injected, addr 0x6a44d4c, size 0x4c, virtual false, abstract: false, final false
  static inline void EvaluateController_Injected(::System::IntPtr _unity_self, float_t deltaTime);

  /// @brief Method ForceStateNormalizedTime, addr 0x6a415d8, size 0xc, virtual false, abstract: false, final false
  inline void ForceStateNormalizedTime(float_t normalizedTime);

  /// @brief Method GetAnimatorClipInfoCount, addr 0x6a40578, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetAnimatorClipInfoCount(int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorClipInfoCount_Injected, addr 0x6a40610, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetAnimatorClipInfoCount_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorClipInfoInternal, addr 0x6a40878, size 0xa8, virtual false, abstract: false, final false
  inline void GetAnimatorClipInfoInternal(int32_t layerIndex, bool isCurrent, ::System::Object* clips);

  /// @brief Method GetAnimatorClipInfoInternal_Injected, addr 0x6a40920, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAnimatorClipInfoInternal_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool isCurrent, ::System::Object* clips);

  /// @brief Method GetAnimatorStateInfo, addr 0x6a402d8, size 0xa8, virtual false, abstract: false, final false
  inline void GetAnimatorStateInfo(int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo> info);

  /// @brief Method GetAnimatorStateInfo_Injected, addr 0x6a40380, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAnimatorStateInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo> info);

  /// @brief Method GetAnimatorStateName, addr 0x6a44da0, size 0x144, virtual false, abstract: false, final false
  inline ::StringW GetAnimatorStateName(int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorStateName_Injected, addr 0x6a44eec, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAnimatorStateName_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool current, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x6a40548, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t layerIndex);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x6a4045c, size 0x98, virtual false, abstract: false, final false
  inline void GetAnimatorTransitionInfo(int32_t layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo> info);

  /// @brief Method GetAnimatorTransitionInfo_Injected, addr 0x6a404f4, size 0x54, virtual false, abstract: false, final false
  static inline void GetAnimatorTransitionInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo> info);

  /// @brief Method GetBehaviour, addr 0x6a3f6d8, size 0x184, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> GetBehaviour(::System::Type* type);

  /// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetBehaviour();

  /// @brief Method GetBehaviour_Injected, addr 0x6a3f85c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBehaviour_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method GetBehaviours, addr 0x6a3f9a0, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>> GetBehaviours(int32_t fullPathHash, int32_t layerIndex);

  /// @brief Method GetBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetBehaviours();

  /// @brief Method GetBoneTransform, addr 0x6a425d4, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones humanBoneId);

  /// @brief Method GetBoneTransformInternal, addr 0x6a42a1c, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransformInternal(int32_t humanBoneId);

  /// @brief Method GetBoneTransformInternal_Injected, addr 0x6a42b74, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBoneTransformInternal_Injected(::System::IntPtr _unity_self, int32_t humanBoneId);

  /// @brief Method GetBool, addr 0x6a3c190, size 0x4, virtual false, abstract: false, final false
  inline bool GetBool(int32_t id);

  /// @brief Method GetBool, addr 0x6a3c014, size 0x4, virtual false, abstract: false, final false
  inline bool GetBool(::StringW name);

  /// @brief Method GetBoolID, addr 0x6a3c194, size 0x90, virtual false, abstract: false, final false
  inline bool GetBoolID(int32_t id);

  /// @brief Method GetBoolID_Injected, addr 0x6a44064, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBoolID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method GetBoolString, addr 0x6a3c018, size 0x178, virtual false, abstract: false, final false
  inline bool GetBoolString(::StringW name);

  /// @brief Method GetBoolString_Injected, addr 0x6a44020, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBoolString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x6a40674, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x6a4081c, size 0x5c, virtual false, abstract: false, final false
  inline void GetCurrentAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x6a40664, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetCurrentAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo_Injected, addr 0x6a40704, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorStateInfo, addr 0x6a403dc, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetCurrentGraph, addr 0x6a43c38, size 0x90, virtual false, abstract: false, final false
  inline void GetCurrentGraph(::by_ref<::UnityEngine::Playables::PlayableGraph> graph);

  /// @brief Method GetCurrentGraph_Injected, addr 0x6a43cc8, size 0x44, virtual false, abstract: false, final false
  static inline void GetCurrentGraph_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph> graph);

  /// @brief Method GetCurrentStateName, addr 0x6a44d98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetCurrentStateName(int32_t layerIndex);

  /// @brief Method GetFloat, addr 0x6a3bb08, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t id);

  /// @brief Method GetFloat, addr 0x6a3b994, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloatID, addr 0x6a3bb0c, size 0x90, virtual false, abstract: false, final false
  inline float_t GetFloatID(int32_t id);

  /// @brief Method GetFloatID_Injected, addr 0x6a43f34, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method GetFloatString, addr 0x6a3b998, size 0x170, virtual false, abstract: false, final false
  inline float_t GetFloatString(::StringW name);

  /// @brief Method GetFloatString_Injected, addr 0x6a43ef0, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetGoalPosition, addr 0x6a3e3ac, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalPosition_Injected, addr 0x6a3e45c, size 0x54, virtual false, abstract: false, final false
  static inline void GetGoalPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetGoalRotation, addr 0x6a3e624, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetGoalRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalRotation_Injected, addr 0x6a3e6d0, size 0x54, virtual false, abstract: false, final false
  static inline void GetGoalRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method GetGoalWeightPosition, addr 0x6a3e8a0, size 0x90, virtual false, abstract: false, final false
  inline float_t GetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightPosition_Injected, addr 0x6a3e930, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetGoalWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightRotation, addr 0x6a3eac8, size 0x90, virtual false, abstract: false, final false
  inline float_t GetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightRotation_Injected, addr 0x6a3eb58, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetGoalWeightRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetHintPosition, addr 0x6a3ecf0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintPosition_Injected, addr 0x6a3eda0, size 0x54, virtual false, abstract: false, final false
  static inline void GetHintPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetHintWeightPosition, addr 0x6a3ef68, size 0x90, virtual false, abstract: false, final false
  inline float_t GetHintWeightPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintWeightPosition_Injected, addr 0x6a3eff8, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetHintWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKHintPosition, addr 0x6a3ecc8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKHintPositionWeight, addr 0x6a3ef40, size 0x28, virtual false, abstract: false, final false
  inline float_t GetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKPosition, addr 0x6a3e384, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKPositionWeight, addr 0x6a3e878, size 0x28, virtual false, abstract: false, final false
  inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotation, addr 0x6a3e5fc, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotationWeight, addr 0x6a3eaa0, size 0x28, virtual false, abstract: false, final false
  inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetInteger, addr 0x6a3c5b0, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t id);

  /// @brief Method GetInteger, addr 0x6a3c438, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetIntegerID, addr 0x6a3c5b4, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetIntegerID(int32_t id);

  /// @brief Method GetIntegerID_Injected, addr 0x6a44194, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntegerID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method GetIntegerString, addr 0x6a3c43c, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetIntegerString(::StringW name);

  /// @brief Method GetIntegerString_Injected, addr 0x6a44150, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntegerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetLayerIndex, addr 0x6a3ff58, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetLayerIndex(::StringW layerName);

  /// @brief Method GetLayerIndex_Injected, addr 0x6a400cc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetLayerIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> layerName);

  /// @brief Method GetLayerName, addr 0x6a3fdc4, size 0x140, virtual false, abstract: false, final false
  inline ::StringW GetLayerName(int32_t layerIndex);

  /// @brief Method GetLayerName_Injected, addr 0x6a3ff04, size 0x54, virtual false, abstract: false, final false
  static inline void GetLayerName_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetLayerWeight, addr 0x6a40110, size 0x90, virtual false, abstract: false, final false
  inline float_t GetLayerWeight(int32_t layerIndex);

  /// @brief Method GetLayerWeight_Injected, addr 0x6a401a0, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetLayerWeight_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo, addr 0x6a40748, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo, addr 0x6a4097c, size 0x5c, virtual false, abstract: false, final false
  inline void GetNextAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetNextAnimatorClipInfoCount, addr 0x6a4066c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetNextAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo_Injected, addr 0x6a407d8, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method GetNextAnimatorStateInfo, addr 0x6a4041c, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetNextStateName, addr 0x6a44ee4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetNextStateName(int32_t layerIndex);

  /// @brief Method GetParameter, addr 0x6a40cf8, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t index);

  /// @brief Method GetParameterInternal, addr 0x6a40c24, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal(int32_t index);

  /// @brief Method GetParameterInternal_Injected, addr 0x6a40cb4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetQuaternion, addr 0x6a4579c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(int32_t id);

  /// @brief Method GetQuaternion, addr 0x6a4574c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(::StringW name);

  /// @brief Method GetRecorderStartTime, addr 0x6a431ec, size 0x80, virtual false, abstract: false, final false
  inline float_t GetRecorderStartTime();

  /// @brief Method GetRecorderStartTime_Injected, addr 0x6a43270, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetRecorderStartTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetRecorderStopTime, addr 0x6a432b0, size 0x80, virtual false, abstract: false, final false
  inline float_t GetRecorderStopTime();

  /// @brief Method GetRecorderStopTime_Injected, addr 0x6a43334, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetRecorderStopTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetStats, addr 0x6a43a9c, size 0x134, virtual false, abstract: false, final false
  inline ::StringW GetStats();

  /// @brief Method GetStats_Injected, addr 0x6a43bd0, size 0x44, virtual false, abstract: false, final false
  static inline void GetStats_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetVector, addr 0x6a456f4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(int32_t id);

  /// @brief Method GetVector, addr 0x6a456a4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(::StringW name);

  /// @brief Method HasState, addr 0x6a43834, size 0x98, virtual false, abstract: false, final false
  inline bool HasState(int32_t layerIndex, int32_t stateID);

  /// @brief Method HasState_Injected, addr 0x6a438cc, size 0x54, virtual false, abstract: false, final false
  static inline bool HasState_Injected(::System::IntPtr _unity_self, int32_t layerIndex, int32_t stateID);

  /// @brief Method InternalGetBehaviours, addr 0x6a3f8a0, size 0xbc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehaviours(::System::Type* type);

  /// @brief Method InternalGetBehavioursByKey, addr 0x6a3fa48, size 0xd4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehavioursByKey(int32_t fullPathHash, int32_t layerIndex, ::System::Type* type);

  /// @brief Method InternalGetBehavioursByKey_Injected, addr 0x6a3fb1c, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehavioursByKey_Injected(::System::IntPtr _unity_self, int32_t fullPathHash, int32_t layerIndex, ::System::Type* type);

  /// @brief Method InternalGetBehaviours_Injected, addr 0x6a3f95c, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehaviours_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method InterruptMatchTarget, addr 0x6a412a8, size 0x8, virtual false, abstract: false, final false
  inline void InterruptMatchTarget();

  /// @brief Method InterruptMatchTarget, addr 0x6a412b0, size 0x90, virtual false, abstract: false, final false
  inline void InterruptMatchTarget(bool completeMatch);

  /// @brief Method InterruptMatchTarget_Injected, addr 0x6a41340, size 0x44, virtual false, abstract: false, final false
  static inline void InterruptMatchTarget_Injected(::System::IntPtr _unity_self, bool completeMatch);

  /// @brief Method IsBoneTransform, addr 0x6a42344, size 0xc0, virtual false, abstract: false, final false
  inline bool IsBoneTransform(::UnityEngine::Transform* transform);

  /// @brief Method IsBoneTransform_Injected, addr 0x6a42404, size 0x44, virtual false, abstract: false, final false
  static inline bool IsBoneTransform_Injected(::System::IntPtr _unity_self, ::System::IntPtr transform);

  /// @brief Method IsControlled, addr 0x6a4233c, size 0x8, virtual false, abstract: false, final false
  inline bool IsControlled(::UnityEngine::Transform* transform);

  /// @brief Method IsInIKPass, addr 0x6a43d8c, size 0x80, virtual false, abstract: false, final false
  inline bool IsInIKPass();

  /// @brief Method IsInIKPass_Injected, addr 0x6a43e0c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsInIKPass_Injected(::System::IntPtr _unity_self);

  /// @brief Method IsInTransition, addr 0x6a409d8, size 0x90, virtual false, abstract: false, final false
  inline bool IsInTransition(int32_t layerIndex);

  /// @brief Method IsInTransition_Injected, addr 0x6a40a68, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInTransition_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method IsParameterControlledByCurve, addr 0x6a3cdd4, size 0x4, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(int32_t id);

  /// @brief Method IsParameterControlledByCurve, addr 0x6a3cc58, size 0x4, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(::StringW name);

  /// @brief Method IsParameterControlledByCurveID, addr 0x6a3cdd8, size 0x90, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveID(int32_t id);

  /// @brief Method IsParameterControlledByCurveID_Injected, addr 0x6a4432c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsParameterControlledByCurveID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method IsParameterControlledByCurveString, addr 0x6a3cc5c, size 0x178, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveString(::StringW name);

  /// @brief Method IsParameterControlledByCurveString_Injected, addr 0x6a442e8, size 0x44, virtual false, abstract: false, final false
  static inline bool IsParameterControlledByCurveString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method MatchTarget, addr 0x6a41238, size 0x34, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime);

  /// @brief Method MatchTarget, addr 0x6a4126c, size 0x20, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime);

  /// @brief Method MatchTarget, addr 0x6a4128c, size 0x1c, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method MatchTarget, addr 0x6a410cc, size 0xe0, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method MatchTarget_Injected, addr 0x6a411ac, size 0x8c, virtual false, abstract: false, final false
  static inline void MatchTarget_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> matchPosition, ::by_ref<::UnityEngine::Quaternion> matchRotation, int32_t targetBodyPart,
                                          ::by_ref<::UnityEngine::MatchTargetWeightMask> weightMask, float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  static inline ::UnityEngine::Animator* New_ctor();

  /// @brief Method OnCullingModeChanged, addr 0x6a448c8, size 0x80, virtual false, abstract: false, final false
  inline void OnCullingModeChanged();

  /// @brief Method OnCullingModeChanged_Injected, addr 0x6a44948, size 0x3c, virtual false, abstract: false, final false
  static inline void OnCullingModeChanged_Injected(::System::IntPtr _unity_self);

  /// @brief Method OnUpdateModeChanged, addr 0x6a4480c, size 0x80, virtual false, abstract: false, final false
  inline void OnUpdateModeChanged();

  /// @brief Method OnUpdateModeChanged_Injected, addr 0x6a4488c, size 0x3c, virtual false, abstract: false, final false
  static inline void OnUpdateModeChanged_Injected(::System::IntPtr _unity_self);

  /// @brief Method Play, addr 0x6a41fd8, size 0x2c, virtual false, abstract: false, final false
  inline void Play(::StringW stateName);

  /// @brief Method Play, addr 0x6a41f60, size 0x38, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, int32_t layer);

  /// @brief Method Play, addr 0x6a41f98, size 0x40, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, int32_t layer, float_t normalizedTime);

  /// @brief Method Play, addr 0x6a42074, size 0x10, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash);

  /// @brief Method Play, addr 0x6a42068, size 0xc, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, int32_t layer);

  /// @brief Method Play, addr 0x6a415e4, size 0xa8, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, int32_t layer, float_t normalizedTime);

  /// @brief Method PlayInFixedTime, addr 0x6a41e0c, size 0x2c, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName);

  /// @brief Method PlayInFixedTime, addr 0x6a41d94, size 0x38, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer);

  /// @brief Method PlayInFixedTime, addr 0x6a41dcc, size 0x40, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer, float_t fixedTime);

  /// @brief Method PlayInFixedTime, addr 0x6a41f50, size 0x10, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash);

  /// @brief Method PlayInFixedTime, addr 0x6a41f44, size 0xc, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer);

  /// @brief Method PlayInFixedTime, addr 0x6a41e38, size 0xa8, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer, float_t fixedTime);

  /// @brief Method PlayInFixedTime_Injected, addr 0x6a41ee0, size 0x64, virtual false, abstract: false, final false
  static inline void PlayInFixedTime_Injected(::System::IntPtr _unity_self, int32_t stateNameHash, int32_t layer, float_t fixedTime);

  /// @brief Method Play_Injected, addr 0x6a42004, size 0x64, virtual false, abstract: false, final false
  static inline void Play_Injected(::System::IntPtr _unity_self, int32_t stateNameHash, int32_t layer, float_t normalizedTime);

  /// @brief Method Rebind, addr 0x6a44b1c, size 0x8, virtual false, abstract: false, final false
  inline void Rebind();

  /// @brief Method Rebind, addr 0x6a44b24, size 0x90, virtual false, abstract: false, final false
  inline void Rebind(bool writeDefaultValues);

  /// @brief Method Rebind_Injected, addr 0x6a44bb4, size 0x44, virtual false, abstract: false, final false
  static inline void Rebind_Injected(::System::IntPtr _unity_self, bool writeDefaultValues);

  /// @brief Method ResetTrigger, addr 0x6a3cbc4, size 0x4, virtual false, abstract: false, final false
  inline void ResetTrigger(int32_t id);

  /// @brief Method ResetTrigger, addr 0x6a3ca58, size 0x4, virtual false, abstract: false, final false
  inline void ResetTrigger(::StringW name);

  /// @brief Method ResetTriggerID, addr 0x6a3cbc8, size 0x90, virtual false, abstract: false, final false
  inline void ResetTriggerID(int32_t id);

  /// @brief Method ResetTriggerID_Injected, addr 0x6a442a4, size 0x44, virtual false, abstract: false, final false
  static inline void ResetTriggerID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method ResetTriggerString, addr 0x6a3ca5c, size 0x168, virtual false, abstract: false, final false
  inline void ResetTriggerString(::StringW name);

  /// @brief Method ResetTriggerString_Injected, addr 0x6a44260, size 0x44, virtual false, abstract: false, final false
  static inline void ResetTriggerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method ResolveHash, addr 0x6a44f48, size 0x140, virtual false, abstract: false, final false
  inline ::StringW ResolveHash(int32_t hash);

  /// @brief Method ResolveHash_Injected, addr 0x6a45088, size 0x54, virtual false, abstract: false, final false
  static inline void ResolveHash_Injected(::System::IntPtr _unity_self, int32_t hash, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method SetBoneLocalRotation, addr 0x6a3f520, size 0x80, virtual false, abstract: false, final false
  inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetBoneLocalRotationInternal, addr 0x6a3f5dc, size 0xa8, virtual false, abstract: false, final false
  inline void SetBoneLocalRotationInternal(int32_t humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetBoneLocalRotationInternal_Injected, addr 0x6a3f684, size 0x54, virtual false, abstract: false, final false
  static inline void SetBoneLocalRotationInternal_Injected(::System::IntPtr _unity_self, int32_t humanBoneId, ::by_ref<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetBool, addr 0x6a3c39c, size 0x4, virtual false, abstract: false, final false
  inline void SetBool(int32_t id, bool value);

  /// @brief Method SetBool, addr 0x6a3c224, size 0x4, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool value);

  /// @brief Method SetBoolID, addr 0x6a3c3a0, size 0x98, virtual false, abstract: false, final false
  inline void SetBoolID(int32_t id, bool value);

  /// @brief Method SetBoolID_Injected, addr 0x6a43fcc, size 0x54, virtual false, abstract: false, final false
  static inline void SetBoolID_Injected(::System::IntPtr _unity_self, int32_t id, bool value);

  /// @brief Method SetBoolString, addr 0x6a3c228, size 0x174, virtual false, abstract: false, final false
  inline void SetBoolString(::StringW name, bool value);

  /// @brief Method SetBoolString_Injected, addr 0x6a43f78, size 0x54, virtual false, abstract: false, final false
  static inline void SetBoolString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, bool value);

  /// @brief Method SetFloat, addr 0x6a3beb4, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value);

  /// @brief Method SetFloat, addr 0x6a3bf58, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloat, addr 0x6a3bb9c, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x6a3bd1c, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatID, addr 0x6a3beb8, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloatID(int32_t id, float_t value);

  /// @brief Method SetFloatIDDamp, addr 0x6a3bf5c, size 0xb8, virtual false, abstract: false, final false
  inline void SetFloatIDDamp(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatIDDamp_Injected, addr 0x6a443dc, size 0x6c, virtual false, abstract: false, final false
  static inline void SetFloatIDDamp_Injected(::System::IntPtr _unity_self, int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatID_Injected, addr 0x6a43e9c, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatID_Injected(::System::IntPtr _unity_self, int32_t id, float_t value);

  /// @brief Method SetFloatString, addr 0x6a3bba0, size 0x17c, virtual false, abstract: false, final false
  inline void SetFloatString(::StringW name, float_t value);

  /// @brief Method SetFloatStringDamp, addr 0x6a3bd20, size 0x194, virtual false, abstract: false, final false
  inline void SetFloatStringDamp(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatStringDamp_Injected, addr 0x6a44370, size 0x6c, virtual false, abstract: false, final false
  static inline void SetFloatStringDamp_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatString_Injected, addr 0x6a43e48, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value);

  /// @brief Method SetGoalPosition, addr 0x6a3e500, size 0xa8, virtual false, abstract: false, final false
  inline void SetGoalPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetGoalPosition_Injected, addr 0x6a3e5a8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Vector3> goalPosition);

  /// @brief Method SetGoalRotation, addr 0x6a3e77c, size 0xa8, virtual false, abstract: false, final false
  inline void SetGoalRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetGoalRotation_Injected, addr 0x6a3e824, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Quaternion> goalRotation);

  /// @brief Method SetGoalWeightPosition, addr 0x6a3e9ac, size 0xa0, virtual false, abstract: false, final false
  inline void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightPosition_Injected, addr 0x6a3ea4c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightRotation, addr 0x6a3ebd4, size 0xa0, virtual false, abstract: false, final false
  inline void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightRotation_Injected, addr 0x6a3ec74, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalWeightRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetHintPosition, addr 0x6a3ee44, size 0xa8, virtual false, abstract: false, final false
  inline void SetHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetHintPosition_Injected, addr 0x6a3eeec, size 0x54, virtual false, abstract: false, final false
  static inline void SetHintPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, ::by_ref<::UnityEngine::Vector3> hintPosition);

  /// @brief Method SetHintWeightPosition, addr 0x6a3f074, size 0xa0, virtual false, abstract: false, final false
  inline void SetHintWeightPosition(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetHintWeightPosition_Injected, addr 0x6a3f114, size 0x54, virtual false, abstract: false, final false
  static inline void SetHintWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetIKHintPosition, addr 0x6a3edf4, size 0x50, virtual false, abstract: false, final false
  inline void SetIKHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetIKHintPositionWeight, addr 0x6a3f03c, size 0x38, virtual false, abstract: false, final false
  inline void SetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetIKPosition, addr 0x6a3e4b0, size 0x50, virtual false, abstract: false, final false
  inline void SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetIKPositionWeight, addr 0x6a3e974, size 0x38, virtual false, abstract: false, final false
  inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetIKRotation, addr 0x6a3e724, size 0x58, virtual false, abstract: false, final false
  inline void SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetIKRotationWeight, addr 0x6a3eb9c, size 0x38, virtual false, abstract: false, final false
  inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetInteger, addr 0x6a3c7bc, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(int32_t id, int32_t value);

  /// @brief Method SetInteger, addr 0x6a3c644, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetIntegerID, addr 0x6a3c7c0, size 0x98, virtual false, abstract: false, final false
  inline void SetIntegerID(int32_t id, int32_t value);

  /// @brief Method SetIntegerID_Injected, addr 0x6a440fc, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntegerID_Injected(::System::IntPtr _unity_self, int32_t id, int32_t value);

  /// @brief Method SetIntegerString, addr 0x6a3c648, size 0x174, virtual false, abstract: false, final false
  inline void SetIntegerString(::StringW name, int32_t value);

  /// @brief Method SetIntegerString_Injected, addr 0x6a440a8, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntegerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, int32_t value);

  /// @brief Method SetLayerWeight, addr 0x6a401e4, size 0xa0, virtual false, abstract: false, final false
  inline void SetLayerWeight(int32_t layerIndex, float_t weight);

  /// @brief Method SetLayerWeight_Injected, addr 0x6a40284, size 0x54, virtual false, abstract: false, final false
  static inline void SetLayerWeight_Injected(::System::IntPtr _unity_self, int32_t layerIndex, float_t weight);

  /// @brief Method SetLookAtPosition, addr 0x6a3f168, size 0x40, virtual false, abstract: false, final false
  inline void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtPositionInternal, addr 0x6a3f1a8, size 0x98, virtual false, abstract: false, final false
  inline void SetLookAtPositionInternal(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtPositionInternal_Injected, addr 0x6a3f240, size 0x44, virtual false, abstract: false, final false
  static inline void SetLookAtPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> lookAtPosition);

  /// @brief Method SetLookAtWeight, addr 0x6a3f284, size 0x38, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight);

  /// @brief Method SetLookAtWeight, addr 0x6a3f37c, size 0x3c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight);

  /// @brief Method SetLookAtWeight, addr 0x6a3f3b8, size 0x48, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight);

  /// @brief Method SetLookAtWeight, addr 0x6a3f400, size 0x4c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight);

  /// @brief Method SetLookAtWeight, addr 0x6a3f44c, size 0x58, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeightInternal, addr 0x6a3f2bc, size 0xc0, virtual false, abstract: false, final false
  inline void SetLookAtWeightInternal(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeightInternal_Injected, addr 0x6a3f4a4, size 0x7c, virtual false, abstract: false, final false
  static inline void SetLookAtWeightInternal_Injected(::System::IntPtr _unity_self, float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetQuaternion, addr 0x6a457f0, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(int32_t id, ::UnityEngine::Quaternion value);

  /// @brief Method SetQuaternion, addr 0x6a457ec, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(::StringW name, ::UnityEngine::Quaternion value);

  /// @brief Method SetTarget, addr 0x6a42084, size 0xa0, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime);

  /// @brief Method SetTarget_Injected, addr 0x6a42124, size 0x54, virtual false, abstract: false, final false
  static inline void SetTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime);

  /// @brief Method SetTrigger, addr 0x6a3c9c4, size 0x4, virtual false, abstract: false, final false
  inline void SetTrigger(int32_t id);

  /// @brief Method SetTrigger, addr 0x6a3c858, size 0x4, virtual false, abstract: false, final false
  inline void SetTrigger(::StringW name);

  /// @brief Method SetTriggerID, addr 0x6a3c9c8, size 0x90, virtual false, abstract: false, final false
  inline void SetTriggerID(int32_t id);

  /// @brief Method SetTriggerID_Injected, addr 0x6a4421c, size 0x44, virtual false, abstract: false, final false
  static inline void SetTriggerID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// @brief Method SetTriggerString, addr 0x6a3c85c, size 0x168, virtual false, abstract: false, final false
  inline void SetTriggerString(::StringW name);

  /// @brief Method SetTriggerString_Injected, addr 0x6a441d8, size 0x44, virtual false, abstract: false, final false
  static inline void SetTriggerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method SetVector, addr 0x6a45748, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t id, ::UnityEngine::Vector3 value);

  /// @brief Method SetVector, addr 0x6a45744, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector3 value);

  /// @brief Method StartPlayback, addr 0x6a42d48, size 0x80, virtual false, abstract: false, final false
  inline void StartPlayback();

  /// @brief Method StartPlayback_Injected, addr 0x6a42dc8, size 0x3c, virtual false, abstract: false, final false
  static inline void StartPlayback_Injected(::System::IntPtr _unity_self);

  /// @brief Method StartRecording, addr 0x6a43058, size 0x90, virtual false, abstract: false, final false
  inline void StartRecording(int32_t frameCount);

  /// @brief Method StartRecording_Injected, addr 0x6a430e8, size 0x44, virtual false, abstract: false, final false
  static inline void StartRecording_Injected(::System::IntPtr _unity_self, int32_t frameCount);

  /// @brief Method StopPlayback, addr 0x6a42e04, size 0x80, virtual false, abstract: false, final false
  inline void StopPlayback();

  /// @brief Method StopPlayback_Injected, addr 0x6a42e84, size 0x3c, virtual false, abstract: false, final false
  static inline void StopPlayback_Injected(::System::IntPtr _unity_self);

  /// @brief Method StopRecording, addr 0x6a4312c, size 0x80, virtual false, abstract: false, final false
  inline void StopRecording();

  /// @brief Method StopRecording_Injected, addr 0x6a431ac, size 0x3c, virtual false, abstract: false, final false
  static inline void StopRecording_Injected(::System::IntPtr _unity_self);

  /// @brief Method StringToHash, addr 0x6a416c8, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t StringToHash(::StringW name);

  /// @brief Method StringToHash_Injected, addr 0x6a43920, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t StringToHash_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Update, addr 0x6a44a40, size 0x90, virtual false, abstract: false, final false
  inline void Update(float_t deltaTime);

  /// @brief Method Update_Injected, addr 0x6a44ad0, size 0x4c, virtual false, abstract: false, final false
  static inline void Update_Injected(::System::IntPtr _unity_self, float_t deltaTime);

  /// @brief Method WriteDefaultPose, addr 0x6a44984, size 0x80, virtual false, abstract: false, final false
  inline void WriteDefaultPose();

  /// @brief Method WriteDefaultPose_Injected, addr 0x6a44a04, size 0x3c, virtual false, abstract: false, final false
  static inline void WriteDefaultPose_Injected(::System::IntPtr _unity_self);

  /// @brief Method WriteDefaultValues, addr 0x6a41a40, size 0x80, virtual false, abstract: false, final false
  inline void WriteDefaultValues();

  /// @brief Method WriteDefaultValues_Injected, addr 0x6a41ac0, size 0x3c, virtual false, abstract: false, final false
  static inline void WriteDefaultValues_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x6a457f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowConstantClipSamplingOptimization, addr 0x6a3dc6c, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowConstantClipSamplingOptimization();

  /// @brief Method get_allowConstantClipSamplingOptimization_Injected, addr 0x6a3dcec, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowConstantClipSamplingOptimization_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularVelocity, addr 0x6a3d110, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x6a3d1b0, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_animatePhysics, addr 0x6a3d890, size 0x80, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method get_animatePhysics_Injected, addr 0x6a3d910, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_animatePhysics_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_applyRootMotion, addr 0x6a3d570, size 0x80, virtual false, abstract: false, final false
  inline bool get_applyRootMotion();

  /// @brief Method get_applyRootMotion_Injected, addr 0x6a3d5f0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_applyRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_avatar, addr 0x6a427cc, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Avatar> get_avatar();

  /// @brief Method get_avatarRoot, addr 0x6a42448, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_avatarRoot();

  /// @brief Method get_avatarRoot_Injected, addr 0x6a42598, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_avatarRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_avatar_Injected, addr 0x6a4395c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_avatar_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bodyPosition, addr 0x6a3deb8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPosition();

  /// @brief Method get_bodyPositionInternal, addr 0x6a3df68, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPositionInternal();

  /// @brief Method get_bodyPositionInternal_Injected, addr 0x6a3e0e0, size 0x44, virtual false, abstract: false, final false
  static inline void get_bodyPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_bodyRotation, addr 0x6a3e168, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotation();

  /// @brief Method get_bodyRotationInternal, addr 0x6a3e180, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotationInternal();

  /// @brief Method get_bodyRotationInternal_Injected, addr 0x6a3e2fc, size 0x44, virtual false, abstract: false, final false
  static inline void get_bodyRotationInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_cullingMode, addr 0x6a42bb8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorCullingMode get_cullingMode();

  /// @brief Method get_cullingMode_Injected, addr 0x6a42c38, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorCullingMode get_cullingMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_deltaPosition, addr 0x6a3ce68, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_deltaPosition();

  /// @brief Method get_deltaPosition_Injected, addr 0x6a3cf08, size 0x44, virtual false, abstract: false, final false
  static inline void get_deltaPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_deltaRotation, addr 0x6a3cf4c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_deltaRotation();

  /// @brief Method get_deltaRotation_Injected, addr 0x6a3cfe8, size 0x44, virtual false, abstract: false, final false
  static inline void get_deltaRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_feetPivotActive, addr 0x6a40d94, size 0x80, virtual false, abstract: false, final false
  inline float_t get_feetPivotActive();

  /// @brief Method get_feetPivotActive_Injected, addr 0x6a40e14, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_feetPivotActive_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fireEvents, addr 0x6a451ec, size 0x80, virtual false, abstract: false, final false
  inline bool get_fireEvents();

  /// @brief Method get_fireEvents_Injected, addr 0x6a4526c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_fireEvents_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_gravityWeight, addr 0x6a3ddfc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_gravityWeight();

  /// @brief Method get_gravityWeight_Injected, addr 0x6a3de7c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_gravityWeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasBoundPlayables, addr 0x6a436bc, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasBoundPlayables();

  /// @brief Method get_hasBoundPlayables_Injected, addr 0x6a4373c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasBoundPlayables_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasRootMotion, addr 0x6a3b6a4, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasRootMotion();

  /// @brief Method get_hasRootMotion_Injected, addr 0x6a3b724, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasTransformHierarchy, addr 0x6a3dbb0, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasTransformHierarchy();

  /// @brief Method get_hasTransformHierarchy_Injected, addr 0x6a3dc30, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasTransformHierarchy_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_humanScale, addr 0x6a3b81c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_humanScale();

  /// @brief Method get_humanScale_Injected, addr 0x6a3b89c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_humanScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isHuman, addr 0x6a3b5e8, size 0x80, virtual false, abstract: false, final false
  inline bool get_isHuman();

  /// @brief Method get_isHuman_Injected, addr 0x6a3b668, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isHuman_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isInitialized, addr 0x6a3b8d8, size 0x80, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_isInitialized_Injected, addr 0x6a3b958, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isInitialized_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isMatchingTarget, addr 0x6a41384, size 0x80, virtual false, abstract: false, final false
  inline bool get_isMatchingTarget();

  /// @brief Method get_isMatchingTarget_Injected, addr 0x6a41404, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isMatchingTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isOptimizable, addr 0x6a3b52c, size 0x80, virtual false, abstract: false, final false
  inline bool get_isOptimizable();

  /// @brief Method get_isOptimizable_Injected, addr 0x6a3b5ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isOptimizable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isRootPositionOrRotationControlledByCurves, addr 0x6a3b760, size 0x80, virtual false, abstract: false, final false
  inline bool get_isRootPositionOrRotationControlledByCurves();

  /// @brief Method get_isRootPositionOrRotationControlledByCurves_Injected, addr 0x6a3b7e0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isRootPositionOrRotationControlledByCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_keepAnimatorControllerStateOnDisable, addr 0x6a4537c, size 0x4, virtual false, abstract: false, final false
  inline bool get_keepAnimatorControllerStateOnDisable();

  /// @brief Method get_keepAnimatorStateOnDisable, addr 0x6a45380, size 0x80, virtual false, abstract: false, final false
  inline bool get_keepAnimatorStateOnDisable();

  /// @brief Method get_keepAnimatorStateOnDisable_Injected, addr 0x6a45494, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_keepAnimatorStateOnDisable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layerCount, addr 0x6a3fd08, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_layerCount();

  /// @brief Method get_layerCount_Injected, addr 0x6a3fd88, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_layerCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layersAffectMassCenter, addr 0x6a44448, size 0x80, virtual false, abstract: false, final false
  inline bool get_layersAffectMassCenter();

  /// @brief Method get_layersAffectMassCenter_Injected, addr 0x6a444c8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_layersAffectMassCenter_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_leftFeetBottomHeight, addr 0x6a445d8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_leftFeetBottomHeight();

  /// @brief Method get_leftFeetBottomHeight_Injected, addr 0x6a44658, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_leftFeetBottomHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearVelocityBlending, addr 0x6a3d700, size 0x80, virtual false, abstract: false, final false
  inline bool get_linearVelocityBlending();

  /// @brief Method get_linearVelocityBlending_Injected, addr 0x6a3d780, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_linearVelocityBlending_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_logWarnings, addr 0x6a43d0c, size 0x80, virtual false, abstract: false, final false
  inline bool get_logWarnings();

  /// @brief Method get_logWarnings_Injected, addr 0x6a450dc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_logWarnings_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_parameterCount, addr 0x6a40b68, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_parameterCount();

  /// @brief Method get_parameterCount_Injected, addr 0x6a40be8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_parameterCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_parameters, addr 0x6a40aac, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters();

  /// @brief Method get_parameters_Injected, addr 0x6a40b2c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pivotPosition, addr 0x6a40fe8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivotPosition();

  /// @brief Method get_pivotPosition_Injected, addr 0x6a41088, size 0x44, virtual false, abstract: false, final false
  static inline void get_pivotPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_pivotWeight, addr 0x6a40f2c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_pivotWeight();

  /// @brief Method get_pivotWeight_Injected, addr 0x6a40fac, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_pivotWeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_playableGraph, addr 0x6a43c14, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph get_playableGraph();

  /// @brief Method get_playbackTime, addr 0x6a42ec0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_playbackTime();

  /// @brief Method get_playbackTime_Injected, addr 0x6a42f40, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_playbackTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_recorderMode, addr 0x6a43370, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorRecorderMode get_recorderMode();

  /// @brief Method get_recorderMode_Injected, addr 0x6a433f0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorRecorderMode get_recorderMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_recorderStartTime, addr 0x6a431e8, size 0x4, virtual false, abstract: false, final false
  inline float_t get_recorderStartTime();

  /// @brief Method get_recorderStopTime, addr 0x6a432ac, size 0x4, virtual false, abstract: false, final false
  inline float_t get_recorderStopTime();

  /// @brief Method get_rightFeetBottomHeight, addr 0x6a44694, size 0x80, virtual false, abstract: false, final false
  inline float_t get_rightFeetBottomHeight();

  /// @brief Method get_rightFeetBottomHeight_Injected, addr 0x6a44714, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_rightFeetBottomHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rootPosition, addr 0x6a3d1f4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rootPosition();

  /// @brief Method get_rootPosition_Injected, addr 0x6a3d294, size 0x44, virtual false, abstract: false, final false
  static inline void get_rootPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_rootRotation, addr 0x6a3d3b4, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rootRotation();

  /// @brief Method get_rootRotation_Injected, addr 0x6a3d450, size 0x44, virtual false, abstract: false, final false
  static inline void get_rootRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_runtimeAnimatorController, addr 0x6a4342c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController();

  /// @brief Method get_runtimeAnimatorController_Injected, addr 0x6a4357c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_runtimeAnimatorController_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_speed, addr 0x6a41440, size 0x80, virtual false, abstract: false, final false
  inline float_t get_speed();

  /// @brief Method get_speed_Injected, addr 0x6a414c0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_speed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stabilizeFeet, addr 0x6a3fb78, size 0x80, virtual false, abstract: false, final false
  inline bool get_stabilizeFeet();

  /// @brief Method get_stabilizeFeet_Injected, addr 0x6a3fbf8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_stabilizeFeet_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_supportsOnAnimatorMove, addr 0x6a44750, size 0x80, virtual false, abstract: false, final false
  inline bool get_supportsOnAnimatorMove();

  /// @brief Method get_supportsOnAnimatorMove_Injected, addr 0x6a447d0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_supportsOnAnimatorMove_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetPosition, addr 0x6a42178, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetPosition_Injected, addr 0x6a42218, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation, addr 0x6a4225c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method get_targetRotation_Injected, addr 0x6a422f8, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_updateMode, addr 0x6a3da20, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorUpdateMode get_updateMode();

  /// @brief Method get_updateMode_Injected, addr 0x6a3daa0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorUpdateMode get_updateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x6a3d02c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x6a3d0cc, size 0x44, virtual false, abstract: false, final false
  static inline void get_velocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_writeDefaultValuesOnDisable, addr 0x6a45514, size 0x80, virtual false, abstract: false, final false
  inline bool get_writeDefaultValuesOnDisable();

  /// @brief Method get_writeDefaultValuesOnDisable_Injected, addr 0x6a45594, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_writeDefaultValuesOnDisable_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_allowConstantClipSamplingOptimization, addr 0x6a3dd28, size 0x90, virtual false, abstract: false, final false
  inline void set_allowConstantClipSamplingOptimization(bool value);

  /// @brief Method set_allowConstantClipSamplingOptimization_Injected, addr 0x6a3ddb8, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowConstantClipSamplingOptimization_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_animatePhysics, addr 0x6a3d94c, size 0x90, virtual false, abstract: false, final false
  inline void set_animatePhysics(bool value);

  /// @brief Method set_animatePhysics_Injected, addr 0x6a3d9dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_animatePhysics_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_applyRootMotion, addr 0x6a3d62c, size 0x90, virtual false, abstract: false, final false
  inline void set_applyRootMotion(bool value);

  /// @brief Method set_applyRootMotion_Injected, addr 0x6a3d6bc, size 0x44, virtual false, abstract: false, final false
  static inline void set_applyRootMotion_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_avatar, addr 0x6a43998, size 0xc0, virtual false, abstract: false, final false
  inline void set_avatar(::UnityEngine::Avatar* value);

  /// @brief Method set_avatar_Injected, addr 0x6a43a58, size 0x44, virtual false, abstract: false, final false
  static inline void set_avatar_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_bodyPosition, addr 0x6a3e008, size 0x40, virtual false, abstract: false, final false
  inline void set_bodyPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_bodyPositionInternal, addr 0x6a3e048, size 0x98, virtual false, abstract: false, final false
  inline void set_bodyPositionInternal(::UnityEngine::Vector3 value);

  /// @brief Method set_bodyPositionInternal_Injected, addr 0x6a3e124, size 0x44, virtual false, abstract: false, final false
  static inline void set_bodyPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_bodyRotation, addr 0x6a3e21c, size 0x48, virtual false, abstract: false, final false
  inline void set_bodyRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_bodyRotationInternal, addr 0x6a3e264, size 0x98, virtual false, abstract: false, final false
  inline void set_bodyRotationInternal(::UnityEngine::Quaternion value);

  /// @brief Method set_bodyRotationInternal_Injected, addr 0x6a3e340, size 0x44, virtual false, abstract: false, final false
  static inline void set_bodyRotationInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_cullingMode, addr 0x6a42c74, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingMode(::UnityEngine::AnimatorCullingMode value);

  /// @brief Method set_cullingMode_Injected, addr 0x6a42d04, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimatorCullingMode value);

  /// @brief Method set_feetPivotActive, addr 0x6a40e50, size 0x90, virtual false, abstract: false, final false
  inline void set_feetPivotActive(float_t value);

  /// @brief Method set_feetPivotActive_Injected, addr 0x6a40ee0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_feetPivotActive_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_fireEvents, addr 0x6a452a8, size 0x90, virtual false, abstract: false, final false
  inline void set_fireEvents(bool value);

  /// @brief Method set_fireEvents_Injected, addr 0x6a45338, size 0x44, virtual false, abstract: false, final false
  static inline void set_fireEvents_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_keepAnimatorControllerStateOnDisable, addr 0x6a45400, size 0x4, virtual false, abstract: false, final false
  inline void set_keepAnimatorControllerStateOnDisable(bool value);

  /// @brief Method set_keepAnimatorStateOnDisable, addr 0x6a45404, size 0x90, virtual false, abstract: false, final false
  inline void set_keepAnimatorStateOnDisable(bool value);

  /// @brief Method set_keepAnimatorStateOnDisable_Injected, addr 0x6a454d0, size 0x44, virtual false, abstract: false, final false
  static inline void set_keepAnimatorStateOnDisable_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_layersAffectMassCenter, addr 0x6a44504, size 0x90, virtual false, abstract: false, final false
  inline void set_layersAffectMassCenter(bool value);

  /// @brief Method set_layersAffectMassCenter_Injected, addr 0x6a44594, size 0x44, virtual false, abstract: false, final false
  static inline void set_layersAffectMassCenter_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_linearVelocityBlending, addr 0x6a3d7bc, size 0x90, virtual false, abstract: false, final false
  inline void set_linearVelocityBlending(bool value);

  /// @brief Method set_linearVelocityBlending_Injected, addr 0x6a3d84c, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearVelocityBlending_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_logWarnings, addr 0x6a45118, size 0x90, virtual false, abstract: false, final false
  inline void set_logWarnings(bool value);

  /// @brief Method set_logWarnings_Injected, addr 0x6a451a8, size 0x44, virtual false, abstract: false, final false
  static inline void set_logWarnings_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_playbackTime, addr 0x6a42f7c, size 0x90, virtual false, abstract: false, final false
  inline void set_playbackTime(float_t value);

  /// @brief Method set_playbackTime_Injected, addr 0x6a4300c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_playbackTime_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_recorderStartTime, addr 0x6a4326c, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStartTime(float_t value);

  /// @brief Method set_recorderStopTime, addr 0x6a43330, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStopTime(float_t value);

  /// @brief Method set_rootPosition, addr 0x6a3d2d8, size 0x98, virtual false, abstract: false, final false
  inline void set_rootPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_rootPosition_Injected, addr 0x6a3d370, size 0x44, virtual false, abstract: false, final false
  static inline void set_rootPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_rootRotation, addr 0x6a3d494, size 0x98, virtual false, abstract: false, final false
  inline void set_rootRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rootRotation_Injected, addr 0x6a3d52c, size 0x44, virtual false, abstract: false, final false
  static inline void set_rootRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_runtimeAnimatorController, addr 0x6a435b8, size 0xc0, virtual false, abstract: false, final false
  inline void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* value);

  /// @brief Method set_runtimeAnimatorController_Injected, addr 0x6a43678, size 0x44, virtual false, abstract: false, final false
  static inline void set_runtimeAnimatorController_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_speed, addr 0x6a414fc, size 0x90, virtual false, abstract: false, final false
  inline void set_speed(float_t value);

  /// @brief Method set_speed_Injected, addr 0x6a4158c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_speed_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stabilizeFeet, addr 0x6a3fc34, size 0x90, virtual false, abstract: false, final false
  inline void set_stabilizeFeet(bool value);

  /// @brief Method set_stabilizeFeet_Injected, addr 0x6a3fcc4, size 0x44, virtual false, abstract: false, final false
  static inline void set_stabilizeFeet_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_updateMode, addr 0x6a3dadc, size 0x90, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::AnimatorUpdateMode value);

  /// @brief Method set_updateMode_Injected, addr 0x6a3db6c, size 0x44, virtual false, abstract: false, final false
  static inline void set_updateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimatorUpdateMode value);

  /// @brief Method set_writeDefaultValuesOnDisable, addr 0x6a455d0, size 0x90, virtual false, abstract: false, final false
  inline void set_writeDefaultValuesOnDisable(bool value);

  /// @brief Method set_writeDefaultValuesOnDisable_Injected, addr 0x6a45660, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20226 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animator) == 0x18, "Size mismatch!");

} // namespace UnityEngine
