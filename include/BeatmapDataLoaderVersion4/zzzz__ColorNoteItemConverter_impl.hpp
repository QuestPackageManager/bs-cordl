#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ColorNoteItemConverter.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorNote_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__ColorNoteItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorNote_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ColorNoteItemConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::ColorNoteItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::ColorNote>, ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::ColorNoteItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375eb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::ColorNote>>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ColorNoteItemConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion4::ColorNoteItemConverter::*)(::BeatmapSaveDataVersion4::BeatmapBeatIndex*)>(
    &::BeatmapDataLoaderVersion4::ColorNoteItemConverter::Convert)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x375eb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>(),
                                                                                           { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote>& BeatmapDataLoaderVersion4::ColorNoteItemConverter::__cordl_internal_get__colorNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorNotes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote> const& BeatmapDataLoaderVersion4::ColorNoteItemConverter::__cordl_internal_get__colorNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorNotes;
}
constexpr void BeatmapDataLoaderVersion4::ColorNoteItemConverter::__cordl_internal_set__colorNotes(::ArrayW<::BeatmapSaveDataVersion4::ColorNote> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorNotes = value;
}
inline void BeatmapDataLoaderVersion4::ColorNoteItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote> colorNotes, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::ColorNote>>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorNotes, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::ColorNoteItemConverter::Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>(),
                                                                                         { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::ColorNoteItemConverter* BeatmapDataLoaderVersion4::ColorNoteItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote> colorNotes,
                                                                                                                        ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>(colorNotes, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::ColorNoteItemConverter::ColorNoteItemConverter() {}
