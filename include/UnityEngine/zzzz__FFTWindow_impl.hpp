#pragma once
// IWYU pragma private; include "UnityEngine/FFTWindow.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FFTWindow::FFTWindow(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::FFTWindow::FFTWindow()   {
}
constexpr ::UnityEngine::FFTWindow  UnityEngine::FFTWindow::Rectangular{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::FFTWindow  UnityEngine::FFTWindow::Triangle{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::FFTWindow  UnityEngine::FFTWindow::Hamming{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::FFTWindow  UnityEngine::FFTWindow::Hanning{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::FFTWindow  UnityEngine::FFTWindow::Blackman{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::FFTWindow  UnityEngine::FFTWindow::BlackmanHarris{static_cast<int32_t>(0x5)};
