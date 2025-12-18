#pragma once
// IWYU pragma private; include "Unity/Collections/ParseError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParseError)
// Forward declare root types
namespace Unity::Collections {
struct ParseError;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::ParseError);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.ParseError
struct CORDL_TYPE ParseError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParseError_Unwrapped
  enum struct __ParseError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Syntax = static_cast<int32_t>(0x1),
    __E_Overflow = static_cast<int32_t>(0x2),
    __E_Underflow = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParseError_Unwrapped() const noexcept {
    return static_cast<__ParseError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParseError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParseError(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::Unity::Collections::ParseError const None;

  /// @brief Field Overflow value: I32(2)
  static ::Unity::Collections::ParseError const Overflow;

  /// @brief Field Syntax value: I32(1)
  static ::Unity::Collections::ParseError const Syntax;

  /// @brief Field Underflow value: I32(3)
  static ::Unity::Collections::ParseError const Underflow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15694 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::ParseError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::ParseError, 0x4>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::ParseError, "Unity.Collections", "ParseError");
