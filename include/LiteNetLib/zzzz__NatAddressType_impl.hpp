#pragma once
#include "LiteNetLib/zzzz__NatAddressType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::NatAddressType::NatAddressType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::NatAddressType::NatAddressType() {}
constexpr ::LiteNetLib::NatAddressType LiteNetLib::NatAddressType::Internal{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::NatAddressType LiteNetLib::NatAddressType::External{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
