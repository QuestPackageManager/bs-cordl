#pragma once
// IWYU pragma private; include "UnityEngine/PrimitiveType.hpp"
#include "UnityEngine/zzzz__PrimitiveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PrimitiveType::PrimitiveType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::PrimitiveType::PrimitiveType()   {
}
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Sphere{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Capsule{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Cylinder{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Cube{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Plane{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Quad{static_cast<int32_t>(0x5)};
