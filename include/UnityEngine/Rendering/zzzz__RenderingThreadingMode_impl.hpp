#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderingThreadingMode.hpp"
#include "UnityEngine/Rendering/zzzz__RenderingThreadingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderingThreadingMode::RenderingThreadingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderingThreadingMode::RenderingThreadingMode() {}
constexpr ::UnityEngine::Rendering::RenderingThreadingMode UnityEngine::Rendering::RenderingThreadingMode::Direct{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderingThreadingMode UnityEngine::Rendering::RenderingThreadingMode::SingleThreaded{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::RenderingThreadingMode UnityEngine::Rendering::RenderingThreadingMode::MultiThreaded{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::RenderingThreadingMode UnityEngine::Rendering::RenderingThreadingMode::LegacyJobified{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::RenderingThreadingMode UnityEngine::Rendering::RenderingThreadingMode::NativeGraphicsJobs{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::RenderingThreadingMode UnityEngine::Rendering::RenderingThreadingMode::NativeGraphicsJobsWithoutRenderThread{ static_cast<int32_t>(0x5) };
