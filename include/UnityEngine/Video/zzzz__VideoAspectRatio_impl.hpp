#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoAspectRatio.hpp"
#include "UnityEngine/Video/zzzz__VideoAspectRatio_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::VideoAspectRatio::VideoAspectRatio(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoAspectRatio::VideoAspectRatio()   {
}
constexpr ::UnityEngine::Video::VideoAspectRatio  UnityEngine::Video::VideoAspectRatio::NoScaling{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Video::VideoAspectRatio  UnityEngine::Video::VideoAspectRatio::FitVertically{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Video::VideoAspectRatio  UnityEngine::Video::VideoAspectRatio::FitHorizontally{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Video::VideoAspectRatio  UnityEngine::Video::VideoAspectRatio::FitInside{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Video::VideoAspectRatio  UnityEngine::Video::VideoAspectRatio::FitOutside{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Video::VideoAspectRatio  UnityEngine::Video::VideoAspectRatio::Stretch{static_cast<int32_t>(0x5)};
