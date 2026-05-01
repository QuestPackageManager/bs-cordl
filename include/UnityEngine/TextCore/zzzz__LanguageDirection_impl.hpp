#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LanguageDirection.hpp"
#include "UnityEngine/TextCore/zzzz__LanguageDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LanguageDirection::LanguageDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LanguageDirection::LanguageDirection() {}
constexpr ::UnityEngine::TextCore::LanguageDirection UnityEngine::TextCore::LanguageDirection::LTR{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::LanguageDirection UnityEngine::TextCore::LanguageDirection::RTL{ static_cast<int32_t>(0x1) };
