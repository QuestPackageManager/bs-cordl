#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/GeometryType.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__GeometryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevelPhysics::GeometryType::GeometryType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics::GeometryType::GeometryType() {}
constexpr ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::GeometryType::Sphere{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::GeometryType::Capsule{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::GeometryType::Box{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::GeometryType::ConvexMesh{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::GeometryType::TriangleMesh{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::GeometryType::Terrain{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::GeometryType::Invalid{ static_cast<int32_t>(0xffffffff) };
