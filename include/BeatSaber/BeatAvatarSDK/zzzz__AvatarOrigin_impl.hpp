#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarOrigin.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarOrigin_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BeatSaber::BeatAvatarSDK::AvatarOrigin::AvatarOrigin(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarOrigin::AvatarOrigin() {}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarOrigin BeatSaber::BeatAvatarSDK::AvatarOrigin::Player{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarOrigin BeatSaber::BeatAvatarSDK::AvatarOrigin::Generated{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarOrigin BeatSaber::BeatAvatarSDK::AvatarOrigin::Account{ static_cast<int32_t>(0x2) };
