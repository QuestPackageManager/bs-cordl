#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayState.hpp"
#include "UnityEngine/Playables/zzzz__PlayState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayState::PlayState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayState::PlayState()   {
}
constexpr ::UnityEngine::Playables::PlayState  UnityEngine::Playables::PlayState::Paused{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Playables::PlayState  UnityEngine::Playables::PlayState::Playing{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Playables::PlayState  UnityEngine::Playables::PlayState::Delayed{static_cast<int32_t>(0x2)};
