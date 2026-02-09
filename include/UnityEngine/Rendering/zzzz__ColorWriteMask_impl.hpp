#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ColorWriteMask.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ColorWriteMask::ColorWriteMask(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ColorWriteMask::ColorWriteMask()   {
}
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::Alpha{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::Blue{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::Green{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::Red{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::ColorWriteMask  UnityEngine::Rendering::ColorWriteMask::All{static_cast<int32_t>(0xf)};
