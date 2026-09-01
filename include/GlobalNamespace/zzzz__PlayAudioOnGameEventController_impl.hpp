#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayAudioOnGameEventController.hpp"
#include "GlobalNamespace/zzzz__LocalizedAudioClipSO_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayAudioOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipQueue_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedAudioClipSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayAudioOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::*)(::GlobalNamespace::AudioClipQueue*)>(
    &::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::Init)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58b9d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipQueue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding.Deinit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::Deinit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58b9e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>(), { "Deinit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding.HandleGameEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::HandleGameEvent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58b9ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>(), { "HandleGameEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b9fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__signal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__signal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_set__signal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signal = value;
}
constexpr float_t& GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr float_t const& GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_set__delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delay = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>& GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__localizedAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedAudioClips;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>> const& GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__localizedAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedAudioClips;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_set__localizedAudioClips(::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizedAudioClips = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioClipQueue>& GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__audioClipQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipQueue;
}
constexpr ::UnityW<::GlobalNamespace::AudioClipQueue> const& GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__audioClipQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipQueue;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_set__audioClipQueue(::UnityW<::GlobalNamespace::AudioClipQueue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClipQueue = value;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*&
GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__randomObjectPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomObjectPicker;
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>* const&
GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__randomObjectPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomObjectPicker;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_set__randomObjectPicker(
    ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomObjectPicker = value;
}
inline void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::Init(::GlobalNamespace::AudioClipQueue* audioClipQueue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::AudioClipQueue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClipQueue);
}
inline void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::Deinit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>(), { "Deinit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::HandleGameEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>(), { "HandleGameEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding* GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::PlayAudioOnGameEventController_EventAudioBinding() {}
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController::*)()>(&::GlobalNamespace::PlayAudioOnGameEventController::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58b9cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController::*)()>(&::GlobalNamespace::PlayAudioOnGameEventController::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58b9e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController::*)()>(&::GlobalNamespace::PlayAudioOnGameEventController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b9ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioClipQueue>& GlobalNamespace::PlayAudioOnGameEventController::__cordl_internal_get__audioClipQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipQueue;
}
constexpr ::UnityW<::GlobalNamespace::AudioClipQueue> const& GlobalNamespace::PlayAudioOnGameEventController::__cordl_internal_get__audioClipQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipQueue;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController::__cordl_internal_set__audioClipQueue(::UnityW<::GlobalNamespace::AudioClipQueue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClipQueue = value;
}
constexpr ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>& GlobalNamespace::PlayAudioOnGameEventController::__cordl_internal_get__eventAudioBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventAudioBindings;
}
constexpr ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*> const& GlobalNamespace::PlayAudioOnGameEventController::__cordl_internal_get__eventAudioBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventAudioBindings;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController::__cordl_internal_set__eventAudioBindings(::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventAudioBindings = value;
}
inline void GlobalNamespace::PlayAudioOnGameEventController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayAudioOnGameEventController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayAudioOnGameEventController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayAudioOnGameEventController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayAudioOnGameEventController* GlobalNamespace::PlayAudioOnGameEventController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayAudioOnGameEventController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayAudioOnGameEventController::PlayAudioOnGameEventController() {}
