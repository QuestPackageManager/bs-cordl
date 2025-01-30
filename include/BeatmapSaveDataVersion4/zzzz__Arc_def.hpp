#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/Arc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Arc)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct Arc;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::Arc);
// Dependencies BeatmapSaveDataCommon.SliderMidAnchorMode
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.Arc
struct CORDL_TYPE Arc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Arc();

  // Ctor Parameters [CppParam { name: "m", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a", ty:
  // "::BeatmapSaveDataCommon::SliderMidAnchorMode", modifiers: "", def_value: None }]
  constexpr Arc(float_t m, float_t tm, ::BeatmapSaveDataCommon::SliderMidAnchorMode a) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field m, offset: 0x0, size: 0x4, def value: None
  float_t m;

  /// @brief Field tm, offset: 0x4, size: 0x4, def value: None
  float_t tm;

  /// @brief Field a, offset: 0x8, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::SliderMidAnchorMode a;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::Arc, m) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Arc, tm) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Arc, a) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::Arc, 0xc>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::Arc, "BeatmapSaveDataVersion4", "Arc");
