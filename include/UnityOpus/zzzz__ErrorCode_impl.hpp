#pragma once
#include "UnityOpus/zzzz__ErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityOpus::ErrorCode::ErrorCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityOpus::ErrorCode::ErrorCode() {}
constexpr ::UnityOpus::ErrorCode UnityOpus::ErrorCode::OK{ static_cast<int32_t>(0x0) };
constexpr ::UnityOpus::ErrorCode UnityOpus::ErrorCode::BadArg{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityOpus::ErrorCode UnityOpus::ErrorCode::BufferTooSmall{ static_cast<int32_t>(0xfffffffe) };
constexpr ::UnityOpus::ErrorCode UnityOpus::ErrorCode::InternalError{ static_cast<int32_t>(0xfffffffd) };
constexpr ::UnityOpus::ErrorCode UnityOpus::ErrorCode::InvalidPacket{ static_cast<int32_t>(0xfffffffc) };
constexpr ::UnityOpus::ErrorCode UnityOpus::ErrorCode::Unimplemented{ static_cast<int32_t>(0xfffffffb) };
constexpr ::UnityOpus::ErrorCode UnityOpus::ErrorCode::InvalidState{ static_cast<int32_t>(0xfffffffa) };
constexpr ::UnityOpus::ErrorCode UnityOpus::ErrorCode::AllocFail{ static_cast<int32_t>(0xfffffff9) };
