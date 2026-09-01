#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\BpmEventConverter.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BpmEventConverter_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BpmData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BpmEventConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::BpmEventConverter::*)(int32_t, ::GlobalNamespace::BpmTimeProcessor*)>(
    &::BeatmapDataLoaderVersion4::BpmEventConverter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3763220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BpmEventConverter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BpmEventConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::BeatmapDataLoaderVersion4::BpmEventConverter::*)(::BeatmapLevelSaveDataVersion4::BpmData*)>(
    &::BeatmapDataLoaderVersion4::BpmEventConverter::Convert)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x376322c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BpmEventConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapLevelSaveDataVersion4::BpmData*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatmapDataLoaderVersion4::BpmEventConverter::__cordl_internal_get__songFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFrequency;
}
constexpr int32_t const& BeatmapDataLoaderVersion4::BpmEventConverter::__cordl_internal_get__songFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songFrequency;
}
constexpr void BeatmapDataLoaderVersion4::BpmEventConverter::__cordl_internal_set__songFrequency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songFrequency = value;
}
inline void BeatmapDataLoaderVersion4::BpmEventConverter::_ctor(int32_t songFrequency, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BpmEventConverter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songFrequency, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion4::BpmEventConverter::Convert(::BeatmapLevelSaveDataVersion4::BpmData* bpmData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BpmEventConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapLevelSaveDataVersion4::BpmData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method, bpmData);
}
inline ::BeatmapDataLoaderVersion4::BpmEventConverter* BeatmapDataLoaderVersion4::BpmEventConverter::New_ctor(int32_t songFrequency, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::BpmEventConverter*>(songFrequency, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BpmEventConverter::BpmEventConverter() {}
