#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Animator)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
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
// Type: UnityEngine::Animator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Animator*
class CORDL_TYPE Animator : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_allowConstantClipSamplingOptimization, put = set_allowConstantClipSamplingOptimization)) bool allowConstantClipSamplingOptimization;

  __declspec(property(get = get_angularVelocity))::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_animatePhysics, put = set_animatePhysics)) bool animatePhysics;

  __declspec(property(get = get_applyRootMotion, put = set_applyRootMotion)) bool applyRootMotion;

  __declspec(property(get = get_avatar, put = set_avatar))::UnityW<::UnityEngine::Avatar> avatar;

  __declspec(property(get = get_avatarRoot))::UnityW<::UnityEngine::Transform> avatarRoot;

  __declspec(property(get = get_bodyPosition, put = set_bodyPosition))::UnityEngine::Vector3 bodyPosition;

  __declspec(property(get = get_bodyPositionInternal, put = set_bodyPositionInternal))::UnityEngine::Vector3 bodyPositionInternal;

  __declspec(property(get = get_bodyRotation, put = set_bodyRotation))::UnityEngine::Quaternion bodyRotation;

  __declspec(property(get = get_bodyRotationInternal, put = set_bodyRotationInternal))::UnityEngine::Quaternion bodyRotationInternal;

  __declspec(property(get = get_cullingMode, put = set_cullingMode))::UnityEngine::AnimatorCullingMode cullingMode;

  __declspec(property(get = get_deltaPosition))::UnityEngine::Vector3 deltaPosition;

  __declspec(property(get = get_deltaRotation))::UnityEngine::Quaternion deltaRotation;

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

  __declspec(property(get = get_parameters))::ArrayW<::UnityEngine::AnimatorControllerParameter*, ::Array<::UnityEngine::AnimatorControllerParameter*>*> parameters;

  __declspec(property(get = get_pivotPosition))::UnityEngine::Vector3 pivotPosition;

  __declspec(property(get = get_pivotWeight)) float_t pivotWeight;

  __declspec(property(get = get_playableGraph))::UnityEngine::Playables::PlayableGraph playableGraph;

  __declspec(property(get = get_playbackTime, put = set_playbackTime)) float_t playbackTime;

  __declspec(property(get = get_recorderMode))::UnityEngine::AnimatorRecorderMode recorderMode;

  __declspec(property(get = get_recorderStartTime, put = set_recorderStartTime)) float_t recorderStartTime;

  __declspec(property(get = get_recorderStopTime, put = set_recorderStopTime)) float_t recorderStopTime;

  __declspec(property(get = get_rightFeetBottomHeight)) float_t rightFeetBottomHeight;

  __declspec(property(get = get_rootPosition, put = set_rootPosition))::UnityEngine::Vector3 rootPosition;

  __declspec(property(get = get_rootRotation, put = set_rootRotation))::UnityEngine::Quaternion rootRotation;

  __declspec(property(get = get_runtimeAnimatorController, put = set_runtimeAnimatorController))::UnityW<::UnityEngine::RuntimeAnimatorController> runtimeAnimatorController;

  __declspec(property(get = get_speed, put = set_speed)) float_t speed;

  __declspec(property(get = get_stabilizeFeet, put = set_stabilizeFeet)) bool stabilizeFeet;

  __declspec(property(get = get_supportsOnAnimatorMove)) bool supportsOnAnimatorMove;

  __declspec(property(get = get_targetPosition))::UnityEngine::Vector3 targetPosition;

  __declspec(property(get = get_targetRotation))::UnityEngine::Quaternion targetRotation;

  __declspec(property(get = get_updateMode, put = set_updateMode))::UnityEngine::AnimatorUpdateMode updateMode;

  __declspec(property(get = get_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Method ApplyBuiltinRootMotion, addr 0x2dd9948, size 0x3c, virtual false, abstract: false, final false
  inline void ApplyBuiltinRootMotion();

  /// @brief Method CheckIfInIKPass, addr 0x2dd610c, size 0xd0, virtual false, abstract: false, final false
  inline void CheckIfInIKPass();

  /// @brief Method ClearInternalControllerPlayable, addr 0x2dd9434, size 0x3c, virtual false, abstract: false, final false
  inline void ClearInternalControllerPlayable();

  /// @brief Method ConvertStateMachineBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*, ::Array<::UnityEngine::ScriptableObject*>*> rawObjects);

  /// @brief Method CrossFade, addr 0x2dd8968, size 0x64, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade, addr 0x2dd88f8, size 0x70, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x2dd8888, size 0x70, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade, addr 0x2dd880c, size 0x7c, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFade, addr 0x2dd87f8, size 0x14, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade, addr 0x2dd87e8, size 0x10, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x2dd8738, size 0x8, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade, addr 0x2dd8740, size 0xa8, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x2dd869c, size 0x60, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x2dd8630, size 0x6c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x2dd85c0, size 0x70, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime, addr 0x2dd8368, size 0x7c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x2dd82a0, size 0x8c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x2dd83e4, size 0x98, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x2dd847c, size 0x9c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime, addr 0x2dd8518, size 0xa8, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method EvaluateController, addr 0x2dd9984, size 0x40, virtual false, abstract: false, final false
  inline void EvaluateController();

  /// @brief Method EvaluateController, addr 0x2dd99c4, size 0x4c, virtual false, abstract: false, final false
  inline void EvaluateController(float_t deltaTime);

  /// @brief Method ForceStateNormalizedTime, addr 0x2dd81e8, size 0x54, virtual false, abstract: false, final false
  inline void ForceStateNormalizedTime(float_t normalizedTime);

  /// @brief Method GetAnimatorClipInfoCount, addr 0x2dd789c, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetAnimatorClipInfoCount(int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorClipInfoInternal, addr 0x2dd7ab0, size 0x5c, virtual false, abstract: false, final false
  inline void GetAnimatorClipInfoInternal(int32_t layerIndex, bool isCurrent, ::System::Object* clips);

  /// @brief Method GetAnimatorStateInfo, addr 0x2dd767c, size 0x5c, virtual false, abstract: false, final false
  inline void GetAnimatorStateInfo(int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ByRef<::UnityEngine::AnimatorStateInfo> info);

  /// @brief Method GetAnimatorStateName, addr 0x2dd9a58, size 0x54, virtual false, abstract: false, final false
  inline ::StringW GetAnimatorStateName(int32_t layerIndex, bool current);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x2dd782c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t layerIndex);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x2dd77d8, size 0x54, virtual false, abstract: false, final false
  inline void GetAnimatorTransitionInfo(int32_t layerIndex, ByRef<::UnityEngine::AnimatorTransitionInfo> info);

  /// @brief Method GetBehaviour, addr 0x2dd72e0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> GetBehaviour(::System::Type* type);

  /// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetBehaviour();

  /// @brief Method GetBehaviours, addr 0x2dd7368, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>, ::Array<::UnityW<::UnityEngine::StateMachineBehaviour>>*> GetBehaviours(int32_t fullPathHash, int32_t layerIndex);

  /// @brief Method GetBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetBehaviours();

  /// @brief Method GetBoneTransform, addr 0x2dd8ef8, size 0x108, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones humanBoneId);

  /// @brief Method GetBoneTransformInternal, addr 0x2dd9000, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransformInternal(int32_t humanBoneId);

  /// @brief Method GetBool, addr 0x2dd5198, size 0x44, virtual false, abstract: false, final false
  inline bool GetBool(int32_t id);

  /// @brief Method GetBool, addr 0x2dd5110, size 0x44, virtual false, abstract: false, final false
  inline bool GetBool(::StringW name);

  /// @brief Method GetBoolID, addr 0x2dd51dc, size 0x44, virtual false, abstract: false, final false
  inline bool GetBoolID(int32_t id);

  /// @brief Method GetBoolString, addr 0x2dd5154, size 0x44, virtual false, abstract: false, final false
  inline bool GetBoolString(::StringW name);

  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x2dd7980, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo, ::Array<::UnityEngine::AnimatorClipInfo>*> GetCurrentAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x2dd7a08, size 0xa8, virtual false, abstract: false, final false
  inline void GetCurrentAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x2dd78f0, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetCurrentAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorStateInfo, addr 0x2dd76d8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetCurrentGraph, addr 0x2dd95d4, size 0x44, virtual false, abstract: false, final false
  inline void GetCurrentGraph(ByRef<::UnityEngine::Playables::PlayableGraph> graph);

  /// @brief Method GetCurrentStateName, addr 0x2dd9a10, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetCurrentStateName(int32_t layerIndex);

  /// @brief Method GetFloat, addr 0x2dd4d88, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t id);

  /// @brief Method GetFloat, addr 0x2dd4d00, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloatID, addr 0x2dd4dcc, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloatID(int32_t id);

  /// @brief Method GetFloatString, addr 0x2dd4d44, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloatString(::StringW name);

  /// @brief Method GetGoalPosition, addr 0x2dd6510, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalPosition_Injected, addr 0x2dd6574, size 0x54, virtual false, abstract: false, final false
  inline void GetGoalPosition_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetGoalRotation, addr 0x2dd66f0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetGoalRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalRotation_Injected, addr 0x2dd6750, size 0x54, virtual false, abstract: false, final false
  inline void GetGoalRotation_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method GetGoalWeightPosition, addr 0x2dd68f4, size 0x44, virtual false, abstract: false, final false
  inline float_t GetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightRotation, addr 0x2dd6a2c, size 0x44, virtual false, abstract: false, final false
  inline float_t GetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetHintPosition, addr 0x2dd6b44, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintPosition_Injected, addr 0x2dd6ba8, size 0x54, virtual false, abstract: false, final false
  inline void GetHintPosition_Injected(::UnityEngine::AvatarIKHint hint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetHintWeightPosition, addr 0x2dd6d44, size 0x44, virtual false, abstract: false, final false
  inline float_t GetHintWeightPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKHintPosition, addr 0x2dd6b1c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKHintPositionWeight, addr 0x2dd6cfc, size 0x48, virtual false, abstract: false, final false
  inline float_t GetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetIKPosition, addr 0x2dd64e8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKPositionWeight, addr 0x2dd68ac, size 0x48, virtual false, abstract: false, final false
  inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotation, addr 0x2dd66c8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotationWeight, addr 0x2dd69e4, size 0x48, virtual false, abstract: false, final false
  inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetInteger, addr 0x2dd53f8, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t id);

  /// @brief Method GetInteger, addr 0x2dd5370, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetIntegerID, addr 0x2dd543c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetIntegerID(int32_t id);

  /// @brief Method GetIntegerString, addr 0x2dd53b4, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetIntegerString(::StringW name);

  /// @brief Method GetLayerIndex, addr 0x2dd75a0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetLayerIndex(::StringW layerName);

  /// @brief Method GetLayerName, addr 0x2dd755c, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetLayerName(int32_t layerIndex);

  /// @brief Method GetLayerWeight, addr 0x2dd75e4, size 0x44, virtual false, abstract: false, final false
  inline float_t GetLayerWeight(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo, addr 0x2dd79c4, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo, ::Array<::UnityEngine::AnimatorClipInfo>*> GetNextAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo, addr 0x2dd7b0c, size 0xa8, virtual false, abstract: false, final false
  inline void GetNextAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetNextAnimatorClipInfoCount, addr 0x2dd7938, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetNextAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetNextAnimatorStateInfo, addr 0x2dd7758, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetNextStateName, addr 0x2dd9aac, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetNextStateName(int32_t layerIndex);

  /// @brief Method GetParameter, addr 0x2dd7c70, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t index);

  /// @brief Method GetQuaternion, addr 0x2dd9dd0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(int32_t id);

  /// @brief Method GetQuaternion, addr 0x2dd9d8c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(::StringW name);

  /// @brief Method GetRecorderStartTime, addr 0x2dd9280, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetRecorderStartTime();

  /// @brief Method GetRecorderStopTime, addr 0x2dd92fc, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetRecorderStopTime();

  /// @brief Method GetStats, addr 0x2dd9544, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetStats();

  /// @brief Method GetVector, addr 0x2dd9d40, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(int32_t id);

  /// @brief Method GetVector, addr 0x2dd9cfc, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(::StringW name);

  /// @brief Method HasState, addr 0x2dd9470, size 0x54, virtual false, abstract: false, final false
  inline bool HasState(int32_t layerIndex, int32_t stateID);

  /// @brief Method InternalGetBehaviours, addr 0x2dd7324, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>, ::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehaviours(::System::Type* type);

  /// @brief Method InternalGetBehavioursByKey, addr 0x2dd7444, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>, ::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehavioursByKey(int32_t fullPathHash, int32_t layerIndex,
                                                                                                                                             ::System::Type* type);

  /// @brief Method InterruptMatchTarget, addr 0x2dd80a0, size 0x40, virtual false, abstract: false, final false
  inline void InterruptMatchTarget();

  /// @brief Method InterruptMatchTarget, addr 0x2dd80e0, size 0x44, virtual false, abstract: false, final false
  inline void InterruptMatchTarget(bool completeMatch);

  /// @brief Method IsBoneTransform, addr 0x2dd8e78, size 0x44, virtual false, abstract: false, final false
  inline bool IsBoneTransform(::UnityEngine::Transform* transform);

  /// @brief Method IsControlled, addr 0x2dd8e70, size 0x8, virtual false, abstract: false, final false
  inline bool IsControlled(::UnityEngine::Transform* transform);

  /// @brief Method IsInIKPass, addr 0x2dd9654, size 0x3c, virtual false, abstract: false, final false
  inline bool IsInIKPass();

  /// @brief Method IsInTransition, addr 0x2dd7bb4, size 0x44, virtual false, abstract: false, final false
  inline bool IsInTransition(int32_t layerIndex);

  /// @brief Method IsParameterControlledByCurve, addr 0x2dd5878, size 0x44, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(int32_t id);

  /// @brief Method IsParameterControlledByCurve, addr 0x2dd57f0, size 0x44, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(::StringW name);

  /// @brief Method IsParameterControlledByCurveID, addr 0x2dd58bc, size 0x44, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveID(int32_t id);

  /// @brief Method IsParameterControlledByCurveString, addr 0x2dd5834, size 0x44, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveString(::StringW name);

  /// @brief Method MatchTarget, addr 0x2dd802c, size 0x34, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime);

  /// @brief Method MatchTarget, addr 0x2dd8060, size 0x20, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime);

  /// @brief Method MatchTarget, addr 0x2dd8080, size 0x20, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method MatchTarget, addr 0x2dd7f04, size 0x9c, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method MatchTarget_Injected, addr 0x2dd7fa0, size 0x8c, virtual false, abstract: false, final false
  inline void MatchTarget_Injected(ByRef<::UnityEngine::Vector3> matchPosition, ByRef<::UnityEngine::Quaternion> matchRotation, int32_t targetBodyPart,
                                   ByRef<::UnityEngine::MatchTargetWeightMask> weightMask, float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  static inline ::UnityEngine::Animator* New_ctor();

  /// @brief Method OnCullingModeChanged, addr 0x2dd9800, size 0x3c, virtual false, abstract: false, final false
  inline void OnCullingModeChanged();

  /// @brief Method OnUpdateModeChanged, addr 0x2dd97c4, size 0x3c, virtual false, abstract: false, final false
  inline void OnUpdateModeChanged();

  /// @brief Method Play, addr 0x2dd8c24, size 0x10, virtual false, abstract: false, final false
  inline void Play(::StringW stateName);

  /// @brief Method Play, addr 0x2dd8b88, size 0xc, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, int32_t layer);

  /// @brief Method Play, addr 0x2dd8b94, size 0x90, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, int32_t layer, float_t normalizedTime);

  /// @brief Method Play, addr 0x2dd8c90, size 0x50, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash);

  /// @brief Method Play, addr 0x2dd8c34, size 0x5c, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, int32_t layer);

  /// @brief Method Play, addr 0x2dd823c, size 0x64, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, int32_t layer, float_t normalizedTime);

  /// @brief Method PlayInFixedTime, addr 0x2dd8a68, size 0x10, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName);

  /// @brief Method PlayInFixedTime, addr 0x2dd89cc, size 0xc, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer);

  /// @brief Method PlayInFixedTime, addr 0x2dd89d8, size 0x90, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer, float_t fixedTime);

  /// @brief Method PlayInFixedTime, addr 0x2dd8b38, size 0x50, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash);

  /// @brief Method PlayInFixedTime, addr 0x2dd8adc, size 0x5c, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer);

  /// @brief Method PlayInFixedTime, addr 0x2dd8a78, size 0x64, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer, float_t fixedTime);

  /// @brief Method Rebind, addr 0x2dd98c4, size 0x40, virtual false, abstract: false, final false
  inline void Rebind();

  /// @brief Method Rebind, addr 0x2dd9904, size 0x44, virtual false, abstract: false, final false
  inline void Rebind(bool writeDefaultValues);

  /// @brief Method ResetTrigger, addr 0x2dd5768, size 0x44, virtual false, abstract: false, final false
  inline void ResetTrigger(int32_t id);

  /// @brief Method ResetTrigger, addr 0x2dd56e0, size 0x44, virtual false, abstract: false, final false
  inline void ResetTrigger(::StringW name);

  /// @brief Method ResetTriggerID, addr 0x2dd57ac, size 0x44, virtual false, abstract: false, final false
  inline void ResetTriggerID(int32_t id);

  /// @brief Method ResetTriggerString, addr 0x2dd5724, size 0x44, virtual false, abstract: false, final false
  inline void ResetTriggerString(::StringW name);

  /// @brief Method ResolveHash, addr 0x2dd9af4, size 0x44, virtual false, abstract: false, final false
  inline ::StringW ResolveHash(int32_t hash);

  /// @brief Method SetBoneLocalRotation, addr 0x2dd71b0, size 0x80, virtual false, abstract: false, final false
  inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetBoneLocalRotationInternal, addr 0x2dd7230, size 0x5c, virtual false, abstract: false, final false
  inline void SetBoneLocalRotationInternal(int32_t humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetBoneLocalRotationInternal_Injected, addr 0x2dd728c, size 0x54, virtual false, abstract: false, final false
  inline void SetBoneLocalRotationInternal_Injected(int32_t humanBoneId, ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetBool, addr 0x2dd52c8, size 0x54, virtual false, abstract: false, final false
  inline void SetBool(int32_t id, bool value);

  /// @brief Method SetBool, addr 0x2dd5220, size 0x54, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool value);

  /// @brief Method SetBoolID, addr 0x2dd531c, size 0x54, virtual false, abstract: false, final false
  inline void SetBoolID(int32_t id, bool value);

  /// @brief Method SetBoolString, addr 0x2dd5274, size 0x54, virtual false, abstract: false, final false
  inline void SetBoolString(::StringW name, bool value);

  /// @brief Method SetFloat, addr 0x2dd4f90, size 0x54, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value);

  /// @brief Method SetFloat, addr 0x2dd5038, size 0x6c, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloat, addr 0x2dd4e10, size 0x54, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x2dd4eb8, size 0x6c, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatID, addr 0x2dd4fe4, size 0x54, virtual false, abstract: false, final false
  inline void SetFloatID(int32_t id, float_t value);

  /// @brief Method SetFloatIDDamp, addr 0x2dd50a4, size 0x6c, virtual false, abstract: false, final false
  inline void SetFloatIDDamp(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatString, addr 0x2dd4e64, size 0x54, virtual false, abstract: false, final false
  inline void SetFloatString(::StringW name, float_t value);

  /// @brief Method SetFloatStringDamp, addr 0x2dd4f24, size 0x6c, virtual false, abstract: false, final false
  inline void SetFloatStringDamp(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetGoalPosition, addr 0x2dd6618, size 0x5c, virtual false, abstract: false, final false
  inline void SetGoalPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetGoalPosition_Injected, addr 0x2dd6674, size 0x54, virtual false, abstract: false, final false
  inline void SetGoalPosition_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Vector3> goalPosition);

  /// @brief Method SetGoalRotation, addr 0x2dd67fc, size 0x5c, virtual false, abstract: false, final false
  inline void SetGoalRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetGoalRotation_Injected, addr 0x2dd6858, size 0x54, virtual false, abstract: false, final false
  inline void SetGoalRotation_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Quaternion> goalRotation);

  /// @brief Method SetGoalWeightPosition, addr 0x2dd6990, size 0x54, virtual false, abstract: false, final false
  inline void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightRotation, addr 0x2dd6ac8, size 0x54, virtual false, abstract: false, final false
  inline void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetHintPosition, addr 0x2dd6c4c, size 0x5c, virtual false, abstract: false, final false
  inline void SetHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetHintPosition_Injected, addr 0x2dd6ca8, size 0x54, virtual false, abstract: false, final false
  inline void SetHintPosition_Injected(::UnityEngine::AvatarIKHint hint, ByRef<::UnityEngine::Vector3> hintPosition);

  /// @brief Method SetHintWeightPosition, addr 0x2dd6de0, size 0x54, virtual false, abstract: false, final false
  inline void SetHintWeightPosition(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetIKHintPosition, addr 0x2dd6bfc, size 0x50, virtual false, abstract: false, final false
  inline void SetIKHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetIKHintPositionWeight, addr 0x2dd6d88, size 0x58, virtual false, abstract: false, final false
  inline void SetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetIKPosition, addr 0x2dd65c8, size 0x50, virtual false, abstract: false, final false
  inline void SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetIKPositionWeight, addr 0x2dd6938, size 0x58, virtual false, abstract: false, final false
  inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetIKRotation, addr 0x2dd67a4, size 0x58, virtual false, abstract: false, final false
  inline void SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetIKRotationWeight, addr 0x2dd6a70, size 0x58, virtual false, abstract: false, final false
  inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetInteger, addr 0x2dd5528, size 0x54, virtual false, abstract: false, final false
  inline void SetInteger(int32_t id, int32_t value);

  /// @brief Method SetInteger, addr 0x2dd5480, size 0x54, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetIntegerID, addr 0x2dd557c, size 0x54, virtual false, abstract: false, final false
  inline void SetIntegerID(int32_t id, int32_t value);

  /// @brief Method SetIntegerString, addr 0x2dd54d4, size 0x54, virtual false, abstract: false, final false
  inline void SetIntegerString(::StringW name, int32_t value);

  /// @brief Method SetLayerWeight, addr 0x2dd7628, size 0x54, virtual false, abstract: false, final false
  inline void SetLayerWeight(int32_t layerIndex, float_t weight);

  /// @brief Method SetLookAtPosition, addr 0x2dd6e34, size 0x40, virtual false, abstract: false, final false
  inline void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtPositionInternal, addr 0x2dd6e74, size 0x54, virtual false, abstract: false, final false
  inline void SetLookAtPositionInternal(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtPositionInternal_Injected, addr 0x2dd6ec8, size 0x44, virtual false, abstract: false, final false
  inline void SetLookAtPositionInternal_Injected(ByRef<::UnityEngine::Vector3> lookAtPosition);

  /// @brief Method SetLookAtWeight, addr 0x2dd6f0c, size 0x60, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight);

  /// @brief Method SetLookAtWeight, addr 0x2dd6fe8, size 0x64, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight);

  /// @brief Method SetLookAtWeight, addr 0x2dd704c, size 0x70, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight);

  /// @brief Method SetLookAtWeight, addr 0x2dd70bc, size 0x74, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight);

  /// @brief Method SetLookAtWeight, addr 0x2dd7130, size 0x80, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeightInternal, addr 0x2dd6f6c, size 0x7c, virtual false, abstract: false, final false
  inline void SetLookAtWeightInternal(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetQuaternion, addr 0x2dd9e18, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(int32_t id, ::UnityEngine::Quaternion value);

  /// @brief Method SetQuaternion, addr 0x2dd9e14, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(::StringW name, ::UnityEngine::Quaternion value);

  /// @brief Method SetTarget, addr 0x2dd8ce0, size 0x54, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime);

  /// @brief Method SetTrigger, addr 0x2dd5658, size 0x44, virtual false, abstract: false, final false
  inline void SetTrigger(int32_t id);

  /// @brief Method SetTrigger, addr 0x2dd55d0, size 0x44, virtual false, abstract: false, final false
  inline void SetTrigger(::StringW name);

  /// @brief Method SetTriggerID, addr 0x2dd569c, size 0x44, virtual false, abstract: false, final false
  inline void SetTriggerID(int32_t id);

  /// @brief Method SetTriggerString, addr 0x2dd5614, size 0x44, virtual false, abstract: false, final false
  inline void SetTriggerString(::StringW name);

  /// @brief Method SetVector, addr 0x2dd9d88, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t id, ::UnityEngine::Vector3 value);

  /// @brief Method SetVector, addr 0x2dd9d84, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector3 value);

  /// @brief Method StartPlayback, addr 0x2dd90c4, size 0x3c, virtual false, abstract: false, final false
  inline void StartPlayback();

  /// @brief Method StartRecording, addr 0x2dd91c4, size 0x44, virtual false, abstract: false, final false
  inline void StartRecording(int32_t frameCount);

  /// @brief Method StopPlayback, addr 0x2dd9100, size 0x3c, virtual false, abstract: false, final false
  inline void StopPlayback();

  /// @brief Method StopRecording, addr 0x2dd9208, size 0x3c, virtual false, abstract: false, final false
  inline void StopRecording();

  /// @brief Method StringToHash, addr 0x2dd832c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t StringToHash(::StringW name);

  /// @brief Method Update, addr 0x2dd9878, size 0x4c, virtual false, abstract: false, final false
  inline void Update(float_t deltaTime);

  /// @brief Method WriteDefaultPose, addr 0x2dd983c, size 0x3c, virtual false, abstract: false, final false
  inline void WriteDefaultPose();

  /// @brief Method WriteDefaultValues, addr 0x2dd86fc, size 0x3c, virtual false, abstract: false, final false
  inline void WriteDefaultValues();

  /// @brief Method .ctor, addr 0x2dd9e1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowConstantClipSamplingOptimization, addr 0x2dd6038, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowConstantClipSamplingOptimization();

  /// @brief Method get_angularVelocity, addr 0x2dd5adc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x2dd5b38, size 0x44, virtual false, abstract: false, final false
  inline void get_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_animatePhysics, addr 0x2dd5ee8, size 0x48, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method get_applyRootMotion, addr 0x2dd5de8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_applyRootMotion();

  /// @brief Method get_avatar, addr 0x2dd94c4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Avatar> get_avatar();

  /// @brief Method get_avatarRoot, addr 0x2dd8ebc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_avatarRoot();

  /// @brief Method get_bodyPosition, addr 0x2dd60f4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPosition();

  /// @brief Method get_bodyPositionInternal, addr 0x2dd61dc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPositionInternal();

  /// @brief Method get_bodyPositionInternal_Injected, addr 0x2dd62cc, size 0x44, virtual false, abstract: false, final false
  inline void get_bodyPositionInternal_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_bodyRotation, addr 0x2dd6354, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotation();

  /// @brief Method get_bodyRotationInternal, addr 0x2dd636c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotationInternal();

  /// @brief Method get_bodyRotationInternal_Injected, addr 0x2dd6460, size 0x44, virtual false, abstract: false, final false
  inline void get_bodyRotationInternal_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_cullingMode, addr 0x2dd9044, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorCullingMode get_cullingMode();

  /// @brief Method get_deltaPosition, addr 0x2dd5900, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_deltaPosition();

  /// @brief Method get_deltaPosition_Injected, addr 0x2dd595c, size 0x44, virtual false, abstract: false, final false
  inline void get_deltaPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_deltaRotation, addr 0x2dd59a0, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_deltaRotation();

  /// @brief Method get_deltaRotation_Injected, addr 0x2dd59f8, size 0x44, virtual false, abstract: false, final false
  inline void get_deltaRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_feetPivotActive, addr 0x2dd7da0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_feetPivotActive();

  /// @brief Method get_fireEvents, addr 0x2dd9b7c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_fireEvents();

  /// @brief Method get_gravityWeight, addr 0x2dd60b8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_gravityWeight();

  /// @brief Method get_hasBoundPlayables, addr 0x2dd93f8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasBoundPlayables();

  /// @brief Method get_hasRootMotion, addr 0x2dd4c10, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasRootMotion();

  /// @brief Method get_hasTransformHierarchy, addr 0x2dd5ffc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasTransformHierarchy();

  /// @brief Method get_humanScale, addr 0x2dd4c88, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_humanScale();

  /// @brief Method get_isHuman, addr 0x2dd4bd4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isHuman();

  /// @brief Method get_isInitialized, addr 0x2dd4cc4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_isMatchingTarget, addr 0x2dd8124, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isMatchingTarget();

  /// @brief Method get_isOptimizable, addr 0x2dd4b98, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isOptimizable();

  /// @brief Method get_isRootPositionOrRotationControlledByCurves, addr 0x2dd4c4c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isRootPositionOrRotationControlledByCurves();

  /// @brief Method get_keepAnimatorControllerStateOnDisable, addr 0x2dd9bfc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_keepAnimatorControllerStateOnDisable();

  /// @brief Method get_keepAnimatorStateOnDisable, addr 0x2dd9c38, size 0x3c, virtual false, abstract: false, final false
  inline bool get_keepAnimatorStateOnDisable();

  /// @brief Method get_layerCount, addr 0x2dd7520, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_layerCount();

  /// @brief Method get_layersAffectMassCenter, addr 0x2dd9690, size 0x3c, virtual false, abstract: false, final false
  inline bool get_layersAffectMassCenter();

  /// @brief Method get_leftFeetBottomHeight, addr 0x2dd9710, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_leftFeetBottomHeight();

  /// @brief Method get_linearVelocityBlending, addr 0x2dd5e68, size 0x3c, virtual false, abstract: false, final false
  inline bool get_linearVelocityBlending();

  /// @brief Method get_logWarnings, addr 0x2dd9618, size 0x3c, virtual false, abstract: false, final false
  inline bool get_logWarnings();

  /// @brief Method get_parameterCount, addr 0x2dd7c34, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_parameterCount();

  /// @brief Method get_parameters, addr 0x2dd7bf8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*, ::Array<::UnityEngine::AnimatorControllerParameter*>*> get_parameters();

  /// @brief Method get_pivotPosition, addr 0x2dd7e64, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivotPosition();

  /// @brief Method get_pivotPosition_Injected, addr 0x2dd7ec0, size 0x44, virtual false, abstract: false, final false
  inline void get_pivotPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_pivotWeight, addr 0x2dd7e28, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_pivotWeight();

  /// @brief Method get_playableGraph, addr 0x2dd9580, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph get_playableGraph();

  /// @brief Method get_playbackTime, addr 0x2dd913c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_playbackTime();

  /// @brief Method get_recorderMode, addr 0x2dd933c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorRecorderMode get_recorderMode();

  /// @brief Method get_recorderStartTime, addr 0x2dd9244, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_recorderStartTime();

  /// @brief Method get_recorderStopTime, addr 0x2dd92c0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_recorderStopTime();

  /// @brief Method get_rightFeetBottomHeight, addr 0x2dd974c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_rightFeetBottomHeight();

  /// @brief Method get_rootPosition, addr 0x2dd5b7c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rootPosition();

  /// @brief Method get_rootPosition_Injected, addr 0x2dd5bd8, size 0x44, virtual false, abstract: false, final false
  inline void get_rootPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rootRotation, addr 0x2dd5cb4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rootRotation();

  /// @brief Method get_rootRotation_Injected, addr 0x2dd5d0c, size 0x44, virtual false, abstract: false, final false
  inline void get_rootRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_runtimeAnimatorController, addr 0x2dd9378, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController();

  /// @brief Method get_speed, addr 0x2dd8160, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_speed();

  /// @brief Method get_stabilizeFeet, addr 0x2dd74a0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_stabilizeFeet();

  /// @brief Method get_supportsOnAnimatorMove, addr 0x2dd9788, size 0x3c, virtual false, abstract: false, final false
  inline bool get_supportsOnAnimatorMove();

  /// @brief Method get_targetPosition, addr 0x2dd8d34, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetPosition_Injected, addr 0x2dd8d90, size 0x44, virtual false, abstract: false, final false
  inline void get_targetPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation, addr 0x2dd8dd4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method get_targetRotation_Injected, addr 0x2dd8e2c, size 0x44, virtual false, abstract: false, final false
  inline void get_targetRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_updateMode, addr 0x2dd5f30, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorUpdateMode get_updateMode();

  /// @brief Method get_velocity, addr 0x2dd5a3c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x2dd5a98, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_allowConstantClipSamplingOptimization, addr 0x2dd6074, size 0x44, virtual false, abstract: false, final false
  inline void set_allowConstantClipSamplingOptimization(bool value);

  /// @brief Method set_animatePhysics, addr 0x2dd5f6c, size 0x4c, virtual false, abstract: false, final false
  inline void set_animatePhysics(bool value);

  /// @brief Method set_applyRootMotion, addr 0x2dd5e24, size 0x44, virtual false, abstract: false, final false
  inline void set_applyRootMotion(bool value);

  /// @brief Method set_avatar, addr 0x2dd9500, size 0x44, virtual false, abstract: false, final false
  inline void set_avatar(::UnityEngine::Avatar* value);

  /// @brief Method set_bodyPosition, addr 0x2dd6238, size 0x40, virtual false, abstract: false, final false
  inline void set_bodyPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_bodyPositionInternal, addr 0x2dd6278, size 0x54, virtual false, abstract: false, final false
  inline void set_bodyPositionInternal(::UnityEngine::Vector3 value);

  /// @brief Method set_bodyPositionInternal_Injected, addr 0x2dd6310, size 0x44, virtual false, abstract: false, final false
  inline void set_bodyPositionInternal_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_bodyRotation, addr 0x2dd63c4, size 0x48, virtual false, abstract: false, final false
  inline void set_bodyRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_bodyRotationInternal, addr 0x2dd640c, size 0x54, virtual false, abstract: false, final false
  inline void set_bodyRotationInternal(::UnityEngine::Quaternion value);

  /// @brief Method set_bodyRotationInternal_Injected, addr 0x2dd64a4, size 0x44, virtual false, abstract: false, final false
  inline void set_bodyRotationInternal_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_cullingMode, addr 0x2dd9080, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMode(::UnityEngine::AnimatorCullingMode value);

  /// @brief Method set_feetPivotActive, addr 0x2dd7ddc, size 0x4c, virtual false, abstract: false, final false
  inline void set_feetPivotActive(float_t value);

  /// @brief Method set_fireEvents, addr 0x2dd9bb8, size 0x44, virtual false, abstract: false, final false
  inline void set_fireEvents(bool value);

  /// @brief Method set_keepAnimatorControllerStateOnDisable, addr 0x2dd9c74, size 0x44, virtual false, abstract: false, final false
  inline void set_keepAnimatorControllerStateOnDisable(bool value);

  /// @brief Method set_keepAnimatorStateOnDisable, addr 0x2dd9cb8, size 0x44, virtual false, abstract: false, final false
  inline void set_keepAnimatorStateOnDisable(bool value);

  /// @brief Method set_layersAffectMassCenter, addr 0x2dd96cc, size 0x44, virtual false, abstract: false, final false
  inline void set_layersAffectMassCenter(bool value);

  /// @brief Method set_linearVelocityBlending, addr 0x2dd5ea4, size 0x44, virtual false, abstract: false, final false
  inline void set_linearVelocityBlending(bool value);

  /// @brief Method set_logWarnings, addr 0x2dd9b38, size 0x44, virtual false, abstract: false, final false
  inline void set_logWarnings(bool value);

  /// @brief Method set_playbackTime, addr 0x2dd9178, size 0x4c, virtual false, abstract: false, final false
  inline void set_playbackTime(float_t value);

  /// @brief Method set_recorderStartTime, addr 0x2dd92bc, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStartTime(float_t value);

  /// @brief Method set_recorderStopTime, addr 0x2dd9338, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStopTime(float_t value);

  /// @brief Method set_rootPosition, addr 0x2dd5c1c, size 0x54, virtual false, abstract: false, final false
  inline void set_rootPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_rootPosition_Injected, addr 0x2dd5c70, size 0x44, virtual false, abstract: false, final false
  inline void set_rootPosition_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_rootRotation, addr 0x2dd5d50, size 0x54, virtual false, abstract: false, final false
  inline void set_rootRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rootRotation_Injected, addr 0x2dd5da4, size 0x44, virtual false, abstract: false, final false
  inline void set_rootRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_runtimeAnimatorController, addr 0x2dd93b4, size 0x44, virtual false, abstract: false, final false
  inline void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* value);

  /// @brief Method set_speed, addr 0x2dd819c, size 0x4c, virtual false, abstract: false, final false
  inline void set_speed(float_t value);

  /// @brief Method set_stabilizeFeet, addr 0x2dd74dc, size 0x44, virtual false, abstract: false, final false
  inline void set_stabilizeFeet(bool value);

  /// @brief Method set_updateMode, addr 0x2dd5fb8, size 0x44, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::AnimatorUpdateMode value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animator, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Animator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animator*, "UnityEngine", "Animator");
