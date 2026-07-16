#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/EventBoxGroupConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__EventBoxGroupConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapBoxConverter_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::EventBoxGroupConverter::*)(
    ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::IBeatmapBoxConverter*)>(
    &::BeatmapDataLoaderVersion4::EventBoxGroupConverter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x375fdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatmapBoxConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup* (
    ::BeatmapDataLoaderVersion4::EventBoxGroupConverter::*)(::BeatmapSaveDataVersion4::EventBoxGroup*, int32_t)>(&::BeatmapDataLoaderVersion4::EventBoxGroupConverter::Convert)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x375f794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(),
                                                             { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::EventBoxGroup*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter.ConvertEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (::BeatmapDataLoaderVersion4::EventBoxGroupConverter::*)(::BeatmapSaveDataVersion4::EventBox, ::GlobalNamespace::IndexFilter*)>(
        &::BeatmapDataLoaderVersion4::EventBoxGroupConverter::ConvertEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(),
                                                                                          { ::i2c::class_of<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion4::LightshowSaveData*& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get_lightshowSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightshowSaveData;
}
constexpr ::BeatmapSaveDataVersion4::LightshowSaveData* const& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get_lightshowSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightshowSaveData;
}
constexpr void BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_set_lightshowSaveData(::BeatmapSaveDataVersion4::LightshowSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightshowSaveData = value;
}
constexpr ::GlobalNamespace::IEnvironmentLightGroups*& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::GlobalNamespace::IEnvironmentLightGroups* const& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_set__lightGroups(::GlobalNamespace::IEnvironmentLightGroups* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroups = value;
}
constexpr ::GlobalNamespace::IBeatmapBoxConverter*& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get__boxConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxConverter;
}
constexpr ::GlobalNamespace::IBeatmapBoxConverter* const& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get__boxConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxConverter;
}
constexpr void BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_set__boxConverter(::GlobalNamespace::IBeatmapBoxConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boxConverter = value;
}
inline void BeatmapDataLoaderVersion4::EventBoxGroupConverter::_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups,
                                                                     ::GlobalNamespace::IBeatmapBoxConverter* boxConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatmapBoxConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightshowSaveData, lightGroups, boxConverter);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup* BeatmapDataLoaderVersion4::EventBoxGroupConverter::Convert(::BeatmapSaveDataVersion4::EventBoxGroup* eventBoxGroup, int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(),
                                                           { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::EventBoxGroup*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup*>(this, ___internal_method, eventBoxGroup, channel);
}
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion4::EventBoxGroupConverter::ConvertEvents(::BeatmapSaveDataVersion4::EventBox eventBox,
                                                                                                                ::GlobalNamespace::IndexFilter* indexFilter) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*>(this, ___internal_method, eventBox, indexFilter);
}
inline ::BeatmapDataLoaderVersion4::EventBoxGroupConverter* BeatmapDataLoaderVersion4::EventBoxGroupConverter::New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                                                                        ::GlobalNamespace::IEnvironmentLightGroups* lightGroups,
                                                                                                                        ::GlobalNamespace::IBeatmapBoxConverter* boxConverter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(lightshowSaveData, lightGroups, boxConverter));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::EventBoxGroupConverter::EventBoxGroupConverter() {}
