#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BasicEventItemConverter.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BasicEventItemConverter_def.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__SpecialEventsFilter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BasicEvent_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatIndex_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BasicEventItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::BasicEventItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*>, ::BeatmapDataLoaderVersion4::SpecialEventsFilter*, ::GlobalNamespace::BpmTimeProcessor*,
    ::GlobalNamespace::IBeatmapLightEventConverter*)>(&::BeatmapDataLoaderVersion4::BasicEventItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x270c22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion4::SpecialEventsFilter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BasicEventItemConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::BasicEventItemConverter::*)(
    ::BeatmapSaveDataVersion4::BeatIndex*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*)>(&::BeatmapDataLoaderVersion4::BasicEventItemConverter::Convert)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x270c298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatIndex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*>& BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_get__basicEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEvents;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> const&
BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_get__basicEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicEvents;
}
constexpr void
BeatmapDataLoaderVersion4::BasicEventItemConverter::__cordl_internal_set__basicEvents(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____basicEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____specialEventsFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightEventConverter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion4::BasicEventItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> basicEvents,
                                                                      ::BeatmapDataLoaderVersion4::SpecialEventsFilter* specialEventsFilter, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                      ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion4::SpecialEventsFilter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicEvents, specialEventsFilter, bpmTimeProcessor, lightEventConverter);
}
inline void BeatmapDataLoaderVersion4::BasicEventItemConverter::Convert(::BeatmapSaveDataVersion4::BeatIndex* index,
                                                                        ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatIndex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, output);
}
inline ::BeatmapDataLoaderVersion4::BasicEventItemConverter*
BeatmapDataLoaderVersion4::BasicEventItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> basicEvents,
                                                             ::BeatmapDataLoaderVersion4::SpecialEventsFilter* specialEventsFilter, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                             ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::BasicEventItemConverter*>(basicEvents, specialEventsFilter, bpmTimeProcessor, lightEventConverter));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BasicEventItemConverter::BasicEventItemConverter() {}
