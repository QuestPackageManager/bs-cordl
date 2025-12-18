#pragma once
// IWYU pragma private; include "GlobalNamespace/ResetPitchOnGameplayFinished.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ResetPitchOnGameplayFinished_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)(
    ::GlobalNamespace::GameplayLevelSceneTransitionEvents*, ::GlobalNamespace::AudioManager*)>(&::GlobalNamespace::ResetPitchOnGameplayFinished::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x570ed78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)()>(
    &::GlobalNamespace::ResetPitchOnGameplayFinished::Finalize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x570ee18;

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
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x570eee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(), "HandleAnyGameplayLevelDidFinish",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__gameplayLevelSceneTransitionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents* const& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__gameplayLevelSceneTransitionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr void GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayLevelSceneTransitionEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents,
                                                                 ::GlobalNamespace::AudioManager* audioManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplayLevelSceneTransitionEvents, audioManager);
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::HandleAnyGameplayLevelDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                                                                             "HandleAnyGameplayLevelDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ResetPitchOnGameplayFinished*
GlobalNamespace::ResetPitchOnGameplayFinished::New_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents* gameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManager* audioManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ResetPitchOnGameplayFinished*>(gameplayLevelSceneTransitionEvents, audioManager));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResetPitchOnGameplayFinished::ResetPitchOnGameplayFinished() {}
