#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\DestinationFlags.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Destinations::DestinationFlags::DestinationFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::DestinationFlags::DestinationFlags() {}
constexpr ::BeatSaber::Destinations::DestinationFlags BeatSaber::Destinations::DestinationFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Destinations::DestinationFlags BeatSaber::Destinations::DestinationFlags::LoadMenu{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Destinations::DestinationFlags BeatSaber::Destinations::DestinationFlags::RequiresHealthWarning{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Destinations::DestinationFlags BeatSaber::Destinations::DestinationFlags::MockOnlineServices{ static_cast<int32_t>(0x40) };
