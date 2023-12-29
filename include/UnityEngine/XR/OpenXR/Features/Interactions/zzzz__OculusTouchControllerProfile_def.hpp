#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
CORDL_MODULE_EXPORT(OculusTouchControllerProfile)
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __OculusTouchControllerProfile__OculusTouchController;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class OculusTouchControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __OculusTouchControllerProfile__OculusTouchController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController);
// Type: ::OculusTouchController
// SizeInfo { instance_size: 552, native_size: -1, calculated_instance_size: 552, calculated_native_size: 552, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6412))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14460))
// CS Name: ::OculusTouchControllerProfile::OculusTouchController*
class CORDL_TYPE __OculusTouchControllerProfile__OculusTouchController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <thumbstick>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__thumbstick_k__BackingField, put = __set__thumbstick_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__grip_k__BackingField, put = __set__grip_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__gripPressed_k__BackingField, put = __set__gripPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__menu_k__BackingField, put = __set__menu_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <primaryButton>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__primaryButton_k__BackingField, put = __set__primaryButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField;

  /// @brief Field <primaryTouched>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__primaryTouched_k__BackingField, put = __set__primaryTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primaryTouched_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__secondaryButton_k__BackingField, put = __set__secondaryButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField;

  /// @brief Field <secondaryTouched>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__secondaryTouched_k__BackingField,
                      put = __set__secondaryTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryTouched_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__trigger_k__BackingField, put = __set__trigger_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__triggerPressed_k__BackingField, put = __set__triggerPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <triggerTouched>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __get__triggerTouched_k__BackingField, put = __set__triggerTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerTouched_k__BackingField;

  /// @brief Field <thumbstickClicked>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __get__thumbstickClicked_k__BackingField,
                      put = __set__thumbstickClicked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField;

  /// @brief Field <thumbstickTouched>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __get__thumbstickTouched_k__BackingField,
                      put = __set__thumbstickTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickTouched_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __get__devicePose_k__BackingField, put = __set__devicePose_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __get__pointer_k__BackingField, put = __set__pointer_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __get__isTracked_k__BackingField, put = __set__isTracked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __get__trackingState_k__BackingField, put = __set__trackingState_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __get__devicePosition_k__BackingField, put = __set__devicePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __get__deviceRotation_k__BackingField,
                      put = __set__deviceRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __get__pointerPosition_k__BackingField,
                      put = __set__pointerPosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __get__pointerRotation_k__BackingField,
                      put = __set__pointerRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset 0x220, size 0x8
  __declspec(property(get = __get__haptic_k__BackingField, put = __set__haptic_k__BackingField))::UnityEngine::XR::OpenXR::Input::HapticControl* _haptic_k__BackingField;

  __declspec(property(get = get_thumbstick, put = set_thumbstick))::UnityEngine::InputSystem::Controls::Vector2Control* thumbstick;

  __declspec(property(get = get_grip, put = set_grip))::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed))::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_menu, put = set_menu))::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_primaryButton, put = set_primaryButton))::UnityEngine::InputSystem::Controls::ButtonControl* primaryButton;

  __declspec(property(get = get_primaryTouched, put = set_primaryTouched))::UnityEngine::InputSystem::Controls::ButtonControl* primaryTouched;

  __declspec(property(get = get_secondaryButton, put = set_secondaryButton))::UnityEngine::InputSystem::Controls::ButtonControl* secondaryButton;

  __declspec(property(get = get_secondaryTouched, put = set_secondaryTouched))::UnityEngine::InputSystem::Controls::ButtonControl* secondaryTouched;

  __declspec(property(get = get_trigger, put = set_trigger))::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed))::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  __declspec(property(get = get_triggerTouched, put = set_triggerTouched))::UnityEngine::InputSystem::Controls::ButtonControl* triggerTouched;

  __declspec(property(get = get_thumbstickClicked, put = set_thumbstickClicked))::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickClicked;

  __declspec(property(get = get_thumbstickTouched, put = set_thumbstickTouched))::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickTouched;

  __declspec(property(get = get_devicePose, put = set_devicePose))::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_pointer, put = set_pointer))::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_isTracked, put = set_isTracked))::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_trackingState, put = set_trackingState))::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_devicePosition, put = set_devicePosition))::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition))::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  __declspec(property(get = get_haptic, put = set_haptic))::UnityEngine::XR::OpenXR::Input::HapticControl* haptic;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__thumbstick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__thumbstick_k__BackingField() const;

  constexpr void __set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__grip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__grip_k__BackingField() const;

  constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__gripPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__gripPressed_k__BackingField() const;

  constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__menu_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__menu_k__BackingField() const;

  constexpr void __set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__primaryButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__primaryButton_k__BackingField() const;

  constexpr void __set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__primaryTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__primaryTouched_k__BackingField() const;

  constexpr void __set__primaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__secondaryButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__secondaryButton_k__BackingField() const;

  constexpr void __set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__secondaryTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__secondaryTouched_k__BackingField() const;

  constexpr void __set__secondaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__trigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__trigger_k__BackingField() const;

  constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__triggerPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__triggerPressed_k__BackingField() const;

  constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__triggerTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__triggerTouched_k__BackingField() const;

  constexpr void __set__triggerTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__thumbstickClicked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__thumbstickClicked_k__BackingField() const;

  constexpr void __set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__thumbstickTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__thumbstickTouched_k__BackingField() const;

  constexpr void __set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __get__devicePose_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::Input::PoseControl*> const& __get__devicePose_k__BackingField() const;

  constexpr void __set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __get__pointer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::Input::PoseControl*> const& __get__pointer_k__BackingField() const;

  constexpr void __set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__isTracked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__isTracked_k__BackingField() const;

  constexpr void __set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __get__trackingState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __get__trackingState_k__BackingField() const;

  constexpr void __set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__devicePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__devicePosition_k__BackingField() const;

  constexpr void __set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__deviceRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__deviceRotation_k__BackingField() const;

  constexpr void __set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__pointerPosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__pointerPosition_k__BackingField() const;

  constexpr void __set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__pointerRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__pointerRotation_k__BackingField() const;

  constexpr void __set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*& __get__haptic_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::Input::HapticControl*> const& __get__haptic_k__BackingField() const;

  constexpr void __set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method get_thumbstick addr 0x2b10c08 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick();

  /// @brief Method set_thumbstick addr 0x2b10c10 size 0x8 virtual false final false
  inline void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_grip addr 0x2b10c18 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method set_grip addr 0x2b10c20 size 0x8 virtual false final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_gripPressed addr 0x2b10c28 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method set_gripPressed addr 0x2b10c30 size 0x8 virtual false final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_menu addr 0x2b10c38 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method set_menu addr 0x2b10c40 size 0x8 virtual false final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_primaryButton addr 0x2b10c48 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton();

  /// @brief Method set_primaryButton addr 0x2b10c50 size 0x8 virtual false final false
  inline void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_primaryTouched addr 0x2b10c58 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryTouched();

  /// @brief Method set_primaryTouched addr 0x2b10c60 size 0x8 virtual false final false
  inline void set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_secondaryButton addr 0x2b10c68 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton();

  /// @brief Method set_secondaryButton addr 0x2b10c70 size 0x8 virtual false final false
  inline void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_secondaryTouched addr 0x2b10c78 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryTouched();

  /// @brief Method set_secondaryTouched addr 0x2b10c80 size 0x8 virtual false final false
  inline void set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trigger addr 0x2b10c88 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method set_trigger addr 0x2b10c90 size 0x8 virtual false final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_triggerPressed addr 0x2b10c98 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_triggerPressed addr 0x2b10ca0 size 0x8 virtual false final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_triggerTouched addr 0x2b10ca8 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerTouched();

  /// @brief Method set_triggerTouched addr 0x2b10cb0 size 0x8 virtual false final false
  inline void set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_thumbstickClicked addr 0x2b10cb8 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked();

  /// @brief Method set_thumbstickClicked addr 0x2b10cc0 size 0x8 virtual false final false
  inline void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_thumbstickTouched addr 0x2b10cc8 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched();

  /// @brief Method set_thumbstickTouched addr 0x2b10cd0 size 0x8 virtual false final false
  inline void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_devicePose addr 0x2b10cd8 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method set_devicePose addr 0x2b10ce0 size 0x8 virtual false final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_pointer addr 0x2b10ce8 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method set_pointer addr 0x2b10cf0 size 0x8 virtual false final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_isTracked addr 0x2b10cf8 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method set_isTracked addr 0x2b10d00 size 0x8 virtual false final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackingState addr 0x2b10d08 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_trackingState addr 0x2b10d10 size 0x8 virtual false final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_devicePosition addr 0x2b10d18 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method set_devicePosition addr 0x2b10d20 size 0x8 virtual false final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceRotation addr 0x2b10d28 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method set_deviceRotation addr 0x2b10d30 size 0x8 virtual false final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_pointerPosition addr 0x2b10d38 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method set_pointerPosition addr 0x2b10d40 size 0x8 virtual false final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_pointerRotation addr 0x2b10d48 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method set_pointerRotation addr 0x2b10d50 size 0x8 virtual false final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_haptic addr 0x2b10d58 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::HapticControl* get_haptic();

  /// @brief Method set_haptic addr 0x2b10d60 size 0x8 virtual false final false
  inline void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method FinishSetup addr 0x2b10d68 size 0x470 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController* New_ctor();

  /// @brief Method .ctor addr 0x2b111d8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OculusTouchControllerProfile__OculusTouchController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusTouchControllerProfile__OculusTouchController(__OculusTouchControllerProfile__OculusTouchController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusTouchControllerProfile__OculusTouchController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusTouchControllerProfile__OculusTouchController(__OculusTouchControllerProfile__OculusTouchController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusTouchControllerProfile__OculusTouchController();

