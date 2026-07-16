#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/SpecialEventsFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__SpecialEventsFilter_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::SpecialEventsFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::SpecialEventsFilter::*)(
    ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*, ::GlobalNamespace::EnvironmentKeywords*)>(&::BeatmapDataLoaderVersion4::SpecialEventsFilter::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x375f2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::SpecialEventsFilter*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentKeywords*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::SpecialEventsFilter.IsEventValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatmapDataLoaderVersion4::SpecialEventsFilter::*)(::BeatmapSaveDataCommon::BeatmapEventType)>(
    &::BeatmapDataLoaderVersion4::SpecialEventsFilter::IsEventValid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x375fb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::SpecialEventsFilter*>(),
                                                                                           { "IsEventValid", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::BeatmapEventType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*& BeatmapDataLoaderVersion4::SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* const&
BeatmapDataLoaderVersion4::SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr void BeatmapDataLoaderVersion4::SpecialEventsFilter::__cordl_internal_set__eventTypesToFilter(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventTypesToFilter = value;
}
inline void BeatmapDataLoaderVersion4::SpecialEventsFilter::_ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                  ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::SpecialEventsFilter*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentKeywords*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicEventTypesWithKeywords, environmentKeywords);
}
inline bool BeatmapDataLoaderVersion4::SpecialEventsFilter::IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::SpecialEventsFilter*>(), { "IsEventValid", {}, { ::i2c::type_of<::BeatmapSaveDataCommon::BeatmapEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, basicBeatmapEventType);
}
inline ::BeatmapDataLoaderVersion4::SpecialEventsFilter* BeatmapDataLoaderVersion4::SpecialEventsFilter::New_ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                                                                  ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::SpecialEventsFilter*>(basicEventTypesWithKeywords, environmentKeywords));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::SpecialEventsFilter::SpecialEventsFilter() {}
