#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassMergeState.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassMergeState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState::PassMergeState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState::PassMergeState() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState::None{
  static_cast<int32_t>(0xffffffff)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState::Begin{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState::SubPass{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassMergeState::End{
  static_cast<int32_t>(0x2)
};
