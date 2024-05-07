#pragma once
// IWYU pragma private; include "Zenject/ValidationErrorResponses.hpp"
#include "Zenject/zzzz__ValidationErrorResponses_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::ValidationErrorResponses::ValidationErrorResponses(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::ValidationErrorResponses::ValidationErrorResponses() {}
constexpr ::Zenject::ValidationErrorResponses Zenject::ValidationErrorResponses::Log{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::ValidationErrorResponses Zenject::ValidationErrorResponses::Throw{ static_cast<int32_t>(0x1) };
