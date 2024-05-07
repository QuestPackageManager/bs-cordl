#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarPart.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart::AvatarPart(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart::AvatarPart() {}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::All{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::SkinColor{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::HeadTopModel{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::HeadTopPrimaryColor{ static_cast<int32_t>(0x4) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::HeadTopSecondaryColor{ static_cast<int32_t>(0x5) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::GlassesColor{ static_cast<int32_t>(0x6) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::FacialHairColor{ static_cast<int32_t>(0x7) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::HandsModel{ static_cast<int32_t>(0x8) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::HandsColor{ static_cast<int32_t>(0x9) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::ClothesModel{ static_cast<int32_t>(0xa) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::ClothesModelPrimaryColor{ static_cast<int32_t>(0xb) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::ClothesModelSecondaryColor{ static_cast<int32_t>(0xc) };
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart BeatSaber::BeatAvatarSDK::AvatarPart::ClothesModelDetailColor{ static_cast<int32_t>(0xd) };
