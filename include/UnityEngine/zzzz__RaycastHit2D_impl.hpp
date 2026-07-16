#pragma once
// IWYU pragma private; include "UnityEngine/RaycastHit2D.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::RaycastHit2D.get_point
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RaycastHit2D::*)()>(&::UnityEngine::RaycastHit2D::get_point)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6d8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_point", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit2D.get_normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::RaycastHit2D::*)()>(&::UnityEngine::RaycastHit2D::get_normal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6d8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_normal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit2D.get_distance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::RaycastHit2D::*)()>(&::UnityEngine::RaycastHit2D::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6d8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_distance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit2D.get_fraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::RaycastHit2D::*)()>(&::UnityEngine::RaycastHit2D::get_fraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6d8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_fraction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit2D.get_collider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider2D> (::UnityEngine::RaycastHit2D::*)()>(&::UnityEngine::RaycastHit2D::get_collider)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x6b6d8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_collider", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::RaycastHit2D::get_point() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_point", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::RaycastHit2D::get_normal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_normal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline float_t UnityEngine::RaycastHit2D::get_distance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_distance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::RaycastHit2D::get_fraction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_fraction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider2D> UnityEngine::RaycastHit2D::get_collider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RaycastHit2D>(), { "get_collider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider2D>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Centroid", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Fraction", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RaycastHit2D::RaycastHit2D(::UnityEngine::Vector2 m_Centroid, ::UnityEngine::Vector2 m_Point, ::UnityEngine::Vector2 m_Normal, float_t m_Distance, float_t m_Fraction,
                                                    int32_t m_Collider) noexcept {
  this->m_Centroid = m_Centroid;
  this->m_Point = m_Point;
  this->m_Normal = m_Normal;
  this->m_Distance = m_Distance;
  this->m_Fraction = m_Fraction;
  this->m_Collider = m_Collider;
}
// Ctor Parameters []
constexpr ::UnityEngine::RaycastHit2D::RaycastHit2D() {}
