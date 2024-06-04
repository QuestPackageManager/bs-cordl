#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/WaypointItemConverter.hpp"
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__WaypointItemConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__Waypoint_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::WaypointItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::WaypointItemConverter::*)(
    ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*>, ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::WaypointItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x14fc9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::WaypointItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::WaypointItemConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion4::WaypointItemConverter::*)(::BeatmapSaveDataVersion4::BeatmapBeatIndex*)>(&::BeatmapDataLoaderVersion4::WaypointItemConverter::Convert)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x14fcf3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::WaypointItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*>& BeatmapDataLoaderVersion4::WaypointItemConverter::__cordl_internal_get__waypoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waypoints;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> const&
BeatmapDataLoaderVersion4::WaypointItemConverter::__cordl_internal_get__waypoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waypoints;
}
constexpr void BeatmapDataLoaderVersion4::WaypointItemConverter::__cordl_internal_set__waypoints(::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____waypoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion4::WaypointItemConverter*
BeatmapDataLoaderVersion4::WaypointItemConverter::New_ctor(::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> waypoints,
                                                           ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::WaypointItemConverter*>(waypoints, bpmTimeProcessor));
}
inline void BeatmapDataLoaderVersion4::WaypointItemConverter::_ctor(::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*> waypoints,
                                                                    ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::WaypointItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatmapSaveDataVersion4::Waypoint, ::Array<::BeatmapSaveDataVersion4::Waypoint>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, waypoints, bpmTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion4::WaypointItemConverter::Convert(::BeatmapSaveDataVersion4::BeatmapBeatIndex* index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::WaypointItemConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::WaypointItemConverter::WaypointItemConverter() {}
