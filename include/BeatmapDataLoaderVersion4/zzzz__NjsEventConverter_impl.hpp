#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/NjsEventConverter.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__NjsEventConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__NoteJumpMovementSpeedEvent_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpSpeedEventData_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::NjsEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::NjsEventConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*>, ::GlobalNamespace::IBeatToTimeConverter*)>(
    &::BeatmapDataLoaderVersion4::NjsEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3638ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::NjsEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::NjsEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteJumpSpeedEventData* (
    ::BeatmapDataLoaderVersion4::NjsEventConverter::*)(::BeatmapSaveDataVersion4::BeatIndex*)>(&::BeatmapDataLoaderVersion4::NjsEventConverter::Convert)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3638efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::NjsEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatIndex*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*>&
BeatmapDataLoaderVersion4::NjsEventConverter::__cordl_internal_get__noteJumpMovementSpeedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeedEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*> const&
BeatmapDataLoaderVersion4::NjsEventConverter::__cordl_internal_get__noteJumpMovementSpeedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeedEvents;
}
constexpr void BeatmapDataLoaderVersion4::NjsEventConverter::__cordl_internal_set__noteJumpMovementSpeedEvents(
    ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpMovementSpeedEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion4::NjsEventConverter::_ctor(
    ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*> noteJumpMovementSpeedEvents,
    ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::NjsEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteJumpMovementSpeedEvents, bpmTimeProcessor);
}
inline ::GlobalNamespace::NoteJumpSpeedEventData* BeatmapDataLoaderVersion4::NjsEventConverter::Convert(::BeatmapSaveDataVersion4::BeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::NjsEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatIndex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteJumpSpeedEventData*, false>(this, ___internal_method, index);
}
inline ::BeatmapDataLoaderVersion4::NjsEventConverter* BeatmapDataLoaderVersion4::NjsEventConverter::New_ctor(
    ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*> noteJumpMovementSpeedEvents,
    ::GlobalNamespace::IBeatToTimeConverter* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::NjsEventConverter*>(noteJumpMovementSpeedEvents, bpmTimeProcessor));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::NjsEventConverter::NjsEventConverter() {}
