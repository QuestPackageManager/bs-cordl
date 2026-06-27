#pragma once
// IWYU pragma private; include "UnityEngine/Space.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Space::Space(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Space::Space()   {
}
constexpr ::UnityEngine::Space  UnityEngine::Space::World{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Space  UnityEngine::Space::Self{static_cast<int32_t>(0x1)};
