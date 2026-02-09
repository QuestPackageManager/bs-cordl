#pragma once
// IWYU pragma private; include "UnityEngine/AnimationEventSource.hpp"
#include "UnityEngine/zzzz__AnimationEventSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimationEventSource::AnimationEventSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationEventSource::AnimationEventSource()   {
}
constexpr ::UnityEngine::AnimationEventSource  UnityEngine::AnimationEventSource::NoSource{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AnimationEventSource  UnityEngine::AnimationEventSource::Legacy{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AnimationEventSource  UnityEngine::AnimationEventSource::Animator{static_cast<int32_t>(0x2)};
