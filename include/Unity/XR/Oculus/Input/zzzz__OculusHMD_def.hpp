#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Input/OculusHMD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(OculusHMD)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusHMD;
}
// Write type traits
MARK_REF_T(::Unity::XR::Oculus::Input::OculusHMD*);
DEFINE_IL2CPP_CLASS(::Unity::XR::Oculus::Input::OculusHMD*, "Unity.XR.Oculus.Input", "OculusHMD");
// [InputControlLayout(displayName = "Oculus Headset", hideInUI = true)]
// Dependencies UnityEngine.InputSystem.XR.XRHMD
namespace Unity::XR::Oculus::Input {
// Is value type: false
// CS Name: Unity.XR.Oculus.Input.OculusHMD
class CORDL_TYPE OculusHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  /// @brief Field <centerEyeAcceleration>k__BackingField, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeAcceleration_k__BackingField,
                      put = __cordl_internal_set__centerEyeAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAcceleration_k__BackingField;

  /// @brief Field <centerEyeAngularAcceleration>k__BackingField, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeAngularAcceleration_k__BackingField,
                      put = __cordl_internal_set__centerEyeAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularAcceleration_k__BackingField;

  /// @brief Field <centerEyeAngularVelocity>k__BackingField, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__centerEyeAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularVelocity_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAcceleration_k__BackingField,
                      put = __cordl_internal_set__deviceAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField;

  /// @brief Field <deviceAngularAcceleration>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularAcceleration_k__BackingField,
                      put = __cordl_internal_set__deviceAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  /// @brief Field <leftEyeAcceleration>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeAcceleration_k__BackingField,
                      put = __cordl_internal_set__leftEyeAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAcceleration_k__BackingField;

  /// @brief Field <leftEyeAngularAcceleration>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeAngularAcceleration_k__BackingField,
                      put = __cordl_internal_set__leftEyeAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularAcceleration_k__BackingField;

  /// @brief Field <leftEyeAngularVelocity>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__leftEyeAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularVelocity_k__BackingField;

  /// @brief Field <rightEyeAcceleration>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeAcceleration_k__BackingField,
                      put = __cordl_internal_set__rightEyeAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAcceleration_k__BackingField;

  /// @brief Field <rightEyeAngularAcceleration>k__BackingField, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeAngularAcceleration_k__BackingField,
                      put = __cordl_internal_set__rightEyeAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularAcceleration_k__BackingField;

  /// @brief Field <rightEyeAngularVelocity>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__rightEyeAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularVelocity_k__BackingField;

  /// @brief Field <userPresence>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresence_k__BackingField,
                      put = __cordl_internal_set__userPresence_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_centerEyeAcceleration, put = set_centerEyeAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAcceleration;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_centerEyeAngularAcceleration, put = set_centerEyeAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAngularAcceleration;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_centerEyeAngularVelocity, put = set_centerEyeAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAngularVelocity;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_deviceAcceleration, put = set_deviceAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAcceleration;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_deviceAngularAcceleration, put = set_deviceAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularAcceleration;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_leftEyeAcceleration, put = set_leftEyeAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAcceleration;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_leftEyeAngularAcceleration, put = set_leftEyeAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAngularAcceleration;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_leftEyeAngularVelocity, put = set_leftEyeAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAngularVelocity;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_rightEyeAcceleration, put = set_rightEyeAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAcceleration;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_rightEyeAngularAcceleration, put = set_rightEyeAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAngularAcceleration;

