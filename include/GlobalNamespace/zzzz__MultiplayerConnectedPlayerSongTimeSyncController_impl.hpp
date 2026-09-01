#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerSongTimeSyncController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59bc39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::__cordl_internal_get_songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::__cordl_internal_get_songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::__cordl_internal_set_songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::__cordl_internal_get_timeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeScale;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::__cordl_internal_get_timeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeScale;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::__cordl_internal_set_timeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeScale = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::_ctor(float_t startSongTime, float_t songTimeOffset, float_t timeScale) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startSongTime, songTimeOffset, timeScale);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData*
GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::New_ctor(float_t startSongTime, float_t songTimeOffset, float_t timeScale) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData*>(startSongTime, songTimeOffset, timeScale));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData::MultiplayerConnectedPlayerSongTimeSyncController_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bc924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_songTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.set_songTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bc92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "set_songTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_lastFrameDeltaSongTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bc934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_lastFrameDeltaSongTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.set_lastFrameDeltaSongTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bc93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(),
                                                                                           { "set_lastFrameDeltaSongTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59bc944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_songEndTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59bc950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_songLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_timeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_timeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bc95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_timeScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_isReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bc964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_isReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IAudioTimeSource_State (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bc96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59bc974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x59bc980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.StartSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(int64_t)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59baab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "StartSong", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.SetConnectedPlayerSongTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(int64_t, float_t)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bcb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(),
                                                                                           { "SetConnectedPlayerSongTime", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.StopSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59bad84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "StopSong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59bcb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__audioSyncLerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSyncLerpSpeed;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__audioSyncLerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSyncLerpSpeed;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__audioSyncLerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSyncLerpSpeed = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__forcedSyncDeltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forcedSyncDeltaTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__forcedSyncDeltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forcedSyncDeltaTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__forcedSyncDeltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forcedSyncDeltaTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__startSyncDeltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSyncDeltaTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__startSyncDeltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSyncDeltaTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__startSyncDeltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startSyncDeltaTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__stopSyncDeltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopSyncDeltaTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__stopSyncDeltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopSyncDeltaTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__stopSyncDeltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stopSyncDeltaTime = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData*& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData* const&
GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__initData(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__songTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__songTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__songTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__lastFrameDeltaSongTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameDeltaSongTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__lastFrameDeltaSongTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameDeltaSongTime_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__lastFrameDeltaSongTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameDeltaSongTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__timeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeScale;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__timeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeScale;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__timeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeScale = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__startSongSyncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSongSyncTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__startSongSyncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSongSyncTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__startSongSyncTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startSongSyncTime = value;
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__fixingAudioSyncError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixingAudioSyncError;
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__fixingAudioSyncError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixingAudioSyncError;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__fixingAudioSyncError(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixingAudioSyncError = value;
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__isReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isReady;
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__isReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isReady;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__isReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isReady = value;
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_songTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "set_songTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_lastFrameDeltaSongTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "set_lastFrameDeltaSongTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_songEndTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_songLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_timeScale() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_timeScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_isReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::IAudioTimeSource_State GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_state() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IAudioTimeSource_State>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong(int64_t songStartSyncTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "StartSong", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songStartSyncTime);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime(int64_t syncTime, float_t songTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(),
                                                                                         { "SetConnectedPlayerSongTime", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncTime, songTime);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { "StopSong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
constexpr GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::operator ::GlobalNamespace::IAudioTimeSource*() noexcept {
  return static_cast<::GlobalNamespace::IAudioTimeSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioTimeSource"
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::i___GlobalNamespace__IAudioTimeSource() noexcept {
  return static_cast<::GlobalNamespace::IAudioTimeSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::MultiplayerConnectedPlayerSongTimeSyncController() {}
