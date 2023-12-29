#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioTimeSyncController)
namespace GlobalNamespace {
class __AudioTimeSyncController__InitData;
}
namespace GlobalNamespace {
struct __AudioTimeSyncController__State;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace System {
class Action;
}
namespace UnityEngine {
class WaitUntil;
}
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AudioTimeSyncController__State;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class __AudioTimeSyncController__InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AudioTimeSyncController__State);
MARK_REF_PTR_T(::GlobalNamespace::AudioTimeSyncController);
MARK_REF_PTR_T(::GlobalNamespace::__AudioTimeSyncController__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4039))
// CS Name: ::AudioTimeSyncController::InitData*
class CORDL_TYPE __AudioTimeSyncController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioClip, offset 0x10, size 0x8
  __declspec(property(get = __get_audioClip, put = __set_audioClip))::UnityEngine::AudioClip* audioClip;

  /// @brief Field startSongTime, offset 0x18, size 0x4
  __declspec(property(get = __get_startSongTime, put = __set_startSongTime)) float_t startSongTime;

  /// @brief Field songTimeOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get_songTimeOffset, put = __set_songTimeOffset)) float_t songTimeOffset;

  /// @brief Field timeScale, offset 0x20, size 0x4
  __declspec(property(get = __get_timeScale, put = __set_timeScale)) float_t timeScale;

  constexpr ::UnityEngine::AudioClip*& __get_audioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get_audioClip() const;

  constexpr void __set_audioClip(::UnityEngine::AudioClip* value);

  constexpr float_t& __get_startSongTime();

  constexpr float_t const& __get_startSongTime() const;

  constexpr void __set_startSongTime(float_t value);

  constexpr float_t& __get_songTimeOffset();

  constexpr float_t const& __get_songTimeOffset() const;

  constexpr void __set_songTimeOffset(float_t value);

  constexpr float_t& __get_timeScale();

  constexpr float_t const& __get_timeScale() const;

  constexpr void __set_timeScale(float_t value);

  static inline ::GlobalNamespace::__AudioTimeSyncController__InitData* New_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale);

  /// @brief Method .ctor addr 0x20cc740 size 0x4c virtual false final false
  inline void _ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale);

  // Ctor Parameters [CppParam { name: "", ty: "__AudioTimeSyncController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioTimeSyncController__InitData(__AudioTimeSyncController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioTimeSyncController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioTimeSyncController__InitData(__AudioTimeSyncController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioTimeSyncController__InitData();

public:
  /// @brief Field audioClip, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ___audioClip;

  /// @brief Field startSongTime, offset: 0x18, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songTimeOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ___songTimeOffset;

  /// @brief Field timeScale, offset: 0x20, size: 0x4, def value: None
  float_t ___timeScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioTimeSyncController__InitData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioTimeSyncController__InitData, ___audioClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioTimeSyncController__InitData, ___startSongTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioTimeSyncController__InitData, ___songTimeOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioTimeSyncController__InitData, ___timeScale) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4040))
