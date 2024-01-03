#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorBoostBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorBoostBeatmapEventData::*)(float_t, bool)>(
    &::GlobalNamespace::ColorBoostBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xdfe19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorBoostBeatmapEventData.GetCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::ColorBoostBeatmapEventData::*)()>(
    &::GlobalNamespace::ColorBoostBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdfe1e8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorBoostBeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::ColorBoostBeatmapEventData::*)()>(
    &::GlobalNamespace::ColorBoostBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdfe274;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get(), 7));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ColorBoostBeatmapEventData::__get_boostColorsAreOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boostColorsAreOn;
}
constexpr bool const& GlobalNamespace::ColorBoostBeatmapEventData::__get_boostColorsAreOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boostColorsAreOn;
}
constexpr void GlobalNamespace::ColorBoostBeatmapEventData::__set_boostColorsAreOn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boostColorsAreOn = value;
}
inline void GlobalNamespace::ColorBoostBeatmapEventData::setStaticF__defaultCopy(::GlobalNamespace::ColorBoostBeatmapEventData* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ColorBoostBeatmapEventData*, "_defaultCopy",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get>(
      std::forward<::GlobalNamespace::ColorBoostBeatmapEventData*>(value));
}
inline ::GlobalNamespace::ColorBoostBeatmapEventData* GlobalNamespace::ColorBoostBeatmapEventData::getStaticF__defaultCopy() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ColorBoostBeatmapEventData*, "_defaultCopy",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get>();
}
inline ::GlobalNamespace::ColorBoostBeatmapEventData* GlobalNamespace::ColorBoostBeatmapEventData::New_ctor(float_t time, bool boostColorsAreOn) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ColorBoostBeatmapEventData*>(time, boostColorsAreOn));
}
inline void GlobalNamespace::ColorBoostBeatmapEventData::_ctor(float_t time, bool boostColorsAreOn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, boostColorsAreOn);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::ColorBoostBeatmapEventData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::ColorBoostBeatmapEventData::GetDefault() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorBoostBeatmapEventData*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorBoostBeatmapEventData::ColorBoostBeatmapEventData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
