#pragma once
// IWYU pragma private; include "GlobalNamespace\SDFPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SDFPoint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SDFPoint.get_sqrtRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SDFPoint::*)()>(&::GlobalNamespace::SDFPoint::get_sqrtRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58732d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFPoint*>(), { "get_sqrtRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFPoint.set_sqrtRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SDFPoint::*)(float_t)>(&::GlobalNamespace::SDFPoint::set_sqrtRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58732dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFPoint*>(), { "set_sqrtRadius", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SDFPoint::*)()>(&::GlobalNamespace::SDFPoint::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58732e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFPoint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SDFPoint::__cordl_internal_get__radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr float_t const& GlobalNamespace::SDFPoint::__cordl_internal_get__radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr void GlobalNamespace::SDFPoint::__cordl_internal_set__radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius = value;
}
constexpr float_t& GlobalNamespace::SDFPoint::__cordl_internal_get__sqrtRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sqrtRadius;
}
constexpr float_t const& GlobalNamespace::SDFPoint::__cordl_internal_get__sqrtRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sqrtRadius;
}
constexpr void GlobalNamespace::SDFPoint::__cordl_internal_set__sqrtRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sqrtRadius = value;
}
inline float_t GlobalNamespace::SDFPoint::get_sqrtRadius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFPoint*>(), { "get_sqrtRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SDFPoint::set_sqrtRadius(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFPoint*>(), { "set_sqrtRadius", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SDFPoint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SDFPoint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SDFPoint* GlobalNamespace::SDFPoint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SDFPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SDFPoint::SDFPoint() {}
