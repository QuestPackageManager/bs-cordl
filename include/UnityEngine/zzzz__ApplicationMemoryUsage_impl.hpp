#pragma once
// IWYU pragma private; include "UnityEngine/ApplicationMemoryUsage.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ApplicationMemoryUsage::ApplicationMemoryUsage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ApplicationMemoryUsage::ApplicationMemoryUsage()   {
}
constexpr ::UnityEngine::ApplicationMemoryUsage  UnityEngine::ApplicationMemoryUsage::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ApplicationMemoryUsage  UnityEngine::ApplicationMemoryUsage::Low{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ApplicationMemoryUsage  UnityEngine::ApplicationMemoryUsage::Medium{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ApplicationMemoryUsage  UnityEngine::ApplicationMemoryUsage::High{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::ApplicationMemoryUsage  UnityEngine::ApplicationMemoryUsage::Critical{static_cast<int32_t>(0x4)};
