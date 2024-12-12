#pragma once
// IWYU pragma private; include "UnityEngine/ModifiableContact.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ModifiableContact_def.hpp"
// Ctor Parameters [CppParam { name: "contact", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "separation", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "targetVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxImpulse", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "restitution", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "materialFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "otherMaterialIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "staticFriction", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "dynamicFriction", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ModifiableContact::ModifiableContact(::UnityEngine::Vector3 contact, float_t separation, ::UnityEngine::Vector3 targetVelocity, float_t maxImpulse,
                                                              ::UnityEngine::Vector3 normal, float_t restitution, uint32_t materialFlags, uint16_t materialIndex, uint16_t otherMaterialIndex,
                                                              float_t staticFriction, float_t dynamicFriction) noexcept {
  this->contact = contact;
  this->separation = separation;
  this->targetVelocity = targetVelocity;
  this->maxImpulse = maxImpulse;
  this->normal = normal;
  this->restitution = restitution;
  this->materialFlags = materialFlags;
  this->materialIndex = materialIndex;
  this->otherMaterialIndex = otherMaterialIndex;
  this->staticFriction = staticFriction;
  this->dynamicFriction = dynamicFriction;
}
// Ctor Parameters []
constexpr ::UnityEngine::ModifiableContact::ModifiableContact() {}
