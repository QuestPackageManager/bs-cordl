#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractionEffector)
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
namespace RootMotion::FinalIK {
class InteractionSystem;
}
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace RootMotion::FinalIK {
class Poser;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class InteractionEffector;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::InteractionEffector);
// Type: RootMotion.FinalIK::InteractionEffector
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 201, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::InteractionEffector*
class CORDL_TYPE InteractionEffector : public ::System::Object {
public:
  // Declarations
  /// @brief Field <effectorType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__effectorType_k__BackingField,
                      put = __cordl_internal_set__effectorType_k__BackingField))::RootMotion::FinalIK::FullBodyBipedEffector _effectorType_k__BackingField;

  /// @brief Field <interactionObject>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__interactionObject_k__BackingField,
                      put = __cordl_internal_set__interactionObject_k__BackingField))::UnityW<::RootMotion::FinalIK::InteractionObject> _interactionObject_k__BackingField;

  /// @brief Field <isPaused>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__isPaused_k__BackingField, put = __cordl_internal_set__isPaused_k__BackingField)) bool _isPaused_k__BackingField;

  /// @brief Field bendGoalWeightUsed, offset 0x66, size 0x1
  __declspec(property(get = __cordl_internal_get_bendGoalWeightUsed, put = __cordl_internal_set_bendGoalWeightUsed)) bool bendGoalWeightUsed;

  /// @brief Field defaultBendGoalWeight, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultBendGoalWeight, put = __cordl_internal_set_defaultBendGoalWeight)) float_t defaultBendGoalWeight;

  /// @brief Field defaultPositionWeight, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultPositionWeight, put = __cordl_internal_set_defaultPositionWeight)) float_t defaultPositionWeight;

  /// @brief Field defaultPull, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultPull, put = __cordl_internal_set_defaultPull)) float_t defaultPull;

  /// @brief Field defaultPush, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultPush, put = __cordl_internal_set_defaultPush)) float_t defaultPush;

  /// @brief Field defaultPushParent, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultPushParent, put = __cordl_internal_set_defaultPushParent)) float_t defaultPushParent;

  /// @brief Field defaultReach, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultReach, put = __cordl_internal_set_defaultReach)) float_t defaultReach;

  /// @brief Field defaultRotationWeight, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultRotationWeight, put = __cordl_internal_set_defaultRotationWeight)) float_t defaultRotationWeight;

  /// @brief Field defaults, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_defaults, put = __cordl_internal_set_defaults)) bool defaults;

  /// @brief Field effector, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_effector, put = __cordl_internal_set_effector))::RootMotion::FinalIK::IKEffector* effector;

  __declspec(property(get = get_effectorType, put = set_effectorType))::RootMotion::FinalIK::FullBodyBipedEffector effectorType;

  /// @brief Field fadeInSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeInSpeed, put = __cordl_internal_set_fadeInSpeed)) float_t fadeInSpeed;

  __declspec(property(get = get_inInteraction)) bool inInteraction;

  __declspec(property(get = get_interactionObject, put = set_interactionObject))::UnityW<::RootMotion::FinalIK::InteractionObject> interactionObject;

  /// @brief Field interactionSystem, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_interactionSystem, put = __cordl_internal_set_interactionSystem))::UnityW<::RootMotion::FinalIK::InteractionSystem> interactionSystem;

  /// @brief Field interactionTarget, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_interactionTarget, put = __cordl_internal_set_interactionTarget))::UnityW<::RootMotion::FinalIK::InteractionTarget> interactionTarget;

  __declspec(property(get = get_isPaused, put = set_isPaused)) bool isPaused;

  /// @brief Field length, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field pausePositionRelative, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get_pausePositionRelative, put = __cordl_internal_set_pausePositionRelative))::UnityEngine::Vector3 pausePositionRelative;

  /// @brief Field pauseRotationRelative, offset 0x94, size 0x10
  __declspec(property(get = __cordl_internal_get_pauseRotationRelative, put = __cordl_internal_set_pauseRotationRelative))::UnityEngine::Quaternion pauseRotationRelative;

  /// @brief Field pickUpOnPostFBBIK, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_pickUpOnPostFBBIK, put = __cordl_internal_set_pickUpOnPostFBBIK)) bool pickUpOnPostFBBIK;

  /// @brief Field pickUpPosition, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get_pickUpPosition, put = __cordl_internal_set_pickUpPosition))::UnityEngine::Vector3 pickUpPosition;

  /// @brief Field pickUpRotation, offset 0x84, size 0x10
  __declspec(property(get = __cordl_internal_get_pickUpRotation, put = __cordl_internal_set_pickUpRotation))::UnityEngine::Quaternion pickUpRotation;

  /// @brief Field pickedUp, offset 0x67, size 0x1
  __declspec(property(get = __cordl_internal_get_pickedUp, put = __cordl_internal_set_pickedUp)) bool pickedUp;

  /// @brief Field poser, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_poser, put = __cordl_internal_set_poser))::UnityW<::RootMotion::FinalIK::Poser> poser;

  /// @brief Field positionWeightUsed, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_positionWeightUsed, put = __cordl_internal_set_positionWeightUsed)) bool positionWeightUsed;

  __declspec(property(get = get_progress)) float_t progress;

  /// @brief Field pullUsed, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_pullUsed, put = __cordl_internal_set_pullUsed)) bool pullUsed;

  /// @brief Field pushParentUsed, offset 0x65, size 0x1
  __declspec(property(get = __cordl_internal_get_pushParentUsed, put = __cordl_internal_set_pushParentUsed)) bool pushParentUsed;

  /// @brief Field pushUsed, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_pushUsed, put = __cordl_internal_set_pushUsed)) bool pushUsed;

  /// @brief Field reachUsed, offset 0x63, size 0x1
  __declspec(property(get = __cordl_internal_get_reachUsed, put = __cordl_internal_set_reachUsed)) bool reachUsed;

  /// @brief Field resetTimer, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_resetTimer, put = __cordl_internal_set_resetTimer)) float_t resetTimer;

  /// @brief Field rotationWeightUsed, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_rotationWeightUsed, put = __cordl_internal_set_rotationWeightUsed)) bool rotationWeightUsed;

  /// @brief Field started, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_started, put = __cordl_internal_set_started)) bool started;

  /// @brief Field target, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  /// @brief Field timer, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_timer, put = __cordl_internal_set_timer)) float_t timer;

  /// @brief Field triggered, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_triggered, put = __cordl_internal_set_triggered))::System::Collections::Generic::List_1<bool>* triggered;

  /// @brief Field weight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method Initiate, addr 0x1386ff4, size 0x94, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::InteractionSystem* interactionSystem);

  static inline ::RootMotion::FinalIK::InteractionEffector* New_ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method OnPostFBBIK, addr 0x1389620, size 0x23c, virtual false, abstract: false, final false
  inline void OnPostFBBIK();

  /// @brief Method Pause, addr 0x13875d0, size 0x120, virtual false, abstract: false, final false
  inline bool Pause();

  /// @brief Method PickUp, addr 0x1388eb4, size 0x218, virtual false, abstract: false, final false
  inline void PickUp(::UnityEngine::Transform* root);

  /// @brief Method ResetToDefaults, addr 0x13871f4, size 0x3dc, virtual false, abstract: false, final false
  inline bool ResetToDefaults(float_t speed);

  /// @brief Method Resume, addr 0x13876f0, size 0x54, virtual false, abstract: false, final false
  inline bool Resume();

  /// @brief Method Start, addr 0x1387744, size 0x48c, virtual false, abstract: false, final false
  inline bool Start(::RootMotion::FinalIK::InteractionObject* interactionObject, ::StringW tag, float_t fadeInTime, bool interrupt);

  /// @brief Method Stop, addr 0x13892d8, size 0x148, virtual false, abstract: false, final false
  inline bool Stop();

  /// @brief Method StoreDefaults, addr 0x1387088, size 0x16c, virtual false, abstract: false, final false
  inline void StoreDefaults();

  /// @brief Method TriggerUntriggeredEvents, addr 0x1388c94, size 0x220, virtual false, abstract: false, final false
  inline void TriggerUntriggeredEvents(bool checkTime, ByRef<bool> pickUp, ByRef<bool> pause);

  /// @brief Method Update, addr 0x138824c, size 0x640, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Transform* root, float_t speed);

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __cordl_internal_get__effectorType_k__BackingField() const;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __cordl_internal_get__effectorType_k__BackingField();

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionObject> const& __cordl_internal_get__interactionObject_k__BackingField() const;

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionObject>& __cordl_internal_get__interactionObject_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPaused_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPaused_k__BackingField();

  constexpr bool const& __cordl_internal_get_bendGoalWeightUsed() const;

  constexpr bool& __cordl_internal_get_bendGoalWeightUsed();

  constexpr float_t const& __cordl_internal_get_defaultBendGoalWeight() const;

  constexpr float_t& __cordl_internal_get_defaultBendGoalWeight();

  constexpr float_t const& __cordl_internal_get_defaultPositionWeight() const;

  constexpr float_t& __cordl_internal_get_defaultPositionWeight();

  constexpr float_t const& __cordl_internal_get_defaultPull() const;

  constexpr float_t& __cordl_internal_get_defaultPull();

  constexpr float_t const& __cordl_internal_get_defaultPush() const;

  constexpr float_t& __cordl_internal_get_defaultPush();

  constexpr float_t const& __cordl_internal_get_defaultPushParent() const;

  constexpr float_t& __cordl_internal_get_defaultPushParent();

  constexpr float_t const& __cordl_internal_get_defaultReach() const;

  constexpr float_t& __cordl_internal_get_defaultReach();

  constexpr float_t const& __cordl_internal_get_defaultRotationWeight() const;

  constexpr float_t& __cordl_internal_get_defaultRotationWeight();

  constexpr bool const& __cordl_internal_get_defaults() const;

  constexpr bool& __cordl_internal_get_defaults();

  constexpr ::RootMotion::FinalIK::IKEffector*& __cordl_internal_get_effector();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKEffector*> const& __cordl_internal_get_effector() const;

  constexpr float_t const& __cordl_internal_get_fadeInSpeed() const;

  constexpr float_t& __cordl_internal_get_fadeInSpeed();

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionSystem> const& __cordl_internal_get_interactionSystem() const;

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionSystem>& __cordl_internal_get_interactionSystem();

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionTarget> const& __cordl_internal_get_interactionTarget() const;

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionTarget>& __cordl_internal_get_interactionTarget();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr float_t& __cordl_internal_get_length();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pausePositionRelative() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pausePositionRelative();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_pauseRotationRelative() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_pauseRotationRelative();

  constexpr bool const& __cordl_internal_get_pickUpOnPostFBBIK() const;

  constexpr bool& __cordl_internal_get_pickUpOnPostFBBIK();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pickUpPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pickUpPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_pickUpRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_pickUpRotation();

  constexpr bool const& __cordl_internal_get_pickedUp() const;

  constexpr bool& __cordl_internal_get_pickedUp();

  constexpr ::UnityW<::RootMotion::FinalIK::Poser> const& __cordl_internal_get_poser() const;

  constexpr ::UnityW<::RootMotion::FinalIK::Poser>& __cordl_internal_get_poser();

  constexpr bool const& __cordl_internal_get_positionWeightUsed() const;

  constexpr bool& __cordl_internal_get_positionWeightUsed();

  constexpr bool const& __cordl_internal_get_pullUsed() const;

  constexpr bool& __cordl_internal_get_pullUsed();

  constexpr bool const& __cordl_internal_get_pushParentUsed() const;

  constexpr bool& __cordl_internal_get_pushParentUsed();

  constexpr bool const& __cordl_internal_get_pushUsed() const;

  constexpr bool& __cordl_internal_get_pushUsed();

  constexpr bool const& __cordl_internal_get_reachUsed() const;

  constexpr bool& __cordl_internal_get_reachUsed();

  constexpr float_t const& __cordl_internal_get_resetTimer() const;

  constexpr float_t& __cordl_internal_get_resetTimer();

  constexpr bool const& __cordl_internal_get_rotationWeightUsed() const;

  constexpr bool& __cordl_internal_get_rotationWeightUsed();

  constexpr bool const& __cordl_internal_get_started() const;

  constexpr bool& __cordl_internal_get_started();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr float_t const& __cordl_internal_get_timer() const;

  constexpr float_t& __cordl_internal_get_timer();

  constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_triggered();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> const& __cordl_internal_get_triggered() const;

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set__effectorType_k__BackingField(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr void __cordl_internal_set__interactionObject_k__BackingField(::UnityW<::RootMotion::FinalIK::InteractionObject> value);

  constexpr void __cordl_internal_set__isPaused_k__BackingField(bool value);

  constexpr void __cordl_internal_set_bendGoalWeightUsed(bool value);

  constexpr void __cordl_internal_set_defaultBendGoalWeight(float_t value);

  constexpr void __cordl_internal_set_defaultPositionWeight(float_t value);

  constexpr void __cordl_internal_set_defaultPull(float_t value);

  constexpr void __cordl_internal_set_defaultPush(float_t value);

  constexpr void __cordl_internal_set_defaultPushParent(float_t value);

  constexpr void __cordl_internal_set_defaultReach(float_t value);

  constexpr void __cordl_internal_set_defaultRotationWeight(float_t value);

  constexpr void __cordl_internal_set_defaults(bool value);

  constexpr void __cordl_internal_set_effector(::RootMotion::FinalIK::IKEffector* value);

  constexpr void __cordl_internal_set_fadeInSpeed(float_t value);

  constexpr void __cordl_internal_set_interactionSystem(::UnityW<::RootMotion::FinalIK::InteractionSystem> value);

  constexpr void __cordl_internal_set_interactionTarget(::UnityW<::RootMotion::FinalIK::InteractionTarget> value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_pausePositionRelative(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_pauseRotationRelative(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_pickUpOnPostFBBIK(bool value);

  constexpr void __cordl_internal_set_pickUpPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_pickUpRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_pickedUp(bool value);

  constexpr void __cordl_internal_set_poser(::UnityW<::RootMotion::FinalIK::Poser> value);

  constexpr void __cordl_internal_set_positionWeightUsed(bool value);

  constexpr void __cordl_internal_set_pullUsed(bool value);

  constexpr void __cordl_internal_set_pushParentUsed(bool value);

  constexpr void __cordl_internal_set_pushUsed(bool value);

  constexpr void __cordl_internal_set_reachUsed(bool value);

  constexpr void __cordl_internal_set_resetTimer(float_t value);

  constexpr void __cordl_internal_set_rotationWeightUsed(bool value);

  constexpr void __cordl_internal_set_started(bool value);

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_timer(float_t value);

  constexpr void __cordl_internal_set_triggered(::System::Collections::Generic::List_1<bool>* value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x1386f64, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method get_effectorType, addr 0x1386ed0, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::FullBodyBipedEffector get_effectorType();

  /// @brief Method get_inInteraction, addr 0x1386f04, size 0x60, virtual false, abstract: false, final false
  inline bool get_inInteraction();

  /// @brief Method get_interactionObject, addr 0x1386ef4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::RootMotion::FinalIK::InteractionObject> get_interactionObject();

  /// @brief Method get_isPaused, addr 0x1386ee0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPaused();

  /// @brief Method get_progress, addr 0x1389420, size 0x30, virtual false, abstract: false, final false
  inline float_t get_progress();

  /// @brief Method set_effectorType, addr 0x1386ed8, size 0x8, virtual false, abstract: false, final false
  inline void set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector value);

  /// @brief Method set_interactionObject, addr 0x1386efc, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionObject(::RootMotion::FinalIK::InteractionObject* value);

  /// @brief Method set_isPaused, addr 0x1386ee8, size 0xc, virtual false, abstract: false, final false
  inline void set_isPaused(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionEffector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractionEffector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionEffector(InteractionEffector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionEffector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionEffector(InteractionEffector const&) = delete;

  /// @brief Field <effectorType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ____effectorType_k__BackingField;

  /// @brief Field <isPaused>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____isPaused_k__BackingField;

  /// @brief Field <interactionObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::InteractionObject> ____interactionObject_k__BackingField;

  /// @brief Field poser, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::Poser> ___poser;

  /// @brief Field effector, offset: 0x28, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKEffector* ___effector;

  /// @brief Field timer, offset: 0x30, size: 0x4, def value: None
  float_t ___timer;

  /// @brief Field length, offset: 0x34, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field weight, offset: 0x38, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field fadeInSpeed, offset: 0x3c, size: 0x4, def value: None
  float_t ___fadeInSpeed;

  /// @brief Field defaultPositionWeight, offset: 0x40, size: 0x4, def value: None
  float_t ___defaultPositionWeight;

  /// @brief Field defaultRotationWeight, offset: 0x44, size: 0x4, def value: None
  float_t ___defaultRotationWeight;

  /// @brief Field defaultPull, offset: 0x48, size: 0x4, def value: None
  float_t ___defaultPull;

  /// @brief Field defaultReach, offset: 0x4c, size: 0x4, def value: None
  float_t ___defaultReach;

  /// @brief Field defaultPush, offset: 0x50, size: 0x4, def value: None
  float_t ___defaultPush;

  /// @brief Field defaultPushParent, offset: 0x54, size: 0x4, def value: None
  float_t ___defaultPushParent;

  /// @brief Field defaultBendGoalWeight, offset: 0x58, size: 0x4, def value: None
  float_t ___defaultBendGoalWeight;

  /// @brief Field resetTimer, offset: 0x5c, size: 0x4, def value: None
  float_t ___resetTimer;

  /// @brief Field positionWeightUsed, offset: 0x60, size: 0x1, def value: None
  bool ___positionWeightUsed;

  /// @brief Field rotationWeightUsed, offset: 0x61, size: 0x1, def value: None
  bool ___rotationWeightUsed;

  /// @brief Field pullUsed, offset: 0x62, size: 0x1, def value: None
  bool ___pullUsed;

  /// @brief Field reachUsed, offset: 0x63, size: 0x1, def value: None
  bool ___reachUsed;

  /// @brief Field pushUsed, offset: 0x64, size: 0x1, def value: None
  bool ___pushUsed;

  /// @brief Field pushParentUsed, offset: 0x65, size: 0x1, def value: None
  bool ___pushParentUsed;

  /// @brief Field bendGoalWeightUsed, offset: 0x66, size: 0x1, def value: None
  bool ___bendGoalWeightUsed;

  /// @brief Field pickedUp, offset: 0x67, size: 0x1, def value: None
  bool ___pickedUp;

  /// @brief Field defaults, offset: 0x68, size: 0x1, def value: None
  bool ___defaults;

  /// @brief Field pickUpOnPostFBBIK, offset: 0x69, size: 0x1, def value: None
  bool ___pickUpOnPostFBBIK;

  /// @brief Field pickUpPosition, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pickUpPosition;

  /// @brief Field pausePositionRelative, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pausePositionRelative;

  /// @brief Field pickUpRotation, offset: 0x84, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___pickUpRotation;

  /// @brief Field pauseRotationRelative, offset: 0x94, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___pauseRotationRelative;

  /// @brief Field interactionTarget, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::InteractionTarget> ___interactionTarget;

  /// @brief Field target, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field triggered, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<bool>* ___triggered;

  /// @brief Field interactionSystem, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::InteractionSystem> ___interactionSystem;

  /// @brief Field started, offset: 0xc8, size: 0x1, def value: None
  bool ___started;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::InteractionEffector, 0xd0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ____effectorType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ____isPaused_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ____interactionObject_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___poser) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___effector) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___timer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___length) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___weight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___fadeInSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___defaultPositionWeight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___defaultRotationWeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___defaultPull) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___defaultReach) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___defaultPush) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___defaultPushParent) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___defaultBendGoalWeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___resetTimer) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___positionWeightUsed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___rotationWeightUsed) == 0x61, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___pullUsed) == 0x62, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___reachUsed) == 0x63, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___pushUsed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___pushParentUsed) == 0x65, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___bendGoalWeightUsed) == 0x66, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___pickedUp) == 0x67, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___defaults) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___pickUpOnPostFBBIK) == 0x69, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___pickUpPosition) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___pausePositionRelative) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___pickUpRotation) == 0x84, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___pauseRotationRelative) == 0x94, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___interactionTarget) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___target) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___triggered) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___interactionSystem) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionEffector, ___started) == 0xc8, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::InteractionEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionEffector*, "RootMotion.FinalIK", "InteractionEffector");
