#pragma once
// IWYU pragma private; include "UnityEngine/CursorMode.hpp"
#include "UnityEngine/zzzz__CursorMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CursorMode::CursorMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CursorMode::CursorMode()   {
}
constexpr ::UnityEngine::CursorMode  UnityEngine::CursorMode::Auto{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CursorMode  UnityEngine::CursorMode::ForceSoftware{static_cast<int32_t>(0x1)};
