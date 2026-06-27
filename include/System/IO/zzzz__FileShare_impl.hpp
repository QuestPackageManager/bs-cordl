#pragma once
// IWYU pragma private; include "System/IO/FileShare.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileShare::FileShare(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::FileShare::FileShare()   {
}
constexpr ::System::IO::FileShare  System::IO::FileShare::None{static_cast<int32_t>(0x0)};
constexpr ::System::IO::FileShare  System::IO::FileShare::Read{static_cast<int32_t>(0x1)};
constexpr ::System::IO::FileShare  System::IO::FileShare::Write{static_cast<int32_t>(0x2)};
constexpr ::System::IO::FileShare  System::IO::FileShare::ReadWrite{static_cast<int32_t>(0x3)};
constexpr ::System::IO::FileShare  System::IO::FileShare::Delete{static_cast<int32_t>(0x4)};
constexpr ::System::IO::FileShare  System::IO::FileShare::Inheritable{static_cast<int32_t>(0x10)};
