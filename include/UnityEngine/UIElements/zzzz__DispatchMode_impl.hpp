#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DispatchMode.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DispatchMode::DispatchMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DispatchMode::DispatchMode()   {
}
constexpr ::UnityEngine::UIElements::DispatchMode  UnityEngine::UIElements::DispatchMode::Default{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::DispatchMode  UnityEngine::UIElements::DispatchMode::Queued{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::DispatchMode  UnityEngine::UIElements::DispatchMode::Immediate{static_cast<int32_t>(0x2)};
