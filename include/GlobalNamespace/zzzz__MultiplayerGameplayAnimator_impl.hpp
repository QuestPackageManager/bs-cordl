#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerGameplayAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LightsAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeadPlayerProvider_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3bcfebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerGameplayAnimator::OnDestroy)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3bcff4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.HandleStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3bd0180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.HandleNewLeaderWasSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerGameplayAnimator::HandleNewLeaderWasSelected)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3bd038c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), "HandleNewLeaderWasSelected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3bd0474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__activeLightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLightsColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__activeLightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLightsColor;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__activeLightsColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeLightsColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadingLightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingLightsColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadingLightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingLightsColor;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__leadingLightsColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leadingLightsColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__failedLightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLightsColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__failedLightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLightsColor;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__failedLightsColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____failedLightsColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadingSwitchCrossFadeDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingSwitchCrossFadeDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadingSwitchCrossFadeDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingSwitchCrossFadeDuration;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__leadingSwitchCrossFadeDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leadingSwitchCrossFadeDuration = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*>&
GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__gameplayLightsAnimators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLightsAnimators;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> const&
GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__gameplayLightsAnimators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLightsAnimators;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__gameplayLightsAnimators(
    ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayLightsAnimators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*>&
GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__allLightsAnimators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLightsAnimators;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> const&
GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__allLightsAnimators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLightsAnimators;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__allLightsAnimators(
    ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allLightsAnimators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadPlayerProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadPlayerProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__leadPlayerProvider(::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leadPlayerProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get_tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get_tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set_tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get_connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr ::GlobalNamespace::IConnectedPlayer* const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get_connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::AnimateNewLeaderSelected(bool isLeading) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isLeading);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged(::GlobalNamespace::MultiplayerController_State state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::HandleNewLeaderWasSelected(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), "HandleNewLeaderWasSelected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerGameplayAnimator* GlobalNamespace::MultiplayerGameplayAnimator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerGameplayAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerGameplayAnimator::MultiplayerGameplayAnimator() {}
