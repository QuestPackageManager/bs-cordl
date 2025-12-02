#pragma once
// IWYU pragma private; include "Unity/Collections/FormatError.hpp"
#include "Unity/Collections/zzzz__FormatError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::FormatError::FormatError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Collections::FormatError::FormatError() {}
constexpr ::Unity::Collections::FormatError Unity::Collections::FormatError::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Collections::FormatError Unity::Collections::FormatError::Overflow{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Collections::FormatError Unity::Collections::FormatError::BadFormatSpecifier{ static_cast<int32_t>(0x2) };
