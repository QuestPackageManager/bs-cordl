#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassBreakReason.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::PassBreakReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::PassBreakReason() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::NotOptimized{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::TargetSizeMismatch{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::NextPassReadsTexture{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::NonRasterPass{
  static_cast<int32_t>(0x3)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::DifferentDepthTextures{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::AttachmentLimitReached{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason
    UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::SubPassLimitReached{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::EndOfGraph{
  static_cast<int32_t>(0x7)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::FRStateMismatch{
  static_cast<int32_t>(0x8)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::Merged{
  static_cast<int32_t>(0x9)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakReason::Count{
  static_cast<int32_t>(0xa)
};
