#pragma once
// IWYU pragma private; include "Unity/Collections/CopyError.hpp"
#include "Unity/Collections/zzzz__CopyError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::CopyError::CopyError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Collections::CopyError::CopyError() {}
constexpr ::Unity::Collections::CopyError Unity::Collections::CopyError::None{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Collections::CopyError Unity::Collections::CopyError::Truncation{ static_cast<int32_t>(0x1) };
