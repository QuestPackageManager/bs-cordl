#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationContext.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags::MeshGenerationContext_MeshFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags::MeshGenerationContext_MeshFlags() {}
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags UnityEngine::UIElements::MeshGenerationContext_MeshFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags UnityEngine::UIElements::MeshGenerationContext_MeshFlags::SkipDynamicAtlas{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags UnityEngine::UIElements::MeshGenerationContext_MeshFlags::IsUsingVectorImageGradients{ static_cast<int32_t>(0x4) };
