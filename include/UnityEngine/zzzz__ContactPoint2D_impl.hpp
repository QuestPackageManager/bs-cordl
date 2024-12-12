#pragma once
// IWYU pragma private; include "UnityEngine/ContactPoint2D.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint2D_def.hpp"
// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_RelativeVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_NormalImpulse", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TangentImpulse", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherCollider", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Rigidbody", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherRigidbody", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Enabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ContactPoint2D::ContactPoint2D(::UnityEngine::Vector2 m_Point, ::UnityEngine::Vector2 m_Normal, ::UnityEngine::Vector2 m_RelativeVelocity, float_t m_Separation,
                                                        float_t m_NormalImpulse, float_t m_TangentImpulse, int32_t m_Collider, int32_t m_OtherCollider, int32_t m_Rigidbody, int32_t m_OtherRigidbody,
                                                        int32_t m_Enabled) noexcept {
  this->m_Point = m_Point;
  this->m_Normal = m_Normal;
  this->m_RelativeVelocity = m_RelativeVelocity;
  this->m_Separation = m_Separation;
  this->m_NormalImpulse = m_NormalImpulse;
  this->m_TangentImpulse = m_TangentImpulse;
  this->m_Collider = m_Collider;
  this->m_OtherCollider = m_OtherCollider;
  this->m_Rigidbody = m_Rigidbody;
  this->m_OtherRigidbody = m_OtherRigidbody;
  this->m_Enabled = m_Enabled;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPoint2D::ContactPoint2D() {}
