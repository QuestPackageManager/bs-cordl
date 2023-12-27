#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionMultiplierType)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplierType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType);
// Type: UnityEngine.UIElements.StyleSheets.Syntax::ExpressionMultiplierType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7496))
// CS Name: ::UnityEngine.UIElements.StyleSheets.Syntax::ExpressionMultiplierType
struct CORDL_TYPE ExpressionMultiplierType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExpressionMultiplierType_Unwrapped
  enum struct __ExpressionMultiplierType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ZeroOrMore = static_cast<int32_t>(0x1),
    __E_OneOrMore = static_cast<int32_t>(0x2),
    __E_ZeroOrOne = static_cast<int32_t>(0x3),
    __E_Ranges = static_cast<int32_t>(0x4),
    __E_OneOrMoreComma = static_cast<int32_t>(0x5),
    __E_GroupAtLeastOne = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExpressionMultiplierType_Unwrapped() const noexcept {
    return static_cast<__ExpressionMultiplierType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExpressionMultiplierType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionMultiplierType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const None;

  /// @brief Field ZeroOrMore value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const ZeroOrMore;

  /// @brief Field OneOrMore value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const OneOrMore;

  /// @brief Field ZeroOrOne value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const ZeroOrOne;

  /// @brief Field Ranges value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const Ranges;

  /// @brief Field OneOrMoreComma value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const OneOrMoreComma;

  /// @brief Field GroupAtLeastOne value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType const GroupAtLeastOne;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionMultiplierType");
