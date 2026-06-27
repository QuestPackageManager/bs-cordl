#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AppliedOffsetMode.hpp"
#include "UnityEngine/Timeline/zzzz__AppliedOffsetMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::AppliedOffsetMode::AppliedOffsetMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AppliedOffsetMode::AppliedOffsetMode()   {
}
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::NoRootTransform{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::TransformOffset{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffset{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::TransformOffsetLegacy{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffsetLegacy{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffsetEditor{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Timeline::AppliedOffsetMode  UnityEngine::Timeline::AppliedOffsetMode::SceneOffsetLegacyEditor{static_cast<int32_t>(0x6)};
