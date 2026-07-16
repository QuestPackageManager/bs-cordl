#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Transform2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Transform2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Transform2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Transform2D::*)(::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::ProBuilder::Transform2D::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66f2880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Transform2D*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Transform2D.TransformPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::Transform2D::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::ProBuilder::Transform2D::TransformPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66f2890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Transform2D*>(), { "TransformPoint", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Transform2D.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Transform2D::*)()>(&::UnityEngine::ProBuilder::Transform2D::ToString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x66f28a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Transform2D*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Transform2D*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Transform2D::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Transform2D::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void UnityEngine::ProBuilder::Transform2D::__cordl_internal_set_position(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr float_t& UnityEngine::ProBuilder::Transform2D::__cordl_internal_get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr float_t const& UnityEngine::ProBuilder::Transform2D::__cordl_internal_get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void UnityEngine::ProBuilder::Transform2D::__cordl_internal_set_rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Transform2D::__cordl_internal_get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Transform2D::__cordl_internal_get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr void UnityEngine::ProBuilder::Transform2D::__cordl_internal_set_scale(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scale = value;
}
inline void UnityEngine::ProBuilder::Transform2D::_ctor(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Transform2D*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Transform2D::TransformPoint(::UnityEngine::Vector2 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Transform2D*>(), { "TransformPoint", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, p);
}
inline ::StringW UnityEngine::ProBuilder::Transform2D::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Transform2D*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Transform2D* UnityEngine::ProBuilder::Transform2D::New_ctor(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Transform2D*>(position, rotation, scale));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Transform2D::Transform2D() {}
