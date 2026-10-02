#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/MarginDirection.hpp"
#include "UnityEngine/TextCore/zzzz__MarginDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::MarginDirection::MarginDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::MarginDirection::MarginDirection() {}
constexpr ::UnityEngine::TextCore::MarginDirection UnityEngine::TextCore::MarginDirection::Both{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::MarginDirection UnityEngine::TextCore::MarginDirection::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::MarginDirection UnityEngine::TextCore::MarginDirection::Right{ static_cast<int32_t>(0x2) };
