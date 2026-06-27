#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/FalloffType.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType::FalloffType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType::FalloffType()   {
}
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::InverseSquared{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::InverseSquaredNoRangeAttenuation{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::Linear{static_cast<uint8_t>(0x2u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::Legacy{static_cast<uint8_t>(0x3u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::Undefined{static_cast<uint8_t>(0x4u)};
