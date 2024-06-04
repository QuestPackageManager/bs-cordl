#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerGroup.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/Internal/zzzz__ISubAssetNotDuplicatable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioMixerGroup::*)()>(&::UnityEngine::Audio::AudioMixerGroup::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x33fc244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerGroup.get_audioMixer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixer> (::UnityEngine::Audio::AudioMixerGroup::*)()>(
    &::UnityEngine::Audio::AudioMixerGroup::get_audioMixer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x33fc29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(), "get_audioMixer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
constexpr UnityEngine::Audio::AudioMixerGroup::operator ::UnityEngine::Internal::ISubAssetNotDuplicatable*() noexcept {
  return static_cast<::UnityEngine::Internal::ISubAssetNotDuplicatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
constexpr ::UnityEngine::Internal::ISubAssetNotDuplicatable* UnityEngine::Audio::AudioMixerGroup::i___UnityEngine__Internal__ISubAssetNotDuplicatable() noexcept {
  return static_cast<::UnityEngine::Internal::ISubAssetNotDuplicatable*>(static_cast<void*>(this));
}
inline ::UnityEngine::Audio::AudioMixerGroup* UnityEngine::Audio::AudioMixerGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Audio::AudioMixerGroup*>());
}
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
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioMixerGroup::AudioMixerGroup() {}
