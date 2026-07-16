#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpColorParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpColorParameter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpColorParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::NoInterpColorParameter::*)(::UnityEngine::Color, bool)>(
    &::UnityEngine::Rendering::NoInterpColorParameter::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67c7a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpColorParameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpColorParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::NoInterpColorParameter::*)(::UnityEngine::Color, bool, bool, bool, bool)>(
    &::UnityEngine::Rendering::NoInterpColorParameter::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67c7b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpColorParameter*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::NoInterpColorParameter::__cordl_internal_get_hdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr bool const& UnityEngine::Rendering::NoInterpColorParameter::__cordl_internal_get_hdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr void UnityEngine::Rendering::NoInterpColorParameter::__cordl_internal_set_hdr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdr = value;
}
constexpr bool& UnityEngine::Rendering::NoInterpColorParameter::__cordl_internal_get_showAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr bool const& UnityEngine::Rendering::NoInterpColorParameter::__cordl_internal_get_showAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr void UnityEngine::Rendering::NoInterpColorParameter::__cordl_internal_set_showAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showAlpha = value;
}
constexpr bool& UnityEngine::Rendering::NoInterpColorParameter::__cordl_internal_get_showEyeDropper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showEyeDropper;
}
constexpr bool const& UnityEngine::Rendering::NoInterpColorParameter::__cordl_internal_get_showEyeDropper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showEyeDropper;
}
constexpr void UnityEngine::Rendering::NoInterpColorParameter::__cordl_internal_set_showEyeDropper(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showEyeDropper = value;
}
inline void UnityEngine::Rendering::NoInterpColorParameter::_ctor(::UnityEngine::Color value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpColorParameter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::NoInterpColorParameter::_ctor(::UnityEngine::Color value, bool hdr, bool showAlpha, bool showEyeDropper, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpColorParameter*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, hdr, showAlpha, showEyeDropper, overrideState);
}
inline ::UnityEngine::Rendering::NoInterpColorParameter* UnityEngine::Rendering::NoInterpColorParameter::New_ctor(::UnityEngine::Color value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::NoInterpColorParameter*>(value, overrideState));
}
inline ::UnityEngine::Rendering::NoInterpColorParameter* UnityEngine::Rendering::NoInterpColorParameter::New_ctor(::UnityEngine::Color value, bool hdr, bool showAlpha, bool showEyeDropper,
                                                                                                                  bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::NoInterpColorParameter*>(value, hdr, showAlpha, showEyeDropper, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpColorParameter::NoInterpColorParameter() {}
