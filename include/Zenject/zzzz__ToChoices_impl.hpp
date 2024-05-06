#pragma once
// IWYU pragma private; include "Zenject/ToChoices.hpp"
#include "Zenject/zzzz__ToChoices_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::ToChoices::ToChoices(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::ToChoices::ToChoices() {}
constexpr ::Zenject::ToChoices Zenject::ToChoices::Self{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::ToChoices Zenject::ToChoices::Concrete{ static_cast<int32_t>(0x1) };
