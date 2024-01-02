#pragma once
#include "UnityEngine/zzzz__SpriteMaskInteraction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpriteMaskInteraction::SpriteMaskInteraction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpriteMaskInteraction::SpriteMaskInteraction() {}
constexpr ::UnityEngine::SpriteMaskInteraction UnityEngine::SpriteMaskInteraction::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpriteMaskInteraction UnityEngine::SpriteMaskInteraction::VisibleInsideMask{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpriteMaskInteraction UnityEngine::SpriteMaskInteraction::VisibleOutsideMask{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
