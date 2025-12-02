#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/WhiteSpace.hpp"
#include "UnityEngine/TextCore/zzzz__WhiteSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::WhiteSpace::WhiteSpace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::WhiteSpace::WhiteSpace() {}
constexpr ::UnityEngine::TextCore::WhiteSpace UnityEngine::TextCore::WhiteSpace::Normal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextCore::WhiteSpace UnityEngine::TextCore::WhiteSpace::NoWrap{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextCore::WhiteSpace UnityEngine::TextCore::WhiteSpace::Pre{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TextCore::WhiteSpace UnityEngine::TextCore::WhiteSpace::PreWrap{ static_cast<int32_t>(0x3) };
