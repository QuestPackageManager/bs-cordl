#pragma once
// IWYU pragma private; include "GlobalNamespace\SceneStartHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SceneStartHandler_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.add_sceneSetupDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::SceneStartHandler::add_sceneSetupDidFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32ba0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "add_sceneSetupDidFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.remove_sceneSetupDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::SceneStartHandler::remove_sceneSetupDidFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32ba178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "remove_sceneSetupDidFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.add_sceneSetupDidReceiveTooLateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::SceneStartHandler::add_sceneSetupDidReceiveTooLateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32ba238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                                                           { "add_sceneSetupDidReceiveTooLateEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.remove_sceneSetupDidReceiveTooLateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::SceneStartHandler::remove_sceneSetupDidReceiveTooLateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32ba2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                                                           { "remove_sceneSetupDidReceiveTooLateEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::IGameplayRpcManager*,
                                                                                                      ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*)>(
    &::GlobalNamespace::SceneStartHandler::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x32ba3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)()>(&::GlobalNamespace::SceneStartHandler::Dispose)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x32ba4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.GetSceneLoadStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)()>(&::GlobalNamespace::SceneStartHandler::GetSceneLoadStatus)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x32ba840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "GetSceneLoadStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.ForceStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)()>(&::GlobalNamespace::SceneStartHandler::ForceStart)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x32bb2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "ForceStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.HandleSetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(
    &::GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneReady)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x32bb98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                { "HandleSetGameplaySceneReady", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.HandleGetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::StringW)>(&::GlobalNamespace::SceneStartHandler::HandleGetGameplaySceneReady)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32bbd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "HandleGetGameplaySceneReady", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.HandleSetGameplaySceneSyncFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(
    &::GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneSyncFinished)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32bbe30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                { "HandleSetGameplaySceneSyncFinished",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.HandleSetPlayerDidConnectLate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*,
                                                                                                      ::StringW)>(&::GlobalNamespace::SceneStartHandler::HandleSetPlayerDidConnectLate)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x32bbe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                             { "HandleSetPlayerDidConnectLate",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.AddPlayerSpecificSettingsToDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(
    &::GlobalNamespace::SceneStartHandler::AddPlayerSpecificSettingsToDictionary)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x32baf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                             { "AddPlayerSpecificSettingsToDictionary", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.CreatePlayersSpecificSettingsAtGameStartData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* (::GlobalNamespace::SceneStartHandler::*)()>(
    &::GlobalNamespace::SceneStartHandler::CreatePlayersSpecificSettingsAtGameStartData)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x32baff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "CreatePlayersSpecificSettingsAtGameStartData", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::SceneStartHandler::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::SceneStartHandler::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::SceneStartHandler::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::SceneStartHandler::__cordl_internal_get__gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr ::GlobalNamespace::IGameplayRpcManager* const& GlobalNamespace::SceneStartHandler::__cordl_internal_get__gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr void GlobalNamespace::SceneStartHandler::__cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayRpcManager = value;
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& GlobalNamespace::SceneStartHandler::__cordl_internal_get__playersAtGameStartModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersAtGameStartModel;
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const& GlobalNamespace::SceneStartHandler::__cordl_internal_get__playersAtGameStartModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersAtGameStartModel;
}
constexpr void GlobalNamespace::SceneStartHandler::__cordl_internal_set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersAtGameStartModel = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::SceneStartHandler::__cordl_internal_get__readyPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyPlayers;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::SceneStartHandler::__cordl_internal_get__readyPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyPlayers;
}
constexpr void GlobalNamespace::SceneStartHandler::__cordl_internal_set__readyPlayers(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readyPlayers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*&
GlobalNamespace::SceneStartHandler::__cordl_internal_get__playersSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpecificSettings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* const&
GlobalNamespace::SceneStartHandler::__cordl_internal_get__playersSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpecificSettings;
}
constexpr void GlobalNamespace::SceneStartHandler::__cordl_internal_set__playersSpecificSettings(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersSpecificSettings = value;
}
constexpr bool& GlobalNamespace::SceneStartHandler::__cordl_internal_get__started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____started;
}
constexpr bool const& GlobalNamespace::SceneStartHandler::__cordl_internal_get__started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____started;
}
constexpr void GlobalNamespace::SceneStartHandler::__cordl_internal_set__started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____started = value;
}
constexpr ::StringW& GlobalNamespace::SceneStartHandler::__cordl_internal_get__sessionGameId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionGameId;
}
constexpr ::StringW const& GlobalNamespace::SceneStartHandler::__cordl_internal_get__sessionGameId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionGameId;
}
constexpr void GlobalNamespace::SceneStartHandler::__cordl_internal_set__sessionGameId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionGameId = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::SceneStartHandler::__cordl_internal_get_sceneSetupDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneSetupDidFinishEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::SceneStartHandler::__cordl_internal_get_sceneSetupDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneSetupDidFinishEvent;
}
constexpr void GlobalNamespace::SceneStartHandler::__cordl_internal_set_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneSetupDidFinishEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::SceneStartHandler::__cordl_internal_get_sceneSetupDidReceiveTooLateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneSetupDidReceiveTooLateEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::SceneStartHandler::__cordl_internal_get_sceneSetupDidReceiveTooLateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneSetupDidReceiveTooLateEvent;
}
constexpr void GlobalNamespace::SceneStartHandler::__cordl_internal_set_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneSetupDidReceiveTooLateEvent = value;
}
inline void GlobalNamespace::SceneStartHandler::add_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "add_sceneSetupDidFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SceneStartHandler::remove_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "remove_sceneSetupDidFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SceneStartHandler::add_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                                                         { "add_sceneSetupDidReceiveTooLateEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SceneStartHandler::remove_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                                                         { "remove_sceneSetupDidReceiveTooLateEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SceneStartHandler::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                      ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel);
}
inline void GlobalNamespace::SceneStartHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SceneStartHandler::GetSceneLoadStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "GetSceneLoadStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SceneStartHandler::ForceStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "ForceStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneReady(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                              { "HandleSetGameplaySceneReady", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playerSpecificSettings);
}
inline void GlobalNamespace::SceneStartHandler::HandleGetGameplaySceneReady(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "HandleGetGameplaySceneReady", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneSyncFinished(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart,
                                                                                   ::StringW sessionId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                              { "HandleSetGameplaySceneSyncFinished",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playersAtGameStart, sessionId);
}
inline void GlobalNamespace::SceneStartHandler::HandleSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId,
                                                                              ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::StringW sessionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                           { "HandleSetPlayerDidConnectLate",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, failedUserId, playersAtGameStart, sessionId);
}
inline void GlobalNamespace::SceneStartHandler::AddPlayerSpecificSettingsToDictionary(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(),
                                                           { "AddPlayerSpecificSettingsToDictionary", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerSpecificSettingsNetSerializable);
}
inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* GlobalNamespace::SceneStartHandler::CreatePlayersSpecificSettingsAtGameStartData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneStartHandler*>(), { "CreatePlayersSpecificSettingsAtGameStartData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(this, ___internal_method);
}
inline ::GlobalNamespace::SceneStartHandler* GlobalNamespace::SceneStartHandler::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                                          ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                                                          ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SceneStartHandler*>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::SceneStartHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SceneStartHandler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneStartHandler::SceneStartHandler() {}
