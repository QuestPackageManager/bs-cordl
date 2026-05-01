#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/HorizontalAlignment.hpp"
#include "UnityEngine/TextCore/zzzz__HorizontalAlignment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::HorizontalAlignment::HorizontalAlignment(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::HorizontalAlignment::HorizontalAlignment() {}
constexpr ::UnityEngine::TextCore::HorizontalAlignment UnityEngine::TextCore::HorizontalAlignment::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::HorizontalAlignment UnityEngine::TextCore::HorizontalAlignment::Center{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::HorizontalAlignment UnityEngine::TextCore::HorizontalAlignment::Right{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TextCore::HorizontalAlignment UnityEngine::TextCore::HorizontalAlignment::Justified{ static_cast<int32_t>(0x3) };