// CS Name: ::AudioTimeSyncController::State
struct CORDL_TYPE __AudioTimeSyncController__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AudioTimeSyncController__State_Unwrapped
  enum struct ____AudioTimeSyncController__State_Unwrapped : int32_t {
    __E_Playing = static_cast<int32_t>(0x0),
    __E_Paused = static_cast<int32_t>(0x1),
    __E_Stopped = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AudioTimeSyncController__State_Unwrapped() const noexcept {
    return static_cast<____AudioTimeSyncController__State_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AudioTimeSyncController__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioTimeSyncController__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Playing value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AudioTimeSyncController__State const Playing;

  /// @brief Field Paused value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AudioTimeSyncController__State const Paused;

  /// @brief Field Stopped value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AudioTimeSyncController__State const Stopped;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioTimeSyncController__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioTimeSyncController__State, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AudioTimeSyncController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 141, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(4040))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4041))
// CS Name: ::AudioTimeSyncController*
class CORDL_TYPE AudioTimeSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using State = ::GlobalNamespace::__AudioTimeSyncController__State;

  using InitData = ::GlobalNamespace::__AudioTimeSyncController__InitData;

  /// @brief Field _audioSyncLerpSpeed, offset 0x18, size 0x4
  __declspec(property(get = __get__audioSyncLerpSpeed, put = __set__audioSyncLerpSpeed)) float_t _audioSyncLerpSpeed;

  /// @brief Field _forcedSyncDeltaTime, offset 0x1c, size 0x4
  __declspec(property(get = __get__forcedSyncDeltaTime, put = __set__forcedSyncDeltaTime)) float_t _forcedSyncDeltaTime;

  /// @brief Field _startSyncDeltaTime, offset 0x20, size 0x4
  __declspec(property(get = __get__startSyncDeltaTime, put = __set__startSyncDeltaTime)) float_t _startSyncDeltaTime;

  /// @brief Field _stopSyncDeltaTime, offset 0x24, size 0x4
  __declspec(property(get = __get__stopSyncDeltaTime, put = __set__stopSyncDeltaTime)) float_t _stopSyncDeltaTime;

  /// @brief Field _audioSource, offset 0x28, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _audioLatency, offset 0x30, size 0x8
  __declspec(property(get = __get__audioLatency, put = __set__audioLatency))::GlobalNamespace::FloatSO* _audioLatency;

  /// @brief Field _initData, offset 0x38, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__AudioTimeSyncController__InitData* _initData;

  /// @brief Field forcedNoAudioSync, offset 0x40, size 0x1
  __declspec(property(get = __get_forcedNoAudioSync, put = __set_forcedNoAudioSync)) bool forcedNoAudioSync;

  /// @brief Field stateChangedEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_stateChangedEvent, put = __set_stateChangedEvent))::System::Action* stateChangedEvent;

  /// @brief Field _fixingAudioSyncError, offset 0x50, size 0x1
  __declspec(property(get = __get__fixingAudioSyncError, put = __set__fixingAudioSyncError)) bool _fixingAudioSyncError;

  /// @brief Field _audioStartTimeOffsetSinceStart, offset 0x54, size 0x4
  __declspec(property(get = __get__audioStartTimeOffsetSinceStart, put = __set__audioStartTimeOffsetSinceStart)) float_t _audioStartTimeOffsetSinceStart;

  /// @brief Field _playbackLoopIndex, offset 0x58, size 0x4
  __declspec(property(get = __get__playbackLoopIndex, put = __set__playbackLoopIndex)) int32_t _playbackLoopIndex;

  /// @brief Field _prevAudioSamplePos, offset 0x5c, size 0x4
  __declspec(property(get = __get__prevAudioSamplePos, put = __set__prevAudioSamplePos)) int32_t _prevAudioSamplePos;

  /// @brief Field _startSongTime, offset 0x60, size 0x4
  __declspec(property(get = __get__startSongTime, put = __set__startSongTime)) float_t _startSongTime;

  /// @brief Field _songTimeOffset, offset 0x64, size 0x4
  __declspec(property(get = __get__songTimeOffset, put = __set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _audioStarted, offset 0x68, size 0x1
  __declspec(property(get = __get__audioStarted, put = __set__audioStarted)) bool _audioStarted;

  /// @brief Field _timeScale, offset 0x6c, size 0x4
  __declspec(property(get = __get__timeScale, put = __set__timeScale)) float_t _timeScale;

  /// @brief Field _songTime, offset 0x70, size 0x4
  __declspec(property(get = __get__songTime, put = __set__songTime)) float_t _songTime;

  /// @brief Field _dspTimeOffset, offset 0x78, size 0x8
  __declspec(property(get = __get__dspTimeOffset, put = __set__dspTimeOffset)) double_t _dspTimeOffset;

  /// @brief Field _state, offset 0x80, size 0x4
  __declspec(property(get = __get__state, put = __set__state))::GlobalNamespace::__AudioTimeSyncController__State _state;

  /// @brief Field _canStartSong, offset 0x84, size 0x1
  __declspec(property(get = __get__canStartSong, put = __set__canStartSong)) bool _canStartSong;

  /// @brief Field _isReady, offset 0x85, size 0x1
  __declspec(property(get = __get__isReady, put = __set__isReady)) bool _isReady;

  /// @brief Field _lastFrameDeltaSongTime, offset 0x88, size 0x4
  __declspec(property(get = __get__lastFrameDeltaSongTime, put = __set__lastFrameDeltaSongTime)) float_t _lastFrameDeltaSongTime;

  /// @brief Field _forceNoAudioSyncOrAudioSyncErrorFixing, offset 0x8c, size 0x1
  __declspec(property(get = __get__forceNoAudioSyncOrAudioSyncErrorFixing, put = __set__forceNoAudioSyncOrAudioSyncErrorFixing)) bool _forceNoAudioSyncOrAudioSyncErrorFixing;

  __declspec(property(get = get_state))::GlobalNamespace::__AudioTimeSyncController__State state;

  __declspec(property(get = get_songTime)) float_t songTime;

  __declspec(property(get = get_lastFrameDeltaSongTime)) float_t lastFrameDeltaSongTime;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_isAudioLoaded)) bool isAudioLoaded;

  __declspec(property(get = get_songEndTime)) float_t songEndTime;

  __declspec(property(get = get_timeScale)) float_t timeScale;

  __declspec(property(get = get_dspTimeOffset)) double_t dspTimeOffset;

  __declspec(property(get = get_waitUntilAudioIsLoaded))::UnityEngine::WaitUntil* waitUntilAudioIsLoaded;

  __declspec(property(get = get_isReady)) bool isReady;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_forceNoAudioSyncOrAudioSyncErrorFixing, put = set_forceNoAudioSyncOrAudioSyncErrorFixing)) bool forceNoAudioSyncOrAudioSyncErrorFixing;

  __declspec(property(get = get_timeSinceStart)) float_t timeSinceStart;

  /// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
  constexpr operator ::GlobalNamespace::IAudioTimeSource*() noexcept;

  constexpr float_t& __get__audioSyncLerpSpeed();

  constexpr float_t const& __get__audioSyncLerpSpeed() const;

  constexpr void __set__audioSyncLerpSpeed(float_t value);

  constexpr float_t& __get__forcedSyncDeltaTime();

  constexpr float_t const& __get__forcedSyncDeltaTime() const;

  constexpr void __set__forcedSyncDeltaTime(float_t value);

  constexpr float_t& __get__startSyncDeltaTime();

  constexpr float_t const& __get__startSyncDeltaTime() const;

  constexpr void __set__startSyncDeltaTime(float_t value);

  constexpr float_t& __get__stopSyncDeltaTime();

  constexpr float_t const& __get__stopSyncDeltaTime() const;

  constexpr void __set__stopSyncDeltaTime(float_t value);

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr ::GlobalNamespace::FloatSO*& __get__audioLatency();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__audioLatency() const;

  constexpr void __set__audioLatency(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::__AudioTimeSyncController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AudioTimeSyncController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__AudioTimeSyncController__InitData* value);

  constexpr bool& __get_forcedNoAudioSync();

  constexpr bool const& __get_forcedNoAudioSync() const;

  constexpr void __set_forcedNoAudioSync(bool value);

  constexpr ::System::Action*& __get_stateChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_stateChangedEvent() const;

  constexpr void __set_stateChangedEvent(::System::Action* value);

  constexpr bool& __get__fixingAudioSyncError();

  constexpr bool const& __get__fixingAudioSyncError() const;

  constexpr void __set__fixingAudioSyncError(bool value);

  constexpr float_t& __get__audioStartTimeOffsetSinceStart();

  constexpr float_t const& __get__audioStartTimeOffsetSinceStart() const;

  constexpr void __set__audioStartTimeOffsetSinceStart(float_t value);

  constexpr int32_t& __get__playbackLoopIndex();

  constexpr int32_t const& __get__playbackLoopIndex() const;

  constexpr void __set__playbackLoopIndex(int32_t value);

  constexpr int32_t& __get__prevAudioSamplePos();

  constexpr int32_t const& __get__prevAudioSamplePos() const;

  constexpr void __set__prevAudioSamplePos(int32_t value);

  constexpr float_t& __get__startSongTime();

  constexpr float_t const& __get__startSongTime() const;

  constexpr void __set__startSongTime(float_t value);

  constexpr float_t& __get__songTimeOffset();

  constexpr float_t const& __get__songTimeOffset() const;

  constexpr void __set__songTimeOffset(float_t value);

  constexpr bool& __get__audioStarted();

  constexpr bool const& __get__audioStarted() const;

  constexpr void __set__audioStarted(bool value);

  constexpr float_t& __get__timeScale();

  constexpr float_t const& __get__timeScale() const;

  constexpr void __set__timeScale(float_t value);

  constexpr float_t& __get__songTime();

  constexpr float_t const& __get__songTime() const;

  constexpr void __set__songTime(float_t value);

  constexpr double_t& __get__dspTimeOffset();

  constexpr double_t const& __get__dspTimeOffset() const;

  constexpr void __set__dspTimeOffset(double_t value);

  constexpr ::GlobalNamespace::__AudioTimeSyncController__State& __get__state();

  constexpr ::GlobalNamespace::__AudioTimeSyncController__State const& __get__state() const;

  constexpr void __set__state(::GlobalNamespace::__AudioTimeSyncController__State value);

  constexpr bool& __get__canStartSong();

  constexpr bool const& __get__canStartSong() const;

  constexpr void __set__canStartSong(bool value);

  constexpr bool& __get__isReady();

  constexpr bool const& __get__isReady() const;

  constexpr void __set__isReady(bool value);

  constexpr float_t& __get__lastFrameDeltaSongTime();

  constexpr float_t const& __get__lastFrameDeltaSongTime() const;

  constexpr void __set__lastFrameDeltaSongTime(float_t value);

  constexpr bool& __get__forceNoAudioSyncOrAudioSyncErrorFixing();

  constexpr bool const& __get__forceNoAudioSyncOrAudioSyncErrorFixing() const;

  constexpr void __set__forceNoAudioSyncOrAudioSyncErrorFixing(bool value);

  /// @brief Method get_state addr 0x20cab98 size 0x8 virtual false final false
  inline ::GlobalNamespace::__AudioTimeSyncController__State get_state();

  /// @brief Method get_songTime addr 0x20caba0 size 0x8 virtual true final true
  inline float_t get_songTime();

  /// @brief Method get_lastFrameDeltaSongTime addr 0x20caba8 size 0x8 virtual true final true
  inline float_t get_lastFrameDeltaSongTime();

  /// @brief Method get_songLength addr 0x20cabb0 size 0x98 virtual true final true
  inline float_t get_songLength();

  /// @brief Method get_isAudioLoaded addr 0x20cac48 size 0x30 virtual false final false
  inline bool get_isAudioLoaded();

  /// @brief Method get_songEndTime addr 0x20cac78 size 0x6c virtual true final true
  inline float_t get_songEndTime();

  /// @brief Method get_timeScale addr 0x20cace4 size 0x8 virtual false final false
  inline float_t get_timeScale();

  /// @brief Method get_dspTimeOffset addr 0x20cacec size 0x8 virtual false final false
  inline double_t get_dspTimeOffset();

  /// @brief Method get_waitUntilAudioIsLoaded addr 0x20cacf4 size 0xac virtual false final false
  inline ::UnityEngine::WaitUntil* get_waitUntilAudioIsLoaded();

  /// @brief Method get_isReady addr 0x20cada0 size 0x8 virtual true final true
  inline bool get_isReady();

  /// @brief Method get_songTimeOffset addr 0x20cada8 size 0x8 virtual false final false
  inline float_t get_songTimeOffset();

  /// @brief Method get_forceNoAudioSyncOrAudioSyncErrorFixing addr 0x20cadb0 size 0x8 virtual false final false
  inline bool get_forceNoAudioSyncOrAudioSyncErrorFixing();

  /// @brief Method set_forceNoAudioSyncOrAudioSyncErrorFixing addr 0x20cadb8 size 0xc virtual false final false
  inline void set_forceNoAudioSyncOrAudioSyncErrorFixing(bool value);

  /// @brief Method add_stateChangedEvent addr 0x20cadc4 size 0x9c virtual false final false
  inline void add_stateChangedEvent(::System::Action* value);

  /// @brief Method remove_stateChangedEvent addr 0x20cae60 size 0x9c virtual false final false
  inline void remove_stateChangedEvent(::System::Action* value);

  /// @brief Method get_timeSinceStart addr 0x20caefc size 0x20 virtual false final false
  inline float_t get_timeSinceStart();

  /// @brief Method Awake addr 0x20caf1c size 0x48 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x20caf64 size 0xd8 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x20cb03c size 0x358 virtual false final false
  inline void Update();

  /// @brief Method StartSong addr 0x20cb394 size 0x44 virtual false final false
  inline void StartSong(float_t startTimeOffset);

  /// @brief Method SeekTo addr 0x20cb3d8 size 0x180 virtual false final false
  inline void SeekTo(float_t startTimeOffset);

  /// @brief Method StopSong addr 0x20cb558 size 0x48 virtual false final false
  inline void StopSong();

  /// @brief Method Pause addr 0x20cb5a0 size 0x58 virtual false final false
  inline void Pause();

  /// @brief Method Resume addr 0x20cb5f8 size 0x50 virtual false final false
  inline void Resume();

  /// @brief Method SetSongTimeIntoAudioTime addr 0x20cb648 size 0xe0 virtual false final false
  inline void SetSongTimeIntoAudioTime();

  static inline ::GlobalNamespace::AudioTimeSyncController* New_ctor();

  /// @brief Method .ctor addr 0x20cb728 size 0x14 virtual false final false
  inline void _ctor();

  /// @brief Method <get_waitUntilAudioIsLoaded>b__27_0 addr 0x20cb73c size 0x1004 virtual false final false
  inline bool _get_waitUntilAudioIsLoaded_b__27_0();

  // Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioTimeSyncController(AudioTimeSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioTimeSyncController(AudioTimeSyncController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioTimeSyncController();

