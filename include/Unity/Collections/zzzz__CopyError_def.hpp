#pragma once
// IWYU pragma private; include "Unity/Collections/CopyError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyError)
// Forward declare root types
namespace Unity::Collections {
struct CopyError;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::CopyError);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.CopyError
struct CORDL_TYPE CopyError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CopyError_Unwrapped
  enum struct __CopyError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Truncation = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CopyError_Unwrapped() const noexcept {
    return static_cast<__CopyError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CopyError(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::Unity::Collections::CopyError const None;

  /// @brief Field Truncation value: I32(1)
  static ::Unity::Collections::CopyError const Truncation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15695 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::CopyError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::CopyError, 0x4>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::CopyError, "Unity.Collections", "CopyError");
