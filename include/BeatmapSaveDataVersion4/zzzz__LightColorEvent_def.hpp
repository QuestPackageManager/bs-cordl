#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/LightColorEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EnvironmentColorType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorEvent)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct LightColorEvent;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::LightColorEvent);
// Dependencies BeatmapSaveDataCommon.EaseType, BeatmapSaveDataCommon.EnvironmentColorType
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.LightColorEvent
struct CORDL_TYPE LightColorEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorEvent();

  // Ctor Parameters [CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: None }, CppParam {
  // name: "c", ty: "::BeatmapSaveDataCommon::EnvironmentColorType", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "f", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "sb", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sf", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightColorEvent(int32_t p, ::BeatmapSaveDataCommon::EaseType e, ::BeatmapSaveDataCommon::EnvironmentColorType c, float_t b, int32_t f, float_t sb, int32_t sf) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13380 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field p, offset: 0x0, size: 0x4, def value: None
  int32_t p;

  /// @brief Field e, offset: 0x4, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType e;

  /// @brief Field c, offset: 0x8, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EnvironmentColorType c;

  /// @brief Field b, offset: 0xc, size: 0x4, def value: None
  float_t b;

  /// @brief Field f, offset: 0x10, size: 0x4, def value: None
  int32_t f;

  /// @brief Field sb, offset: 0x14, size: 0x4, def value: None
  float_t sb;

  /// @brief Field sf, offset: 0x18, size: 0x4, def value: None
  int32_t sf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::LightColorEvent, p) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightColorEvent, e) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightColorEvent, c) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightColorEvent, b) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightColorEvent, f) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightColorEvent, sb) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightColorEvent, sf) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::LightColorEvent, 0x1c>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::LightColorEvent, "BeatmapSaveDataVersion4", "LightColorEvent");
