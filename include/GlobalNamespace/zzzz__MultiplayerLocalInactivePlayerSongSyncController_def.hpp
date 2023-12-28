#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerSongSyncController)
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace GlobalNamespace {
class __MultiplayerLocalInactivePlayerSongSyncController__InitData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace UnityEngine {
class WaitUntil;
}
namespace GlobalNamespace {
class CrossFadeAudioSource;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
namespace GlobalNamespace {
class __MultiplayerLocalInactivePlayerSongSyncController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5164))
// CS Name: ::MultiplayerLocalInactivePlayerSongSyncController::InitData*
class CORDL_TYPE __MultiplayerLocalInactivePlayerSongSyncController__InitData : public ::System::Object {
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

  static inline ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData* New_ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset,
                                                                                                          float_t timeScale);

  /// @brief Method .ctor addr 0x23dd218 size 0x4c virtual false final false
  inline void _ctor(::UnityEngine::AudioClip* audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalInactivePlayerSongSyncController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLocalInactivePlayerSongSyncController__InitData(__MultiplayerLocalInactivePlayerSongSyncController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalInactivePlayerSongSyncController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLocalInactivePlayerSongSyncController__InitData(__MultiplayerLocalInactivePlayerSongSyncController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLocalInactivePlayerSongSyncController__InitData();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLocalInactivePlayerSongSyncController
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5165))
// CS Name: ::MultiplayerLocalInactivePlayerSongSyncController*
class CORDL_TYPE MultiplayerLocalInactivePlayerSongSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData;

  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::GlobalNamespace::CrossFadeAudioSource* _audioSource;

  /// @brief Field _audioLatency, offset 0x20, size 0x8
  __declspec(property(get = __get__audioLatency, put = __set__audioLatency))::GlobalNamespace::FloatSO* _audioLatency;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData* _initData;

  /// @brief Field _multiplayerSessionManager, offset 0x30, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _vrPlatformHelper, offset 0x38, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _timeScale, offset 0x40, size 0x4
  __declspec(property(get = __get__timeScale, put = __set__timeScale)) float_t _timeScale;

  /// @brief Field _startSongTime, offset 0x44, size 0x4
  __declspec(property(get = __get__startSongTime, put = __set__startSongTime)) float_t _startSongTime;

  /// @brief Field _songTimeOffset, offset 0x48, size 0x4
  __declspec(property(get = __get__songTimeOffset, put = __set__songTimeOffset)) float_t _songTimeOffset;

  /// @brief Field _songTime, offset 0x4c, size 0x4
  __declspec(property(get = __get__songTime, put = __set__songTime)) float_t _songTime;

  /// @brief Field _audioStarted, offset 0x50, size 0x1
  __declspec(property(get = __get__audioStarted, put = __set__audioStarted)) bool _audioStarted;

  /// @brief Field _currentObservableIsFailed, offset 0x51, size 0x1
  __declspec(property(get = __get__currentObservableIsFailed, put = __set__currentObservableIsFailed)) bool _currentObservableIsFailed;

  /// @brief Field _observable, offset 0x58, size 0x8
  __declspec(property(get = __get__observable, put = __set__observable))::GlobalNamespace::IMultiplayerObservable* _observable;

  /// @brief Field _lastLatencyOffsetTime, offset 0x60, size 0x8
  __declspec(property(get = __get__lastLatencyOffsetTime, put = __set__lastLatencyOffsetTime)) int64_t _lastLatencyOffsetTime;

  __declspec(property(get = get_waitUntilIsReadyToStartTheSong))::UnityEngine::WaitUntil* waitUntilIsReadyToStartTheSong;

  __declspec(property(get = get_isAudioLoaded)) bool isAudioLoaded;

  /// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
  constexpr operator ::GlobalNamespace::IStartSeekSongController*() noexcept;

  constexpr ::GlobalNamespace::CrossFadeAudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CrossFadeAudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::GlobalNamespace::CrossFadeAudioSource* value);

  constexpr ::GlobalNamespace::FloatSO*& __get__audioLatency();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__audioLatency() const;

  constexpr void __set__audioLatency(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr float_t& __get__timeScale();

  constexpr float_t const& __get__timeScale() const;

  constexpr void __set__timeScale(float_t value);

  constexpr float_t& __get__startSongTime();

  constexpr float_t const& __get__startSongTime() const;

  constexpr void __set__startSongTime(float_t value);

  constexpr float_t& __get__songTimeOffset();

  constexpr float_t const& __get__songTimeOffset() const;

  constexpr void __set__songTimeOffset(float_t value);

  constexpr float_t& __get__songTime();

  constexpr float_t const& __get__songTime() const;

  constexpr void __set__songTime(float_t value);

  constexpr bool& __get__audioStarted();

  constexpr bool const& __get__audioStarted() const;

  constexpr void __set__audioStarted(bool value);

  constexpr bool& __get__currentObservableIsFailed();

  constexpr bool const& __get__currentObservableIsFailed() const;

  constexpr void __set__currentObservableIsFailed(bool value);

  constexpr ::GlobalNamespace::IMultiplayerObservable*& __get__observable();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerObservable*> const& __get__observable() const;

  constexpr void __set__observable(::GlobalNamespace::IMultiplayerObservable* value);

  constexpr int64_t& __get__lastLatencyOffsetTime();

  constexpr int64_t const& __get__lastLatencyOffsetTime() const;

  constexpr void __set__lastLatencyOffsetTime(int64_t value);

  /// @brief Method get_waitUntilIsReadyToStartTheSong addr 0x23dd2b0 size 0xac virtual true final true
  inline ::UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();

  /// @brief Method get_isAudioLoaded addr 0x23dd35c size 0x9c virtual false final false
  inline bool get_isAudioLoaded();

  /// @brief Method Awake addr 0x23dd3f8 size 0x118 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x23dd510 size 0xf0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x23dd600 size 0x108 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x23dd708 size 0x27c virtual false final false
  inline void Update();

  /// @brief Method StartSong addr 0x23ddae8 size 0xf0 virtual true final true
  inline void StartSong(float_t offsetTime);

  /// @brief Method FollowOffsetSyncTime addr 0x23ddd38 size 0x1e4 virtual false final false
  inline void FollowOffsetSyncTime(::GlobalNamespace::IMultiplayerObservable* observable, bool crossFade, bool forceUpdate);

  /// @brief Method UpdateOffsetSyncTime addr 0x23dd984 size 0x164 virtual false final false
  inline void UpdateOffsetSyncTime(int64_t offsetSyncTime, bool crossFade, bool forceUpdate);

  /// @brief Method SeekTo addr 0x23ddf1c size 0xc virtual true final true
  inline void SeekTo(float_t offsetTime);

  /// @brief Method SeekTo addr 0x23ddbd8 size 0x160 virtual false final false
  inline void SeekTo(float_t offsetTime, bool crossFade, float_t toVolume);

  /// @brief Method HandleVrFocusWasReleased addr 0x23ddf28 size 0x4 virtual false final false
  inline void HandleVrFocusWasReleased();

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* New_ctor();

  /// @brief Method .ctor addr 0x23ddf2c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_waitUntilIsReadyToStartTheSong>b__7_0 addr 0x23ddf34 size 0x4 virtual false final false
  inline bool _get_waitUntilIsReadyToStartTheSong_b__7_0();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerSongSyncController(MultiplayerLocalInactivePlayerSongSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerSongSyncController(MultiplayerLocalInactivePlayerSongSyncController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerSongSyncController();

public:
  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::CrossFadeAudioSource* ____audioSource;

  /// @brief Field _audioLatency, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____audioLatency;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData* ____initData;

  /// @brief Field _multiplayerSessionManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _vrPlatformHelper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _timeScale, offset: 0x40, size: 0x4, def value: None
  float_t ____timeScale;

  /// @brief Field _startSongTime, offset: 0x44, size: 0x4, def value: None
  float_t ____startSongTime;

  /// @brief Field _songTimeOffset, offset: 0x48, size: 0x4, def value: None
  float_t ____songTimeOffset;

  /// @brief Field _songTime, offset: 0x4c, size: 0x4, def value: None
  float_t ____songTime;

  /// @brief Field _audioStarted, offset: 0x50, size: 0x1, def value: None
  bool ____audioStarted;

  /// @brief Field _currentObservableIsFailed, offset: 0x51, size: 0x1, def value: None
  bool ____currentObservableIsFailed;

  /// @brief Field _observable, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerObservable* ____observable;

  /// @brief Field _lastLatencyOffsetTime, offset: 0x60, size: 0x8, def value: None
  int64_t ____lastLatencyOffsetTime;

  /// @brief Field kReSyncThresholdMs offset 0xffffffff size 0x8
  static constexpr int64_t kReSyncThresholdMs{ static_cast<int64_t>(0x32) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, "", "MultiplayerLocalInactivePlayerSongSyncController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*, "", "MultiplayerLocalInactivePlayerSongSyncController/InitData");
