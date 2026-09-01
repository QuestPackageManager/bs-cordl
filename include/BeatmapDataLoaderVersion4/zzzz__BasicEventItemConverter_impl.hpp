#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\BasicEventItemConverter.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BasicEvent_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BasicEventItemConverter_def.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__SpecialEventsFilter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BasicEvent_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BasicEventItemConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::BasicEventItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent>, ::BeatmapDataLoaderVersion4::SpecialEventsFilter*, ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
    &::BeatmapDataLoaderVersion4::BasicEventItemConverter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3763cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::BasicEvent>>(), ::i2c::type_of<::BeatmapDataLoaderVersion4::SpecialEventsFilter*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BasicEventItemConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* (
    ::BeatmapDataLoaderVersion4::BasicEventItemConverter::*)(::BeatmapSaveDataVersion4::BeatIndex*)>(&::BeatmapDataLoaderVersion4::BasicEventItemConverter::Convert)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3763ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatIndex*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent>& BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_get__basicEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent> const& BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_get__basicEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEvents;
}
constexpr void BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_set__basicEvents(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____basicEvents = value;
}
constexpr ::BeatmapDataLoaderVersion4::SpecialEventsFilter*& BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_get__specialEventsFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr ::BeatmapDataLoaderVersion4::SpecialEventsFilter* const& BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_get__specialEventsFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr void BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_set__specialEventsFilter(::BeatmapDataLoaderVersion4::SpecialEventsFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____specialEventsFilter = value;
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_get__lightEventConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightEventConverter;
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_get__lightEventConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightEventConverter;
}
constexpr void BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_set__lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightEventConverter = value;
}
inline void BeatmapDataLoaderVersion4::BasicEventItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent> basicEvents,
                                                                      ::BeatmapDataLoaderVersion4::SpecialEventsFilter* specialEventsFilter, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                      ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::BasicEvent>>(), ::i2c::type_of<::BeatmapDataLoaderVersion4::SpecialEventsFilter*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicEvents, specialEventsFilter, bpmTimeProcessor, lightEventConverter);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>* BeatmapDataLoaderVersion4::BasicEventItemConverter::Convert(::BeatmapSaveDataVersion4::BeatIndex* index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatIndex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapEventData*>*>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::BasicEventItemConverter* BeatmapDataLoaderVersion4::BasicEventItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent> basicEvents,
                                                                                                                          ::BeatmapDataLoaderVersion4::SpecialEventsFilter* specialEventsFilter,
                                                                                                                          ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                                                          ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>(basicEvents, specialEventsFilter, bpmTimeProcessor, lightEventConverter));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BasicEventItemConverter::BasicEventItemConverter() {}
