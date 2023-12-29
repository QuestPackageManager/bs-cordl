#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
CORDL_MODULE_EXPORT(ValveIndexControllerProfile)
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __ValveIndexControllerProfile__ValveIndexController;
}
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
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class ValveIndexControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __ValveIndexControllerProfile__ValveIndexController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController);
// Type: ::ValveIndexController
// SizeInfo { instance_size: 592, native_size: -1, calculated_instance_size: 592, calculated_native_size: 592, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6412))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14462))
// CS Name: ::ValveIndexControllerProfile::ValveIndexController*
class CORDL_TYPE __ValveIndexControllerProfile__ValveIndexController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <system>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__system_k__BackingField, put = __set__system_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _system_k__BackingField;

  /// @brief Field <systemTouched>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__systemTouched_k__BackingField, put = __set__systemTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _systemTouched_k__BackingField;

  /// @brief Field <primaryButton>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__primaryButton_k__BackingField, put = __set__primaryButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField;

  /// @brief Field <primaryTouched>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__primaryTouched_k__BackingField, put = __set__primaryTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primaryTouched_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__secondaryButton_k__BackingField, put = __set__secondaryButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField;

  /// @brief Field <secondaryTouched>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__secondaryTouched_k__BackingField,
                      put = __set__secondaryTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryTouched_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__grip_k__BackingField, put = __set__grip_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__gripPressed_k__BackingField, put = __set__gripPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <gripForce>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__gripForce_k__BackingField, put = __set__gripForce_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _gripForce_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__trigger_k__BackingField, put = __set__trigger_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __get__triggerPressed_k__BackingField, put = __set__triggerPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <triggerTouched>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __get__triggerTouched_k__BackingField, put = __set__triggerTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerTouched_k__BackingField;

  /// @brief Field <thumbstick>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __get__thumbstick_k__BackingField, put = __set__thumbstick_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField;

  /// @brief Field <thumbstickClicked>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __get__thumbstickClicked_k__BackingField,
                      put = __set__thumbstickClicked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField;

  /// @brief Field <thumbstickTouched>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __get__thumbstickTouched_k__BackingField,
                      put = __set__thumbstickTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickTouched_k__BackingField;

  /// @brief Field <trackpad>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __get__trackpad_k__BackingField, put = __set__trackpad_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _trackpad_k__BackingField;

  /// @brief Field <trackpadTouched>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __get__trackpadTouched_k__BackingField, put = __set__trackpadTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadTouched_k__BackingField;

  /// @brief Field <trackpadForce>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __get__trackpadForce_k__BackingField, put = __set__trackpadForce_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _trackpadForce_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __get__devicePose_k__BackingField, put = __set__devicePose_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __get__pointer_k__BackingField, put = __set__pointer_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __get__isTracked_k__BackingField, put = __set__isTracked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x220, size 0x8
  __declspec(property(get = __get__trackingState_k__BackingField, put = __set__trackingState_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x228, size 0x8
  __declspec(property(get = __get__devicePosition_k__BackingField, put = __set__devicePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x230, size 0x8
  __declspec(property(get = __get__deviceRotation_k__BackingField,
                      put = __set__deviceRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x238, size 0x8
  __declspec(property(get = __get__pointerPosition_k__BackingField,
                      put = __set__pointerPosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x240, size 0x8
  __declspec(property(get = __get__pointerRotation_k__BackingField,
                      put = __set__pointerRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset 0x248, size 0x8
  __declspec(property(get = __get__haptic_k__BackingField, put = __set__haptic_k__BackingField))::UnityEngine::XR::OpenXR::Input::HapticControl* _haptic_k__BackingField;

  __declspec(property(get = get_system, put = set_system))::UnityEngine::InputSystem::Controls::ButtonControl* system;

  __declspec(property(get = get_systemTouched, put = set_systemTouched))::UnityEngine::InputSystem::Controls::ButtonControl* systemTouched;

  __declspec(property(get = get_primaryButton, put = set_primaryButton))::UnityEngine::InputSystem::Controls::ButtonControl* primaryButton;

  __declspec(property(get = get_primaryTouched, put = set_primaryTouched))::UnityEngine::InputSystem::Controls::ButtonControl* primaryTouched;

  __declspec(property(get = get_secondaryButton, put = set_secondaryButton))::UnityEngine::InputSystem::Controls::ButtonControl* secondaryButton;

  __declspec(property(get = get_secondaryTouched, put = set_secondaryTouched))::UnityEngine::InputSystem::Controls::ButtonControl* secondaryTouched;

  __declspec(property(get = get_grip, put = set_grip))::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed))::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_gripForce, put = set_gripForce))::UnityEngine::InputSystem::Controls::AxisControl* gripForce;

  __declspec(property(get = get_trigger, put = set_trigger))::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed))::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  __declspec(property(get = get_triggerTouched, put = set_triggerTouched))::UnityEngine::InputSystem::Controls::ButtonControl* triggerTouched;

  __declspec(property(get = get_thumbstick, put = set_thumbstick))::UnityEngine::InputSystem::Controls::Vector2Control* thumbstick;

  __declspec(property(get = get_thumbstickClicked, put = set_thumbstickClicked))::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickClicked;

  __declspec(property(get = get_thumbstickTouched, put = set_thumbstickTouched))::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickTouched;

  __declspec(property(get = get_trackpad, put = set_trackpad))::UnityEngine::InputSystem::Controls::Vector2Control* trackpad;

  __declspec(property(get = get_trackpadTouched, put = set_trackpadTouched))::UnityEngine::InputSystem::Controls::ButtonControl* trackpadTouched;

  __declspec(property(get = get_trackpadForce, put = set_trackpadForce))::UnityEngine::InputSystem::Controls::AxisControl* trackpadForce;

  __declspec(property(get = get_devicePose, put = set_devicePose))::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_pointer, put = set_pointer))::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_isTracked, put = set_isTracked))::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_trackingState, put = set_trackingState))::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_devicePosition, put = set_devicePosition))::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition))::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  __declspec(property(get = get_haptic, put = set_haptic))::UnityEngine::XR::OpenXR::Input::HapticControl* haptic;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__system_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__system_k__BackingField() const;

  constexpr void __set__system_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__systemTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__systemTouched_k__BackingField() const;

  constexpr void __set__systemTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

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

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__grip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__grip_k__BackingField() const;

  constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__gripPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__gripPressed_k__BackingField() const;

  constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__gripForce_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__gripForce_k__BackingField() const;

  constexpr void __set__gripForce_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__trigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__trigger_k__BackingField() const;

  constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__triggerPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__triggerPressed_k__BackingField() const;

  constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__triggerTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__triggerTouched_k__BackingField() const;

  constexpr void __set__triggerTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__thumbstick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__thumbstick_k__BackingField() const;

  constexpr void __set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__thumbstickClicked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__thumbstickClicked_k__BackingField() const;

  constexpr void __set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__thumbstickTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__thumbstickTouched_k__BackingField() const;

  constexpr void __set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__trackpad_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__trackpad_k__BackingField() const;

  constexpr void __set__trackpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__trackpadTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__trackpadTouched_k__BackingField() const;

  constexpr void __set__trackpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__trackpadForce_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__trackpadForce_k__BackingField() const;

  constexpr void __set__trackpadForce_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

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

  /// @brief Method get_system addr 0x2b14344 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_system();

  /// @brief Method set_system addr 0x2b1434c size 0x8 virtual false final false
  inline void set_system(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_systemTouched addr 0x2b14354 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_systemTouched();

  /// @brief Method set_systemTouched addr 0x2b1435c size 0x8 virtual false final false
  inline void set_systemTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_primaryButton addr 0x2b14364 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton();

  /// @brief Method set_primaryButton addr 0x2b1436c size 0x8 virtual false final false
  inline void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_primaryTouched addr 0x2b14374 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryTouched();

  /// @brief Method set_primaryTouched addr 0x2b1437c size 0x8 virtual false final false
  inline void set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_secondaryButton addr 0x2b14384 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton();

  /// @brief Method set_secondaryButton addr 0x2b1438c size 0x8 virtual false final false
  inline void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_secondaryTouched addr 0x2b14394 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryTouched();

  /// @brief Method set_secondaryTouched addr 0x2b1439c size 0x8 virtual false final false
  inline void set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_grip addr 0x2b143a4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method set_grip addr 0x2b143ac size 0x8 virtual false final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_gripPressed addr 0x2b143b4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method set_gripPressed addr 0x2b143bc size 0x8 virtual false final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_gripForce addr 0x2b143c4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_gripForce();

  /// @brief Method set_gripForce addr 0x2b143cc size 0x8 virtual false final false
  inline void set_gripForce(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_trigger addr 0x2b143d4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method set_trigger addr 0x2b143dc size 0x8 virtual false final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_triggerPressed addr 0x2b143e4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_triggerPressed addr 0x2b143ec size 0x8 virtual false final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_triggerTouched addr 0x2b143f4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerTouched();

  /// @brief Method set_triggerTouched addr 0x2b143fc size 0x8 virtual false final false
  inline void set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_thumbstick addr 0x2b14404 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick();

  /// @brief Method set_thumbstick addr 0x2b1440c size 0x8 virtual false final false
  inline void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_thumbstickClicked addr 0x2b14414 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked();

  /// @brief Method set_thumbstickClicked addr 0x2b1441c size 0x8 virtual false final false
  inline void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_thumbstickTouched addr 0x2b14424 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched();

  /// @brief Method set_thumbstickTouched addr 0x2b1442c size 0x8 virtual false final false
  inline void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackpad addr 0x2b14434 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_trackpad();

  /// @brief Method set_trackpad addr 0x2b1443c size 0x8 virtual false final false
  inline void set_trackpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_trackpadTouched addr 0x2b14444 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadTouched();

  /// @brief Method set_trackpadTouched addr 0x2b1444c size 0x8 virtual false final false
  inline void set_trackpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackpadForce addr 0x2b14454 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trackpadForce();

  /// @brief Method set_trackpadForce addr 0x2b1445c size 0x8 virtual false final false
  inline void set_trackpadForce(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_devicePose addr 0x2b14464 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method set_devicePose addr 0x2b1446c size 0x8 virtual false final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_pointer addr 0x2b14474 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method set_pointer addr 0x2b1447c size 0x8 virtual false final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_isTracked addr 0x2b14484 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method set_isTracked addr 0x2b1448c size 0x8 virtual false final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackingState addr 0x2b14494 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_trackingState addr 0x2b1449c size 0x8 virtual false final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_devicePosition addr 0x2b144a4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method set_devicePosition addr 0x2b144ac size 0x8 virtual false final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceRotation addr 0x2b144b4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method set_deviceRotation addr 0x2b144bc size 0x8 virtual false final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_pointerPosition addr 0x2b144c4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method set_pointerPosition addr 0x2b144cc size 0x8 virtual false final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_pointerRotation addr 0x2b144d4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method set_pointerRotation addr 0x2b144dc size 0x8 virtual false final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_haptic addr 0x2b144e4 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::HapticControl* get_haptic();

  /// @brief Method set_haptic addr 0x2b144ec size 0x8 virtual false final false
  inline void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method FinishSetup addr 0x2b144f4 size 0x538 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController* New_ctor();

  /// @brief Method .ctor addr 0x2b14a2c size 0x1008 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ValveIndexControllerProfile__ValveIndexController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValveIndexControllerProfile__ValveIndexController(__ValveIndexControllerProfile__ValveIndexController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValveIndexControllerProfile__ValveIndexController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValveIndexControllerProfile__ValveIndexController(__ValveIndexControllerProfile__ValveIndexController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValveIndexControllerProfile__ValveIndexController();

public:
  /// @brief Field <system>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____system_k__BackingField;

  /// @brief Field <systemTouched>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____systemTouched_k__BackingField;

  /// @brief Field <primaryButton>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primaryButton_k__BackingField;

  /// @brief Field <primaryTouched>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primaryTouched_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryButton_k__BackingField;

  /// @brief Field <secondaryTouched>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryTouched_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <gripForce>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____gripForce_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <triggerTouched>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerTouched_k__BackingField;

  /// @brief Field <thumbstick>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____thumbstick_k__BackingField;

  /// @brief Field <thumbstickClicked>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickClicked_k__BackingField;

  /// @brief Field <thumbstickTouched>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickTouched_k__BackingField;

  /// @brief Field <trackpad>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____trackpad_k__BackingField;

  /// @brief Field <trackpadTouched>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadTouched_k__BackingField;

  /// @brief Field <trackpadForce>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trackpadForce_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset: 0x248, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::HapticControl* ____haptic_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, 0x250>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____system_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____systemTouched_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____primaryButton_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____primaryTouched_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____secondaryButton_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____secondaryTouched_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____grip_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____gripPressed_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____gripForce_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____trigger_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____triggerPressed_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____triggerTouched_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____thumbstick_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____thumbstickClicked_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____thumbstickTouched_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____trackpad_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____trackpadTouched_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____trackpadForce_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____devicePose_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____pointer_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____isTracked_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____trackingState_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____devicePosition_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____deviceRotation_k__BackingField) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____pointerPosition_k__BackingField) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____pointerRotation_k__BackingField) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController, ____haptic_k__BackingField) == 0x248, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::ValveIndexControllerProfile
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14448))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14463))
// CS Name: ::UnityEngine.XR.OpenXR.Features.Interactions::ValveIndexControllerProfile*
class CORDL_TYPE ValveIndexControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using ValveIndexController = ::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController;

  /// @brief Method RegisterDeviceLayout addr 0x2b111e0 size 0x140 virtual true final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout addr 0x2b11320 size 0x68 virtual true final false
  inline void UnregisterDeviceLayout();

  /// @brief Method RegisterActionMapsWithRuntime addr 0x2b11388 size 0x2fb4 virtual true final false
  inline void RegisterActionMapsWithRuntime();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile* New_ctor();

  /// @brief Method .ctor addr 0x2b1433c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ValveIndexControllerProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValveIndexControllerProfile(ValveIndexControllerProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValveIndexControllerProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValveIndexControllerProfile(ValveIndexControllerProfile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValveIndexControllerProfile();

