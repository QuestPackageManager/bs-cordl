#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/WaypointData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaypointData)
namespace BeatmapSaveDataCommon {
struct OffsetDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class WaypointData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::WaypointData);
// Type: BeatmapSaveDataVersion3::WaypointData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::WaypointData*
class CORDL_TYPE WaypointData : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field d, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) ::BeatmapSaveDataCommon::OffsetDirection d;

  __declspec(property(get = get_layer)) int32_t layer;

  __declspec(property(get = get_line)) int32_t line;

  __declspec(property(get = get_offsetDirection)) ::BeatmapSaveDataCommon::OffsetDirection offsetDirection;

  /// @brief Field x, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  static inline ::BeatmapSaveDataVersion3::WaypointData* New_ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataCommon::OffsetDirection offsetDirection);

  constexpr ::BeatmapSaveDataCommon::OffsetDirection const& __cordl_internal_get_d() const;

  constexpr ::BeatmapSaveDataCommon::OffsetDirection& __cordl_internal_get_d();

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_d(::BeatmapSaveDataCommon::OffsetDirection value);

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  /// @brief Method .ctor, addr 0x26c8f18, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataCommon::OffsetDirection offsetDirection);

  /// @brief Method get_layer, addr 0x26c8f08, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layer();

  /// @brief Method get_line, addr 0x26c8f00, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_line();

  /// @brief Method get_offsetDirection, addr 0x26c8f10, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::OffsetDirection get_offsetDirection();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaypointData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaypointData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointData(WaypointData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointData(WaypointData const&) = delete;

  /// @brief Field x, offset: 0x14, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field d, offset: 0x1c, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::OffsetDirection ___d;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13378 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::WaypointData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::WaypointData, ___x) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::WaypointData, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::WaypointData, ___d) == 0x1c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::WaypointData*, "BeatmapSaveDataVersion3", "WaypointData");
