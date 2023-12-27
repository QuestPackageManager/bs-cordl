#pragma once
#include "LiteNetLib/zzzz__LocalAddrType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::LocalAddrType::LocalAddrType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::LocalAddrType::LocalAddrType() {}
constexpr ::LiteNetLib::LocalAddrType LiteNetLib::LocalAddrType::IPv4{ static_cast<int32_t>(0x1) };
constexpr ::LiteNetLib::LocalAddrType LiteNetLib::LocalAddrType::IPv6{ static_cast<int32_t>(0x2) };
constexpr ::LiteNetLib::LocalAddrType LiteNetLib::LocalAddrType::All{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
