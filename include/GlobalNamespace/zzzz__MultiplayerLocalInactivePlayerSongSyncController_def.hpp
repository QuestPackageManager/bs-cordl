#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalInactivePlayerSongSyncController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerSongSyncController)
namespace GlobalNamespace {
class CrossFadeAudioSource;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController_InitData;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class WaitUntil;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalInactivePlayerSongSyncController/InitData
class CORDL_TYPE MultiplayerLocalInactivePlayerSongSyncController_InitData : public ::System::Object {
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

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData* New_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset,
                                                                                                       float_t timeScale);

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

  /// @brief Method .ctor, addr 0x3bc5bcc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerSongSyncController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerSongSyncController_InitData(MultiplayerLocalInactivePlayerSongSyncController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerSongSyncController_InitData(MultiplayerLocalInactivePlayerSongSyncController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4531 };

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
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData, ___audioClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData, ___startSongTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData, ___songTimeOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData, ___timeScale) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IStartSeekSongController, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalInactivePlayerSongSyncController
class CORDL_TYPE MultiplayerLocalInactivePlayerSongSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::GlobalNamespace::CrossFadeAudioSource> _audioSource;

  /// @brief Field _audioStarted, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__audioStarted, put = __cordl_internal_set__audioStarted)) bool _audioStarted;

  /// @brief Field _currentObservableIsFailed, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get__currentObservableIsFailed, put = __cordl_internal_set__currentObservableIsFailed)) bool _currentObservableIsFailed;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData* _initData;

  /// @brief Field _lastLatencyOffsetTime, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__lastLatencyOffsetTime, put = __cordl_internal_set__lastLatencyOffsetTime)) int64_t _lastLatencyOffsetTime;

  /// @brief Field _multiplayerSessionManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _observable, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__observable, put = __cordl_internal_set__observable)) ::GlobalNamespace::IMultiplayerObservable* _observable;

  /// @brief Field _settingsManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _songLoadingStarted, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__songLoadingStarted, put = __cordl_internal_set__songLoadingStarted)) bool _songLoadingStarted;

  /// @brief Field _songTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__songTime, put = __cordl_internal_set__songTime)) float_t _songTime;

  /// @brief Field _songTimeOffset, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__songTimeOffset, put = __cordl_internal_set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _startSongTime, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__startSongTime, put = __cordl_internal_set__startSongTime)) float_t _startSongTime;

  /// @brief Field _timeScale, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__timeScale, put = __cordl_internal_set__timeScale)) float_t _timeScale;

  /// @brief Field _vrPlatformHelper, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_isAudioLoaded)) bool isAudioLoaded;

  __declspec(property(get = get_songFailedToLoad)) bool songFailedToLoad;

  __declspec(property(get = get_waitUntilIsReadyToStartTheSong)) ::UnityEngine::WaitUntil* waitUntilIsReadyToStartTheSong;

  /// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
  constexpr operator ::GlobalNamespace::IStartSeekSongController*() noexcept;

  /// @brief Method Awake, addr 0x3bc605c, size 0xfc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FollowOffsetSyncTime, addr 0x3bc697c, size 0x1e0, virtual false, abstract: false, final false
  inline void FollowOffsetSyncTime(::GlobalNamespace::IMultiplayerObservable* observable, bool crossFade, bool forceUpdate);

  /// @brief Method HandleVrFocusWasReleased, addr 0x3bc6b68, size 0x4, virtual false, abstract: false, final false
  inline void HandleVrFocusWasReleased();

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bc624c, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SeekTo, addr 0x3bc6b5c, size 0xc, virtual true, abstract: false, final true
  inline void SeekTo(float_t offsetTime);

  /// @brief Method SeekTo, addr 0x3bc681c, size 0x160, virtual false, abstract: false, final false
  inline void SeekTo(float_t offsetTime, bool crossFade, float_t toVolume);

  /// @brief Method Start, addr 0x3bc6158, size 0xf4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartSong, addr 0x3bc672c, size 0xf0, virtual true, abstract: false, final true
  inline void StartSong(float_t offsetTime);

  /// @brief Method Update, addr 0x3bc634c, size 0x27c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateOffsetSyncTime, addr 0x3bc65c8, size 0x164, virtual false, abstract: false, final false
  inline void UpdateOffsetSyncTime(int64_t offsetSyncTime, bool crossFade, bool forceUpdate);

  constexpr ::UnityW<::GlobalNamespace::CrossFadeAudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::GlobalNamespace::CrossFadeAudioSource>& __cordl_internal_get__audioSource();

  constexpr bool const& __cordl_internal_get__audioStarted() const;

  constexpr bool& __cordl_internal_get__audioStarted();

  constexpr bool const& __cordl_internal_get__currentObservableIsFailed() const;

  constexpr bool& __cordl_internal_get__currentObservableIsFailed();

  constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData*& __cordl_internal_get__initData();

  constexpr int64_t const& __cordl_internal_get__lastLatencyOffsetTime() const;

  constexpr int64_t& __cordl_internal_get__lastLatencyOffsetTime();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::IMultiplayerObservable* const& __cordl_internal_get__observable() const;

  constexpr ::GlobalNamespace::IMultiplayerObservable*& __cordl_internal_get__observable();

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

  constexpr float_t const& __cordl_internal_get__timeScale() const;

  constexpr float_t& __cordl_internal_get__timeScale();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::GlobalNamespace::CrossFadeAudioSource> value);

  constexpr void __cordl_internal_set__audioStarted(bool value);

  constexpr void __cordl_internal_set__currentObservableIsFailed(bool value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData* value);

  constexpr void __cordl_internal_set__lastLatencyOffsetTime(int64_t value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__observable(::GlobalNamespace::IMultiplayerObservable* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__songLoadingStarted(bool value);

  constexpr void __cordl_internal_set__songTime(float_t value);

  constexpr void __cordl_internal_set__songTimeOffset(float_t value);

  constexpr void __cordl_internal_set__startSongTime(float_t value);

  constexpr void __cordl_internal_set__timeScale(float_t value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x3bc6b6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_waitUntilIsReadyToStartTheSong>b__7_0, addr 0x3bc6b74, size 0x4, virtual false, abstract: false, final false
  inline bool _get_waitUntilIsReadyToStartTheSong_b__7_0();

  /// @brief Method get_isAudioLoaded, addr 0x3bc5ea0, size 0xdc, virtual false, abstract: false, final false
  inline bool get_isAudioLoaded();

  /// @brief Method get_songFailedToLoad, addr 0x3bc5f7c, size 0xe0, virtual true, abstract: false, final true
  inline bool get_songFailedToLoad();

  /// @brief Method get_waitUntilIsReadyToStartTheSong, addr 0x3bc5df8, size 0xa8, virtual true, abstract: false, final true
  inline ::UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();

  /// @brief Convert to "::GlobalNamespace::IStartSeekSongController"
  constexpr ::GlobalNamespace::IStartSeekSongController* i___GlobalNamespace__IStartSeekSongController() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerSongSyncController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerSongSyncController(MultiplayerLocalInactivePlayerSongSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerSongSyncController(MultiplayerLocalInactivePlayerSongSyncController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4532 };

  /// @brief Field kReSyncThresholdMs offset 0xffffffff size 0x8
  static constexpr int64_t kReSyncThresholdMs{ static_cast<int64_t>(0x32) };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CrossFadeAudioSource> ____audioSource;

  /// @brief Field _settingsManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData* ____initData;

  /// @brief Field _multiplayerSessionManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _vrPlatformHelper, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _timeScale, offset: 0x48, size: 0x4, def value: None
  float_t ____timeScale;

  /// @brief Field _startSongTime, offset: 0x4c, size: 0x4, def value: None
  float_t ____startSongTime;

  /// @brief Field _songTimeOffset, offset: 0x50, size: 0x4, def value: None
  float_t ____songTimeOffset;

  /// @brief Field _songTime, offset: 0x54, size: 0x4, def value: None
  float_t ____songTime;

  /// @brief Field _songLoadingStarted, offset: 0x58, size: 0x1, def value: None
  bool ____songLoadingStarted;

  /// @brief Field _audioStarted, offset: 0x59, size: 0x1, def value: None
  bool ____audioStarted;

  /// @brief Field _currentObservableIsFailed, offset: 0x5a, size: 0x1, def value: None
  bool ____currentObservableIsFailed;

  /// @brief Field _observable, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerObservable* ____observable;

  /// @brief Field _lastLatencyOffsetTime, offset: 0x68, size: 0x8, def value: None
  int64_t ____lastLatencyOffsetTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____settingsManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____initData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____multiplayerSessionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____vrPlatformHelper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____timeScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____startSongTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____songTimeOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____songTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____songLoadingStarted) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____audioStarted) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____currentObservableIsFailed) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____observable) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, ____lastLatencyOffsetTime) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, "", "MultiplayerLocalInactivePlayerSongSyncController");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController_InitData*, "", "MultiplayerLocalInactivePlayerSongSyncController/InitData");
