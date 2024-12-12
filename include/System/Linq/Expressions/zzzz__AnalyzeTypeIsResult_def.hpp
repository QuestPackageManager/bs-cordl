#pragma once
// IWYU pragma private; include "System/Linq/Expressions/AnalyzeTypeIsResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyzeTypeIsResult)
// Forward declare root types
namespace System::Linq::Expressions {
struct AnalyzeTypeIsResult;
}
// Write type traits
MARK_VAL_T(::System::Linq::Expressions::AnalyzeTypeIsResult);
// Dependencies
namespace System::Linq::Expressions {
// Is value type: true
// CS Name: System.Linq.Expressions.AnalyzeTypeIsResult
struct CORDL_TYPE AnalyzeTypeIsResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnalyzeTypeIsResult_Unwrapped
  enum struct __AnalyzeTypeIsResult_Unwrapped : int32_t {
    __E_KnownFalse = static_cast<int32_t>(0x0),
    __E_KnownTrue = static_cast<int32_t>(0x1),
    __E_KnownAssignable = static_cast<int32_t>(0x2),
    __E_Unknown = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnalyzeTypeIsResult_Unwrapped() const noexcept {
    return static_cast<__AnalyzeTypeIsResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyzeTypeIsResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnalyzeTypeIsResult(int32_t value__) noexcept;

  /// @brief Field KnownAssignable value: I32(2)
  static ::System::Linq::Expressions::AnalyzeTypeIsResult const KnownAssignable;

  /// @brief Field KnownFalse value: I32(0)
  static ::System::Linq::Expressions::AnalyzeTypeIsResult const KnownFalse;

  /// @brief Field KnownTrue value: I32(1)
  static ::System::Linq::Expressions::AnalyzeTypeIsResult const KnownTrue;

  /// @brief Field Unknown value: I32(3)
  static ::System::Linq::Expressions::AnalyzeTypeIsResult const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::AnalyzeTypeIsResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::AnalyzeTypeIsResult, 0x4>, "Size mismatch!");

} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::AnalyzeTypeIsResult, "System.Linq.Expressions", "AnalyzeTypeIsResult");
