#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RuleMatcher)
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct RuleMatcher;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::RuleMatcher);
// Type: UnityEngine.UIElements::RuleMatcher
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6919))
// CS Name: ::UnityEngine.UIElements::RuleMatcher
struct CORDL_TYPE RuleMatcher {
public:
  // Declarations
  /// @brief Method ToString addr 0x2e04684 size 0x20 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: None }, CppParam { name: "complexSelector", ty:
  // "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value: None }]
  constexpr RuleMatcher(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleComplexSelector* complexSelector) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuleMatcher();

  /// @brief Field sheet, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheet* sheet;

  /// @brief Field complexSelector, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleComplexSelector* complexSelector;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RuleMatcher, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuleMatcher, "UnityEngine.UIElements", "RuleMatcher");
