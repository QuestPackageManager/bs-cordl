#pragma once
// IWYU pragma private; include "UnityEngine/ApplicationSandboxType.hpp"
#include "UnityEngine/zzzz__ApplicationSandboxType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ApplicationSandboxType::ApplicationSandboxType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ApplicationSandboxType::ApplicationSandboxType()   {
}
constexpr ::UnityEngine::ApplicationSandboxType  UnityEngine::ApplicationSandboxType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ApplicationSandboxType  UnityEngine::ApplicationSandboxType::NotSandboxed{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ApplicationSandboxType  UnityEngine::ApplicationSandboxType::Sandboxed{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ApplicationSandboxType  UnityEngine::ApplicationSandboxType::SandboxBroken{static_cast<int32_t>(0x3)};
