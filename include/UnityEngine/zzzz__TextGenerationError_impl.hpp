#pragma once
// IWYU pragma private; include "UnityEngine/TextGenerationError.hpp"
#include "UnityEngine/zzzz__TextGenerationError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextGenerationError::TextGenerationError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextGenerationError::TextGenerationError()   {
}
constexpr ::UnityEngine::TextGenerationError  UnityEngine::TextGenerationError::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextGenerationError  UnityEngine::TextGenerationError::CustomSizeOnNonDynamicFont{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextGenerationError  UnityEngine::TextGenerationError::CustomStyleOnNonDynamicFont{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextGenerationError  UnityEngine::TextGenerationError::NoFont{static_cast<int32_t>(0x4)};
