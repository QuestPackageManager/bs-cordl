#pragma once
// IWYU pragma private; include "UnityEngine/TextureColorSpace.hpp"
#include "UnityEngine/zzzz__TextureColorSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextureColorSpace::TextureColorSpace(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextureColorSpace::TextureColorSpace()   {
}
constexpr ::UnityEngine::TextureColorSpace  UnityEngine::TextureColorSpace::Linear{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextureColorSpace  UnityEngine::TextureColorSpace::sRGB{static_cast<int32_t>(0x1)};
