#pragma once
// IWYU pragma private; include "System/Reflection/ExceptionHandlingClauseOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionHandlingClauseOptions)
// Forward declare root types
namespace System::Reflection {
struct ExceptionHandlingClauseOptions;
}
// Write type traits
MARK_VAL_T(::System::Reflection::ExceptionHandlingClauseOptions);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.ExceptionHandlingClauseOptions
struct CORDL_TYPE ExceptionHandlingClauseOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExceptionHandlingClauseOptions_Unwrapped
  enum struct __ExceptionHandlingClauseOptions_Unwrapped : int32_t {
    __E_Clause = static_cast<int32_t>(0x0),
    __E_Filter = static_cast<int32_t>(0x1),
    __E_Finally = static_cast<int32_t>(0x2),
    __E_Fault = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExceptionHandlingClauseOptions_Unwrapped() const noexcept {
    return static_cast<__ExceptionHandlingClauseOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionHandlingClauseOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExceptionHandlingClauseOptions(int32_t value__) noexcept;

  /// @brief Field Clause value: I32(0)
  static ::System::Reflection::ExceptionHandlingClauseOptions const Clause;

  /// @brief Field Fault value: I32(4)
  static ::System::Reflection::ExceptionHandlingClauseOptions const Fault;

  /// @brief Field Filter value: I32(1)
  static ::System::Reflection::ExceptionHandlingClauseOptions const Filter;

  /// @brief Field Finally value: I32(2)
  static ::System::Reflection::ExceptionHandlingClauseOptions const Finally;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3467 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::ExceptionHandlingClauseOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::ExceptionHandlingClauseOptions, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ExceptionHandlingClauseOptions, "System.Reflection", "ExceptionHandlingClauseOptions");
