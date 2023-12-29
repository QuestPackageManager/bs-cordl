#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayAudioOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__PlayAudioOnGameEventController_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipQueue_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedAudioClipSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::*)(::GlobalNamespace::AudioClipQueue*)>(
    &::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::Init)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x20d01c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>::get(), "Init",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipQueue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding.Deinit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::*)()>(
    &::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::Deinit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x20d0310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>::get(), "Deinit",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding.HandleGameEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::*)()>(
    &::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::HandleGameEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20d03a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>::get(),
                                                 "HandleGameEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::*)()>(
    &::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d0468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Signal*& GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__signal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__signal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signal;
}
constexpr void GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__set__signal(::GlobalNamespace::Signal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr float_t const& GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delay;
}
constexpr void GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__set__delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delay = value;
}
constexpr ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO*, ::Array<::GlobalNamespace::LocalizedAudioClipSO*>*>&
GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__localizedAudioClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedAudioClips;
}
constexpr ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO*, ::Array<::GlobalNamespace::LocalizedAudioClipSO*>*> const&
GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__localizedAudioClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedAudioClips;
}
constexpr void GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__set__localizedAudioClips(
    ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO*, ::Array<::GlobalNamespace::LocalizedAudioClipSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizedAudioClips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioClipQueue*& GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__audioClipQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipQueue;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipQueue*> const& GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__audioClipQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipQueue;
}
constexpr void GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__set__audioClipQueue(::GlobalNamespace::AudioClipQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::GlobalNamespace::LocalizedAudioClipSO*>*& GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__randomObjectPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomObjectPicker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::GlobalNamespace::LocalizedAudioClipSO*>*> const&
GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__get__randomObjectPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomObjectPicker;
}
constexpr void
GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__set__randomObjectPicker(::GlobalNamespace::RandomObjectPicker_1<::GlobalNamespace::LocalizedAudioClipSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomObjectPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::Init(::GlobalNamespace::AudioClipQueue* audioClipQueue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>::get(), "Init",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipQueue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClipQueue);
}
inline void GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::Deinit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>::get(), "Deinit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::HandleGameEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>::get(),
                                               "HandleGameEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding* GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>());
}
inline void GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding::__PlayAudioOnGameEventController__EventAudioBinding() {}
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x20d0160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(),
                                                                               "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x20d02b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayAudioOnGameEventController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayAudioOnGameEventController::*)()>(
    &::GlobalNamespace::PlayAudioOnGameEventController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d039c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioClipQueue*& GlobalNamespace::PlayAudioOnGameEventController::__get__audioClipQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipQueue;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipQueue*> const& GlobalNamespace::PlayAudioOnGameEventController::__get__audioClipQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipQueue;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController::__set__audioClipQueue(::GlobalNamespace::AudioClipQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*, ::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*>&
GlobalNamespace::PlayAudioOnGameEventController::__get__eventAudioBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventAudioBindings;
}
constexpr ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*, ::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*> const&
GlobalNamespace::PlayAudioOnGameEventController::__get__eventAudioBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventAudioBindings;
}
constexpr void GlobalNamespace::PlayAudioOnGameEventController::__set__eventAudioBindings(
    ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*, ::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventAudioBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayAudioOnGameEventController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayAudioOnGameEventController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayAudioOnGameEventController* GlobalNamespace::PlayAudioOnGameEventController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayAudioOnGameEventController*>());
}
inline void GlobalNamespace::PlayAudioOnGameEventController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayAudioOnGameEventController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayAudioOnGameEventController::PlayAudioOnGameEventController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
