#pragma once
#include "RootMotion/zzzz__InterpolationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::InterpolationMode::InterpolationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::InterpolationMode::InterpolationMode() {}
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::None{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InOutCubic{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InOutQuintic{ static_cast<int32_t>(0x2) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InOutSine{ static_cast<int32_t>(0x3) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InQuintic{ static_cast<int32_t>(0x4) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InQuartic{ static_cast<int32_t>(0x5) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InCubic{ static_cast<int32_t>(0x6) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InQuadratic{ static_cast<int32_t>(0x7) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InElastic{ static_cast<int32_t>(0x8) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InElasticSmall{ static_cast<int32_t>(0x9) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InElasticBig{ static_cast<int32_t>(0xa) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InSine{ static_cast<int32_t>(0xb) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::InBack{ static_cast<int32_t>(0xc) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutQuintic{ static_cast<int32_t>(0xd) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutQuartic{ static_cast<int32_t>(0xe) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutCubic{ static_cast<int32_t>(0xf) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutInCubic{ static_cast<int32_t>(0x10) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutInQuartic{ static_cast<int32_t>(0x11) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutElastic{ static_cast<int32_t>(0x12) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutElasticSmall{ static_cast<int32_t>(0x13) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutElasticBig{ static_cast<int32_t>(0x14) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutSine{ static_cast<int32_t>(0x15) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutBack{ static_cast<int32_t>(0x16) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutBackCubic{ static_cast<int32_t>(0x17) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::OutBackQuartic{ static_cast<int32_t>(0x18) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::BackInCubic{ static_cast<int32_t>(0x19) };
constexpr ::RootMotion::InterpolationMode RootMotion::InterpolationMode::BackInQuartic{ static_cast<int32_t>(0x1a) };
