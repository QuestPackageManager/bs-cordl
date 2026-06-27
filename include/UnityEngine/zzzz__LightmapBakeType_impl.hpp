#pragma once
// IWYU pragma private; include "UnityEngine/LightmapBakeType.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightmapBakeType::LightmapBakeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightmapBakeType::LightmapBakeType()   {
}
constexpr ::UnityEngine::LightmapBakeType  UnityEngine::LightmapBakeType::Realtime{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::LightmapBakeType  UnityEngine::LightmapBakeType::Baked{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::LightmapBakeType  UnityEngine::LightmapBakeType::Mixed{static_cast<int32_t>(0x1)};
