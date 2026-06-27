#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DeltaSpeed.hpp"
#include "UnityEngine/UIElements/zzzz__DeltaSpeed_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DeltaSpeed::DeltaSpeed(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DeltaSpeed::DeltaSpeed()   {
}
constexpr ::UnityEngine::UIElements::DeltaSpeed  UnityEngine::UIElements::DeltaSpeed::Fast{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::DeltaSpeed  UnityEngine::UIElements::DeltaSpeed::Normal{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::DeltaSpeed  UnityEngine::UIElements::DeltaSpeed::Slow{static_cast<int32_t>(0x2)};
