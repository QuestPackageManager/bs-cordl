#pragma once
// IWYU pragma private; include "System/Diagnostics/ProcessWindowStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessWindowStyle)
// Forward declare root types
namespace System::Diagnostics {
struct ProcessWindowStyle;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::ProcessWindowStyle);
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.ProcessWindowStyle
struct CORDL_TYPE ProcessWindowStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProcessWindowStyle_Unwrapped
  enum struct __ProcessWindowStyle_Unwrapped : int32_t {
    __E_Hidden = static_cast<int32_t>(0x1),
    __E_Maximized = static_cast<int32_t>(0x3),
    __E_Minimized = static_cast<int32_t>(0x2),
    __E_Normal = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProcessWindowStyle_Unwrapped() const noexcept {
    return static_cast<__ProcessWindowStyle_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessWindowStyle();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProcessWindowStyle(int32_t value__) noexcept;

  /// @brief Field Hidden value: I32(1)
  static ::System::Diagnostics::ProcessWindowStyle const Hidden;

  /// @brief Field Maximized value: I32(3)
  static ::System::Diagnostics::ProcessWindowStyle const Maximized;

  /// @brief Field Minimized value: I32(2)
  static ::System::Diagnostics::ProcessWindowStyle const Minimized;

  /// @brief Field Normal value: I32(0)
  static ::System::Diagnostics::ProcessWindowStyle const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9279 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::ProcessWindowStyle, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessWindowStyle, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessWindowStyle, "System.Diagnostics", "ProcessWindowStyle");
