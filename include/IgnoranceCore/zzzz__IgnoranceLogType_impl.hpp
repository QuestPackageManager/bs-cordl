#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceLogType.hpp"
#include "IgnoranceCore/zzzz__IgnoranceLogType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::IgnoranceCore::IgnoranceLogType::IgnoranceLogType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceLogType::IgnoranceLogType() {}
constexpr ::IgnoranceCore::IgnoranceLogType IgnoranceCore::IgnoranceLogType::Quiet{ static_cast<int32_t>(0x0) };
constexpr ::IgnoranceCore::IgnoranceLogType IgnoranceCore::IgnoranceLogType::Standard{ static_cast<int32_t>(0x1) };
constexpr ::IgnoranceCore::IgnoranceLogType IgnoranceCore::IgnoranceLogType::Verbose{ static_cast<int32_t>(0x2) };
