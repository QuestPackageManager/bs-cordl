#pragma once
// IWYU pragma private; include "UnityEngine/SkinWeights.hpp"
#include "UnityEngine/zzzz__SkinWeights_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SkinWeights::SkinWeights(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SkinWeights::SkinWeights() {}
constexpr ::UnityEngine::SkinWeights UnityEngine::SkinWeights::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SkinWeights UnityEngine::SkinWeights::OneBone{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SkinWeights UnityEngine::SkinWeights::TwoBones{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::SkinWeights UnityEngine::SkinWeights::FourBones{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::SkinWeights UnityEngine::SkinWeights::Unlimited{ static_cast<int32_t>(0xff) };
