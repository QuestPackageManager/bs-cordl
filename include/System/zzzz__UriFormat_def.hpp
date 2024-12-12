#pragma once
// IWYU pragma private; include "System/UriFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UriFormat)
// Forward declare root types
namespace System {
struct UriFormat;
}
// Write type traits
MARK_VAL_T(::System::UriFormat);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.UriFormat
struct CORDL_TYPE UriFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UriFormat_Unwrapped
  enum struct __UriFormat_Unwrapped : int32_t {
    __E_UriEscaped = static_cast<int32_t>(0x1),
    __E_Unescaped = static_cast<int32_t>(0x2),
    __E_SafeUnescaped = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UriFormat_Unwrapped() const noexcept {
    return static_cast<__UriFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UriFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UriFormat(int32_t value__) noexcept;

  /// @brief Field SafeUnescaped value: I32(3)
  static ::System::UriFormat const SafeUnescaped;

  /// @brief Field Unescaped value: I32(2)
  static ::System::UriFormat const Unescaped;

  /// @brief Field UriEscaped value: I32(1)
  static ::System::UriFormat const UriEscaped;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9194 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::UriFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UriFormat, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UriFormat, "System", "UriFormat");
