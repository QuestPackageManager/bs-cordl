#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ThemeStyleSheet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
CORDL_MODULE_EXPORT(ThemeStyleSheet)
// Forward declare root types
namespace UnityEngine::UIElements {
class ThemeStyleSheet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ThemeStyleSheet);
// Dependencies UnityEngine.UIElements.StyleSheet
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ThemeStyleSheet
class CORDL_TYPE ThemeStyleSheet : public ::UnityEngine::UIElements::StyleSheet {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ThemeStyleSheet* New_ctor();

  /// @brief Method OnEnable, addr 0x4a90764, size 0x24, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method .ctor, addr 0x4a90788, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThemeStyleSheet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThemeStyleSheet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThemeStyleSheet(ThemeStyleSheet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThemeStyleSheet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThemeStyleSheet(ThemeStyleSheet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6194 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ThemeStyleSheet, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ThemeStyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ThemeStyleSheet*, "UnityEngine.UIElements", "ThemeStyleSheet");
