#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyNameFlags.hpp"
#include "System/Reflection/zzzz__AssemblyNameFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::AssemblyNameFlags::AssemblyNameFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyNameFlags::AssemblyNameFlags()   {
}
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::PublicKey{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::EnableJITcompileOptimizer{static_cast<int32_t>(0x4000)};
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::EnableJITcompileTracking{static_cast<int32_t>(0x8000)};
constexpr ::System::Reflection::AssemblyNameFlags  System::Reflection::AssemblyNameFlags::Retargetable{static_cast<int32_t>(0x100)};
