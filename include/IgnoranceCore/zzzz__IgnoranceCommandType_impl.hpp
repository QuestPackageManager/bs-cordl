#pragma once
#include "IgnoranceCore/zzzz__IgnoranceCommandType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::IgnoranceCore::IgnoranceCommandType::IgnoranceCommandType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceCommandType::IgnoranceCommandType() {}
constexpr ::IgnoranceCore::IgnoranceCommandType IgnoranceCore::IgnoranceCommandType::ClientWantsToStop{ static_cast<int32_t>(0x0) };
constexpr ::IgnoranceCore::IgnoranceCommandType IgnoranceCore::IgnoranceCommandType::ClientStatusRequest{ static_cast<int32_t>(0x1) };
constexpr ::IgnoranceCore::IgnoranceCommandType IgnoranceCore::IgnoranceCommandType::ServerKickPeer{ static_cast<int32_t>(0x2) };
constexpr ::IgnoranceCore::IgnoranceCommandType IgnoranceCore::IgnoranceCommandType::ServerStatusRequest{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
