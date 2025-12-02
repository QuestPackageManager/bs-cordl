#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/StoreReason.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__StoreReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::StoreReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::StoreReason() {}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::InvalidReason{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::StoreImported{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::StoreUsedByLaterPass{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::DiscardImported{
  static_cast<int32_t>(0x3)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::DiscardUnused{
  static_cast<int32_t>(0x4)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::DiscardBindMs{
  static_cast<int32_t>(0x5)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::NoMSAABuffer{
  static_cast<int32_t>(0x6)
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::StoreReason::Count{
  static_cast<int32_t>(0x7)
};
