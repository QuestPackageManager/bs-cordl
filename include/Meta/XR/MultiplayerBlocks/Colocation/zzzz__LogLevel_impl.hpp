#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/LogLevel.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel::LogLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel::LogLevel() {}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel Meta::XR::MultiplayerBlocks::Colocation::LogLevel::Verbose{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel Meta::XR::MultiplayerBlocks::Colocation::LogLevel::Info{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel Meta::XR::MultiplayerBlocks::Colocation::LogLevel::Warning{ static_cast<int32_t>(0x2) };
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel Meta::XR::MultiplayerBlocks::Colocation::LogLevel::Error{ static_cast<int32_t>(0x3) };
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel Meta::XR::MultiplayerBlocks::Colocation::LogLevel::SharedSpatialAnchorsError{ static_cast<int32_t>(0x4) };
