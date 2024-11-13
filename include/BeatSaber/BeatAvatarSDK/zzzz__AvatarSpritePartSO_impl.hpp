#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarSpritePartSO.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarSpritePartSO_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO.get_sprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::get_sprite)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x222ecac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>::get(),
                                                                               "get_sprite", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::*)()>(&::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x222ece8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Sprite> BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::get_sprite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>::get(),
                                                                             "get_sprite", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO* BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>());
}
inline void BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO::AvatarSpritePartSO() {}
