#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/ColorBoostEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorBoostEvent)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct ColorBoostEvent;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::ColorBoostEvent);
// Dependencies
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.ColorBoostEvent
struct CORDL_TYPE ColorBoostEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorBoostEvent();

  // Ctor Parameters [CppParam { name: "b", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorBoostEvent(int32_t b) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15279 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field b, offset: 0x0, size: 0x4, def value: None
  int32_t b;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::ColorBoostEvent, b) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::ColorBoostEvent, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::ColorBoostEvent, "BeatmapSaveDataVersion4", "ColorBoostEvent");
