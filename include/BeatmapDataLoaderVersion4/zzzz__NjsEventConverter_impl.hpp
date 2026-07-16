#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/NjsEventConverter.hpp"
#include "BeatmapSaveDataVersion4/zzzz__NoteJumpMovementSpeedEvent_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__NjsEventConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__NoteJumpMovementSpeedEvent_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpSpeedEventData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::NjsEventConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::NjsEventConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>, ::GlobalNamespace::IBeatToTimeConverter*)>(&::BeatmapDataLoaderVersion4::NjsEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375f20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::NjsEventConverter*>(),
                            { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>>(), ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::NjsEventConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteJumpSpeedEventData* (::BeatmapDataLoaderVersion4::NjsEventConverter::*)(::BeatmapSaveDataVersion4::BeatIndex*)>(
    &::BeatmapDataLoaderVersion4::NjsEventConverter::Convert)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x375f214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::NjsEventConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatIndex*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>& BeatmapDataLoaderVersion4::NjsEventConverter::__cordl_internal_get__noteJumpMovementSpeedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeedEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent> const& BeatmapDataLoaderVersion4::NjsEventConverter::__cordl_internal_get__noteJumpMovementSpeedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeedEvents;
}
constexpr void BeatmapDataLoaderVersion4::NjsEventConverter::__cordl_internal_set__noteJumpMovementSpeedEvents(::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpMovementSpeedEvents = value;
}
inline void BeatmapDataLoaderVersion4::NjsEventConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent> noteJumpMovementSpeedEvents,
                                                                ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::NjsEventConverter*>(),
                          { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>>(), ::i2c::type_of<::GlobalNamespace::IBeatToTimeConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteJumpMovementSpeedEvents, bpmTimeProcessor);
}
inline ::GlobalNamespace::NoteJumpSpeedEventData* BeatmapDataLoaderVersion4::NjsEventConverter::Convert(::BeatmapSaveDataVersion4::BeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::NjsEventConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatIndex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteJumpSpeedEventData*>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::NjsEventConverter*
BeatmapDataLoaderVersion4::NjsEventConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent> noteJumpMovementSpeedEvents,
                                                       ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::NjsEventConverter*>(noteJumpMovementSpeedEvents, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::NjsEventConverter::NjsEventConverter() {}
