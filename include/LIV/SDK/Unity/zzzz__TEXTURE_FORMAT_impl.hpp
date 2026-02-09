#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/TEXTURE_FORMAT.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_FORMAT_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::TEXTURE_FORMAT::TEXTURE_FORMAT(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::TEXTURE_FORMAT::TEXTURE_FORMAT()   {
}
constexpr ::LIV::SDK::Unity::TEXTURE_FORMAT  LIV::SDK::Unity::TEXTURE_FORMAT::UNDEFINED{static_cast<uint32_t>(0x0u)};
constexpr ::LIV::SDK::Unity::TEXTURE_FORMAT  LIV::SDK::Unity::TEXTURE_FORMAT::ARGB32{static_cast<uint32_t>(0xau)};
