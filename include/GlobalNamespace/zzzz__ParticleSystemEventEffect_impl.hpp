#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEventEffect::Start)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x227850c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2278aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEventEffect::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2278ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::ParticleSystemEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2278b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.RefreshParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(
    &::GlobalNamespace::ParticleSystemEventEffect::RefreshParticles)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x22786e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                                                                               "RefreshParticles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2278d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::ParticleSystemEventEffect::__get__lightColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor0;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::ParticleSystemEventEffect::__get__lightColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor0;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightColor0(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightColor0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::ParticleSystemEventEffect::__get__lightColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::ParticleSystemEventEffect::__get__lightColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor1;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightColor1(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightColor1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor0;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor0;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightColor0(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightColor0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor1;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightColor1(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightColor1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ParticleSystemEventEffect::__get__lightOnStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightOnStart;
}
constexpr bool const& GlobalNamespace::ParticleSystemEventEffect::__get__lightOnStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightOnStart;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightOnStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightOnStart = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::ParticleSystemEventEffect::__get__colorEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::ParticleSystemEventEffect::__get__colorEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorEvent;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__colorEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorEvent = value;
}
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::ParticleSystemEventEffect::__get__particleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::ParticleSystemEventEffect::__get__particleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__particleSystem(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::ParticleSystemEventEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::ParticleSystemEventEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ParticleSystemEventEffect::__get__lightIsOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIsOn;
}
constexpr bool const& GlobalNamespace::ParticleSystemEventEffect::__get__lightIsOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIsOn;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightIsOn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightIsOn = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParticleSystemEventEffect::__get__offColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParticleSystemEventEffect::__get__offColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offColor;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__offColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offColor = value;
}
constexpr float_t& GlobalNamespace::ParticleSystemEventEffect::__get__highlightValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightValue;
}
constexpr float_t const& GlobalNamespace::ParticleSystemEventEffect::__get__highlightValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightValue;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightValue = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParticleSystemEventEffect::__get__afterHighlightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____afterHighlightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParticleSystemEventEffect::__get__afterHighlightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____afterHighlightColor;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__afterHighlightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____afterHighlightColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightColor = value;
}
constexpr float_t& GlobalNamespace::ParticleSystemEventEffect::__get_kFadeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kFadeSpeed;
}
constexpr float_t const& GlobalNamespace::ParticleSystemEventEffect::__get_kFadeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kFadeSpeed;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set_kFadeSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kFadeSpeed = value;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule& GlobalNamespace::ParticleSystemEventEffect::__get__mainModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainModule;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule const& GlobalNamespace::ParticleSystemEventEffect::__get__mainModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainModule;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__mainModule(::UnityEngine::__ParticleSystem__MainModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainModule = value;
}
constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>& GlobalNamespace::ParticleSystemEventEffect::__get__particles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particles;
}
constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> const& GlobalNamespace::ParticleSystemEventEffect::__get__particles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particles;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParticleSystemEventEffect::__get__particleColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParticleSystemEventEffect::__get__particleColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleColor;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__particleColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleColor = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::ParticleSystemEventEffect::__get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::ParticleSystemEventEffect::__get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ParticleSystemEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEventEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::ParticleSystemEventEffect::RefreshParticles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                                                                             "RefreshParticles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemEventEffect* GlobalNamespace::ParticleSystemEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ParticleSystemEventEffect*>());
}
inline void GlobalNamespace::ParticleSystemEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemEventEffect::ParticleSystemEventEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
