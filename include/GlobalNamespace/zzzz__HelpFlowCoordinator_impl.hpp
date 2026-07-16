#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpFlowCoordinator.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__HelpFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__HelpMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__HelpNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__HowToPlayViewController_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStatisticsViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HelpFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpFlowCoordinator::*)(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*)>(
    &::GlobalNamespace::HelpFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a06978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(),
                                                             { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpFlowCoordinator::*)(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*)>(
    &::GlobalNamespace::HelpFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a06a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(),
                                                             { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::HelpFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5a06af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::HelpFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a06cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpFlowCoordinator.HandleDidSelectHelpSubMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::HelpFlowCoordinator::HandleDidSelectHelpSubMenu)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a06e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), { "HandleDidSelectHelpSubMenu", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpFlowCoordinator.ReplaceViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpFlowCoordinator::*)(::HMUI::ViewController*)>(&::GlobalNamespace::HelpFlowCoordinator::ReplaceViewController)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a06e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), { "ReplaceViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpFlowCoordinator::*)(::HMUI::ViewController*)>(&::GlobalNamespace::HelpFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a06f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpFlowCoordinator.HandleHowToPlayViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpFlowCoordinator::*)(::GlobalNamespace::HowToPlayViewController_HowToPlayOptions)>(
    &::GlobalNamespace::HelpFlowCoordinator::HandleHowToPlayViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a06f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(),
                                                             { "HandleHowToPlayViewControllerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HelpFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpFlowCoordinator::*)()>(&::GlobalNamespace::HelpFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a06fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::HelpMenuViewController>& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__helpMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::HelpMenuViewController> const& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__helpMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpMenuViewController;
}
constexpr void GlobalNamespace::HelpFlowCoordinator::__cordl_internal_set__helpMenuViewController(::UnityW<::GlobalNamespace::HelpMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____helpMenuViewController = value;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::HelpFlowCoordinator::__cordl_internal_set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuTransitionsHelper = value;
}
constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController>& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__howToPlayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayViewController;
}
constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController> const& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__howToPlayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____howToPlayViewController;
}
constexpr void GlobalNamespace::HelpFlowCoordinator::__cordl_internal_set__howToPlayViewController(::UnityW<::GlobalNamespace::HowToPlayViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____howToPlayViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::HelpNavigationController>& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__helpNavigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpNavigationController;
}
constexpr ::UnityW<::GlobalNamespace::HelpNavigationController> const& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__helpNavigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpNavigationController;
}
constexpr void GlobalNamespace::HelpFlowCoordinator::__cordl_internal_set__helpNavigationController(::UnityW<::GlobalNamespace::HelpNavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____helpNavigationController = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerStatisticsViewController>& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__playerStatisticsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerStatisticsViewController;
}
constexpr ::UnityW<::GlobalNamespace::PlayerStatisticsViewController> const& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__playerStatisticsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerStatisticsViewController;
}
constexpr void GlobalNamespace::HelpFlowCoordinator::__cordl_internal_set__playerStatisticsViewController(::UnityW<::GlobalNamespace::PlayerStatisticsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerStatisticsViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::HelpFlowCoordinator::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* const& GlobalNamespace::HelpFlowCoordinator::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::HelpFlowCoordinator::__cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::HelpFlowCoordinator::add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HelpFlowCoordinator::remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(),
                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HelpFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::HelpFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::HelpFlowCoordinator::HandleDidSelectHelpSubMenu(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), { "HandleDidSelectHelpSubMenu", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::HelpFlowCoordinator::ReplaceViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), { "ReplaceViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::HelpFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topViewController);
}
inline void GlobalNamespace::HelpFlowCoordinator::HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::HowToPlayViewController_HowToPlayOptions howToPlayOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(),
                                                           { "HandleHowToPlayViewControllerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::HowToPlayViewController_HowToPlayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, howToPlayOptions);
}
inline void GlobalNamespace::HelpFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HelpFlowCoordinator* GlobalNamespace::HelpFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HelpFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HelpFlowCoordinator::HelpFlowCoordinator() {}
