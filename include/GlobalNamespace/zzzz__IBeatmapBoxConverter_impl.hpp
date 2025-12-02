#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapBoxConverter.hpp"
#include "GlobalNamespace/zzzz__IBeatmapBoxConverter_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEventBox_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightRotationEvent_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatmapBoxConverter.ConvertBoxEventGroupId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IBeatmapBoxConverter::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>*, int32_t, int32_t)>(&::GlobalNamespace::IBeatmapBoxConverter::ConvertBoxEventGroupId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapBoxConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapBoxConverter*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBeatmapBoxConverter.ConvertRotationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationBaseData* (
    ::GlobalNamespace::IBeatmapBoxConverter::*)(float_t, ::BeatmapSaveDataVersion4::LightRotationEvent, ::BeatmapSaveDataVersion4::LightRotationEventBox)>(
    &::GlobalNamespace::IBeatmapBoxConverter::ConvertRotationEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapBoxConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapBoxConverter*>::get(), 1));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBeatmapBoxConverter::ConvertBoxEventGroupId(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, int32_t>>* output, int32_t groupId,
                                                                          int32_t boxEventType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapBoxConverter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, groupId, boxEventType);
}
inline ::GlobalNamespace::LightRotationBaseData* GlobalNamespace::IBeatmapBoxConverter::ConvertRotationEvent(float_t beat, ::BeatmapSaveDataVersion4::LightRotationEvent lightRotationEvent,
                                                                                                             ::BeatmapSaveDataVersion4::LightRotationEventBox eventBox) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapBoxConverter*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBaseData*, false>(this, ___internal_method, beat, lightRotationEvent, eventBox);
}
