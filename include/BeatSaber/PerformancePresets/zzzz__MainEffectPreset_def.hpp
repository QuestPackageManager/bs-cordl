#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/MainEffectPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainEffectPreset)
// Forward declare root types
namespace BeatSaber::PerformancePresets {
struct MainEffectPreset;
}
// Write type traits
MARK_VAL_T(::BeatSaber::PerformancePresets::MainEffectPreset);
// Type: BeatSaber.PerformancePresets::MainEffectPreset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::PerformancePresets {
// Is value type: true
// CS Name: ::BeatSaber.PerformancePresets::MainEffectPreset
struct CORDL_TYPE MainEffectPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MainEffectPreset_Unwrapped
  enum struct __MainEffectPreset_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Pyramid = static_cast<int32_t>(0x1),
    __E_PyramidForBaking = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MainEffectPreset_Unwrapped() const noexcept {
    return static_cast<__MainEffectPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MainEffectPreset(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::BeatSaber::PerformancePresets::MainEffectPreset const Off;

  /// @brief Field Pyramid value: static_cast<int32_t>(0x1)
  static ::BeatSaber::PerformancePresets::MainEffectPreset const Pyramid;

  /// @brief Field PyramidForBaking value: static_cast<int32_t>(0x2)
  static ::BeatSaber::PerformancePresets::MainEffectPreset const PyramidForBaking;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::PerformancePresets::MainEffectPreset, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::PerformancePresets::MainEffectPreset, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::PerformancePresets
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::PerformancePresets::MainEffectPreset, "BeatSaber.PerformancePresets", "MainEffectPreset");
