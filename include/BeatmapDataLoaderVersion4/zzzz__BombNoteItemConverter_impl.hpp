#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BombNoteItemConverter.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BombNoteItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BombNote_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BombNoteItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::BombNoteItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*>, ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::BombNoteItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3638854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BombNoteItemConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion4::BombNoteItemConverter::*)(::BeatmapSaveDataVersion4::BeatmapBeatIndex*)>(&::BeatmapDataLoaderVersion4::BombNoteItemConverter::Convert)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3638964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*>& BeatmapDataLoaderVersion4::BombNoteItemConverter::__cordl_internal_get__bombNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> const&
BeatmapDataLoaderVersion4::BombNoteItemConverter::__cordl_internal_get__bombNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes;
}
constexpr void BeatmapDataLoaderVersion4::BombNoteItemConverter::__cordl_internal_set__bombNotes(::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion4::BombNoteItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> bombNotes,
                                                                    ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bombNotes, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::BombNoteItemConverter::Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::BombNoteItemConverter*
BeatmapDataLoaderVersion4::BombNoteItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> bombNotes,
                                                           ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::BombNoteItemConverter*>(bombNotes, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BombNoteItemConverter::BombNoteItemConverter() {}
