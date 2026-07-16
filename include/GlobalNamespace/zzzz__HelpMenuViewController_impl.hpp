#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpMenuViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__HelpMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__EulaDisplayViewController_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningDisplayViewController_def.hpp"
#include "GlobalNamespace/zzzz__HowToPlayViewController_def.hpp"
#include "GlobalNamespace/zzzz__LicensesDisplayViewController_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyDisplayViewController_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController.add_didSelectHelpSubMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)(::System::Action_1<::UnityW<::HMUI::ViewController>>*)>(
    &::GlobalNamespace::HelpMenuViewController::add_didSelectHelpSubMenuEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5947190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(),
                                                             { "add_didSelectHelpSubMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::ViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController.remove_didSelectHelpSubMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)(::System::Action_1<::UnityW<::HMUI::ViewController>>*)>(
    &::GlobalNamespace::HelpMenuViewController::remove_didSelectHelpSubMenuEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5947250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(),
                                                             { "remove_didSelectHelpSubMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::ViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)(bool, bool, bool)>(&::GlobalNamespace::HelpMenuViewController::DidActivate)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x5947310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(), { ::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController.HandleHelpMenuSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::HelpMenuViewController::HandleHelpMenuSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5947858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(),
                                                             { "HandleHelpMenuSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpMenuViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpMenuViewController::*)()>(&::GlobalNamespace::HelpMenuViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59478e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextSegmentedControl>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__helpMenuSegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpMenuSegmentedControl;
}
constexpr ::UnityW<::HMUI::TextSegmentedControl> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__helpMenuSegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpMenuSegmentedControl;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__helpMenuSegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____helpMenuSegmentedControl = value;
}
constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__howToPlayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayViewController;
}
constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__howToPlayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__howToPlayViewController(::UnityW<::GlobalNamespace::HowToPlayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____howToPlayViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__privacyPolicyDisplayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyDisplayViewController;
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__privacyPolicyDisplayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyDisplayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__privacyPolicyDisplayViewController(::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____privacyPolicyDisplayViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__healthWarningDisplayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningDisplayViewController;
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__healthWarningDisplayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningDisplayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__healthWarningDisplayViewController(::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____healthWarningDisplayViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::EulaDisplayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__eulaDisplayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaDisplayViewController;
}
constexpr ::UnityW<::GlobalNamespace::EulaDisplayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__eulaDisplayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaDisplayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__eulaDisplayViewController(::UnityW<::GlobalNamespace::EulaDisplayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eulaDisplayViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::LicensesDisplayViewController>& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__licensesDisplayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____licensesDisplayViewController;
}
constexpr ::UnityW<::GlobalNamespace::LicensesDisplayViewController> const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get__licensesDisplayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____licensesDisplayViewController;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set__licensesDisplayViewController(::UnityW<::GlobalNamespace::LicensesDisplayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____licensesDisplayViewController = value;
}
constexpr ::System::Action_1<::UnityW<::HMUI::ViewController>>*& GlobalNamespace::HelpMenuViewController::__cordl_internal_get_didSelectHelpSubMenuEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectHelpSubMenuEvent;
}
constexpr ::System::Action_1<::UnityW<::HMUI::ViewController>>* const& GlobalNamespace::HelpMenuViewController::__cordl_internal_get_didSelectHelpSubMenuEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectHelpSubMenuEvent;
}
constexpr void GlobalNamespace::HelpMenuViewController::__cordl_internal_set_didSelectHelpSubMenuEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectHelpSubMenuEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>*&
GlobalNamespace::HelpMenuViewController::__cordl_internal_get__viewControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* const&
GlobalNamespace::HelpMenuViewController::__cordl_internal_get__viewControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers;
}
constexpr void
GlobalNamespace::HelpMenuViewController::__cordl_internal_set__viewControllers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllers = value;
}
inline void GlobalNamespace::HelpMenuViewController::add_didSelectHelpSubMenuEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(),
                                                           { "add_didSelectHelpSubMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::ViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HelpMenuViewController::remove_didSelectHelpSubMenuEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(),
                                                           { "remove_didSelectHelpSubMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::ViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HelpMenuViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::HelpMenuViewController::HandleHelpMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(),
                                                           { "HandleHelpMenuSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentedControl, cellIdx);
}
inline void GlobalNamespace::HelpMenuViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpMenuViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HelpMenuViewController* GlobalNamespace::HelpMenuViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HelpMenuViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HelpMenuViewController::HelpMenuViewController() {}
