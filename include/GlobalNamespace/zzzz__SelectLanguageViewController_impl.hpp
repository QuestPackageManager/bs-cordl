#pragma once
// IWYU pragma private; include "GlobalNamespace\SelectLanguageViewController.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLanguageViewController_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "GlobalNamespace/zzzz__LanguageSettingsController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectLanguageViewController.add_didChangeLanguageEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectLanguageViewController::*)(::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>*)>(
    &::GlobalNamespace::SelectLanguageViewController::add_didChangeLanguageEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5967368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(),
                                                             { "add_didChangeLanguageEvent", {}, { ::i2c::type_of<::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLanguageViewController.remove_didChangeLanguageEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectLanguageViewController::*)(::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>*)>(
    &::GlobalNamespace::SelectLanguageViewController::remove_didChangeLanguageEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5967428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(),
                                                             { "remove_didChangeLanguageEvent", {}, { ::i2c::type_of<::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLanguageViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectLanguageViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SelectLanguageViewController::DidActivate)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59674e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), { ::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLanguageViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectLanguageViewController::*)()>(&::GlobalNamespace::SelectLanguageViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5967620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), { ::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLanguageViewController.HandleLanguageSettingsControllerOndropDownValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectLanguageViewController::*)()>(
    &::GlobalNamespace::SelectLanguageViewController::HandleLanguageSettingsControllerOndropDownValueDidChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x596773c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), { "HandleLanguageSettingsControllerOndropDownValueDidChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLanguageViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectLanguageViewController::*)()>(&::GlobalNamespace::SelectLanguageViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596776c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SelectLanguageViewController::__cordl_internal_get__continueButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SelectLanguageViewController::__cordl_internal_get__continueButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr void GlobalNamespace::SelectLanguageViewController::__cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____continueButton = value;
}
constexpr ::UnityW<::GlobalNamespace::LanguageSettingsController>& GlobalNamespace::SelectLanguageViewController::__cordl_internal_get__languageSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____languageSettingsController;
}
constexpr ::UnityW<::GlobalNamespace::LanguageSettingsController> const& GlobalNamespace::SelectLanguageViewController::__cordl_internal_get__languageSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____languageSettingsController;
}
constexpr void GlobalNamespace::SelectLanguageViewController::__cordl_internal_set__languageSettingsController(::UnityW<::GlobalNamespace::LanguageSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____languageSettingsController = value;
}
constexpr ::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>*& GlobalNamespace::SelectLanguageViewController::__cordl_internal_get_didChangeLanguageEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeLanguageEvent;
}
constexpr ::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>* const& GlobalNamespace::SelectLanguageViewController::__cordl_internal_get_didChangeLanguageEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeLanguageEvent;
}
constexpr void GlobalNamespace::SelectLanguageViewController::__cordl_internal_set_didChangeLanguageEvent(::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeLanguageEvent = value;
}
inline void GlobalNamespace::SelectLanguageViewController::add_didChangeLanguageEvent(::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(),
                                                           { "add_didChangeLanguageEvent", {}, { ::i2c::type_of<::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectLanguageViewController::remove_didChangeLanguageEvent(::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(),
                                                           { "remove_didChangeLanguageEvent", {}, { ::i2c::type_of<::System::Action_1<::BGLib::Polyglot::LocalizationLanguage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectLanguageViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SelectLanguageViewController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectLanguageViewController::HandleLanguageSettingsControllerOndropDownValueDidChange() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), { "HandleLanguageSettingsControllerOndropDownValueDidChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectLanguageViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectLanguageViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectLanguageViewController* GlobalNamespace::SelectLanguageViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectLanguageViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectLanguageViewController::SelectLanguageViewController() {}
