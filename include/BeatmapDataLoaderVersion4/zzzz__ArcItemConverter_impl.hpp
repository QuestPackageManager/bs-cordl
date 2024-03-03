#pragma once
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__ArcItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ArcBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Arc_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorNote_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ArcItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::ArcItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>, ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*>,
    ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::ArcItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x12ffca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ArcItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ArcItemConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion4::ArcItemConverter::*)(::BeatmapSaveDataVersion4::ArcBeatIndex*)>(&::BeatmapDataLoaderVersion4::ArcItemConverter::Convert)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x13000a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ArcItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::ArcBeatIndex*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>& BeatmapDataLoaderVersion4::ArcItemConverter::__cordl_internal_get__colorNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorNotes;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> const& BeatmapDataLoaderVersion4::ArcItemConverter::__cordl_internal_get__colorNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorNotes;
}
constexpr void BeatmapDataLoaderVersion4::ArcItemConverter::__cordl_internal_set__colorNotes(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*>& BeatmapDataLoaderVersion4::ArcItemConverter::__cordl_internal_get__arcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcs;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> const& BeatmapDataLoaderVersion4::ArcItemConverter::__cordl_internal_get__arcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcs;
}
constexpr void BeatmapDataLoaderVersion4::ArcItemConverter::__cordl_internal_set__arcs(::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion4::ArcItemConverter*
BeatmapDataLoaderVersion4::ArcItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes,
                                                      ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> arcs, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::ArcItemConverter*>(colorNotes, arcs, bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion4::ArcItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> colorNotes,
                                                               ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> arcs,
                                                               ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ArcItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorNotes, arcs, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::ArcItemConverter::Convert(::BeatmapSaveDataVersion4::ArcBeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ArcItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::ArcBeatIndex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::ArcItemConverter::ArcItemConverter() {}
