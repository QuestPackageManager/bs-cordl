#pragma once
// IWYU pragma private; include "UnityEngine/CameraClearFlags.hpp"
#include "UnityEngine/zzzz__CameraClearFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CameraClearFlags::CameraClearFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CameraClearFlags::CameraClearFlags()   {
}
constexpr ::UnityEngine::CameraClearFlags  UnityEngine::CameraClearFlags::Skybox{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CameraClearFlags  UnityEngine::CameraClearFlags::Color{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CameraClearFlags  UnityEngine::CameraClearFlags::SolidColor{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CameraClearFlags  UnityEngine::CameraClearFlags::Depth{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::CameraClearFlags  UnityEngine::CameraClearFlags::Nothing{static_cast<int32_t>(0x4)};
