#pragma once
// IWYU pragma private; include "ENet/EventType.hpp"
#include "ENet/zzzz__EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::EventType::EventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ENet::EventType::EventType() {}
constexpr ::ENet::EventType ENet::EventType::None{ static_cast<int32_t>(0x0) };
constexpr ::ENet::EventType ENet::EventType::Connect{ static_cast<int32_t>(0x1) };
constexpr ::ENet::EventType ENet::EventType::Disconnect{ static_cast<int32_t>(0x2) };
constexpr ::ENet::EventType ENet::EventType::Receive{ static_cast<int32_t>(0x3) };
constexpr ::ENet::EventType ENet::EventType::Timeout{ static_cast<int32_t>(0x4) };
