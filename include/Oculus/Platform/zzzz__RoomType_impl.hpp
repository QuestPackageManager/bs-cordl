#pragma once
#include "Oculus/Platform/zzzz__RoomType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::RoomType::RoomType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::RoomType::RoomType() {}
constexpr ::Oculus::Platform::RoomType Oculus::Platform::RoomType::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::RoomType Oculus::Platform::RoomType::Matchmaking{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::RoomType Oculus::Platform::RoomType::Moderated{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::RoomType Oculus::Platform::RoomType::Private{ static_cast<int32_t>(0x3) };
constexpr ::Oculus::Platform::RoomType Oculus::Platform::RoomType::Solo{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
