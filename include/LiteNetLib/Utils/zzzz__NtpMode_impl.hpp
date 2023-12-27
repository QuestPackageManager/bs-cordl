#pragma once
#include "LiteNetLib/Utils/zzzz__NtpMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::Utils::NtpMode::NtpMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NtpMode::NtpMode() {}
constexpr ::LiteNetLib::Utils::NtpMode LiteNetLib::Utils::NtpMode::Client{ static_cast<int32_t>(0x3) };
constexpr ::LiteNetLib::Utils::NtpMode LiteNetLib::Utils::NtpMode::Server{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
