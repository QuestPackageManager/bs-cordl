#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXSpace.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VFXSpace::VFXSpace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXSpace::VFXSpace() {}
constexpr ::UnityEngine::VFX::VFXSpace UnityEngine::VFX::VFXSpace::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::VFX::VFXSpace UnityEngine::VFX::VFXSpace::Local{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::VFXSpace UnityEngine::VFX::VFXSpace::World{ static_cast<int32_t>(0x1) };
