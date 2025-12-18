#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerGroup.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/Internal/zzzz__ISubAssetNotDuplicatable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioMixerGroup::*)()>(&::UnityEngine::Audio::AudioMixerGroup::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68879d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerGroup.get_audioMixer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixer> (::UnityEngine::Audio::AudioMixerGroup::*)()>(
    &::UnityEngine::Audio::AudioMixerGroup::get_audioMixer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6887a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(), "get_audioMixer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerGroup.get_audioMixer_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioMixerGroup::get_audioMixer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6887b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(), "get_audioMixer_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::AudioMixerGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Audio::AudioMixer> UnityEngine::Audio::AudioMixerGroup::get_audioMixer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(), "get_audioMixer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixer>, false>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Audio::AudioMixerGroup::get_audioMixer_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(), "get_audioMixer_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Audio::AudioMixerGroup* UnityEngine::Audio::AudioMixerGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Audio::AudioMixerGroup*>());
}
/// @brief Convert operator to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
constexpr UnityEngine::Audio::AudioMixerGroup::operator ::UnityEngine::Internal::ISubAssetNotDuplicatable*() noexcept {
  return static_cast<::UnityEngine::Internal::ISubAssetNotDuplicatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
constexpr ::UnityEngine::Internal::ISubAssetNotDuplicatable* UnityEngine::Audio::AudioMixerGroup::i___UnityEngine__Internal__ISubAssetNotDuplicatable() noexcept {
  return static_cast<::UnityEngine::Internal::ISubAssetNotDuplicatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioMixerGroup::AudioMixerGroup() {}
