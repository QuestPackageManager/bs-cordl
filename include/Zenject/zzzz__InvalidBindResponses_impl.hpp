#pragma once
#include "Zenject/zzzz__InvalidBindResponses_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::InvalidBindResponses::InvalidBindResponses(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::InvalidBindResponses::InvalidBindResponses() {}
constexpr ::Zenject::InvalidBindResponses Zenject::InvalidBindResponses::_cordl_Assert{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::InvalidBindResponses Zenject::InvalidBindResponses::Skip{ static_cast<int32_t>(0x1) };
