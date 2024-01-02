#pragma once
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
// Type: Unity.XR.Oculus.Input::OculusHMDExtended
// SizeInfo { instance_size: 624, native_size: -1, calculated_instance_size: 624, calculated_native_size: 624, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15158))
// CS Name: ::Unity.XR.Oculus.Input::OculusHMDExtended*
class CORDL_TYPE OculusHMDExtended : public ::Unity::XR::Oculus::Input::OculusHMD {
public:
  // Declarations
  /// @brief Field <back>k__BackingField, offset 0x260, size 0x8
  __declspec(property(get = __get__back_k__BackingField, put = __set__back_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset 0x268, size 0x8
  __declspec(property(get = __get__touchpad_k__BackingField, put = __set__touchpad_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField;

  __declspec(property(get = get_back, put = set_back))::UnityEngine::InputSystem::Controls::ButtonControl* back;

  __declspec(property(get = get_touchpad, put = set_touchpad))::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__back_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__back_k__BackingField() const;

  constexpr void __set__back_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__touchpad_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__touchpad_k__BackingField() const;

  constexpr void __set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_back, addr 0x2c7cb88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_back();

  /// @brief Method set_back, addr 0x2c7cb90, size 0x8, virtual false, abstract: false, final false
  inline void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_touchpad, addr 0x2c7cb98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();

  /// @brief Method set_touchpad, addr 0x2c7cba0, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method FinishSetup, addr 0x2c7cba8, size 0xbc, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::Oculus::Input::OculusHMDExtended* New_ctor();

  /// @brief Method .ctor, addr 0x2c7cc64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusHMDExtended", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusHMDExtended(OculusHMDExtended&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusHMDExtended", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusHMDExtended(OculusHMDExtended const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusHMDExtended();

public:
  /// @brief Field <back>k__BackingField, offset: 0x260, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____back_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset: 0x268, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____touchpad_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::OculusHMDExtended, 0x270>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMDExtended, ____back_k__BackingField) == 0x260, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMDExtended, ____touchpad_k__BackingField) == 0x268, "Offset mismatch!");

} // namespace Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusHMDExtended);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusHMDExtended*, "Unity.XR.Oculus.Input", "OculusHMDExtended");
