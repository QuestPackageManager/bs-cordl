#pragma once
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__ColorNoteItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorNote_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ColorNoteItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::ColorNoteItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>, ::GlobalNamespace::BpmTimeProcessor*)>(
    &::BeatmapDataLoaderVersion4::ColorNoteItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12bec20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ColorNoteItemConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion4::ColorNoteItemConverter::*)(::BeatmapSaveDataVersion4::BeatmapBeatIndex*)>(&::BeatmapDataLoaderVersion4::ColorNoteItemConverter::Convert)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x12bed30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>& BeatmapDataLoaderVersion4::ColorNoteItemConverter::__cordl_internal_get__colorNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorNotes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> const&
BeatmapDataLoaderVersion4::ColorNoteItemConverter::__cordl_internal_get__colorNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorNotes;
}
constexpr void
BeatmapDataLoaderVersion4::ColorNoteItemConverter::__cordl_internal_set__colorNotes(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion4::ColorNoteItemConverter*
BeatmapDataLoaderVersion4::ColorNoteItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes,
                                                            ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>(colorNotes, bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion4::ColorNoteItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes,
                                                                     ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorNotes, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::ColorNoteItemConverter::Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ColorNoteItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::ColorNoteItemConverter::ColorNoteItemConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
