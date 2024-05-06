#pragma once
#include "BeatmapDataLoaderVersion4/zzzz__EventBoxGroupConverter_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__FloatFxEventBoxGroupConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter::*)(
    ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::IEnvironmentLightGroups*)>(&::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x14f7218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter.ConvertEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter::*)(::BeatmapSaveDataVersion4::EventBox, ::GlobalNamespace::IndexFilter*)>(
        &::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter::ConvertEvents)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x14f8274;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter*>::get(), 4));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter* BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter::New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                                                                                      ::GlobalNamespace::IEnvironmentLightGroups* lightGroups) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter*>(lightshowSaveData, lightGroups));
}
inline void BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter::_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightshowSaveData, lightGroups);
}
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter::ConvertEvents(::BeatmapSaveDataVersion4::EventBox eventBox,
                                                                                                                       ::GlobalNamespace::IndexFilter* indexFilter) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(this, ___internal_method, eventBox, indexFilter);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::FloatFxEventBoxGroupConverter::FloatFxEventBoxGroupConverter() {}