  /// @brief [InputControl(noisy = true)]
  __declspec(property(get = get_rightEyeAngularVelocity, put = set_rightEyeAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAngularVelocity;

  /// [InputControl]
  /// [InputControl(name = "trackingState", layout = "Integer", aliases = new[] { "devicetrackingstate" })]
  /// @brief [InputControl(name = "isTracked", layout = "Button", aliases = new[] { "deviceistracked" })]
  __declspec(property(get = get_userPresence, put = set_userPresence)) ::UnityEngine::InputSystem::Controls::ButtonControl* userPresence;

  /// @brief Method FinishSetup, addr 0x64d16e4, size 0x2a4, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::Oculus::Input::OculusHMD* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyeAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyeAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyeAngularAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyeAngularAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyeAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyeAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAngularAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAngularAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyeAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyeAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyeAngularAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyeAngularAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyeAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyeAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyeAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyeAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyeAngularAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyeAngularAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyeAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyeAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__userPresence_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__userPresence_k__BackingField();

  constexpr void __cordl_internal_set__centerEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__centerEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__centerEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x64d1988, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_centerEyeAcceleration, addr 0x64d16c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAcceleration();

  /// [CompilerGenerated]
  /// @brief Method get_centerEyeAngularAcceleration, addr 0x64d16d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularAcceleration();

  /// [CompilerGenerated]
  /// @brief Method get_centerEyeAngularVelocity, addr 0x64d16b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularVelocity();

  /// [CompilerGenerated]
  /// @brief Method get_deviceAcceleration, addr 0x64d1634, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration();

  /// [CompilerGenerated]
  /// @brief Method get_deviceAngularAcceleration, addr 0x64d1644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration();

  /// [CompilerGenerated]
  /// @brief Method get_deviceAngularVelocity, addr 0x64d1624, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// [CompilerGenerated]
  /// @brief Method get_leftEyeAcceleration, addr 0x64d1664, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAcceleration();

  /// [CompilerGenerated]
  /// @brief Method get_leftEyeAngularAcceleration, addr 0x64d1674, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularAcceleration();

  /// [CompilerGenerated]
  /// @brief Method get_leftEyeAngularVelocity, addr 0x64d1654, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularVelocity();

  /// [CompilerGenerated]
  /// @brief Method get_rightEyeAcceleration, addr 0x64d1694, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAcceleration();

  /// [CompilerGenerated]
  /// @brief Method get_rightEyeAngularAcceleration, addr 0x64d16a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularAcceleration();

  /// [CompilerGenerated]
  /// @brief Method get_rightEyeAngularVelocity, addr 0x64d1684, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularVelocity();

  /// [CompilerGenerated]
  /// @brief Method get_userPresence, addr 0x64d1614, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence();

  /// [CompilerGenerated]
  /// @brief Method set_centerEyeAcceleration, addr 0x64d16cc, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_centerEyeAngularAcceleration, addr 0x64d16dc, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_centerEyeAngularVelocity, addr 0x64d16bc, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_deviceAcceleration, addr 0x64d163c, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_deviceAngularAcceleration, addr 0x64d164c, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_deviceAngularVelocity, addr 0x64d162c, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_leftEyeAcceleration, addr 0x64d166c, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_leftEyeAngularAcceleration, addr 0x64d167c, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_leftEyeAngularVelocity, addr 0x64d165c, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_rightEyeAcceleration, addr 0x64d169c, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_rightEyeAngularAcceleration, addr 0x64d16ac, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_rightEyeAngularVelocity, addr 0x64d168c, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_userPresence, addr 0x64d161c, size 0x8, virtual false, abstract: false, final false
  inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusHMD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusHMD", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusHMD(OculusHMD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusHMD", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusHMD(OculusHMD const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8597 };

  /// [CompilerGenerated]
  /// @brief Field <userPresence>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____userPresence_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <deviceAcceleration>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAcceleration_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <deviceAngularAcceleration>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularAcceleration_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <leftEyeAngularVelocity>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAngularVelocity_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <leftEyeAcceleration>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAcceleration_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <leftEyeAngularAcceleration>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAngularAcceleration_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <rightEyeAngularVelocity>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAngularVelocity_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <rightEyeAcceleration>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAcceleration_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <rightEyeAngularAcceleration>k__BackingField, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAngularAcceleration_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <centerEyeAngularVelocity>k__BackingField, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAngularVelocity_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <centerEyeAcceleration>k__BackingField, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAcceleration_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <centerEyeAngularAcceleration>k__BackingField, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAngularAcceleration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____userPresence_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceAngularVelocity_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceAcceleration_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceAngularAcceleration_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeAngularVelocity_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeAcceleration_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeAngularAcceleration_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeAngularVelocity_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeAcceleration_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeAngularAcceleration_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeAngularVelocity_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeAcceleration_k__BackingField) == 0x230, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeAngularAcceleration_k__BackingField) == 0x238, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::Oculus::Input::OculusHMD) == 0x240, "Size mismatch!");

} // namespace Unity::XR::Oculus::Input
