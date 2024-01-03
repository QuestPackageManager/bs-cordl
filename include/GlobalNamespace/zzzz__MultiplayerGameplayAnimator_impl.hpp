#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__LightsAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeadPlayerProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x224c8c4;

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
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x224c958;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.AnimateNewLeaderSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(bool)>(
    &::GlobalNamespace::MultiplayerGameplayAnimator::AnimateNewLeaderSelected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.HandleStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(::GlobalNamespace::__MultiplayerController__State)>(
    &::GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x224cb94;

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
  constexpr static std::size_t addrs = 0x224cda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), "HandleNewLeaderWasSelected",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x224ce90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::MultiplayerGameplayAnimator::__get__activeLightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLightsColor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get__activeLightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLightsColor;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__activeLightsColor(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeLightsColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingLightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingLightsColor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingLightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingLightsColor;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__leadingLightsColor(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leadingLightsColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::MultiplayerGameplayAnimator::__get__failedLightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLightsColor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get__failedLightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLightsColor;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__failedLightsColor(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____failedLightsColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingSwitchCrossFadeDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingSwitchCrossFadeDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingSwitchCrossFadeDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingSwitchCrossFadeDuration;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__leadingSwitchCrossFadeDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leadingSwitchCrossFadeDuration = value;
}
constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*>& GlobalNamespace::MultiplayerGameplayAnimator::__get__gameplayLightsAnimators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLightsAnimators;
}
constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get__gameplayLightsAnimators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLightsAnimators;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__gameplayLightsAnimators(::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayLightsAnimators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*>& GlobalNamespace::MultiplayerGameplayAnimator::__get__allLightsAnimators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLightsAnimators;
}
constexpr ::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get__allLightsAnimators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLightsAnimators;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__allLightsAnimators(::ArrayW<::GlobalNamespace::LightsAnimator*, ::Array<::GlobalNamespace::LightsAnimator*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allLightsAnimators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLeadPlayerProvider*& GlobalNamespace::MultiplayerGameplayAnimator::__get__leadPlayerProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLeadPlayerProvider*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get__leadPlayerProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__leadPlayerProvider(::GlobalNamespace::MultiplayerLeadPlayerProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leadPlayerProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerController*& GlobalNamespace::MultiplayerGameplayAnimator::__get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__multiplayerController(::GlobalNamespace::MultiplayerController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::TimeTweeningManager*& GlobalNamespace::MultiplayerGameplayAnimator::__get_tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get_tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set_tweeningManager(::Tweening::TimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerGameplayAnimator::__get_connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& GlobalNamespace::MultiplayerGameplayAnimator::__get_connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
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
inline void GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::HandleNewLeaderWasSelected(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), "HandleNewLeaderWasSelected",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline ::GlobalNamespace::MultiplayerGameplayAnimator* GlobalNamespace::MultiplayerGameplayAnimator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerGameplayAnimator*>());
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerGameplayAnimator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerGameplayAnimator::MultiplayerGameplayAnimator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
