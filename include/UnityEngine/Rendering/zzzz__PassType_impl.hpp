#pragma once
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PassType::PassType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PassType::PassType() {}
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::Vertex{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::VertexLM{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::VertexLMRGBM{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::ForwardBase{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::ForwardAdd{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::LightPrePassBase{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::LightPrePassFinal{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::ShadowCaster{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::Deferred{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::Meta{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::MotionVectors{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::ScriptableRenderPipeline{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::ScriptableRenderPipelineDefaultUnlit{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::Rendering::PassType UnityEngine::Rendering::PassType::GrabPass{ static_cast<int32_t>(0xf) };
