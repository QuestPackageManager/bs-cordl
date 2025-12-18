#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugColor)
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
struct DebugColor;
}
// Write type traits
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::DebugColor);
// Dependencies
namespace Meta::XR::ImmersiveDebugger {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.DebugColor
struct CORDL_TYPE DebugColor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugColor_Unwrapped
  enum struct __DebugColor_Unwrapped : int32_t {
    __E_Red = static_cast<int32_t>(0x0),
    __E_Gray = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugColor_Unwrapped() const noexcept {
    return static_cast<__DebugColor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugColor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugColor(int32_t value__) noexcept;

  /// @brief Field Gray value: I32(1)
  static ::Meta::XR::ImmersiveDebugger::DebugColor const Gray;

  /// @brief Field Red value: I32(0)
  static ::Meta::XR::ImmersiveDebugger::DebugColor const Red;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23214 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugColor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::DebugColor, 0x4>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::DebugColor, "Meta.XR.ImmersiveDebugger", "DebugColor");
