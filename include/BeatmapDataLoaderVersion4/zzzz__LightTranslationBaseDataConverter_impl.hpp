#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/LightTranslationBaseDataConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__LightTranslationBaseDataConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightTranslationEvent_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBaseData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightTranslationBaseData* (*)(float_t, ::BeatmapSaveDataVersion4::LightTranslationEvent)>(
    &::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter::Convert)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3760964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter*>(),
                                                             { "Convert", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightTranslationEvent>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightTranslationBaseData* BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter::Convert(float_t beat,
                                                                                                                          ::BeatmapSaveDataVersion4::LightTranslationEvent lightTranslationEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter*>(),
                                                           { "Convert", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightTranslationEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTranslationBaseData*>(nullptr, ___internal_method, beat, lightTranslationEvent);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::LightTranslationBaseDataConverter::LightTranslationBaseDataConverter() {}
