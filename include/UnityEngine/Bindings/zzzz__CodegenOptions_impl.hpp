#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/CodegenOptions.hpp"
#include "UnityEngine/Bindings/zzzz__CodegenOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Bindings::CodegenOptions::CodegenOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::CodegenOptions::CodegenOptions()   {
}
constexpr ::UnityEngine::Bindings::CodegenOptions  UnityEngine::Bindings::CodegenOptions::Auto{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Bindings::CodegenOptions  UnityEngine::Bindings::CodegenOptions::Custom{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Bindings::CodegenOptions  UnityEngine::Bindings::CodegenOptions::Force{static_cast<int32_t>(0x2)};
