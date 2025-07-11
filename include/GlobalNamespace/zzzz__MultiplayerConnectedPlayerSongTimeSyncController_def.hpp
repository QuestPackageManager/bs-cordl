#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerSongTimeSyncController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerSongTimeSyncController)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController_InitData;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerSongTimeSyncController/InitData
class CORDL_TYPE MultiplayerConnectedPlayerSongTimeSyncController_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field songTimeOffset, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_songTimeOffset, put = __cordl_internal_set_songTimeOffset)) float_t songTimeOffset;

  /// @brief Field startSongTime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  /// @brief Field timeScale, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_timeScale, put = __cordl_internal_set_timeScale)) float_t timeScale;

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData* New_ctor(float_t startSongTime, float_t songTimeOffset, float_t timeScale);

  constexpr float_t const& __cordl_internal_get_songTimeOffset() const;

  constexpr float_t& __cordl_internal_get_songTimeOffset();

  constexpr float_t const& __cordl_internal_get_startSongTime() const;

  constexpr float_t& __cordl_internal_get_startSongTime();

  constexpr float_t const& __cordl_internal_get_timeScale() const;

  constexpr float_t& __cordl_internal_get_timeScale();

  constexpr void __cordl_internal_set_songTimeOffset(float_t value);

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  constexpr void __cordl_internal_set_timeScale(float_t value);

  /// @brief Method .ctor, addr 0x3bb9e94, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(float_t startSongTime, float_t songTimeOffset, float_t timeScale);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerSongTimeSyncController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSongTimeSyncController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerSongTimeSyncController_InitData(MultiplayerConnectedPlayerSongTimeSyncController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSongTimeSyncController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerSongTimeSyncController_InitData(MultiplayerConnectedPlayerSongTimeSyncController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4490 };

  /// @brief Field startSongTime, offset: 0x10, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songTimeOffset, offset: 0x14, size: 0x4, def value: None
  float_t ___songTimeOffset;

  /// @brief Field timeScale, offset: 0x18, size: 0x4, def value: None
  float_t ___timeScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData, ___startSongTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData, ___songTimeOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData, ___timeScale) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IAudioTimeSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerSongTimeSyncController
