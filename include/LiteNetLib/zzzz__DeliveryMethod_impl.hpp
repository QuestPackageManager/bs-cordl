#pragma once
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::DeliveryMethod::DeliveryMethod(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::DeliveryMethod::DeliveryMethod() {}
constexpr ::LiteNetLib::DeliveryMethod LiteNetLib::DeliveryMethod::Unreliable{ static_cast<uint8_t>(0x4u) };
constexpr ::LiteNetLib::DeliveryMethod LiteNetLib::DeliveryMethod::ReliableUnordered{ static_cast<uint8_t>(0x0u) };
constexpr ::LiteNetLib::DeliveryMethod LiteNetLib::DeliveryMethod::Sequenced{ static_cast<uint8_t>(0x1u) };
constexpr ::LiteNetLib::DeliveryMethod LiteNetLib::DeliveryMethod::ReliableOrdered{ static_cast<uint8_t>(0x2u) };
constexpr ::LiteNetLib::DeliveryMethod LiteNetLib::DeliveryMethod::ReliableSequenced{ static_cast<uint8_t>(0x3u) };
