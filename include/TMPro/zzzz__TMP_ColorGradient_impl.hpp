#pragma once
// IWYU pragma private; include "TMPro\TMP_ColorGradient.hpp"
#include "TMPro/zzzz__ColorMode_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "TMPro/zzzz__TMP_ColorGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_ColorGradient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_ColorGradient::*)()>(&::TMPro::TMP_ColorGradient::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x694a694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ColorGradient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ColorGradient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_ColorGradient::*)(::UnityEngine::Color)>(&::TMPro::TMP_ColorGradient::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x694a734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ColorGradient*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ColorGradient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_ColorGradient::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(
    &::TMPro::TMP_ColorGradient::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x694a7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::TMPro::TMP_ColorGradient*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
constexpr ::TMPro::ColorMode& TMPro::TMP_ColorGradient::__cordl_internal_get_colorMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMode;
}
constexpr ::TMPro::ColorMode const& TMPro::TMP_ColorGradient::__cordl_internal_get_colorMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMode;
}
constexpr void TMPro::TMP_ColorGradient::__cordl_internal_set_colorMode(::TMPro::ColorMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMode = value;
}
constexpr ::UnityEngine::Color& TMPro::TMP_ColorGradient::__cordl_internal_get_topLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLeft;
}
constexpr ::UnityEngine::Color const& TMPro::TMP_ColorGradient::__cordl_internal_get_topLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLeft;
}
constexpr void TMPro::TMP_ColorGradient::__cordl_internal_set_topLeft(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topLeft = value;
}
constexpr ::UnityEngine::Color& TMPro::TMP_ColorGradient::__cordl_internal_get_topRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topRight;
}
constexpr ::UnityEngine::Color const& TMPro::TMP_ColorGradient::__cordl_internal_get_topRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topRight;
}
constexpr void TMPro::TMP_ColorGradient::__cordl_internal_set_topRight(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topRight = value;
}
constexpr ::UnityEngine::Color& TMPro::TMP_ColorGradient::__cordl_internal_get_bottomLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLeft;
}
constexpr ::UnityEngine::Color const& TMPro::TMP_ColorGradient::__cordl_internal_get_bottomLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLeft;
}
constexpr void TMPro::TMP_ColorGradient::__cordl_internal_set_bottomLeft(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomLeft = value;
}
constexpr ::UnityEngine::Color& TMPro::TMP_ColorGradient::__cordl_internal_get_bottomRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomRight;
}
constexpr ::UnityEngine::Color const& TMPro::TMP_ColorGradient::__cordl_internal_get_bottomRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomRight;
}
constexpr void TMPro::TMP_ColorGradient::__cordl_internal_set_bottomRight(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomRight = value;
}
inline void TMPro::TMP_ColorGradient::setStaticF_k_DefaultColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "k_DefaultColor", ::TMPro::TMP_ColorGradient*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color TMPro::TMP_ColorGradient::getStaticF_k_DefaultColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "k_DefaultColor", ::TMPro::TMP_ColorGradient*>();
}
inline void TMPro::TMP_ColorGradient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ColorGradient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_ColorGradient::_ctor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ColorGradient*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void TMPro::TMP_ColorGradient::_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::TMPro::TMP_ColorGradient*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color0, color1, color2, color3);
}
inline ::TMPro::TMP_ColorGradient* TMPro::TMP_ColorGradient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_ColorGradient*>());
}
inline ::TMPro::TMP_ColorGradient* TMPro::TMP_ColorGradient::New_ctor(::UnityEngine::Color color) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_ColorGradient*>(color));
}
inline ::TMPro::TMP_ColorGradient* TMPro::TMP_ColorGradient::New_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_ColorGradient*>(color0, color1, color2, color3));
}
// Ctor Parameters []
constexpr ::TMPro::TMP_ColorGradient::TMP_ColorGradient() {}
constexpr ::TMPro::ColorMode TMPro::TMP_ColorGradient::k_DefaultColorMode{ static_cast<int32_t>(0x3) };
