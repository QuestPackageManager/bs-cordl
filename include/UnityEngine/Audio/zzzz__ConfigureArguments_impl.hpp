#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ConfigureArguments.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_impl.hpp"
#include "UnityEngine/Audio/zzzz__ConfigureArguments_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
// Ctor Parameters [CppParam { name: "Now", ty: "::UnityEngine::AudioConfiguration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ControlContext", ty:
// "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ConfigureArguments::ConfigureArguments(::UnityEngine::AudioConfiguration Now, ::UnityEngine::Audio::ControlHeader* ControlContext) noexcept {
  this->Now = Now;
  this->ControlContext = ControlContext;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ConfigureArguments::ConfigureArguments() {}
