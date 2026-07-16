#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerResultsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__ResultsTableView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsViewController.add_backToLobbyPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*)>(&::GlobalNamespace::MultiplayerResultsViewController::add_backToLobbyPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5961344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
                                                { "add_backToLobbyPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsViewController.remove_backToLobbyPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*)>(&::GlobalNamespace::MultiplayerResultsViewController::remove_backToLobbyPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5961404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
                                                { "remove_backToLobbyPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsViewController.add_backToMenuPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*)>(&::GlobalNamespace::MultiplayerResultsViewController::add_backToMenuPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59614c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
                                                { "add_backToMenuPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsViewController.remove_backToMenuPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*)>(&::GlobalNamespace::MultiplayerResultsViewController::remove_backToMenuPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5961584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
                                                { "remove_backToMenuPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsViewController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsViewController::*)(::GlobalNamespace::MultiplayerResultsData*, ::GlobalNamespace::BeatmapKey, bool,
                                                                                                                     bool)>(&::GlobalNamespace::MultiplayerResultsViewController::Init)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5961644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
            { "Init", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MultiplayerResultsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x59617bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsViewController.BackToLobbyPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsViewController::*)()>(&::GlobalNamespace::MultiplayerResultsViewController::BackToLobbyPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59618fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(), { "BackToLobbyPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsViewController.BackToMenuPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsViewController::*)()>(&::GlobalNamespace::MultiplayerResultsViewController::BackToMenuPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x596191c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(), { "BackToMenuPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsViewController::*)()>(&::GlobalNamespace::MultiplayerResultsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596193c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__levelClearedGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelClearedGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__levelClearedGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelClearedGO;
}
constexpr void GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_set__levelClearedGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelClearedGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__levelFailedGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFailedGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__levelFailedGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFailedGO;
}
constexpr void GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_set__levelFailedGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelFailedGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__levelResultsGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelResultsGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__levelResultsGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelResultsGO;
}
constexpr void GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_set__levelResultsGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelResultsGO = value;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar>& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar> const& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelBar = value;
}
constexpr ::UnityW<::GlobalNamespace::ResultsTableView>& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__resultsTableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsTableView;
}
constexpr ::UnityW<::GlobalNamespace::ResultsTableView> const& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__resultsTableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsTableView;
}
constexpr void GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_set__resultsTableView(::UnityW<::GlobalNamespace::ResultsTableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resultsTableView = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__backToLobbyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backToLobbyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__backToLobbyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backToLobbyButton;
}
constexpr void GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_set__backToLobbyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backToLobbyButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__backToMenuButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backToMenuButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get__backToMenuButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backToMenuButton;
}
constexpr void GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_set__backToMenuButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backToMenuButton = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get_backToLobbyPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backToLobbyPressedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* const&
GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get_backToLobbyPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backToLobbyPressedEvent;
}
constexpr void
GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_set_backToLobbyPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backToLobbyPressedEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*& GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get_backToMenuPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backToMenuPressedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* const&
GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_get_backToMenuPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backToMenuPressedEvent;
}
constexpr void
GlobalNamespace::MultiplayerResultsViewController::__cordl_internal_set_backToMenuPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backToMenuPressedEvent = value;
}
inline void GlobalNamespace::MultiplayerResultsViewController::add_backToLobbyPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
                                              { "add_backToLobbyPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerResultsViewController::remove_backToLobbyPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
                                              { "remove_backToLobbyPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerResultsViewController::add_backToMenuPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
                                              { "add_backToMenuPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerResultsViewController::remove_backToMenuPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
                                              { "remove_backToMenuPressedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerResultsViewController::Init(::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                    bool showBackToLobbyButton, bool showBackToMenuButton) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(),
          { "Init", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerResultsData, beatmapKey, showBackToLobbyButton, showBackToMenuButton);
}
inline void GlobalNamespace::MultiplayerResultsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MultiplayerResultsViewController::BackToLobbyPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(), { "BackToLobbyPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsViewController::BackToMenuPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(), { "BackToMenuPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerResultsViewController* GlobalNamespace::MultiplayerResultsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerResultsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerResultsViewController::MultiplayerResultsViewController() {}
