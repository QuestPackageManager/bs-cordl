#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/VerticalAlignment.hpp"
#include "UnityEngine/TextCore/zzzz__VerticalAlignment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::VerticalAlignment::VerticalAlignment(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::VerticalAlignment::VerticalAlignment() {}
constexpr ::UnityEngine::TextCore::VerticalAlignment UnityEngine::TextCore::VerticalAlignment::Top{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::VerticalAlignment UnityEngine::TextCore::VerticalAlignment::Middle{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::VerticalAlignment UnityEngine::TextCore::VerticalAlignment::Bottom{ static_cast<int32_t>(0x2) };
