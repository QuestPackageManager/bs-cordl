#pragma once
// IWYU pragma private; include "UnityEngine/AdditionalCanvasShaderChannels.hpp"
#include "UnityEngine/zzzz__AdditionalCanvasShaderChannels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AdditionalCanvasShaderChannels::AdditionalCanvasShaderChannels(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AdditionalCanvasShaderChannels::AdditionalCanvasShaderChannels()   {
}
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::TexCoord1{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::TexCoord2{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::TexCoord3{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::Normal{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::AdditionalCanvasShaderChannels  UnityEngine::AdditionalCanvasShaderChannels::Tangent{static_cast<int32_t>(0x10)};
