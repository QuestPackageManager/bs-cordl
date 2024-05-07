#pragma once
// IWYU pragma private; include "UnityEngine/ModifiableContactPatch.hpp"
#include "UnityEngine/zzzz__ModifiableMassProperties_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ModifiableContactPatch_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPatch_def.hpp"
#include "UnityEngine/zzzz__ModifiableMassProperties_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ModifiableContactPatch__Flags::__ModifiableContactPatch__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ModifiableContactPatch__Flags::__ModifiableContactPatch__Flags() {}
constexpr ::UnityEngine::__ModifiableContactPatch__Flags UnityEngine::__ModifiableContactPatch__Flags::HasFaceIndices{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::__ModifiableContactPatch__Flags UnityEngine::__ModifiableContactPatch__Flags::HasModifiedMassRatios{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::__ModifiableContactPatch__Flags UnityEngine::__ModifiableContactPatch__Flags::HasTargetVelocity{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::__ModifiableContactPatch__Flags UnityEngine::__ModifiableContactPatch__Flags::HasMaxImpulse{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::__ModifiableContactPatch__Flags UnityEngine::__ModifiableContactPatch__Flags::RegeneratePatches{ static_cast<int32_t>(0x40) };
// Ctor Parameters [CppParam { name: "massProperties", ty: "::UnityEngine::ModifiableMassProperties", modifiers: "", def_value: Some("{}") }, CppParam { name: "normal", ty: "::UnityEngine::Vector3",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "restitution", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dynamicFriction", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "staticFriction", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startContactIndex", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "contactCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialFlags", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "internalFlags", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "otherMaterialIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ModifiableContactPatch::ModifiableContactPatch(::UnityEngine::ModifiableMassProperties massProperties, ::UnityEngine::Vector3 normal, float_t restitution,
                                                                        float_t dynamicFriction, float_t staticFriction, uint8_t startContactIndex, uint8_t contactCount, uint8_t materialFlags,
                                                                        uint8_t internalFlags, uint16_t materialIndex, uint16_t otherMaterialIndex) noexcept {
  this->massProperties = massProperties;
  this->normal = normal;
  this->restitution = restitution;
  this->dynamicFriction = dynamicFriction;
  this->staticFriction = staticFriction;
  this->startContactIndex = startContactIndex;
  this->contactCount = contactCount;
  this->materialFlags = materialFlags;
  this->internalFlags = internalFlags;
  this->materialIndex = materialIndex;
  this->otherMaterialIndex = otherMaterialIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::ModifiableContactPatch::ModifiableContactPatch() {}
