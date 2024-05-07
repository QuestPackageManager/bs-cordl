#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/MirrorQualityPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorQualityPreset)
// Forward declare root types
namespace BeatSaber::PerformancePresets {
struct MirrorQualityPreset;
}
// Write type traits
MARK_VAL_T(::BeatSaber::PerformancePresets::MirrorQualityPreset);
// Type: BeatSaber.PerformancePresets::MirrorQualityPreset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: true
// CS Name: ::BeatSaber.PerformancePresets::MirrorQualityPreset
struct CORDL_TYPE MirrorQualityPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MirrorQualityPreset_Unwrapped
  enum struct __MirrorQualityPreset_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Fake = static_cast<int32_t>(0x1),
    __E_RenderedLQ = static_cast<int32_t>(0x2),
    __E_RenderedHQ = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MirrorQualityPreset_Unwrapped() const noexcept {
    return static_cast<__MirrorQualityPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorQualityPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MirrorQualityPreset(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Fake value: static_cast<int32_t>(0x1)
  static ::BeatSaber::PerformancePresets::MirrorQualityPreset const Fake;

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::BeatSaber::PerformancePresets::MirrorQualityPreset const Off;

  /// @brief Field RenderedHQ value: static_cast<int32_t>(0x3)
  static ::BeatSaber::PerformancePresets::MirrorQualityPreset const RenderedHQ;

  /// @brief Field RenderedLQ value: static_cast<int32_t>(0x2)
  static ::BeatSaber::PerformancePresets::MirrorQualityPreset const RenderedLQ;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::MirrorQualityPreset, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::MirrorQualityPreset, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::MirrorQualityPreset, "BeatSaber.PerformancePresets", "MirrorQualityPreset");
