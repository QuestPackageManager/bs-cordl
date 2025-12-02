#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioManagerConfigSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AudioManagerConfigSO_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioManagerConfigSO.get_audioMixer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixer> (::GlobalNamespace::AudioManagerConfigSO::*)()>(
    &::GlobalNamespace::AudioManagerConfigSO::get_audioMixer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a89b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerConfigSO*>::get(),
                                                                               "get_audioMixer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerConfigSO.get_spatializerPluginLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioManagerConfigSO::*)()>(
    &::GlobalNamespace::AudioManagerConfigSO::get_spatializerPluginLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a89bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerConfigSO*>::get(),
                                                                               "get_spatializerPluginLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerConfigSO.get_spatializerSfxVolumeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioManagerConfigSO::*)()>(
    &::GlobalNamespace::AudioManagerConfigSO::get_spatializerSfxVolumeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a89c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerConfigSO*>::get(),
                                                                               "get_spatializerSfxVolumeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerConfigSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerConfigSO::*)()>(&::GlobalNamespace::AudioManagerConfigSO::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56a89cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerConfigSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::AudioManagerConfigSO::__cordl_internal_get__audioMixer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::AudioManagerConfigSO::__cordl_internal_get__audioMixer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioMixer;
}
constexpr void GlobalNamespace::AudioManagerConfigSO::__cordl_internal_set__audioMixer(::UnityW<::UnityEngine::Audio::AudioMixer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioMixer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AudioManagerConfigSO::__cordl_internal_get__spatializerPluginLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatializerPluginLatency;
}
constexpr float_t const& GlobalNamespace::AudioManagerConfigSO::__cordl_internal_get__spatializerPluginLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatializerPluginLatency;
}
constexpr void GlobalNamespace::AudioManagerConfigSO::__cordl_internal_set__spatializerPluginLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spatializerPluginLatency = value;
}
constexpr float_t& GlobalNamespace::AudioManagerConfigSO::__cordl_internal_get__spatializerSfxVolumeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatializerSfxVolumeOffset;
}
constexpr float_t const& GlobalNamespace::AudioManagerConfigSO::__cordl_internal_get__spatializerSfxVolumeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatializerSfxVolumeOffset;
}
constexpr void GlobalNamespace::AudioManagerConfigSO::__cordl_internal_set__spatializerSfxVolumeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spatializerSfxVolumeOffset = value;
}
inline ::UnityW<::UnityEngine::Audio::AudioMixer> GlobalNamespace::AudioManagerConfigSO::get_audioMixer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerConfigSO*>::get(), "get_audioMixer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixer>, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioManagerConfigSO::get_spatializerPluginLatency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerConfigSO*>::get(),
                                                                             "get_spatializerPluginLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioManagerConfigSO::get_spatializerSfxVolumeOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerConfigSO*>::get(),
                                                                             "get_spatializerSfxVolumeOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManagerConfigSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerConfigSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioManagerConfigSO* GlobalNamespace::AudioManagerConfigSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AudioManagerConfigSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioManagerConfigSO::AudioManagerConfigSO() {}
