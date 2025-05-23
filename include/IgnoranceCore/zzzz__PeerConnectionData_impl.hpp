#pragma once
// IWYU pragma private; include "IgnoranceCore/PeerConnectionData.hpp"
#include "IgnoranceCore/zzzz__PeerConnectionData_def.hpp"
// Ctor Parameters [CppParam { name: "Port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "IP", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::IgnoranceCore::PeerConnectionData::PeerConnectionData(uint16_t Port, uint32_t NativePeerId, ::StringW IP) noexcept {
  this->Port = Port;
  this->NativePeerId = NativePeerId;
  this->IP = IP;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::PeerConnectionData::PeerConnectionData() {}
