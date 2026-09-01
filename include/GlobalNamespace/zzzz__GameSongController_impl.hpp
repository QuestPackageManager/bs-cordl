#pragma once
// IWYU pragma private; include "GlobalNamespace\GameSongController.hpp"
#include "GlobalNamespace/zzzz__SongController_impl.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__AudioPitchGainEffect_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksUpdater_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameSongController.get_songLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::get_songLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f6da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "get_songLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.get_waitUntilIsReadyToStartTheSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::GameSongController::*)()>(
    &::GlobalNamespace::GameSongController::get_waitUntilIsReadyToStartTheSong)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f6dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "get_waitUntilIsReadyToStartTheSong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.get_songFailedToLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::get_songFailedToLoad)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f6dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "get_songFailedToLoad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::LateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59f6df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.StartSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSongController::*)(float_t)>(&::GlobalNamespace::GameSongController::StartSong)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x59f6e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "StartSong", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.StopSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::StopSong)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f6efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { ::i2c::class_of<::GlobalNamespace::GameSongController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.PauseSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::PauseSong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59f6f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { ::i2c::class_of<::GlobalNamespace::GameSongController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.ResumeSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::ResumeSong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59f6f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { ::i2c::class_of<::GlobalNamespace::GameSongController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.FailStopSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::FailStopSong)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x59f6f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "FailStopSong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController.SeekTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSongController::*)(float_t)>(&::GlobalNamespace::GameSongController::SeekTo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f70e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "SeekTo", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f70fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSongController._FailStopSong_b__16_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSongController::*)()>(&::GlobalNamespace::GameSongController::_FailStopSong_b__16_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f7104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "<FailStopSong>b__16_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::GameSongController::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::GameSongController::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::GameSongController::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& GlobalNamespace::GameSongController::__cordl_internal_get__failAudioPitchGainEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failAudioPitchGainEffect;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& GlobalNamespace::GameSongController::__cordl_internal_get__failAudioPitchGainEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failAudioPitchGainEffect;
}
constexpr void GlobalNamespace::GameSongController::__cordl_internal_set__failAudioPitchGainEffect(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failAudioPitchGainEffect = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::GameSongController::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::GameSongController::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::GameSongController::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater>& GlobalNamespace::GameSongController::__cordl_internal_get__beatmapCallbacksUpdater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksUpdater;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> const& GlobalNamespace::GameSongController::__cordl_internal_get__beatmapCallbacksUpdater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksUpdater;
}
constexpr void GlobalNamespace::GameSongController::__cordl_internal_set__beatmapCallbacksUpdater(::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksUpdater = value;
}
constexpr bool& GlobalNamespace::GameSongController::__cordl_internal_get__songDidFinish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDidFinish;
}
constexpr bool const& GlobalNamespace::GameSongController::__cordl_internal_get__songDidFinish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDidFinish;
}
constexpr void GlobalNamespace::GameSongController::__cordl_internal_set__songDidFinish(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songDidFinish = value;
}
inline float_t GlobalNamespace::GameSongController::get_songLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "get_songLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::GameSongController::get_waitUntilIsReadyToStartTheSong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "get_waitUntilIsReadyToStartTheSong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*>(this, ___internal_method);
}
inline bool GlobalNamespace::GameSongController::get_songFailedToLoad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "get_songFailedToLoad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::StartSong(float_t songTimeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "StartSong", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTimeOffset);
}
inline void GlobalNamespace::GameSongController::StopSong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameSongController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::PauseSong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameSongController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::ResumeSong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameSongController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::FailStopSong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "FailStopSong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::SeekTo(float_t songTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "SeekTo", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime);
}
inline void GlobalNamespace::GameSongController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSongController::_FailStopSong_b__16_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameSongController*>(), { "<FailStopSong>b__16_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameSongController* GlobalNamespace::GameSongController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameSongController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
constexpr GlobalNamespace::GameSongController::operator ::GlobalNamespace::IStartSeekSongController*() noexcept {
  return static_cast<::GlobalNamespace::IStartSeekSongController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IStartSeekSongController"
constexpr ::GlobalNamespace::IStartSeekSongController* GlobalNamespace::GameSongController::i___GlobalNamespace__IStartSeekSongController() noexcept {
  return static_cast<::GlobalNamespace::IStartSeekSongController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSongController::GameSongController() {}
