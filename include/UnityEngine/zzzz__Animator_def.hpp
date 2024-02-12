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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8931))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14755))
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

  __declspec(property(get = get_avatarRoot))::UnityW<::UnityEngine::Transform> avatarRoot;

  __declspec(property(get = get_cullingMode, put = set_cullingMode))::UnityEngine::AnimatorCullingMode cullingMode;

  __declspec(property(get = get_playbackTime, put = set_playbackTime)) float_t playbackTime;

  __declspec(property(get = get_recorderStartTime, put = set_recorderStartTime)) float_t recorderStartTime;

  __declspec(property(get = get_recorderStopTime, put = set_recorderStopTime)) float_t recorderStopTime;

  __declspec(property(get = get_recorderMode))::UnityEngine::AnimatorRecorderMode recorderMode;

  __declspec(property(get = get_runtimeAnimatorController, put = set_runtimeAnimatorController))::UnityW<::UnityEngine::RuntimeAnimatorController> runtimeAnimatorController;

  __declspec(property(get = get_hasBoundPlayables)) bool hasBoundPlayables;

  __declspec(property(get = get_avatar, put = set_avatar))::UnityW<::UnityEngine::Avatar> avatar;

  __declspec(property(get = get_playableGraph))::UnityEngine::Playables::PlayableGraph playableGraph;

  __declspec(property(get = get_layersAffectMassCenter, put = set_layersAffectMassCenter)) bool layersAffectMassCenter;

  __declspec(property(get = get_leftFeetBottomHeight)) float_t leftFeetBottomHeight;

  __declspec(property(get = get_rightFeetBottomHeight)) float_t rightFeetBottomHeight;

  __declspec(property(get = get_supportsOnAnimatorMove)) bool supportsOnAnimatorMove;

  __declspec(property(get = get_logWarnings, put = set_logWarnings)) bool logWarnings;

  __declspec(property(get = get_fireEvents, put = set_fireEvents)) bool fireEvents;

  __declspec(property(get = get_keepAnimatorControllerStateOnDisable, put = set_keepAnimatorControllerStateOnDisable)) bool keepAnimatorControllerStateOnDisable;

  __declspec(property(get = get_keepAnimatorStateOnDisable, put = set_keepAnimatorStateOnDisable)) bool keepAnimatorStateOnDisable;

  /// @brief Method get_isOptimizable, addr 0x2c8d28c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isOptimizable();

  /// @brief Method get_isHuman, addr 0x2c8d2c8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isHuman();

  /// @brief Method get_hasRootMotion, addr 0x2c8d304, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasRootMotion();

  /// @brief Method get_isRootPositionOrRotationControlledByCurves, addr 0x2c8d340, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isRootPositionOrRotationControlledByCurves();

  /// @brief Method get_humanScale, addr 0x2c8d37c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_humanScale();

  /// @brief Method get_isInitialized, addr 0x2c8d3b8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method GetFloat, addr 0x2c8d3f4, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloat(::StringW name);

  /// @brief Method GetFloat, addr 0x2c8d47c, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t id);

  /// @brief Method SetFloat, addr 0x2c8d504, size 0x54, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x2c8d5ac, size 0x6c, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloat, addr 0x2c8d684, size 0x54, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value);

  /// @brief Method SetFloat, addr 0x2c8d72c, size 0x6c, virtual false, abstract: false, final false
  inline void SetFloat(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method GetBool, addr 0x2c8d804, size 0x44, virtual false, abstract: false, final false
  inline bool GetBool(::StringW name);

  /// @brief Method GetBool, addr 0x2c8d88c, size 0x44, virtual false, abstract: false, final false
  inline bool GetBool(int32_t id);

  /// @brief Method SetBool, addr 0x2c8d914, size 0x54, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool value);

  /// @brief Method SetBool, addr 0x2c8d9bc, size 0x54, virtual false, abstract: false, final false
  inline void SetBool(int32_t id, bool value);

  /// @brief Method GetInteger, addr 0x2c8da64, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetInteger(::StringW name);

  /// @brief Method GetInteger, addr 0x2c8daec, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetInteger(int32_t id);

  /// @brief Method SetInteger, addr 0x2c8db74, size 0x54, virtual false, abstract: false, final false
  inline void SetInteger(::StringW name, int32_t value);

  /// @brief Method SetInteger, addr 0x2c8dc1c, size 0x54, virtual false, abstract: false, final false
  inline void SetInteger(int32_t id, int32_t value);

  /// @brief Method SetTrigger, addr 0x2c8dcc4, size 0x44, virtual false, abstract: false, final false
  inline void SetTrigger(::StringW name);

  /// @brief Method SetTrigger, addr 0x2c8dd4c, size 0x44, virtual false, abstract: false, final false
  inline void SetTrigger(int32_t id);

  /// @brief Method ResetTrigger, addr 0x2c8ddd4, size 0x44, virtual false, abstract: false, final false
  inline void ResetTrigger(::StringW name);

  /// @brief Method ResetTrigger, addr 0x2c8de5c, size 0x44, virtual false, abstract: false, final false
  inline void ResetTrigger(int32_t id);

  /// @brief Method IsParameterControlledByCurve, addr 0x2c8dee4, size 0x44, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(::StringW name);

  /// @brief Method IsParameterControlledByCurve, addr 0x2c8df6c, size 0x44, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurve(int32_t id);

  /// @brief Method get_deltaPosition, addr 0x2c8dff4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_deltaPosition();

  /// @brief Method get_deltaRotation, addr 0x2c8e094, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_deltaRotation();

  /// @brief Method get_velocity, addr 0x2c8e130, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_angularVelocity, addr 0x2c8e1d0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_rootPosition, addr 0x2c8e270, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rootPosition();

  /// @brief Method set_rootPosition, addr 0x2c8e310, size 0x54, virtual false, abstract: false, final false
  inline void set_rootPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_rootRotation, addr 0x2c8e3a8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rootRotation();

  /// @brief Method set_rootRotation, addr 0x2c8e444, size 0x54, virtual false, abstract: false, final false
  inline void set_rootRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_applyRootMotion, addr 0x2c8e4dc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_applyRootMotion();

  /// @brief Method set_applyRootMotion, addr 0x2c8e518, size 0x44, virtual false, abstract: false, final false
  inline void set_applyRootMotion(bool value);

  /// @brief Method get_linearVelocityBlending, addr 0x2c8e55c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_linearVelocityBlending();

  /// @brief Method set_linearVelocityBlending, addr 0x2c8e598, size 0x44, virtual false, abstract: false, final false
  inline void set_linearVelocityBlending(bool value);

  /// @brief Method get_animatePhysics, addr 0x2c8e5dc, size 0x48, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method set_animatePhysics, addr 0x2c8e660, size 0x4c, virtual false, abstract: false, final false
  inline void set_animatePhysics(bool value);

  /// @brief Method get_updateMode, addr 0x2c8e624, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorUpdateMode get_updateMode();

  /// @brief Method set_updateMode, addr 0x2c8e6ac, size 0x44, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::AnimatorUpdateMode value);

  /// @brief Method get_hasTransformHierarchy, addr 0x2c8e6f0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasTransformHierarchy();

  /// @brief Method get_allowConstantClipSamplingOptimization, addr 0x2c8e72c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowConstantClipSamplingOptimization();

  /// @brief Method set_allowConstantClipSamplingOptimization, addr 0x2c8e768, size 0x44, virtual false, abstract: false, final false
  inline void set_allowConstantClipSamplingOptimization(bool value);

  /// @brief Method get_gravityWeight, addr 0x2c8e7ac, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_gravityWeight();

  /// @brief Method get_bodyPosition, addr 0x2c8e7e8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPosition();

  /// @brief Method set_bodyPosition, addr 0x2c8e92c, size 0x40, virtual false, abstract: false, final false
  inline void set_bodyPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_bodyPositionInternal, addr 0x2c8e8d0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyPositionInternal();

  /// @brief Method set_bodyPositionInternal, addr 0x2c8e96c, size 0x54, virtual false, abstract: false, final false
  inline void set_bodyPositionInternal(::UnityEngine::Vector3 value);

  /// @brief Method get_bodyRotation, addr 0x2c8ea48, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotation();

  /// @brief Method set_bodyRotation, addr 0x2c8eab8, size 0x48, virtual false, abstract: false, final false
  inline void set_bodyRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_bodyRotationInternal, addr 0x2c8ea60, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_bodyRotationInternal();

  /// @brief Method set_bodyRotationInternal, addr 0x2c8eb00, size 0x54, virtual false, abstract: false, final false
  inline void set_bodyRotationInternal(::UnityEngine::Quaternion value);

  /// @brief Method GetIKPosition, addr 0x2c8ebdc, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalPosition, addr 0x2c8ec04, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetGoalPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetIKPosition, addr 0x2c8ecbc, size 0x50, virtual false, abstract: false, final false
  inline void SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method SetGoalPosition, addr 0x2c8ed0c, size 0x5c, virtual false, abstract: false, final false
  inline void SetGoalPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 goalPosition);

  /// @brief Method GetIKRotation, addr 0x2c8edbc, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalRotation, addr 0x2c8ede4, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetGoalRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetIKRotation, addr 0x2c8ee98, size 0x58, virtual false, abstract: false, final false
  inline void SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method SetGoalRotation, addr 0x2c8eef0, size 0x5c, virtual false, abstract: false, final false
  inline void SetGoalRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion goalRotation);

  /// @brief Method GetIKPositionWeight, addr 0x2c8efa0, size 0x48, virtual false, abstract: false, final false
  inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightPosition, addr 0x2c8efe8, size 0x44, virtual false, abstract: false, final false
  inline float_t GetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetIKPositionWeight, addr 0x2c8f02c, size 0x58, virtual false, abstract: false, final false
  inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightPosition, addr 0x2c8f084, size 0x54, virtual false, abstract: false, final false
  inline void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method GetIKRotationWeight, addr 0x2c8f0d8, size 0x48, virtual false, abstract: false, final false
  inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetGoalWeightRotation, addr 0x2c8f120, size 0x44, virtual false, abstract: false, final false
  inline float_t GetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetIKRotationWeight, addr 0x2c8f164, size 0x58, virtual false, abstract: false, final false
  inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method SetGoalWeightRotation, addr 0x2c8f1bc, size 0x54, virtual false, abstract: false, final false
  inline void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal goal, float_t value);

  /// @brief Method GetIKHintPosition, addr 0x2c8f210, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintPosition, addr 0x2c8f238, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHintPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method SetIKHintPosition, addr 0x2c8f2f0, size 0x50, virtual false, abstract: false, final false
  inline void SetIKHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method SetHintPosition, addr 0x2c8f340, size 0x5c, virtual false, abstract: false, final false
  inline void SetHintPosition(::UnityEngine::AvatarIKHint hint, ::UnityEngine::Vector3 hintPosition);

  /// @brief Method GetIKHintPositionWeight, addr 0x2c8f3f0, size 0x48, virtual false, abstract: false, final false
  inline float_t GetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint);

  /// @brief Method GetHintWeightPosition, addr 0x2c8f438, size 0x44, virtual false, abstract: false, final false
  inline float_t GetHintWeightPosition(::UnityEngine::AvatarIKHint hint);

  /// @brief Method SetIKHintPositionWeight, addr 0x2c8f47c, size 0x58, virtual false, abstract: false, final false
  inline void SetIKHintPositionWeight(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetHintWeightPosition, addr 0x2c8f4d4, size 0x54, virtual false, abstract: false, final false
  inline void SetHintWeightPosition(::UnityEngine::AvatarIKHint hint, float_t value);

  /// @brief Method SetLookAtPosition, addr 0x2c8f528, size 0x40, virtual false, abstract: false, final false
  inline void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtPositionInternal, addr 0x2c8f568, size 0x54, virtual false, abstract: false, final false
  inline void SetLookAtPositionInternal(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtWeight, addr 0x2c8f600, size 0x60, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight);

  /// @brief Method SetLookAtWeight, addr 0x2c8f6dc, size 0x64, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight);

  /// @brief Method SetLookAtWeight, addr 0x2c8f740, size 0x70, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight);

  /// @brief Method SetLookAtWeight, addr 0x2c8f7b0, size 0x74, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight);

  /// @brief Method SetLookAtWeight, addr 0x2c8f824, size 0x80, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeightInternal, addr 0x2c8f660, size 0x7c, virtual false, abstract: false, final false
  inline void SetLookAtWeightInternal(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetBoneLocalRotation, addr 0x2c8f8a4, size 0x80, virtual false, abstract: false, final false
  inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetBoneLocalRotationInternal, addr 0x2c8f924, size 0x5c, virtual false, abstract: false, final false
  inline void SetBoneLocalRotationInternal(int32_t humanBoneId, ::UnityEngine::Quaternion rotation);

  /// @brief Method GetBehaviour, addr 0x2c8f9d4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ScriptableObject> GetBehaviour(::System::Type* type);

  /// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetBehaviour();

  /// @brief Method ConvertStateMachineBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*, ::Array<::UnityEngine::ScriptableObject*>*> rawObjects);

  /// @brief Method GetBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetBehaviours();

  /// @brief Method InternalGetBehaviours, addr 0x2c8fa18, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>, ::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehaviours(::System::Type* type);

  /// @brief Method GetBehaviours, addr 0x2c8fa5c, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>, ::Array<::UnityW<::UnityEngine::StateMachineBehaviour>>*> GetBehaviours(int32_t fullPathHash, int32_t layerIndex);

  /// @brief Method InternalGetBehavioursByKey, addr 0x2c8fb38, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>, ::Array<::UnityW<::UnityEngine::ScriptableObject>>*> InternalGetBehavioursByKey(int32_t fullPathHash, int32_t layerIndex,
                                                                                                                                             ::System::Type* type);

  /// @brief Method get_stabilizeFeet, addr 0x2c8fb94, size 0x3c, virtual false, abstract: false, final false
  inline bool get_stabilizeFeet();

  /// @brief Method set_stabilizeFeet, addr 0x2c8fbd0, size 0x44, virtual false, abstract: false, final false
  inline void set_stabilizeFeet(bool value);

  /// @brief Method get_layerCount, addr 0x2c8fc14, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_layerCount();

  /// @brief Method GetLayerName, addr 0x2c8fc50, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetLayerName(int32_t layerIndex);

  /// @brief Method GetLayerIndex, addr 0x2c8fc94, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetLayerIndex(::StringW layerName);

  /// @brief Method GetLayerWeight, addr 0x2c8fcd8, size 0x44, virtual false, abstract: false, final false
  inline float_t GetLayerWeight(int32_t layerIndex);

  /// @brief Method SetLayerWeight, addr 0x2c8fd1c, size 0x54, virtual false, abstract: false, final false
  inline void SetLayerWeight(int32_t layerIndex, float_t weight);

  /// @brief Method GetAnimatorStateInfo, addr 0x2c8fd70, size 0x5c, virtual false, abstract: false, final false
  inline void GetAnimatorStateInfo(int32_t layerIndex, ::UnityEngine::StateInfoIndex stateInfoIndex, ByRef<::UnityEngine::AnimatorStateInfo> info);

  /// @brief Method GetCurrentAnimatorStateInfo, addr 0x2c8fdcc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetNextAnimatorStateInfo, addr 0x2c8fe4c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t layerIndex);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x2c8fecc, size 0x54, virtual false, abstract: false, final false
  inline void GetAnimatorTransitionInfo(int32_t layerIndex, ByRef<::UnityEngine::AnimatorTransitionInfo> info);

  /// @brief Method GetAnimatorTransitionInfo, addr 0x2c8ff20, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t layerIndex);

  /// @brief Method GetAnimatorClipInfoCount, addr 0x2c8ff90, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetAnimatorClipInfoCount(int32_t layerIndex, bool current);

  /// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x2c8ffe4, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetCurrentAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfoCount, addr 0x2c9002c, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetNextAnimatorClipInfoCount(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x2c90074, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo, ::Array<::UnityEngine::AnimatorClipInfo>*> GetCurrentAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetNextAnimatorClipInfo, addr 0x2c900b8, size 0x44, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorClipInfo, ::Array<::UnityEngine::AnimatorClipInfo>*> GetNextAnimatorClipInfo(int32_t layerIndex);

  /// @brief Method GetCurrentAnimatorClipInfo, addr 0x2c900fc, size 0xa8, virtual false, abstract: false, final false
  inline void GetCurrentAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method GetAnimatorClipInfoInternal, addr 0x2c901a4, size 0x5c, virtual false, abstract: false, final false
  inline void GetAnimatorClipInfoInternal(int32_t layerIndex, bool isCurrent, ::System::Object* clips);

  /// @brief Method GetNextAnimatorClipInfo, addr 0x2c90200, size 0xa8, virtual false, abstract: false, final false
  inline void GetNextAnimatorClipInfo(int32_t layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clips);

  /// @brief Method IsInTransition, addr 0x2c902a8, size 0x44, virtual false, abstract: false, final false
  inline bool IsInTransition(int32_t layerIndex);

  /// @brief Method get_parameters, addr 0x2c902ec, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*, ::Array<::UnityEngine::AnimatorControllerParameter*>*> get_parameters();

  /// @brief Method get_parameterCount, addr 0x2c90328, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_parameterCount();

  /// @brief Method GetParameter, addr 0x2c90364, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t index);

  /// @brief Method get_feetPivotActive, addr 0x2c90494, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_feetPivotActive();

  /// @brief Method set_feetPivotActive, addr 0x2c904d0, size 0x4c, virtual false, abstract: false, final false
  inline void set_feetPivotActive(float_t value);

  /// @brief Method get_pivotWeight, addr 0x2c9051c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_pivotWeight();

  /// @brief Method get_pivotPosition, addr 0x2c90558, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivotPosition();

  /// @brief Method MatchTarget, addr 0x2c905f8, size 0x9c, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method MatchTarget, addr 0x2c90720, size 0x34, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime);

  /// @brief Method MatchTarget, addr 0x2c90754, size 0x20, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime);

  /// @brief Method MatchTarget, addr 0x2c90774, size 0x20, virtual false, abstract: false, final false
  inline void MatchTarget(::UnityEngine::Vector3 matchPosition, ::UnityEngine::Quaternion matchRotation, ::UnityEngine::AvatarTarget targetBodyPart, ::UnityEngine::MatchTargetWeightMask weightMask,
                          float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method InterruptMatchTarget, addr 0x2c90794, size 0x40, virtual false, abstract: false, final false
  inline void InterruptMatchTarget();

  /// @brief Method InterruptMatchTarget, addr 0x2c907d4, size 0x44, virtual false, abstract: false, final false
  inline void InterruptMatchTarget(bool completeMatch);

  /// @brief Method get_isMatchingTarget, addr 0x2c90818, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isMatchingTarget();

  /// @brief Method get_speed, addr 0x2c90854, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_speed();

  /// @brief Method set_speed, addr 0x2c90890, size 0x4c, virtual false, abstract: false, final false
  inline void set_speed(float_t value);

  /// @brief Method ForceStateNormalizedTime, addr 0x2c908dc, size 0x54, virtual false, abstract: false, final false
  inline void ForceStateNormalizedTime(float_t normalizedTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x2c90994, size 0x8c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x2c90ad8, size 0x98, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x2c90b70, size 0x9c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime, addr 0x2c90c0c, size 0xa8, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(::StringW stateName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFadeInFixedTime, addr 0x2c90cb4, size 0x70, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset);

  /// @brief Method CrossFadeInFixedTime, addr 0x2c90d24, size 0x6c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer);

  /// @brief Method CrossFadeInFixedTime, addr 0x2c90d90, size 0x60, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration);

  /// @brief Method CrossFadeInFixedTime, addr 0x2c90a5c, size 0x7c, virtual false, abstract: false, final false
  inline void CrossFadeInFixedTime(int32_t stateHashName, float_t fixedTransitionDuration, int32_t layer, float_t fixedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method WriteDefaultValues, addr 0x2c90df0, size 0x3c, virtual false, abstract: false, final false
  inline void WriteDefaultValues();

  /// @brief Method CrossFade, addr 0x2c90e2c, size 0x8, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade, addr 0x2c90edc, size 0x10, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x2c90eec, size 0x14, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration);

  /// @brief Method CrossFade, addr 0x2c90e34, size 0xa8, virtual false, abstract: false, final false
  inline void CrossFade(::StringW stateName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFade, addr 0x2c90f00, size 0x7c, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset, float_t normalizedTransitionTime);

  /// @brief Method CrossFade, addr 0x2c90f7c, size 0x70, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer, float_t normalizedTimeOffset);

  /// @brief Method CrossFade, addr 0x2c90fec, size 0x70, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration, int32_t layer);

  /// @brief Method CrossFade, addr 0x2c9105c, size 0x64, virtual false, abstract: false, final false
  inline void CrossFade(int32_t stateHashName, float_t normalizedTransitionDuration);

  /// @brief Method PlayInFixedTime, addr 0x2c910c0, size 0xc, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer);

  /// @brief Method PlayInFixedTime, addr 0x2c9115c, size 0x10, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName);

  /// @brief Method PlayInFixedTime, addr 0x2c910cc, size 0x90, virtual false, abstract: false, final false
  inline void PlayInFixedTime(::StringW stateName, int32_t layer, float_t fixedTime);

  /// @brief Method PlayInFixedTime, addr 0x2c9116c, size 0x64, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer, float_t fixedTime);

  /// @brief Method PlayInFixedTime, addr 0x2c911d0, size 0x5c, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash, int32_t layer);

  /// @brief Method PlayInFixedTime, addr 0x2c9122c, size 0x50, virtual false, abstract: false, final false
  inline void PlayInFixedTime(int32_t stateNameHash);

  /// @brief Method Play, addr 0x2c9127c, size 0xc, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, int32_t layer);

  /// @brief Method Play, addr 0x2c91318, size 0x10, virtual false, abstract: false, final false
  inline void Play(::StringW stateName);

  /// @brief Method Play, addr 0x2c91288, size 0x90, virtual false, abstract: false, final false
  inline void Play(::StringW stateName, int32_t layer, float_t normalizedTime);

  /// @brief Method Play, addr 0x2c90930, size 0x64, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, int32_t layer, float_t normalizedTime);

  /// @brief Method Play, addr 0x2c91328, size 0x5c, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash, int32_t layer);

  /// @brief Method Play, addr 0x2c91384, size 0x50, virtual false, abstract: false, final false
  inline void Play(int32_t stateNameHash);

  /// @brief Method SetTarget, addr 0x2c913d4, size 0x54, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::AvatarTarget targetIndex, float_t targetNormalizedTime);

  /// @brief Method get_targetPosition, addr 0x2c91428, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetRotation, addr 0x2c914c8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method IsControlled, addr 0x2c91564, size 0x8, virtual false, abstract: false, final false
  inline bool IsControlled(::UnityEngine::Transform* transform);

  /// @brief Method IsBoneTransform, addr 0x2c9156c, size 0x44, virtual false, abstract: false, final false
  inline bool IsBoneTransform(::UnityEngine::Transform* transform);

  /// @brief Method get_avatarRoot, addr 0x2c915b0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_avatarRoot();

  /// @brief Method GetBoneTransform, addr 0x2c915ec, size 0x108, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones humanBoneId);

  /// @brief Method GetBoneTransformInternal, addr 0x2c916f4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetBoneTransformInternal(int32_t humanBoneId);

  /// @brief Method get_cullingMode, addr 0x2c91738, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorCullingMode get_cullingMode();

  /// @brief Method set_cullingMode, addr 0x2c91774, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMode(::UnityEngine::AnimatorCullingMode value);

  /// @brief Method StartPlayback, addr 0x2c917b8, size 0x3c, virtual false, abstract: false, final false
  inline void StartPlayback();

  /// @brief Method StopPlayback, addr 0x2c917f4, size 0x3c, virtual false, abstract: false, final false
  inline void StopPlayback();

  /// @brief Method get_playbackTime, addr 0x2c91830, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_playbackTime();

  /// @brief Method set_playbackTime, addr 0x2c9186c, size 0x4c, virtual false, abstract: false, final false
  inline void set_playbackTime(float_t value);

  /// @brief Method StartRecording, addr 0x2c918b8, size 0x44, virtual false, abstract: false, final false
  inline void StartRecording(int32_t frameCount);

  /// @brief Method StopRecording, addr 0x2c918fc, size 0x3c, virtual false, abstract: false, final false
  inline void StopRecording();

  /// @brief Method get_recorderStartTime, addr 0x2c91938, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_recorderStartTime();

  /// @brief Method set_recorderStartTime, addr 0x2c919b0, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStartTime(float_t value);

  /// @brief Method GetRecorderStartTime, addr 0x2c91974, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetRecorderStartTime();

  /// @brief Method get_recorderStopTime, addr 0x2c919b4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_recorderStopTime();

  /// @brief Method set_recorderStopTime, addr 0x2c91a2c, size 0x4, virtual false, abstract: false, final false
  inline void set_recorderStopTime(float_t value);

  /// @brief Method GetRecorderStopTime, addr 0x2c919f0, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetRecorderStopTime();

  /// @brief Method get_recorderMode, addr 0x2c91a30, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimatorRecorderMode get_recorderMode();

  /// @brief Method get_runtimeAnimatorController, addr 0x2c91a6c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController();

  /// @brief Method set_runtimeAnimatorController, addr 0x2c91aa8, size 0x44, virtual false, abstract: false, final false
  inline void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* value);

  /// @brief Method get_hasBoundPlayables, addr 0x2c91aec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasBoundPlayables();

  /// @brief Method ClearInternalControllerPlayable, addr 0x2c91b28, size 0x3c, virtual false, abstract: false, final false
  inline void ClearInternalControllerPlayable();

  /// @brief Method HasState, addr 0x2c91b64, size 0x54, virtual false, abstract: false, final false
  inline bool HasState(int32_t layerIndex, int32_t stateID);

  /// @brief Method StringToHash, addr 0x2c90a20, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t StringToHash(::StringW name);

  /// @brief Method get_avatar, addr 0x2c91bb8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Avatar> get_avatar();

  /// @brief Method set_avatar, addr 0x2c91bf4, size 0x44, virtual false, abstract: false, final false
  inline void set_avatar(::UnityEngine::Avatar* value);

  /// @brief Method GetStats, addr 0x2c91c38, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetStats();

  /// @brief Method get_playableGraph, addr 0x2c91c74, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph get_playableGraph();

  /// @brief Method GetCurrentGraph, addr 0x2c91cc8, size 0x44, virtual false, abstract: false, final false
  inline void GetCurrentGraph(ByRef<::UnityEngine::Playables::PlayableGraph> graph);

  /// @brief Method CheckIfInIKPass, addr 0x2c8e800, size 0xd0, virtual false, abstract: false, final false
  inline void CheckIfInIKPass();

  /// @brief Method IsInIKPass, addr 0x2c91d48, size 0x3c, virtual false, abstract: false, final false
  inline bool IsInIKPass();

  /// @brief Method SetFloatString, addr 0x2c8d558, size 0x54, virtual false, abstract: false, final false
  inline void SetFloatString(::StringW name, float_t value);

  /// @brief Method SetFloatID, addr 0x2c8d6d8, size 0x54, virtual false, abstract: false, final false
  inline void SetFloatID(int32_t id, float_t value);

  /// @brief Method GetFloatString, addr 0x2c8d438, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloatString(::StringW name);

  /// @brief Method GetFloatID, addr 0x2c8d4c0, size 0x44, virtual false, abstract: false, final false
  inline float_t GetFloatID(int32_t id);

  /// @brief Method SetBoolString, addr 0x2c8d968, size 0x54, virtual false, abstract: false, final false
  inline void SetBoolString(::StringW name, bool value);

  /// @brief Method SetBoolID, addr 0x2c8da10, size 0x54, virtual false, abstract: false, final false
  inline void SetBoolID(int32_t id, bool value);

  /// @brief Method GetBoolString, addr 0x2c8d848, size 0x44, virtual false, abstract: false, final false
  inline bool GetBoolString(::StringW name);

  /// @brief Method GetBoolID, addr 0x2c8d8d0, size 0x44, virtual false, abstract: false, final false
  inline bool GetBoolID(int32_t id);

  /// @brief Method SetIntegerString, addr 0x2c8dbc8, size 0x54, virtual false, abstract: false, final false
  inline void SetIntegerString(::StringW name, int32_t value);

  /// @brief Method SetIntegerID, addr 0x2c8dc70, size 0x54, virtual false, abstract: false, final false
  inline void SetIntegerID(int32_t id, int32_t value);

  /// @brief Method GetIntegerString, addr 0x2c8daa8, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetIntegerString(::StringW name);

  /// @brief Method GetIntegerID, addr 0x2c8db30, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetIntegerID(int32_t id);

  /// @brief Method SetTriggerString, addr 0x2c8dd08, size 0x44, virtual false, abstract: false, final false
  inline void SetTriggerString(::StringW name);

  /// @brief Method SetTriggerID, addr 0x2c8dd90, size 0x44, virtual false, abstract: false, final false
  inline void SetTriggerID(int32_t id);

  /// @brief Method ResetTriggerString, addr 0x2c8de18, size 0x44, virtual false, abstract: false, final false
  inline void ResetTriggerString(::StringW name);

  /// @brief Method ResetTriggerID, addr 0x2c8dea0, size 0x44, virtual false, abstract: false, final false
  inline void ResetTriggerID(int32_t id);

  /// @brief Method IsParameterControlledByCurveString, addr 0x2c8df28, size 0x44, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveString(::StringW name);

  /// @brief Method IsParameterControlledByCurveID, addr 0x2c8dfb0, size 0x44, virtual false, abstract: false, final false
  inline bool IsParameterControlledByCurveID(int32_t id);

  /// @brief Method SetFloatStringDamp, addr 0x2c8d618, size 0x6c, virtual false, abstract: false, final false
  inline void SetFloatStringDamp(::StringW name, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method SetFloatIDDamp, addr 0x2c8d798, size 0x6c, virtual false, abstract: false, final false
  inline void SetFloatIDDamp(int32_t id, float_t value, float_t dampTime, float_t deltaTime);

  /// @brief Method get_layersAffectMassCenter, addr 0x2c91d84, size 0x3c, virtual false, abstract: false, final false
  inline bool get_layersAffectMassCenter();

  /// @brief Method set_layersAffectMassCenter, addr 0x2c91dc0, size 0x44, virtual false, abstract: false, final false
  inline void set_layersAffectMassCenter(bool value);

  /// @brief Method get_leftFeetBottomHeight, addr 0x2c91e04, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_leftFeetBottomHeight();

  /// @brief Method get_rightFeetBottomHeight, addr 0x2c91e40, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_rightFeetBottomHeight();

  /// @brief Method get_supportsOnAnimatorMove, addr 0x2c91e7c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_supportsOnAnimatorMove();

  /// @brief Method OnUpdateModeChanged, addr 0x2c91eb8, size 0x3c, virtual false, abstract: false, final false
  inline void OnUpdateModeChanged();

  /// @brief Method OnCullingModeChanged, addr 0x2c91ef4, size 0x3c, virtual false, abstract: false, final false
  inline void OnCullingModeChanged();

  /// @brief Method WriteDefaultPose, addr 0x2c91f30, size 0x3c, virtual false, abstract: false, final false
  inline void WriteDefaultPose();

  /// @brief Method Update, addr 0x2c91f6c, size 0x4c, virtual false, abstract: false, final false
  inline void Update(float_t deltaTime);

  /// @brief Method Rebind, addr 0x2c91fb8, size 0x40, virtual false, abstract: false, final false
  inline void Rebind();

  /// @brief Method Rebind, addr 0x2c91ff8, size 0x44, virtual false, abstract: false, final false
  inline void Rebind(bool writeDefaultValues);

  /// @brief Method ApplyBuiltinRootMotion, addr 0x2c9203c, size 0x3c, virtual false, abstract: false, final false
  inline void ApplyBuiltinRootMotion();

  /// @brief Method EvaluateController, addr 0x2c92078, size 0x40, virtual false, abstract: false, final false
  inline void EvaluateController();

  /// @brief Method EvaluateController, addr 0x2c920b8, size 0x4c, virtual false, abstract: false, final false
  inline void EvaluateController(float_t deltaTime);

  /// @brief Method GetCurrentStateName, addr 0x2c92104, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetCurrentStateName(int32_t layerIndex);

  /// @brief Method GetNextStateName, addr 0x2c921a0, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetNextStateName(int32_t layerIndex);

  /// @brief Method GetAnimatorStateName, addr 0x2c9214c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW GetAnimatorStateName(int32_t layerIndex, bool current);

  /// @brief Method ResolveHash, addr 0x2c921e8, size 0x44, virtual false, abstract: false, final false
  inline ::StringW ResolveHash(int32_t hash);

  /// @brief Method get_logWarnings, addr 0x2c91d0c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_logWarnings();

  /// @brief Method set_logWarnings, addr 0x2c9222c, size 0x44, virtual false, abstract: false, final false
  inline void set_logWarnings(bool value);

  /// @brief Method get_fireEvents, addr 0x2c92270, size 0x3c, virtual false, abstract: false, final false
  inline bool get_fireEvents();

  /// @brief Method set_fireEvents, addr 0x2c922ac, size 0x44, virtual false, abstract: false, final false
  inline void set_fireEvents(bool value);

  /// @brief Method get_keepAnimatorControllerStateOnDisable, addr 0x2c922f0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_keepAnimatorControllerStateOnDisable();

  /// @brief Method set_keepAnimatorControllerStateOnDisable, addr 0x2c92368, size 0x44, virtual false, abstract: false, final false
  inline void set_keepAnimatorControllerStateOnDisable(bool value);

  /// @brief Method get_keepAnimatorStateOnDisable, addr 0x2c9232c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_keepAnimatorStateOnDisable();

  /// @brief Method set_keepAnimatorStateOnDisable, addr 0x2c923ac, size 0x44, virtual false, abstract: false, final false
  inline void set_keepAnimatorStateOnDisable(bool value);

  /// @brief Method GetVector, addr 0x2c923f0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(::StringW name);

  /// @brief Method GetVector, addr 0x2c92434, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVector(int32_t id);

  /// @brief Method SetVector, addr 0x2c92478, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector3 value);

  /// @brief Method SetVector, addr 0x2c9247c, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t id, ::UnityEngine::Vector3 value);

  /// @brief Method GetQuaternion, addr 0x2c92480, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(::StringW name);

  /// @brief Method GetQuaternion, addr 0x2c924c4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetQuaternion(int32_t id);

  /// @brief Method SetQuaternion, addr 0x2c92508, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(::StringW name, ::UnityEngine::Quaternion value);

  /// @brief Method SetQuaternion, addr 0x2c9250c, size 0x4, virtual false, abstract: false, final false
  inline void SetQuaternion(int32_t id, ::UnityEngine::Quaternion value);

  static inline ::UnityEngine::Animator* New_ctor();

  /// @brief Method .ctor, addr 0x2c92510, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_deltaPosition_Injected, addr 0x2c8e050, size 0x44, virtual false, abstract: false, final false
  inline void get_deltaPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_deltaRotation_Injected, addr 0x2c8e0ec, size 0x44, virtual false, abstract: false, final false
  inline void get_deltaRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_velocity_Injected, addr 0x2c8e18c, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_angularVelocity_Injected, addr 0x2c8e22c, size 0x44, virtual false, abstract: false, final false
  inline void get_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rootPosition_Injected, addr 0x2c8e2cc, size 0x44, virtual false, abstract: false, final false
  inline void get_rootPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_rootPosition_Injected, addr 0x2c8e364, size 0x44, virtual false, abstract: false, final false
  inline void set_rootPosition_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_rootRotation_Injected, addr 0x2c8e400, size 0x44, virtual false, abstract: false, final false
  inline void get_rootRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_rootRotation_Injected, addr 0x2c8e498, size 0x44, virtual false, abstract: false, final false
  inline void set_rootRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method get_bodyPositionInternal_Injected, addr 0x2c8e9c0, size 0x44, virtual false, abstract: false, final false
  inline void get_bodyPositionInternal_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_bodyPositionInternal_Injected, addr 0x2c8ea04, size 0x44, virtual false, abstract: false, final false
  inline void set_bodyPositionInternal_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_bodyRotationInternal_Injected, addr 0x2c8eb54, size 0x44, virtual false, abstract: false, final false
  inline void get_bodyRotationInternal_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_bodyRotationInternal_Injected, addr 0x2c8eb98, size 0x44, virtual false, abstract: false, final false
  inline void set_bodyRotationInternal_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method GetGoalPosition_Injected, addr 0x2c8ec68, size 0x54, virtual false, abstract: false, final false
  inline void GetGoalPosition_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method SetGoalPosition_Injected, addr 0x2c8ed68, size 0x54, virtual false, abstract: false, final false
  inline void SetGoalPosition_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Vector3> goalPosition);

  /// @brief Method GetGoalRotation_Injected, addr 0x2c8ee44, size 0x54, virtual false, abstract: false, final false
  inline void GetGoalRotation_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method SetGoalRotation_Injected, addr 0x2c8ef4c, size 0x54, virtual false, abstract: false, final false
  inline void SetGoalRotation_Injected(::UnityEngine::AvatarIKGoal goal, ByRef<::UnityEngine::Quaternion> goalRotation);

  /// @brief Method GetHintPosition_Injected, addr 0x2c8f29c, size 0x54, virtual false, abstract: false, final false
  inline void GetHintPosition_Injected(::UnityEngine::AvatarIKHint hint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method SetHintPosition_Injected, addr 0x2c8f39c, size 0x54, virtual false, abstract: false, final false
  inline void SetHintPosition_Injected(::UnityEngine::AvatarIKHint hint, ByRef<::UnityEngine::Vector3> hintPosition);

  /// @brief Method SetLookAtPositionInternal_Injected, addr 0x2c8f5bc, size 0x44, virtual false, abstract: false, final false
  inline void SetLookAtPositionInternal_Injected(ByRef<::UnityEngine::Vector3> lookAtPosition);

  /// @brief Method SetBoneLocalRotationInternal_Injected, addr 0x2c8f980, size 0x54, virtual false, abstract: false, final false
  inline void SetBoneLocalRotationInternal_Injected(int32_t humanBoneId, ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method get_pivotPosition_Injected, addr 0x2c905b4, size 0x44, virtual false, abstract: false, final false
  inline void get_pivotPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method MatchTarget_Injected, addr 0x2c90694, size 0x8c, virtual false, abstract: false, final false
  inline void MatchTarget_Injected(ByRef<::UnityEngine::Vector3> matchPosition, ByRef<::UnityEngine::Quaternion> matchRotation, int32_t targetBodyPart,
                                   ByRef<::UnityEngine::MatchTargetWeightMask> weightMask, float_t startNormalizedTime, float_t targetNormalizedTime, bool completeMatch);

  /// @brief Method get_targetPosition_Injected, addr 0x2c91484, size 0x44, virtual false, abstract: false, final false
  inline void get_targetPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation_Injected, addr 0x2c91520, size 0x44, virtual false, abstract: false, final false
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
