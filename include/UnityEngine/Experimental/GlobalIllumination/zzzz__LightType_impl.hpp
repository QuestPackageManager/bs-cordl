#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/LightType.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType::LightType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType::LightType()   {
}
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Directional{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Point{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Spot{static_cast<uint8_t>(0x2u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Rectangle{static_cast<uint8_t>(0x3u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Disc{static_cast<uint8_t>(0x4u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::SpotPyramidShape{static_cast<uint8_t>(0x5u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::SpotBoxShape{static_cast<uint8_t>(0x6u)};
