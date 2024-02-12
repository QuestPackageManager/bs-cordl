#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PresentHiddenSettingsAfterNClicks_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(
    &::GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22df3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(
    &::GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22df43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(
    &::GlobalNamespace::PresentHiddenSettingsAfterNClicks::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22df458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks._OnEnable_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(
    &::GlobalNamespace::PresentHiddenSettingsAfterNClicks::_OnEnable_b__6_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22df4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                               "<OnEnable>b__6_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__hiddenSettingsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hiddenSettingsButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__hiddenSettingsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hiddenSettingsButton;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_set__hiddenSettingsButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hiddenSettingsButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__hiddenSettingsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hiddenSettingsViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__hiddenSettingsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hiddenSettingsViewController;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_set__hiddenSettingsViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hiddenSettingsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__numberOfClicksRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfClicksRequired;
}
constexpr int32_t const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__numberOfClicksRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfClicksRequired;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_set__numberOfClicksRequired(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfClicksRequired = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsFlowCoordinator>& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__settingsFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__settingsFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsFlowCoordinator;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_set__settingsFlowCoordinator(::UnityW<::GlobalNamespace::SettingsFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__currentNumberOfClicks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentNumberOfClicks;
}
constexpr int32_t const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__currentNumberOfClicks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentNumberOfClicks;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_set__currentNumberOfClicks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentNumberOfClicks = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PresentHiddenSettingsAfterNClicks* GlobalNamespace::PresentHiddenSettingsAfterNClicks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>());
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::_OnEnable_b__6_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                             "<OnEnable>b__6_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PresentHiddenSettingsAfterNClicks::PresentHiddenSettingsAfterNClicks() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
