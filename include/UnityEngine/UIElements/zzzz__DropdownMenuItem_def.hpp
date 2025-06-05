#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenuItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DropdownMenuItem)
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenuItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenuItem);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DropdownMenuItem
class CORDL_TYPE DropdownMenuItem : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::DropdownMenuItem* New_ctor();

  /// @brief Method .ctor, addr 0x4a21d14, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5770 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenuItem, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenuItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenuItem*, "UnityEngine.UIElements", "DropdownMenuItem");
