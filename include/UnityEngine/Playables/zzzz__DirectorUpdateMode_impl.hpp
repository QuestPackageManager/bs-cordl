#pragma once
#include "UnityEngine/Playables/zzzz__DirectorUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::DirectorUpdateMode::DirectorUpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::DirectorUpdateMode::DirectorUpdateMode() {}
constexpr ::UnityEngine::Playables::DirectorUpdateMode UnityEngine::Playables::DirectorUpdateMode::DSPClock{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Playables::DirectorUpdateMode UnityEngine::Playables::DirectorUpdateMode::GameTime{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Playables::DirectorUpdateMode UnityEngine::Playables::DirectorUpdateMode::UnscaledGameTime{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Playables::DirectorUpdateMode UnityEngine::Playables::DirectorUpdateMode::Manual{ static_cast<int32_t>(0x3) };
