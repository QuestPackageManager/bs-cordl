#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioTimeSyncController)
namespace GlobalNamespace {
class AudioTimeSyncController_InitData;
}
namespace GlobalNamespace {
struct AudioTimeSyncController_State;
}
namespace GlobalNamespace {
class IDspTimeProvider;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class WaitUntil;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioTimeSyncController_State;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class AudioTimeSyncController_InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioTimeSyncController_State);
MARK_REF_PTR_T(::GlobalNamespace::AudioTimeSyncController);
MARK_REF_PTR_T(::GlobalNamespace::AudioTimeSyncController_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioTimeSyncController/InitData
class CORDL_TYPE AudioTimeSyncController_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioClip, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audioClip, put = __cordl_internal_set_audioClip)) ::UnityW<::UnityEngine::AudioClip> audioClip;

  /// @brief Field songTimeOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_songTimeOffset, put = __cordl_internal_set_songTimeOffset)) float_t songTimeOffset;

  /// @brief Field startSongTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  /// @brief Field timeScale, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_timeScale, put = __cordl_internal_set_timeScale)) float_t timeScale;

  static inline ::GlobalNamespace::AudioTimeSyncController_InitData* New_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale);

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioClip();

  constexpr float_t const& __cordl_internal_get_songTimeOffset() const;

  constexpr float_t& __cordl_internal_get_songTimeOffset();

  constexpr float_t const& __cordl_internal_get_startSongTime() const;

  constexpr float_t& __cordl_internal_get_startSongTime();

  constexpr float_t const& __cordl_internal_get_timeScale() const;

  constexpr float_t& __cordl_internal_get_timeScale();

  constexpr void __cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_songTimeOffset(float_t value);

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  constexpr void __cordl_internal_set_timeScale(float_t value);

  /// @brief Method .ctor, addr 0x3ad50d0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioTimeSyncController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioTimeSyncController_InitData(AudioTimeSyncController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioTimeSyncController_InitData(AudioTimeSyncController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3999 };

  /// @brief Field audioClip, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___audioClip;

  /// @brief Field startSongTime, offset: 0x18, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songTimeOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ___songTimeOffset;

  /// @brief Field timeScale, offset: 0x20, size: 0x4, def value: None
  float_t ___timeScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController_InitData, ___audioClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController_InitData, ___startSongTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController_InitData, ___songTimeOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController_InitData, ___timeScale) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioTimeSyncController_InitData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioTimeSyncController/State
