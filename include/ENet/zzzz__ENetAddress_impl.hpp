#pragma once
#include "ENet/zzzz__ENetAddress_def.hpp"
constexpr uint16_t& ENet::ENetAddress::__get_port() {
  return this->___port;
}
constexpr uint16_t const& ENet::ENetAddress::__get_port() const {
  return this->___port;
}
constexpr void ENet::ENetAddress::__set_port(uint16_t value) {
  this->___port = value;
}
// Ctor Parameters [CppParam { name: "port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::ENetAddress::ENetAddress(uint16_t port) noexcept {
  this->port = port;
}
// Ctor Parameters []
constexpr ::ENet::ENetAddress::ENetAddress() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
