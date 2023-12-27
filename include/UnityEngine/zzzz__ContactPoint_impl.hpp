#pragma once
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_ThisColliderInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherColliderInstanceID", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ContactPoint::ContactPoint(::UnityEngine::Vector3 m_Point, ::UnityEngine::Vector3 m_Normal, int32_t m_ThisColliderInstanceID, int32_t m_OtherColliderInstanceID,
                                                    float_t m_Separation) noexcept {
  this->m_Point = m_Point;
  this->m_Normal = m_Normal;
  this->m_ThisColliderInstanceID = m_ThisColliderInstanceID;
  this->m_OtherColliderInstanceID = m_OtherColliderInstanceID;
  this->m_Separation = m_Separation;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPoint::ContactPoint() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
