#pragma once
// IWYU pragma private; include "UnityEngine/LogOption.hpp"
#include "UnityEngine/zzzz__LogOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LogOption::LogOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LogOption::LogOption()   {
}
constexpr ::UnityEngine::LogOption  UnityEngine::LogOption::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::LogOption  UnityEngine::LogOption::NoStacktrace{static_cast<int32_t>(0x1)};
