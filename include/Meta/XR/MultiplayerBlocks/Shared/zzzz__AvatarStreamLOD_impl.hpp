#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/AvatarStreamLOD.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__AvatarStreamLOD_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD::AvatarStreamLOD(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD::AvatarStreamLOD() {}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD::Low{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD::Medium{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD::High{ static_cast<int32_t>(0x2) };
