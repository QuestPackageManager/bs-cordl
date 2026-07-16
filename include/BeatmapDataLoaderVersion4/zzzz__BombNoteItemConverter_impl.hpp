#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BombNoteItemConverter.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BombNote_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BombNoteItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BombNote_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BombNoteItemConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::BombNoteItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::BombNote>, ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::BombNoteItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375eb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::BombNote>>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BombNoteItemConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion4::BombNoteItemConverter::*)(::BeatmapSaveDataVersion4::BeatmapBeatIndex*)>(
    &::BeatmapDataLoaderVersion4::BombNoteItemConverter::Convert)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x375ec78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>(),
                                                                                           { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote>& BeatmapDataLoaderVersion4::BombNoteItemConverter::__cordl_internal_get__bombNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote> const& BeatmapDataLoaderVersion4::BombNoteItemConverter::__cordl_internal_get__bombNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes;
}
constexpr void BeatmapDataLoaderVersion4::BombNoteItemConverter::__cordl_internal_set__bombNotes(::ArrayW<::BeatmapSaveDataVersion4::BombNote> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombNotes = value;
}
inline void BeatmapDataLoaderVersion4::BombNoteItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::BombNote> bombNotes, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::BombNote>>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bombNotes, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::BombNoteItemConverter::Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::BombNoteItemConverter* BeatmapDataLoaderVersion4::BombNoteItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::BombNote> bombNotes,
                                                                                                                      ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>(bombNotes, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BombNoteItemConverter::BombNoteItemConverter() {}
