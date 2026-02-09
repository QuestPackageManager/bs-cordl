#pragma once
// IWYU pragma private; include "UnityEngine/ColorGamut.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ColorGamut::ColorGamut(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ColorGamut::ColorGamut()   {
}
constexpr ::UnityEngine::ColorGamut  UnityEngine::ColorGamut::sRGB{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ColorGamut  UnityEngine::ColorGamut::Rec709{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ColorGamut  UnityEngine::ColorGamut::Rec2020{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ColorGamut  UnityEngine::ColorGamut::DisplayP3{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::ColorGamut  UnityEngine::ColorGamut::HDR10{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::ColorGamut  UnityEngine::ColorGamut::DolbyHDR{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::ColorGamut  UnityEngine::ColorGamut::P3D65G22{static_cast<int32_t>(0x6)};
