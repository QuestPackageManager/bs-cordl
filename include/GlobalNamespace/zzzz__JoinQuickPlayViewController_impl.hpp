#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinQuickPlayViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__JoinQuickPlayViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyDropdown_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSettings_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySongPacksDropdown_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JoinQuickPlayViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinQuickPlayViewController::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::JoinQuickPlayViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595f21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinQuickPlayViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinQuickPlayViewController::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::JoinQuickPlayViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595f2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinQuickPlayViewController.get_multiplayerModeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerModeSettings* (::GlobalNamespace::JoinQuickPlayViewController::*)()>(
    &::GlobalNamespace::JoinQuickPlayViewController::get_multiplayerModeSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595f39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "get_multiplayerModeSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinQuickPlayViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinQuickPlayViewController::*)(::GlobalNamespace::QuickPlaySetupData*, ::GlobalNamespace::MultiplayerModeSettings*)>(
    &::GlobalNamespace::JoinQuickPlayViewController::Setup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x595f3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(),
                                                { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerModeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinQuickPlayViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinQuickPlayViewController::*)(bool, bool, bool)>(&::GlobalNamespace::JoinQuickPlayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x595f434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { ::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinQuickPlayViewController.ButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinQuickPlayViewController::*)(bool)>(&::GlobalNamespace::JoinQuickPlayViewController::ButtonPressed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x595f574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "ButtonPressed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinQuickPlayViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinQuickPlayViewController::*)()>(&::GlobalNamespace::JoinQuickPlayViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595f604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinQuickPlayViewController._DidActivate_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinQuickPlayViewController::*)()>(&::GlobalNamespace::JoinQuickPlayViewController::_DidActivate_b__12_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595f608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "<DidActivate>b__12_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinQuickPlayViewController._DidActivate_b__12_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinQuickPlayViewController::*)()>(&::GlobalNamespace::JoinQuickPlayViewController::_DidActivate_b__12_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595f610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "<DidActivate>b__12_1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown>& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__beatmapDifficultyDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultyDropdown;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> const& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__beatmapDifficultyDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultyDropdown;
}
constexpr void GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_set__beatmapDifficultyDropdown(::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDifficultyDropdown = value;
}
constexpr ::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown>& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__songPacksDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPacksDropdown;
}
constexpr ::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> const& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__songPacksDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPacksDropdown;
}
constexpr void GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_set__songPacksDropdown(::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPacksDropdown = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__levelSelectionToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelSelectionToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__levelSelectionToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelSelectionToggle;
}
constexpr void GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_set__levelSelectionToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelSelectionToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__joinButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joinButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__joinButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joinButton;
}
constexpr void GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_set__joinButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____joinButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__cancelJoinButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelJoinButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__cancelJoinButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelJoinButton;
}
constexpr void GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_set__cancelJoinButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelJoinButton = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_set_didFinishEvent(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::GlobalNamespace::MultiplayerModeSettings*& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__multiplayerModeSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerModeSettings;
}
constexpr ::GlobalNamespace::MultiplayerModeSettings* const& GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_get__multiplayerModeSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerModeSettings;
}
constexpr void GlobalNamespace::JoinQuickPlayViewController::__cordl_internal_set__multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerModeSettings = value;
}
inline void GlobalNamespace::JoinQuickPlayViewController::add_didFinishEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::JoinQuickPlayViewController::remove_didFinishEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerModeSettings* GlobalNamespace::JoinQuickPlayViewController::get_multiplayerModeSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "get_multiplayerModeSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerModeSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::JoinQuickPlayViewController::Setup(::GlobalNamespace::QuickPlaySetupData* quickPlaySetupData, ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(),
                                              { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerModeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quickPlaySetupData, multiplayerModeSettings);
}
inline void GlobalNamespace::JoinQuickPlayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::JoinQuickPlayViewController::ButtonPressed(bool success) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "ButtonPressed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::JoinQuickPlayViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinQuickPlayViewController::_DidActivate_b__12_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "<DidActivate>b__12_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinQuickPlayViewController::_DidActivate_b__12_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JoinQuickPlayViewController*>(), { "<DidActivate>b__12_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::JoinQuickPlayViewController* GlobalNamespace::JoinQuickPlayViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JoinQuickPlayViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JoinQuickPlayViewController::JoinQuickPlayViewController() {}
