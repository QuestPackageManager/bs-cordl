#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\LightColorBaseDataConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__LightColorBaseDataConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightColorEvent_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::LightColorBaseDataConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightColorBaseData* (*)(float_t, ::BeatmapSaveDataVersion4::LightColorEvent)>(
    &::BeatmapDataLoaderVersion4::LightColorBaseDataConverter::Convert)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3764b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::LightColorBaseDataConverter*>(),
                                                             { "Convert", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightColorEvent>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightColorBaseData* BeatmapDataLoaderVersion4::LightColorBaseDataConverter::Convert(float_t beat, ::BeatmapSaveDataVersion4::LightColorEvent lightColorEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::LightColorBaseDataConverter*>(),
                                                           { "Convert", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightColorEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightColorBaseData*>(nullptr, ___internal_method, beat, lightColorEvent);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::LightColorBaseDataConverter::LightColorBaseDataConverter() {}
