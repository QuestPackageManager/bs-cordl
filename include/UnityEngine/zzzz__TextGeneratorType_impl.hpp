#pragma once
// IWYU pragma private; include "UnityEngine/TextGeneratorType.hpp"
#include "UnityEngine/zzzz__TextGeneratorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextGeneratorType::TextGeneratorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextGeneratorType::TextGeneratorType() {}
constexpr ::UnityEngine::TextGeneratorType UnityEngine::TextGeneratorType::Standard{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextGeneratorType UnityEngine::TextGeneratorType::Advanced{ static_cast<int32_t>(0x1) };
