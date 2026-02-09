#pragma once
// IWYU pragma private; include "UnityEngine/ColorSpace.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ColorSpace::ColorSpace(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ColorSpace::ColorSpace()   {
}
constexpr ::UnityEngine::ColorSpace  UnityEngine::ColorSpace::Uninitialized{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityEngine::ColorSpace  UnityEngine::ColorSpace::Gamma{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ColorSpace  UnityEngine::ColorSpace::Linear{static_cast<int32_t>(0x1)};
