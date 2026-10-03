#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphState.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState::RenderGraphState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState::RenderGraphState() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState UnityEngine::Rendering::RenderGraphModule::RenderGraphState::Idle{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState UnityEngine::Rendering::RenderGraphModule::RenderGraphState::RecordingGraph{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState UnityEngine::Rendering::RenderGraphModule::RenderGraphState::RecordingPass{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState UnityEngine::Rendering::RenderGraphModule::RenderGraphState::Executing{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState UnityEngine::Rendering::RenderGraphModule::RenderGraphState::Active{ static_cast<int32_t>(0x7) };
