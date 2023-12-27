#pragma once
#include "UnityEngine/zzzz__FullScreenMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FullScreenMode::FullScreenMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::FullScreenMode::FullScreenMode() {}
constexpr ::UnityEngine::FullScreenMode UnityEngine::FullScreenMode::ExclusiveFullScreen{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::FullScreenMode UnityEngine::FullScreenMode::FullScreenWindow{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::FullScreenMode UnityEngine::FullScreenMode::MaximizedWindow{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::FullScreenMode UnityEngine::FullScreenMode::Windowed{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
