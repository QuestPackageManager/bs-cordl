#pragma once
#include "UnityEngine/zzzz__AnimationCullingType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimationCullingType::AnimationCullingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationCullingType::AnimationCullingType() {}
constexpr ::UnityEngine::AnimationCullingType UnityEngine::AnimationCullingType::AlwaysAnimate{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AnimationCullingType UnityEngine::AnimationCullingType::BasedOnRenderers{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AnimationCullingType UnityEngine::AnimationCullingType::BasedOnClipBounds{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::AnimationCullingType UnityEngine::AnimationCullingType::BasedOnUserBounds{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
