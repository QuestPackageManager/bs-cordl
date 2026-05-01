#pragma once
// IWYU pragma private; include "System/ConsoleModifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleModifiers)
// Forward declare root types
namespace System {
struct ConsoleModifiers;
}
// Write type traits
MARK_VAL_T(::System::ConsoleModifiers);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ConsoleModifiers
struct CORDL_TYPE ConsoleModifiers {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConsoleModifiers_Unwrapped
  enum struct __ConsoleModifiers_Unwrapped : int32_t {
    __E_Alt = static_cast<int32_t>(0x1),
    __E_Shift = static_cast<int32_t>(0x2),
    __E_Control = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConsoleModifiers_Unwrapped() const noexcept {
    return static_cast<__ConsoleModifiers_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleModifiers();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConsoleModifiers(int32_t value__) noexcept;

  /// @brief Field Alt value: I32(1)
  static ::System::ConsoleModifiers const Alt;

  /// @brief Field Control value: I32(4)
  static ::System::ConsoleModifiers const Control;

  /// @brief Field Shift value: I32(2)
  static ::System::ConsoleModifiers const Shift;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2528 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ConsoleModifiers, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ConsoleModifiers, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleModifiers, "System", "ConsoleModifiers");
