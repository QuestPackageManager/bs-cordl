#pragma once
// IWYU pragma private; include "GlobalNamespace\SongStartHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongStartHandler_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.get_songStartSyncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::SongStartHandler::*)()>(&::GlobalNamespace::SongStartHandler::get_songStartSyncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32bc1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "get_songStartSyncTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.add_setSongStartSyncTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartHandler::add_setSongStartSyncTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32bc1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "add_setSongStartSyncTimeEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.remove_setSongStartSyncTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartHandler::remove_setSongStartSyncTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32bc2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "remove_setSongStartSyncTimeEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)(::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::IGameplayRpcManager*,
                                                                                                     ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*)>(
    &::GlobalNamespace::SongStartHandler::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32bc378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.GetLevelStartTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)()>(&::GlobalNamespace::SongStartHandler::GetLevelStartTimeOffset)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x32bc40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "GetLevelStartTimeOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)()>(&::GlobalNamespace::SongStartHandler::Dispose)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x32bc908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.ForceStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)(::StringW)>(&::GlobalNamespace::SongStartHandler::ForceStart)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x32bcb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "ForceStart", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.StartSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)()>(&::GlobalNamespace::SongStartHandler::StartSong)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x32bd1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "StartSong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.HandleSetGameplaySongReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)(::StringW)>(&::GlobalNamespace::SongStartHandler::HandleSetGameplaySongReady)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x32bd484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "HandleSetGameplaySongReady", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.HandleGetGameplaySongReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)(::StringW)>(&::GlobalNamespace::SongStartHandler::HandleGetGameplaySongReady)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32bd750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "HandleGetGameplaySongReady", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.HandleSetSongStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)(::StringW, int64_t)>(&::GlobalNamespace::SongStartHandler::HandleSetSongStartTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32bd7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "HandleSetSongStartTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartHandler.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartHandler::*)(::StringW)>(&::GlobalNamespace::SongStartHandler::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32bd828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::SongStartHandler::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::SongStartHandler::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::SongStartHandler::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::SongStartHandler::__cordl_internal_get__gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr ::GlobalNamespace::IGameplayRpcManager* const& GlobalNamespace::SongStartHandler::__cordl_internal_get__gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr void GlobalNamespace::SongStartHandler::__cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayRpcManager = value;
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& GlobalNamespace::SongStartHandler::__cordl_internal_get__playersAtGameStartModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersAtGameStartModel;
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const& GlobalNamespace::SongStartHandler::__cordl_internal_get__playersAtGameStartModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersAtGameStartModel;
}
constexpr void GlobalNamespace::SongStartHandler::__cordl_internal_set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersAtGameStartModel = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::SongStartHandler::__cordl_internal_get__readyPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyPlayers;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::SongStartHandler::__cordl_internal_get__readyPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyPlayers;
}
constexpr void GlobalNamespace::SongStartHandler::__cordl_internal_set__readyPlayers(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readyPlayers = value;
}
constexpr bool& GlobalNamespace::SongStartHandler::__cordl_internal_get__started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____started;
}
constexpr bool const& GlobalNamespace::SongStartHandler::__cordl_internal_get__started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____started;
}
constexpr void GlobalNamespace::SongStartHandler::__cordl_internal_set__started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____started = value;
}
constexpr int64_t& GlobalNamespace::SongStartHandler::__cordl_internal_get__startTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr int64_t const& GlobalNamespace::SongStartHandler::__cordl_internal_get__startTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr void GlobalNamespace::SongStartHandler::__cordl_internal_set__startTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime = value;
}
constexpr ::System::Action_1<int64_t>*& GlobalNamespace::SongStartHandler::__cordl_internal_get_setSongStartSyncTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSongStartSyncTimeEvent;
}
constexpr ::System::Action_1<int64_t>* const& GlobalNamespace::SongStartHandler::__cordl_internal_get_setSongStartSyncTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSongStartSyncTimeEvent;
}
constexpr void GlobalNamespace::SongStartHandler::__cordl_internal_set_setSongStartSyncTimeEvent(::System::Action_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setSongStartSyncTimeEvent = value;
}
inline int64_t GlobalNamespace::SongStartHandler::get_songStartSyncTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "get_songStartSyncTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartHandler::add_setSongStartSyncTimeEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "add_setSongStartSyncTimeEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartHandler::remove_setSongStartSyncTimeEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "remove_setSongStartSyncTimeEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartHandler::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                     ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel);
}
inline void GlobalNamespace::SongStartHandler::GetLevelStartTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "GetLevelStartTimeOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartHandler::ForceStart(::StringW sessionGameId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "ForceStart", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionGameId);
}
inline void GlobalNamespace::SongStartHandler::StartSong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "StartSong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartHandler::HandleSetGameplaySongReady(::StringW user) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "HandleSetGameplaySongReady", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void GlobalNamespace::SongStartHandler::HandleGetGameplaySongReady(::StringW user) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "HandleGetGameplaySongReady", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void GlobalNamespace::SongStartHandler::HandleSetSongStartTime(::StringW user, int64_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "HandleSetSongStartTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user, time);
}
inline void GlobalNamespace::SongStartHandler::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartHandler*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::GlobalNamespace::SongStartHandler* GlobalNamespace::SongStartHandler::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                                        ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                                                        ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongStartHandler*>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::SongStartHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SongStartHandler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongStartHandler::SongStartHandler() {}
