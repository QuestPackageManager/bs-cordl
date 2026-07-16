#pragma once
// IWYU pragma private; include "GlobalNamespace/NullAllowedContext.hpp"
#include "GlobalNamespace/zzzz__NullAllowedContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NullAllowedContext::NullAllowedContext(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowedContext::NullAllowedContext() {}
constexpr ::GlobalNamespace::NullAllowedContext GlobalNamespace::NullAllowedContext::Everywhere{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NullAllowedContext GlobalNamespace::NullAllowedContext::Prefab{ static_cast<int32_t>(0x1) };
