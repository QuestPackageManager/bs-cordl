#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/MatchResultErrorCode.hpp"
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
// Dependencies
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.MatchResultErrorCode
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchResultErrorCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MatchResultErrorCode(int32_t value__) noexcept;

  /// @brief Field EmptyValue value: I32(2)
  static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const EmptyValue;

  /// @brief Field ExpectedEndOfValue value: I32(3)
  static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const ExpectedEndOfValue;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const None;

  /// @brief Field Syntax value: I32(1)
  static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const Syntax;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5470 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, "UnityEngine.UIElements.StyleSheets", "MatchResultErrorCode");
