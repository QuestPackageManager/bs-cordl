#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ObstacleItemConverter.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Obstacle_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__ObstacleItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Obstacle_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ObstacleItemConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::ObstacleItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::Obstacle>, ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::ObstacleItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375eb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::Obstacle>>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ObstacleItemConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion4::ObstacleItemConverter::*)(::BeatmapSaveDataVersion4::BeatmapBeatIndex*)>(
    &::BeatmapDataLoaderVersion4::ObstacleItemConverter::Convert)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x375ecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>(),
                                                                                           { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle>& BeatmapDataLoaderVersion4::ObstacleItemConverter::__cordl_internal_get__obstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle> const& BeatmapDataLoaderVersion4::ObstacleItemConverter::__cordl_internal_get__obstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr void BeatmapDataLoaderVersion4::ObstacleItemConverter::__cordl_internal_set__obstacles(::ArrayW<::BeatmapSaveDataVersion4::Obstacle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacles = value;
}
inline void BeatmapDataLoaderVersion4::ObstacleItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::Obstacle> obstacles, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::Obstacle>>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacles, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::ObstacleItemConverter::Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::ObstacleItemConverter* BeatmapDataLoaderVersion4::ObstacleItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::Obstacle> obstacles,
                                                                                                                      ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::ObstacleItemConverter*>(obstacles, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::ObstacleItemConverter::ObstacleItemConverter() {}
