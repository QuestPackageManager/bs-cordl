#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags::TextureCreationFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags::TextureCreationFlags() {}
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags UnityEngine::Experimental::Rendering::TextureCreationFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags UnityEngine::Experimental::Rendering::TextureCreationFlags::MipChain{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags UnityEngine::Experimental::Rendering::TextureCreationFlags::Crunch{ static_cast<int32_t>(0x40) };
