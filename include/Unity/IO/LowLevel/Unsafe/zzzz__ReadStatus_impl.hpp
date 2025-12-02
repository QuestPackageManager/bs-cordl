#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ReadStatus.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::ReadStatus::ReadStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::ReadStatus::ReadStatus() {}
constexpr ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadStatus::Complete{ static_cast<int32_t>(0x0) };
constexpr ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadStatus::InProgress{ static_cast<int32_t>(0x1) };
constexpr ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadStatus::Failed{ static_cast<int32_t>(0x2) };
constexpr ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadStatus::Truncated{ static_cast<int32_t>(0x4) };
constexpr ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadStatus::Canceled{ static_cast<int32_t>(0x5) };
