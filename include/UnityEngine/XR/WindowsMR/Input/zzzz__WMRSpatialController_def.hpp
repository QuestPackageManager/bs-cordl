#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
CORDL_MODULE_EXPORT(WMRSpatialController)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
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
// Forward declare root types
namespace UnityEngine::XR::WindowsMR::Input {
class WMRSpatialController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController);
// Type: UnityEngine.XR.WindowsMR.Input::WMRSpatialController
// SizeInfo { instance_size: 512, native_size: -1, calculated_instance_size: 512, calculated_native_size: 512, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::WindowsMR::Input {
// Is value type: false
// CS Name: ::UnityEngine.XR.WindowsMR.Input::WMRSpatialController*
class CORDL_TYPE WMRSpatialController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <batteryLevel>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__batteryLevel_k__BackingField,
                      put = __cordl_internal_set__batteryLevel_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _batteryLevel_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceAngularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__gripPressed_k__BackingField,
                      put = __cordl_internal_set__gripPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__grip_k__BackingField, put = __cordl_internal_set__grip_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <joystickClicked>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__joystickClicked_k__BackingField,
                      put = __cordl_internal_set__joystickClicked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _joystickClicked_k__BackingField;

  /// @brief Field <joystick>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__joystick_k__BackingField,
                      put = __cordl_internal_set__joystick_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _joystick_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__menu_k__BackingField, put = __cordl_internal_set__menu_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerPosition_k__BackingField,
                      put = __cordl_internal_set__pointerPosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerRotation_k__BackingField,
                      put = __cordl_internal_set__pointerRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  /// @brief Field <sourceLossMitigationDirection>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceLossMitigationDirection_k__BackingField,
                      put = __cordl_internal_set__sourceLossMitigationDirection_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _sourceLossMitigationDirection_k__BackingField;

  /// @brief Field <sourceLossRisk>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceLossRisk_k__BackingField,
                      put = __cordl_internal_set__sourceLossRisk_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _sourceLossRisk_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpadClicked_k__BackingField,
                      put = __cordl_internal_set__touchpadClicked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpadTouched_k__BackingField,
                      put = __cordl_internal_set__touchpadTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpad_k__BackingField,
                      put = __cordl_internal_set__touchpad_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerPressed_k__BackingField,
                      put = __cordl_internal_set__triggerPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__trigger_k__BackingField,
                      put = __cordl_internal_set__trigger_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  __declspec(property(get = get_batteryLevel, put = set_batteryLevel))::UnityEngine::InputSystem::Controls::AxisControl* batteryLevel;

  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  __declspec(property(get = get_deviceVelocity, put = set_deviceVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;

  __declspec(property(get = get_grip, put = set_grip))::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed))::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_joystick, put = set_joystick))::UnityEngine::InputSystem::Controls::Vector2Control* joystick;

  __declspec(property(get = get_joystickClicked, put = set_joystickClicked))::UnityEngine::InputSystem::Controls::ButtonControl* joystickClicked;

  __declspec(property(get = get_menu, put = set_menu))::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition))::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  __declspec(property(get = get_sourceLossMitigationDirection, put = set_sourceLossMitigationDirection))::UnityEngine::InputSystem::Controls::Vector3Control* sourceLossMitigationDirection;

  __declspec(property(get = get_sourceLossRisk, put = set_sourceLossRisk))::UnityEngine::InputSystem::Controls::AxisControl* sourceLossRisk;

  __declspec(property(get = get_touchpad, put = set_touchpad))::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;

  __declspec(property(get = get_touchpadClicked, put = set_touchpadClicked))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadClicked;

  __declspec(property(get = get_touchpadTouched, put = set_touchpadTouched))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadTouched;

  __declspec(property(get = get_trigger, put = set_trigger))::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed))::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  /// @brief Method FinishSetup, addr 0x30a680c, size 0x364, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::WindowsMR::Input::WMRSpatialController* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__batteryLevel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__batteryLevel_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAngularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__deviceAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__deviceVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__gripPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__grip_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__joystickClicked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__joystickClicked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__joystick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __cordl_internal_get__joystick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menu_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__menu_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__pointerPosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__pointerPosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__pointerRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __cordl_internal_get__pointerRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__sourceLossMitigationDirection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__sourceLossMitigationDirection_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__sourceLossRisk_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__sourceLossRisk_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__touchpadClicked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__touchpadClicked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__touchpadTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__touchpadTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__touchpad_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __cordl_internal_get__touchpad_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__triggerPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__trigger_k__BackingField() const;

  constexpr void __cordl_internal_set__batteryLevel_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__joystickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__joystick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__sourceLossMitigationDirection_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__sourceLossRisk_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__touchpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x30a6b70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_batteryLevel, addr 0x30a67bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_batteryLevel();

  /// @brief Method get_deviceAngularVelocity, addr 0x30a67ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// @brief Method get_deviceVelocity, addr 0x30a679c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();

  /// @brief Method get_grip, addr 0x30a671c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method get_gripPressed, addr 0x30a672c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method get_joystick, addr 0x30a66fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_joystick();

  /// @brief Method get_joystickClicked, addr 0x30a676c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_joystickClicked();

  /// @brief Method get_menu, addr 0x30a673c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method get_pointerPosition, addr 0x30a67ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method get_pointerRotation, addr 0x30a67fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method get_sourceLossMitigationDirection, addr 0x30a67dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_sourceLossMitigationDirection();

  /// @brief Method get_sourceLossRisk, addr 0x30a67cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_sourceLossRisk();

  /// @brief Method get_touchpad, addr 0x30a670c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();

  /// @brief Method get_touchpadClicked, addr 0x30a677c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked();

  /// @brief Method get_touchpadTouched, addr 0x30a678c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched();

  /// @brief Method get_trigger, addr 0x30a674c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method get_triggerPressed, addr 0x30a675c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_batteryLevel, addr 0x30a67c4, size 0x8, virtual false, abstract: false, final false
  inline void set_batteryLevel(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_deviceAngularVelocity, addr 0x30a67b4, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceVelocity, addr 0x30a67a4, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_grip, addr 0x30a6724, size 0x8, virtual false, abstract: false, final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_gripPressed, addr 0x30a6734, size 0x8, virtual false, abstract: false, final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_joystick, addr 0x30a6704, size 0x8, virtual false, abstract: false, final false
  inline void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_joystickClicked, addr 0x30a6774, size 0x8, virtual false, abstract: false, final false
  inline void set_joystickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_menu, addr 0x30a6744, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pointerPosition, addr 0x30a67f4, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_pointerRotation, addr 0x30a6804, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_sourceLossMitigationDirection, addr 0x30a67e4, size 0x8, virtual false, abstract: false, final false
  inline void set_sourceLossMitigationDirection(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_sourceLossRisk, addr 0x30a67d4, size 0x8, virtual false, abstract: false, final false
  inline void set_sourceLossRisk(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_touchpad, addr 0x30a6714, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_touchpadClicked, addr 0x30a6784, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_touchpadTouched, addr 0x30a6794, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trigger, addr 0x30a6754, size 0x8, virtual false, abstract: false, final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_triggerPressed, addr 0x30a6764, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WMRSpatialController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WMRSpatialController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WMRSpatialController(WMRSpatialController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WMRSpatialController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WMRSpatialController(WMRSpatialController const&) = delete;

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

  /// @brief Field <deviceVelocity>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  /// @brief Field <batteryLevel>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____batteryLevel_k__BackingField;

  /// @brief Field <sourceLossRisk>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____sourceLossRisk_k__BackingField;

  /// @brief Field <sourceLossMitigationDirection>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____sourceLossMitigationDirection_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, 0x200>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____joystick_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____touchpad_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____grip_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____gripPressed_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____menu_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____trigger_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____triggerPressed_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____joystickClicked_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____touchpadClicked_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____touchpadTouched_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____deviceVelocity_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____deviceAngularVelocity_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____batteryLevel_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____sourceLossRisk_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____sourceLossMitigationDirection_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____pointerPosition_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, ____pointerRotation_k__BackingField) == 0x1f8, "Offset mismatch!");

} // namespace UnityEngine::XR::WindowsMR::Input
NEED_NO_BOX(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController*, "UnityEngine.XR.WindowsMR.Input", "WMRSpatialController");
