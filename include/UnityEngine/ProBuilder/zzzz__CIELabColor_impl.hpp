#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\CIELabColor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__CIELabColor_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__XYZColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::CIELabColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::CIELabColor::*)(float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::CIELabColor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66b9d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::CIELabColor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::CIELabColor.FromXYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::CIELabColor* (*)(::UnityEngine::ProBuilder::XYZColor*)>(&::UnityEngine::ProBuilder::CIELabColor::FromXYZ)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66b9d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::CIELabColor*>(), { "FromXYZ", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::XYZColor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::CIELabColor.FromRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::CIELabColor* (*)(::UnityEngine::Color)>(&::UnityEngine::ProBuilder::CIELabColor::FromRGB)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66b9ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::CIELabColor*>(), { "FromRGB", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::CIELabColor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::CIELabColor::*)()>(&::UnityEngine::ProBuilder::CIELabColor::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x66b9f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::CIELabColor*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::CIELabColor*>(), 3 }));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::ProBuilder::CIELabColor::__cordl_internal_get_L() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr float_t const& UnityEngine::ProBuilder::CIELabColor::__cordl_internal_get_L() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr void UnityEngine::ProBuilder::CIELabColor::__cordl_internal_set_L(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___L = value;
}
constexpr float_t& UnityEngine::ProBuilder::CIELabColor::__cordl_internal_get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr float_t const& UnityEngine::ProBuilder::CIELabColor::__cordl_internal_get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void UnityEngine::ProBuilder::CIELabColor::__cordl_internal_set_a(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr float_t& UnityEngine::ProBuilder::CIELabColor::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& UnityEngine::ProBuilder::CIELabColor::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void UnityEngine::ProBuilder::CIELabColor::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
inline void UnityEngine::ProBuilder::CIELabColor::_ctor(float_t L, float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::CIELabColor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, L, a, b);
}
inline ::UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::CIELabColor::FromXYZ(::UnityEngine::ProBuilder::XYZColor* xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::CIELabColor*>(), { "FromXYZ", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::XYZColor*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::CIELabColor*>(nullptr, ___internal_method, xyz);
}
inline ::UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::CIELabColor::FromRGB(::UnityEngine::Color col) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::CIELabColor*>(), { "FromRGB", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::CIELabColor*>(nullptr, ___internal_method, col);
}
inline ::StringW UnityEngine::ProBuilder::CIELabColor::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::CIELabColor*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::CIELabColor::New_ctor(float_t L, float_t a, float_t b) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::CIELabColor*>(L, a, b));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::CIELabColor::CIELabColor() {}
