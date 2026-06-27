#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ClipCaps.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::ClipCaps::ClipCaps(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ClipCaps::ClipCaps()   {
}
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::Looping{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::Extrapolation{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::ClipIn{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::SpeedMultiplier{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::Blending{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::AutoScale{static_cast<int32_t>(0x28)};
constexpr ::UnityEngine::Timeline::ClipCaps  UnityEngine::Timeline::ClipCaps::All{static_cast<int32_t>(0xffffffff)};
