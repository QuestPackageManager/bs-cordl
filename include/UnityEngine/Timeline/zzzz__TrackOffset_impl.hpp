#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackOffset.hpp"
#include "UnityEngine/Timeline/zzzz__TrackOffset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TrackOffset::TrackOffset(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackOffset::TrackOffset()   {
}
constexpr ::UnityEngine::Timeline::TrackOffset  UnityEngine::Timeline::TrackOffset::ApplyTransformOffsets{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::TrackOffset  UnityEngine::Timeline::TrackOffset::ApplySceneOffsets{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::TrackOffset  UnityEngine::Timeline::TrackOffset::Auto{static_cast<int32_t>(0x2)};
