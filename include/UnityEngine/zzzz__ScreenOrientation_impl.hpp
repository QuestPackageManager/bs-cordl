#pragma once
// IWYU pragma private; include "UnityEngine/ScreenOrientation.hpp"
#include "UnityEngine/zzzz__ScreenOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ScreenOrientation::ScreenOrientation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ScreenOrientation::ScreenOrientation()   {
}
constexpr ::UnityEngine::ScreenOrientation  UnityEngine::ScreenOrientation::Portrait{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ScreenOrientation  UnityEngine::ScreenOrientation::PortraitUpsideDown{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ScreenOrientation  UnityEngine::ScreenOrientation::LandscapeLeft{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::ScreenOrientation  UnityEngine::ScreenOrientation::LandscapeRight{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::ScreenOrientation  UnityEngine::ScreenOrientation::AutoRotation{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::ScreenOrientation  UnityEngine::ScreenOrientation::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ScreenOrientation  UnityEngine::ScreenOrientation::Landscape{static_cast<int32_t>(0x3)};
