#pragma once
// IWYU pragma private; include "GlobalNamespace/BladeMovementDataElement.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "segmentAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "topPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "segmentNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BladeMovementDataElement::BladeMovementDataElement(float_t time, float_t segmentAngle, ::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos,
                                                                                ::UnityEngine::Vector3 segmentNormal) noexcept {
  this->time = time;
  this->segmentAngle = segmentAngle;
  this->topPos = topPos;
  this->bottomPos = bottomPos;
  this->segmentNormal = segmentNormal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BladeMovementDataElement::BladeMovementDataElement() {}
