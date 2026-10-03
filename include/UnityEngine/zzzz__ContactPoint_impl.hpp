#pragma once
// IWYU pragma private; include "UnityEngine/ContactPoint.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactPoint.get_point
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPoint::*)()>(&::UnityEngine::ContactPoint::get_point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fdcc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_point", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPoint.get_normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPoint::*)()>(&::UnityEngine::ContactPoint::get_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fdcc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_normal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPoint.get_impulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPoint::*)()>(&::UnityEngine::ContactPoint::get_impulse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fdcc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_impulse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPoint.get_thisCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPoint::*)()>(&::UnityEngine::ContactPoint::get_thisCollider)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6fdcc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_thisCollider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPoint.get_otherCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPoint::*)()>(&::UnityEngine::ContactPoint::get_otherCollider)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6fdce00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_otherCollider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPoint.get_separation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ContactPoint::*)()>(&::UnityEngine::ContactPoint::get_separation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fdce5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_separation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ContactPoint::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::EntityId,
                                                                                             ::UnityEngine::EntityId)>(&::UnityEngine::ContactPoint::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6fdce64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::ContactPoint::get_point() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_point", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPoint::get_normal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_normal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPoint::get_impulse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_impulse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPoint::get_thisCollider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_thisCollider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPoint::get_otherCollider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_otherCollider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline float_t UnityEngine::ContactPoint::get_separation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(), { "get_separation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ContactPoint::_ctor(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 impulse, float_t separation, ::UnityEngine::EntityId thisEntityId,
                                             ::UnityEngine::EntityId otherEntityId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactPoint>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, point, normal, impulse, separation, thisEntityId, otherEntityId);
}
// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Impulse", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "m_ThisColliderEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OtherColliderEntityId", ty: "::UnityEngine::EntityId", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ContactPoint::ContactPoint(::UnityEngine::Vector3 m_Point, ::UnityEngine::Vector3 m_Normal, ::UnityEngine::Vector3 m_Impulse, ::UnityEngine::EntityId m_ThisColliderEntityId,
                                                    ::UnityEngine::EntityId m_OtherColliderEntityId, float_t m_Separation) noexcept {
  this->m_Point = m_Point;
  this->m_Normal = m_Normal;
  this->m_Impulse = m_Impulse;
  this->m_ThisColliderEntityId = m_ThisColliderEntityId;
  this->m_OtherColliderEntityId = m_OtherColliderEntityId;
  this->m_Separation = m_Separation;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPoint::ContactPoint() {}
