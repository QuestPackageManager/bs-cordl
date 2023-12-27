#pragma once
#include "UnityEngine/ProBuilder/zzzz__ShapeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ShapeType::ShapeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ShapeType::ShapeType() {}
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Cube{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Stair{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::CurvedStair{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Prism{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Cylinder{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Plane{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Door{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Pipe{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Cone{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Sprite{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Arch{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Sphere{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::ProBuilder::ShapeType UnityEngine::ProBuilder::ShapeType::Torus{ static_cast<int32_t>(0xc) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
