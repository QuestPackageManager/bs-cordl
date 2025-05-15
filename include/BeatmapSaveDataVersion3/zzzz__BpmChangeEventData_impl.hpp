#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BpmChangeEventData.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BpmChangeEventData_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BpmChangeEventData.get_bpm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::BpmChangeEventData::*)()>(
    &::BeatmapSaveDataVersion3::BpmChangeEventData::get_bpm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270a7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BpmChangeEventData*>::get(), "get_bpm",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BpmChangeEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::BpmChangeEventData::*)(float_t, float_t)>(
    &::BeatmapSaveDataVersion3::BpmChangeEventData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x270a7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BpmChangeEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::BpmChangeEventData::__cordl_internal_get_m() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr float_t const& BeatmapSaveDataVersion3::BpmChangeEventData::__cordl_internal_get_m() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr void BeatmapSaveDataVersion3::BpmChangeEventData::__cordl_internal_set_m(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m = value;
}
inline float_t BeatmapSaveDataVersion3::BpmChangeEventData::get_bpm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BpmChangeEventData*>::get(), "get_bpm",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::BpmChangeEventData::_ctor(float_t beat, float_t bpm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BpmChangeEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, bpm);
}
inline ::BeatmapSaveDataVersion3::BpmChangeEventData* BeatmapSaveDataVersion3::BpmChangeEventData::New_ctor(float_t beat, float_t bpm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::BpmChangeEventData*>(beat, bpm));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BpmChangeEventData::BpmChangeEventData() {}
