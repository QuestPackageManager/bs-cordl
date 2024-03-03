#pragma once
#include "LiteNetLib/Utils/zzzz__NtpLeapIndicator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::Utils::NtpLeapIndicator::NtpLeapIndicator(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NtpLeapIndicator::NtpLeapIndicator() {}
constexpr ::LiteNetLib::Utils::NtpLeapIndicator LiteNetLib::Utils::NtpLeapIndicator::NoWarning{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::Utils::NtpLeapIndicator LiteNetLib::Utils::NtpLeapIndicator::LastMinuteHas61Seconds{ static_cast<int32_t>(0x1) };
constexpr ::LiteNetLib::Utils::NtpLeapIndicator LiteNetLib::Utils::NtpLeapIndicator::LastMinuteHas59Seconds{ static_cast<int32_t>(0x2) };
constexpr ::LiteNetLib::Utils::NtpLeapIndicator LiteNetLib::Utils::NtpLeapIndicator::AlarmCondition{ static_cast<int32_t>(0x3) };
