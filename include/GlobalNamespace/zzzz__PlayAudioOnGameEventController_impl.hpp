#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayAudioOnGameEventController.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::*)(::GlobalNamespace::AudioClipQueue*)>(
    &::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::Init)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3ae140c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipQueue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding.Deinit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::Deinit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3ae1558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>::get(), "Deinit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding.HandleGameEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::HandleGameEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3ae15f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>::get(), "HandleGameEvent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae16b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*>&
GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__localizedAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedAudioClips;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*> const&
GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_get__localizedAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedAudioClips;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::__cordl_internal_set__localizedAudioClips(
    ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizedAudioClips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomObjectPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::Init(::GlobalNamespace::AudioClipQueue* audioClipQueue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipQueue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClipQueue);
}
inline void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::Deinit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>::get(), "Deinit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::HandleGameEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>::get(), "HandleGameEvent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding* GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding::PlayAudioOnGameEventController_EventAudioBinding() {}
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3ae13a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3ae14fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae15e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*, ::Array<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>*>&
GlobalNamespace::PlayAudioOnGameEventController::__cordl_internal_get__eventAudioBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventAudioBindings;
}
constexpr ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*, ::Array<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>*> const&
GlobalNamespace::PlayAudioOnGameEventController::__cordl_internal_get__eventAudioBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventAudioBindings;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController::__cordl_internal_set__eventAudioBindings(
    ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*, ::Array<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventAudioBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayAudioOnGameEventController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayAudioOnGameEventController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayAudioOnGameEventController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayAudioOnGameEventController* GlobalNamespace::PlayAudioOnGameEventController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayAudioOnGameEventController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayAudioOnGameEventController::PlayAudioOnGameEventController() {}
