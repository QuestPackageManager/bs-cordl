#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ControllerColliderHit_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
constexpr ::UnityEngine::CharacterController*& UnityEngine::ControllerColliderHit::__get_m_Controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Controller;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CharacterController*> const& UnityEngine::ControllerColliderHit::__get_m_Controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Controller;
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_Controller(::UnityEngine::CharacterController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Controller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Collider*& UnityEngine::ControllerColliderHit::__get_m_Collider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Collider;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& UnityEngine::ControllerColliderHit::__get_m_Collider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Collider;
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_Collider(::UnityEngine::Collider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Collider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& UnityEngine::ControllerColliderHit::__get_m_Point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Point;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ControllerColliderHit::__get_m_Point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Point;
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_Point(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Point = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ControllerColliderHit::__get_m_Normal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Normal;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ControllerColliderHit::__get_m_Normal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Normal;
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_Normal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Normal = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ControllerColliderHit::__get_m_MoveDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MoveDirection;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ControllerColliderHit::__get_m_MoveDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MoveDirection;
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_MoveDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MoveDirection = value;
}
constexpr float_t& UnityEngine::ControllerColliderHit::__get_m_MoveLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MoveLength;
}
constexpr float_t const& UnityEngine::ControllerColliderHit::__get_m_MoveLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MoveLength;
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_MoveLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MoveLength = value;
}
constexpr int32_t& UnityEngine::ControllerColliderHit::__get_m_Push() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Push;
}
constexpr int32_t const& UnityEngine::ControllerColliderHit::__get_m_Push() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Push;
}
constexpr void UnityEngine::ControllerColliderHit::__set_m_Push(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Push = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::ControllerColliderHit::ControllerColliderHit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
