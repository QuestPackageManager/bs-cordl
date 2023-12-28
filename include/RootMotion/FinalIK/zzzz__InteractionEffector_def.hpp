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
class IKEffector;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class Poser;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace RootMotion::FinalIK {
class InteractionSystem;
}
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12571)),
// TypeDefinitionIndex(TypeDefinitionIndex(10252))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12595)) CS Name: ::RootMotion.FinalIK::InteractionEffector*
class CORDL_TYPE InteractionEffector : public ::System::Object {
public:
  // Declarations
  /// @brief Field <effectorType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__effectorType_k__BackingField, put = __set__effectorType_k__BackingField))::RootMotion::FinalIK::FullBodyBipedEffector _effectorType_k__BackingField;

  /// @brief Field <isPaused>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __get__isPaused_k__BackingField, put = __set__isPaused_k__BackingField)) bool _isPaused_k__BackingField;

  /// @brief Field <interactionObject>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__interactionObject_k__BackingField, put = __set__interactionObject_k__BackingField))::RootMotion::FinalIK::InteractionObject* _interactionObject_k__BackingField;

  /// @brief Field poser, offset 0x20, size 0x8
  __declspec(property(get = __get_poser, put = __set_poser))::RootMotion::FinalIK::Poser* poser;

  /// @brief Field effector, offset 0x28, size 0x8
  __declspec(property(get = __get_effector, put = __set_effector))::RootMotion::FinalIK::IKEffector* effector;

  /// @brief Field timer, offset 0x30, size 0x4
  __declspec(property(get = __get_timer, put = __set_timer)) float_t timer;

  /// @brief Field length, offset 0x34, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) float_t length;

  /// @brief Field weight, offset 0x38, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field fadeInSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __get_fadeInSpeed, put = __set_fadeInSpeed)) float_t fadeInSpeed;

  /// @brief Field defaultPositionWeight, offset 0x40, size 0x4
  __declspec(property(get = __get_defaultPositionWeight, put = __set_defaultPositionWeight)) float_t defaultPositionWeight;

  /// @brief Field defaultRotationWeight, offset 0x44, size 0x4
  __declspec(property(get = __get_defaultRotationWeight, put = __set_defaultRotationWeight)) float_t defaultRotationWeight;

  /// @brief Field defaultPull, offset 0x48, size 0x4
  __declspec(property(get = __get_defaultPull, put = __set_defaultPull)) float_t defaultPull;

  /// @brief Field defaultReach, offset 0x4c, size 0x4
  __declspec(property(get = __get_defaultReach, put = __set_defaultReach)) float_t defaultReach;

  /// @brief Field defaultPush, offset 0x50, size 0x4
  __declspec(property(get = __get_defaultPush, put = __set_defaultPush)) float_t defaultPush;

  /// @brief Field defaultPushParent, offset 0x54, size 0x4
  __declspec(property(get = __get_defaultPushParent, put = __set_defaultPushParent)) float_t defaultPushParent;

  /// @brief Field defaultBendGoalWeight, offset 0x58, size 0x4
  __declspec(property(get = __get_defaultBendGoalWeight, put = __set_defaultBendGoalWeight)) float_t defaultBendGoalWeight;

  /// @brief Field resetTimer, offset 0x5c, size 0x4
  __declspec(property(get = __get_resetTimer, put = __set_resetTimer)) float_t resetTimer;

  /// @brief Field positionWeightUsed, offset 0x60, size 0x1
  __declspec(property(get = __get_positionWeightUsed, put = __set_positionWeightUsed)) bool positionWeightUsed;

  /// @brief Field rotationWeightUsed, offset 0x61, size 0x1
  __declspec(property(get = __get_rotationWeightUsed, put = __set_rotationWeightUsed)) bool rotationWeightUsed;

  /// @brief Field pullUsed, offset 0x62, size 0x1
  __declspec(property(get = __get_pullUsed, put = __set_pullUsed)) bool pullUsed;

  /// @brief Field reachUsed, offset 0x63, size 0x1
  __declspec(property(get = __get_reachUsed, put = __set_reachUsed)) bool reachUsed;

  /// @brief Field pushUsed, offset 0x64, size 0x1
  __declspec(property(get = __get_pushUsed, put = __set_pushUsed)) bool pushUsed;

  /// @brief Field pushParentUsed, offset 0x65, size 0x1
  __declspec(property(get = __get_pushParentUsed, put = __set_pushParentUsed)) bool pushParentUsed;

