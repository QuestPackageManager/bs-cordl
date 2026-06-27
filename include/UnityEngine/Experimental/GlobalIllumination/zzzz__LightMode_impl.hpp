#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/LightMode.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode::LightMode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode::LightMode()   {
}
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode  UnityEngine::Experimental::GlobalIllumination::LightMode::Realtime{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode  UnityEngine::Experimental::GlobalIllumination::LightMode::Mixed{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode  UnityEngine::Experimental::GlobalIllumination::LightMode::Baked{static_cast<uint8_t>(0x2u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode  UnityEngine::Experimental::GlobalIllumination::LightMode::Unknown{static_cast<uint8_t>(0x3u)};
