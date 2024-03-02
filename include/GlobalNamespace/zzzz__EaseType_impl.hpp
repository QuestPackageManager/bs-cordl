#pragma once
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EaseType::EaseType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EaseType::EaseType() {}
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::Linear{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InSine{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutSine{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutSine{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InQuad{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutQuad{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutQuad{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InCubic{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutCubic{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutCubic{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InQuart{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutQuart{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutQuart{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InQuint{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutQuint{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutQuint{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InExpo{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutExpo{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutExpo{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InCirc{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutCirc{ static_cast<int32_t>(0x15) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutCirc{ static_cast<int32_t>(0x16) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InBack{ static_cast<int32_t>(0x17) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutBack{ static_cast<int32_t>(0x18) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutBack{ static_cast<int32_t>(0x19) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InElastic{ static_cast<int32_t>(0x1a) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutElastic{ static_cast<int32_t>(0x1b) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutElastic{ static_cast<int32_t>(0x1c) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InBounce{ static_cast<int32_t>(0x1d) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::OutBounce{ static_cast<int32_t>(0x1e) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::InOutBounce{ static_cast<int32_t>(0x1f) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::BeatSaberInOutBack{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::BeatSaberInOutElastic{ static_cast<int32_t>(0x21) };
constexpr ::GlobalNamespace::EaseType GlobalNamespace::EaseType::BeatSaberInOutBounce{ static_cast<int32_t>(0x22) };
