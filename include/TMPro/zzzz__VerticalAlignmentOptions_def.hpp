#pragma once
// IWYU pragma private; include "TMPro/VerticalAlignmentOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerticalAlignmentOptions)
// Forward declare root types
namespace TMPro {
struct VerticalAlignmentOptions;
}
// Write type traits
MARK_VAL_T(::TMPro::VerticalAlignmentOptions);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.VerticalAlignmentOptions
struct CORDL_TYPE VerticalAlignmentOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VerticalAlignmentOptions_Unwrapped
  enum struct __VerticalAlignmentOptions_Unwrapped : int32_t {
    __E_Top = static_cast<int32_t>(0x100),
    __E_Middle = static_cast<int32_t>(0x200),
    __E_Bottom = static_cast<int32_t>(0x400),
    __E_Baseline = static_cast<int32_t>(0x800),
    __E_Geometry = static_cast<int32_t>(0x1000),
    __E_Capline = static_cast<int32_t>(0x2000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VerticalAlignmentOptions_Unwrapped() const noexcept {
    return static_cast<__VerticalAlignmentOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VerticalAlignmentOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VerticalAlignmentOptions(int32_t value__) noexcept;

  /// @brief Field Baseline value: I32(2048)
  static ::TMPro::VerticalAlignmentOptions const Baseline;

  /// @brief Field Bottom value: I32(1024)
  static ::TMPro::VerticalAlignmentOptions const Bottom;

  /// @brief Field Capline value: I32(8192)
  static ::TMPro::VerticalAlignmentOptions const Capline;

  /// @brief Field Geometry value: I32(4096)
  static ::TMPro::VerticalAlignmentOptions const Geometry;

  /// @brief Field Middle value: I32(512)
  static ::TMPro::VerticalAlignmentOptions const Middle;

  /// @brief Field Top value: I32(256)
  static ::TMPro::VerticalAlignmentOptions const Top;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15946 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::VerticalAlignmentOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::VerticalAlignmentOptions, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::VerticalAlignmentOptions, "TMPro", "VerticalAlignmentOptions");
