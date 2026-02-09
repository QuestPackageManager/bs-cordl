#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/TEXTURE_ID.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::TEXTURE_ID::TEXTURE_ID(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::TEXTURE_ID::TEXTURE_ID()   {
}
constexpr ::LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::UNDEFINED{static_cast<uint32_t>(0x0u)};
constexpr ::LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::BACKGROUND_COLOR_BUFFER_ID{static_cast<uint32_t>(0xau)};
constexpr ::LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::FOREGROUND_COLOR_BUFFER_ID{static_cast<uint32_t>(0x14u)};
constexpr ::LIV::SDK::Unity::TEXTURE_ID  LIV::SDK::Unity::TEXTURE_ID::OPTIMIZED_COLOR_BUFFER_ID{static_cast<uint32_t>(0x1eu)};
