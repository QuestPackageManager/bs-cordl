#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/FxEventBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FxEventBox)
namespace BeatmapSaveDataCommon {
struct DistributionParamType;
}
namespace BeatmapSaveDataCommon {
struct EaseType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct FxEventBox;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::FxEventBox);
// Type: BeatmapSaveDataVersion4::FxEventBox
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion4::FxEventBox
struct CORDL_TYPE FxEventBox {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxEventBox();

  // Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "::BeatmapSaveDataCommon::DistributionParamType", modifiers: "", def_value: None
  // }, CppParam { name: "s", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::BeatmapSaveDataCommon::DistributionParamType", modifiers: "", def_value: None }, CppParam {
  // name: "b", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: None }]
  constexpr FxEventBox(float_t w, ::BeatmapSaveDataCommon::DistributionParamType d, float_t s, ::BeatmapSaveDataCommon::DistributionParamType t, int32_t b,
                       ::BeatmapSaveDataCommon::EaseType e) noexcept;

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  float_t w;

  /// @brief Field d, offset: 0x4, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::DistributionParamType d;

  /// @brief Field s, offset: 0x8, size: 0x4, def value: None
  float_t s;

  /// @brief Field t, offset: 0xc, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::DistributionParamType t;

  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  int32_t b;

  /// @brief Field e, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType e;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::FxEventBox, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::FxEventBox, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::FxEventBox, d) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::FxEventBox, s) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::FxEventBox, t) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::FxEventBox, b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::FxEventBox, e) == 0x14, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::FxEventBox, "BeatmapSaveDataVersion4", "FxEventBox");
