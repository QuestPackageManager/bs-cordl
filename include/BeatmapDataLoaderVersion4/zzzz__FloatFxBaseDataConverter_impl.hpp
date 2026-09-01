#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\FloatFxBaseDataConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__FloatFxBaseDataConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__FloatFxEvent_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBaseData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FloatFxBaseData* (*)(float_t, ::BeatmapSaveDataVersion4::FloatFxEvent)>(
    &::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter::Convert)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3765390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter*>(),
                                                             { "Convert", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion4::FloatFxEvent>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::FloatFxBaseData* BeatmapDataLoaderVersion4::FloatFxBaseDataConverter::Convert(float_t beat, ::BeatmapSaveDataVersion4::FloatFxEvent floatFxEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter*>(),
                                                                                         { "Convert", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion4::FloatFxEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FloatFxBaseData*>(nullptr, ___internal_method, beat, floatFxEvent);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::FloatFxBaseDataConverter::FloatFxBaseDataConverter() {}
