#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\ChainItemConverter.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Chain_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorNote_impl.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__ChainItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ChainBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Chain_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorNote_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ChainItemConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::ChainItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::ColorNote>, ::ArrayW<::BeatmapSaveDataVersion4::Chain>, ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::ChainItemConverter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3763308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ChainItemConverter*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::ColorNote>>(), ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::Chain>>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ChainItemConverter.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion4::ChainItemConverter::*)(::BeatmapSaveDataVersion4::ChainBeatIndex*)>(
    &::BeatmapDataLoaderVersion4::ChainItemConverter::Convert)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x376359c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ChainItemConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::ChainBeatIndex*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote>& BeatmapDataLoaderVersion4::ChainItemConverter::__cordl_internal_get__colorNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorNotes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote> const& BeatmapDataLoaderVersion4::ChainItemConverter::__cordl_internal_get__colorNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorNotes;
}
constexpr void BeatmapDataLoaderVersion4::ChainItemConverter::__cordl_internal_set__colorNotes(::ArrayW<::BeatmapSaveDataVersion4::ColorNote> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorNotes = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Chain>& BeatmapDataLoaderVersion4::ChainItemConverter::__cordl_internal_get__chains() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chains;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Chain> const& BeatmapDataLoaderVersion4::ChainItemConverter::__cordl_internal_get__chains() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chains;
}
constexpr void BeatmapDataLoaderVersion4::ChainItemConverter::__cordl_internal_set__chains(::ArrayW<::BeatmapSaveDataVersion4::Chain> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chains = value;
}
inline void BeatmapDataLoaderVersion4::ChainItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote> colorNotes, ::ArrayW<::BeatmapSaveDataVersion4::Chain> chains,
                                                                 ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ChainItemConverter*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::ColorNote>>(), ::i2c::type_of<::ArrayW<::BeatmapSaveDataVersion4::Chain>>(),
                                                               ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorNotes, chains, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::ChainItemConverter::Convert(::BeatmapSaveDataVersion4::ChainBeatIndex* index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::ChainItemConverter*>(), { "Convert", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::ChainBeatIndex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::ChainItemConverter* BeatmapDataLoaderVersion4::ChainItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote> colorNotes,
                                                                                                                ::ArrayW<::BeatmapSaveDataVersion4::Chain> chains,
                                                                                                                ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::ChainItemConverter*>(colorNotes, chains, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::ChainItemConverter::ChainItemConverter() {}
