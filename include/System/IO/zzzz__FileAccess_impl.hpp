#pragma once
// IWYU pragma private; include "System/IO/FileAccess.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileAccess::FileAccess(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::FileAccess::FileAccess()   {
}
constexpr ::System::IO::FileAccess  System::IO::FileAccess::Read{static_cast<int32_t>(0x1)};
constexpr ::System::IO::FileAccess  System::IO::FileAccess::Write{static_cast<int32_t>(0x2)};
constexpr ::System::IO::FileAccess  System::IO::FileAccess::ReadWrite{static_cast<int32_t>(0x3)};
