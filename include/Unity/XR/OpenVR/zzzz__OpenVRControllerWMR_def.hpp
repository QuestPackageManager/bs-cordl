#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
CORDL_MODULE_EXPORT(OpenVRControllerWMR)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class OpenVRControllerWMR;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::OpenVR::OpenVRControllerWMR);
// Type: Unity.XR.OpenVR::OpenVRControllerWMR
// SizeInfo { instance_size: 464, native_size: -1, calculated_instance_size: 464, calculated_native_size: 464, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5584))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5375))
// CS Name: ::Unity.XR.OpenVR::OpenVRControllerWMR*
class CORDL_TYPE OpenVRControllerWMR : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  /// @brief Field <deviceVelocity>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceAngularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  /// @brief Field <touchpadClick>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpadClick_k__BackingField,
                      put = __cordl_internal_set__touchpadClick_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClick_k__BackingField;

  /// @brief Field <touchpadTouch>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpadTouch_k__BackingField,
                      put = __cordl_internal_set__touchpadTouch_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouch_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__gripPressed_k__BackingField,
                      put = __cordl_internal_set__gripPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerPressed_k__BackingField,
                      put = __cordl_internal_set__triggerPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__menu_k__BackingField, put = __cordl_internal_set__menu_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__trigger_k__BackingField,
                      put = __cordl_internal_set__trigger_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__grip_k__BackingField, put = __cordl_internal_set__grip_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpad_k__BackingField,
                      put = __cordl_internal_set__touchpad_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField;

  /// @brief Field <joystick>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__joystick_k__BackingField,
                      put = __cordl_internal_set__joystick_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _joystick_k__BackingField;

  __declspec(property(get = get_deviceVelocity, put = set_deviceVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;

  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  __declspec(property(get = get_touchpadClick, put = set_touchpadClick))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadClick;

  __declspec(property(get = get_touchpadTouch, put = set_touchpadTouch))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadTouch;

  __declspec(property(get = get_gripPressed, put = set_gripPressed))::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed))::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  __declspec(property(get = get_menu, put = set_menu))::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_trigger, put = set_trigger))::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_grip, put = set_grip))::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_touchpad, put = set_touchpad))::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;

  __declspec(property(get = get_joystick, put = set_joystick))::UnityEngine::InputSystem::Controls::Vector2Control* joystick;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__deviceVelocity_k__BackingField() const;

  constexpr void __cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAngularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__deviceAngularVelocity_k__BackingField() const;

  constexpr void __cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__touchpadClick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__touchpadClick_k__BackingField() const;

  constexpr void __cordl_internal_set__touchpadClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__touchpadTouch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__touchpadTouch_k__BackingField() const;

  constexpr void __cordl_internal_set__touchpadTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__gripPressed_k__BackingField() const;

  constexpr void __cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__triggerPressed_k__BackingField() const;

  constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menu_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__menu_k__BackingField() const;

  constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__trigger_k__BackingField() const;

  constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__grip_k__BackingField() const;

  constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__touchpad_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __cordl_internal_get__touchpad_k__BackingField() const;

  constexpr void __cordl_internal_set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__joystick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __cordl_internal_get__joystick_k__BackingField() const;

  constexpr void __cordl_internal_set__joystick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_deviceVelocity, addr 0x2a36b30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();

  /// @brief Method set_deviceVelocity, addr 0x2a36b38, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceAngularVelocity, addr 0x2a36b40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// @brief Method set_deviceAngularVelocity, addr 0x2a36b48, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_touchpadClick, addr 0x2a36b50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClick();

  /// @brief Method set_touchpadClick, addr 0x2a36b58, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadClick(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_touchpadTouch, addr 0x2a36b60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouch();

  /// @brief Method set_touchpadTouch, addr 0x2a36b68, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_gripPressed, addr 0x2a36b70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method set_gripPressed, addr 0x2a36b78, size 0x8, virtual false, abstract: false, final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_triggerPressed, addr 0x2a36b80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_triggerPressed, addr 0x2a36b88, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_menu, addr 0x2a36b90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method set_menu, addr 0x2a36b98, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trigger, addr 0x2a36ba0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method set_trigger, addr 0x2a36ba8, size 0x8, virtual false, abstract: false, final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_grip, addr 0x2a36bb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method set_grip, addr 0x2a36bb8, size 0x8, virtual false, abstract: false, final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_touchpad, addr 0x2a36bc0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();

  /// @brief Method set_touchpad, addr 0x2a36bc8, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_joystick, addr 0x2a36bd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_joystick();

  /// @brief Method set_joystick, addr 0x2a36bd8, size 0x8, virtual false, abstract: false, final false
  inline void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method FinishSetup, addr 0x2a36be0, size 0x260, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::OpenVR::OpenVRControllerWMR* New_ctor();

  /// @brief Method .ctor, addr 0x2a36e40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenVRControllerWMR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenVRControllerWMR(OpenVRControllerWMR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenVRControllerWMR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenVRControllerWMR(OpenVRControllerWMR const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenVRControllerWMR();

public:
  /// @brief Field <deviceVelocity>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  /// @brief Field <touchpadClick>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadClick_k__BackingField;

  /// @brief Field <touchpadTouch>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadTouch_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____touchpad_k__BackingField;

  /// @brief Field <joystick>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____joystick_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::OpenVRControllerWMR, 0x1d0>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____deviceVelocity_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____deviceAngularVelocity_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____touchpadClick_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____touchpadTouch_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____gripPressed_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____triggerPressed_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____menu_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____trigger_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____grip_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____touchpad_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRControllerWMR, ____joystick_k__BackingField) == 0x1c8, "Offset mismatch!");

} // namespace Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::OpenVRControllerWMR);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::OpenVRControllerWMR*, "Unity.XR.OpenVR", "OpenVRControllerWMR");
