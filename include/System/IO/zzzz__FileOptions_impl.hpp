#pragma once
// IWYU pragma private; include "System/IO/FileOptions.hpp"
#include "System/IO/zzzz__FileOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileOptions::FileOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::FileOptions::FileOptions()   {
}
constexpr ::System::IO::FileOptions  System::IO::FileOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::WriteThrough{static_cast<int32_t>(0x80000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::Asynchronous{static_cast<int32_t>(0x40000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::RandomAccess{static_cast<int32_t>(0x10000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::DeleteOnClose{static_cast<int32_t>(0x4000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::SequentialScan{static_cast<int32_t>(0x8000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::Encrypted{static_cast<int32_t>(0x4000)};
