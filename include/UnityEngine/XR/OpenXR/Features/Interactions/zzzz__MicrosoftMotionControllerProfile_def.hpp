#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
CORDL_MODULE_EXPORT(MicrosoftMotionControllerProfile)
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __MicrosoftMotionControllerProfile__WMRSpatialController;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class MicrosoftMotionControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __MicrosoftMotionControllerProfile__WMRSpatialController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftMotionControllerProfile);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController);
// Type: ::WMRSpatialController
// SizeInfo { instance_size: 528, native_size: -1, calculated_instance_size: 528, calculated_native_size: 528, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6412))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14458))
// CS Name: ::MicrosoftMotionControllerProfile::WMRSpatialController*
class CORDL_TYPE __MicrosoftMotionControllerProfile__WMRSpatialController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <joystick>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__joystick_k__BackingField, put = __set__joystick_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _joystick_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__touchpad_k__BackingField, put = __set__touchpad_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__grip_k__BackingField, put = __set__grip_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__gripPressed_k__BackingField, put = __set__gripPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__menu_k__BackingField, put = __set__menu_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__trigger_k__BackingField, put = __set__trigger_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__triggerPressed_k__BackingField, put = __set__triggerPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <joystickClicked>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__joystickClicked_k__BackingField, put = __set__joystickClicked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _joystickClicked_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__touchpadClicked_k__BackingField, put = __set__touchpadClicked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__touchpadTouched_k__BackingField, put = __set__touchpadTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __get__devicePose_k__BackingField, put = __set__devicePose_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __get__pointer_k__BackingField, put = __set__pointer_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __get__isTracked_k__BackingField, put = __set__isTracked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __get__trackingState_k__BackingField, put = __set__trackingState_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __get__devicePosition_k__BackingField, put = __set__devicePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __get__deviceRotation_k__BackingField,
                      put = __set__deviceRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __get__pointerPosition_k__BackingField,
                      put = __set__pointerPosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __get__pointerRotation_k__BackingField,
                      put = __set__pointerRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __get__haptic_k__BackingField, put = __set__haptic_k__BackingField))::UnityEngine::XR::OpenXR::Input::HapticControl* _haptic_k__BackingField;

  __declspec(property(get = get_joystick, put = set_joystick))::UnityEngine::InputSystem::Controls::Vector2Control* joystick;

  __declspec(property(get = get_touchpad, put = set_touchpad))::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;

  __declspec(property(get = get_grip, put = set_grip))::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed))::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_menu, put = set_menu))::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_trigger, put = set_trigger))::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed))::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  __declspec(property(get = get_joystickClicked, put = set_joystickClicked))::UnityEngine::InputSystem::Controls::ButtonControl* joystickClicked;

  __declspec(property(get = get_touchpadClicked, put = set_touchpadClicked))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadClicked;

  __declspec(property(get = get_touchpadTouched, put = set_touchpadTouched))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadTouched;

  __declspec(property(get = get_devicePose, put = set_devicePose))::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_pointer, put = set_pointer))::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_isTracked, put = set_isTracked))::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_trackingState, put = set_trackingState))::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_devicePosition, put = set_devicePosition))::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition))::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  __declspec(property(get = get_haptic, put = set_haptic))::UnityEngine::XR::OpenXR::Input::HapticControl* haptic;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__joystick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__joystick_k__BackingField() const;

  constexpr void __set__joystick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__touchpad_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__touchpad_k__BackingField() const;

  constexpr void __set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__grip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__grip_k__BackingField() const;

  constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__gripPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__gripPressed_k__BackingField() const;

  constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__menu_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__menu_k__BackingField() const;

  constexpr void __set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__trigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__trigger_k__BackingField() const;

  constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__triggerPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__triggerPressed_k__BackingField() const;

  constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__joystickClicked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__joystickClicked_k__BackingField() const;

  constexpr void __set__joystickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__touchpadClicked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__touchpadClicked_k__BackingField() const;

  constexpr void __set__touchpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__touchpadTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__touchpadTouched_k__BackingField() const;

  constexpr void __set__touchpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

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

  /// @brief Method get_joystick addr 0x2b0d9e4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_joystick();

  /// @brief Method set_joystick addr 0x2b0d9ec size 0x8 virtual false final false
  inline void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_touchpad addr 0x2b0d9f4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();

  /// @brief Method set_touchpad addr 0x2b0d9fc size 0x8 virtual false final false
  inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_grip addr 0x2b0da04 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method set_grip addr 0x2b0da0c size 0x8 virtual false final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_gripPressed addr 0x2b0da14 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method set_gripPressed addr 0x2b0da1c size 0x8 virtual false final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_menu addr 0x2b0da24 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method set_menu addr 0x2b0da2c size 0x8 virtual false final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trigger addr 0x2b0da34 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method set_trigger addr 0x2b0da3c size 0x8 virtual false final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_triggerPressed addr 0x2b0da44 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_triggerPressed addr 0x2b0da4c size 0x8 virtual false final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_joystickClicked addr 0x2b0da54 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_joystickClicked();

  /// @brief Method set_joystickClicked addr 0x2b0da5c size 0x8 virtual false final false
  inline void set_joystickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_touchpadClicked addr 0x2b0da64 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked();

  /// @brief Method set_touchpadClicked addr 0x2b0da6c size 0x8 virtual false final false
  inline void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_touchpadTouched addr 0x2b0da74 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched();

  /// @brief Method set_touchpadTouched addr 0x2b0da7c size 0x8 virtual false final false
  inline void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_devicePose addr 0x2b0da84 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method set_devicePose addr 0x2b0da8c size 0x8 virtual false final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_pointer addr 0x2b0da94 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method set_pointer addr 0x2b0da9c size 0x8 virtual false final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_isTracked addr 0x2b0daa4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method set_isTracked addr 0x2b0daac size 0x8 virtual false final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackingState addr 0x2b0dab4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_trackingState addr 0x2b0dabc size 0x8 virtual false final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_devicePosition addr 0x2b0dac4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method set_devicePosition addr 0x2b0dacc size 0x8 virtual false final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceRotation addr 0x2b0dad4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method set_deviceRotation addr 0x2b0dadc size 0x8 virtual false final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_pointerPosition addr 0x2b0dae4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method set_pointerPosition addr 0x2b0daec size 0x8 virtual false final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_pointerRotation addr 0x2b0daf4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method set_pointerRotation addr 0x2b0dafc size 0x8 virtual false final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_haptic addr 0x2b0db04 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::HapticControl* get_haptic();

  /// @brief Method set_haptic addr 0x2b0db0c size 0x8 virtual false final false
  inline void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method FinishSetup addr 0x2b0db14 size 0x3f4 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController* New_ctor();

  /// @brief Method .ctor addr 0x2b0df08 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MicrosoftMotionControllerProfile__WMRSpatialController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MicrosoftMotionControllerProfile__WMRSpatialController(__MicrosoftMotionControllerProfile__WMRSpatialController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MicrosoftMotionControllerProfile__WMRSpatialController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MicrosoftMotionControllerProfile__WMRSpatialController(__MicrosoftMotionControllerProfile__WMRSpatialController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MicrosoftMotionControllerProfile__WMRSpatialController();

