#pragma once
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::DeliveryMethod::DeliveryMethod(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGNet::Core::DeliveryMethod::DeliveryMethod() {}
constexpr ::BGNet::Core::DeliveryMethod BGNet::Core::DeliveryMethod::Unreliable{ static_cast<uint8_t>(0x0u) };
constexpr ::BGNet::Core::DeliveryMethod BGNet::Core::DeliveryMethod::ReliableOrdered{ static_cast<uint8_t>(0x1u) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
