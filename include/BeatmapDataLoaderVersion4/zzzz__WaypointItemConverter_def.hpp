#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(WaypointItemConverter)
namespace BeatmapSaveDataVersion4 {
class BeatmapBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct Waypoint;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class BpmTimeProcessor;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class WaypointItemConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::WaypointItemConverter);
// Type: BeatmapDataLoaderVersion4::WaypointItemConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::WaypointItemConverter*
class CORDL_TYPE WaypointItemConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Field _waypoints, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__waypoints,
                      put = __cordl_internal_set__waypoints))::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> _waypoints;

  /// @brief Method Convert, addr 0x14044ec, size 0xf0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectData* Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::WaypointItemConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> waypoints,
                                                                             ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> const& __cordl_internal_get__waypoints() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*>& __cordl_internal_get__waypoints();

  constexpr void __cordl_internal_set__waypoints(::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> value);

  /// @brief Method .ctor, addr 0x1403f6c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> waypoints, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaypointItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaypointItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaypointItemConverter(WaypointItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaypointItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaypointItemConverter(WaypointItemConverter const&) = delete;

  /// @brief Field _waypoints, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> ____waypoints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::WaypointItemConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::WaypointItemConverter, ____waypoints) == 0x18, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::WaypointItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::WaypointItemConverter*, "BeatmapDataLoaderVersion4", "WaypointItemConverter");
