#pragma once
#include "UnityEngine/zzzz__SkinQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SkinQuality::SkinQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SkinQuality::SkinQuality() {}
constexpr ::UnityEngine::SkinQuality UnityEngine::SkinQuality::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SkinQuality UnityEngine::SkinQuality::Bone1{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SkinQuality UnityEngine::SkinQuality::Bone2{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::SkinQuality UnityEngine::SkinQuality::Bone4{ static_cast<int32_t>(0x4) };
