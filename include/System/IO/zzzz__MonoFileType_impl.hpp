#pragma once
// IWYU pragma private; include "System/IO/MonoFileType.hpp"
#include "System/IO/zzzz__MonoFileType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MonoFileType::MonoFileType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::MonoFileType::MonoFileType()   {
}
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Disk{static_cast<int32_t>(0x1)};
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Char{static_cast<int32_t>(0x2)};
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Pipe{static_cast<int32_t>(0x3)};
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Remote{static_cast<int32_t>(0x8000)};
