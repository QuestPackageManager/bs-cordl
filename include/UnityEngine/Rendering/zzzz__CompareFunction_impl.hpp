#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CompareFunction.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CompareFunction::CompareFunction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CompareFunction::CompareFunction()   {
}
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Disabled{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Never{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Less{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Equal{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::LessEqual{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Greater{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::NotEqual{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::GreaterEqual{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Rendering::CompareFunction  UnityEngine::Rendering::CompareFunction::Always{static_cast<int32_t>(0x8)};
