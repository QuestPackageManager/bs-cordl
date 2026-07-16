#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/WaypointItemConverter.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Waypoint_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__WaypointItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Waypoint_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::WaypointItemConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::WaypointItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::Waypoint>, ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::WaypointItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375eb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::WaypointItemConverter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::Waypoint>>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::WaypointItemConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion4::WaypointItemConverter::*)(::BeatmapSaveDataVersion4::BeatmapBeatIndex*)>(
    &::BeatmapDataLoaderVersion4::WaypointItemConverter::Convert)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x375f110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::WaypointItemConverter*>(),
                                                                                           { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint>& BeatmapDataLoaderVersion4::WaypointItemConverter::__cordl_internal_get__waypoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waypoints;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint> const& BeatmapDataLoaderVersion4::WaypointItemConverter::__cordl_internal_get__waypoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waypoints;
}
constexpr void BeatmapDataLoaderVersion4::WaypointItemConverter::__cordl_internal_set__waypoints(::ArrayW<::BeatmapSaveDataVersion4::Waypoint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waypoints = value;
}
inline void BeatmapDataLoaderVersion4::WaypointItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::Waypoint> waypoints, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::WaypointItemConverter*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::Waypoint>>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waypoints, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::WaypointItemConverter::Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::WaypointItemConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::WaypointItemConverter* BeatmapDataLoaderVersion4::WaypointItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::Waypoint> waypoints,
                                                                                                                      ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::WaypointItemConverter*>(waypoints, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::WaypointItemConverter::WaypointItemConverter() {}
