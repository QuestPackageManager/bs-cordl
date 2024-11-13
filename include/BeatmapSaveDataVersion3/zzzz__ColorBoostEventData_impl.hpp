#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/ColorBoostEventData.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorBoostEventData_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorBoostEventData.get_boost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::ColorBoostEventData::*)()>(
    &::BeatmapSaveDataVersion3::ColorBoostEventData::get_boost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::ColorBoostEventData*>::get(),
                                                                               "get_boost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::ColorBoostEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::ColorBoostEventData::*)(float_t, bool)>(
    &::BeatmapSaveDataVersion3::ColorBoostEventData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26d4a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::ColorBoostEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& BeatmapSaveDataVersion3::ColorBoostEventData::__cordl_internal_get_o() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr bool const& BeatmapSaveDataVersion3::ColorBoostEventData::__cordl_internal_get_o() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___o;
}
constexpr void BeatmapSaveDataVersion3::ColorBoostEventData::__cordl_internal_set_o(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___o = value;
}
inline bool BeatmapSaveDataVersion3::ColorBoostEventData::get_boost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::ColorBoostEventData*>::get(),
                                                                             "get_boost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::ColorBoostEventData* BeatmapSaveDataVersion3::ColorBoostEventData::New_ctor(float_t beat, bool boost) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::ColorBoostEventData*>(beat, boost));
}
inline void BeatmapSaveDataVersion3::ColorBoostEventData::_ctor(float_t beat, bool boost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::ColorBoostEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, boost);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::ColorBoostEventData::ColorBoostEventData() {}
