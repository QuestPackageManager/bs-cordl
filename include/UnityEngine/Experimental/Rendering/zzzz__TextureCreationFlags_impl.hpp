#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags::TextureCreationFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags::TextureCreationFlags()   {
}
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::MipChain{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::DontInitializePixels{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::Crunch{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::DontUploadUponCreate{static_cast<int32_t>(0x400)};
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::IgnoreMipmapLimit{static_cast<int32_t>(0x800)};
