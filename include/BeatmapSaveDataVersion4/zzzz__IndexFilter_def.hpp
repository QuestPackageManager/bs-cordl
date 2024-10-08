#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/IndexFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__IndexFilterLimitAlsoAffectsType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterRandomType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IndexFilterType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexFilter)
namespace BeatmapSaveDataCommon {
struct IndexFilterLimitAlsoAffectsType;
}
namespace BeatmapSaveDataCommon {
struct IndexFilterRandomType;
}
namespace BeatmapSaveDataCommon {
struct IndexFilterType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct IndexFilter;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::IndexFilter);
// Type: BeatmapSaveDataVersion4::IndexFilter
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion4::IndexFilter
struct CORDL_TYPE IndexFilter {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexFilter();

  // Ctor Parameters [CppParam { name: "f", ty: "::BeatmapSaveDataCommon::IndexFilterType", modifiers: "", def_value: None }, CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "t", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "r", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "c", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "n", ty: "::BeatmapSaveDataCommon::IndexFilterRandomType", modifiers: "", def_value: None }, CppParam { name: "s", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "l", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType", modifiers: "", def_value: None
  // }]
  constexpr IndexFilter(::BeatmapSaveDataCommon::IndexFilterType f, int32_t p, int32_t t, int32_t r, int32_t c, ::BeatmapSaveDataCommon::IndexFilterRandomType n, int32_t s, float_t l,
                        ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType d) noexcept;

  /// @brief Field f, offset: 0x0, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::IndexFilterType f;

  /// @brief Field p, offset: 0x4, size: 0x4, def value: None
  int32_t p;

  /// @brief Field t, offset: 0x8, size: 0x4, def value: None
  int32_t t;

  /// @brief Field r, offset: 0xc, size: 0x4, def value: None
  int32_t r;

  /// @brief Field c, offset: 0x10, size: 0x4, def value: None
  int32_t c;

  /// @brief Field n, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::IndexFilterRandomType n;

  /// @brief Field s, offset: 0x18, size: 0x4, def value: None
  int32_t s;

  /// @brief Field l, offset: 0x1c, size: 0x4, def value: None
  float_t l;

  /// @brief Field d, offset: 0x20, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::IndexFilterLimitAlsoAffectsType d;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13337 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::IndexFilter, 0x24>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::IndexFilter, f) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::IndexFilter, p) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::IndexFilter, t) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::IndexFilter, r) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::IndexFilter, c) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::IndexFilter, n) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::IndexFilter, s) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::IndexFilter, l) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::IndexFilter, d) == 0x20, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::IndexFilter, "BeatmapSaveDataVersion4", "IndexFilter");
