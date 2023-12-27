#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BasicUIAudioManager_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2274418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22744b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2274584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.HandleButtonClickEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(
    &::GlobalNamespace::BasicUIAudioManager::HandleButtonClickEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2274658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                                                                               "HandleButtonClickEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2274728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*>& GlobalNamespace::BasicUIAudioManager::__get__buttonClickEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonClickEvents;
}
constexpr ::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> const& GlobalNamespace::BasicUIAudioManager::__get__buttonClickEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonClickEvents;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__buttonClickEvents(::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonClickEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AudioSource*& GlobalNamespace::BasicUIAudioManager::__get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& GlobalNamespace::BasicUIAudioManager::__get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__audioSource(::UnityEngine::AudioSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::BasicUIAudioManager::__get__clickSounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clickSounds;
}
constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::BasicUIAudioManager::__get__clickSounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clickSounds;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__clickSounds(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clickSounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BasicUIAudioManager::__get__minPitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minPitch;
}
constexpr float_t const& GlobalNamespace::BasicUIAudioManager::__get__minPitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minPitch;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__minPitch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minPitch = value;
}
constexpr float_t& GlobalNamespace::BasicUIAudioManager::__get__maxPitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxPitch;
}
constexpr float_t const& GlobalNamespace::BasicUIAudioManager::__get__maxPitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxPitch;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__maxPitch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____maxPitch = value;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& GlobalNamespace::BasicUIAudioManager::__get__randomSoundPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomSoundPicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const& GlobalNamespace::BasicUIAudioManager::__get__randomSoundPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomSoundPicker;
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__randomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomSoundPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BasicUIAudioManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::HandleButtonClickEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                                                                             "HandleButtonClickEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicUIAudioManager* GlobalNamespace::BasicUIAudioManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BasicUIAudioManager*>());
}
inline void GlobalNamespace::BasicUIAudioManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicUIAudioManager::BasicUIAudioManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
