#pragma once
// IWYU pragma private; include "Unity/Collections/ParseError.hpp"
#include "Unity/Collections/zzzz__ParseError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::ParseError::ParseError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Collections::ParseError::ParseError() {}
constexpr ::Unity::Collections::ParseError Unity::Collections::ParseError::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Collections::ParseError Unity::Collections::ParseError::Syntax{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Collections::ParseError Unity::Collections::ParseError::Overflow{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Collections::ParseError Unity::Collections::ParseError::Underflow{ static_cast<int32_t>(0x3) };
