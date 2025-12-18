#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/EventBoxGroupConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__EventBoxGroupConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapBoxConverter_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::EventBoxGroupConverter::*)(
    ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::IBeatmapBoxConverter*)>(
    &::BeatmapDataLoaderVersion4::EventBoxGroupConverter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3665f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapBoxConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup* (
    ::BeatmapDataLoaderVersion4::EventBoxGroupConverter::*)(::BeatmapSaveDataVersion4::EventBoxGroup*, int32_t)>(&::BeatmapDataLoaderVersion4::EventBoxGroupConverter::Convert)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x3665900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::EventBoxGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter.ConvertEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (::BeatmapDataLoaderVersion4::EventBoxGroupConverter::*)(::BeatmapSaveDataVersion4::EventBox, ::GlobalNamespace::IndexFilter*)>(
        &::BeatmapDataLoaderVersion4::EventBoxGroupConverter::ConvertEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion4::LightshowSaveData*& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get_lightshowSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightshowSaveData;
}
constexpr ::BeatmapSaveDataVersion4::LightshowSaveData* const& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get_lightshowSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightshowSaveData;
}
constexpr void BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_set_lightshowSaveData(::BeatmapSaveDataVersion4::LightshowSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightshowSaveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IEnvironmentLightGroups*& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::GlobalNamespace::IEnvironmentLightGroups* const& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_set__lightGroups(::GlobalNamespace::IEnvironmentLightGroups* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapBoxConverter*& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get__boxConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxConverter;
}
constexpr ::GlobalNamespace::IBeatmapBoxConverter* const& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get__boxConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxConverter;
}
constexpr void BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_set__boxConverter(::GlobalNamespace::IBeatmapBoxConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boxConverter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapDataLoaderVersion4::EventBoxGroupConverter::_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups,
                                                                     ::GlobalNamespace::IBeatmapBoxConverter* boxConverter) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapBoxConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightshowSaveData, lightGroups, boxConverter);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup* BeatmapDataLoaderVersion4::EventBoxGroupConverter::Convert(::BeatmapSaveDataVersion4::EventBoxGroup* eventBoxGroup, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::EventBoxGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup*, false>(this, ___internal_method, eventBoxGroup, channel);
}
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion4::EventBoxGroupConverter::ConvertEvents(::BeatmapSaveDataVersion4::EventBox eventBox,
                                                                                                                ::GlobalNamespace::IndexFilter* indexFilter) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(this, ___internal_method, eventBox, indexFilter);
}
inline ::BeatmapDataLoaderVersion4::EventBoxGroupConverter* BeatmapDataLoaderVersion4::EventBoxGroupConverter::New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                                                                        ::GlobalNamespace::IEnvironmentLightGroups* lightGroups,
                                                                                                                        ::GlobalNamespace::IBeatmapBoxConverter* boxConverter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(lightshowSaveData, lightGroups, boxConverter));
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::EventBoxGroupConverter::EventBoxGroupConverter() {}
