#pragma once
#include "UnityEngine/zzzz__LineAlignment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LineAlignment::LineAlignment(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LineAlignment::LineAlignment() {}
constexpr ::UnityEngine::LineAlignment UnityEngine::LineAlignment::View{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LineAlignment UnityEngine::LineAlignment::Local{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LineAlignment UnityEngine::LineAlignment::TransformZ{ static_cast<int32_t>(0x1) };