  /// @brief Field bendGoalWeightUsed, offset 0x66, size 0x1
  __declspec(property(get = __get_bendGoalWeightUsed, put = __set_bendGoalWeightUsed)) bool bendGoalWeightUsed;

  /// @brief Field pickedUp, offset 0x67, size 0x1
  __declspec(property(get = __get_pickedUp, put = __set_pickedUp)) bool pickedUp;

  /// @brief Field defaults, offset 0x68, size 0x1
  __declspec(property(get = __get_defaults, put = __set_defaults)) bool defaults;

  /// @brief Field pickUpOnPostFBBIK, offset 0x69, size 0x1
  __declspec(property(get = __get_pickUpOnPostFBBIK, put = __set_pickUpOnPostFBBIK)) bool pickUpOnPostFBBIK;

  /// @brief Field pickUpPosition, offset 0x6c, size 0xc
  __declspec(property(get = __get_pickUpPosition, put = __set_pickUpPosition))::UnityEngine::Vector3 pickUpPosition;

  /// @brief Field pausePositionRelative, offset 0x78, size 0xc
  __declspec(property(get = __get_pausePositionRelative, put = __set_pausePositionRelative))::UnityEngine::Vector3 pausePositionRelative;

  /// @brief Field pickUpRotation, offset 0x84, size 0x10
  __declspec(property(get = __get_pickUpRotation, put = __set_pickUpRotation))::UnityEngine::Quaternion pickUpRotation;

  /// @brief Field pauseRotationRelative, offset 0x94, size 0x10
  __declspec(property(get = __get_pauseRotationRelative, put = __set_pauseRotationRelative))::UnityEngine::Quaternion pauseRotationRelative;

  /// @brief Field interactionTarget, offset 0xa8, size 0x8
  __declspec(property(get = __get_interactionTarget, put = __set_interactionTarget))::RootMotion::FinalIK::InteractionTarget* interactionTarget;

  /// @brief Field target, offset 0xb0, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::UnityEngine::Transform* target;

  /// @brief Field triggered, offset 0xb8, size 0x8
  __declspec(property(get = __get_triggered, put = __set_triggered))::System::Collections::Generic::List_1<bool>* triggered;

  /// @brief Field interactionSystem, offset 0xc0, size 0x8
  __declspec(property(get = __get_interactionSystem, put = __set_interactionSystem))::RootMotion::FinalIK::InteractionSystem* interactionSystem;

  /// @brief Field started, offset 0xc8, size 0x1
  __declspec(property(get = __get_started, put = __set_started)) bool started;

  __declspec(property(get = get_effectorType, put = set_effectorType))::RootMotion::FinalIK::FullBodyBipedEffector effectorType;

  __declspec(property(get = get_isPaused, put = set_isPaused)) bool isPaused;

  __declspec(property(get = get_interactionObject, put = set_interactionObject))::RootMotion::FinalIK::InteractionObject* interactionObject;

  __declspec(property(get = get_inInteraction)) bool inInteraction;

  __declspec(property(get = get_progress)) float_t progress;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __get__effectorType_k__BackingField();

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __get__effectorType_k__BackingField() const;

