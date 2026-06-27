#pragma once
// IWYU pragma private; include "UnityEngine/VRTextureUsage.hpp"
#include "UnityEngine/zzzz__VRTextureUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VRTextureUsage::VRTextureUsage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VRTextureUsage::VRTextureUsage()   {
}
constexpr ::UnityEngine::VRTextureUsage  UnityEngine::VRTextureUsage::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::VRTextureUsage  UnityEngine::VRTextureUsage::OneEye{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::VRTextureUsage  UnityEngine::VRTextureUsage::TwoEyes{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::VRTextureUsage  UnityEngine::VRTextureUsage::DeviceSpecific{static_cast<int32_t>(0x3)};
