#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/DropdownMenuItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithLabel_def.hpp"
CORDL_MODULE_EXPORT(DropdownMenuItem)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Dropdown;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class DropdownMenuItem;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.DropdownMenuItem
class CORDL_TYPE DropdownMenuItem : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel {
public:
  // Declarations
  /// @brief Field _dropdown, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__dropdown, put = __cordl_internal_set__dropdown)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> _dropdown;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem* New_ctor();

  /// @brief Method OnPointerClick, addr 0x58ac01c, size 0x28, virtual true, abstract: false, final false
  inline void OnPointerClick();

  /// @brief Method RegisterDropdownSourceMenu, addr 0x58ac014, size 0x8, virtual false, abstract: false, final false
  inline void RegisterDropdownSourceMenu(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown* dropdown);

  /// @brief Method Setup, addr 0x58abeec, size 0x128, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> const& __cordl_internal_get__dropdown() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown>& __cordl_internal_get__dropdown();

  constexpr void __cordl_internal_set__dropdown(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> value);

  /// @brief Method .ctor, addr 0x58ac044, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DropdownMenuItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenuItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DropdownMenuItem(DropdownMenuItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DropdownMenuItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DropdownMenuItem(DropdownMenuItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18363 };

  /// @brief Field _dropdown, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> ____dropdown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem, ____dropdown) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem, 0xa8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "DropdownMenuItem");
