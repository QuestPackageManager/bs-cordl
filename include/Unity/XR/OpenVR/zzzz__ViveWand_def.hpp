#pragma once
// IWYU pragma private; include "Unity/XR/OpenVR/ViveWand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
CORDL_MODULE_EXPORT(ViveWand)
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
class ViveWand;
}
// Write type traits
MARK_REF_T(::Unity::XR::OpenVR::ViveWand*);
DEFINE_IL2CPP_CLASS(::Unity::XR::OpenVR::ViveWand*, "Unity.XR.OpenVR", "ViveWand");
// [InputControlLayout(displayName = "Vive Wand", commonUsages = new[] { "LeftHand", "RightHand" }, hideInUI = true)]
// Dependencies UnityEngine.InputSystem.XR.XRControllerWithRumble
namespace Unity::XR::OpenVR {
// Is value type: false
// CS Name: Unity.XR.OpenVR.ViveWand
class CORDL_TYPE ViveWand : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__gripPressed_k__BackingField,
                      put = __cordl_internal_set__gripPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__grip_k__BackingField, put = __cordl_internal_set__grip_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <primary>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__primary_k__BackingField,
                      put = __cordl_internal_set__primary_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _primary_k__BackingField;

  /// @brief Field <trackpadPressed>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadPressed_k__BackingField,
                      put = __cordl_internal_set__trackpadPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadPressed_k__BackingField;

  /// @brief Field <trackpadTouched>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadTouched_k__BackingField,
                      put = __cordl_internal_set__trackpadTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadTouched_k__BackingField;

  /// @brief Field <trackpad>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpad_k__BackingField,
                      put = __cordl_internal_set__trackpad_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _trackpad_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerPressed_k__BackingField,
                      put = __cordl_internal_set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__trigger_k__BackingField,
                      put = __cordl_internal_set__trigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_deviceVelocity, put = set_deviceVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;

  /// @brief [InputControl]
  __declspec(property(get = get_grip, put = set_grip)) ::UnityEngine::InputSystem::Controls::AxisControl* grip;

  /// @brief [InputControl]
  __declspec(property(get = get_gripPressed, put = set_gripPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  /// @brief [InputControl]
  __declspec(property(get = get_primary, put = set_primary)) ::UnityEngine::InputSystem::Controls::ButtonControl* primary;

  /// @brief [InputControl(aliases = new[] { "Primary2DAxis" })]
  __declspec(property(get = get_trackpad, put = set_trackpad)) ::UnityEngine::InputSystem::Controls::Vector2Control* trackpad;

  /// @brief [InputControl(aliases = new[] { "primary2DAxisClick", "joystickOrPadPressed" })]
  __declspec(property(get = get_trackpadPressed, put = set_trackpadPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadPressed;

  /// @brief [InputControl(aliases = new[] { "primary2DAxisTouch", "joystickOrPadTouched" })]
  __declspec(property(get = get_trackpadTouched, put = set_trackpadTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadTouched;

  /// @brief [InputControl]
  __declspec(property(get = get_trigger, put = set_trigger)) ::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  /// @brief [InputControl]
  __declspec(property(get = get_triggerPressed, put = set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  /// @brief Method FinishSetup, addr 0x64d0da0, size 0x250, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::OpenVR::ViveWand* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__gripPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__grip_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primary_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primary_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__trackpad_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__trackpad_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__trigger_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField();

  constexpr void __cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__primary_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpadPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x64d0ff0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_deviceAngularVelocity, addr 0x64d0d90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// [CompilerGenerated]
  /// @brief Method get_deviceVelocity, addr 0x64d0d80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();

  /// [CompilerGenerated]
  /// @brief Method get_grip, addr 0x64d0d00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// [CompilerGenerated]
  /// @brief Method get_gripPressed, addr 0x64d0d10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// [CompilerGenerated]
  /// @brief Method get_primary, addr 0x64d0d20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary();

  /// [CompilerGenerated]
  /// @brief Method get_trackpad, addr 0x64d0d50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_trackpad();

  /// [CompilerGenerated]
  /// @brief Method get_trackpadPressed, addr 0x64d0d30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed();

  /// [CompilerGenerated]
  /// @brief Method get_trackpadTouched, addr 0x64d0d40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadTouched();

  /// [CompilerGenerated]
  /// @brief Method get_trigger, addr 0x64d0d60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// [CompilerGenerated]
  /// @brief Method get_triggerPressed, addr 0x64d0d70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// [CompilerGenerated]
  /// @brief Method set_deviceAngularVelocity, addr 0x64d0d98, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_deviceVelocity, addr 0x64d0d88, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_grip, addr 0x64d0d08, size 0x8, virtual false, abstract: false, final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// [CompilerGenerated]
  /// @brief Method set_gripPressed, addr 0x64d0d18, size 0x8, virtual false, abstract: false, final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// [CompilerGenerated]
  /// @brief Method set_primary, addr 0x64d0d28, size 0x8, virtual false, abstract: false, final false
  inline void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// [CompilerGenerated]
  /// @brief Method set_trackpad, addr 0x64d0d58, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_trackpadPressed, addr 0x64d0d38, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// [CompilerGenerated]
  /// @brief Method set_trackpadTouched, addr 0x64d0d48, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// [CompilerGenerated]
  /// @brief Method set_trigger, addr 0x64d0d68, size 0x8, virtual false, abstract: false, final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// [CompilerGenerated]
  /// @brief Method set_triggerPressed, addr 0x64d0d78, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViveWand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViveWand", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViveWand(ViveWand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViveWand", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViveWand(ViveWandconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8592 };

  /// [CompilerGenerated]
  /// @brief Field <grip>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <gripPressed>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <primary>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primary_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <trackpadPressed>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadPressed_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <trackpadTouched>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadTouched_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <trackpad>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____trackpad_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <trigger>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <deviceVelocity>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceVelocity_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____grip_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____gripPressed_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____primary_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____trackpadPressed_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____trackpadTouched_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____trackpad_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____trigger_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____triggerPressed_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____deviceVelocity_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::ViveWand, ____deviceAngularVelocity_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::OpenVR::ViveWand) == 0x1f8, "Size mismatch!");

} // namespace Unity::XR::OpenVR
