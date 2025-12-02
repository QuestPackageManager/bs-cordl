#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerSnapshot.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerSnapshot_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/Internal/zzzz__ISubAssetNotDuplicatable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerSnapshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioMixerSnapshot::*)()>(&::UnityEngine::Audio::AudioMixerSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68203f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerSnapshot*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerSnapshot.get_audioMixer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixer> (::UnityEngine::Audio::AudioMixerSnapshot::*)()>(
    &::UnityEngine::Audio::AudioMixerSnapshot::get_audioMixer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x681f268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerSnapshot*>::get(),
                                                                               "get_audioMixer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerSnapshot.TransitionTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioMixerSnapshot::*)(float_t)>(
    &::UnityEngine::Audio::AudioMixerSnapshot::TransitionTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6820484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerSnapshot*>::get(), "TransitionTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerSnapshot.get_audioMixer_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioMixerSnapshot::get_audioMixer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6820448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerSnapshot*>::get(), "get_audioMixer_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::AudioMixerSnapshot::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerSnapshot*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Audio::AudioMixer> UnityEngine::Audio::AudioMixerSnapshot::get_audioMixer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerSnapshot*>::get(), "get_audioMixer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixer>, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioMixerSnapshot::TransitionTo(float_t timeToReach) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerSnapshot*>::get(), "TransitionTo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeToReach);
}
inline ::System::IntPtr UnityEngine::Audio::AudioMixerSnapshot::get_audioMixer_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerSnapshot*>::get(), "get_audioMixer_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Audio::AudioMixerSnapshot* UnityEngine::Audio::AudioMixerSnapshot::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Audio::AudioMixerSnapshot*>());
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
