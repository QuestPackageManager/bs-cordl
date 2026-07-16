#pragma once
// IWYU pragma private; include "GlobalNamespace/SongStartSyncController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongStartSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__SongStartHandler_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.get_isSongStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::get_isSongStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccca80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "get_isSongStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.get_songStartSyncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::get_songStartSyncTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ccca88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "get_songStartSyncTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.add_syncStartFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action*)>(
    &::GlobalNamespace::SongStartSyncController::add_syncStartFailedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cccaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "add_syncStartFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.remove_syncStartFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action*)>(
    &::GlobalNamespace::SongStartSyncController::remove_syncStartFailedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cccb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "remove_syncStartFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.add_syncStartSuccessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartSyncController::add_syncStartSuccessEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cccbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "add_syncStartSuccessEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.remove_syncStartSuccessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartSyncController::remove_syncStartSuccessEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccccb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "remove_syncStartSuccessEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.add_syncResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartSyncController::add_syncResumeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cccd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "add_syncResumeEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.remove_syncResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartSyncController::remove_syncResumeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccce38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "remove_syncResumeEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cccef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cccf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cccf18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.OnApplicationPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(bool)>(&::GlobalNamespace::SongStartSyncController::OnApplicationPause)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cccf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.StartSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, ::StringW)>(
    &::GlobalNamespace::SongStartSyncController::StartSong)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5cccfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(),
                                                             { "StartSong", {}, { ::i2c::type_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.HandleSetSongStartSyncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(int64_t)>(&::GlobalNamespace::SongStartSyncController::HandleSetSongStartSyncTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ccd17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "HandleSetSongStartSyncTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccd1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::SongStartSyncController::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::SongStartSyncController::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::SongStartSyncController::__cordl_internal_get__gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr ::GlobalNamespace::IGameplayRpcManager* const& GlobalNamespace::SongStartSyncController::__cordl_internal_get__gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayRpcManager = value;
}
constexpr float_t& GlobalNamespace::SongStartSyncController::__cordl_internal_get__waitStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitStartTime;
}
constexpr float_t const& GlobalNamespace::SongStartSyncController::__cordl_internal_get__waitStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitStartTime;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set__waitStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waitStartTime = value;
}
constexpr bool& GlobalNamespace::SongStartSyncController::__cordl_internal_get__songStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStarted;
}
constexpr bool const& GlobalNamespace::SongStartSyncController::__cordl_internal_get__songStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStarted;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set__songStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songStarted = value;
}
constexpr float_t& GlobalNamespace::SongStartSyncController::__cordl_internal_get__startTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr float_t const& GlobalNamespace::SongStartSyncController::__cordl_internal_get__startTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set__startTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime = value;
}
constexpr ::StringW& GlobalNamespace::SongStartSyncController::__cordl_internal_get__sessionGameId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionGameId;
}
constexpr ::StringW const& GlobalNamespace::SongStartSyncController::__cordl_internal_get__sessionGameId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionGameId;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set__sessionGameId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionGameId = value;
}
constexpr ::GlobalNamespace::SongStartHandler*& GlobalNamespace::SongStartSyncController::__cordl_internal_get__songStartHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartHandler;
}
constexpr ::GlobalNamespace::SongStartHandler* const& GlobalNamespace::SongStartSyncController::__cordl_internal_get__songStartHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartHandler;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set__songStartHandler(::GlobalNamespace::SongStartHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songStartHandler = value;
}
constexpr ::System::Action*& GlobalNamespace::SongStartSyncController::__cordl_internal_get_syncStartFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStartFailedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::SongStartSyncController::__cordl_internal_get_syncStartFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStartFailedEvent;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set_syncStartFailedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncStartFailedEvent = value;
}
constexpr ::System::Action_1<int64_t>*& GlobalNamespace::SongStartSyncController::__cordl_internal_get_syncStartSuccessEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStartSuccessEvent;
}
constexpr ::System::Action_1<int64_t>* const& GlobalNamespace::SongStartSyncController::__cordl_internal_get_syncStartSuccessEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStartSuccessEvent;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set_syncStartSuccessEvent(::System::Action_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncStartSuccessEvent = value;
}
constexpr ::System::Action_1<int64_t>*& GlobalNamespace::SongStartSyncController::__cordl_internal_get_syncResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncResumeEvent;
}
constexpr ::System::Action_1<int64_t>* const& GlobalNamespace::SongStartSyncController::__cordl_internal_get_syncResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncResumeEvent;
}
constexpr void GlobalNamespace::SongStartSyncController::__cordl_internal_set_syncResumeEvent(::System::Action_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncResumeEvent = value;
}
inline bool GlobalNamespace::SongStartSyncController::get_isSongStarted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "get_isSongStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t GlobalNamespace::SongStartSyncController::get_songStartSyncTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "get_songStartSyncTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartSyncController::add_syncStartFailedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "add_syncStartFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::remove_syncStartFailedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "remove_syncStartFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::add_syncStartSuccessEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "add_syncStartSuccessEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::remove_syncStartSuccessEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "remove_syncStartSuccessEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::add_syncResumeEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "add_syncResumeEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::remove_syncResumeEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "remove_syncResumeEvent", {}, { ::i2c::type_of<::System::Action_1<int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartSyncController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartSyncController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartSyncController::OnApplicationPause(bool pauseStatus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::SongStartSyncController::StartSong(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel, ::StringW sessionGameId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(),
                                                           { "StartSong", {}, { ::i2c::type_of<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playersSpecificSettingsAtGameStartModel, sessionGameId);
}
inline void GlobalNamespace::SongStartSyncController::HandleSetSongStartSyncTime(int64_t songStartSyncTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { "HandleSetSongStartSyncTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songStartSyncTime);
}
inline void GlobalNamespace::SongStartSyncController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongStartSyncController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SongStartSyncController* GlobalNamespace::SongStartSyncController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongStartSyncController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongStartSyncController::SongStartSyncController() {}
