#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/Waypoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Waypoint)
namespace BeatmapSaveDataCommon {
struct OffsetDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct Waypoint;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::Waypoint);
// Type: BeatmapSaveDataVersion4::Waypoint
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion4::Waypoint
struct CORDL_TYPE Waypoint {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Waypoint();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "o", ty:
  // "::BeatmapSaveDataCommon::OffsetDirection", modifiers: "", def_value: None }]
  constexpr Waypoint(int32_t x, int32_t y, ::BeatmapSaveDataCommon::OffsetDirection o) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief Field o, offset: 0x8, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::OffsetDirection o;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13350 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::Waypoint, 0xc>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Waypoint, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Waypoint, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Waypoint, o) == 0x8, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::Waypoint, "BeatmapSaveDataVersion4", "Waypoint");
