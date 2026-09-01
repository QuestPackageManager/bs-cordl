#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\HSVColor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__HSVColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::HSVColor::*)(float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::HSVColor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66b9584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::HSVColor::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::HSVColor::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66b9590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor.FromRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::HSVColor* (*)(::UnityEngine::Color)>(&::UnityEngine::ProBuilder::HSVColor::FromRGB)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66b95a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(), { "FromRGB", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::HSVColor::*)()>(&::UnityEngine::ProBuilder::HSVColor::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x66b97f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor.SqrDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::HSVColor::*)(::UnityEngine::ProBuilder::HSVColor*)>(&::UnityEngine::ProBuilder::HSVColor::SqrDistance)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x66b98c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(), { "SqrDistance", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::HSVColor*>() } })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::ProBuilder::HSVColor::__cordl_internal_get_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr float_t const& UnityEngine::ProBuilder::HSVColor::__cordl_internal_get_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr void UnityEngine::ProBuilder::HSVColor::__cordl_internal_set_h(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h = value;
}
constexpr float_t& UnityEngine::ProBuilder::HSVColor::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& UnityEngine::ProBuilder::HSVColor::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void UnityEngine::ProBuilder::HSVColor::__cordl_internal_set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr float_t& UnityEngine::ProBuilder::HSVColor::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr float_t const& UnityEngine::ProBuilder::HSVColor::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void UnityEngine::ProBuilder::HSVColor::__cordl_internal_set_v(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v = value;
}
inline void UnityEngine::ProBuilder::HSVColor::_ctor(float_t h, float_t s, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, h, s, v);
}
inline void UnityEngine::ProBuilder::HSVColor::_ctor(float_t h, float_t s, float_t v, float_t sv_modifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, h, s, v, sv_modifier);
}
inline ::UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::HSVColor::FromRGB(::UnityEngine::Color col) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(), { "FromRGB", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::HSVColor*>(nullptr, ___internal_method, col);
}
inline ::StringW UnityEngine::ProBuilder::HSVColor::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::HSVColor::SqrDistance(::UnityEngine::ProBuilder::HSVColor* InColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HSVColor*>(), { "SqrDistance", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::HSVColor*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, InColor);
}
inline ::UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::HSVColor::New_ctor(float_t h, float_t s, float_t v) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::HSVColor*>(h, s, v));
}
inline ::UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::HSVColor::New_ctor(float_t h, float_t s, float_t v, float_t sv_modifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::HSVColor*>(h, s, v, sv_modifier));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::HSVColor::HSVColor() {}
