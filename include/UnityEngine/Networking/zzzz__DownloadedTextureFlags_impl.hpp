#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadedTextureFlags.hpp"
#include "UnityEngine/Networking/zzzz__DownloadedTextureFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Networking::DownloadedTextureFlags::DownloadedTextureFlags(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::DownloadedTextureFlags::DownloadedTextureFlags() {}
constexpr ::UnityEngine::Networking::DownloadedTextureFlags UnityEngine::Networking::DownloadedTextureFlags::None{ static_cast<uint32_t>(0x0u) };
constexpr ::UnityEngine::Networking::DownloadedTextureFlags UnityEngine::Networking::DownloadedTextureFlags::Readable{ static_cast<uint32_t>(0x1u) };
constexpr ::UnityEngine::Networking::DownloadedTextureFlags UnityEngine::Networking::DownloadedTextureFlags::MipmapChain{ static_cast<uint32_t>(0x2u) };
constexpr ::UnityEngine::Networking::DownloadedTextureFlags UnityEngine::Networking::DownloadedTextureFlags::LinearColorSpace{ static_cast<uint32_t>(0x4u) };
