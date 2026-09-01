#pragma once
// IWYU pragma private; include "UnityEngine\VFX\PlayableTimeSpace.hpp"
#include "UnityEngine/VFX/zzzz__PlayableTimeSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::PlayableTimeSpace::PlayableTimeSpace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::PlayableTimeSpace::PlayableTimeSpace() {}
constexpr ::UnityEngine::VFX::PlayableTimeSpace UnityEngine::VFX::PlayableTimeSpace::AfterClipStart{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::PlayableTimeSpace UnityEngine::VFX::PlayableTimeSpace::BeforeClipEnd{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::VFX::PlayableTimeSpace UnityEngine::VFX::PlayableTimeSpace::Percentage{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::VFX::PlayableTimeSpace UnityEngine::VFX::PlayableTimeSpace::Absolute{ static_cast<int32_t>(0x3) };
