#pragma once
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform::UserPlatform(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform::UserPlatform() {}
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform BeatSaberAPI::DataTransferObjects::UserPlatform::None{ static_cast<uint8_t>(0x0u) };
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform BeatSaberAPI::DataTransferObjects::UserPlatform::Test{ static_cast<uint8_t>(0x1u) };
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform BeatSaberAPI::DataTransferObjects::UserPlatform::Steam{ static_cast<uint8_t>(0x2u) };
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform BeatSaberAPI::DataTransferObjects::UserPlatform::PlayStation{ static_cast<uint8_t>(0x3u) };
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform BeatSaberAPI::DataTransferObjects::UserPlatform::OculusPC{ static_cast<uint8_t>(0x4u) };
constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform BeatSaberAPI::DataTransferObjects::UserPlatform::OculusQuest{ static_cast<uint8_t>(0x5u) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
