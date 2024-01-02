#pragma once
#include "ENet/zzzz__Packet_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceOutgoingPacket_def.hpp"
#include "ENet/zzzz__Packet_def.hpp"
// Ctor Parameters [CppParam { name: "Channel", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "Payload", ty: "::ENet::Packet", modifiers: "", def_value: Some("{}") }]
constexpr ::IgnoranceCore::IgnoranceOutgoingPacket::IgnoranceOutgoingPacket(uint8_t Channel, uint32_t NativePeerId, ::ENet::Packet Payload) noexcept {
  this->Channel = Channel;
  this->NativePeerId = NativePeerId;
  this->Payload = Payload;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceOutgoingPacket::IgnoranceOutgoingPacket() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
