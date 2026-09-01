#pragma once
// IWYU pragma private; include "UnityEngine\ControllerColliderHit.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ControllerColliderHit_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_controller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CharacterController> (::UnityEngine::ControllerColliderHit::*)()>(
    &::UnityEngine::ControllerColliderHit::get_controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b7bee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_controller", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_collider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::get_collider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b7beec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_collider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_rigidbody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::get_rigidbody)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b7bef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_rigidbody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_gameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::get_gameObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b7c058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_gameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::get_transform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b7c070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_transform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_point
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::get_point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b7c088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_point", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::get_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b7c094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_normal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_moveDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::get_moveDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b7c0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_moveDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_moveLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::get_moveLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b7c0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_moveLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.get_push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::get_push)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b7c0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_push", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit.set_push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ControllerColliderHit::*)(bool)>(&::UnityEngine::ControllerColliderHit::set_push)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b7c0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "set_push", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ControllerColliderHit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ControllerColliderHit::*)()>(&::UnityEngine::ControllerColliderHit::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b7c0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::CharacterController>& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controller;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controller;
}
constexpr void UnityEngine::ControllerColliderHit::__cordl_internal_set_m_Controller(::UnityW<::UnityEngine::CharacterController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Controller = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Collider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Collider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Collider;
}
constexpr void UnityEngine::ControllerColliderHit::__cordl_internal_set_m_Collider(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Collider = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Point;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Point;
}
constexpr void UnityEngine::ControllerColliderHit::__cordl_internal_set_m_Point(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Point = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Normal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normal;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Normal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normal;
}
constexpr void UnityEngine::ControllerColliderHit::__cordl_internal_set_m_Normal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Normal = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_MoveDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveDirection;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_MoveDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveDirection;
}
constexpr void UnityEngine::ControllerColliderHit::__cordl_internal_set_m_MoveDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveDirection = value;
}
constexpr float_t& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_MoveLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveLength;
}
constexpr float_t const& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_MoveLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveLength;
}
constexpr void UnityEngine::ControllerColliderHit::__cordl_internal_set_m_MoveLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveLength = value;
}
constexpr int32_t& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Push() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Push;
}
constexpr int32_t const& UnityEngine::ControllerColliderHit::__cordl_internal_get_m_Push() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Push;
}
constexpr void UnityEngine::ControllerColliderHit::__cordl_internal_set_m_Push(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Push = value;
}
inline ::UnityW<::UnityEngine::CharacterController> UnityEngine::ControllerColliderHit::get_controller() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_controller", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CharacterController>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ControllerColliderHit::get_collider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_collider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> UnityEngine::ControllerColliderHit::get_rigidbody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_rigidbody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::ControllerColliderHit::get_gameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_gameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::ControllerColliderHit::get_transform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ControllerColliderHit::get_point() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_point", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ControllerColliderHit::get_normal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_normal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ControllerColliderHit::get_moveDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_moveDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t UnityEngine::ControllerColliderHit::get_moveLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_moveLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::ControllerColliderHit::get_push() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "get_push", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ControllerColliderHit::set_push(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { "set_push", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ControllerColliderHit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ControllerColliderHit*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ControllerColliderHit* UnityEngine::ControllerColliderHit::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ControllerColliderHit*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ControllerColliderHit::ControllerColliderHit() {}
