#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/WaypointData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaypointData)
namespace BeatmapSaveDataCommon {
struct NoteLineLayer;
}
namespace BeatmapSaveDataCommon {
struct OffsetDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class WaypointData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData);
// Dependencies BeatmapSaveDataCommon.NoteLineLayer, BeatmapSaveDataCommon.OffsetDirection, BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.WaypointData
class CORDL_TYPE WaypointData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _lineIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__lineIndex, put = __cordl_internal_set__lineIndex)) int32_t _lineIndex;

  /// @brief Field _lineLayer, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__lineLayer, put = __cordl_internal_set__lineLayer)) ::BeatmapSaveDataCommon::NoteLineLayer _lineLayer;

  /// @brief Field _offsetDirection, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__offsetDirection, put = __cordl_internal_set__offsetDirection)) ::BeatmapSaveDataCommon::OffsetDirection _offsetDirection;

  /// @brief Field _time, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time, put = __cordl_internal_set__time)) float_t _time;

  __declspec(property(get = get_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_lineLayer)) ::BeatmapSaveDataCommon::NoteLineLayer lineLayer;

  __declspec(property(get = get_offsetDirection)) ::BeatmapSaveDataCommon::OffsetDirection offsetDirection;

  __declspec(property(get = get_time)) float_t time;

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData* New_ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataCommon::NoteLineLayer lineLayer,
                                                                                ::BeatmapSaveDataCommon::OffsetDirection offsetDirection);

  constexpr int32_t const& __cordl_internal_get__lineIndex() const;

  constexpr int32_t& __cordl_internal_get__lineIndex();

  constexpr ::BeatmapSaveDataCommon::NoteLineLayer const& __cordl_internal_get__lineLayer() const;

  constexpr ::BeatmapSaveDataCommon::NoteLineLayer& __cordl_internal_get__lineLayer();

  constexpr ::BeatmapSaveDataCommon::OffsetDirection const& __cordl_internal_get__offsetDirection() const;

  constexpr ::BeatmapSaveDataCommon::OffsetDirection& __cordl_internal_get__offsetDirection();

  constexpr float_t const& __cordl_internal_get__time() const;

  constexpr float_t& __cordl_internal_get__time();

  constexpr void __cordl_internal_set__lineIndex(int32_t value);

  constexpr void __cordl_internal_set__lineLayer(::BeatmapSaveDataCommon::NoteLineLayer value);

  constexpr void __cordl_internal_set__offsetDirection(::BeatmapSaveDataCommon::OffsetDirection value);

  constexpr void __cordl_internal_set__time(float_t value);

  /// @brief Method .ctor, addr 0x270b104, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataCommon::NoteLineLayer lineLayer, ::BeatmapSaveDataCommon::OffsetDirection offsetDirection);

  /// @brief Method get_lineIndex, addr 0x270b0ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method get_lineLayer, addr 0x270b0f4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteLineLayer get_lineLayer();

  /// @brief Method get_offsetDirection, addr 0x270b0fc, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::OffsetDirection get_offsetDirection();

  /// @brief Method get_time, addr 0x270b0e4, size 0x8, virtual true, abstract: false, final false
  inline float_t get_time();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13437 };

  /// @brief Field _time, offset: 0x10, size: 0x4, def value: None
  float_t ____time;

  /// @brief Field _lineIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ____lineIndex;

  /// @brief Field _lineLayer, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteLineLayer ____lineLayer;

  /// @brief Field _offsetDirection, offset: 0x1c, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::OffsetDirection ____offsetDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData, ____time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData, ____lineIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData, ____lineLayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData, ____offsetDirection) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "WaypointData");
