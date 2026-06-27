#pragma once
// IWYU pragma private; include "System/Configuration/Assemblies/AssemblyVersionCompatibility.hpp"
#include "System/Configuration/Assemblies/zzzz__AssemblyVersionCompatibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility::AssemblyVersionCompatibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility::AssemblyVersionCompatibility()   {
}
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility  System::Configuration::Assemblies::AssemblyVersionCompatibility::SameMachine{static_cast<int32_t>(0x1)};
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility  System::Configuration::Assemblies::AssemblyVersionCompatibility::SameProcess{static_cast<int32_t>(0x2)};
constexpr ::System::Configuration::Assemblies::AssemblyVersionCompatibility  System::Configuration::Assemblies::AssemblyVersionCompatibility::SameDomain{static_cast<int32_t>(0x3)};
