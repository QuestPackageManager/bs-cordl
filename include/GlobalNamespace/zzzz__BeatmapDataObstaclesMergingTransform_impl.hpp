#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataObstaclesMergingTransform.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataObstaclesMergingTransform_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataObstaclesMergingTransform_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3705df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0._CreateTransformedData_g__ProcessData_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::*)(::GlobalNamespace::BeatmapDataItem*)>(
        &::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3705e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>(),
                                                             { "<CreateTransformedData>g__ProcessData|0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_get_beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_get_beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr void GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapData = value;
}
constexpr ::ArrayW<::GlobalNamespace::ObstacleData*>& GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_get_prevObstacleDataInLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevObstacleDataInLines;
}
constexpr ::ArrayW<::GlobalNamespace::ObstacleData*> const& GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_get_prevObstacleDataInLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevObstacleDataInLines;
}
constexpr void GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::__cordl_internal_set_prevObstacleDataInLines(::ArrayW<::GlobalNamespace::ObstacleData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prevObstacleDataInLines = value;
}
inline void GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataItem*
GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>(),
                                                           { "<CreateTransformedData>g__ProcessData|0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method, beatmapDataItem);
}
inline ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0* GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0::BeatmapDataObstaclesMergingTransform___c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesMergingTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3705c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesMergingTransform*>(),
                                                                                           { "CreateTransformedData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesMergingTransform.CanBeMerged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleData*)>(
    &::GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3705dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesMergingTransform*>(),
                                                             { "CanBeMerged", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleData*>(), ::i2c::type_of<::GlobalNamespace::ObstacleData*>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesMergingTransform*>(),
                                                                                         { "CreateTransformedData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(nullptr, ___internal_method, beatmapData);
}
inline bool GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged(::GlobalNamespace::ObstacleData* firstObstacle, ::GlobalNamespace::ObstacleData* secondObstacle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesMergingTransform*>(),
                                                           { "CanBeMerged", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleData*>(), ::i2c::type_of<::GlobalNamespace::ObstacleData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, firstObstacle, secondObstacle);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataObstaclesMergingTransform::BeatmapDataObstaclesMergingTransform() {}
