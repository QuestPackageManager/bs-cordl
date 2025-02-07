#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/FloatFxEventBaseData.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FloatFxEventBaseData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::FloatFxEventBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2709b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(),
                                                                               "get_beat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData.get_usePreviousEventValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::FloatFxEventBaseData::get_usePreviousEventValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2709b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(),
                                                                               "get_usePreviousEventValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::FloatFxEventBaseData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2709b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(),
                                                                               "get_value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData.get_easeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataCommon::EaseType (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)()>(
    &::BeatmapSaveDataVersion3::FloatFxEventBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2709b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(),
                                                                               "get_easeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::FloatFxEventBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::FloatFxEventBaseData::*)(float_t, bool, float_t, ::BeatmapSaveDataCommon::EaseType)>(
    &::BeatmapSaveDataVersion3::FloatFxEventBaseData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2709b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::EaseType>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr float_t& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr float_t const& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_set_v(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v = value;
}
constexpr ::BeatmapSaveDataCommon::EaseType& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr ::BeatmapSaveDataCommon::EaseType const& BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void BeatmapSaveDataVersion3::FloatFxEventBaseData::__cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
inline float_t BeatmapSaveDataVersion3::FloatFxEventBaseData::get_beat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(),
                                                                             "get_beat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::FloatFxEventBaseData::get_usePreviousEventValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(),
                                                                             "get_usePreviousEventValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::FloatFxEventBaseData::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(),
                                                                             "get_value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataVersion3::FloatFxEventBaseData::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(),
                                                                             "get_easeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType, false>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::FloatFxEventBaseData::_ctor(float_t beat, bool usePreviousEventValue, float_t value, ::BeatmapSaveDataCommon::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousEventValue, value, easeType);
}
inline ::BeatmapSaveDataVersion3::FloatFxEventBaseData* BeatmapSaveDataVersion3::FloatFxEventBaseData::New_ctor(float_t beat, bool usePreviousEventValue, float_t value,
                                                                                                                ::BeatmapSaveDataCommon::EaseType easeType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>(beat, usePreviousEventValue, value, easeType));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::FloatFxEventBaseData::FloatFxEventBaseData() {}
