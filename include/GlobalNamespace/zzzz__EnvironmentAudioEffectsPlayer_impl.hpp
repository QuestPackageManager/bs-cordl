#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentAudioEffectsPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentAudioEffectsPlayer.get_audioSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::EnvironmentAudioEffectsPlayer::*)()>(
    &::GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238365c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(),
                                                                               "get_audioSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentAudioEffectsPlayer.PlayEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentAudioEffectsPlayer::*)(::UnityEngine::AudioClip*, float_t)>(
    &::GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2383664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(), "PlayEffect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentAudioEffectsPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentAudioEffectsPlayer::*)()>(
    &::GlobalNamespace::EnvironmentAudioEffectsPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23836c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::EnvironmentAudioEffectsPlayer::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::EnvironmentAudioEffectsPlayer::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::EnvironmentAudioEffectsPlayer::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(),
                                                                             "get_audioSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect(::UnityEngine::AudioClip* clip, float_t volume) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(), "PlayEffect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clip, volume);
}
inline ::GlobalNamespace::EnvironmentAudioEffectsPlayer* GlobalNamespace::EnvironmentAudioEffectsPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>());
}
inline void GlobalNamespace::EnvironmentAudioEffectsPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentAudioEffectsPlayer::EnvironmentAudioEffectsPlayer() {}
