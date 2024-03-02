#pragma once
#include "LiteNetLib/zzzz__ConnectRequestResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::ConnectRequestResult::ConnectRequestResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::ConnectRequestResult::ConnectRequestResult() {}
constexpr ::LiteNetLib::ConnectRequestResult LiteNetLib::ConnectRequestResult::None{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::ConnectRequestResult LiteNetLib::ConnectRequestResult::P2PLose{ static_cast<int32_t>(0x1) };
constexpr ::LiteNetLib::ConnectRequestResult LiteNetLib::ConnectRequestResult::Reconnection{ static_cast<int32_t>(0x2) };
constexpr ::LiteNetLib::ConnectRequestResult LiteNetLib::ConnectRequestResult::NewConnection{ static_cast<int32_t>(0x3) };