class CORDL_TYPE MultiplayerConnectedPlayerSongTimeSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData;

  /// @brief Field _audioSyncLerpSpeed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__audioSyncLerpSpeed, put = __cordl_internal_set__audioSyncLerpSpeed)) float_t _audioSyncLerpSpeed;

  /// @brief Field _connectedPlayer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _fixingAudioSyncError, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__fixingAudioSyncError, put = __cordl_internal_set__fixingAudioSyncError)) bool _fixingAudioSyncError;

  /// @brief Field _forcedSyncDeltaTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__forcedSyncDeltaTime, put = __cordl_internal_set__forcedSyncDeltaTime)) float_t _forcedSyncDeltaTime;

  /// @brief Field _initData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData* _initData;

  /// @brief Field _isReady, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get__isReady, put = __cordl_internal_set__isReady)) bool _isReady;

  /// @brief Field <lastFrameDeltaSongTime>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameDeltaSongTime_k__BackingField,
                      put = __cordl_internal_set__lastFrameDeltaSongTime_k__BackingField)) float_t _lastFrameDeltaSongTime_k__BackingField;

  /// @brief Field _settingsManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field <songTime>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__songTime_k__BackingField, put = __cordl_internal_set__songTime_k__BackingField)) float_t _songTime_k__BackingField;

  /// @brief Field _startSongSyncTime, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__startSongSyncTime, put = __cordl_internal_set__startSongSyncTime)) int64_t _startSongSyncTime;

  /// @brief Field _startSyncDeltaTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__startSyncDeltaTime, put = __cordl_internal_set__startSyncDeltaTime)) float_t _startSyncDeltaTime;

  /// @brief Field _stopSyncDeltaTime, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__stopSyncDeltaTime, put = __cordl_internal_set__stopSyncDeltaTime)) float_t _stopSyncDeltaTime;

  /// @brief Field _timeScale, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__timeScale, put = __cordl_internal_set__timeScale)) float_t _timeScale;

  __declspec(property(get = get_isReady)) bool isReady;

  __declspec(property(get = get_lastFrameDeltaSongTime, put = set_lastFrameDeltaSongTime)) float_t lastFrameDeltaSongTime;

  __declspec(property(get = get_songEndTime)) float_t songEndTime;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_songTime, put = set_songTime)) float_t songTime;

  __declspec(property(get = get_timeScale)) float_t timeScale;

  /// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
  constexpr operator ::GlobalNamespace::IAudioTimeSource*() noexcept;

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* New_ctor();

  /// @brief Method SetConnectedPlayerSongTime, addr 0x3bba5fc, size 0x38, virtual false, abstract: false, final false
  inline void SetConnectedPlayerSongTime(int64_t syncTime, float_t songTime);

  /// @brief Method Start, addr 0x3bba490, size 0xc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartSong, addr 0x3bb87b0, size 0x140, virtual false, abstract: false, final false
  inline void StartSong(int64_t songStartSyncTime);

  /// @brief Method StopSong, addr 0x3bb8a6c, size 0xc, virtual false, abstract: false, final false
  inline void StopSong();

  /// @brief Method Update, addr 0x3bba49c, size 0x160, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__audioSyncLerpSpeed() const;

  constexpr float_t& __cordl_internal_get__audioSyncLerpSpeed();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr bool const& __cordl_internal_get__fixingAudioSyncError() const;

  constexpr bool& __cordl_internal_get__fixingAudioSyncError();

  constexpr float_t const& __cordl_internal_get__forcedSyncDeltaTime() const;

  constexpr float_t& __cordl_internal_get__forcedSyncDeltaTime();

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData*& __cordl_internal_get__initData();

  constexpr bool const& __cordl_internal_get__isReady() const;

  constexpr bool& __cordl_internal_get__isReady();

  constexpr float_t const& __cordl_internal_get__lastFrameDeltaSongTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__lastFrameDeltaSongTime_k__BackingField();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr float_t const& __cordl_internal_get__songTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__songTime_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__startSongSyncTime() const;

  constexpr int64_t& __cordl_internal_get__startSongSyncTime();

  constexpr float_t const& __cordl_internal_get__startSyncDeltaTime() const;

  constexpr float_t& __cordl_internal_get__startSyncDeltaTime();

  constexpr float_t const& __cordl_internal_get__stopSyncDeltaTime() const;

  constexpr float_t& __cordl_internal_get__stopSyncDeltaTime();

  constexpr float_t const& __cordl_internal_get__timeScale() const;

  constexpr float_t& __cordl_internal_get__timeScale();

  constexpr void __cordl_internal_set__audioSyncLerpSpeed(float_t value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__fixingAudioSyncError(bool value);

  constexpr void __cordl_internal_set__forcedSyncDeltaTime(float_t value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData* value);

  constexpr void __cordl_internal_set__isReady(bool value);

  constexpr void __cordl_internal_set__lastFrameDeltaSongTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__songTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__startSongSyncTime(int64_t value);

  constexpr void __cordl_internal_set__startSyncDeltaTime(float_t value);

  constexpr void __cordl_internal_set__stopSyncDeltaTime(float_t value);

  constexpr void __cordl_internal_set__timeScale(float_t value);

  /// @brief Method .ctor, addr 0x3bba634, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isReady, addr 0x3bba488, size 0x8, virtual true, abstract: false, final true
  inline bool get_isReady();

  /// @brief Method get_lastFrameDeltaSongTime, addr 0x3bba458, size 0x8, virtual true, abstract: false, final true
  inline float_t get_lastFrameDeltaSongTime();

  /// @brief Method get_songEndTime, addr 0x3bba468, size 0xc, virtual true, abstract: false, final true
  inline float_t get_songEndTime();

  /// @brief Method get_songLength, addr 0x3bba474, size 0xc, virtual true, abstract: false, final true
  inline float_t get_songLength();

  /// @brief Method get_songTime, addr 0x3bba448, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songTime();

  /// @brief Method get_timeScale, addr 0x3bba480, size 0x8, virtual true, abstract: false, final true
  inline float_t get_timeScale();

  /// @brief Convert to "::GlobalNamespace::IAudioTimeSource"
  constexpr ::GlobalNamespace::IAudioTimeSource* i___GlobalNamespace__IAudioTimeSource() noexcept;

  /// @brief Method set_lastFrameDeltaSongTime, addr 0x3bba460, size 0x8, virtual false, abstract: false, final false
  inline void set_lastFrameDeltaSongTime(float_t value);

  /// @brief Method set_songTime, addr 0x3bba450, size 0x8, virtual false, abstract: false, final false
  inline void set_songTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerSongTimeSyncController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSongTimeSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerSongTimeSyncController(MultiplayerConnectedPlayerSongTimeSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSongTimeSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerSongTimeSyncController(MultiplayerConnectedPlayerSongTimeSyncController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4491 };

  /// @brief Field _audioSyncLerpSpeed, offset: 0x20, size: 0x4, def value: None
  float_t ____audioSyncLerpSpeed;

  /// @brief Field _forcedSyncDeltaTime, offset: 0x24, size: 0x4, def value: None
  float_t ____forcedSyncDeltaTime;

  /// @brief Field _startSyncDeltaTime, offset: 0x28, size: 0x4, def value: None
  float_t ____startSyncDeltaTime;

  /// @brief Field _stopSyncDeltaTime, offset: 0x2c, size: 0x4, def value: None
  float_t ____stopSyncDeltaTime;

  /// @brief Field _settingsManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _initData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData* ____initData;

  /// @brief Field _connectedPlayer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field <songTime>k__BackingField, offset: 0x48, size: 0x4, def value: None
  float_t ____songTime_k__BackingField;

  /// @brief Field <lastFrameDeltaSongTime>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  float_t ____lastFrameDeltaSongTime_k__BackingField;

  /// @brief Field _timeScale, offset: 0x50, size: 0x4, def value: None
  float_t ____timeScale;

  /// @brief Field _startSongSyncTime, offset: 0x58, size: 0x8, def value: None
  int64_t ____startSongSyncTime;

  /// @brief Field _fixingAudioSyncError, offset: 0x60, size: 0x1, def value: None
  bool ____fixingAudioSyncError;

  /// @brief Field _isReady, offset: 0x61, size: 0x1, def value: None
  bool ____isReady;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____audioSyncLerpSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____forcedSyncDeltaTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____startSyncDeltaTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____stopSyncDeltaTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____settingsManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____initData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____connectedPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____songTime_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____lastFrameDeltaSongTime_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____timeScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____startSongSyncTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____fixingAudioSyncError) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____isReady) == 0x61, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*, "", "MultiplayerConnectedPlayerSongTimeSyncController");
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController_InitData*, "", "MultiplayerConnectedPlayerSongTimeSyncController/InitData");
