#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndexFormat.hpp"
#include "UnityEngine/Rendering/zzzz__IndexFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndexFormat::IndexFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndexFormat::IndexFormat()   {
}
constexpr ::UnityEngine::Rendering::IndexFormat  UnityEngine::Rendering::IndexFormat::UInt16{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::IndexFormat  UnityEngine::Rendering::IndexFormat::UInt32{static_cast<int32_t>(0x1)};
