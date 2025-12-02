#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/LoadReason.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__LoadReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason::LoadReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason::LoadReason() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason::InvalidReason{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason::LoadImported{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason::LoadPreviouslyWritten{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason::ClearImported{
  static_cast<int32_t>(0x3)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason::ClearCreated{
  static_cast<int32_t>(0x4)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason::FullyRewritten{
  static_cast<int32_t>(0x5)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::LoadReason::Count{
  static_cast<int32_t>(0x6)
};
