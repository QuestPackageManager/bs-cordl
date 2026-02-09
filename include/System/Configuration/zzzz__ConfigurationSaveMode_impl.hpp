#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationSaveMode.hpp"
#include "System/Configuration/zzzz__ConfigurationSaveMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Configuration::ConfigurationSaveMode::ConfigurationSaveMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigurationSaveMode::ConfigurationSaveMode()   {
}
constexpr ::System::Configuration::ConfigurationSaveMode  System::Configuration::ConfigurationSaveMode::Full{static_cast<int32_t>(0x2)};
constexpr ::System::Configuration::ConfigurationSaveMode  System::Configuration::ConfigurationSaveMode::Minimal{static_cast<int32_t>(0x1)};
constexpr ::System::Configuration::ConfigurationSaveMode  System::Configuration::ConfigurationSaveMode::Modified{static_cast<int32_t>(0x0)};
