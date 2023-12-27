#pragma once
#include "System/Net/NetworkInformation/AixStructs/zzzz__sockaddr_in_def.hpp"
// Ctor Parameters [CppParam { name: "sin_len", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin_family", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sin_port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin_addr", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr_in::sockaddr_in(uint8_t sin_len, uint8_t sin_family, uint16_t sin_port, uint32_t sin_addr) noexcept {
  this->sin_len = sin_len;
  this->sin_family = sin_family;
  this->sin_port = sin_port;
  this->sin_addr = sin_addr;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr_in::sockaddr_in() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
