#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationCallbackType.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationCallbackType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MeshGenerationCallbackType::MeshGenerationCallbackType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationCallbackType::MeshGenerationCallbackType() {}
constexpr ::UnityEngine::UIElements::MeshGenerationCallbackType UnityEngine::UIElements::MeshGenerationCallbackType::Fork{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::MeshGenerationCallbackType UnityEngine::UIElements::MeshGenerationCallbackType::WorkThenFork{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::MeshGenerationCallbackType UnityEngine::UIElements::MeshGenerationCallbackType::Work{ static_cast<int32_t>(0x2) };
