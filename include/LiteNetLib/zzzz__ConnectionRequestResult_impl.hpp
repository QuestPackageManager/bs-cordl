#pragma once
#include "LiteNetLib/zzzz__ConnectionRequestResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::ConnectionRequestResult::ConnectionRequestResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::ConnectionRequestResult::ConnectionRequestResult() {}
constexpr ::LiteNetLib::ConnectionRequestResult LiteNetLib::ConnectionRequestResult::None{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::ConnectionRequestResult LiteNetLib::ConnectionRequestResult::Accept{ static_cast<int32_t>(0x1) };
constexpr ::LiteNetLib::ConnectionRequestResult LiteNetLib::ConnectionRequestResult::Reject{ static_cast<int32_t>(0x2) };
constexpr ::LiteNetLib::ConnectionRequestResult LiteNetLib::ConnectionRequestResult::RejectForce{ static_cast<int32_t>(0x3) };