public:
  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.valveindex" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/valve/index_controller" };

  /// @brief Field system offset 0xffffffff size 0x8
  static constexpr ::ConstString system{ u"/input/system/click" };

  /// @brief Field systemTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString systemTouch{ u"/input/system/touch" };

  /// @brief Field buttonA offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonA{ u"/input/a/click" };

  /// @brief Field buttonATouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonATouch{ u"/input/a/touch" };

  /// @brief Field buttonB offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonB{ u"/input/b/click" };

  /// @brief Field buttonBTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonBTouch{ u"/input/b/touch" };

  /// @brief Field squeeze offset 0xffffffff size 0x8
  static constexpr ::ConstString squeeze{ u"/input/squeeze/value" };

  /// @brief Field squeezeForce offset 0xffffffff size 0x8
  static constexpr ::ConstString squeezeForce{ u"/input/squeeze/force" };

  /// @brief Field triggerClick offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerClick{ u"/input/trigger/click" };

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

  /// @brief Field trackpad offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpad{ u"/input/trackpad" };

  /// @brief Field trackpadForce offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadForce{ u"/input/trackpad/force" };

  /// @brief Field trackpadTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadTouch{ u"/input/trackpad/touch" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field haptic offset 0xffffffff size 0x8
  static constexpr ::ConstString haptic{ u"/output/haptic" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"Index Controller OpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "ValveIndexControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::__ValveIndexControllerProfile__ValveIndexController*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "ValveIndexControllerProfile/ValveIndexController");
