#pragma once
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__ColorBoostEventItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ColorBoostEvent_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*>, ::GlobalNamespace::BpmTimeProcessor*)>(
    &::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x14f6fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (
    ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::*)(::BeatmapSaveDataVersion4::BeatIndex*)>(&::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::Convert)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x14f70d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatIndex*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*>&
BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::__cordl_internal_get__colorBoostEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> const&
BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::__cordl_internal_get__colorBoostEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostEvents;
}
constexpr void BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::__cordl_internal_set__colorBoostEvents(
    ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorBoostEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*
BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> colorBoostEvents,
                                                                  ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*>(colorBoostEvents, bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> colorBoostEvents,
                                                                           ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorBoostEvents, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::Convert(::BeatmapSaveDataVersion4::BeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatIndex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter::ColorBoostEventItemConverter() {}
