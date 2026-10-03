#pragma once
// IWYU pragma private; include "UnityEngine/Animator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_def.hpp"
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
// [NativeHeader("Modules/Animation/Animator.h")]
// [NativeHeader("Modules/Animation/ScriptBindings/Animator.bindings.h")]
// [UsedByNativeCode]
// [NativeHeader("Modules/Animation/ScriptBindings/AnimatorControllerParameter.bindings.h")]
// Dependencies UnityEngine.Behaviour, UnityEngine.StateMachineBehaviour
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

  /// @brief [Obsolete("keepAnimatorControllerStateOnDisable is deprecated, use keepAnimatorStateOnDisable instead. (UnityUpgradable) -> keepAnimatorStateOnDisable", false)]
  __declspec(property(get = get_keepAnimatorControllerStateOnDisable, put = set_keepAnimatorControllerStateOnDisable)) bool keepAnimatorControllerStateOnDisable;

  __declspec(property(get = get_keepAnimatorStateOnDisable, put = set_keepAnimatorStateOnDisable)) bool keepAnimatorStateOnDisable;

  __declspec(property(get = get_layerCount)) int32_t layerCount;

  __declspec(property(get = get_layersAffectMassCenter, put = set_layersAffectMassCenter)) bool layersAffectMassCenter;

  __declspec(property(get = get_leftFeetBottomHeight)) float_t leftFeetBottomHeight;

  /// @brief [Obsolete("Animator.linearVelocityBlending is no longer used and has been deprecated.")]
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

  /// @brief [NativeConditional("UNITY_EDITOR")]
  __declspec(property(get = get_supportsOnAnimatorMove)) bool supportsOnAnimatorMove;

  __declspec(property(get = get_targetPosition)) ::UnityEngine::Vector3 targetPosition;

  __declspec(property(get = get_targetRotation)) ::UnityEngine::Quaternion targetRotation;

  __declspec(property(get = get_updateMode, put = set_updateMode)) ::UnityEngine::AnimatorUpdateMode updateMode;

  __declspec(property(get = get_velocity)) ::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_writeDefaultValuesOnDisable, put = set_writeDefaultValuesOnDisable)) bool writeDefaultValuesOnDisable;

  /// @brief Method ApplyBuiltinRootMotion, addr 0x6e935dc, size 0x80, virtual false, abstract: false, final false
  inline void ApplyBuiltinRootMotion();

  /// @brief Method ApplyBuiltinRootMotion_Injected, addr 0x6e9365c, size 0x3c, virtual false, abstract: false, final false
  static inline void ApplyBuiltinRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method CheckIfInIKPass, addr 0x6e8c7e0, size 0x98, virtual false, abstract: false, final false
  inline void CheckIfInIKPass();

  /// @brief Method ClearInternalControllerPlayable, addr 0x6e9215c, size 0x80, virtual false, abstract: false, final false
  inline void ClearInternalControllerPlayable();

  /// @brief Method ClearInternalControllerPlayable_Injected, addr 0x6e921dc, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearInternalControllerPlayable_Injected(::System::IntPtr _unity_self);

  /// @brief Method ConvertStateMachineBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::StateMachineBehaviour*>)
  static inline ::ArrayW<T> ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*> rawObjects);

  /// @brief Method CrossFade, addr 0x6e90690, size 0x14, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade, addr 0x6e90680, size 0x10, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x6e90678, size 0x8, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// [FreeFunction(Name = "AnimatorBindings::CrossFade", HasExplicitThis = true)]
  /// @brief Method CrossFade, addr 0x6e9053c, size 0xc0, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("0.0f")] */ float_t normalizedTimeOffset,
                        /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime);

  /// @brief Method CrossFade, addr 0x6e904fc, size 0x40, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade, addr 0x6e904b0, size 0x4c, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x6e9040c, size 0x4c, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade, addr 0x6e90458, size 0x58, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer,
                        /* [DefaultValue("float.NegativeInfinity")] */ float_t normalizedTimeOffset, /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x6e902c4, size 0x10, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x6e902b8, size 0xc, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x6e902b0, size 0x8, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// [FreeFunction(Name = "AnimatorBindings::CrossFadeInFixedTime", HasExplicitThis = true)]
  /// @brief Method CrossFadeInFixedTime, addr 0x6e90104, size 0xc0, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("0.0f")] */ float_t fixedTimeOffset,
                                   /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x6e8ff9c, size 0x3c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x6e901c4, size 0x48, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x6e9020c, size 0x4c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime, addr 0x6e90258, size 0x58, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("0.0f")] */ float_t fixedTimeOffset,
                                   /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime_Injected, addr 0x6e902d4, size 0x7c, virtual false, abstract: false, final false
  static inline void CrossFadeInFixedTime_Injected(::System::IntPtr _unity_self, int32_t stateHashName, float_t fixedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer,
                                                   /* [DefaultValue("0.0f")] */ float_t fixedTimeOffset, /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime);

  /// @brief Method CrossFade_Injected, addr 0x6e905fc, size 0x7c, virtual false, abstract: false, final false
  static inline void CrossFade_Injected(::System::IntPtr _unity_self, int32_t stateHashName, float_t normalizedTransitionDuration, /* [DefaultValue("-1")] */ int32_t layer,
                                        /* [DefaultValue("0.0f")] */ float_t normalizedTimeOffset, /* [DefaultValue("0.0f")] */ float_t normalizedTransitionTime);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method EvaluateController, addr 0x6e93698, size 0x8, virtual false, abstract: false, final false
  inline void EvaluateController();

  /// @brief Method EvaluateController, addr 0x6e936a0, size 0x90, virtual false, abstract: false, final false
  inline void EvaluateController(float_t deltaTime);

  /// @brief Method EvaluateController_Injected, addr 0x6e93730, size 0x4c, virtual false, abstract: false, final false
  static inline void EvaluateController_Injected(::System::IntPtr _unity_self, float_t deltaTime);

  /// [Obsolete("ForceStateNormalizedTime is deprecated. Please use Play or CrossFade instead.")]
  /// @brief Method ForceStateNormalizedTime, addr 0x6e8fee8, size 0xc, virtual false, abstract: false, final false
  inline void ForceStateNormalizedTime(float_t normalizedTime);

  /// @brief Method GetAnimatorClipInfoCount, addr 0x6e8ee88, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetAnimatorClipInfoCount(int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorClipInfoCount_Injected, addr 0x6e8ef20, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetAnimatorClipInfoCount_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool current);

  /// [FreeFunction(Name = "AnimatorBindings::GetAnimatorClipInfoInternal", HasExplicitThis = true)]
  /// @brief Method GetAnimatorClipInfoInternal, addr 0x6e8f188, size 0xa8, virtual false, abstract: false, final false
  inline void GetAnimatorClipInfoInternal(int32_t layerIndex, bool isCurrent, ::System::Object* clips);

  /// @brief Method GetAnimatorClipInfoInternal_Injected, addr 0x6e8f230, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAnimatorClipInfoInternal_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool isCurrent, ::System::Object* clips);

  /// @brief Method GetAnimatorStateInfo, addr 0x6e8ebe8, size 0xa8, virtual false, abstract: false, final false
  inline void GetAnimatorStateInfo(int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo> info);

  /// @brief Method GetAnimatorStateInfo_Injected, addr 0x6e8ec90, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAnimatorStateInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo> info);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method GetAnimatorStateName, addr 0x6e93784, size 0x144, virtual false, abstract: false, final false
  inline ::StringW GetAnimatorStateName(int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorStateName_Injected, addr 0x6e938d0, size 0x5c, virtual false, abstract: false, final false
  static inline void GetAnimatorStateName_Injected(::System::IntPtr _unity_self, int32_t layerIndex, bool current, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x6e8ee58, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t layerIndex);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x6e8ed6c, size 0x98, virtual false, abstract: false, final false
  inline void GetAnimatorTransitionInfo(int32_t layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo> info);

  /// @brief Method GetAnimatorTransitionInfo_Injected, addr 0x6e8ee04, size 0x54, virtual false, abstract: false, final false
  static inline void GetAnimatorTransitionInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo> info);

  /// @brief Method GetBehaviour, addr 0x6e8dfe8, size 0x184, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> GetBehaviour(/* [NotNull] */ ::System::Type* type);

  /// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::StateMachineBehaviour*>)
  inline T GetBehaviour();

  /// @brief Method GetBehaviour_Injected, addr 0x6e8e16c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBehaviour_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method GetBehaviours, addr 0x6e8e2b0, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>> GetBehaviours(int32_t fullPathHash, int32_t layerIndex);

  /// @brief Method GetBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::StateMachineBehaviour*>)
  inline ::ArrayW<T> GetBehaviours();

  /// @brief Method GetBoneTransform, addr 0x6e90fb8, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones humanBoneId);

  /// [NativeMethod("GetBoneTransform")]
  /// @brief Method GetBoneTransformInternal, addr 0x6e91400, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransformInternal(int32_t humanBoneId);

  /// @brief Method GetBoneTransformInternal_Injected, addr 0x6e91558, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBoneTransformInternal_Injected(::System::IntPtr _unity_self, int32_t humanBoneId);

  /// @brief Method GetBool, addr 0x6e8aaa0, size 0x4, virtual false, abstract: false, final false
  inline bool GetBool(int32_t id);

  /// @brief Method GetBool, addr 0x6e8a924, size 0x4, virtual false, abstract: false, final false
  inline bool GetBool(::StringW name);

  /// [FreeFunction(Name = "AnimatorBindings::GetBoolID", HasExplicitThis = true)]
  /// @brief Method GetBoolID, addr 0x6e8aaa4, size 0x90, virtual false, abstract: false, final false
  inline bool GetBoolID(int32_t id);

  /// @brief Method GetBoolID_Injected, addr 0x6e92a48, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBoolID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// [FreeFunction(Name = "AnimatorBindings::GetBoolString", HasExplicitThis = true)]
  /// @brief Method GetBoolString, addr 0x6e8a928, size 0x178, virtual false, abstract: false, final false
  inline bool GetBoolString(::StringW name);

  /// @brief Method GetBoolString_Injected, addr 0x6e92a04, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBoolString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [FreeFunction(Name = "AnimatorBindings::GetCurrentAnimatorClipInfo", HasExplicitThis = true)]
  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x6e8ef84, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x6e8f12c, size 0x5c, virtual false, abstract: false, final false
  inline void GetCurrentAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x6e8ef74, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetCurrentAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo_Injected, addr 0x6e8f014, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorStateInfo, addr 0x6e8ecec, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex);

  /// [FreeFunction(Name = "AnimatorBindings::GetCurrentGraph", HasExplicitThis = true)]
  /// @brief Method GetCurrentGraph, addr 0x6e9261c, size 0x90, virtual false, abstract: false, final false
  inline void GetCurrentGraph(::by_ref<::UnityEngine::Playables::PlayableGraph> graph);

  /// @brief Method GetCurrentGraph_Injected, addr 0x6e926ac, size 0x44, virtual false, abstract: false, final false
  static inline void GetCurrentGraph_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph> graph);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method GetCurrentStateName, addr 0x6e9377c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetCurrentStateName(int32_t layerIndex);

  /// @brief Method GetFloat, addr 0x6e8a418, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t id);

  /// @brief Method GetFloat, addr 0x6e8a2a4, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// [FreeFunction(Name = "AnimatorBindings::GetFloatID", HasExplicitThis = true)]
  /// @brief Method GetFloatID, addr 0x6e8a41c, size 0x90, virtual false, abstract: false, final false
  inline float_t GetFloatID(int32_t id);

  /// @brief Method GetFloatID_Injected, addr 0x6e92918, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// [FreeFunction(Name = "AnimatorBindings::GetFloatString", HasExplicitThis = true)]
  /// @brief Method GetFloatString, addr 0x6e8a2a8, size 0x170, virtual false, abstract: false, final false
  inline float_t GetFloatString(::StringW name);

  /// @brief Method GetFloatString_Injected, addr 0x6e928d4, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetGoalPosition, addr 0x6e8ccbc, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalPosition_Injected, addr 0x6e8cd6c, size 0x54, virtual false, abstract: false, final false
  static inline void GetGoalPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetGoalRotation, addr 0x6e8cf34, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetGoalRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalRotation_Injected, addr 0x6e8cfe0, size 0x54, virtual false, abstract: false, final false
  static inline void GetGoalRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method GetGoalWeightPosition, addr 0x6e8d1b0, size 0x90, virtual false, abstract: false, final false
  inline float_t GetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightPosition_Injected, addr 0x6e8d240, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetGoalWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightRotation, addr 0x6e8d3d8, size 0x90, virtual false, abstract: false, final false
  inline float_t GetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightRotation_Injected, addr 0x6e8d468, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetGoalWeightRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetHintPosition, addr 0x6e8d600, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintPosition_Injected, addr 0x6e8d6b0, size 0x54, virtual false, abstract: false, final false
  static inline void GetHintPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetHintWeightPosition, addr 0x6e8d878, size 0x90, virtual false, abstract: false, final false
  inline float_t GetHintWeightPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintWeightPosition_Injected, addr 0x6e8d908, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetHintWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKHintPosition, addr 0x6e8d5d8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKHintPositionWeight, addr 0x6e8d850, size 0x28, virtual false, abstract: false, final false
  inline float_t GetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKPosition, addr 0x6e8cc94, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKPositionWeight, addr 0x6e8d188, size 0x28, virtual false, abstract: false, final false
  inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotation, addr 0x6e8cf0c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotationWeight, addr 0x6e8d3b0, size 0x28, virtual false, abstract: false, final false
  inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetInteger, addr 0x6e8aec0, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t id);

  /// @brief Method GetInteger, addr 0x6e8ad48, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// [FreeFunction(Name = "AnimatorBindings::GetIntegerID", HasExplicitThis = true)]
  /// @brief Method GetIntegerID, addr 0x6e8aec4, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetIntegerID(int32_t id);

  /// @brief Method GetIntegerID_Injected, addr 0x6e92b78, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntegerID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// [FreeFunction(Name = "AnimatorBindings::GetIntegerString", HasExplicitThis = true)]
  /// @brief Method GetIntegerString, addr 0x6e8ad4c, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetIntegerString(::StringW name);

  /// @brief Method GetIntegerString_Injected, addr 0x6e92b34, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntegerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetLayerIndex, addr 0x6e8e868, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetLayerIndex(::StringW layerName);

  /// @brief Method GetLayerIndex_Injected, addr 0x6e8e9dc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetLayerIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> layerName);

  /// @brief Method GetLayerName, addr 0x6e8e6d4, size 0x140, virtual false, abstract: false, final false
  inline ::StringW GetLayerName(int32_t layerIndex);

  /// @brief Method GetLayerName_Injected, addr 0x6e8e814, size 0x54, virtual false, abstract: false, final false
  static inline void GetLayerName_Injected(::System::IntPtr _unity_self, int32_t layerIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetLayerWeight, addr 0x6e8ea20, size 0x90, virtual false, abstract: false, final false
  inline float_t GetLayerWeight(int32_t layerIndex);

  /// @brief Method GetLayerWeight_Injected, addr 0x6e8eab0, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetLayerWeight_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// [FreeFunction(Name = "AnimatorBindings::GetNextAnimatorClipInfo", HasExplicitThis = true)]
  /// @brief Method GetNextAnimatorClipInfo, addr 0x6e8f058, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo, addr 0x6e8f28c, size 0x5c, virtual false, abstract: false, final false
  inline void GetNextAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetNextAnimatorClipInfoCount, addr 0x6e8ef7c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetNextAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo_Injected, addr 0x6e8f0e8, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method GetNextAnimatorStateInfo, addr 0x6e8ed2c, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t layerIndex);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method GetNextStateName, addr 0x6e938c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetNextStateName(int32_t layerIndex);

  /// @brief Method GetParameter, addr 0x6e8f608, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t index);

  /// [FreeFunction(Name = "AnimatorBindings::GetParameterInternal", HasExplicitThis = true)]
  /// @brief Method GetParameterInternal, addr 0x6e8f534, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal(int32_t index);

  /// @brief Method GetParameterInternal_Injected, addr 0x6e8f5c4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal_Injected(::System::IntPtr _unity_self, int32_t index);

  /// [Obsolete("GetQuaternion is deprecated.")]
  /// @brief Method GetQuaternion, addr 0x6e94180, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(int32_t id);

  /// [Obsolete("GetQuaternion is deprecated.")]
  /// @brief Method GetQuaternion, addr 0x6e94130, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(::StringW name);

  /// @brief Method GetRecorderStartTime, addr 0x6e91bd0, size 0x80, virtual false, abstract: false, final false
  inline float_t GetRecorderStartTime();

  /// @brief Method GetRecorderStartTime_Injected, addr 0x6e91c54, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetRecorderStartTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetRecorderStopTime, addr 0x6e91c94, size 0x80, virtual false, abstract: false, final false
  inline float_t GetRecorderStopTime();

  /// @brief Method GetRecorderStopTime_Injected, addr 0x6e91d18, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetRecorderStopTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetStats, addr 0x6e92480, size 0x134, virtual false, abstract: false, final false
  inline ::StringW GetStats();

  /// @brief Method GetStats_Injected, addr 0x6e925b4, size 0x44, virtual false, abstract: false, final false
  static inline void GetStats_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [Obsolete("GetVector is deprecated.")]
  /// @brief Method GetVector, addr 0x6e940d8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(int32_t id);

  /// [Obsolete("GetVector is deprecated.")]
  /// @brief Method GetVector, addr 0x6e94088, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(::StringW name);

  /// @brief Method HasState, addr 0x6e92218, size 0x98, virtual false, abstract: false, final false
  inline bool HasState(int32_t layerIndex, int32_t stateID);

  /// @brief Method HasState_Injected, addr 0x6e922b0, size 0x54, virtual false, abstract: false, final false
  static inline bool HasState_Injected(::System::IntPtr _unity_self, int32_t layerIndex, int32_t stateID);

  /// [FreeFunction(Name = "AnimatorBindings::InternalGetBehaviours", HasExplicitThis = true)]
  /// @brief Method InternalGetBehaviours, addr 0x6e8e1b0, size 0xbc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehaviours(/* [NotNull] */ ::System::Type* type);

  /// [FreeFunction(Name = "AnimatorBindings::InternalGetBehavioursByKey", HasExplicitThis = true)]
  /// @brief Method InternalGetBehavioursByKey, addr 0x6e8e358, size 0xd4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehavioursByKey(int32_t fullPathHash, int32_t layerIndex, /* [NotNull] */ ::System::Type* type);

  /// @brief Method InternalGetBehavioursByKey_Injected, addr 0x6e8e42c, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehavioursByKey_Injected(::System::IntPtr _unity_self, int32_t fullPathHash, int32_t layerIndex, ::System::Type* type);

  /// @brief Method InternalGetBehaviours_Injected, addr 0x6e8e26c, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehaviours_Injected(::System::IntPtr _unity_self, ::System::Type* type);

  /// @brief Method InterruptMatchTarget, addr 0x6e8fbb8, size 0x8, virtual false, abstract: false, final false
  inline void InterruptMatchTarget();

  /// @brief Method InterruptMatchTarget, addr 0x6e8fbc0, size 0x90, virtual false, abstract: false, final false
  inline void InterruptMatchTarget(/* [DefaultValue("true")] */ bool completeMatch);

  /// @brief Method InterruptMatchTarget_Injected, addr 0x6e8fc50, size 0x44, virtual false, abstract: false, final false
  static inline void InterruptMatchTarget_Injected(::System::IntPtr _unity_self, /* [DefaultValue("true")] */ bool completeMatch);

  /// @brief Method IsBoneTransform, addr 0x6e90d28, size 0xc0, virtual false, abstract: false, final false
  inline bool IsBoneTransform(::UnityEngine::Transform* transform);

  /// @brief Method IsBoneTransform_Injected, addr 0x6e90de8, size 0x44, virtual false, abstract: false, final false
  static inline bool IsBoneTransform_Injected(::System::IntPtr _unity_self, ::System::IntPtr transform);

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// [Obsolete("Use mask and layers to control subset of transfroms in a skeleton.", true)]
  /// @brief Method IsControlled, addr 0x6e90d20, size 0x8, virtual false, abstract: false, final false
  inline bool IsControlled(::UnityEngine::Transform* transform);

  /// @brief Method IsInIKPass, addr 0x6e92770, size 0x80, virtual false, abstract: false, final false
  inline bool IsInIKPass();

  /// @brief Method IsInIKPass_Injected, addr 0x6e927f0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsInIKPass_Injected(::System::IntPtr _unity_self);

  /// @brief Method IsInTransition, addr 0x6e8f2e8, size 0x90, virtual false, abstract: false, final false
  inline bool IsInTransition(int32_t layerIndex);

  /// @brief Method IsInTransition_Injected, addr 0x6e8f378, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInTransition_Injected(::System::IntPtr _unity_self, int32_t layerIndex);

  /// @brief Method IsParameterControlledByCurve, addr 0x6e8b6e4, size 0x4, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(int32_t id);

  /// @brief Method IsParameterControlledByCurve, addr 0x6e8b568, size 0x4, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(::StringW name);

  /// [FreeFunction(Name = "AnimatorBindings::IsParameterControlledByCurveID", HasExplicitThis = true)]
  /// @brief Method IsParameterControlledByCurveID, addr 0x6e8b6e8, size 0x90, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveID(int32_t id);

  /// @brief Method IsParameterControlledByCurveID_Injected, addr 0x6e92d10, size 0x44, virtual false, abstract: false, final false
  static inline bool IsParameterControlledByCurveID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// [FreeFunction(Name = "AnimatorBindings::IsParameterControlledByCurveString", HasExplicitThis = true)]
  /// @brief Method IsParameterControlledByCurveString, addr 0x6e8b56c, size 0x178, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveString(::StringW name);

  /// @brief Method IsParameterControlledByCurveString_Injected, addr 0x6e92ccc, size 0x44, virtual false, abstract: false, final false
  static inline bool IsParameterControlledByCurveString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method MatchTarget, addr 0x6e8fb48, size 0x34, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime);

  /// @brief Method MatchTarget, addr 0x6e8fb7c, size 0x20, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, /* [DefaultValue("1")] */ float_t targetNormalizedTime);

  /// @brief Method MatchTarget, addr 0x6e8fb9c, size 0x1c, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, /* [DefaultValue("1")] */ float_t targetNormalizedTime, /* [DefaultValue("true")] */ bool completeMatch);

  /// @brief Method MatchTarget, addr 0x6e8f9dc, size 0xe0, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method MatchTarget_Injected, addr 0x6e8fabc, size 0x8c, virtual false, abstract: false, final false
  static inline void MatchTarget_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> matchPosition, ::by_ref<::UnityEngine::Quaternion> matchRotation, int32_t targetBodyPart,
                                          ::by_ref<::UnityEngine::MatchTargetWeightMask> weightMask, float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  static inline ::UnityEngine::Animator* New_ctor();

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method OnCullingModeChanged, addr 0x6e932ac, size 0x80, virtual false, abstract: false, final false
  inline void OnCullingModeChanged();

  /// @brief Method OnCullingModeChanged_Injected, addr 0x6e9332c, size 0x3c, virtual false, abstract: false, final false
  static inline void OnCullingModeChanged_Injected(::System::IntPtr _unity_self);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method OnUpdateModeChanged, addr 0x6e931f0, size 0x80, virtual false, abstract: false, final false
  inline void OnUpdateModeChanged();

  /// @brief Method OnUpdateModeChanged_Injected, addr 0x6e93270, size 0x3c, virtual false, abstract: false, final false
  static inline void OnUpdateModeChanged_Injected(::System::IntPtr _unity_self);

  /// @brief Method Play, addr 0x6e908e8, size 0x2c, virtual false, abstract: false, final false
  inline void Play(::StringW stateName);

  /// @brief Method Play, addr 0x6e90870, size 0x38, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, int32_t layer);

  /// @brief Method Play, addr 0x6e908a8, size 0x40, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("float.NegativeInfinity")] */ float_t normalizedTime);

  /// @brief Method Play, addr 0x6e90984, size 0x10, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash);

  /// @brief Method Play, addr 0x6e90978, size 0xc, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, int32_t layer);

  /// [FreeFunction(Name = "AnimatorBindings::Play", HasExplicitThis = true)]
  /// @brief Method Play, addr 0x6e8fef4, size 0xa8, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("float.NegativeInfinity")] */ float_t normalizedTime);

  /// @brief Method PlayInFixedTime, addr 0x6e9071c, size 0x2c, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName);

  /// @brief Method PlayInFixedTime, addr 0x6e906a4, size 0x38, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer);

  /// @brief Method PlayInFixedTime, addr 0x6e906dc, size 0x40, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("float.NegativeInfinity")] */ float_t fixedTime);

  /// @brief Method PlayInFixedTime, addr 0x6e90860, size 0x10, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash);

  /// @brief Method PlayInFixedTime, addr 0x6e90854, size 0xc, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer);

  /// [FreeFunction(Name = "AnimatorBindings::PlayInFixedTime", HasExplicitThis = true)]
  /// @brief Method PlayInFixedTime, addr 0x6e90748, size 0xa8, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, /* [DefaultValue("-1")] */ int32_t layer, /* [DefaultValue("float.NegativeInfinity")] */ float_t fixedTime);

  /// @brief Method PlayInFixedTime_Injected, addr 0x6e907f0, size 0x64, virtual false, abstract: false, final false
  static inline void PlayInFixedTime_Injected(::System::IntPtr _unity_self, int32_t stateNameHash, /* [DefaultValue("-1")] */ int32_t layer,
                                              /* [DefaultValue("float.NegativeInfinity")] */ float_t fixedTime);

  /// @brief Method Play_Injected, addr 0x6e90914, size 0x64, virtual false, abstract: false, final false
  static inline void Play_Injected(::System::IntPtr _unity_self, int32_t stateNameHash, /* [DefaultValue("-1")] */ int32_t layer,
                                   /* [DefaultValue("float.NegativeInfinity")] */ float_t normalizedTime);

  /// @brief Method Rebind, addr 0x6e93500, size 0x8, virtual false, abstract: false, final false
  inline void Rebind();

  /// @brief Method Rebind, addr 0x6e93508, size 0x90, virtual false, abstract: false, final false
  inline void Rebind(bool writeDefaultValues);

  /// @brief Method Rebind_Injected, addr 0x6e93598, size 0x44, virtual false, abstract: false, final false
  static inline void Rebind_Injected(::System::IntPtr _unity_self, bool writeDefaultValues);

  /// @brief Method ResetControllerState, addr 0x6e90994, size 0x90, virtual false, abstract: false, final false
  inline void ResetControllerState(/* [DefaultValue("true")] */ bool resetParameters);

  /// @brief Method ResetControllerState_Injected, addr 0x6e90a24, size 0x44, virtual false, abstract: false, final false
  static inline void ResetControllerState_Injected(::System::IntPtr _unity_self, /* [DefaultValue("true")] */ bool resetParameters);

  /// @brief Method ResetTrigger, addr 0x6e8b4d4, size 0x4, virtual false, abstract: false, final false
  inline void ResetTrigger(int32_t id);

  /// @brief Method ResetTrigger, addr 0x6e8b368, size 0x4, virtual false, abstract: false, final false
  inline void ResetTrigger(::StringW name);

  /// [FreeFunction(Name = "AnimatorBindings::ResetTriggerID", HasExplicitThis = true)]
  /// @brief Method ResetTriggerID, addr 0x6e8b4d8, size 0x90, virtual false, abstract: false, final false
  inline void ResetTriggerID(int32_t id);

  /// @brief Method ResetTriggerID_Injected, addr 0x6e92c88, size 0x44, virtual false, abstract: false, final false
  static inline void ResetTriggerID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// [FreeFunction(Name = "AnimatorBindings::ResetTriggerString", HasExplicitThis = true)]
  /// @brief Method ResetTriggerString, addr 0x6e8b36c, size 0x168, virtual false, abstract: false, final false
  inline void ResetTriggerString(::StringW name);

  /// @brief Method ResetTriggerString_Injected, addr 0x6e92c44, size 0x44, virtual false, abstract: false, final false
  static inline void ResetTriggerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method ResolveHash, addr 0x6e9392c, size 0x140, virtual false, abstract: false, final false
  inline ::StringW ResolveHash(int32_t hash);

  /// @brief Method ResolveHash_Injected, addr 0x6e93a6c, size 0x54, virtual false, abstract: false, final false
  static inline void ResolveHash_Injected(::System::IntPtr _unity_self, int32_t hash, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method SetBoneLocalRotation, addr 0x6e8de30, size 0x80, virtual false, abstract: false, final false
  inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones humanBoneId, ::UnityEngine::Quaternion rotation);

  /// [NativeMethod("SetBoneLocalRotation")]
  /// @brief Method SetBoneLocalRotationInternal, addr 0x6e8deec, size 0xa8, virtual false, abstract: false, final false
  inline void SetBoneLocalRotationInternal(int32_t humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetBoneLocalRotationInternal_Injected, addr 0x6e8df94, size 0x54, virtual false, abstract: false, final false
  static inline void SetBoneLocalRotationInternal_Injected(::System::IntPtr _unity_self, int32_t humanBoneId, ::by_ref<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetBool, addr 0x6e8acac, size 0x4, virtual false, abstract: false, final false
  inline void SetBool(int32_t id, bool value);

  /// @brief Method SetBool, addr 0x6e8ab34, size 0x4, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool value);

  /// [FreeFunction(Name = "AnimatorBindings::SetBoolID", HasExplicitThis = true)]
  /// @brief Method SetBoolID, addr 0x6e8acb0, size 0x98, virtual false, abstract: false, final false
  inline void SetBoolID(int32_t id, bool value);

  /// @brief Method SetBoolID_Injected, addr 0x6e929b0, size 0x54, virtual false, abstract: false, final false
  static inline void SetBoolID_Injected(::System::IntPtr _unity_self, int32_t id, bool value);

  /// [FreeFunction(Name = "AnimatorBindings::SetBoolString", HasExplicitThis = true)]
  /// @brief Method SetBoolString, addr 0x6e8ab38, size 0x174, virtual false, abstract: false, final false
  inline void SetBoolString(::StringW name, bool value);

  /// @brief Method SetBoolString_Injected, addr 0x6e9295c, size 0x54, virtual false, abstract: false, final false
  static inline void SetBoolString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, bool value);

  /// @brief Method SetFloat, addr 0x6e8a7c4, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value);

  /// @brief Method SetFloat, addr 0x6e8a868, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloat, addr 0x6e8a4ac, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x6e8a62c, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// [FreeFunction(Name = "AnimatorBindings::SetFloatID", HasExplicitThis = true)]
  /// @brief Method SetFloatID, addr 0x6e8a7c8, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloatID(int32_t id, float_t value);

  /// [FreeFunction(Name = "AnimatorBindings::SetFloatIDDamp", HasExplicitThis = true)]
  /// @brief Method SetFloatIDDamp, addr 0x6e8a86c, size 0xb8, virtual false, abstract: false, final false
  inline void SetFloatIDDamp(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatIDDamp_Injected, addr 0x6e92dc0, size 0x6c, virtual false, abstract: false, final false
  static inline void SetFloatIDDamp_Injected(::System::IntPtr _unity_self, int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatID_Injected, addr 0x6e92880, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatID_Injected(::System::IntPtr _unity_self, int32_t id, float_t value);

  /// [FreeFunction(Name = "AnimatorBindings::SetFloatString", HasExplicitThis = true)]
  /// @brief Method SetFloatString, addr 0x6e8a4b0, size 0x17c, virtual false, abstract: false, final false
  inline void SetFloatString(::StringW name, float_t value);

  /// [FreeFunction(Name = "AnimatorBindings::SetFloatStringDamp", HasExplicitThis = true)]
  /// @brief Method SetFloatStringDamp, addr 0x6e8a630, size 0x194, virtual false, abstract: false, final false
  inline void SetFloatStringDamp(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatStringDamp_Injected, addr 0x6e92d54, size 0x6c, virtual false, abstract: false, final false
  static inline void SetFloatStringDamp_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatString_Injected, addr 0x6e9282c, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value);

  /// @brief Method SetGoalPosition, addr 0x6e8ce10, size 0xa8, virtual false, abstract: false, final false
  inline void SetGoalPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetGoalPosition_Injected, addr 0x6e8ceb8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Vector3> goalPosition);

  /// @brief Method SetGoalRotation, addr 0x6e8d08c, size 0xa8, virtual false, abstract: false, final false
  inline void SetGoalRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetGoalRotation_Injected, addr 0x6e8d134, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, ::by_ref<::UnityEngine::Quaternion> goalRotation);

  /// @brief Method SetGoalWeightPosition, addr 0x6e8d2bc, size 0xa0, virtual false, abstract: false, final false
  inline void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightPosition_Injected, addr 0x6e8d35c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightRotation, addr 0x6e8d4e4, size 0xa0, virtual false, abstract: false, final false
  inline void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightRotation_Injected, addr 0x6e8d584, size 0x54, virtual false, abstract: false, final false
  static inline void SetGoalWeightRotation_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetHintPosition, addr 0x6e8d754, size 0xa8, virtual false, abstract: false, final false
  inline void SetHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetHintPosition_Injected, addr 0x6e8d7fc, size 0x54, virtual false, abstract: false, final false
  static inline void SetHintPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, ::by_ref<::UnityEngine::Vector3> hintPosition);

  /// @brief Method SetHintWeightPosition, addr 0x6e8d984, size 0xa0, virtual false, abstract: false, final false
  inline void SetHintWeightPosition(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetHintWeightPosition_Injected, addr 0x6e8da24, size 0x54, virtual false, abstract: false, final false
  static inline void SetHintWeightPosition_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetIKHintPosition, addr 0x6e8d704, size 0x50, virtual false, abstract: false, final false
  inline void SetIKHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetIKHintPositionWeight, addr 0x6e8d94c, size 0x38, virtual false, abstract: false, final false
  inline void SetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetIKPosition, addr 0x6e8cdc0, size 0x50, virtual false, abstract: false, final false
  inline void SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetIKPositionWeight, addr 0x6e8d284, size 0x38, virtual false, abstract: false, final false
  inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetIKRotation, addr 0x6e8d034, size 0x58, virtual false, abstract: false, final false
  inline void SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetIKRotationWeight, addr 0x6e8d4ac, size 0x38, virtual false, abstract: false, final false
  inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetInteger, addr 0x6e8b0cc, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(int32_t id, int32_t value);

  /// @brief Method SetInteger, addr 0x6e8af54, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// [FreeFunction(Name = "AnimatorBindings::SetIntegerID", HasExplicitThis = true)]
  /// @brief Method SetIntegerID, addr 0x6e8b0d0, size 0x98, virtual false, abstract: false, final false
  inline void SetIntegerID(int32_t id, int32_t value);

  /// @brief Method SetIntegerID_Injected, addr 0x6e92ae0, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntegerID_Injected(::System::IntPtr _unity_self, int32_t id, int32_t value);

  /// [FreeFunction(Name = "AnimatorBindings::SetIntegerString", HasExplicitThis = true)]
  /// @brief Method SetIntegerString, addr 0x6e8af58, size 0x174, virtual false, abstract: false, final false
  inline void SetIntegerString(::StringW name, int32_t value);

  /// @brief Method SetIntegerString_Injected, addr 0x6e92a8c, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntegerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, int32_t value);

  /// @brief Method SetLayerWeight, addr 0x6e8eaf4, size 0xa0, virtual false, abstract: false, final false
  inline void SetLayerWeight(int32_t layerIndex, float_t weight);

  /// @brief Method SetLayerWeight_Injected, addr 0x6e8eb94, size 0x54, virtual false, abstract: false, final false
  static inline void SetLayerWeight_Injected(::System::IntPtr _unity_self, int32_t layerIndex, float_t weight);

  /// @brief Method SetLookAtPosition, addr 0x6e8da78, size 0x40, virtual false, abstract: false, final false
  inline void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition);

  /// [NativeMethod("SetLookAtPosition")]
  /// @brief Method SetLookAtPositionInternal, addr 0x6e8dab8, size 0x98, virtual false, abstract: false, final false
  inline void SetLookAtPositionInternal(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtPositionInternal_Injected, addr 0x6e8db50, size 0x44, virtual false, abstract: false, final false
  static inline void SetLookAtPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> lookAtPosition);

  /// @brief Method SetLookAtWeight, addr 0x6e8db94, size 0x38, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight);

  /// @brief Method SetLookAtWeight, addr 0x6e8dc8c, size 0x3c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight);

  /// @brief Method SetLookAtWeight, addr 0x6e8dcc8, size 0x48, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight);

  /// @brief Method SetLookAtWeight, addr 0x6e8dd10, size 0x4c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight);

  /// @brief Method SetLookAtWeight, addr 0x6e8dd5c, size 0x58, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, /* [DefaultValue("0.0f")] */ float_t bodyWeight, /* [DefaultValue("1.0f")] */ float_t headWeight, /* [DefaultValue("0.0f")] */ float_t eyesWeight,
                              /* [DefaultValue("0.5f")] */ float_t clampWeight);

  /// [NativeMethod("SetLookAtWeight")]
  /// @brief Method SetLookAtWeightInternal, addr 0x6e8dbcc, size 0xc0, virtual false, abstract: false, final false
  inline void SetLookAtWeightInternal(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeightInternal_Injected, addr 0x6e8ddb4, size 0x7c, virtual false, abstract: false, final false
  static inline void SetLookAtWeightInternal_Injected(::System::IntPtr _unity_self, float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// [Obsolete("SetQuaternion is deprecated.")]
  /// @brief Method SetQuaternion, addr 0x6e941d4, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(int32_t id, ::UnityEngine::Quaternion value);

  /// [Obsolete("SetQuaternion is deprecated.")]
  /// @brief Method SetQuaternion, addr 0x6e941d0, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(::StringW name, ::UnityEngine::Quaternion value);

  /// @brief Method SetTarget, addr 0x6e90a68, size 0xa0, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime);

  /// @brief Method SetTarget_Injected, addr 0x6e90b08, size 0x54, virtual false, abstract: false, final false
  static inline void SetTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime);

  /// @brief Method SetTrigger, addr 0x6e8b2d4, size 0x4, virtual false, abstract: false, final false
  inline void SetTrigger(int32_t id);

  /// @brief Method SetTrigger, addr 0x6e8b168, size 0x4, virtual false, abstract: false, final false
  inline void SetTrigger(::StringW name);

  /// [FreeFunction(Name = "AnimatorBindings::SetTriggerID", HasExplicitThis = true)]
  /// @brief Method SetTriggerID, addr 0x6e8b2d8, size 0x90, virtual false, abstract: false, final false
  inline void SetTriggerID(int32_t id);

  /// @brief Method SetTriggerID_Injected, addr 0x6e92c00, size 0x44, virtual false, abstract: false, final false
  static inline void SetTriggerID_Injected(::System::IntPtr _unity_self, int32_t id);

  /// [FreeFunction(Name = "AnimatorBindings::SetTriggerString", HasExplicitThis = true)]
  /// @brief Method SetTriggerString, addr 0x6e8b16c, size 0x168, virtual false, abstract: false, final false
  inline void SetTriggerString(::StringW name);

  /// @brief Method SetTriggerString_Injected, addr 0x6e92bbc, size 0x44, virtual false, abstract: false, final false
  static inline void SetTriggerString_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [Obsolete("SetVector is deprecated.")]
  /// @brief Method SetVector, addr 0x6e9412c, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t id, ::UnityEngine::Vector3 value);

  /// [Obsolete("SetVector is deprecated.")]
  /// @brief Method SetVector, addr 0x6e94128, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector3 value);

  /// @brief Method StartPlayback, addr 0x6e9172c, size 0x80, virtual false, abstract: false, final false
  inline void StartPlayback();

  /// @brief Method StartPlayback_Injected, addr 0x6e917ac, size 0x3c, virtual false, abstract: false, final false
  static inline void StartPlayback_Injected(::System::IntPtr _unity_self);

  /// @brief Method StartRecording, addr 0x6e91a3c, size 0x90, virtual false, abstract: false, final false
  inline void StartRecording(int32_t frameCount);

  /// @brief Method StartRecording_Injected, addr 0x6e91acc, size 0x44, virtual false, abstract: false, final false
  static inline void StartRecording_Injected(::System::IntPtr _unity_self, int32_t frameCount);

  /// @brief Method StopPlayback, addr 0x6e917e8, size 0x80, virtual false, abstract: false, final false
  inline void StopPlayback();

  /// @brief Method StopPlayback_Injected, addr 0x6e91868, size 0x3c, virtual false, abstract: false, final false
  static inline void StopPlayback_Injected(::System::IntPtr _unity_self);

  /// @brief Method StopRecording, addr 0x6e91b10, size 0x80, virtual false, abstract: false, final false
  inline void StopRecording();

  /// @brief Method StopRecording_Injected, addr 0x6e91b90, size 0x3c, virtual false, abstract: false, final false
  static inline void StopRecording_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod(Name = "ScriptingStringToCRC32", IsThreadSafe = true)]
  /// @brief Method StringToHash, addr 0x6e8ffd8, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t StringToHash(::StringW name);

  /// @brief Method StringToHash_Injected, addr 0x6e92304, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t StringToHash_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [NativeMethod("UpdateWithDelta")]
  /// @brief Method Update, addr 0x6e93424, size 0x90, virtual false, abstract: false, final false
  inline void Update(float_t deltaTime);

  /// @brief Method Update_Injected, addr 0x6e934b4, size 0x4c, virtual false, abstract: false, final false
  static inline void Update_Injected(::System::IntPtr _unity_self, float_t deltaTime);

  /// [NativeConditional("UNITY_EDITOR")]
  /// @brief Method WriteDefaultPose, addr 0x6e93368, size 0x80, virtual false, abstract: false, final false
  inline void WriteDefaultPose();

  /// @brief Method WriteDefaultPose_Injected, addr 0x6e933e8, size 0x3c, virtual false, abstract: false, final false
  static inline void WriteDefaultPose_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "AnimatorBindings::WriteDefaultValues", HasExplicitThis = true)]
  /// @brief Method WriteDefaultValues, addr 0x6e90350, size 0x80, virtual false, abstract: false, final false
  inline void WriteDefaultValues();

  /// @brief Method WriteDefaultValues_Injected, addr 0x6e903d0, size 0x3c, virtual false, abstract: false, final false
  static inline void WriteDefaultValues_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x6e941d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowConstantClipSamplingOptimization, addr 0x6e8c57c, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowConstantClipSamplingOptimization();

  /// @brief Method get_allowConstantClipSamplingOptimization_Injected, addr 0x6e8c5fc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowConstantClipSamplingOptimization_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularVelocity, addr 0x6e8ba20, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x6e8bac0, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_animatePhysics, addr 0x6e8c1a0, size 0x80, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method get_animatePhysics_Injected, addr 0x6e8c220, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_animatePhysics_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_applyRootMotion, addr 0x6e8be80, size 0x80, virtual false, abstract: false, final false
  inline bool get_applyRootMotion();

  /// @brief Method get_applyRootMotion_Injected, addr 0x6e8bf00, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_applyRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_avatar, addr 0x6e911b0, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Avatar> get_avatar();

  /// @brief Method get_avatarRoot, addr 0x6e90e2c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_avatarRoot();

  /// @brief Method get_avatarRoot_Injected, addr 0x6e90f7c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_avatarRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_avatar_Injected, addr 0x6e92340, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_avatar_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bodyPosition, addr 0x6e8c7c8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPosition();

  /// [NativeMethod("GetBodyPosition")]
  /// @brief Method get_bodyPositionInternal, addr 0x6e8c878, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPositionInternal();

  /// @brief Method get_bodyPositionInternal_Injected, addr 0x6e8c9f0, size 0x44, virtual false, abstract: false, final false
  static inline void get_bodyPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_bodyRotation, addr 0x6e8ca78, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotation();

  /// [NativeMethod("GetBodyRotation")]
  /// @brief Method get_bodyRotationInternal, addr 0x6e8ca90, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotationInternal();

  /// @brief Method get_bodyRotationInternal_Injected, addr 0x6e8cc0c, size 0x44, virtual false, abstract: false, final false
  static inline void get_bodyRotationInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_cullingMode, addr 0x6e9159c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorCullingMode get_cullingMode();

  /// @brief Method get_cullingMode_Injected, addr 0x6e9161c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorCullingMode get_cullingMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_deltaPosition, addr 0x6e8b778, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_deltaPosition();

  /// @brief Method get_deltaPosition_Injected, addr 0x6e8b818, size 0x44, virtual false, abstract: false, final false
  static inline void get_deltaPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_deltaRotation, addr 0x6e8b85c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_deltaRotation();

  /// @brief Method get_deltaRotation_Injected, addr 0x6e8b8f8, size 0x44, virtual false, abstract: false, final false
  static inline void get_deltaRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_feetPivotActive, addr 0x6e8f6a4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_feetPivotActive();

  /// @brief Method get_feetPivotActive_Injected, addr 0x6e8f724, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_feetPivotActive_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fireEvents, addr 0x6e93bd0, size 0x80, virtual false, abstract: false, final false
  inline bool get_fireEvents();

  /// @brief Method get_fireEvents_Injected, addr 0x6e93c50, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_fireEvents_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_gravityWeight, addr 0x6e8c70c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_gravityWeight();

  /// @brief Method get_gravityWeight_Injected, addr 0x6e8c78c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_gravityWeight_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("HasBoundPlayables")]
  /// @brief Method get_hasBoundPlayables, addr 0x6e920a0, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasBoundPlayables();

  /// @brief Method get_hasBoundPlayables_Injected, addr 0x6e92120, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasBoundPlayables_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("HasRootMotion")]
  /// @brief Method get_hasRootMotion, addr 0x6e89fb4, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasRootMotion();

  /// @brief Method get_hasRootMotion_Injected, addr 0x6e8a034, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasRootMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasTransformHierarchy, addr 0x6e8c4c0, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasTransformHierarchy();

  /// @brief Method get_hasTransformHierarchy_Injected, addr 0x6e8c540, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasTransformHierarchy_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_humanScale, addr 0x6e8a12c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_humanScale();

  /// @brief Method get_humanScale_Injected, addr 0x6e8a1ac, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_humanScale_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("IsHuman")]
  /// @brief Method get_isHuman, addr 0x6e89ef8, size 0x80, virtual false, abstract: false, final false
  inline bool get_isHuman();

  /// @brief Method get_isHuman_Injected, addr 0x6e89f78, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isHuman_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("IsInitialized")]
  /// @brief Method get_isInitialized, addr 0x6e8a1e8, size 0x80, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_isInitialized_Injected, addr 0x6e8a268, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isInitialized_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("IsMatchingTarget")]
  /// @brief Method get_isMatchingTarget, addr 0x6e8fc94, size 0x80, virtual false, abstract: false, final false
  inline bool get_isMatchingTarget();

  /// @brief Method get_isMatchingTarget_Injected, addr 0x6e8fd14, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isMatchingTarget_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("IsOptimizable")]
  /// @brief Method get_isOptimizable, addr 0x6e89e3c, size 0x80, virtual false, abstract: false, final false
  inline bool get_isOptimizable();

  /// @brief Method get_isOptimizable_Injected, addr 0x6e89ebc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isOptimizable_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("IsRootTranslationOrRotationControllerByCurves")]
  /// @brief Method get_isRootPositionOrRotationControlledByCurves, addr 0x6e8a070, size 0x80, virtual false, abstract: false, final false
  inline bool get_isRootPositionOrRotationControlledByCurves();

  /// @brief Method get_isRootPositionOrRotationControlledByCurves_Injected, addr 0x6e8a0f0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isRootPositionOrRotationControlledByCurves_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_keepAnimatorControllerStateOnDisable, addr 0x6e93d60, size 0x4, virtual false, abstract: false, final false
  inline bool get_keepAnimatorControllerStateOnDisable();

  /// @brief Method get_keepAnimatorStateOnDisable, addr 0x6e93d64, size 0x80, virtual false, abstract: false, final false
  inline bool get_keepAnimatorStateOnDisable();

  /// @brief Method get_keepAnimatorStateOnDisable_Injected, addr 0x6e93e78, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_keepAnimatorStateOnDisable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layerCount, addr 0x6e8e618, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_layerCount();

  /// @brief Method get_layerCount_Injected, addr 0x6e8e698, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_layerCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layersAffectMassCenter, addr 0x6e92e2c, size 0x80, virtual false, abstract: false, final false
  inline bool get_layersAffectMassCenter();

  /// @brief Method get_layersAffectMassCenter_Injected, addr 0x6e92eac, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_layersAffectMassCenter_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_leftFeetBottomHeight, addr 0x6e92fbc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_leftFeetBottomHeight();

  /// @brief Method get_leftFeetBottomHeight_Injected, addr 0x6e9303c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_leftFeetBottomHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearVelocityBlending, addr 0x6e8c010, size 0x80, virtual false, abstract: false, final false
  inline bool get_linearVelocityBlending();

  /// @brief Method get_linearVelocityBlending_Injected, addr 0x6e8c090, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_linearVelocityBlending_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_logWarnings, addr 0x6e926f0, size 0x80, virtual false, abstract: false, final false
  inline bool get_logWarnings();

  /// @brief Method get_logWarnings_Injected, addr 0x6e93ac0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_logWarnings_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_parameterCount, addr 0x6e8f478, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_parameterCount();

  /// @brief Method get_parameterCount_Injected, addr 0x6e8f4f8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_parameterCount_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "AnimatorBindings::GetParameters", HasExplicitThis = true)]
  /// @brief Method get_parameters, addr 0x6e8f3bc, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters();

  /// @brief Method get_parameters_Injected, addr 0x6e8f43c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pivotPosition, addr 0x6e8f8f8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivotPosition();

  /// @brief Method get_pivotPosition_Injected, addr 0x6e8f998, size 0x44, virtual false, abstract: false, final false
  static inline void get_pivotPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_pivotWeight, addr 0x6e8f83c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_pivotWeight();

  /// @brief Method get_pivotWeight_Injected, addr 0x6e8f8bc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_pivotWeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_playableGraph, addr 0x6e925f8, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph get_playableGraph();

  /// @brief Method get_playbackTime, addr 0x6e918a4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_playbackTime();

  /// @brief Method get_playbackTime_Injected, addr 0x6e91924, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_playbackTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_recorderMode, addr 0x6e91d54, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorRecorderMode get_recorderMode();

  /// @brief Method get_recorderMode_Injected, addr 0x6e91dd4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorRecorderMode get_recorderMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_recorderStartTime, addr 0x6e91bcc, size 0x4, virtual false, abstract: false, final false
  inline float_t get_recorderStartTime();

  /// @brief Method get_recorderStopTime, addr 0x6e91c90, size 0x4, virtual false, abstract: false, final false
  inline float_t get_recorderStopTime();

  /// @brief Method get_rightFeetBottomHeight, addr 0x6e93078, size 0x80, virtual false, abstract: false, final false
  inline float_t get_rightFeetBottomHeight();

  /// @brief Method get_rightFeetBottomHeight_Injected, addr 0x6e930f8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_rightFeetBottomHeight_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("GetAvatarPosition")]
  /// @brief Method get_rootPosition, addr 0x6e8bb04, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rootPosition();

  /// @brief Method get_rootPosition_Injected, addr 0x6e8bba4, size 0x44, virtual false, abstract: false, final false
  static inline void get_rootPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// [NativeMethod("GetAvatarRotation")]
  /// @brief Method get_rootRotation, addr 0x6e8bcc4, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rootRotation();

  /// @brief Method get_rootRotation_Injected, addr 0x6e8bd60, size 0x44, virtual false, abstract: false, final false
  static inline void get_rootRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_runtimeAnimatorController, addr 0x6e91e10, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController();

  /// @brief Method get_runtimeAnimatorController_Injected, addr 0x6e91f60, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_runtimeAnimatorController_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_speed, addr 0x6e8fd50, size 0x80, virtual false, abstract: false, final false
  inline float_t get_speed();

  /// @brief Method get_speed_Injected, addr 0x6e8fdd0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_speed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stabilizeFeet, addr 0x6e8e488, size 0x80, virtual false, abstract: false, final false
  inline bool get_stabilizeFeet();

  /// @brief Method get_stabilizeFeet_Injected, addr 0x6e8e508, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_stabilizeFeet_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("SupportsOnAnimatorMove")]
  /// @brief Method get_supportsOnAnimatorMove, addr 0x6e93134, size 0x80, virtual false, abstract: false, final false
  inline bool get_supportsOnAnimatorMove();

  /// @brief Method get_supportsOnAnimatorMove_Injected, addr 0x6e931b4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_supportsOnAnimatorMove_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetPosition, addr 0x6e90b5c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetPosition_Injected, addr 0x6e90bfc, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation, addr 0x6e90c40, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method get_targetRotation_Injected, addr 0x6e90cdc, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_updateMode, addr 0x6e8c330, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorUpdateMode get_updateMode();

  /// @brief Method get_updateMode_Injected, addr 0x6e8c3b0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimatorUpdateMode get_updateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x6e8b93c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x6e8b9dc, size 0x44, virtual false, abstract: false, final false
  static inline void get_velocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_writeDefaultValuesOnDisable, addr 0x6e93ef8, size 0x80, virtual false, abstract: false, final false
  inline bool get_writeDefaultValuesOnDisable();

  /// @brief Method get_writeDefaultValuesOnDisable_Injected, addr 0x6e93f78, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_writeDefaultValuesOnDisable_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_allowConstantClipSamplingOptimization, addr 0x6e8c638, size 0x90, virtual false, abstract: false, final false
  inline void set_allowConstantClipSamplingOptimization(bool value);

  /// @brief Method set_allowConstantClipSamplingOptimization_Injected, addr 0x6e8c6c8, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowConstantClipSamplingOptimization_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_animatePhysics, addr 0x6e8c25c, size 0x90, virtual false, abstract: false, final false
  inline void set_animatePhysics(bool value);

  /// @brief Method set_animatePhysics_Injected, addr 0x6e8c2ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_animatePhysics_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_applyRootMotion, addr 0x6e8bf3c, size 0x90, virtual false, abstract: false, final false
  inline void set_applyRootMotion(bool value);

  /// @brief Method set_applyRootMotion_Injected, addr 0x6e8bfcc, size 0x44, virtual false, abstract: false, final false
  static inline void set_applyRootMotion_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_avatar, addr 0x6e9237c, size 0xc0, virtual false, abstract: false, final false
  inline void set_avatar(::UnityEngine::Avatar* value);

  /// @brief Method set_avatar_Injected, addr 0x6e9243c, size 0x44, virtual false, abstract: false, final false
  static inline void set_avatar_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_bodyPosition, addr 0x6e8c918, size 0x40, virtual false, abstract: false, final false
  inline void set_bodyPosition(::UnityEngine::Vector3 value);

  /// [NativeMethod("SetBodyPosition")]
  /// @brief Method set_bodyPositionInternal, addr 0x6e8c958, size 0x98, virtual false, abstract: false, final false
  inline void set_bodyPositionInternal(::UnityEngine::Vector3 value);

  /// @brief Method set_bodyPositionInternal_Injected, addr 0x6e8ca34, size 0x44, virtual false, abstract: false, final false
  static inline void set_bodyPositionInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_bodyRotation, addr 0x6e8cb2c, size 0x48, virtual false, abstract: false, final false
  inline void set_bodyRotation(::UnityEngine::Quaternion value);

  /// [NativeMethod("SetBodyRotation")]
  /// @brief Method set_bodyRotationInternal, addr 0x6e8cb74, size 0x98, virtual false, abstract: false, final false
  inline void set_bodyRotationInternal(::UnityEngine::Quaternion value);

  /// @brief Method set_bodyRotationInternal_Injected, addr 0x6e8cc50, size 0x44, virtual false, abstract: false, final false
  static inline void set_bodyRotationInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_cullingMode, addr 0x6e91658, size 0x90, virtual false, abstract: false, final false
  inline void set_cullingMode(::UnityEngine::AnimatorCullingMode value);

  /// @brief Method set_cullingMode_Injected, addr 0x6e916e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimatorCullingMode value);

  /// @brief Method set_feetPivotActive, addr 0x6e8f760, size 0x90, virtual false, abstract: false, final false
  inline void set_feetPivotActive(float_t value);

  /// @brief Method set_feetPivotActive_Injected, addr 0x6e8f7f0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_feetPivotActive_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_fireEvents, addr 0x6e93c8c, size 0x90, virtual false, abstract: false, final false
  inline void set_fireEvents(bool value);

  /// @brief Method set_fireEvents_Injected, addr 0x6e93d1c, size 0x44, virtual false, abstract: false, final false
  static inline void set_fireEvents_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_keepAnimatorControllerStateOnDisable, addr 0x6e93de4, size 0x4, virtual false, abstract: false, final false
  inline void set_keepAnimatorControllerStateOnDisable(bool value);

  /// @brief Method set_keepAnimatorStateOnDisable, addr 0x6e93de8, size 0x90, virtual false, abstract: false, final false
  inline void set_keepAnimatorStateOnDisable(bool value);

  /// @brief Method set_keepAnimatorStateOnDisable_Injected, addr 0x6e93eb4, size 0x44, virtual false, abstract: false, final false
  static inline void set_keepAnimatorStateOnDisable_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_layersAffectMassCenter, addr 0x6e92ee8, size 0x90, virtual false, abstract: false, final false
  inline void set_layersAffectMassCenter(bool value);

  /// @brief Method set_layersAffectMassCenter_Injected, addr 0x6e92f78, size 0x44, virtual false, abstract: false, final false
  static inline void set_layersAffectMassCenter_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_linearVelocityBlending, addr 0x6e8c0cc, size 0x90, virtual false, abstract: false, final false
  inline void set_linearVelocityBlending(bool value);

  /// @brief Method set_linearVelocityBlending_Injected, addr 0x6e8c15c, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearVelocityBlending_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_logWarnings, addr 0x6e93afc, size 0x90, virtual false, abstract: false, final false
  inline void set_logWarnings(bool value);

  /// @brief Method set_logWarnings_Injected, addr 0x6e93b8c, size 0x44, virtual false, abstract: false, final false
  static inline void set_logWarnings_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_playbackTime, addr 0x6e91960, size 0x90, virtual false, abstract: false, final false
  inline void set_playbackTime(float_t value);

  /// @brief Method set_playbackTime_Injected, addr 0x6e919f0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_playbackTime_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_recorderStartTime, addr 0x6e91c50, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStartTime(float_t value);

  /// @brief Method set_recorderStopTime, addr 0x6e91d14, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStopTime(float_t value);

  /// [NativeMethod("SetAvatarPosition")]
  /// @brief Method set_rootPosition, addr 0x6e8bbe8, size 0x98, virtual false, abstract: false, final false
  inline void set_rootPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_rootPosition_Injected, addr 0x6e8bc80, size 0x44, virtual false, abstract: false, final false
  static inline void set_rootPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// [NativeMethod("SetAvatarRotation")]
  /// @brief Method set_rootRotation, addr 0x6e8bda4, size 0x98, virtual false, abstract: false, final false
  inline void set_rootRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rootRotation_Injected, addr 0x6e8be3c, size 0x44, virtual false, abstract: false, final false
  static inline void set_rootRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_runtimeAnimatorController, addr 0x6e91f9c, size 0xc0, virtual false, abstract: false, final false
  inline void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* value);

  /// @brief Method set_runtimeAnimatorController_Injected, addr 0x6e9205c, size 0x44, virtual false, abstract: false, final false
  static inline void set_runtimeAnimatorController_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_speed, addr 0x6e8fe0c, size 0x90, virtual false, abstract: false, final false
  inline void set_speed(float_t value);

  /// @brief Method set_speed_Injected, addr 0x6e8fe9c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_speed_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stabilizeFeet, addr 0x6e8e544, size 0x90, virtual false, abstract: false, final false
  inline void set_stabilizeFeet(bool value);

  /// @brief Method set_stabilizeFeet_Injected, addr 0x6e8e5d4, size 0x44, virtual false, abstract: false, final false
  static inline void set_stabilizeFeet_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_updateMode, addr 0x6e8c3ec, size 0x90, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::AnimatorUpdateMode value);

  /// @brief Method set_updateMode_Injected, addr 0x6e8c47c, size 0x44, virtual false, abstract: false, final false
  static inline void set_updateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AnimatorUpdateMode value);

  /// @brief Method set_writeDefaultValuesOnDisable, addr 0x6e93fb4, size 0x90, virtual false, abstract: false, final false
  inline void set_writeDefaultValuesOnDisable(bool value);

  /// @brief Method set_writeDefaultValuesOnDisable_Injected, addr 0x6e94044, size 0x44, virtual false, abstract: false, final false
  static inline void set_writeDefaultValuesOnDisable_Injected(::System::IntPtr _unity_self, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Animator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Animator(Animator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Animator(Animator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20882 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animator) == 0x18, "Size mismatch!");

} // namespace UnityEngine
