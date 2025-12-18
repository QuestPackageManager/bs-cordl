#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicUIAudioManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BasicUIAudioManager_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::Start)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5852918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::OnEnable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x58529e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::OnDisable)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5852b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.HandleButtonClickEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(
    &::GlobalNamespace::BasicUIAudioManager::HandleButtonClickEvent)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5852c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                                                                               "HandleButtonClickEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5852dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*>& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__buttonClickEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonClickEvents;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> const& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__buttonClickEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonClickEvents;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__cordl_internal_set__buttonClickEvents(::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonClickEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*>& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__audioSources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSources;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> const& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__audioSources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSources;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__cordl_internal_set__audioSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__clickSounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickSounds;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__clickSounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickSounds;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__cordl_internal_set__clickSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clickSounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__minPitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minPitch;
}
constexpr float_t const& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__minPitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minPitch;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__cordl_internal_set__minPitch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minPitch = value;
}
constexpr float_t& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__maxPitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPitch;
}
constexpr float_t const& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__maxPitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPitch;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__cordl_internal_set__maxPitch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPitch = value;
}
constexpr int32_t& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__randomSoundPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomSoundPicker;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::BasicUIAudioManager::__cordl_internal_get__randomSoundPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomSoundPicker;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__cordl_internal_set__randomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomSoundPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BasicUIAudioManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::HandleButtonClickEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                                                                             "HandleButtonClickEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicUIAudioManager* GlobalNamespace::BasicUIAudioManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BasicUIAudioManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicUIAudioManager::BasicUIAudioManager() {}
