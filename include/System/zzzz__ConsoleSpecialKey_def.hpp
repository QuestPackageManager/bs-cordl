#pragma once
// IWYU pragma private; include "System/ConsoleSpecialKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleSpecialKey)
// Forward declare root types
namespace System {
struct ConsoleSpecialKey;
}
// Write type traits
MARK_VAL_T(::System::ConsoleSpecialKey);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ConsoleSpecialKey
struct CORDL_TYPE ConsoleSpecialKey {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConsoleSpecialKey_Unwrapped
  enum struct __ConsoleSpecialKey_Unwrapped : int32_t {
    __E_ControlC = static_cast<int32_t>(0x0),
    __E_ControlBreak = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConsoleSpecialKey_Unwrapped() const noexcept {
    return static_cast<__ConsoleSpecialKey_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleSpecialKey();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConsoleSpecialKey(int32_t value__) noexcept;

  /// @brief Field ControlBreak value: I32(1)
  static ::System::ConsoleSpecialKey const ControlBreak;

  /// @brief Field ControlC value: I32(0)
  static ::System::ConsoleSpecialKey const ControlC;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2529 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ConsoleSpecialKey, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ConsoleSpecialKey, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleSpecialKey, "System", "ConsoleSpecialKey");
