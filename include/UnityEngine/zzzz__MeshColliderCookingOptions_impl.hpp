#pragma once
// IWYU pragma private; include "UnityEngine/MeshColliderCookingOptions.hpp"
#include "UnityEngine/zzzz__MeshColliderCookingOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::MeshColliderCookingOptions::MeshColliderCookingOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::MeshColliderCookingOptions::MeshColliderCookingOptions()   {
}
constexpr ::UnityEngine::MeshColliderCookingOptions  UnityEngine::MeshColliderCookingOptions::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::MeshColliderCookingOptions  UnityEngine::MeshColliderCookingOptions::InflateConvexMesh{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::MeshColliderCookingOptions  UnityEngine::MeshColliderCookingOptions::CookForFasterSimulation{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::MeshColliderCookingOptions  UnityEngine::MeshColliderCookingOptions::EnableMeshCleaning{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::MeshColliderCookingOptions  UnityEngine::MeshColliderCookingOptions::WeldColocatedVertices{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::MeshColliderCookingOptions  UnityEngine::MeshColliderCookingOptions::UseFastMidphase{static_cast<int32_t>(0x10)};
