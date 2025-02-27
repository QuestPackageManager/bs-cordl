#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/LightRotationEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__RotationDirection_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationEvent)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct LightRotationEvent;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::LightRotationEvent);
// Dependencies BeatmapSaveDataCommon.EaseType, BeatmapSaveDataCommon.RotationDirection
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.LightRotationEvent
struct CORDL_TYPE LightRotationEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationEvent();

  // Ctor Parameters [CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: None }, CppParam {
  // name: "l", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d", ty:
  // "::BeatmapSaveDataCommon::RotationDirection", modifiers: "", def_value: None }]
  constexpr LightRotationEvent(int32_t p, ::BeatmapSaveDataCommon::EaseType e, int32_t l, float_t r, ::BeatmapSaveDataCommon::RotationDirection d) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field p, offset: 0x0, size: 0x4, def value: None
  int32_t p;

  /// @brief Field e, offset: 0x4, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType e;

  /// @brief Field l, offset: 0x8, size: 0x4, def value: None
  int32_t l;

  /// @brief Field r, offset: 0xc, size: 0x4, def value: None
  float_t r;

  /// @brief Field d, offset: 0x10, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::RotationDirection d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::LightRotationEvent, p) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightRotationEvent, e) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightRotationEvent, l) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightRotationEvent, r) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightRotationEvent, d) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::LightRotationEvent, 0x14>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::LightRotationEvent, "BeatmapSaveDataVersion4", "LightRotationEvent");
