#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__ColorUsageAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ColorUsageAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ColorUsageAttribute::*)(bool)>(&::UnityEngine::ColorUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ccc278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUsageAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUsageAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ColorUsageAttribute::*)(bool, bool)>(&::UnityEngine::ColorUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ccc2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUsageAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::ColorUsageAttribute::__get_showAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr bool const& UnityEngine::ColorUsageAttribute::__get_showAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr void UnityEngine::ColorUsageAttribute::__set_showAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showAlpha = value;
}
constexpr bool& UnityEngine::ColorUsageAttribute::__get_hdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr bool const& UnityEngine::ColorUsageAttribute::__get_hdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr void UnityEngine::ColorUsageAttribute::__set_hdr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdr = value;
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__get_minBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minBrightness;
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__get_minBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minBrightness;
}
constexpr void UnityEngine::ColorUsageAttribute::__set_minBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minBrightness = value;
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__get_maxBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBrightness;
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__get_maxBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBrightness;
}
constexpr void UnityEngine::ColorUsageAttribute::__set_maxBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxBrightness = value;
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__get_minExposureValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minExposureValue;
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__get_minExposureValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minExposureValue;
}
constexpr void UnityEngine::ColorUsageAttribute::__set_minExposureValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minExposureValue = value;
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__get_maxExposureValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxExposureValue;
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__get_maxExposureValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxExposureValue;
}
constexpr void UnityEngine::ColorUsageAttribute::__set_maxExposureValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxExposureValue = value;
}
inline ::UnityEngine::ColorUsageAttribute* UnityEngine::ColorUsageAttribute::New_ctor(bool showAlpha) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ColorUsageAttribute*>(showAlpha));
}
inline void UnityEngine::ColorUsageAttribute::_ctor(bool showAlpha) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUsageAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showAlpha);
}
inline ::UnityEngine::ColorUsageAttribute* UnityEngine::ColorUsageAttribute::New_ctor(bool showAlpha, bool hdr) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ColorUsageAttribute*>(showAlpha, hdr));
}
inline void UnityEngine::ColorUsageAttribute::_ctor(bool showAlpha, bool hdr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUsageAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showAlpha, hdr);
}
// Ctor Parameters []
constexpr ::UnityEngine::ColorUsageAttribute::ColorUsageAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
