#pragma once
#include "UnityEngine/ProBuilder/zzzz__ExtrudeMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ExtrudeMethod::ExtrudeMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ExtrudeMethod::ExtrudeMethod() {}
constexpr ::UnityEngine::ProBuilder::ExtrudeMethod UnityEngine::ProBuilder::ExtrudeMethod::IndividualFaces{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::ExtrudeMethod UnityEngine::ProBuilder::ExtrudeMethod::VertexNormal{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::ExtrudeMethod UnityEngine::ProBuilder::ExtrudeMethod::FaceNormal{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
