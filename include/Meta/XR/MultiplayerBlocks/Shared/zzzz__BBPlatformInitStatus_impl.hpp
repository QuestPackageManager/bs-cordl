#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/BBPlatformInitStatus.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__BBPlatformInitStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus::BBPlatformInitStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus::BBPlatformInitStatus() {}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus::NotStarted{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus::Initializing{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus::Succeeded{ static_cast<int32_t>(0x2) };
constexpr ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus::Failed{ static_cast<int32_t>(0x3) };
