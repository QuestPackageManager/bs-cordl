#pragma once
// IWYU pragma private; include "System/Reflection/ProcessorArchitecture.hpp"
#include "System/Reflection/zzzz__ProcessorArchitecture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::ProcessorArchitecture::ProcessorArchitecture(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::ProcessorArchitecture::ProcessorArchitecture()   {
}
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::MSIL{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::X86{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::IA64{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::Amd64{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::Arm{static_cast<int32_t>(0x5)};
