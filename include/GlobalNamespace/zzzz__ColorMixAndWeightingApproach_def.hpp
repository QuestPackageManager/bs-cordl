#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorMixAndWeightingApproach.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorMixAndWeightingApproach)
// Forward declare root types
namespace GlobalNamespace {
struct ColorMixAndWeightingApproach;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorMixAndWeightingApproach);
// Type: ::ColorMixAndWeightingApproach
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ColorMixAndWeightingApproach
struct CORDL_TYPE ColorMixAndWeightingApproach {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColorMixAndWeightingApproach_Unwrapped
  enum struct __ColorMixAndWeightingApproach_Unwrapped : int32_t {
    __E_Maximum = static_cast<int32_t>(0x0),
    __E_FractionAndSum = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColorMixAndWeightingApproach_Unwrapped() const noexcept {
    return static_cast<__ColorMixAndWeightingApproach_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorMixAndWeightingApproach();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorMixAndWeightingApproach(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FractionAndSum value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::ColorMixAndWeightingApproach const FractionAndSum;

  /// @brief Field Maximum value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::ColorMixAndWeightingApproach const Maximum;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16258 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorMixAndWeightingApproach, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorMixAndWeightingApproach, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorMixAndWeightingApproach, "", "ColorMixAndWeightingApproach");
