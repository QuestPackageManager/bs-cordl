#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/PRIORITY.hpp"
#include "LIV/SDK/Unity/zzzz__PRIORITY_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::PRIORITY::PRIORITY(int8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::PRIORITY::PRIORITY()   {
}
constexpr ::LIV::SDK::Unity::PRIORITY  LIV::SDK::Unity::PRIORITY::NONE{static_cast<int8_t>(0x0)};
constexpr ::LIV::SDK::Unity::PRIORITY  LIV::SDK::Unity::PRIORITY::GAME{static_cast<int8_t>(0x3f)};
