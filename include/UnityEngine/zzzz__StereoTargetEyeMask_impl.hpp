#pragma once
// IWYU pragma private; include "UnityEngine/StereoTargetEyeMask.hpp"
#include "UnityEngine/zzzz__StereoTargetEyeMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::StereoTargetEyeMask::StereoTargetEyeMask(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::StereoTargetEyeMask::StereoTargetEyeMask()   {
}
constexpr ::UnityEngine::StereoTargetEyeMask  UnityEngine::StereoTargetEyeMask::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::StereoTargetEyeMask  UnityEngine::StereoTargetEyeMask::Left{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::StereoTargetEyeMask  UnityEngine::StereoTargetEyeMask::Right{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::StereoTargetEyeMask  UnityEngine::StereoTargetEyeMask::Both{static_cast<int32_t>(0x3)};
