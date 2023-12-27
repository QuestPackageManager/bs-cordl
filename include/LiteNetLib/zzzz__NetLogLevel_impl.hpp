#pragma once
#include "LiteNetLib/zzzz__NetLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::NetLogLevel::NetLogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetLogLevel::NetLogLevel() {}
constexpr ::LiteNetLib::NetLogLevel LiteNetLib::NetLogLevel::Warning{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::NetLogLevel LiteNetLib::NetLogLevel::Error{ static_cast<int32_t>(0x1) };
constexpr ::LiteNetLib::NetLogLevel LiteNetLib::NetLogLevel::Trace{ static_cast<int32_t>(0x2) };
constexpr ::LiteNetLib::NetLogLevel LiteNetLib::NetLogLevel::Info{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
