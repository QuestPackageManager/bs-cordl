#pragma once
// IWYU pragma private; include "UnityEngine/RenderTextureReadWrite.hpp"
#include "UnityEngine/zzzz__RenderTextureReadWrite_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderTextureReadWrite::RenderTextureReadWrite(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderTextureReadWrite::RenderTextureReadWrite()   {
}
constexpr ::UnityEngine::RenderTextureReadWrite  UnityEngine::RenderTextureReadWrite::Default{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RenderTextureReadWrite  UnityEngine::RenderTextureReadWrite::Linear{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RenderTextureReadWrite  UnityEngine::RenderTextureReadWrite::sRGB{static_cast<int32_t>(0x2)};
