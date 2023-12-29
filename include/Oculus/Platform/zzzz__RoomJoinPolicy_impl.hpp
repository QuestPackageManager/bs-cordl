#pragma once
#include "Oculus/Platform/zzzz__RoomJoinPolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::RoomJoinPolicy::RoomJoinPolicy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RoomJoinPolicy::RoomJoinPolicy() {}
constexpr ::Oculus::Platform::RoomJoinPolicy Oculus::Platform::RoomJoinPolicy::None{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::RoomJoinPolicy Oculus::Platform::RoomJoinPolicy::Everyone{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::RoomJoinPolicy Oculus::Platform::RoomJoinPolicy::FriendsOfMembers{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::RoomJoinPolicy Oculus::Platform::RoomJoinPolicy::FriendsOfOwner{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Platform::RoomJoinPolicy Oculus::Platform::RoomJoinPolicy::InvitedUsers{ static_cast<int32_t>(0x4) };
constexpr ::Oculus::Platform::RoomJoinPolicy Oculus::Platform::RoomJoinPolicy::Unknown{ static_cast<int32_t>(0x5) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
