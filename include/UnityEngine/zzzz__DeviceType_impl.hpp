#pragma once
// IWYU pragma private; include "UnityEngine/DeviceType.hpp"
#include "UnityEngine/zzzz__DeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::DeviceType::DeviceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::DeviceType::DeviceType()   {
}
constexpr ::UnityEngine::DeviceType  UnityEngine::DeviceType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::DeviceType  UnityEngine::DeviceType::Handheld{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::DeviceType  UnityEngine::DeviceType::Console{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::DeviceType  UnityEngine::DeviceType::Desktop{static_cast<int32_t>(0x3)};
