#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/APVConstantBufferRegister.hpp"
#include "UnityEngine/Rendering/zzzz__APVConstantBufferRegister_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::APVConstantBufferRegister::APVConstantBufferRegister(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::APVConstantBufferRegister::APVConstantBufferRegister() {}
constexpr ::UnityEngine::Rendering::APVConstantBufferRegister UnityEngine::Rendering::APVConstantBufferRegister::GlobalRegister{ static_cast<int32_t>(0x6) };
