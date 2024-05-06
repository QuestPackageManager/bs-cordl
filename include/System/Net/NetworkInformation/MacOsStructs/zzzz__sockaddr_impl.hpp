#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/MacOsStructs/sockaddr.hpp"
#include "System/Net/NetworkInformation/MacOsStructs/zzzz__sockaddr_def.hpp"
// Ctor Parameters [CppParam { name: "sa_len", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sa_family", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::MacOsStructs::sockaddr::sockaddr(uint8_t sa_len, uint8_t sa_family) noexcept {
  this->sa_len = sa_len;
  this->sa_family = sa_family;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsStructs::sockaddr::sockaddr() {}
