#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/MetaQuestTouchPlusControllerProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MetaQuestTouchPlusControllerProfile)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class MetaQuestTouchPlusControllerProfile_QuestTouchPlusController;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class MetaQuestTouchPlusControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class MetaQuestTouchPlusControllerProfile_QuestTouchPlusController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController);
// Dependencies UnityEngine.InputSystem.XR.XRControllerWithRumble
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MetaQuestTouchPlusControllerProfile/QuestTouchPlusController
class CORDL_TYPE MetaQuestTouchPlusControllerProfile_QuestTouchPlusController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <devicePose>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePose_k__BackingField,
                      put = __cordl_internal_set__devicePose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePosition_k__BackingField,
                      put = __cordl_internal_set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceRotation_k__BackingField,
                      put = __cordl_internal_set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__gripPressed_k__BackingField,
                      put = __cordl_internal_set__gripPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__grip_k__BackingField, put = __cordl_internal_set__grip_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get__haptic_k__BackingField, put = __cordl_internal_set__haptic_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::HapticControl* _haptic_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__menu_k__BackingField, put = __cordl_internal_set__menu_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerPosition_k__BackingField,
                      put = __cordl_internal_set__pointerPosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerRotation_k__BackingField,
                      put = __cordl_internal_set__pointerRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get__pointer_k__BackingField,
                      put = __cordl_internal_set__pointer_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <primaryButton>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryButton_k__BackingField,
                      put = __cordl_internal_set__primaryButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField;

  /// @brief Field <primaryTouched>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryTouched_k__BackingField,
                      put = __cordl_internal_set__primaryTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _primaryTouched_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__secondaryButton_k__BackingField,
                      put = __cordl_internal_set__secondaryButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField;

  /// @brief Field <secondaryTouched>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__secondaryTouched_k__BackingField,
                      put = __cordl_internal_set__secondaryTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryTouched_k__BackingField;

  /// @brief Field <thumbProximity>k__BackingField, offset 0x280, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbProximity_k__BackingField,
                      put = __cordl_internal_set__thumbProximity_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thumbProximity_k__BackingField;

  /// @brief Field <thumbrestTouched>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbrestTouched_k__BackingField,
                      put = __cordl_internal_set__thumbrestTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thumbrestTouched_k__BackingField;

  /// @brief Field <thumbstickClicked>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstickClicked_k__BackingField,
                      put = __cordl_internal_set__thumbstickClicked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField;

  /// @brief Field <thumbstickTouched>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstickTouched_k__BackingField,
                      put = __cordl_internal_set__thumbstickTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickTouched_k__BackingField;

  /// @brief Field <thumbstick>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstick_k__BackingField,
                      put = __cordl_internal_set__thumbstick_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <triggerCurl>k__BackingField, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerCurl_k__BackingField,
                      put = __cordl_internal_set__triggerCurl_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _triggerCurl_k__BackingField;

  /// @brief Field <triggerForce>k__BackingField, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerForce_k__BackingField,
                      put = __cordl_internal_set__triggerForce_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _triggerForce_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerPressed_k__BackingField,
                      put = __cordl_internal_set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <triggerProximity>k__BackingField, offset 0x278, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerProximity_k__BackingField,
                      put = __cordl_internal_set__triggerProximity_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _triggerProximity_k__BackingField;

  /// @brief Field <triggerSlide>k__BackingField, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerSlide_k__BackingField,
                      put = __cordl_internal_set__triggerSlide_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _triggerSlide_k__BackingField;

  /// @brief Field <triggerTouched>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerTouched_k__BackingField,
                      put = __cordl_internal_set__triggerTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _triggerTouched_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__trigger_k__BackingField,
                      put = __cordl_internal_set__trigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  __declspec(property(get = get_devicePose, put = set_devicePose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_devicePosition, put = set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_grip, put = set_grip)) ::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_haptic, put = set_haptic)) ::UnityEngine::XR::OpenXR::Input::HapticControl* haptic;

  __declspec(property(get = get_isTracked, put = set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_menu, put = set_menu)) ::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_pointer, put = set_pointer)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  __declspec(property(get = get_primaryButton, put = set_primaryButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* primaryButton;

  __declspec(property(get = get_primaryTouched, put = set_primaryTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* primaryTouched;

  __declspec(property(get = get_secondaryButton, put = set_secondaryButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* secondaryButton;

  __declspec(property(get = get_secondaryTouched, put = set_secondaryTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* secondaryTouched;

  __declspec(property(get = get_thumbProximity, put = set_thumbProximity)) ::UnityEngine::InputSystem::Controls::ButtonControl* thumbProximity;

  __declspec(property(get = get_thumbrestTouched, put = set_thumbrestTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* thumbrestTouched;

  __declspec(property(get = get_thumbstick, put = set_thumbstick)) ::UnityEngine::InputSystem::Controls::Vector2Control* thumbstick;

  __declspec(property(get = get_thumbstickClicked, put = set_thumbstickClicked)) ::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickClicked;

  __declspec(property(get = get_thumbstickTouched, put = set_thumbstickTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickTouched;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_trigger, put = set_trigger)) ::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerCurl, put = set_triggerCurl)) ::UnityEngine::InputSystem::Controls::AxisControl* triggerCurl;

  __declspec(property(get = get_triggerForce, put = set_triggerForce)) ::UnityEngine::InputSystem::Controls::AxisControl* triggerForce;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  __declspec(property(get = get_triggerProximity, put = set_triggerProximity)) ::UnityEngine::InputSystem::Controls::ButtonControl* triggerProximity;

  __declspec(property(get = get_triggerSlide, put = set_triggerSlide)) ::UnityEngine::InputSystem::Controls::AxisControl* triggerSlide;

  __declspec(property(get = get_triggerTouched, put = set_triggerTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* triggerTouched;

  /// @brief Method FinishSetup, addr 0x683e52c, size 0x5d0, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController* New_ctor();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__devicePose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__devicePose_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__devicePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__devicePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__deviceRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__deviceRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__gripPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__grip_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const& __cordl_internal_get__haptic_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*& __cordl_internal_get__haptic_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__isTracked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__menu_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menu_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__pointerPosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__pointerPosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__pointerRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__pointerRotation_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pointer_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pointer_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primaryButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primaryButton_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primaryTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primaryTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__secondaryButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondaryButton_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__secondaryTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondaryTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbProximity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbProximity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbrestTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbrestTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickClicked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickClicked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__thumbstick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__thumbstick_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__triggerCurl_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__triggerCurl_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__triggerForce_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__triggerForce_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerProximity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerProximity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__triggerSlide_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__triggerSlide_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__trigger_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField();

  constexpr void __cordl_internal_set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__primaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__secondaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbProximity_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbrestTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr void __cordl_internal_set__triggerCurl_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__triggerForce_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__triggerProximity_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__triggerSlide_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__triggerTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x683eafc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_devicePose, addr 0x683e44c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method get_devicePosition, addr 0x683e48c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method get_deviceRotation, addr 0x683e49c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method get_grip, addr 0x683e37c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method get_gripPressed, addr 0x683e38c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method get_haptic, addr 0x683e4cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::HapticControl* get_haptic();

  /// @brief Method get_isTracked, addr 0x683e46c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_menu, addr 0x683e39c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method get_pointer, addr 0x683e45c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method get_pointerPosition, addr 0x683e4ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method get_pointerRotation, addr 0x683e4bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method get_primaryButton, addr 0x683e3ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton();

  /// @brief Method get_primaryTouched, addr 0x683e3bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryTouched();

  /// @brief Method get_secondaryButton, addr 0x683e3cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton();

  /// @brief Method get_secondaryTouched, addr 0x683e3dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryTouched();

  /// @brief Method get_thumbProximity, addr 0x683e51c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbProximity();

  /// @brief Method get_thumbrestTouched, addr 0x683e43c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbrestTouched();

  /// @brief Method get_thumbstick, addr 0x683e36c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick();

  /// @brief Method get_thumbstickClicked, addr 0x683e41c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked();

  /// @brief Method get_thumbstickTouched, addr 0x683e42c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched();

  /// @brief Method get_trackingState, addr 0x683e47c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method get_trigger, addr 0x683e3ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method get_triggerCurl, addr 0x683e4ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_triggerCurl();

  /// @brief Method get_triggerForce, addr 0x683e4dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_triggerForce();

  /// @brief Method get_triggerPressed, addr 0x683e3fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method get_triggerProximity, addr 0x683e50c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerProximity();

  /// @brief Method get_triggerSlide, addr 0x683e4fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_triggerSlide();

  /// @brief Method get_triggerTouched, addr 0x683e40c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerTouched();

  /// @brief Method set_devicePose, addr 0x683e454, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_devicePosition, addr 0x683e494, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceRotation, addr 0x683e4a4, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_grip, addr 0x683e384, size 0x8, virtual false, abstract: false, final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_gripPressed, addr 0x683e394, size 0x8, virtual false, abstract: false, final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_haptic, addr 0x683e4d4, size 0x8, virtual false, abstract: false, final false
  inline void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method set_isTracked, addr 0x683e474, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_menu, addr 0x683e3a4, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pointer, addr 0x683e464, size 0x8, virtual false, abstract: false, final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pointerPosition, addr 0x683e4b4, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_pointerRotation, addr 0x683e4c4, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_primaryButton, addr 0x683e3b4, size 0x8, virtual false, abstract: false, final false
  inline void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_primaryTouched, addr 0x683e3c4, size 0x8, virtual false, abstract: false, final false
  inline void set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_secondaryButton, addr 0x683e3d4, size 0x8, virtual false, abstract: false, final false
  inline void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_secondaryTouched, addr 0x683e3e4, size 0x8, virtual false, abstract: false, final false
  inline void set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_thumbProximity, addr 0x683e524, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbProximity(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_thumbrestTouched, addr 0x683e444, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbrestTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_thumbstick, addr 0x683e374, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_thumbstickClicked, addr 0x683e424, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_thumbstickTouched, addr 0x683e434, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackingState, addr 0x683e484, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method set_trigger, addr 0x683e3f4, size 0x8, virtual false, abstract: false, final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_triggerCurl, addr 0x683e4f4, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerCurl(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_triggerForce, addr 0x683e4e4, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerForce(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_triggerPressed, addr 0x683e404, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_triggerProximity, addr 0x683e514, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerProximity(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_triggerSlide, addr 0x683e504, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerSlide(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_triggerTouched, addr 0x683e414, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaQuestTouchPlusControllerProfile_QuestTouchPlusController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaQuestTouchPlusControllerProfile_QuestTouchPlusController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaQuestTouchPlusControllerProfile_QuestTouchPlusController(MetaQuestTouchPlusControllerProfile_QuestTouchPlusController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaQuestTouchPlusControllerProfile_QuestTouchPlusController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaQuestTouchPlusControllerProfile_QuestTouchPlusController(MetaQuestTouchPlusControllerProfile_QuestTouchPlusController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18549 };

  /// @brief Field <thumbstick>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____thumbstick_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <primaryButton>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primaryButton_k__BackingField;

  /// @brief Field <primaryTouched>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primaryTouched_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryButton_k__BackingField;

  /// @brief Field <secondaryTouched>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryTouched_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <triggerTouched>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerTouched_k__BackingField;

  /// @brief Field <thumbstickClicked>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickClicked_k__BackingField;

  /// @brief Field <thumbstickTouched>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickTouched_k__BackingField;

  /// @brief Field <thumbrestTouched>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbrestTouched_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x248, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset: 0x258, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::HapticControl* ____haptic_k__BackingField;

  /// @brief Field <triggerForce>k__BackingField, offset: 0x260, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____triggerForce_k__BackingField;

  /// @brief Field <triggerCurl>k__BackingField, offset: 0x268, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____triggerCurl_k__BackingField;

  /// @brief Field <triggerSlide>k__BackingField, offset: 0x270, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____triggerSlide_k__BackingField;

  /// @brief Field <triggerProximity>k__BackingField, offset: 0x278, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerProximity_k__BackingField;

  /// @brief Field <thumbProximity>k__BackingField, offset: 0x280, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbProximity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____thumbstick_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____grip_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____gripPressed_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____menu_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____primaryButton_k__BackingField) == 0x1c8,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____primaryTouched_k__BackingField) == 0x1d0,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____secondaryButton_k__BackingField) == 0x1d8,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____secondaryTouched_k__BackingField) == 0x1e0,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____trigger_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____triggerPressed_k__BackingField) == 0x1f0,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____triggerTouched_k__BackingField) == 0x1f8,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____thumbstickClicked_k__BackingField) == 0x200,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____thumbstickTouched_k__BackingField) == 0x208,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____thumbrestTouched_k__BackingField) == 0x210,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____devicePose_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____pointer_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____isTracked_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____trackingState_k__BackingField) == 0x230,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____devicePosition_k__BackingField) == 0x238,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____deviceRotation_k__BackingField) == 0x240,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____pointerPosition_k__BackingField) == 0x248,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____pointerRotation_k__BackingField) == 0x250,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____haptic_k__BackingField) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____triggerForce_k__BackingField) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____triggerCurl_k__BackingField) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____triggerSlide_k__BackingField) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____triggerProximity_k__BackingField) == 0x278,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, ____thumbProximity_k__BackingField) == 0x280,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController, 0x288>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MetaQuestTouchPlusControllerProfile
class CORDL_TYPE MetaQuestTouchPlusControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using QuestTouchPlusController = ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController;

  /// @brief Method GetDeviceLayoutName, addr 0x68381a8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x6837f84, size 0x6c, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x68381ec, size 0x339c, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x6837ff0, size 0x148, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x6838138, size 0x70, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  /// @brief Method .ctor, addr 0x683b588, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaQuestTouchPlusControllerProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaQuestTouchPlusControllerProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaQuestTouchPlusControllerProfile(MetaQuestTouchPlusControllerProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaQuestTouchPlusControllerProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaQuestTouchPlusControllerProfile(MetaQuestTouchPlusControllerProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18550 };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field buttonA offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonA{ u"/input/a/click" };

  /// @brief Field buttonATouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonATouch{ u"/input/a/touch" };

  /// @brief Field buttonB offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonB{ u"/input/b/click" };

  /// @brief Field buttonBTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonBTouch{ u"/input/b/touch" };

  /// @brief Field buttonX offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonX{ u"/input/x/click" };

  /// @brief Field buttonXTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonXTouch{ u"/input/x/touch" };

  /// @brief Field buttonY offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonY{ u"/input/y/click" };

  /// @brief Field buttonYTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonYTouch{ u"/input/y/touch" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.metaquestplus" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field haptic offset 0xffffffff size 0x8
  static constexpr ::ConstString haptic{ u"/output/haptic" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"Meta Quest Touch Plus Controller OpenXR" };

  /// @brief Field menu offset 0xffffffff size 0x8
  static constexpr ::ConstString menu{ u"/input/menu/click" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/meta/touch_controller_plus" };

  /// @brief Field squeeze offset 0xffffffff size 0x8
  static constexpr ::ConstString squeeze{ u"/input/squeeze/value" };

  /// @brief Field system offset 0xffffffff size 0x8
  static constexpr ::ConstString system{ u"/input/system/click" };

  /// @brief Field thumbProximity offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbProximity{ u"/input/thumb_meta/proximity_meta" };

  /// @brief Field thumbrest offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbrest{ u"/input/thumbrest/touch" };

  /// @brief Field thumbstick offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstick{ u"/input/thumbstick" };

  /// @brief Field thumbstickClick offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickClick{ u"/input/thumbstick/click" };

  /// @brief Field thumbstickTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickTouch{ u"/input/thumbstick/touch" };

  /// @brief Field trigger offset 0xffffffff size 0x8
  static constexpr ::ConstString trigger{ u"/input/trigger/value" };

  /// @brief Field triggerCurl offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerCurl{ u"/input/trigger/curl_meta" };

  /// @brief Field triggerForce offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerForce{ u"/input/trigger/force" };

  /// @brief Field triggerProximity offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerProximity{ u"/input/trigger/proximity_meta" };

  /// @brief Field triggerSlide offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerSlide{ u"/input/trigger/slide_meta" };

  /// @brief Field triggerTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerTouch{ u"/input/trigger/touch" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "MetaQuestTouchPlusControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchPlusControllerProfile_QuestTouchPlusController*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "MetaQuestTouchPlusControllerProfile/QuestTouchPlusController");
