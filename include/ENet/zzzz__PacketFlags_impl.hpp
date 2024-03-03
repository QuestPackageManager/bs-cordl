#pragma once
#include "ENet/zzzz__PacketFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::PacketFlags::PacketFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ENet::PacketFlags::PacketFlags() {}
constexpr ::ENet::PacketFlags ENet::PacketFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::ENet::PacketFlags ENet::PacketFlags::Reliable{ static_cast<int32_t>(0x1) };
constexpr ::ENet::PacketFlags ENet::PacketFlags::Unsequenced{ static_cast<int32_t>(0x2) };
constexpr ::ENet::PacketFlags ENet::PacketFlags::NoAllocate{ static_cast<int32_t>(0x4) };
constexpr ::ENet::PacketFlags ENet::PacketFlags::UnreliableFragmented{ static_cast<int32_t>(0x8) };
constexpr ::ENet::PacketFlags ENet::PacketFlags::Instant{ static_cast<int32_t>(0x10) };
constexpr ::ENet::PacketFlags ENet::PacketFlags::Unthrottled{ static_cast<int32_t>(0x20) };
constexpr ::ENet::PacketFlags ENet::PacketFlags::Sent{ static_cast<int32_t>(0x100) };
