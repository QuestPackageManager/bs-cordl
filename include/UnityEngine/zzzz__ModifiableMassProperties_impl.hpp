#pragma once
// IWYU pragma private; include "UnityEngine/ModifiableMassProperties.hpp"
#include "UnityEngine/zzzz__ModifiableMassProperties_def.hpp"
// Ctor Parameters [CppParam { name: "inverseMassScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "inverseInertiaScale", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "otherInverseMassScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherInverseInertiaScale", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::ModifiableMassProperties::ModifiableMassProperties(float_t inverseMassScale, float_t inverseInertiaScale, float_t otherInverseMassScale,
                                                                            float_t otherInverseInertiaScale) noexcept {
  this->inverseMassScale = inverseMassScale;
  this->inverseInertiaScale = inverseInertiaScale;
  this->otherInverseMassScale = otherInverseMassScale;
  this->otherInverseInertiaScale = otherInverseInertiaScale;
}
// Ctor Parameters []
constexpr ::UnityEngine::ModifiableMassProperties::ModifiableMassProperties() {}
