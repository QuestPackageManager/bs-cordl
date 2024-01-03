#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerSongTimeSyncController)
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerSongTimeSyncController__InitData;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerSongTimeSyncController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5127))
// CS Name: ::MultiplayerConnectedPlayerSongTimeSyncController::InitData*
class CORDL_TYPE __MultiplayerConnectedPlayerSongTimeSyncController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field startSongTime, offset 0x10, size 0x4
  __declspec(property(get = __get_startSongTime, put = __set_startSongTime)) float_t startSongTime;

  /// @brief Field songTimeOffset, offset 0x14, size 0x4
  __declspec(property(get = __get_songTimeOffset, put = __set_songTimeOffset)) float_t songTimeOffset;

  /// @brief Field timeScale, offset 0x18, size 0x4
  __declspec(property(get = __get_timeScale, put = __set_timeScale)) float_t timeScale;

  constexpr float_t& __get_startSongTime();

  constexpr float_t const& __get_startSongTime() const;

  constexpr void __set_startSongTime(float_t value);

  constexpr float_t& __get_songTimeOffset();

  constexpr float_t const& __get_songTimeOffset() const;

  constexpr void __set_songTimeOffset(float_t value);

  constexpr float_t& __get_timeScale();

  constexpr float_t const& __get_timeScale() const;

  constexpr void __set_timeScale(float_t value);

  static inline ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData* New_ctor(float_t startSongTime, float_t songTimeOffset, float_t timeScale);

  /// @brief Method .ctor, addr 0x23d6498, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(float_t startSongTime, float_t songTimeOffset, float_t timeScale);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerSongTimeSyncController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerConnectedPlayerSongTimeSyncController__InitData(__MultiplayerConnectedPlayerSongTimeSyncController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerSongTimeSyncController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerConnectedPlayerSongTimeSyncController__InitData(__MultiplayerConnectedPlayerSongTimeSyncController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerSongTimeSyncController__InitData();

public:
  /// @brief Field startSongTime, offset: 0x10, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songTimeOffset, offset: 0x14, size: 0x4, def value: None
  float_t ___songTimeOffset;

  /// @brief Field timeScale, offset: 0x18, size: 0x4, def value: None
  float_t ___timeScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData, ___startSongTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData, ___songTimeOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData, ___timeScale) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerConnectedPlayerSongTimeSyncController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5128))
