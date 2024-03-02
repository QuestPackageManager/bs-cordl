#pragma once
#include "UnityEngineInternal/zzzz__LightmapType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::LightmapType::LightmapType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::LightmapType::LightmapType() {}
constexpr ::UnityEngineInternal::LightmapType UnityEngineInternal::LightmapType::NoLightmap{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngineInternal::LightmapType UnityEngineInternal::LightmapType::StaticLightmap{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngineInternal::LightmapType UnityEngineInternal::LightmapType::DynamicLightmap{ static_cast<int32_t>(0x1) };
