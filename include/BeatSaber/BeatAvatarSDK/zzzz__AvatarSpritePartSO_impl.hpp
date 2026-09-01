#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarSDK\AvatarSpritePartSO.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarSpritePartSO_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO.get_sprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::get_sprite)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x327d05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>(), { "get_sprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::*)()>(&::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x327d0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Sprite> BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::get_sprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>(), { "get_sprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO* BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::AvatarSpritePartSO() {}
