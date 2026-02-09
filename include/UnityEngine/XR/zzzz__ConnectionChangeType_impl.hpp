#pragma once
// IWYU pragma private; include "UnityEngine/XR/ConnectionChangeType.hpp"
#include "UnityEngine/XR/zzzz__ConnectionChangeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::ConnectionChangeType::ConnectionChangeType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::ConnectionChangeType::ConnectionChangeType()   {
}
constexpr ::UnityEngine::XR::ConnectionChangeType  UnityEngine::XR::ConnectionChangeType::Connected{static_cast<uint32_t>(0x0u)};
constexpr ::UnityEngine::XR::ConnectionChangeType  UnityEngine::XR::ConnectionChangeType::Disconnected{static_cast<uint32_t>(0x1u)};
constexpr ::UnityEngine::XR::ConnectionChangeType  UnityEngine::XR::ConnectionChangeType::ConfigChange{static_cast<uint32_t>(0x2u)};
