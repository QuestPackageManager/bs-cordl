#pragma once
// IWYU pragma private; include "UnityEngine/ApplicationInstallMode.hpp"
#include "UnityEngine/zzzz__ApplicationInstallMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ApplicationInstallMode::ApplicationInstallMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ApplicationInstallMode::ApplicationInstallMode()   {
}
constexpr ::UnityEngine::ApplicationInstallMode  UnityEngine::ApplicationInstallMode::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ApplicationInstallMode  UnityEngine::ApplicationInstallMode::Store{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ApplicationInstallMode  UnityEngine::ApplicationInstallMode::DeveloperBuild{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ApplicationInstallMode  UnityEngine::ApplicationInstallMode::Adhoc{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::ApplicationInstallMode  UnityEngine::ApplicationInstallMode::Enterprise{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::ApplicationInstallMode  UnityEngine::ApplicationInstallMode::Editor{static_cast<int32_t>(0x5)};