public:
  /// @brief Field _audioSyncLerpSpeed, offset: 0x18, size: 0x4, def value: None
  float_t ____audioSyncLerpSpeed;

  /// @brief Field _forcedSyncDeltaTime, offset: 0x1c, size: 0x4, def value: None
  float_t ____forcedSyncDeltaTime;

  /// @brief Field _startSyncDeltaTime, offset: 0x20, size: 0x4, def value: None
  float_t ____startSyncDeltaTime;

  /// @brief Field _stopSyncDeltaTime, offset: 0x24, size: 0x4, def value: None
  float_t ____stopSyncDeltaTime;

  /// @brief Field _audioSource, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field _audioLatency, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____audioLatency;

  /// @brief Field _initData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__AudioTimeSyncController__InitData* ____initData;

  /// @brief Field forcedNoAudioSync, offset: 0x40, size: 0x1, def value: None
  bool ___forcedNoAudioSync;

  /// @brief Field stateChangedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___stateChangedEvent;

  /// @brief Field _fixingAudioSyncError, offset: 0x50, size: 0x1, def value: None
  bool ____fixingAudioSyncError;

  /// @brief Field _audioStartTimeOffsetSinceStart, offset: 0x54, size: 0x4, def value: None
  float_t ____audioStartTimeOffsetSinceStart;

  /// @brief Field _playbackLoopIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ____playbackLoopIndex;

  /// @brief Field _prevAudioSamplePos, offset: 0x5c, size: 0x4, def value: None
  int32_t ____prevAudioSamplePos;

  /// @brief Field _startSongTime, offset: 0x60, size: 0x4, def value: None
  float_t ____startSongTime;

  /// @brief Field _songTimeOffset, offset: 0x64, size: 0x4, def value: None
  float_t ____songTimeOffset;

  /// @brief Field _audioStarted, offset: 0x68, size: 0x1, def value: None
  bool ____audioStarted;

  /// @brief Field _timeScale, offset: 0x6c, size: 0x4, def value: None
  float_t ____timeScale;

  /// @brief Field _songTime, offset: 0x70, size: 0x4, def value: None
  float_t ____songTime;

  /// @brief Field _dspTimeOffset, offset: 0x78, size: 0x8, def value: None
  double_t ____dspTimeOffset;

  /// @brief Field _state, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::__AudioTimeSyncController__State ____state;

  /// @brief Field _canStartSong, offset: 0x84, size: 0x1, def value: None
  bool ____canStartSong;

  /// @brief Field _isReady, offset: 0x85, size: 0x1, def value: None
  bool ____isReady;

  /// @brief Field _lastFrameDeltaSongTime, offset: 0x88, size: 0x4, def value: None
  float_t ____lastFrameDeltaSongTime;

  /// @brief Field _forceNoAudioSyncOrAudioSyncErrorFixing, offset: 0x8c, size: 0x1, def value: None
  bool ____forceNoAudioSyncOrAudioSyncErrorFixing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioTimeSyncController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioSyncLerpSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____forcedSyncDeltaTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____startSyncDeltaTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____stopSyncDeltaTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioLatency) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____initData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ___forcedNoAudioSync) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ___stateChangedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____fixingAudioSyncError) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioStartTimeOffsetSinceStart) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____playbackLoopIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____prevAudioSamplePos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____startSongTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____songTimeOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____audioStarted) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____timeScale) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____songTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____dspTimeOffset) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____state) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____canStartSong) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____isReady) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____lastFrameDeltaSongTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioTimeSyncController, ____forceNoAudioSyncOrAudioSyncErrorFixing) == 0x8c, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioTimeSyncController__State, "", "AudioTimeSyncController/State");
NEED_NO_BOX(::GlobalNamespace::AudioTimeSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTimeSyncController*, "", "AudioTimeSyncController");
NEED_NO_BOX(::GlobalNamespace::__AudioTimeSyncController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioTimeSyncController__InitData*, "", "AudioTimeSyncController/InitData");
