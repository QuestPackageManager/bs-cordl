#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventTransitionType)
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapEventTransitionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapEventTransitionType);
// Type: ::BeatmapEventTransitionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapEventTransitionType
struct CORDL_TYPE BeatmapEventTransitionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapEventTransitionType_Unwrapped
  enum struct __BeatmapEventTransitionType_Unwrapped : int32_t {
    __E_Instant = static_cast<int32_t>(0x0),
    __E_Interpolate = static_cast<int32_t>(0x1),
    __E_Extend = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapEventTransitionType_Unwrapped() const noexcept {
    return static_cast<__BeatmapEventTransitionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__BeatmapEventTransitionType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventTransitionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapEventTransitionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Extend value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::BeatmapEventTransitionType const Extend;

  /// @brief Field Instant value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::BeatmapEventTransitionType const Instant;

  /// @brief Field Interpolate value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::BeatmapEventTransitionType const Interpolate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventTransitionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventTransitionType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventTransitionType, "", "BeatmapEventTransitionType");
