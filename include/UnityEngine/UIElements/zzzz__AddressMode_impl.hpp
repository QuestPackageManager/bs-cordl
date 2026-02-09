#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AddressMode.hpp"
#include "UnityEngine/UIElements/zzzz__AddressMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::AddressMode::AddressMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::AddressMode::AddressMode()   {
}
constexpr ::UnityEngine::UIElements::AddressMode  UnityEngine::UIElements::AddressMode::Wrap{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::AddressMode  UnityEngine::UIElements::AddressMode::Clamp{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::AddressMode  UnityEngine::UIElements::AddressMode::Mirror{static_cast<int32_t>(0x2)};
