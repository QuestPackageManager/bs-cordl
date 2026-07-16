#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ThemeStyleSheet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
CORDL_MODULE_EXPORT(ThemeStyleSheet)
// Forward declare root types
namespace UnityEngine::UIElements {
class ThemeStyleSheet;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ThemeStyleSheet*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ThemeStyleSheet*, "UnityEngine.UIElements", "ThemeStyleSheet");
// Dependencies UnityEngine.UIElements.StyleSheet
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ThemeStyleSheet
class CORDL_TYPE ThemeStyleSheet : public ::UnityEngine::UIElements::StyleSheet {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ThemeStyleSheet* New_ctor();

  /// @brief Method OnEnable, addr 0x6c9b798, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method .ctor, addr 0x6c9b7b4, size 0x5c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5084 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ThemeStyleSheet) == 0xa0, "Size mismatch!");

} // namespace UnityEngine::UIElements
