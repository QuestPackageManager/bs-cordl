#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/sockaddr_ll.hpp"
#include "System/Net/NetworkInformation/zzzz__sockaddr_ll_def.hpp"
// Ctor Parameters [CppParam { name: "sll_family", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_protocol", ty: "uint16_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "sll_ifindex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_hatype", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sll_pkttype", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_halen", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_addr", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::sockaddr_ll::sockaddr_ll(uint16_t sll_family, uint16_t sll_protocol, int32_t sll_ifindex, uint16_t sll_hatype, uint8_t sll_pkttype, uint8_t sll_halen,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> sll_addr) noexcept {
  this->sll_family = sll_family;
  this->sll_protocol = sll_protocol;
  this->sll_ifindex = sll_ifindex;
  this->sll_hatype = sll_hatype;
  this->sll_pkttype = sll_pkttype;
  this->sll_halen = sll_halen;
  this->sll_addr = sll_addr;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::sockaddr_ll::sockaddr_ll() {}
