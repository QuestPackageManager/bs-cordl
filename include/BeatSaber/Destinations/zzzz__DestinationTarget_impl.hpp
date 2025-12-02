#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/DestinationTarget.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Destinations::DestinationTarget::DestinationTarget(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::DestinationTarget::DestinationTarget() {}
constexpr ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::DestinationTarget::MainMenu{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::DestinationTarget::StartupError{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::DestinationTarget::StandardLevel{ static_cast<int32_t>(0x4) };
constexpr ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::DestinationTarget::MultiplayerLevel{ static_cast<int32_t>(0x5) };
constexpr ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::DestinationTarget::MissionLevel{ static_cast<int32_t>(0x6) };
constexpr ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::DestinationTarget::Tutorial{ static_cast<int32_t>(0x7) };
constexpr ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::DestinationTarget::Credits{ static_cast<int32_t>(0x8) };
constexpr ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::DestinationTarget::RecordingTool{ static_cast<int32_t>(0x9) };
constexpr ::BeatSaber::Destinations::DestinationTarget BeatSaber::Destinations::DestinationTarget::LaunchRecordingTool{ static_cast<int32_t>(0xa) };
