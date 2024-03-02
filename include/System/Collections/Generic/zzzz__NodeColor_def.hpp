#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NodeColor)
// Forward declare root types
namespace System::Collections::Generic {
struct NodeColor;
}
// Write type traits
MARK_VAL_T(::System::Collections::Generic::NodeColor);
// Type: System.Collections.Generic::NodeColor
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// Is value type: true
// CS Name: ::System.Collections.Generic::NodeColor
struct CORDL_TYPE NodeColor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __NodeColor_Unwrapped
  enum struct __NodeColor_Unwrapped : uint8_t {
    __E_Black = static_cast<uint8_t>(0x0u),
    __E_Red = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NodeColor_Unwrapped() const noexcept {
    return static_cast<__NodeColor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NodeColor();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr NodeColor(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Black value: static_cast<uint8_t>(0x0u)
  static ::System::Collections::Generic::NodeColor const Black;

  /// @brief Field Red value: static_cast<uint8_t>(0x1u)
  static ::System::Collections::Generic::NodeColor const Red;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::NodeColor, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Generic::NodeColor, value__) == 0x0, "Offset mismatch!");

} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::NodeColor, "System.Collections.Generic", "NodeColor");
