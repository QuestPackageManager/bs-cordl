#pragma once
#include "ENet/zzzz__SslMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::SslMode::SslMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ENet::SslMode::SslMode() {}
constexpr ::ENet::SslMode ENet::SslMode::None{ static_cast<int32_t>(0x0) };
constexpr ::ENet::SslMode ENet::SslMode::Server{ static_cast<int32_t>(0x1) };
constexpr ::ENet::SslMode ENet::SslMode::Client{ static_cast<int32_t>(0x2) };
