#pragma once
#include "System/Net/NetworkInformation/zzzz__in6_addr_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__sockaddr_in6_def.hpp"
#include "System/Net/NetworkInformation/zzzz__in6_addr_def.hpp"
// Ctor Parameters [CppParam { name: "sin6_family", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin6_port", ty: "uint16_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "sin6_flowinfo", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin6_addr", ty: "::System::Net::NetworkInformation::in6_addr", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "sin6_scope_id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::sockaddr_in6::sockaddr_in6(uint16_t sin6_family, uint16_t sin6_port, uint32_t sin6_flowinfo, ::System::Net::NetworkInformation::in6_addr sin6_addr,
                                                                        uint32_t sin6_scope_id) noexcept {
  this->sin6_family = sin6_family;
  this->sin6_port = sin6_port;
  this->sin6_flowinfo = sin6_flowinfo;
  this->sin6_addr = sin6_addr;
  this->sin6_scope_id = sin6_scope_id;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::sockaddr_in6::sockaddr_in6() {}
