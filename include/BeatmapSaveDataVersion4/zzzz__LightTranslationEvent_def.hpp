#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationEvent)
namespace BeatmapSaveDataCommon {
struct EaseType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct LightTranslationEvent;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::LightTranslationEvent);
// Type: BeatmapSaveDataVersion4::LightTranslationEvent
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion4::LightTranslationEvent
struct CORDL_TYPE LightTranslationEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationEvent();

  // Ctor Parameters [CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: None }, CppParam {
  // name: "t", ty: "float_t", modifiers: "", def_value: None }]
  constexpr LightTranslationEvent(int32_t p, ::BeatmapSaveDataCommon::EaseType e, float_t t) noexcept;

  /// @brief Field p, offset: 0x0, size: 0x4, def value: None
  int32_t p;

  /// @brief Field e, offset: 0x4, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType e;

  /// @brief Field t, offset: 0x8, size: 0x4, def value: None
  float_t t;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::LightTranslationEvent, 0xc>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEvent, p) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEvent, e) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEvent, t) == 0x8, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::LightTranslationEvent, "BeatmapSaveDataVersion4", "LightTranslationEvent");
