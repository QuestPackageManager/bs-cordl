#pragma once
#include "LiteNetLib/zzzz__DisconnectResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::DisconnectResult::DisconnectResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::DisconnectResult::DisconnectResult() {}
constexpr ::LiteNetLib::DisconnectResult LiteNetLib::DisconnectResult::None{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::DisconnectResult LiteNetLib::DisconnectResult::Reject{ static_cast<int32_t>(0x1) };
constexpr ::LiteNetLib::DisconnectResult LiteNetLib::DisconnectResult::Disconnect{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
