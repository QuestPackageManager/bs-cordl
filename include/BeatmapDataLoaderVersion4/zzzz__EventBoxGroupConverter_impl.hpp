#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/EventBoxGroupConverter.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__EventBoxGroupConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::EventBoxGroupConverter::*)(
    ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::IEnvironmentLightGroups*)>(&::BeatmapDataLoaderVersion4::EventBoxGroupConverter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x14fda44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup* (
    ::BeatmapDataLoaderVersion4::EventBoxGroupConverter::*)(::BeatmapSaveDataVersion4::EventBoxGroup*)>(&::BeatmapDataLoaderVersion4::EventBoxGroupConverter::Convert)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x14fd6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::EventBoxGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter.ConvertEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (::BeatmapDataLoaderVersion4::EventBoxGroupConverter::*)(::BeatmapSaveDataVersion4::EventBox, ::GlobalNamespace::IndexFilter*)>(
        &::BeatmapDataLoaderVersion4::EventBoxGroupConverter::ConvertEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

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
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion4::LightshowSaveData*> const& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get_lightshowSaveData() const {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentLightGroups*> const& BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void BeatmapDataLoaderVersion4::EventBoxGroupConverter::__cordl_internal_set__lightGroups(::GlobalNamespace::IEnvironmentLightGroups* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion4::EventBoxGroupConverter* BeatmapDataLoaderVersion4::EventBoxGroupConverter::New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                                                                        ::GlobalNamespace::IEnvironmentLightGroups* lightGroups) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>(lightshowSaveData, lightGroups));
}
inline void BeatmapDataLoaderVersion4::EventBoxGroupConverter::_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightshowSaveData, lightGroups);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroup* BeatmapDataLoaderVersion4::EventBoxGroupConverter::Convert(::BeatmapSaveDataVersion4::EventBoxGroup* eventBoxGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::EventBoxGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBoxGroup*, false>(this, ___internal_method, eventBoxGroup);
}
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion4::EventBoxGroupConverter::ConvertEvents(::BeatmapSaveDataVersion4::EventBox eventBox,
                                                                                                                ::GlobalNamespace::IndexFilter* indexFilter) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::EventBoxGroupConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(this, ___internal_method, eventBox, indexFilter);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::EventBoxGroupConverter::EventBoxGroupConverter() {}
