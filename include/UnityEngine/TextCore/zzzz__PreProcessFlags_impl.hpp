#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/PreProcessFlags.hpp"
#include "UnityEngine/TextCore/zzzz__PreProcessFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::PreProcessFlags::PreProcessFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::PreProcessFlags::PreProcessFlags() {}
constexpr ::UnityEngine::TextCore::PreProcessFlags UnityEngine::TextCore::PreProcessFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::PreProcessFlags UnityEngine::TextCore::PreProcessFlags::CollapseWhiteSpaces{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::PreProcessFlags UnityEngine::TextCore::PreProcessFlags::ParseEscapeSequences{ static_cast<int32_t>(0x2) };
