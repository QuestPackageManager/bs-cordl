#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackBindingFlags.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TrackBindingFlags::TrackBindingFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackBindingFlags::TrackBindingFlags()   {
}
constexpr ::UnityEngine::Timeline::TrackBindingFlags  UnityEngine::Timeline::TrackBindingFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::TrackBindingFlags  UnityEngine::Timeline::TrackBindingFlags::AllowCreateComponent{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::TrackBindingFlags  UnityEngine::Timeline::TrackBindingFlags::All{static_cast<int32_t>(0x1)};
