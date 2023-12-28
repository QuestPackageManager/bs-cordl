#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentAudioEffectsPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentAudioEffectsPlayer.get_audioSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioSource* (::GlobalNamespace::EnvironmentAudioEffectsPlayer::*)()>(
    &::GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222d348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(),
                                                                               "get_audioSource", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentAudioEffectsPlayer.PlayEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentAudioEffectsPlayer::*)(::UnityEngine::AudioClip*, float_t)>(
    &::GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x222d350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(), "PlayEffect", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentAudioEffectsPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentAudioEffectsPlayer::*)()>(
    &::GlobalNamespace::EnvironmentAudioEffectsPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222d3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioSource*& GlobalNamespace::EnvironmentAudioEffectsPlayer::__get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& GlobalNamespace::EnvironmentAudioEffectsPlayer::__get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::EnvironmentAudioEffectsPlayer::__set__audioSource(::UnityEngine::AudioSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AudioSource* GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(),
                                                                             "get_audioSource", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioSource*, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect(::UnityEngine::AudioClip* clip, float_t volume) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(), "PlayEffect", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clip, volume);
}
inline ::GlobalNamespace::EnvironmentAudioEffectsPlayer* GlobalNamespace::EnvironmentAudioEffectsPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>());
}
inline void GlobalNamespace::EnvironmentAudioEffectsPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentAudioEffectsPlayer::EnvironmentAudioEffectsPlayer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
