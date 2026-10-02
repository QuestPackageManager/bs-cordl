#pragma once
// IWYU pragma private; include "UnityEngine/Audio/DisposeArguments.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__DisposeArguments_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
// Ctor Parameters [CppParam { name: "ControlContext", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Self", ty:
// "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::DisposeArguments::DisposeArguments(::UnityEngine::Audio::ControlHeader* ControlContext, ::Unity::Audio::Handle Self) noexcept {
  this->ControlContext = ControlContext;
  this->Self = Self;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::DisposeArguments::DisposeArguments() {}
