#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/TEXTURE_DEVICE.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE::TEXTURE_DEVICE(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE::TEXTURE_DEVICE() {}
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE LIV::SDK::Unity::TEXTURE_DEVICE::UNDEFINED{ static_cast<uint32_t>(0x3020100u) };
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE LIV::SDK::Unity::TEXTURE_DEVICE::RAW{ static_cast<uint32_t>(0x4030201u) };
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE LIV::SDK::Unity::TEXTURE_DEVICE::DIRECTX{ static_cast<uint32_t>(0x5040302u) };
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE LIV::SDK::Unity::TEXTURE_DEVICE::OPENGL{ static_cast<uint32_t>(0x50403u) };
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE LIV::SDK::Unity::TEXTURE_DEVICE::VULKAN{ static_cast<uint32_t>(0x1000504u) };
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE LIV::SDK::Unity::TEXTURE_DEVICE::METAL{ static_cast<uint32_t>(0x2010005u) };
