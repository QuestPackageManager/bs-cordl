#pragma once
// IWYU pragma private; include "LiteNetLib/ShutdownResult.hpp"
#include "LiteNetLib/zzzz__ShutdownResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::ShutdownResult::ShutdownResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::ShutdownResult::ShutdownResult() {}
constexpr ::LiteNetLib::ShutdownResult LiteNetLib::ShutdownResult::None{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::ShutdownResult LiteNetLib::ShutdownResult::Success{ static_cast<int32_t>(0x1) };
constexpr ::LiteNetLib::ShutdownResult LiteNetLib::ShutdownResult::WasConnected{ static_cast<int32_t>(0x2) };
