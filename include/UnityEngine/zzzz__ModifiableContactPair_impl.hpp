#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "actor", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherActor", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "shape", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherShape", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty:
// "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "otherRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "numContacts", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "contacts", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ModifiableContactPair::ModifiableContactPair(void* actor, void* otherActor, void* shape, void* otherShape, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 position,
                                                                      ::UnityEngine::Quaternion otherRotation, ::UnityEngine::Vector3 otherPosition, int32_t numContacts, void* contacts) noexcept {
  this->actor = actor;
  this->otherActor = otherActor;
  this->shape = shape;
  this->otherShape = otherShape;
  this->rotation = rotation;
  this->position = position;
  this->otherRotation = otherRotation;
  this->otherPosition = otherPosition;
  this->numContacts = numContacts;
  this->contacts = contacts;
}
// Ctor Parameters []
constexpr ::UnityEngine::ModifiableContactPair::ModifiableContactPair() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
