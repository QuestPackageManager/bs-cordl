#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/TEXTURE_TYPE.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_TYPE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::TEXTURE_TYPE::TEXTURE_TYPE(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::TEXTURE_TYPE::TEXTURE_TYPE()   {
}
constexpr ::LIV::SDK::Unity::TEXTURE_TYPE  LIV::SDK::Unity::TEXTURE_TYPE::UNDEFINED{static_cast<uint32_t>(0x0u)};
constexpr ::LIV::SDK::Unity::TEXTURE_TYPE  LIV::SDK::Unity::TEXTURE_TYPE::COLOR_BUFFER{static_cast<uint32_t>(0x1u)};
