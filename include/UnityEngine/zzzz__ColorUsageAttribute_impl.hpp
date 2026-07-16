#pragma once
// IWYU pragma private; include "UnityEngine/ColorUsageAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__ColorUsageAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ColorUsageAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ColorUsageAttribute::*)(bool)>(&::UnityEngine::ColorUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ad4d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUsageAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUsageAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ColorUsageAttribute::*)(bool, bool)>(&::UnityEngine::ColorUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ad4d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUsageAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::ColorUsageAttribute::__cordl_internal_get_showAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr bool const& UnityEngine::ColorUsageAttribute::__cordl_internal_get_showAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr void UnityEngine::ColorUsageAttribute::__cordl_internal_set_showAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showAlpha = value;
}
constexpr bool& UnityEngine::ColorUsageAttribute::__cordl_internal_get_hdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr bool const& UnityEngine::ColorUsageAttribute::__cordl_internal_get_hdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr void UnityEngine::ColorUsageAttribute::__cordl_internal_set_hdr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdr = value;
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__cordl_internal_get_minBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minBrightness;
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__cordl_internal_get_minBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minBrightness;
}
constexpr void UnityEngine::ColorUsageAttribute::__cordl_internal_set_minBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minBrightness = value;
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__cordl_internal_get_maxBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBrightness;
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__cordl_internal_get_maxBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBrightness;
}
constexpr void UnityEngine::ColorUsageAttribute::__cordl_internal_set_maxBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxBrightness = value;
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__cordl_internal_get_minExposureValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minExposureValue;
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__cordl_internal_get_minExposureValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minExposureValue;
}
constexpr void UnityEngine::ColorUsageAttribute::__cordl_internal_set_minExposureValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minExposureValue = value;
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__cordl_internal_get_maxExposureValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxExposureValue;
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__cordl_internal_get_maxExposureValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxExposureValue;
}
constexpr void UnityEngine::ColorUsageAttribute::__cordl_internal_set_maxExposureValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxExposureValue = value;
}
inline void UnityEngine::ColorUsageAttribute::_ctor(bool showAlpha) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUsageAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showAlpha);
}
inline void UnityEngine::ColorUsageAttribute::_ctor(bool showAlpha, bool hdr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ColorUsageAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showAlpha, hdr);
}
inline ::UnityEngine::ColorUsageAttribute* UnityEngine::ColorUsageAttribute::New_ctor(bool showAlpha) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ColorUsageAttribute*>(showAlpha));
}
inline ::UnityEngine::ColorUsageAttribute* UnityEngine::ColorUsageAttribute::New_ctor(bool showAlpha, bool hdr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ColorUsageAttribute*>(showAlpha, hdr));
}
// Ctor Parameters []
constexpr ::UnityEngine::ColorUsageAttribute::ColorUsageAttribute() {}
