#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__FxBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FxBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FxBeatmapEventData::*)(float_t, int32_t, int32_t, bool)>(
    &::GlobalNamespace::FxBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xdfe34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBeatmapEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FxBeatmapEventData.SubtypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::GlobalNamespace::FxBeatmapEventData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdfe3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBeatmapEventData*>::get(), "SubtypeIdentifier", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FxBeatmapEventData::__get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::FxBeatmapEventData::__get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::FxBeatmapEventData::__set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::FxBeatmapEventData::__get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::FxBeatmapEventData::__get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::FxBeatmapEventData::__set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr bool& GlobalNamespace::FxBeatmapEventData::__get_usePreviousEventValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventValue;
}
constexpr bool const& GlobalNamespace::FxBeatmapEventData::__get_usePreviousEventValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventValue;
}
constexpr void GlobalNamespace::FxBeatmapEventData::__set_usePreviousEventValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePreviousEventValue = value;
}
inline ::GlobalNamespace::FxBeatmapEventData* GlobalNamespace::FxBeatmapEventData::New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FxBeatmapEventData*>(time, groupId, elementId, usePreviousEventValue));
}
inline void GlobalNamespace::FxBeatmapEventData::_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBeatmapEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, groupId, elementId, usePreviousEventValue);
}
inline int32_t GlobalNamespace::FxBeatmapEventData::SubtypeIdentifier(int32_t groupId, int32_t elementId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBeatmapEventData*>::get(), "SubtypeIdentifier", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, groupId, elementId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FxBeatmapEventData::FxBeatmapEventData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