public:
  /// @brief Field <joystick>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____joystick_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____touchpad_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <joystickClicked>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____joystickClicked_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadTouched_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::HapticControl* ____haptic_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, 0x210>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____joystick_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____touchpad_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____grip_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____gripPressed_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____menu_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____trigger_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____triggerPressed_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____joystickClicked_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____touchpadClicked_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____touchpadTouched_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____devicePose_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____pointer_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____isTracked_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____trackingState_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____devicePosition_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____deviceRotation_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____pointerPosition_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____pointerRotation_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController, ____haptic_k__BackingField) == 0x208, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::MicrosoftMotionControllerProfile
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14448))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14459))
// CS Name: ::UnityEngine.XR.OpenXR.Features.Interactions::MicrosoftMotionControllerProfile*
class CORDL_TYPE MicrosoftMotionControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using WMRSpatialController = ::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController;

  /// @brief Method RegisterDeviceLayout addr 0x2b0ba3c size 0x140 virtual true final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout addr 0x2b0bb7c size 0x68 virtual true final false
  inline void UnregisterDeviceLayout();

  /// @brief Method RegisterActionMapsWithRuntime addr 0x2b0bbe4 size 0x1df8 virtual true final false
  inline void RegisterActionMapsWithRuntime();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftMotionControllerProfile* New_ctor();

  /// @brief Method .ctor addr 0x2b0d9dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MicrosoftMotionControllerProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MicrosoftMotionControllerProfile(MicrosoftMotionControllerProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MicrosoftMotionControllerProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MicrosoftMotionControllerProfile(MicrosoftMotionControllerProfile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MicrosoftMotionControllerProfile();

public:
  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.microsoftmotioncontroller" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/microsoft/motion_controller" };

  /// @brief Field menu offset 0xffffffff size 0x8
  static constexpr ::ConstString menu{ u"/input/menu/click" };

  /// @brief Field squeeze offset 0xffffffff size 0x8
  static constexpr ::ConstString squeeze{ u"/input/squeeze/click" };

  /// @brief Field trigger offset 0xffffffff size 0x8
  static constexpr ::ConstString trigger{ u"/input/trigger/value" };

  /// @brief Field thumbstick offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstick{ u"/input/thumbstick" };

  /// @brief Field thumbstickClick offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickClick{ u"/input/thumbstick/click" };

  /// @brief Field trackpad offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpad{ u"/input/trackpad" };

  /// @brief Field trackpadClick offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadClick{ u"/input/trackpad/click" };

  /// @brief Field trackpadTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadTouch{ u"/input/trackpad/touch" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field haptic offset 0xffffffff size 0x8
  static constexpr ::ConstString haptic{ u"/output/haptic" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"Windows MR Controller OpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftMotionControllerProfile, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftMotionControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftMotionControllerProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "MicrosoftMotionControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftMotionControllerProfile__WMRSpatialController*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "MicrosoftMotionControllerProfile/WMRSpatialController");
