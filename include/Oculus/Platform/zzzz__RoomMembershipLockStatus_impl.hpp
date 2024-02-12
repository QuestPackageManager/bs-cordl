#pragma once
#include "Oculus/Platform/zzzz__RoomMembershipLockStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::RoomMembershipLockStatus::RoomMembershipLockStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RoomMembershipLockStatus::RoomMembershipLockStatus() {}
constexpr ::Oculus::Platform::RoomMembershipLockStatus Oculus::Platform::RoomMembershipLockStatus::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::RoomMembershipLockStatus Oculus::Platform::RoomMembershipLockStatus::Lock{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::RoomMembershipLockStatus Oculus::Platform::RoomMembershipLockStatus::Unlock{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
