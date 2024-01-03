#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
constexpr ::UnityEngine::Vector3& UnityEngine::Collision::__get_m_Impulse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Impulse;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Collision::__get_m_Impulse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Impulse;
}
constexpr void UnityEngine::Collision::__set_m_Impulse(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Impulse = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Collision::__get_m_RelativeVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RelativeVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Collision::__get_m_RelativeVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RelativeVelocity;
}
constexpr void UnityEngine::Collision::__set_m_RelativeVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RelativeVelocity = value;
}
constexpr ::UnityEngine::Component*& UnityEngine::Collision::__get_m_Body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Body;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Component*> const& UnityEngine::Collision::__get_m_Body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Body;
}
constexpr void UnityEngine::Collision::__set_m_Body(::UnityEngine::Component* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Body)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Collider*& UnityEngine::Collision::__get_m_Collider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Collider;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& UnityEngine::Collision::__get_m_Collider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Collider;
}
constexpr void UnityEngine::Collision::__set_m_Collider(::UnityEngine::Collider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Collider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Collision::__get_m_ContactCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContactCount;
}
constexpr int32_t const& UnityEngine::Collision::__get_m_ContactCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContactCount;
}
constexpr void UnityEngine::Collision::__set_m_ContactCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContactCount = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>& UnityEngine::Collision::__get_m_ReusedContacts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReusedContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> const& UnityEngine::Collision::__get_m_ReusedContacts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReusedContacts;
}
constexpr void UnityEngine::Collision::__set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReusedContacts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>& UnityEngine::Collision::__get_m_LegacyContacts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LegacyContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> const& UnityEngine::Collision::__get_m_LegacyContacts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LegacyContacts;
}
constexpr void UnityEngine::Collision::__set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LegacyContacts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Collision::Collision() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
