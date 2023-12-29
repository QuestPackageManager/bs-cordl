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
namespace UnityEngine {
struct AnimatorClipInfo;
}
namespace UnityEngine {
class StateMachineBehaviour;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct MatchTargetWeightMask;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct AnimatorCullingMode;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
struct HumanBodyBones;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
struct StateInfoIndex;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct AvatarIKHint;
}
namespace UnityEngine {
class AnimatorControllerParameter;
}
namespace UnityEngine {
struct AnimatorUpdateMode;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
struct AvatarTarget;
}
namespace UnityEngine {
struct AnimatorTransitionInfo;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
struct AnimatorRecorderMode;
}
namespace UnityEngine {
struct Quaternion;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10115))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15109))
// CS Name: ::UnityEngine::Animator*
class CORDL_TYPE Animator : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_isOptimizable)) bool isOptimizable;

  __declspec(property(get = get_isHuman)) bool isHuman;

  __declspec(property(get = get_hasRootMotion)) bool hasRootMotion;

  __declspec(property(get = get_isRootPositionOrRotationControlledByCurves)) bool isRootPositionOrRotationControlledByCurves;

  __declspec(property(get = get_humanScale)) float_t humanScale;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_deltaPosition))::UnityEngine::Vector3 deltaPosition;

  __declspec(property(get = get_deltaRotation))::UnityEngine::Quaternion deltaRotation;

  __declspec(property(get = get_velocity))::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_angularVelocity))::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_rootPosition, put = set_rootPosition))::UnityEngine::Vector3 rootPosition;

  __declspec(property(get = get_rootRotation, put = set_rootRotation))::UnityEngine::Quaternion rootRotation;

  __declspec(property(get = get_applyRootMotion, put = set_applyRootMotion)) bool applyRootMotion;

  __declspec(property(get = get_linearVelocityBlending, put = set_linearVelocityBlending)) bool linearVelocityBlending;

  __declspec(property(get = get_animatePhysics, put = set_animatePhysics)) bool animatePhysics;

  __declspec(property(get = get_updateMode, put = set_updateMode))::UnityEngine::AnimatorUpdateMode updateMode;

  __declspec(property(get = get_hasTransformHierarchy)) bool hasTransformHierarchy;

  __declspec(property(get = get_allowConstantClipSamplingOptimization, put = set_allowConstantClipSamplingOptimization)) bool allowConstantClipSamplingOptimization;

  __declspec(property(get = get_gravityWeight)) float_t gravityWeight;

  __declspec(property(get = get_bodyPosition, put = set_bodyPosition))::UnityEngine::Vector3 bodyPosition;

  __declspec(property(get = get_bodyPositionInternal, put = set_bodyPositionInternal))::UnityEngine::Vector3 bodyPositionInternal;

  __declspec(property(get = get_bodyRotation, put = set_bodyRotation))::UnityEngine::Quaternion bodyRotation;

  __declspec(property(get = get_bodyRotationInternal, put = set_bodyRotationInternal))::UnityEngine::Quaternion bodyRotationInternal;

  __declspec(property(get = get_stabilizeFeet, put = set_stabilizeFeet)) bool stabilizeFeet;

  __declspec(property(get = get_layerCount)) int32_t layerCount;

  __declspec(property(get = get_parameters))::ArrayW<::UnityEngine::AnimatorControllerParameter*, ::Array<::UnityEngine::AnimatorControllerParameter*>*> parameters;

  __declspec(property(get = get_parameterCount)) int32_t parameterCount;

  __declspec(property(get = get_feetPivotActive, put = set_feetPivotActive)) float_t feetPivotActive;

  __declspec(property(get = get_pivotWeight)) float_t pivotWeight;

  __declspec(property(get = get_pivotPosition))::UnityEngine::Vector3 pivotPosition;

  __declspec(property(get = get_isMatchingTarget)) bool isMatchingTarget;

  __declspec(property(get = get_speed, put = set_speed)) float_t speed;

  __declspec(property(get = get_targetPosition))::UnityEngine::Vector3 targetPosition;

  __declspec(property(get = get_targetRotation))::UnityEngine::Quaternion targetRotation;

  __declspec(property(get = get_avatarRoot))::UnityEngine::Transform* avatarRoot;

  __declspec(property(get = get_cullingMode, put = set_cullingMode))::UnityEngine::AnimatorCullingMode cullingMode;

  __declspec(property(get = get_playbackTime, put = set_playbackTime)) float_t playbackTime;

  __declspec(property(get = get_recorderStartTime, put = set_recorderStartTime)) float_t recorderStartTime;

  __declspec(property(get = get_recorderStopTime, put = set_recorderStopTime)) float_t recorderStopTime;

  __declspec(property(get = get_recorderMode))::UnityEngine::AnimatorRecorderMode recorderMode;

  __declspec(property(get = get_runtimeAnimatorController, put = set_runtimeAnimatorController))::UnityEngine::RuntimeAnimatorController* runtimeAnimatorController;

  __declspec(property(get = get_hasBoundPlayables)) bool hasBoundPlayables;

  __declspec(property(get = get_avatar, put = set_avatar))::UnityEngine::Avatar* avatar;

  __declspec(property(get = get_playableGraph))::UnityEngine::Playables::PlayableGraph playableGraph;

  __declspec(property(get = get_layersAffectMassCenter, put = set_layersAffectMassCenter)) bool layersAffectMassCenter;

  __declspec(property(get = get_leftFeetBottomHeight)) float_t leftFeetBottomHeight;

  __declspec(property(get = get_rightFeetBottomHeight)) float_t rightFeetBottomHeight;

  __declspec(property(get = get_supportsOnAnimatorMove)) bool supportsOnAnimatorMove;

  __declspec(property(get = get_logWarnings, put = set_logWarnings)) bool logWarnings;

  __declspec(property(get = get_fireEvents, put = set_fireEvents)) bool fireEvents;

  __declspec(property(get = get_keepAnimatorControllerStateOnDisable, put = set_keepAnimatorControllerStateOnDisable)) bool keepAnimatorControllerStateOnDisable;

  __declspec(property(get = get_keepAnimatorStateOnDisable, put = set_keepAnimatorStateOnDisable)) bool keepAnimatorStateOnDisable;

  /// @brief Method get_isOptimizable addr 0x2b2aa80 size 0x3c virtual false final false
  inline bool get_isOptimizable();

  /// @brief Method get_isHuman addr 0x2b2aabc size 0x3c virtual false final false
  inline bool get_isHuman();

  /// @brief Method get_hasRootMotion addr 0x2b2aaf8 size 0x3c virtual false final false
  inline bool get_hasRootMotion();

  /// @brief Method get_isRootPositionOrRotationControlledByCurves addr 0x2b2ab34 size 0x3c virtual false final false
  inline bool get_isRootPositionOrRotationControlledByCurves();

  /// @brief Method get_humanScale addr 0x2b2ab70 size 0x3c virtual false final false
  inline float_t get_humanScale();

  /// @brief Method get_isInitialized addr 0x2b2abac size 0x3c virtual false final false
  inline bool get_isInitialized();

  /// @brief Method GetFloat addr 0x2b2abe8 size 0x44 virtual false final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloat addr 0x2b2ac70 size 0x44 virtual false final false
  inline float_t GetFloat(int32_t id);

  /// @brief Method SetFloat addr 0x2b2acf8 size 0x54 virtual false final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat addr 0x2b2ada0 size 0x6c virtual false final false
  inline void SetFloat(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloat addr 0x2b2ae78 size 0x54 virtual false final false
  inline void SetFloat(int32_t id, float_t value);

  /// @brief Method SetFloat addr 0x2b2af20 size 0x6c virtual false final false
  inline void SetFloat(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method GetBool addr 0x2b2aff8 size 0x44 virtual false final false
  inline bool GetBool(::StringW name);

  /// @brief Method GetBool addr 0x2b2b080 size 0x44 virtual false final false
  inline bool GetBool(int32_t id);

  /// @brief Method SetBool addr 0x2b2b108 size 0x54 virtual false final false
  inline void SetBool(::StringW name, bool value);

  /// @brief Method SetBool addr 0x2b2b1b0 size 0x54 virtual false final false
  inline void SetBool(int32_t id, bool value);

  /// @brief Method GetInteger addr 0x2b2b258 size 0x44 virtual false final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetInteger addr 0x2b2b2e0 size 0x44 virtual false final false
  inline int32_t GetInteger(int32_t id);

  /// @brief Method SetInteger addr 0x2b2b368 size 0x54 virtual false final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetInteger addr 0x2b2b410 size 0x54 virtual false final false
  inline void SetInteger(int32_t id, int32_t value);

  /// @brief Method SetTrigger addr 0x2b2b4b8 size 0x44 virtual false final false
  inline void SetTrigger(::StringW name);

  /// @brief Method SetTrigger addr 0x2b2b540 size 0x44 virtual false final false
  inline void SetTrigger(int32_t id);

  /// @brief Method ResetTrigger addr 0x2b2b5c8 size 0x44 virtual false final false
  inline void ResetTrigger(::StringW name);

  /// @brief Method ResetTrigger addr 0x2b2b650 size 0x44 virtual false final false
  inline void ResetTrigger(int32_t id);

  /// @brief Method IsParameterControlledByCurve addr 0x2b2b6d8 size 0x44 virtual false final false
  inline bool IsParameterControlledByCurve(::StringW name);

  /// @brief Method IsParameterControlledByCurve addr 0x2b2b760 size 0x44 virtual false final false
  inline bool IsParameterControlledByCurve(int32_t id);

  /// @brief Method get_deltaPosition addr 0x2b2b7e8 size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_deltaPosition();

  /// @brief Method get_deltaRotation addr 0x2b2b888 size 0x58 virtual false final false
  inline ::UnityEngine::Quaternion get_deltaRotation();

  /// @brief Method get_velocity addr 0x2b2b924 size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_angularVelocity addr 0x2b2b9c4 size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_rootPosition addr 0x2b2ba64 size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_rootPosition();

  /// @brief Method set_rootPosition addr 0x2b2bb04 size 0x54 virtual false final false
  inline void set_rootPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_rootRotation addr 0x2b2bb9c size 0x58 virtual false final false
  inline ::UnityEngine::Quaternion get_rootRotation();

  /// @brief Method set_rootRotation addr 0x2b2bc38 size 0x54 virtual false final false
  inline void set_rootRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_applyRootMotion addr 0x2b2bcd0 size 0x3c virtual false final false
  inline bool get_applyRootMotion();

  /// @brief Method set_applyRootMotion addr 0x2b2bd0c size 0x44 virtual false final false
  inline void set_applyRootMotion(bool value);

  /// @brief Method get_linearVelocityBlending addr 0x2b2bd50 size 0x3c virtual false final false
  inline bool get_linearVelocityBlending();

  /// @brief Method set_linearVelocityBlending addr 0x2b2bd8c size 0x44 virtual false final false
  inline void set_linearVelocityBlending(bool value);

  /// @brief Method get_animatePhysics addr 0x2b2bdd0 size 0x48 virtual false final false
  inline bool get_animatePhysics();

  /// @brief Method set_animatePhysics addr 0x2b2be54 size 0x4c virtual false final false
  inline void set_animatePhysics(bool value);

  /// @brief Method get_updateMode addr 0x2b2be18 size 0x3c virtual false final false
  inline ::UnityEngine::AnimatorUpdateMode get_updateMode();

  /// @brief Method set_updateMode addr 0x2b2bea0 size 0x44 virtual false final false
  inline void set_updateMode(::UnityEngine::AnimatorUpdateMode value);

  /// @brief Method get_hasTransformHierarchy addr 0x2b2bee4 size 0x3c virtual false final false
  inline bool get_hasTransformHierarchy();

  /// @brief Method get_allowConstantClipSamplingOptimization addr 0x2b2bf20 size 0x3c virtual false final false
  inline bool get_allowConstantClipSamplingOptimization();

  /// @brief Method set_allowConstantClipSamplingOptimization addr 0x2b2bf5c size 0x44 virtual false final false
  inline void set_allowConstantClipSamplingOptimization(bool value);

  /// @brief Method get_gravityWeight addr 0x2b2bfa0 size 0x3c virtual false final false
  inline float_t get_gravityWeight();

  /// @brief Method get_bodyPosition addr 0x2b2bfdc size 0x18 virtual false final false
  inline ::UnityEngine::Vector3 get_bodyPosition();

  /// @brief Method set_bodyPosition addr 0x2b2c120 size 0x40 virtual false final false
  inline void set_bodyPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_bodyPositionInternal addr 0x2b2c0c4 size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_bodyPositionInternal();

  /// @brief Method set_bodyPositionInternal addr 0x2b2c160 size 0x54 virtual false final false
  inline void set_bodyPositionInternal(::UnityEngine::Vector3 value);

  /// @brief Method get_bodyRotation addr 0x2b2c23c size 0x18 virtual false final false
  inline ::UnityEngine::Quaternion get_bodyRotation();

  /// @brief Method set_bodyRotation addr 0x2b2c2ac size 0x48 virtual false final false
  inline void set_bodyRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_bodyRotationInternal addr 0x2b2c254 size 0x58 virtual false final false
  inline ::UnityEngine::Quaternion get_bodyRotationInternal();

  /// @brief Method set_bodyRotationInternal addr 0x2b2c2f4 size 0x54 virtual false final false
  inline void set_bodyRotationInternal(::UnityEngine::Quaternion value);

  /// @brief Method GetIKPosition addr 0x2b2c3d0 size 0x28 virtual false final false
  inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalPosition addr 0x2b2c3f8 size 0x64 virtual false final false
  inline ::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetIKPosition addr 0x2b2c4b0 size 0x50 virtual false final false
  inline void SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetGoalPosition addr 0x2b2c500 size 0x5c virtual false final false
  inline void SetGoalPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method GetIKRotation addr 0x2b2c5b0 size 0x28 virtual false final false
  inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalRotation addr 0x2b2c5d8 size 0x60 virtual false final false
  inline ::UnityEngine::Quaternion GetGoalRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetIKRotation addr 0x2b2c68c size 0x58 virtual false final false
  inline void SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetGoalRotation addr 0x2b2c6e4 size 0x5c virtual false final false
  inline void SetGoalRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method GetIKPositionWeight addr 0x2b2c794 size 0x48 virtual false final false
  inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightPosition addr 0x2b2c7dc size 0x44 virtual false final false
  inline float_t GetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetIKPositionWeight addr 0x2b2c820 size 0x58 virtual false final false
  inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightPosition addr 0x2b2c878 size 0x54 virtual false final false
  inline void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method GetIKRotationWeight addr 0x2b2c8cc size 0x48 virtual false final false
  inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightRotation addr 0x2b2c914 size 0x44 virtual false final false
  inline float_t GetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetIKRotationWeight addr 0x2b2c958 size 0x58 virtual false final false
  inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightRotation addr 0x2b2c9b0 size 0x54 virtual false final false
  inline void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method GetIKHintPosition addr 0x2b2ca04 size 0x28 virtual false final false
  inline ::UnityEngine::Vector3 GetIKHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintPosition addr 0x2b2ca2c size 0x64 virtual false final false
  inline ::UnityEngine::Vector3 GetHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method SetIKHintPosition addr 0x2b2cae4 size 0x50 virtual false final false
  inline void SetIKHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetHintPosition addr 0x2b2cb34 size 0x5c virtual false final false
  inline void SetHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method GetIKHintPositionWeight addr 0x2b2cbe4 size 0x48 virtual false final false
  inline float_t GetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintWeightPosition addr 0x2b2cc2c size 0x44 virtual false final false
  inline float_t GetHintWeightPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method SetIKHintPositionWeight addr 0x2b2cc70 size 0x58 virtual false final false
  inline void SetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetHintWeightPosition addr 0x2b2ccc8 size 0x54 virtual false final false
  inline void SetHintWeightPosition(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetLookAtPosition addr 0x2b2cd1c size 0x40 virtual false final false
  inline void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtPositionInternal addr 0x2b2cd5c size 0x54 virtual false final false
  inline void SetLookAtPositionInternal(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtWeight addr 0x2b2cdf4 size 0x60 virtual false final false
  inline void SetLookAtWeight(float_t weight);

  /// @brief Method SetLookAtWeight addr 0x2b2ced0 size 0x64 virtual false final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight);

  /// @brief Method SetLookAtWeight addr 0x2b2cf34 size 0x70 virtual false final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight);

  /// @brief Method SetLookAtWeight addr 0x2b2cfa4 size 0x74 virtual false final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight);

  /// @brief Method SetLookAtWeight addr 0x2b2d018 size 0x80 virtual false final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeightInternal addr 0x2b2ce54 size 0x7c virtual false final false
  inline void SetLookAtWeightInternal(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetBoneLocalRotation addr 0x2b2d098 size 0x80 virtual false final false
  inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetBoneLocalRotationInternal addr 0x2b2d118 size 0x5c virtual false final false
  inline void SetBoneLocalRotationInternal(int32_t humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method GetBehaviour addr 0x2b2d1c8 size 0x44 virtual false final false
  inline ::UnityEngine::ScriptableObject* GetBehaviour(::System::Type* type);

  /// @brief Method GetBehaviour addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetBehaviour();

  /// @brief Method ConvertStateMachineBehaviour addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*, ::Array<::UnityEngine::ScriptableObject*>*> rawObjects);

  /// @brief Method GetBehaviours addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetBehaviours();

  /// @brief Method InternalGetBehaviours addr 0x2b2d20c size 0x44 virtual false final false
  inline ::ArrayW<::UnityEngine::ScriptableObject*, ::Array<::UnityEngine::ScriptableObject*>*> InternalGetBehaviours(::System::Type* type);

  /// @brief Method GetBehaviours addr 0x2b2d250 size 0xdc virtual false final false
  inline ::ArrayW<::UnityEngine::StateMachineBehaviour*, ::Array<::UnityEngine::StateMachineBehaviour*>*> GetBehaviours(int32_t fullPathHash, int32_t layerIndex);

  /// @brief Method InternalGetBehavioursByKey addr 0x2b2d32c size 0x5c virtual false final false
  inline ::ArrayW<::UnityEngine::ScriptableObject*, ::Array<::UnityEngine::ScriptableObject*>*> InternalGetBehavioursByKey(int32_t fullPathHash, int32_t layerIndex, ::System::Type* type);

  /// @brief Method get_stabilizeFeet addr 0x2b2d388 size 0x3c virtual false final false
  inline bool get_stabilizeFeet();

  /// @brief Method set_stabilizeFeet addr 0x2b2d3c4 size 0x44 virtual false final false
  inline void set_stabilizeFeet(bool value);

  /// @brief Method get_layerCount addr 0x2b2d408 size 0x3c virtual false final false
  inline int32_t get_layerCount();

  /// @brief Method GetLayerName addr 0x2b2d444 size 0x44 virtual false final false
  inline ::StringW GetLayerName(int32_t layerIndex);

  /// @brief Method GetLayerIndex addr 0x2b2d488 size 0x44 virtual false final false
  inline int32_t GetLayerIndex(::StringW layerName);

  /// @brief Method GetLayerWeight addr 0x2b2d4cc size 0x44 virtual false final false
  inline float_t GetLayerWeight(int32_t layerIndex);

  /// @brief Method SetLayerWeight addr 0x2b2d510 size 0x54 virtual false final false
  inline void SetLayerWeight(int32_t layerIndex, float_t weight);

  /// @brief Method GetAnimatorStateInfo addr 0x2b2d564 size 0x5c virtual false final false
  inline void GetAnimatorStateInfo(int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ByRef<::UnityEngine::AnimatorStateInfo> info);

  /// @brief Method GetCurrentAnimatorStateInfo addr 0x2b2d5c0 size 0x80 virtual false final false
  inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetNextAnimatorStateInfo addr 0x2b2d640 size 0x80 virtual false final false
  inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetAnimatorTransitionInfo addr 0x2b2d6c0 size 0x54 virtual false final false
  inline void GetAnimatorTransitionInfo(int32_t layerIndex, ByRef<::UnityEngine::AnimatorTransitionInfo> info);

  /// @brief Method GetAnimatorTransitionInfo addr 0x2b2d714 size 0x70 virtual false final false
  inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t layerIndex);

  /// @brief Method GetAnimatorClipInfoCount addr 0x2b2d784 size 0x54 virtual false final false
  inline int32_t GetAnimatorClipInfoCount(int32_t layerIndex, bool current);

  /// @brief Method GetCurrentAnimatorClipInfoCount addr 0x2b2d7d8 size 0x48 virtual false final false
  inline int32_t GetCurrentAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfoCount addr 0x2b2d820 size 0x48 virtual false final false
  inline int32_t GetNextAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo addr 0x2b2d868 size 0x44 virtual false final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo, ::Array<::UnityEngine::AnimatorClipInfo>*> GetCurrentAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo addr 0x2b2d8ac size 0x44 virtual false final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo, ::Array<::UnityEngine::AnimatorClipInfo>*> GetNextAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo addr 0x2b2d8f0 size 0xa8 virtual false final false
  inline void GetCurrentAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetAnimatorClipInfoInternal addr 0x2b2d998 size 0x5c virtual false final false
  inline void GetAnimatorClipInfoInternal(int32_t layerIndex, bool isCurrent, ::System::Object* clips);

  /// @brief Method GetNextAnimatorClipInfo addr 0x2b2d9f4 size 0xa8 virtual false final false
  inline void GetNextAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method IsInTransition addr 0x2b2da9c size 0x44 virtual false final false
  inline bool IsInTransition(int32_t layerIndex);

  /// @brief Method get_parameters addr 0x2b2dae0 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*, ::Array<::UnityEngine::AnimatorControllerParameter*>*> get_parameters();

  /// @brief Method get_parameterCount addr 0x2b2db1c size 0x3c virtual false final false
  inline int32_t get_parameterCount();

  /// @brief Method GetParameter addr 0x2b2db58 size 0x130 virtual false final false
  inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t index);

  /// @brief Method get_feetPivotActive addr 0x2b2dc88 size 0x3c virtual false final false
  inline float_t get_feetPivotActive();

  /// @brief Method set_feetPivotActive addr 0x2b2dcc4 size 0x4c virtual false final false
  inline void set_feetPivotActive(float_t value);

  /// @brief Method get_pivotWeight addr 0x2b2dd10 size 0x3c virtual false final false
  inline float_t get_pivotWeight();

  /// @brief Method get_pivotPosition addr 0x2b2dd4c size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_pivotPosition();

  /// @brief Method MatchTarget addr 0x2b2ddec size 0x9c virtual false final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method MatchTarget addr 0x2b2df14 size 0x34 virtual false final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime);

  /// @brief Method MatchTarget addr 0x2b2df48 size 0x20 virtual false final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime);

  /// @brief Method MatchTarget addr 0x2b2df68 size 0x20 virtual false final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method InterruptMatchTarget addr 0x2b2df88 size 0x40 virtual false final false
  inline void InterruptMatchTarget();

  /// @brief Method InterruptMatchTarget addr 0x2b2dfc8 size 0x44 virtual false final false
  inline void InterruptMatchTarget(bool completeMatch);

  /// @brief Method get_isMatchingTarget addr 0x2b2e00c size 0x3c virtual false final false
  inline bool get_isMatchingTarget();

  /// @brief Method get_speed addr 0x2b2e048 size 0x3c virtual false final false
  inline float_t get_speed();

  /// @brief Method set_speed addr 0x2b2e084 size 0x4c virtual false final false
  inline void set_speed(float_t value);

  /// @brief Method ForceStateNormalizedTime addr 0x2b2e0d0 size 0x54 virtual false final false
  inline void ForceStateNormalizedTime(float_t normalizedTime);

  /// @brief Method CrossFadeInFixedTime addr 0x2b2e188 size 0x8c virtual false final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime addr 0x2b2e2cc size 0x98 virtual false final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime addr 0x2b2e364 size 0x9c virtual false final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime addr 0x2b2e400 size 0xa8 virtual false final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime addr 0x2b2e4a8 size 0x70 virtual false final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime addr 0x2b2e518 size 0x6c virtual false final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime addr 0x2b2e584 size 0x60 virtual false final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime addr 0x2b2e250 size 0x7c virtual false final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method WriteDefaultValues addr 0x2b2e5e4 size 0x3c virtual false final false
  inline void WriteDefaultValues();

  /// @brief Method CrossFade addr 0x2b2e620 size 0x8 virtual false final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade addr 0x2b2e6d0 size 0x10 virtual false final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade addr 0x2b2e6e0 size 0x14 virtual false final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade addr 0x2b2e628 size 0xa8 virtual false final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFade addr 0x2b2e6f4 size 0x7c virtual false final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFade addr 0x2b2e770 size 0x70 virtual false final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade addr 0x2b2e7e0 size 0x70 virtual false final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade addr 0x2b2e850 size 0x64 virtual false final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration);

  /// @brief Method PlayInFixedTime addr 0x2b2e8b4 size 0xc virtual false final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer);

  /// @brief Method PlayInFixedTime addr 0x2b2e950 size 0x10 virtual false final false
  inline void PlayInFixedTime(::StringW stateName);

  /// @brief Method PlayInFixedTime addr 0x2b2e8c0 size 0x90 virtual false final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer, float_t fixedTime);

  /// @brief Method PlayInFixedTime addr 0x2b2e960 size 0x64 virtual false final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer, float_t fixedTime);

  /// @brief Method PlayInFixedTime addr 0x2b2e9c4 size 0x5c virtual false final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer);

  /// @brief Method PlayInFixedTime addr 0x2b2ea20 size 0x50 virtual false final false
  inline void PlayInFixedTime(int32_t stateNameHash);

  /// @brief Method Play addr 0x2b2ea70 size 0xc virtual false final false
  inline void Play(::StringW stateName, int32_t layer);

  /// @brief Method Play addr 0x2b2eb0c size 0x10 virtual false final false
  inline void Play(::StringW stateName);

  /// @brief Method Play addr 0x2b2ea7c size 0x90 virtual false final false
  inline void Play(::StringW stateName, int32_t layer, float_t normalizedTime);

  /// @brief Method Play addr 0x2b2e124 size 0x64 virtual false final false
  inline void Play(int32_t stateNameHash, int32_t layer, float_t normalizedTime);

  /// @brief Method Play addr 0x2b2eb1c size 0x5c virtual false final false
  inline void Play(int32_t stateNameHash, int32_t layer);

  /// @brief Method Play addr 0x2b2eb78 size 0x50 virtual false final false
  inline void Play(int32_t stateNameHash);

  /// @brief Method SetTarget addr 0x2b2ebc8 size 0x54 virtual false final false
  inline void SetTarget(::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime);

  /// @brief Method get_targetPosition addr 0x2b2ec1c size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetRotation addr 0x2b2ecbc size 0x58 virtual false final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method IsControlled addr 0x2b2ed58 size 0x8 virtual false final false
  inline bool IsControlled(::UnityEngine::Transform* transform);

  /// @brief Method IsBoneTransform addr 0x2b2ed60 size 0x44 virtual false final false
  inline bool IsBoneTransform(::UnityEngine::Transform* transform);

  /// @brief Method get_avatarRoot addr 0x2b2eda4 size 0x3c virtual false final false
  inline ::UnityEngine::Transform* get_avatarRoot();

  /// @brief Method GetBoneTransform addr 0x2b2ede0 size 0x108 virtual false final false
  inline ::UnityEngine::Transform* GetBoneTransform(::UnityEngine::HumanBodyBones humanBoneId);

  /// @brief Method GetBoneTransformInternal addr 0x2b2eee8 size 0x44 virtual false final false
  inline ::UnityEngine::Transform* GetBoneTransformInternal(int32_t humanBoneId);

  /// @brief Method get_cullingMode addr 0x2b2ef2c size 0x3c virtual false final false
  inline ::UnityEngine::AnimatorCullingMode get_cullingMode();

  /// @brief Method set_cullingMode addr 0x2b2ef68 size 0x44 virtual false final false
  inline void set_cullingMode(::UnityEngine::AnimatorCullingMode value);

  /// @brief Method StartPlayback addr 0x2b2efac size 0x3c virtual false final false
  inline void StartPlayback();

  /// @brief Method StopPlayback addr 0x2b2efe8 size 0x3c virtual false final false
  inline void StopPlayback();

  /// @brief Method get_playbackTime addr 0x2b2f024 size 0x3c virtual false final false
  inline float_t get_playbackTime();

  /// @brief Method set_playbackTime addr 0x2b2f060 size 0x4c virtual false final false
  inline void set_playbackTime(float_t value);

  /// @brief Method StartRecording addr 0x2b2f0ac size 0x44 virtual false final false
  inline void StartRecording(int32_t frameCount);

  /// @brief Method StopRecording addr 0x2b2f0f0 size 0x3c virtual false final false
  inline void StopRecording();

  /// @brief Method get_recorderStartTime addr 0x2b2f12c size 0x3c virtual false final false
  inline float_t get_recorderStartTime();

  /// @brief Method set_recorderStartTime addr 0x2b2f1a4 size 0x4 virtual false final false
  inline void set_recorderStartTime(float_t value);

  /// @brief Method GetRecorderStartTime addr 0x2b2f168 size 0x3c virtual false final false
  inline float_t GetRecorderStartTime();

  /// @brief Method get_recorderStopTime addr 0x2b2f1a8 size 0x3c virtual false final false
  inline float_t get_recorderStopTime();

  /// @brief Method set_recorderStopTime addr 0x2b2f220 size 0x4 virtual false final false
  inline void set_recorderStopTime(float_t value);

  /// @brief Method GetRecorderStopTime addr 0x2b2f1e4 size 0x3c virtual false final false
  inline float_t GetRecorderStopTime();

  /// @brief Method get_recorderMode addr 0x2b2f224 size 0x3c virtual false final false
  inline ::UnityEngine::AnimatorRecorderMode get_recorderMode();

  /// @brief Method get_runtimeAnimatorController addr 0x2b2f260 size 0x3c virtual false final false
  inline ::UnityEngine::RuntimeAnimatorController* get_runtimeAnimatorController();

  /// @brief Method set_runtimeAnimatorController addr 0x2b2f29c size 0x44 virtual false final false
  inline void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* value);

  /// @brief Method get_hasBoundPlayables addr 0x2b2f2e0 size 0x3c virtual false final false
  inline bool get_hasBoundPlayables();

  /// @brief Method ClearInternalControllerPlayable addr 0x2b2f31c size 0x3c virtual false final false
  inline void ClearInternalControllerPlayable();

  /// @brief Method HasState addr 0x2b2f358 size 0x54 virtual false final false
  inline bool HasState(int32_t layerIndex, int32_t stateID);

  /// @brief Method StringToHash addr 0x2b2e214 size 0x3c virtual false final false
  static inline int32_t StringToHash(::StringW name);

  /// @brief Method get_avatar addr 0x2b2f3ac size 0x3c virtual false final false
  inline ::UnityEngine::Avatar* get_avatar();

  /// @brief Method set_avatar addr 0x2b2f3e8 size 0x44 virtual false final false
  inline void set_avatar(::UnityEngine::Avatar* value);

  /// @brief Method GetStats addr 0x2b2f42c size 0x3c virtual false final false
  inline ::StringW GetStats();

  /// @brief Method get_playableGraph addr 0x2b2f468 size 0x54 virtual false final false
  inline ::UnityEngine::Playables::PlayableGraph get_playableGraph();

  /// @brief Method GetCurrentGraph addr 0x2b2f4bc size 0x44 virtual false final false
  inline void GetCurrentGraph(ByRef<::UnityEngine::Playables::PlayableGraph> graph);

  /// @brief Method CheckIfInIKPass addr 0x2b2bff4 size 0xd0 virtual false final false
  inline void CheckIfInIKPass();

  /// @brief Method IsInIKPass addr 0x2b2f53c size 0x3c virtual false final false
  inline bool IsInIKPass();

  /// @brief Method SetFloatString addr 0x2b2ad4c size 0x54 virtual false final false
  inline void SetFloatString(::StringW name, float_t value);

  /// @brief Method SetFloatID addr 0x2b2aecc size 0x54 virtual false final false
  inline void SetFloatID(int32_t id, float_t value);

  /// @brief Method GetFloatString addr 0x2b2ac2c size 0x44 virtual false final false
  inline float_t GetFloatString(::StringW name);

  /// @brief Method GetFloatID addr 0x2b2acb4 size 0x44 virtual false final false
  inline float_t GetFloatID(int32_t id);

  /// @brief Method SetBoolString addr 0x2b2b15c size 0x54 virtual false final false
  inline void SetBoolString(::StringW name, bool value);

  /// @brief Method SetBoolID addr 0x2b2b204 size 0x54 virtual false final false
  inline void SetBoolID(int32_t id, bool value);

  /// @brief Method GetBoolString addr 0x2b2b03c size 0x44 virtual false final false
  inline bool GetBoolString(::StringW name);

  /// @brief Method GetBoolID addr 0x2b2b0c4 size 0x44 virtual false final false
  inline bool GetBoolID(int32_t id);

  /// @brief Method SetIntegerString addr 0x2b2b3bc size 0x54 virtual false final false
  inline void SetIntegerString(::StringW name, int32_t value);

  /// @brief Method SetIntegerID addr 0x2b2b464 size 0x54 virtual false final false
  inline void SetIntegerID(int32_t id, int32_t value);

  /// @brief Method GetIntegerString addr 0x2b2b29c size 0x44 virtual false final false
  inline int32_t GetIntegerString(::StringW name);

  /// @brief Method GetIntegerID addr 0x2b2b324 size 0x44 virtual false final false
  inline int32_t GetIntegerID(int32_t id);

  /// @brief Method SetTriggerString addr 0x2b2b4fc size 0x44 virtual false final false
  inline void SetTriggerString(::StringW name);

  /// @brief Method SetTriggerID addr 0x2b2b584 size 0x44 virtual false final false
  inline void SetTriggerID(int32_t id);

  /// @brief Method ResetTriggerString addr 0x2b2b60c size 0x44 virtual false final false
  inline void ResetTriggerString(::StringW name);

  /// @brief Method ResetTriggerID addr 0x2b2b694 size 0x44 virtual false final false
  inline void ResetTriggerID(int32_t id);

  /// @brief Method IsParameterControlledByCurveString addr 0x2b2b71c size 0x44 virtual false final false
  inline bool IsParameterControlledByCurveString(::StringW name);

  /// @brief Method IsParameterControlledByCurveID addr 0x2b2b7a4 size 0x44 virtual false final false
  inline bool IsParameterControlledByCurveID(int32_t id);

  /// @brief Method SetFloatStringDamp addr 0x2b2ae0c size 0x6c virtual false final false
  inline void SetFloatStringDamp(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatIDDamp addr 0x2b2af8c size 0x6c virtual false final false
  inline void SetFloatIDDamp(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method get_layersAffectMassCenter addr 0x2b2f578 size 0x3c virtual false final false
  inline bool get_layersAffectMassCenter();

  /// @brief Method set_layersAffectMassCenter addr 0x2b2f5b4 size 0x44 virtual false final false
  inline void set_layersAffectMassCenter(bool value);

  /// @brief Method get_leftFeetBottomHeight addr 0x2b2f5f8 size 0x3c virtual false final false
  inline float_t get_leftFeetBottomHeight();

  /// @brief Method get_rightFeetBottomHeight addr 0x2b2f634 size 0x3c virtual false final false
  inline float_t get_rightFeetBottomHeight();

  /// @brief Method get_supportsOnAnimatorMove addr 0x2b2f670 size 0x3c virtual false final false
  inline bool get_supportsOnAnimatorMove();

  /// @brief Method OnUpdateModeChanged addr 0x2b2f6ac size 0x3c virtual false final false
  inline void OnUpdateModeChanged();

  /// @brief Method OnCullingModeChanged addr 0x2b2f6e8 size 0x3c virtual false final false
  inline void OnCullingModeChanged();

  /// @brief Method WriteDefaultPose addr 0x2b2f724 size 0x3c virtual false final false
  inline void WriteDefaultPose();

  /// @brief Method Update addr 0x2b2f760 size 0x4c virtual false final false
  inline void Update(float_t deltaTime);

  /// @brief Method Rebind addr 0x2b2f7ac size 0x40 virtual false final false
  inline void Rebind();

  /// @brief Method Rebind addr 0x2b2f7ec size 0x44 virtual false final false
  inline void Rebind(bool writeDefaultValues);

  /// @brief Method ApplyBuiltinRootMotion addr 0x2b2f830 size 0x3c virtual false final false
  inline void ApplyBuiltinRootMotion();

  /// @brief Method EvaluateController addr 0x2b2f86c size 0x40 virtual false final false
  inline void EvaluateController();

  /// @brief Method EvaluateController addr 0x2b2f8ac size 0x4c virtual false final false
  inline void EvaluateController(float_t deltaTime);

  /// @brief Method GetCurrentStateName addr 0x2b2f8f8 size 0x48 virtual false final false
  inline ::StringW GetCurrentStateName(int32_t layerIndex);

  /// @brief Method GetNextStateName addr 0x2b2f994 size 0x48 virtual false final false
  inline ::StringW GetNextStateName(int32_t layerIndex);

  /// @brief Method GetAnimatorStateName addr 0x2b2f940 size 0x54 virtual false final false
  inline ::StringW GetAnimatorStateName(int32_t layerIndex, bool current);

  /// @brief Method ResolveHash addr 0x2b2f9dc size 0x44 virtual false final false
  inline ::StringW ResolveHash(int32_t hash);

  /// @brief Method get_logWarnings addr 0x2b2f500 size 0x3c virtual false final false
  inline bool get_logWarnings();

  /// @brief Method set_logWarnings addr 0x2b2fa20 size 0x44 virtual false final false
  inline void set_logWarnings(bool value);

  /// @brief Method get_fireEvents addr 0x2b2fa64 size 0x3c virtual false final false
  inline bool get_fireEvents();

  /// @brief Method set_fireEvents addr 0x2b2faa0 size 0x44 virtual false final false
  inline void set_fireEvents(bool value);

  /// @brief Method get_keepAnimatorControllerStateOnDisable addr 0x2b2fae4 size 0x3c virtual false final false
  inline bool get_keepAnimatorControllerStateOnDisable();

  /// @brief Method set_keepAnimatorControllerStateOnDisable addr 0x2b2fb5c size 0x44 virtual false final false
  inline void set_keepAnimatorControllerStateOnDisable(bool value);

  /// @brief Method get_keepAnimatorStateOnDisable addr 0x2b2fb20 size 0x3c virtual false final false
  inline bool get_keepAnimatorStateOnDisable();

  /// @brief Method set_keepAnimatorStateOnDisable addr 0x2b2fba0 size 0x44 virtual false final false
  inline void set_keepAnimatorStateOnDisable(bool value);

  /// @brief Method GetVector addr 0x2b2fbe4 size 0x44 virtual false final false
  inline ::UnityEngine::Vector3 GetVector(::StringW name);

  /// @brief Method GetVector addr 0x2b2fc28 size 0x44 virtual false final false
  inline ::UnityEngine::Vector3 GetVector(int32_t id);

  /// @brief Method SetVector addr 0x2b2fc6c size 0x4 virtual false final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector3 value);

  /// @brief Method SetVector addr 0x2b2fc70 size 0x4 virtual false final false
  inline void SetVector(int32_t id, ::UnityEngine::Vector3 value);

  /// @brief Method GetQuaternion addr 0x2b2fc74 size 0x44 virtual false final false
  inline ::UnityEngine::Quaternion GetQuaternion(::StringW name);

  /// @brief Method GetQuaternion addr 0x2b2fcb8 size 0x44 virtual false final false
  inline ::UnityEngine::Quaternion GetQuaternion(int32_t id);

  /// @brief Method SetQuaternion addr 0x2b2fcfc size 0x4 virtual false final false
  inline void SetQuaternion(::StringW name, ::UnityEngine::Quaternion value);

  /// @brief Method SetQuaternion addr 0x2b2fd00 size 0x4 virtual false final false
  inline void SetQuaternion(int32_t id, ::UnityEngine::Quaternion value);

  static inline ::UnityEngine::Animator* New_ctor();

  /// @brief Method .ctor addr 0x2b2fd04 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_deltaPosition_Injected addr 0x2b2b844 size 0x44 virtual false final false
  inline void get_deltaPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_deltaRotation_Injected addr 0x2b2b8e0 size 0x44 virtual false final false
  inline void get_deltaRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_velocity_Injected addr 0x2b2b980 size 0x44 virtual false final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_angularVelocity_Injected addr 0x2b2ba20 size 0x44 virtual false final false
  inline void get_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rootPosition_Injected addr 0x2b2bac0 size 0x44 virtual false final false
  inline void get_rootPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_rootPosition_Injected addr 0x2b2bb58 size 0x44 virtual false final false
  inline void set_rootPosition_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_rootRotation_Injected addr 0x2b2bbf4 size 0x44 virtual false final false
  inline void get_rootRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_rootRotation_Injected addr 0x2b2bc8c size 0x44 virtual false final false
  inline void set_rootRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method get_bodyPositionInternal_Injected addr 0x2b2c1b4 size 0x44 virtual false final false
  inline void get_bodyPositionInternal_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_bodyPositionInternal_Injected addr 0x2b2c1f8 size 0x44 virtual false final false
  inline void set_bodyPositionInternal_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_bodyRotationInternal_Injected addr 0x2b2c348 size 0x44 virtual false final false
  inline void get_bodyRotationInternal_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_bodyRotationInternal_Injected addr 0x2b2c38c size 0x44 virtual false final false
  inline void set_bodyRotationInternal_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method GetGoalPosition_Injected addr 0x2b2c45c size 0x54 virtual false final false
  inline void GetGoalPosition_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method SetGoalPosition_Injected addr 0x2b2c55c size 0x54 virtual false final false
  inline void SetGoalPosition_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Vector3> goalPosition);

  /// @brief Method GetGoalRotation_Injected addr 0x2b2c638 size 0x54 virtual false final false
  inline void GetGoalRotation_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method SetGoalRotation_Injected addr 0x2b2c740 size 0x54 virtual false final false
  inline void SetGoalRotation_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Quaternion> goalRotation);

  /// @brief Method GetHintPosition_Injected addr 0x2b2ca90 size 0x54 virtual false final false
  inline void GetHintPosition_Injected(::UnityEngine::AvatarIKHint hint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method SetHintPosition_Injected addr 0x2b2cb90 size 0x54 virtual false final false
  inline void SetHintPosition_Injected(::UnityEngine::AvatarIKHint hint, ByRef<::UnityEngine::Vector3> hintPosition);

  /// @brief Method SetLookAtPositionInternal_Injected addr 0x2b2cdb0 size 0x44 virtual false final false
  inline void SetLookAtPositionInternal_Injected(ByRef<::UnityEngine::Vector3> lookAtPosition);

  /// @brief Method SetBoneLocalRotationInternal_Injected addr 0x2b2d174 size 0x54 virtual false final false
  inline void SetBoneLocalRotationInternal_Injected(int32_t humanBoneId, ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method get_pivotPosition_Injected addr 0x2b2dda8 size 0x44 virtual false final false
  inline void get_pivotPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method MatchTarget_Injected addr 0x2b2de88 size 0x8c virtual false final false
  inline void MatchTarget_Injected(ByRef<::UnityEngine::Vector3> matchPosition, ByRef<::UnityEngine::Quaternion> matchRotation, int32_t targetBodyPart,
                                   ByRef<::UnityEngine::MatchTargetWeightMask> weightMask, float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method get_targetPosition_Injected addr 0x2b2ec78 size 0x44 virtual false final false
  inline void get_targetPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation_Injected addr 0x2b2ed14 size 0x44 virtual false final false
  inline void get_targetRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Animator(Animator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Animator(Animator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Animator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animator, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Animator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animator*, "UnityEngine", "Animator");
