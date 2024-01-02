#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BPMChangeBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BPMChangeBeatmapEventData::*)(float_t, float_t)>(
    &::GlobalNamespace::BPMChangeBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xdfe0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BPMChangeBeatmapEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BPMChangeBeatmapEventData.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BPMChangeBeatmapEventData::*)()>(
    &::GlobalNamespace::BPMChangeBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdfe108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BPMChangeBeatmapEventData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BPMChangeBeatmapEventData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BPMChangeBeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::BPMChangeBeatmapEventData::*)()>(
    &::GlobalNamespace::BPMChangeBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdfe194;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BPMChangeBeatmapEventData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BPMChangeBeatmapEventData*>::get(), 7));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BPMChangeBeatmapEventData::__get_bpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpm;
}
constexpr float_t const& GlobalNamespace::BPMChangeBeatmapEventData::__get_bpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpm;
}
constexpr void GlobalNamespace::BPMChangeBeatmapEventData::__set_bpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bpm = value;
}
inline ::GlobalNamespace::BPMChangeBeatmapEventData* GlobalNamespace::BPMChangeBeatmapEventData::New_ctor(float_t time, float_t bpm) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BPMChangeBeatmapEventData*>(time, bpm));
}
inline void GlobalNamespace::BPMChangeBeatmapEventData::_ctor(float_t time, float_t bpm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BPMChangeBeatmapEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, bpm);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BPMChangeBeatmapEventData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BPMChangeBeatmapEventData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::BPMChangeBeatmapEventData::GetDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BPMChangeBeatmapEventData*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BPMChangeBeatmapEventData::BPMChangeBeatmapEventData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
