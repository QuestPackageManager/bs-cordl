#pragma once
// IWYU pragma private; include "BeatSaber/Init/RuntimePlatformType.hpp"
#include "BeatSaber/Init/zzzz__RuntimePlatformType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Init::RuntimePlatformType::RuntimePlatformType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::RuntimePlatformType::RuntimePlatformType() {}
constexpr ::BeatSaber::Init::RuntimePlatformType BeatSaber::Init::RuntimePlatformType::PS4{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Init::RuntimePlatformType BeatSaber::Init::RuntimePlatformType::PS5{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Init::RuntimePlatformType BeatSaber::Init::RuntimePlatformType::Quest{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Init::RuntimePlatformType BeatSaber::Init::RuntimePlatformType::Rift{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Init::RuntimePlatformType BeatSaber::Init::RuntimePlatformType::Steam{ static_cast<int32_t>(0x4) };
