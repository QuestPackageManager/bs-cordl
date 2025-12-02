#pragma once
// IWYU pragma private; include "Unity/Collections/ConversionError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConversionError)
// Forward declare root types
namespace Unity::Collections {
struct ConversionError;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::ConversionError);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.ConversionError
struct CORDL_TYPE ConversionError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConversionError_Unwrapped
  enum struct __ConversionError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Overflow = static_cast<int32_t>(0x1),
    __E_Encoding = static_cast<int32_t>(0x2),
    __E_CodePoint = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConversionError_Unwrapped() const noexcept {
    return static_cast<__ConversionError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConversionError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConversionError(int32_t value__) noexcept;

  /// @brief Field CodePoint value: I32(3)
  static ::Unity::Collections::ConversionError const CodePoint;

  /// @brief Field Encoding value: I32(2)
  static ::Unity::Collections::ConversionError const Encoding;

  /// @brief Field None value: I32(0)
  static ::Unity::Collections::ConversionError const None;

  /// @brief Field Overflow value: I32(1)
  static ::Unity::Collections::ConversionError const Overflow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15682 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::ConversionError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::ConversionError, 0x4>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::ConversionError, "Unity.Collections", "ConversionError");
