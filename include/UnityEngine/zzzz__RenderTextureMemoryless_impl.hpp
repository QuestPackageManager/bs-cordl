#pragma once
// IWYU pragma private; include "UnityEngine/RenderTextureMemoryless.hpp"
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderTextureMemoryless::RenderTextureMemoryless(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderTextureMemoryless::RenderTextureMemoryless()   {
}
constexpr ::UnityEngine::RenderTextureMemoryless  UnityEngine::RenderTextureMemoryless::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RenderTextureMemoryless  UnityEngine::RenderTextureMemoryless::Color{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RenderTextureMemoryless  UnityEngine::RenderTextureMemoryless::Depth{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::RenderTextureMemoryless  UnityEngine::RenderTextureMemoryless::MSAA{static_cast<int32_t>(0x4)};
