#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/ColocationFailedReason.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ColocationFailedReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason::ColocationFailedReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason::ColocationFailedReason() {}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason::AutomaticFailedToCreateAnchor{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason::AutomaticFailedToSaveAnchorToCloud{ static_cast<int32_t>(
    0x1) };
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason::AutomaticFailedToShareAnchor{ static_cast<int32_t>(0x2) };
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason::AutomaticFailedToLocalizeAnchor{ static_cast<int32_t>(
    0x3) };
