#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataNoArrowsTransform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataNoArrowsTransform_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataNoArrowsTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::BeatmapDataNoArrowsTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x37057f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataNoArrowsTransform*>(),
                                                                                           { "CreateTransformedData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataNoArrowsTransform._CreateTransformedData_g__ProcessData_0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::BeatmapDataNoArrowsTransform::_CreateTransformedData_g__ProcessData_0_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x37058e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataNoArrowsTransform*>(),
                                                             { "<CreateTransformedData>g__ProcessData|0_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataNoArrowsTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataNoArrowsTransform*>(),
                                                                                         { "CreateTransformedData", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(nullptr, ___internal_method, beatmapData);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapDataNoArrowsTransform::_CreateTransformedData_g__ProcessData_0_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataNoArrowsTransform*>(),
                                                           { "<CreateTransformedData>g__ProcessData|0_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(nullptr, ___internal_method, beatmapDataItem);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataNoArrowsTransform::BeatmapDataNoArrowsTransform() {}
