#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchResultErrorCode)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultErrorCode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode);
// Type: UnityEngine.UIElements.StyleSheets::MatchResultErrorCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7566))
// CS Name: ::UnityEngine.UIElements.StyleSheets::MatchResultErrorCode
struct CORDL_TYPE MatchResultErrorCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MatchResultErrorCode_Unwrapped
  enum struct __MatchResultErrorCode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Syntax = static_cast<int32_t>(0x1),
    __E_EmptyValue = static_cast<int32_t>(0x2),
    __E_ExpectedEndOfValue = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MatchResultErrorCode_Unwrapped() const noexcept {
    return static_cast<__MatchResultErrorCode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MatchResultErrorCode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchResultErrorCode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const None;

  /// @brief Field Syntax value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const Syntax;

  /// @brief Field EmptyValue value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const EmptyValue;

  /// @brief Field ExpectedEndOfValue value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const ExpectedEndOfValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, "UnityEngine.UIElements.StyleSheets", "MatchResultErrorCode");
