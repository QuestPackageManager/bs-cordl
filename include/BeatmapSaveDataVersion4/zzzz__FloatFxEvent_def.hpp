#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/FloatFxEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxEvent)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct FloatFxEvent;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::FloatFxEvent);
// Dependencies BeatmapSaveDataCommon.EaseType
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.FloatFxEvent
struct CORDL_TYPE FloatFxEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxEvent();

  // Ctor Parameters [CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: None }, CppParam {
  // name: "v", ty: "float_t", modifiers: "", def_value: None }]
  constexpr FloatFxEvent(int32_t p, ::BeatmapSaveDataCommon::EaseType e, float_t v) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15301 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field p, offset: 0x0, size: 0x4, def value: None
  int32_t p;

  /// @brief Field e, offset: 0x4, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType e;

  /// @brief Field v, offset: 0x8, size: 0x4, def value: None
  float_t v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::FloatFxEvent, p) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::FloatFxEvent, e) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::FloatFxEvent, v) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::FloatFxEvent, 0xc>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::FloatFxEvent, "BeatmapSaveDataVersion4", "FloatFxEvent");
