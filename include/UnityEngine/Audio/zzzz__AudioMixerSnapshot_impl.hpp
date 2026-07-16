#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerSnapshot.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerSnapshot_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/Internal/zzzz__ISubAssetNotDuplicatable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerSnapshot._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixerSnapshot::*)()>(&::UnityEngine::Audio::AudioMixerSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a52ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerSnapshot.get_audioMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixer> (::UnityEngine::Audio::AudioMixerSnapshot::*)()>(
    &::UnityEngine::Audio::AudioMixerSnapshot::get_audioMixer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6a51e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), { "get_audioMixer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerSnapshot.TransitionTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixerSnapshot::*)(float_t)>(&::UnityEngine::Audio::AudioMixerSnapshot::TransitionTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6a53090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), { "TransitionTo", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerSnapshot.get_audioMixer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioMixerSnapshot::get_audioMixer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a53054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), { "get_audioMixer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::AudioMixerSnapshot::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Audio::AudioMixer> UnityEngine::Audio::AudioMixerSnapshot::get_audioMixer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), { "get_audioMixer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixer>>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioMixerSnapshot::TransitionTo(float_t timeToReach) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), { "TransitionTo", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeToReach);
}
inline ::System::IntPtr UnityEngine::Audio::AudioMixerSnapshot::get_audioMixer_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), { "get_audioMixer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Audio::AudioMixerSnapshot* UnityEngine::Audio::AudioMixerSnapshot::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Audio::AudioMixerSnapshot*>());
}
/// @brief Convert operator to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
constexpr UnityEngine::Audio::AudioMixerSnapshot::operator ::UnityEngine::Internal::ISubAssetNotDuplicatable*() noexcept {
  return static_cast<::UnityEngine::Internal::ISubAssetNotDuplicatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
constexpr ::UnityEngine::Internal::ISubAssetNotDuplicatable* UnityEngine::Audio::AudioMixerSnapshot::i___UnityEngine__Internal__ISubAssetNotDuplicatable() noexcept {
  return static_cast<::UnityEngine::Internal::ISubAssetNotDuplicatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioMixerSnapshot::AudioMixerSnapshot() {}
