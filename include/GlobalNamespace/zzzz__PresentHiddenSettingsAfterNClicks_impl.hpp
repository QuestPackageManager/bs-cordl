#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PresentHiddenSettingsAfterNClicks_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(
    &::GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22abe84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                               "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(
    &::GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22abf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                               "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(
    &::GlobalNamespace::PresentHiddenSettingsAfterNClicks::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22abf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks._OnEnable_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(
    &::GlobalNamespace::PresentHiddenSettingsAfterNClicks::_OnEnable_b__6_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22abfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                               "<OnEnable>b__6_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__hiddenSettingsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hiddenSettingsButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__hiddenSettingsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hiddenSettingsButton;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__hiddenSettingsButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hiddenSettingsButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewController*& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__hiddenSettingsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hiddenSettingsViewController;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__hiddenSettingsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hiddenSettingsViewController;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__hiddenSettingsViewController(::HMUI::ViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hiddenSettingsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__numberOfClicksRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfClicksRequired;
}
constexpr int32_t const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__numberOfClicksRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfClicksRequired;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__numberOfClicksRequired(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfClicksRequired = value;
}
constexpr ::GlobalNamespace::SettingsFlowCoordinator*& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__settingsFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsFlowCoordinator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsFlowCoordinator*> const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__settingsFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsFlowCoordinator;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__settingsFlowCoordinator(::GlobalNamespace::SettingsFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__currentNumberOfClicks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentNumberOfClicks;
}
constexpr int32_t const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__currentNumberOfClicks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentNumberOfClicks;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__currentNumberOfClicks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentNumberOfClicks = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                             "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PresentHiddenSettingsAfterNClicks* GlobalNamespace::PresentHiddenSettingsAfterNClicks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>());
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::_OnEnable_b__6_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>::get(),
                                                                             "<OnEnable>b__6_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PresentHiddenSettingsAfterNClicks::PresentHiddenSettingsAfterNClicks() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
