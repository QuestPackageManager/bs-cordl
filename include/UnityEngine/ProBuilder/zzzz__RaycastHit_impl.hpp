#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\RaycastHit.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::RaycastHit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::RaycastHit::*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(
    &::UnityEngine::ProBuilder::RaycastHit::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66dfb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::RaycastHit*>(),
                            { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::ProBuilder::RaycastHit::__cordl_internal_get_distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr float_t const& UnityEngine::ProBuilder::RaycastHit::__cordl_internal_get_distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__cordl_internal_set_distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distance = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ProBuilder::RaycastHit::__cordl_internal_get_point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___point;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ProBuilder::RaycastHit::__cordl_internal_get_point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___point;
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__cordl_internal_set_point(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___point = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ProBuilder::RaycastHit::__cordl_internal_get_normal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normal;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ProBuilder::RaycastHit::__cordl_internal_get_normal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normal;
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__cordl_internal_set_normal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normal = value;
}
constexpr int32_t& UnityEngine::ProBuilder::RaycastHit::__cordl_internal_get_face() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr int32_t const& UnityEngine::ProBuilder::RaycastHit::__cordl_internal_get_face() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__cordl_internal_set_face(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___face = value;
}
inline void UnityEngine::ProBuilder::RaycastHit::_ctor(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::RaycastHit*>(),
                                       { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, point, normal, face);
}
inline ::UnityEngine::ProBuilder::RaycastHit* UnityEngine::ProBuilder::RaycastHit::New_ctor(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::RaycastHit*>(distance, point, normal, face));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::RaycastHit::RaycastHit() {}
