#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\LightTranslationEventBoxGroupConverter.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__EventBoxGroupConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__LightTranslationEventBoxGroupConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapBoxConverter_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter::*)(
    ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::IBeatmapBoxConverter*)>(
    &::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3763f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatmapBoxConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter.ConvertEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter::*)(::BeatmapSaveDataVersion4::EventBox, ::GlobalNamespace::IndexFilter*)>(
        &::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter::ConvertEvents)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3764ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter*>(),
                                                                                          { ::i2c::class_of<::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter*>(), 4 }));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter::_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                                     ::GlobalNamespace::IEnvironmentLightGroups* lightGroups, ::GlobalNamespace::IBeatmapBoxConverter* boxConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatmapBoxConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightshowSaveData, lightGroups, boxConverter);
}
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter::ConvertEvents(::BeatmapSaveDataVersion4::EventBox eventBox,
                                                                                                                                ::GlobalNamespace::IndexFilter* indexFilter) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*>(this, ___internal_method, eventBox, indexFilter);
}
inline ::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter*
BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter::New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups,
                                                                            ::GlobalNamespace::IBeatmapBoxConverter* boxConverter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter*>(lightshowSaveData, lightGroups, boxConverter));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter::LightTranslationEventBoxGroupConverter() {}
