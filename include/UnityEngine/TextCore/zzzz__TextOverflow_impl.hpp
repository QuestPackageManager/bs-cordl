#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/TextOverflow.hpp"
#include "UnityEngine/TextCore/zzzz__TextOverflow_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::TextOverflow::TextOverflow(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::TextOverflow::TextOverflow() {}
constexpr ::UnityEngine::TextCore::TextOverflow UnityEngine::TextCore::TextOverflow::Clip{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::TextOverflow UnityEngine::TextCore::TextOverflow::Ellipsis{ static_cast<int32_t>(0x1) };
