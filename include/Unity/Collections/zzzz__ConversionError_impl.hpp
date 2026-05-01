#pragma once
// IWYU pragma private; include "Unity/Collections/ConversionError.hpp"
#include "Unity/Collections/zzzz__ConversionError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::ConversionError::ConversionError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Collections::ConversionError::ConversionError() {}
constexpr ::Unity::Collections::ConversionError Unity::Collections::ConversionError::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Collections::ConversionError Unity::Collections::ConversionError::Overflow{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Collections::ConversionError Unity::Collections::ConversionError::Encoding{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Collections::ConversionError Unity::Collections::ConversionError::CodePoint{ static_cast<int32_t>(0x3) };
