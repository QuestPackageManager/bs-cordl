#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightTranslationBaseData.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationBaseData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData.get_beat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d498c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(),
                                                                               "get_beat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData.get_usePreviousEventTranslationValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationBaseData::get_usePreviousEventTranslationValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d4994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(),
                                                 "get_usePreviousEventTranslationValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData.get_easeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataCommon::EaseType (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d49a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(),
                                                                               "get_easeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData.get_translation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)()>(
    &::BeatmapSaveDataVersion3::LightTranslationBaseData::get_translation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d49ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(),
                                                                               "get_translation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightTranslationBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::LightTranslationBaseData::*)(
    float_t, bool, ::BeatmapSaveDataCommon::EaseType, float_t)>(&::BeatmapSaveDataVersion3::LightTranslationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26d49b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr int32_t& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr int32_t const& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::BeatmapSaveDataCommon::EaseType& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::BeatmapSaveDataCommon::EaseType const& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_set_e(::BeatmapSaveDataCommon::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr float_t& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr float_t const& BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion3::LightTranslationBaseData::__cordl_internal_set_t(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
inline float_t BeatmapSaveDataVersion3::LightTranslationBaseData::get_beat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(),
                                                                             "get_beat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::LightTranslationBaseData::get_usePreviousEventTranslationValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(),
                                               "get_usePreviousEventTranslationValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::EaseType BeatmapSaveDataVersion3::LightTranslationBaseData::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(),
                                                                             "get_easeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::EaseType, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::LightTranslationBaseData::get_translation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(),
                                                                             "get_translation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::LightTranslationBaseData* BeatmapSaveDataVersion3::LightTranslationBaseData::New_ctor(float_t beat, bool usePreviousEventTranslationValue,
                                                                                                                        ::BeatmapSaveDataCommon::EaseType easeType, float_t translation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::LightTranslationBaseData*>(beat, usePreviousEventTranslationValue, easeType, translation));
}
inline void BeatmapSaveDataVersion3::LightTranslationBaseData::_ctor(float_t beat, bool usePreviousEventTranslationValue, ::BeatmapSaveDataCommon::EaseType easeType, float_t translation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousEventTranslationValue, easeType, translation);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightTranslationBaseData::LightTranslationBaseData() {}