public:
  /// @brief Field <thumbstick>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____thumbstick_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <primaryButton>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primaryButton_k__BackingField;

  /// @brief Field <primaryTouched>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primaryTouched_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryButton_k__BackingField;

  /// @brief Field <secondaryTouched>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryTouched_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <triggerTouched>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerTouched_k__BackingField;

  /// @brief Field <thumbstickClicked>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickClicked_k__BackingField;

  /// @brief Field <thumbstickTouched>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickTouched_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::HapticControl* ____haptic_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, 0x228>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____thumbstick_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____grip_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____gripPressed_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____menu_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____primaryButton_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____primaryTouched_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____secondaryButton_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____secondaryTouched_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____trigger_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____triggerPressed_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____triggerTouched_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____thumbstickClicked_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____thumbstickTouched_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____devicePose_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____pointer_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____isTracked_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____trackingState_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____devicePosition_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____deviceRotation_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____pointerPosition_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____pointerRotation_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController, ____haptic_k__BackingField) == 0x220, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::OculusTouchControllerProfile
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14448))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14461))
// CS Name: ::UnityEngine.XR.OpenXR.Features.Interactions::OculusTouchControllerProfile*
class CORDL_TYPE OculusTouchControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using OculusTouchController = ::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController;

  /// @brief Method RegisterDeviceLayout addr 0x2b0df10 size 0x140 virtual true final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout addr 0x2b0e050 size 0x68 virtual true final false
  inline void UnregisterDeviceLayout();

  /// @brief Method RegisterActionMapsWithRuntime addr 0x2b0e0b8 size 0x2b48 virtual true final false
  inline void RegisterActionMapsWithRuntime();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile* New_ctor();

  /// @brief Method .ctor addr 0x2b10c00 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusTouchControllerProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusTouchControllerProfile(OculusTouchControllerProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusTouchControllerProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusTouchControllerProfile(OculusTouchControllerProfile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusTouchControllerProfile();