struct CORDL_TYPE AudioTimeSyncController_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioTimeSyncController_State_Unwrapped
  enum struct __AudioTimeSyncController_State_Unwrapped : int32_t {
    __E_Playing = static_cast<int32_t>(0x0),
    __E_Paused = static_cast<int32_t>(0x1),
    __E_Stopped = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioTimeSyncController_State_Unwrapped() const noexcept {
    return static_cast<__AudioTimeSyncController_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioTimeSyncController_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioTimeSyncController_State(int32_t value__) noexcept;

  /// @brief Field Paused value: I32(1)
  static ::GlobalNamespace::AudioTimeSyncController_State const Paused;

  /// @brief Field Playing value: I32(0)
  static ::GlobalNamespace::AudioTimeSyncController_State const Playing;

  /// @brief Field Stopped value: I32(2)
  static ::GlobalNamespace::AudioTimeSyncController_State const Stopped;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4000 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioTimeSyncController_State, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AudioTimeSyncController::State, IAudioTimeSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioTimeSyncController
class CORDL_TYPE AudioTimeSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::AudioTimeSyncController_InitData;

  using State = ::GlobalNamespace::AudioTimeSyncController_State;

  /// @brief Field _audioLatency, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__audioLatency, put = __cordl_internal_set__audioLatency)) float_t _audioLatency;

  /// @brief Field _audioSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _audioStartTimeOffsetSinceStart, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__audioStartTimeOffsetSinceStart, put = __cordl_internal_set__audioStartTimeOffsetSinceStart)) float_t _audioStartTimeOffsetSinceStart;

  /// @brief Field _audioStarted, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__audioStarted, put = __cordl_internal_set__audioStarted)) bool _audioStarted;

  /// @brief Field _audioSyncLerpSpeed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__audioSyncLerpSpeed, put = __cordl_internal_set__audioSyncLerpSpeed)) float_t _audioSyncLerpSpeed;

  /// @brief Field _canStartSong, offset 0x95, size 0x1
  __declspec(property(get = __cordl_internal_get__canStartSong, put = __cordl_internal_set__canStartSong)) bool _canStartSong;

  /// @brief Field _dspTimeOffset, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__dspTimeOffset, put = __cordl_internal_set__dspTimeOffset)) double_t _dspTimeOffset;

  /// @brief Field _dspTimeProvider, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__dspTimeProvider, put = __cordl_internal_set__dspTimeProvider)) ::GlobalNamespace::IDspTimeProvider* _dspTimeProvider;

  /// @brief Field _fixingAudioSyncError, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get__fixingAudioSyncError, put = __cordl_internal_set__fixingAudioSyncError)) bool _fixingAudioSyncError;

  /// @brief Field _forceNoAudioSyncOrAudioSyncErrorFixing, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get__forceNoAudioSyncOrAudioSyncErrorFixing,
                      put = __cordl_internal_set__forceNoAudioSyncOrAudioSyncErrorFixing)) bool _forceNoAudioSyncOrAudioSyncErrorFixing;

  /// @brief Field _forcedSyncDeltaTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__forcedSyncDeltaTime, put = __cordl_internal_set__forcedSyncDeltaTime)) float_t _forcedSyncDeltaTime;

  /// @brief Field _inBetweenDSPBufferingTimeEstimate, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__inBetweenDSPBufferingTimeEstimate, put = __cordl_internal_set__inBetweenDSPBufferingTimeEstimate)) float_t _inBetweenDSPBufferingTimeEstimate;

  /// @brief Field _initData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::AudioTimeSyncController_InitData* _initData;

  /// @brief Field _isReady, offset 0x96, size 0x1
  __declspec(property(get = __cordl_internal_get__isReady, put = __cordl_internal_set__isReady)) bool _isReady;

  /// @brief Field _lastFrameDeltaSongTime, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameDeltaSongTime, put = __cordl_internal_set__lastFrameDeltaSongTime)) float_t _lastFrameDeltaSongTime;

  /// @brief Field _playbackLoopIndex, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__playbackLoopIndex, put = __cordl_internal_set__playbackLoopIndex)) int32_t _playbackLoopIndex;

  /// @brief Field _prevAudioSamplePos, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__prevAudioSamplePos, put = __cordl_internal_set__prevAudioSamplePos)) int32_t _prevAudioSamplePos;

  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _songLoadingStarted, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get__songLoadingStarted, put = __cordl_internal_set__songLoadingStarted)) bool _songLoadingStarted;

  /// @brief Field _songTime, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__songTime, put = __cordl_internal_set__songTime)) float_t _songTime;

  /// @brief Field _songTimeOffset, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__songTimeOffset, put = __cordl_internal_set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _startSongTime, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__startSongTime, put = __cordl_internal_set__startSongTime)) float_t _startSongTime;

  /// @brief Field _startSyncDeltaTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__startSyncDeltaTime, put = __cordl_internal_set__startSyncDeltaTime)) float_t _startSyncDeltaTime;

  /// @brief Field _state, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::GlobalNamespace::AudioTimeSyncController_State _state;

  /// @brief Field _stopSyncDeltaTime, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__stopSyncDeltaTime, put = __cordl_internal_set__stopSyncDeltaTime)) float_t _stopSyncDeltaTime;

  /// @brief Field _timeScale, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__timeScale, put = __cordl_internal_set__timeScale)) float_t _timeScale;

  __declspec(property(get = get_dspTimeOffset)) double_t dspTimeOffset;

  __declspec(property(get = get_forceNoAudioSyncOrAudioSyncErrorFixing, put = set_forceNoAudioSyncOrAudioSyncErrorFixing)) bool forceNoAudioSyncOrAudioSyncErrorFixing;

  /// @brief Field forcedNoAudioSync, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_forcedNoAudioSync, put = __cordl_internal_set_forcedNoAudioSync)) bool forcedNoAudioSync;

  __declspec(property(get = get_isAudioLoaded)) bool isAudioLoaded;

  __declspec(property(get = get_isReady)) bool isReady;

  __declspec(property(get = get_lastFrameDeltaSongTime)) float_t lastFrameDeltaSongTime;

  __declspec(property(get = get_songEndTime)) float_t songEndTime;

  __declspec(property(get = get_songFailedToLoad)) bool songFailedToLoad;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_songTime)) float_t songTime;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_startSongTime)) float_t startSongTime;

  __declspec(property(get = get_state)) ::GlobalNamespace::AudioTimeSyncController_State state;

  /// @brief Field stateChangedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_stateChangedEvent, put = __cordl_internal_set_stateChangedEvent)) ::System::Action* stateChangedEvent;

  __declspec(property(get = get_timeScale)) float_t timeScale;

  __declspec(property(get = get_timeSinceStart)) float_t timeSinceStart;

  __declspec(property(get = get_waitUntilAudioIsLoaded)) ::UnityEngine::WaitUntil* waitUntilAudioIsLoaded;

  /// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
  constexpr operator ::GlobalNamespace::IAudioTimeSource*() noexcept;

  /// @brief Method Awake, addr 0x3ad47a0, size 0x48, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleAudioConfigurationChanged, addr 0x3ad49dc, size 0x44, virtual false, abstract: false, final false
  inline void HandleAudioConfigurationChanged(bool deviceWasChanged);

  static inline ::GlobalNamespace::AudioTimeSyncController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ad495c, size 0x80, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x3ad5010, size 0x58, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Resume, addr 0x3ad5068, size 0x50, virtual false, abstract: false, final false
  inline void Resume();

  /// @brief Method SeekTo, addr 0x3ad4e7c, size 0x14c, virtual false, abstract: false, final false
  inline void SeekTo(float_t startTimeOffset);

  /// @brief Method Start, addr 0x3ad47e8, size 0x174, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartSong, addr 0x3ad4e38, size 0x44, virtual false, abstract: false, final false
  inline void StartSong(float_t startTimeOffset);

  /// @brief Method StopSong, addr 0x3ad4fc8, size 0x48, virtual false, abstract: false, final false
  inline void StopSong();

  /// @brief Method Update, addr 0x3ad4a20, size 0x418, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__audioLatency() const;

  constexpr float_t& __cordl_internal_get__audioLatency();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr float_t const& __cordl_internal_get__audioStartTimeOffsetSinceStart() const;

  constexpr float_t& __cordl_internal_get__audioStartTimeOffsetSinceStart();

  constexpr bool const& __cordl_internal_get__audioStarted() const;

  constexpr bool& __cordl_internal_get__audioStarted();

  constexpr float_t const& __cordl_internal_get__audioSyncLerpSpeed() const;

  constexpr float_t& __cordl_internal_get__audioSyncLerpSpeed();

  constexpr bool const& __cordl_internal_get__canStartSong() const;

  constexpr bool& __cordl_internal_get__canStartSong();

  constexpr double_t const& __cordl_internal_get__dspTimeOffset() const;

  constexpr double_t& __cordl_internal_get__dspTimeOffset();

  constexpr ::GlobalNamespace::IDspTimeProvider* const& __cordl_internal_get__dspTimeProvider() const;

  constexpr ::GlobalNamespace::IDspTimeProvider*& __cordl_internal_get__dspTimeProvider();

  constexpr bool const& __cordl_internal_get__fixingAudioSyncError() const;

  constexpr bool& __cordl_internal_get__fixingAudioSyncError();

  constexpr bool const& __cordl_internal_get__forceNoAudioSyncOrAudioSyncErrorFixing() const;

  constexpr bool& __cordl_internal_get__forceNoAudioSyncOrAudioSyncErrorFixing();

  constexpr float_t const& __cordl_internal_get__forcedSyncDeltaTime() const;

  constexpr float_t& __cordl_internal_get__forcedSyncDeltaTime();

  constexpr float_t const& __cordl_internal_get__inBetweenDSPBufferingTimeEstimate() const;

  constexpr float_t& __cordl_internal_get__inBetweenDSPBufferingTimeEstimate();

  constexpr ::GlobalNamespace::AudioTimeSyncController_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::AudioTimeSyncController_InitData*& __cordl_internal_get__initData();

  constexpr bool const& __cordl_internal_get__isReady() const;

  constexpr bool& __cordl_internal_get__isReady();

  constexpr float_t const& __cordl_internal_get__lastFrameDeltaSongTime() const;

  constexpr float_t& __cordl_internal_get__lastFrameDeltaSongTime();

  constexpr int32_t const& __cordl_internal_get__playbackLoopIndex() const;

  constexpr int32_t& __cordl_internal_get__playbackLoopIndex();

  constexpr int32_t const& __cordl_internal_get__prevAudioSamplePos() const;

  constexpr int32_t& __cordl_internal_get__prevAudioSamplePos();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr bool const& __cordl_internal_get__songLoadingStarted() const;

  constexpr bool& __cordl_internal_get__songLoadingStarted();

  constexpr float_t const& __cordl_internal_get__songTime() const;

  constexpr float_t& __cordl_internal_get__songTime();

  constexpr float_t const& __cordl_internal_get__songTimeOffset() const;

  constexpr float_t& __cordl_internal_get__songTimeOffset();

  constexpr float_t const& __cordl_internal_get__startSongTime() const;

  constexpr float_t& __cordl_internal_get__startSongTime();

  constexpr float_t const& __cordl_internal_get__startSyncDeltaTime() const;

  constexpr float_t& __cordl_internal_get__startSyncDeltaTime();

  constexpr ::GlobalNamespace::AudioTimeSyncController_State const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::AudioTimeSyncController_State& __cordl_internal_get__state();

  constexpr float_t const& __cordl_internal_get__stopSyncDeltaTime() const;

  constexpr float_t& __cordl_internal_get__stopSyncDeltaTime();

  constexpr float_t const& __cordl_internal_get__timeScale() const;

  constexpr float_t& __cordl_internal_get__timeScale();

  constexpr bool const& __cordl_internal_get_forcedNoAudioSync() const;

  constexpr bool& __cordl_internal_get_forcedNoAudioSync();

  constexpr ::System::Action* const& __cordl_internal_get_stateChangedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_stateChangedEvent();

  constexpr void __cordl_internal_set__audioLatency(float_t value);

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__audioStartTimeOffsetSinceStart(float_t value);

  constexpr void __cordl_internal_set__audioStarted(bool value);

  constexpr void __cordl_internal_set__audioSyncLerpSpeed(float_t value);

  constexpr void __cordl_internal_set__canStartSong(bool value);

  constexpr void __cordl_internal_set__dspTimeOffset(double_t value);

  constexpr void __cordl_internal_set__dspTimeProvider(::GlobalNamespace::IDspTimeProvider* value);

  constexpr void __cordl_internal_set__fixingAudioSyncError(bool value);

  constexpr void __cordl_internal_set__forceNoAudioSyncOrAudioSyncErrorFixing(bool value);

  constexpr void __cordl_internal_set__forcedSyncDeltaTime(float_t value);

  constexpr void __cordl_internal_set__inBetweenDSPBufferingTimeEstimate(float_t value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::AudioTimeSyncController_InitData* value);

  constexpr void __cordl_internal_set__isReady(bool value);

  constexpr void __cordl_internal_set__lastFrameDeltaSongTime(float_t value);

  constexpr void __cordl_internal_set__playbackLoopIndex(int32_t value);

  constexpr void __cordl_internal_set__prevAudioSamplePos(int32_t value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__songLoadingStarted(bool value);

  constexpr void __cordl_internal_set__songTime(float_t value);

  constexpr void __cordl_internal_set__songTimeOffset(float_t value);

  constexpr void __cordl_internal_set__startSongTime(float_t value);

  constexpr void __cordl_internal_set__startSyncDeltaTime(float_t value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::AudioTimeSyncController_State value);

  constexpr void __cordl_internal_set__stopSyncDeltaTime(float_t value);

  constexpr void __cordl_internal_set__timeScale(float_t value);

  constexpr void __cordl_internal_set_forcedNoAudioSync(bool value);

  constexpr void __cordl_internal_set_stateChangedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3ad50b8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_waitUntilAudioIsLoaded>b__32_0, addr 0x3ad50cc, size 0x4, virtual false, abstract: false, final false
  inline bool _get_waitUntilAudioIsLoaded_b__32_0();

  /// @brief Method add_stateChangedEvent, addr 0x3ad4648, size 0x9c, virtual false, abstract: false, final false
  inline void add_stateChangedEvent(::System::Action* value);

  /// @brief Method get_dspTimeOffset, addr 0x3ad4574, size 0x8, virtual false, abstract: false, final false
  inline double_t get_dspTimeOffset();

  /// @brief Method get_forceNoAudioSyncOrAudioSyncErrorFixing, addr 0x3ad4634, size 0x8, virtual false, abstract: false, final false
  inline bool get_forceNoAudioSyncOrAudioSyncErrorFixing();

  /// @brief Method get_isAudioLoaded, addr 0x3ad4464, size 0xdc, virtual false, abstract: false, final false
  inline bool get_isAudioLoaded();

  /// @brief Method get_isReady, addr 0x3ad4624, size 0x8, virtual true, abstract: false, final true
  inline bool get_isReady();

  /// @brief Method get_lastFrameDeltaSongTime, addr 0x3ad42ec, size 0x8, virtual true, abstract: false, final true
  inline float_t get_lastFrameDeltaSongTime();

  /// @brief Method get_songEndTime, addr 0x3ad4548, size 0x24, virtual true, abstract: false, final true
  inline float_t get_songEndTime();

  /// @brief Method get_songFailedToLoad, addr 0x3ad438c, size 0xd8, virtual false, abstract: false, final false
  inline bool get_songFailedToLoad();

  /// @brief Method get_songLength, addr 0x3ad42f4, size 0x98, virtual true, abstract: false, final true
  inline float_t get_songLength();

  /// @brief Method get_songTime, addr 0x3ad42e4, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songTime();

  /// @brief Method get_songTimeOffset, addr 0x3ad462c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songTimeOffset();

  /// @brief Method get_startSongTime, addr 0x3ad4540, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startSongTime();

  /// @brief Method get_state, addr 0x3ad42dc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AudioTimeSyncController_State get_state();

  /// @brief Method get_timeScale, addr 0x3ad456c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_timeScale();

  /// @brief Method get_timeSinceStart, addr 0x3ad4780, size 0x20, virtual false, abstract: false, final false
  inline float_t get_timeSinceStart();

  /// @brief Method get_waitUntilAudioIsLoaded, addr 0x3ad457c, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::WaitUntil* get_waitUntilAudioIsLoaded();

  /// @brief Convert to "::GlobalNamespace::IAudioTimeSource"
  constexpr ::GlobalNamespace::IAudioTimeSource* i___GlobalNamespace__IAudioTimeSource() noexcept;

  /// @brief Method remove_stateChangedEvent, addr 0x3ad46e4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_stateChangedEvent(::System::Action* value);

  /// @brief Method set_forceNoAudioSyncOrAudioSyncErrorFixing, addr 0x3ad463c, size 0xc, virtual false, abstract: false, final false
  inline void set_forceNoAudioSyncOrAudioSyncErrorFixing(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioTimeSyncController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioTimeSyncController(AudioTimeSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioTimeSyncController(AudioTimeSyncController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4001 };

  /// @brief Field _audioSyncLerpSpeed, offset: 0x20, size: 0x4, def value: None
  float_t ____audioSyncLerpSpeed;

  /// @brief Field _forcedSyncDeltaTime, offset: 0x24, size: 0x4, def value: None
  float_t ____forcedSyncDeltaTime;

  /// @brief Field _startSyncDeltaTime, offset: 0x28, size: 0x4, def value: None
  float_t ____startSyncDeltaTime;

  /// @brief Field _stopSyncDeltaTime, offset: 0x2c, size: 0x4, def value: None
  float_t ____stopSyncDeltaTime;

  /// @brief Field _audioSource, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _initData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController_InitData* ____initData;

  /// @brief Field _dspTimeProvider, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IDspTimeProvider* ____dspTimeProvider;

  /// @brief Field forcedNoAudioSync, offset: 0x50, size: 0x1, def value: None
  bool ___forcedNoAudioSync;

  /// @brief Field stateChangedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___stateChangedEvent;

  /// @brief Field _audioLatency, offset: 0x60, size: 0x4, def value: None
  float_t ____audioLatency;

  /// @brief Field _fixingAudioSyncError, offset: 0x64, size: 0x1, def value: None
  bool ____fixingAudioSyncError;

  /// @brief Field _audioStartTimeOffsetSinceStart, offset: 0x68, size: 0x4, def value: None
  float_t ____audioStartTimeOffsetSinceStart;

  /// @brief Field _playbackLoopIndex, offset: 0x6c, size: 0x4, def value: None
  int32_t ____playbackLoopIndex;

  /// @brief Field _prevAudioSamplePos, offset: 0x70, size: 0x4, def value: None
  int32_t ____prevAudioSamplePos;

  /// @brief Field _startSongTime, offset: 0x74, size: 0x4, def value: None
  float_t ____startSongTime;

  /// @brief Field _songTimeOffset, offset: 0x78, size: 0x4, def value: None
  float_t ____songTimeOffset;

  /// @brief Field _audioStarted, offset: 0x7c, size: 0x1, def value: None
  bool ____audioStarted;

  /// @brief Field _timeScale, offset: 0x80, size: 0x4, def value: None
  float_t ____timeScale;

  /// @brief Field _songTime, offset: 0x84, size: 0x4, def value: None
  float_t ____songTime;

  /// @brief Field _dspTimeOffset, offset: 0x88, size: 0x8, def value: None
  double_t ____dspTimeOffset;

  /// @brief Field _state, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::AudioTimeSyncController_State ____state;

  /// @brief Field _songLoadingStarted, offset: 0x94, size: 0x1, def value: None
  bool ____songLoadingStarted;

  /// @brief Field _canStartSong, offset: 0x95, size: 0x1, def value: None
  bool ____canStartSong;

  /// @brief Field _isReady, offset: 0x96, size: 0x1, def value: None
  bool ____isReady;

  /// @brief Field _lastFrameDeltaSongTime, offset: 0x98, size: 0x4, def value: None
  float_t ____lastFrameDeltaSongTime;

  /// @brief Field _forceNoAudioSyncOrAudioSyncErrorFixing, offset: 0x9c, size: 0x1, def value: None
  bool ____forceNoAudioSyncOrAudioSyncErrorFixing;

  /// @brief Field _inBetweenDSPBufferingTimeEstimate, offset: 0xa0, size: 0x4, def value: None
  float_t ____inBetweenDSPBufferingTimeEstimate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioSyncLerpSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____forcedSyncDeltaTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____startSyncDeltaTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____stopSyncDeltaTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____settingsManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____initData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____dspTimeProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ___forcedNoAudioSync) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ___stateChangedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioLatency) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____fixingAudioSyncError) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioStartTimeOffsetSinceStart) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____playbackLoopIndex) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____prevAudioSamplePos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____startSongTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____songTimeOffset) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioStarted) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____timeScale) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____songTime) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____dspTimeOffset) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____state) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____songLoadingStarted) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____canStartSong) == 0x95, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____isReady) == 0x96, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____lastFrameDeltaSongTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____forceNoAudioSyncOrAudioSyncErrorFixing) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____inBetweenDSPBufferingTimeEstimate) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioTimeSyncController, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTimeSyncController_State, "", "AudioTimeSyncController/State");
NEED_NO_BOX(::GlobalNamespace::AudioTimeSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTimeSyncController*, "", "AudioTimeSyncController");
NEED_NO_BOX(::GlobalNamespace::AudioTimeSyncController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTimeSyncController_InitData*, "", "AudioTimeSyncController/InitData");
