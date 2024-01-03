#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ResetPitchOnGameplayFinished_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)(
    ::GlobalNamespace::GameplayLevelSceneTransitionEvents*, ::GlobalNamespace::AudioManagerSO*)>(&::GlobalNamespace::ResetPitchOnGameplayFinished::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x222ff5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)()>(
    &::GlobalNamespace::ResetPitchOnGameplayFinished::Finalize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2230004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished.HandleAnyGameplayLevelDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)()>(
    &::GlobalNamespace::ResetPitchOnGameplayFinished::HandleAnyGameplayLevelDidFinish)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2230114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                                                                               "HandleAnyGameplayLevelDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& GlobalNamespace::ResetPitchOnGameplayFinished::__get__gameplayLevelSceneTransitionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayLevelSceneTransitionEvents*> const&
GlobalNamespace::ResetPitchOnGameplayFinished::__get__gameplayLevelSceneTransitionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr void GlobalNamespace::ResetPitchOnGameplayFinished::__set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayLevelSceneTransitionEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioManagerSO*& GlobalNamespace::ResetPitchOnGameplayFinished::__get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> const& GlobalNamespace::ResetPitchOnGameplayFinished::__get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::ResetPitchOnGameplayFinished::__set__audioManager(::GlobalNamespace::AudioManagerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ResetPitchOnGameplayFinished*
GlobalNamespace::ResetPitchOnGameplayFinished::New_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManagerSO* audioManager) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ResetPitchOnGameplayFinished*>(gameplayLevelSceneTransitionEvents, audioManager));
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents,
                                                                 ::GlobalNamespace::AudioManagerSO* audioManager) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplayLevelSceneTransitionEvents, audioManager);
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::HandleAnyGameplayLevelDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                                                                             "HandleAnyGameplayLevelDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResetPitchOnGameplayFinished::ResetPitchOnGameplayFinished() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
