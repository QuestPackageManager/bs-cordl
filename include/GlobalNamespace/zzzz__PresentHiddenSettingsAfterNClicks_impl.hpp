#pragma once
// IWYU pragma private; include "GlobalNamespace/PresentHiddenSettingsAfterNClicks.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PresentHiddenSettingsAfterNClicks_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(&::GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x594265c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(&::GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59426fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(&::GlobalNamespace::PresentHiddenSettingsAfterNClicks::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5942714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresentHiddenSettingsAfterNClicks._OnEnable_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PresentHiddenSettingsAfterNClicks::*)()>(&::GlobalNamespace::PresentHiddenSettingsAfterNClicks::_OnEnable_b__6_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5942778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>(), { "<OnEnable>b__6_0", {}, {} })));
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
  this->____hiddenSettingsButton = value;
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
  this->____hiddenSettingsViewController = value;
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
  this->____settingsFlowCoordinator = value;
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
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::PresentHiddenSettingsAfterNClicks::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PresentHiddenSettingsAfterNClicks::_OnEnable_b__6_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>(), { "<OnEnable>b__6_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PresentHiddenSettingsAfterNClicks* GlobalNamespace::PresentHiddenSettingsAfterNClicks::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PresentHiddenSettingsAfterNClicks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PresentHiddenSettingsAfterNClicks::PresentHiddenSettingsAfterNClicks() {}
