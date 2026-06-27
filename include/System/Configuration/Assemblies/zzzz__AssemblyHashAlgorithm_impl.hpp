#pragma once
// IWYU pragma private; include "System/Configuration/Assemblies/AssemblyHashAlgorithm.hpp"
#include "System/Configuration/Assemblies/zzzz__AssemblyHashAlgorithm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm::AssemblyHashAlgorithm(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm::AssemblyHashAlgorithm()   {
}
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::None{static_cast<int32_t>(0x0)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::MD5{static_cast<int32_t>(0x8003)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA1{static_cast<int32_t>(0x8004)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA256{static_cast<int32_t>(0x800c)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA384{static_cast<int32_t>(0x800d)};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA512{static_cast<int32_t>(0x800e)};