  constexpr void __set__effectorType_k__BackingField(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr bool& __get__isPaused_k__BackingField();

  constexpr bool const& __get__isPaused_k__BackingField() const;

  constexpr void __set__isPaused_k__BackingField(bool value);

  constexpr ::RootMotion::FinalIK::InteractionObject*& __get__interactionObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionObject*> const& __get__interactionObject_k__BackingField() const;

  constexpr void __set__interactionObject_k__BackingField(::RootMotion::FinalIK::InteractionObject* value);

  constexpr ::RootMotion::FinalIK::Poser*& __get_poser();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Poser*> const& __get_poser() const;

  constexpr void __set_poser(::RootMotion::FinalIK::Poser* value);

  constexpr ::RootMotion::FinalIK::IKEffector*& __get_effector();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKEffector*> const& __get_effector() const;

  constexpr void __set_effector(::RootMotion::FinalIK::IKEffector* value);

  constexpr float_t& __get_timer();

  constexpr float_t const& __get_timer() const;

  constexpr void __set_timer(float_t value);

  constexpr float_t& __get_length();

  constexpr float_t const& __get_length() const;

  constexpr void __set_length(float_t value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr float_t& __get_fadeInSpeed();

  constexpr float_t const& __get_fadeInSpeed() const;

  constexpr void __set_fadeInSpeed(float_t value);

  constexpr float_t& __get_defaultPositionWeight();

  constexpr float_t const& __get_defaultPositionWeight() const;

  constexpr void __set_defaultPositionWeight(float_t value);

  constexpr float_t& __get_defaultRotationWeight();

  constexpr float_t const& __get_defaultRotationWeight() const;

  constexpr void __set_defaultRotationWeight(float_t value);

  constexpr float_t& __get_defaultPull();

  constexpr float_t const& __get_defaultPull() const;

  constexpr void __set_defaultPull(float_t value);

  constexpr float_t& __get_defaultReach();

  constexpr float_t const& __get_defaultReach() const;

  constexpr void __set_defaultReach(float_t value);

  constexpr float_t& __get_defaultPush();

  constexpr float_t const& __get_defaultPush() const;

  constexpr void __set_defaultPush(float_t value);

  constexpr float_t& __get_defaultPushParent();

  constexpr float_t const& __get_defaultPushParent() const;

  constexpr void __set_defaultPushParent(float_t value);

  constexpr float_t& __get_defaultBendGoalWeight();

  constexpr float_t const& __get_defaultBendGoalWeight() const;

  constexpr void __set_defaultBendGoalWeight(float_t value);

  constexpr float_t& __get_resetTimer();

  constexpr float_t const& __get_resetTimer() const;

  constexpr void __set_resetTimer(float_t value);

  constexpr bool& __get_positionWeightUsed();

  constexpr bool const& __get_positionWeightUsed() const;

  constexpr void __set_positionWeightUsed(bool value);

  constexpr bool& __get_rotationWeightUsed();

  constexpr bool const& __get_rotationWeightUsed() const;

  constexpr void __set_rotationWeightUsed(bool value);

  constexpr bool& __get_pullUsed();

  constexpr bool const& __get_pullUsed() const;

  constexpr void __set_pullUsed(bool value);

  constexpr bool& __get_reachUsed();

  constexpr bool const& __get_reachUsed() const;

  constexpr void __set_reachUsed(bool value);

  constexpr bool& __get_pushUsed();

  constexpr bool const& __get_pushUsed() const;

  constexpr void __set_pushUsed(bool value);

  constexpr bool& __get_pushParentUsed();

  constexpr bool const& __get_pushParentUsed() const;

  constexpr void __set_pushParentUsed(bool value);

  constexpr bool& __get_bendGoalWeightUsed();

  constexpr bool const& __get_bendGoalWeightUsed() const;

  constexpr void __set_bendGoalWeightUsed(bool value);

  constexpr bool& __get_pickedUp();

  constexpr bool const& __get_pickedUp() const;

  constexpr void __set_pickedUp(bool value);

  constexpr bool& __get_defaults();

  constexpr bool const& __get_defaults() const;

  constexpr void __set_defaults(bool value);

  constexpr bool& __get_pickUpOnPostFBBIK();

  constexpr bool const& __get_pickUpOnPostFBBIK() const;

  constexpr void __set_pickUpOnPostFBBIK(bool value);

  constexpr ::UnityEngine::Vector3& __get_pickUpPosition();

  constexpr ::UnityEngine::Vector3 const& __get_pickUpPosition() const;

  constexpr void __set_pickUpPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_pausePositionRelative();

  constexpr ::UnityEngine::Vector3 const& __get_pausePositionRelative() const;

  constexpr void __set_pausePositionRelative(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_pickUpRotation();

  constexpr ::UnityEngine::Quaternion const& __get_pickUpRotation() const;

  constexpr void __set_pickUpRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_pauseRotationRelative();

  constexpr ::UnityEngine::Quaternion const& __get_pauseRotationRelative() const;

  constexpr void __set_pauseRotationRelative(::UnityEngine::Quaternion value);

  constexpr ::RootMotion::FinalIK::InteractionTarget*& __get_interactionTarget();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionTarget*> const& __get_interactionTarget() const;

  constexpr void __set_interactionTarget(::RootMotion::FinalIK::InteractionTarget* value);

  constexpr ::UnityEngine::Transform*& __get_target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_target() const;

  constexpr void __set_target(::UnityEngine::Transform* value);

  constexpr ::System::Collections::Generic::List_1<bool>*& __get_triggered();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> const& __get_triggered() const;

  constexpr void __set_triggered(::System::Collections::Generic::List_1<bool>* value);

  constexpr ::RootMotion::FinalIK::InteractionSystem*& __get_interactionSystem();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionSystem*> const& __get_interactionSystem() const;

  constexpr void __set_interactionSystem(::RootMotion::FinalIK::InteractionSystem* value);

  constexpr bool& __get_started();

  constexpr bool const& __get_started() const;

  constexpr void __set_started(bool value);

  /// @brief Method get_effectorType addr 0x12838dc size 0x8 virtual false final false
  inline ::RootMotion::FinalIK::FullBodyBipedEffector get_effectorType();

  /// @brief Method set_effectorType addr 0x12838e4 size 0x8 virtual false final false
  inline void set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector value);

  /// @brief Method get_isPaused addr 0x12838ec size 0x8 virtual false final false
  inline bool get_isPaused();

  /// @brief Method set_isPaused addr 0x12838f4 size 0xc virtual false final false
  inline void set_isPaused(bool value);

  /// @brief Method get_interactionObject addr 0x1283900 size 0x8 virtual false final false
  inline ::RootMotion::FinalIK::InteractionObject* get_interactionObject();

  /// @brief Method set_interactionObject addr 0x1283908 size 0x8 virtual false final false
  inline void set_interactionObject(::RootMotion::FinalIK::InteractionObject* value);

  /// @brief Method get_inInteraction addr 0x1283910 size 0x60 virtual false final false
  inline bool get_inInteraction();

  static inline ::RootMotion::FinalIK::InteractionEffector* New_ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method .ctor addr 0x1283970 size 0x90 virtual false final false
  inline void _ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method Initiate addr 0x1283a00 size 0x94 virtual false final false
  inline void Initiate(::RootMotion::FinalIK::InteractionSystem* interactionSystem);

  /// @brief Method StoreDefaults addr 0x1283a94 size 0x16c virtual false final false
  inline void StoreDefaults();

  /// @brief Method ResetToDefaults addr 0x1283c00 size 0x3dc virtual false final false
  inline bool ResetToDefaults(float_t speed);

  /// @brief Method Pause addr 0x1283fdc size 0x120 virtual false final false
  inline bool Pause();

  /// @brief Method Resume addr 0x12840fc size 0x54 virtual false final false
  inline bool Resume();

  /// @brief Method Start addr 0x1284150 size 0x48c virtual false final false
  inline bool Start(::RootMotion::FinalIK::InteractionObject* interactionObject, ::StringW tag, float_t fadeInTime, bool interrupt);

  /// @brief Method Update addr 0x1284c58 size 0x640 virtual false final false
  inline void Update(::UnityEngine::Transform* root, float_t speed);

  /// @brief Method get_progress addr 0x1285e2c size 0x30 virtual false final false
  inline float_t get_progress();

  /// @brief Method TriggerUntriggeredEvents addr 0x12856a0 size 0x220 virtual false final false
  inline void TriggerUntriggeredEvents(bool checkTime, ByRef<bool> pickUp, ByRef<bool> pause);

  /// @brief Method PickUp addr 0x12858c0 size 0x218 virtual false final false
  inline void PickUp(::UnityEngine::Transform* root);

  /// @brief Method Stop addr 0x1285ce4 size 0x148 virtual false final false
  inline bool Stop();

  /// @brief Method OnPostFBBIK addr 0x128602c size 0x23c virtual false final false
  inline void OnPostFBBIK();

  // Ctor Parameters [CppParam { name: "", ty: "InteractionEffector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionEffector(InteractionEffector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionEffector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionEffector(InteractionEffector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionEffector();

public:
  /// @brief Field <effectorType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ____effectorType_k__BackingField;

  /// @brief Field <isPaused>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____isPaused_k__BackingField;

  /// @brief Field <interactionObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::RootMotion::FinalIK::InteractionObject* ____interactionObject_k__BackingField;

  /// @brief Field poser, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::Poser* ___poser;

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
  ::RootMotion::FinalIK::InteractionTarget* ___interactionTarget;

  /// @brief Field target, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Transform* ___target;

  /// @brief Field triggered, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<bool>* ___triggered;

  /// @brief Field interactionSystem, offset: 0xc0, size: 0x8, def value: None
  ::RootMotion::FinalIK::InteractionSystem* ___interactionSystem;

  /// @brief Field started, offset: 0xc8, size: 0x1, def value: None
  bool ___started;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::InteractionEffector, 0xd0>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::InteractionEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionEffector*, "RootMotion.FinalIK", "InteractionEffector");
