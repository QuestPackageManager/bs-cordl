#pragma once
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext::AvatarDisplayContext(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext::AvatarDisplayContext() {}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext BeatSaber::AvatarCore::AvatarDisplayContext::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext BeatSaber::AvatarCore::AvatarDisplayContext::UI{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext BeatSaber::AvatarCore::AvatarDisplayContext::MultiplayerLobby{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext BeatSaber::AvatarCore::AvatarDisplayContext::MultiplayerGameplay{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext BeatSaber::AvatarCore::AvatarDisplayContext::MultiplayerResults{ static_cast<int32_t>(0x4) };
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext BeatSaber::AvatarCore::AvatarDisplayContext::MultiplayerBigAvatar{ static_cast<int32_t>(0x5) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
