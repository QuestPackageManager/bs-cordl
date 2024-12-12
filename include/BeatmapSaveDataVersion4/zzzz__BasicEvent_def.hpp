#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/BasicEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicEvent)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct BasicEvent;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::BasicEvent);
// Dependencies BeatmapSaveDataCommon.BeatmapEventType
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.BasicEvent
struct CORDL_TYPE BasicEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicEvent();

  // Ctor Parameters [CppParam { name: "t", ty: "::BeatmapSaveDataCommon::BeatmapEventType", modifiers: "", def_value: None }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }]
  constexpr BasicEvent(::BeatmapSaveDataCommon::BeatmapEventType t, int32_t i, float_t f) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13366 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field t, offset: 0x0, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::BeatmapEventType t;

  /// @brief Field i, offset: 0x4, size: 0x4, def value: None
  int32_t i;

  /// @brief Field f, offset: 0x8, size: 0x4, def value: None
  float_t f;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::BasicEvent, t) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BasicEvent, i) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BasicEvent, f) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::BasicEvent, 0xc>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::BasicEvent, "BeatmapSaveDataVersion4", "BasicEvent");
