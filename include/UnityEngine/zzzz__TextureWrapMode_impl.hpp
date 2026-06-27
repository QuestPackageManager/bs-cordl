#pragma once
// IWYU pragma private; include "UnityEngine/TextureWrapMode.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextureWrapMode::TextureWrapMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextureWrapMode::TextureWrapMode()   {
}
constexpr ::UnityEngine::TextureWrapMode  UnityEngine::TextureWrapMode::Repeat{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextureWrapMode  UnityEngine::TextureWrapMode::Clamp{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextureWrapMode  UnityEngine::TextureWrapMode::Mirror{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextureWrapMode  UnityEngine::TextureWrapMode::MirrorOnce{static_cast<int32_t>(0x3)};