// CS Name: ::MultiplayerConnectedPlayerSongTimeSyncController*
class CORDL_TYPE MultiplayerConnectedPlayerSongTimeSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData;

  /// @brief Field _audioSyncLerpSpeed, offset 0x18, size 0x4
  __declspec(property(get = __get__audioSyncLerpSpeed, put = __set__audioSyncLerpSpeed)) float_t _audioSyncLerpSpeed;

  /// @brief Field _forcedSyncDeltaTime, offset 0x1c, size 0x4
  __declspec(property(get = __get__forcedSyncDeltaTime, put = __set__forcedSyncDeltaTime)) float_t _forcedSyncDeltaTime;

  /// @brief Field _startSyncDeltaTime, offset 0x20, size 0x4
  __declspec(property(get = __get__startSyncDeltaTime, put = __set__startSyncDeltaTime)) float_t _startSyncDeltaTime;

  /// @brief Field _stopSyncDeltaTime, offset 0x24, size 0x4
  __declspec(property(get = __get__stopSyncDeltaTime, put = __set__stopSyncDeltaTime)) float_t _stopSyncDeltaTime;

  /// @brief Field _audioLatency, offset 0x28, size 0x8
  __declspec(property(get = __get__audioLatency, put = __set__audioLatency))::GlobalNamespace::FloatSO* _audioLatency;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData* _initData;

  /// @brief Field _connectedPlayer, offset 0x38, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field <songTime>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__songTime_k__BackingField, put = __set__songTime_k__BackingField)) float_t _songTime_k__BackingField;

  /// @brief Field <lastFrameDeltaSongTime>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __get__lastFrameDeltaSongTime_k__BackingField, put = __set__lastFrameDeltaSongTime_k__BackingField)) float_t _lastFrameDeltaSongTime_k__BackingField;

  /// @brief Field _timeScale, offset 0x48, size 0x4
  __declspec(property(get = __get__timeScale, put = __set__timeScale)) float_t _timeScale;

  /// @brief Field _startSongSyncTime, offset 0x50, size 0x8
  __declspec(property(get = __get__startSongSyncTime, put = __set__startSongSyncTime)) int64_t _startSongSyncTime;

  /// @brief Field _fixingAudioSyncError, offset 0x58, size 0x1
  __declspec(property(get = __get__fixingAudioSyncError, put = __set__fixingAudioSyncError)) bool _fixingAudioSyncError;

  /// @brief Field _isReady, offset 0x59, size 0x1
  __declspec(property(get = __get__isReady, put = __set__isReady)) bool _isReady;

  __declspec(property(get = get_songTime, put = set_songTime)) float_t songTime;

  __declspec(property(get = get_lastFrameDeltaSongTime, put = set_lastFrameDeltaSongTime)) float_t lastFrameDeltaSongTime;

  __declspec(property(get = get_songEndTime)) float_t songEndTime;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_isReady)) bool isReady;

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

  constexpr ::GlobalNamespace::FloatSO*& __get__audioLatency();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__audioLatency() const;

  constexpr void __set__audioLatency(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr float_t& __get__songTime_k__BackingField();

  constexpr float_t const& __get__songTime_k__BackingField() const;

  constexpr void __set__songTime_k__BackingField(float_t value);

  constexpr float_t& __get__lastFrameDeltaSongTime_k__BackingField();

  constexpr float_t const& __get__lastFrameDeltaSongTime_k__BackingField() const;

  constexpr void __set__lastFrameDeltaSongTime_k__BackingField(float_t value);

  constexpr float_t& __get__timeScale();

  constexpr float_t const& __get__timeScale() const;

  constexpr void __set__timeScale(float_t value);

  constexpr int64_t& __get__startSongSyncTime();

  constexpr int64_t const& __get__startSongSyncTime() const;

  constexpr void __set__startSongSyncTime(int64_t value);

  constexpr bool& __get__fixingAudioSyncError();

  constexpr bool const& __get__fixingAudioSyncError() const;

  constexpr void __set__fixingAudioSyncError(bool value);

  constexpr bool& __get__isReady();

  constexpr bool const& __get__isReady() const;

  constexpr void __set__isReady(bool value);

  /// @brief Method get_songTime, addr 0x23d6a48, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songTime();

  /// @brief Method set_songTime, addr 0x23d6a50, size 0x8, virtual false, abstract: false, final false
  inline void set_songTime(float_t value);

  /// @brief Method get_lastFrameDeltaSongTime, addr 0x23d6a58, size 0x8, virtual true, abstract: false, final true
  inline float_t get_lastFrameDeltaSongTime();

  /// @brief Method set_lastFrameDeltaSongTime, addr 0x23d6a60, size 0x8, virtual false, abstract: false, final false
  inline void set_lastFrameDeltaSongTime(float_t value);

  /// @brief Method get_songEndTime, addr 0x23d6a68, size 0xc, virtual true, abstract: false, final true
  inline float_t get_songEndTime();

  /// @brief Method get_songLength, addr 0x23d6a74, size 0xc, virtual true, abstract: false, final true
  inline float_t get_songLength();

  /// @brief Method get_isReady, addr 0x23d6a80, size 0x8, virtual true, abstract: false, final true
  inline bool get_isReady();

  /// @brief Method Start, addr 0x23d6a88, size 0xc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x23d6a94, size 0x160, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method StartSong, addr 0x23d4b70, size 0x154, virtual false, abstract: false, final false
  inline void StartSong(int64_t songStartSyncTime);

  /// @brief Method SetConnectedPlayerSongTime, addr 0x23d6bf4, size 0x38, virtual false, abstract: false, final false
  inline void SetConnectedPlayerSongTime(int64_t syncTime, float_t songTime);

  /// @brief Method StopSong, addr 0x23d4e40, size 0xc, virtual false, abstract: false, final false
  inline void StopSong();

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* New_ctor();

  /// @brief Method .ctor, addr 0x23d6c2c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSongTimeSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerSongTimeSyncController(MultiplayerConnectedPlayerSongTimeSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSongTimeSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerSongTimeSyncController(MultiplayerConnectedPlayerSongTimeSyncController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerSongTimeSyncController();

public:
  /// @brief Field _audioSyncLerpSpeed, offset: 0x18, size: 0x4, def value: None
  float_t ____audioSyncLerpSpeed;

  /// @brief Field _forcedSyncDeltaTime, offset: 0x1c, size: 0x4, def value: None
  float_t ____forcedSyncDeltaTime;

  /// @brief Field _startSyncDeltaTime, offset: 0x20, size: 0x4, def value: None
  float_t ____startSyncDeltaTime;

  /// @brief Field _stopSyncDeltaTime, offset: 0x24, size: 0x4, def value: None
  float_t ____stopSyncDeltaTime;

  /// @brief Field _audioLatency, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____audioLatency;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData* ____initData;

  /// @brief Field _connectedPlayer, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field <songTime>k__BackingField, offset: 0x40, size: 0x4, def value: None
  float_t ____songTime_k__BackingField;

  /// @brief Field <lastFrameDeltaSongTime>k__BackingField, offset: 0x44, size: 0x4, def value: None
  float_t ____lastFrameDeltaSongTime_k__BackingField;

  /// @brief Field _timeScale, offset: 0x48, size: 0x4, def value: None
  float_t ____timeScale;

  /// @brief Field _startSongSyncTime, offset: 0x50, size: 0x8, def value: None
  int64_t ____startSongSyncTime;

  /// @brief Field _fixingAudioSyncError, offset: 0x58, size: 0x1, def value: None
  bool ____fixingAudioSyncError;

  /// @brief Field _isReady, offset: 0x59, size: 0x1, def value: None
  bool ____isReady;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____audioSyncLerpSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____forcedSyncDeltaTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____startSyncDeltaTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____stopSyncDeltaTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____audioLatency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____initData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____connectedPlayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____songTime_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____lastFrameDeltaSongTime_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____timeScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____startSongSyncTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____fixingAudioSyncError) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, ____isReady) == 0x59, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*, "", "MultiplayerConnectedPlayerSongTimeSyncController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*, "", "MultiplayerConnectedPlayerSongTimeSyncController/InitData");
