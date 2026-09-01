#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerSettingsPanelController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "GlobalNamespace/zzzz__ServerCodeView_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.add_playerActiveStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::MultiplayerSettingsPanelController::add_playerActiveStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5946f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(),
                                                                                           { "add_playerActiveStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.remove_playerActiveStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::MultiplayerSettingsPanelController::remove_playerActiveStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5947010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(),
                                                                                           { "remove_playerActiveStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.SetLobbyPlayerDataModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)(::GlobalNamespace::ILobbyPlayerData*)>(
    &::GlobalNamespace::MultiplayerSettingsPanelController::SetLobbyPlayerDataModel)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59470d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(),
                                                                                           { "SetLobbyPlayerDataModel", {}, { ::i2c::type_of<::GlobalNamespace::ILobbyPlayerData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.HideConnectionSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::MultiplayerSettingsPanelController::HideConnectionSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59471ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "HideConnectionSettings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.HideSpectateSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::MultiplayerSettingsPanelController::HideSpectateSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x594720c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "HideSpectateSettings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.SetLobbyCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerSettingsPanelController::SetLobbyCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x594722c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "SetLobbyCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)()>(&::GlobalNamespace::MultiplayerSettingsPanelController::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x594724c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)()>(&::GlobalNamespace::MultiplayerSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5947314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.UpdateLocalPlayerIsActiveState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::MultiplayerSettingsPanelController::UpdateLocalPlayerIsActiveState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5947328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "UpdateLocalPlayerIsActiveState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)()>(&::GlobalNamespace::MultiplayerSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59470dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)()>(&::GlobalNamespace::MultiplayerSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x594734c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSettingsPanelController._Awake_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::MultiplayerSettingsPanelController::_Awake_b__14_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5947350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "<Awake>b__14_0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ServerCodeView>& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__serverCodeView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverCodeView;
}
constexpr ::UnityW<::GlobalNamespace::ServerCodeView> const& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__serverCodeView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverCodeView;
}
constexpr void GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_set__serverCodeView(::UnityW<::GlobalNamespace::ServerCodeView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverCodeView = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__spectateToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectateToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__spectateToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectateToggle;
}
constexpr void GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_set__spectateToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectateToggle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__connectionSettingsWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionSettingsWrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__connectionSettingsWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionSettingsWrapper;
}
constexpr void GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_set__connectionSettingsWrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionSettingsWrapper = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__spectateSettingsWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectateSettingsWrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__spectateSettingsWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectateSettingsWrapper;
}
constexpr void GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_set__spectateSettingsWrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectateSettingsWrapper = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
constexpr ::GlobalNamespace::ILobbyPlayerData*& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__lobbyPlayerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerData;
}
constexpr ::GlobalNamespace::ILobbyPlayerData* const& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__lobbyPlayerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerData;
}
constexpr void GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_set__lobbyPlayerData(::GlobalNamespace::ILobbyPlayerData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayerData = value;
}
constexpr bool& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__refreshed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshed;
}
constexpr bool const& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get__refreshed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshed;
}
constexpr void GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_set__refreshed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshed = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get_playerActiveStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerActiveStateChangedEvent;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_get_playerActiveStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerActiveStateChangedEvent;
}
constexpr void GlobalNamespace::MultiplayerSettingsPanelController::__cordl_internal_set_playerActiveStateChangedEvent(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerActiveStateChangedEvent = value;
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::add_playerActiveStateChangedEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(),
                                                                                         { "add_playerActiveStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::remove_playerActiveStateChangedEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(),
                                                                                         { "remove_playerActiveStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::SetLobbyPlayerDataModel(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(),
                                                                                         { "SetLobbyPlayerDataModel", {}, { ::i2c::type_of<::GlobalNamespace::ILobbyPlayerData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyPlayerData);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::HideConnectionSettings(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "HideConnectionSettings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::HideSpectateSettings(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "HideSpectateSettings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::SetLobbyCode(::StringW code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "SetLobbyCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::UpdateLocalPlayerIsActiveState(bool isActive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "UpdateLocalPlayerIsActiveState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSettingsPanelController::_Awake_b__14_0(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSettingsPanelController*>(), { "<Awake>b__14_0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline ::GlobalNamespace::MultiplayerSettingsPanelController* GlobalNamespace::MultiplayerSettingsPanelController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerSettingsPanelController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr GlobalNamespace::MultiplayerSettingsPanelController::operator ::GlobalNamespace::IRefreshable*() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRefreshable"
constexpr ::GlobalNamespace::IRefreshable* GlobalNamespace::MultiplayerSettingsPanelController::i___GlobalNamespace__IRefreshable() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSettingsPanelController::MultiplayerSettingsPanelController() {}
