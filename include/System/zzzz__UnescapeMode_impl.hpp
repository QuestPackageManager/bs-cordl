#pragma once
// IWYU pragma private; include "System/UnescapeMode.hpp"
#include "System/zzzz__UnescapeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UnescapeMode::UnescapeMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::UnescapeMode::UnescapeMode()   {
}
constexpr ::System::UnescapeMode  System::UnescapeMode::CopyOnly{static_cast<int32_t>(0x0)};
constexpr ::System::UnescapeMode  System::UnescapeMode::Escape{static_cast<int32_t>(0x1)};
constexpr ::System::UnescapeMode  System::UnescapeMode::Unescape{static_cast<int32_t>(0x2)};
constexpr ::System::UnescapeMode  System::UnescapeMode::EscapeUnescape{static_cast<int32_t>(0x3)};
constexpr ::System::UnescapeMode  System::UnescapeMode::V1ToStringFlag{static_cast<int32_t>(0x4)};
constexpr ::System::UnescapeMode  System::UnescapeMode::UnescapeAll{static_cast<int32_t>(0x8)};
constexpr ::System::UnescapeMode  System::UnescapeMode::UnescapeAllOrThrow{static_cast<int32_t>(0x18)};
