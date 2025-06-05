#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Input/OculusHMDExtended.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/Oculus/Input/zzzz__OculusHMD_def.hpp"
CORDL_MODULE_EXPORT(OculusHMDExtended)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusHMDExtended;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Input::OculusHMDExtended);
// Dependencies Unity.XR.Oculus.Input.OculusHMD
namespace Unity::XR::Oculus::Input {
// Is value type: false
// CS Name: Unity.XR.Oculus.Input.OculusHMDExtended
class CORDL_TYPE OculusHMDExtended : public ::Unity::XR::Oculus::Input::OculusHMD {
public:
  // Declarations
  /// @brief Field <back>k__BackingField, offset 0x278, size 0x8
  __declspec(property(get = __cordl_internal_get__back_k__BackingField, put = __cordl_internal_set__back_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset 0x280, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpad_k__BackingField,
                      put = __cordl_internal_set__touchpad_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField;

  __declspec(property(get = get_back, put = set_back)) ::UnityEngine::InputSystem::Controls::ButtonControl* back;

  __declspec(property(get = get_touchpad, put = set_touchpad)) ::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;

  /// @brief Method FinishSetup, addr 0x48389e4, size 0xbc, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::Oculus::Input::OculusHMDExtended* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__back_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__back_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__touchpad_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__touchpad_k__BackingField();

  constexpr void __cordl_internal_set__back_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method .ctor, addr 0x4838aa0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_back, addr 0x48389c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_back();

  /// @brief Method get_touchpad, addr 0x48389d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();

  /// @brief Method set_back, addr 0x48389cc, size 0x8, virtual false, abstract: false, final false
  inline void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_touchpad, addr 0x48389dc, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusHMDExtended();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusHMDExtended", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusHMDExtended(OculusHMDExtended&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusHMDExtended", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusHMDExtended(OculusHMDExtended const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17430 };

  /// @brief Field <back>k__BackingField, offset: 0x278, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____back_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset: 0x280, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____touchpad_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMDExtended, ____back_k__BackingField) == 0x278, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMDExtended, ____touchpad_k__BackingField) == 0x280, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::OculusHMDExtended, 0x288>, "Size mismatch!");

} // namespace Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusHMDExtended);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusHMDExtended*, "Unity.XR.Oculus.Input", "OculusHMDExtended");
