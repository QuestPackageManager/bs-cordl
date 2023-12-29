#pragma once
#include "Oculus/Platform/zzzz__RoomJoinability_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::RoomJoinability::RoomJoinability(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RoomJoinability::RoomJoinability() {}
constexpr ::Oculus::Platform::RoomJoinability Oculus::Platform::RoomJoinability::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::RoomJoinability Oculus::Platform::RoomJoinability::AreIn{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::RoomJoinability Oculus::Platform::RoomJoinability::AreKicked{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::RoomJoinability Oculus::Platform::RoomJoinability::CanJoin{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Platform::RoomJoinability Oculus::Platform::RoomJoinability::IsFull{ static_cast<int32_t>(0x4) };
constexpr ::Oculus::Platform::RoomJoinability Oculus::Platform::RoomJoinability::NoViewer{ static_cast<int32_t>(0x5) };
constexpr ::Oculus::Platform::RoomJoinability Oculus::Platform::RoomJoinability::PolicyPrevents{ static_cast<int32_t>(0x6) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
