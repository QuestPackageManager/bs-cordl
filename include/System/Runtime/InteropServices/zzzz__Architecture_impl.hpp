#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/Architecture.hpp"
#include "System/Runtime/InteropServices/zzzz__Architecture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::Architecture::Architecture(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::Architecture::Architecture()   {
}
constexpr ::System::Runtime::InteropServices::Architecture  System::Runtime::InteropServices::Architecture::X86{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::InteropServices::Architecture  System::Runtime::InteropServices::Architecture::X64{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::InteropServices::Architecture  System::Runtime::InteropServices::Architecture::Arm{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::Architecture  System::Runtime::InteropServices::Architecture::Arm64{static_cast<int32_t>(0x3)};
