#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingProjectionType.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingProjectionType::BatchCullingProjectionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingProjectionType::BatchCullingProjectionType()   {
}
constexpr ::UnityEngine::Rendering::BatchCullingProjectionType  UnityEngine::Rendering::BatchCullingProjectionType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::BatchCullingProjectionType  UnityEngine::Rendering::BatchCullingProjectionType::Perspective{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::BatchCullingProjectionType  UnityEngine::Rendering::BatchCullingProjectionType::Orthographic{static_cast<int32_t>(0x2)};
