#pragma once
// IWYU pragma private; include "System/IO/FileMode.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileMode::FileMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::FileMode::FileMode()   {
}
constexpr ::System::IO::FileMode  System::IO::FileMode::CreateNew{static_cast<int32_t>(0x1)};
constexpr ::System::IO::FileMode  System::IO::FileMode::Create{static_cast<int32_t>(0x2)};
constexpr ::System::IO::FileMode  System::IO::FileMode::Open{static_cast<int32_t>(0x3)};
constexpr ::System::IO::FileMode  System::IO::FileMode::OpenOrCreate{static_cast<int32_t>(0x4)};
constexpr ::System::IO::FileMode  System::IO::FileMode::Truncate{static_cast<int32_t>(0x5)};
constexpr ::System::IO::FileMode  System::IO::FileMode::Append{static_cast<int32_t>(0x6)};