public:
  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.oculustouch" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/oculus/touch_controller" };

  /// @brief Field buttonX offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonX{ u"/input/x/click" };

  /// @brief Field buttonXTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonXTouch{ u"/input/x/touch" };

  /// @brief Field buttonY offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonY{ u"/input/y/click" };

  /// @brief Field buttonYTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonYTouch{ u"/input/y/touch" };

  /// @brief Field menu offset 0xffffffff size 0x8
  static constexpr ::ConstString menu{ u"/input/menu/click" };

  /// @brief Field buttonA offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonA{ u"/input/a/click" };

  /// @brief Field buttonATouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonATouch{ u"/input/a/touch" };

  /// @brief Field buttonB offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonB{ u"/input/b/click" };

  /// @brief Field buttonBTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonBTouch{ u"/input/b/touch" };

  /// @brief Field system offset 0xffffffff size 0x8
  static constexpr ::ConstString system{ u"/input/system/click" };

  /// @brief Field squeeze offset 0xffffffff size 0x8
  static constexpr ::ConstString squeeze{ u"/input/squeeze/value" };

  /// @brief Field trigger offset 0xffffffff size 0x8
  static constexpr ::ConstString trigger{ u"/input/trigger/value" };

  /// @brief Field triggerTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerTouch{ u"/input/trigger/touch" };

  /// @brief Field thumbstick offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstick{ u"/input/thumbstick" };

  /// @brief Field thumbstickClick offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickClick{ u"/input/thumbstick/click" };

  /// @brief Field thumbstickTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickTouch{ u"/input/thumbstick/touch" };

  /// @brief Field thumbrest offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbrest{ u"/input/thumbrest/touch" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field haptic offset 0xffffffff size 0x8
  static constexpr ::ConstString haptic{ u"/output/haptic" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"Oculus Touch Controller OpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "OculusTouchControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::__OculusTouchControllerProfile__OculusTouchController*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "OculusTouchControllerProfile/OculusTouchController");
