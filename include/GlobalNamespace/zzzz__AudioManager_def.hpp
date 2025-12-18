#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioManager)
namespace GlobalNamespace {
class AudioManagerConfigSO;
}
namespace GlobalNamespace {
struct AudioManager_AudioFadeType;
}
namespace GlobalNamespace {
class AudioManager__FadeMainVolume_d__47;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioManager_AudioFadeType;
}
namespace GlobalNamespace {
class AudioManager;
}
namespace GlobalNamespace {
class AudioManager__FadeMainVolume_d__47;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioManager_AudioFadeType);
MARK_REF_PTR_T(::GlobalNamespace::AudioManager);
MARK_REF_PTR_T(::GlobalNamespace::AudioManager__FadeMainVolume_d__47);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioManager/AudioFadeType
struct CORDL_TYPE AudioManager_AudioFadeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioManager_AudioFadeType_Unwrapped
  enum struct __AudioManager_AudioFadeType_Unwrapped : int32_t {
    __E_FadeIn = static_cast<int32_t>(0x0),
    __E_FadeOut = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioManager_AudioFadeType_Unwrapped() const noexcept {
    return static_cast<__AudioManager_AudioFadeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioManager_AudioFadeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioManager_AudioFadeType(int32_t value__) noexcept;

  /// @brief Field FadeIn value: I32(0)
  static ::GlobalNamespace::AudioManager_AudioFadeType const FadeIn;

  /// @brief Field FadeOut value: I32(1)
  static ::GlobalNamespace::AudioManager_AudioFadeType const FadeOut;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5553 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioManager_AudioFadeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioManager_AudioFadeType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AudioManager::AudioFadeType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioManager/<FadeMainVolume>d__47
class CORDL_TYPE AudioManager__FadeMainVolume_d__47 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::AudioManager* __4__this;

  /// @brief Field <fadeFrom>5__2, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeFrom_5__2, put = __cordl_internal_set__fadeFrom_5__2)) float_t _fadeFrom_5__2;

  /// @brief Field <fadeTo>5__3, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeTo_5__3, put = __cordl_internal_set__fadeTo_5__3)) float_t _fadeTo_5__3;

  /// @brief Field <timer>5__4, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__timer_5__4, put = __cordl_internal_set__timer_5__4)) float_t _timer_5__4;

  /// @brief Field duration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field fadeType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeType, put = __cordl_internal_set_fadeType)) ::GlobalNamespace::AudioManager_AudioFadeType fadeType;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x57094f4, size 0x12c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::AudioManager__FadeMainVolume_d__47* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5709620, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5709628, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5709660, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x57094f0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::AudioManager* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::AudioManager*& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__fadeFrom_5__2() const;

  constexpr float_t& __cordl_internal_get__fadeFrom_5__2();

  constexpr float_t const& __cordl_internal_get__fadeTo_5__3() const;

  constexpr float_t& __cordl_internal_get__fadeTo_5__3();

  constexpr float_t const& __cordl_internal_get__timer_5__4() const;

  constexpr float_t& __cordl_internal_get__timer_5__4();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::AudioManager_AudioFadeType const& __cordl_internal_get_fadeType() const;

  constexpr ::GlobalNamespace::AudioManager_AudioFadeType& __cordl_internal_get_fadeType();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::AudioManager* value);

  constexpr void __cordl_internal_set__fadeFrom_5__2(float_t value);

  constexpr void __cordl_internal_set__fadeTo_5__3(float_t value);

  constexpr void __cordl_internal_set__timer_5__4(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_fadeType(::GlobalNamespace::AudioManager_AudioFadeType value);

  /// @brief Method .ctor, addr 0x57094b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioManager__FadeMainVolume_d__47();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioManager__FadeMainVolume_d__47", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioManager__FadeMainVolume_d__47(AudioManager__FadeMainVolume_d__47&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioManager__FadeMainVolume_d__47", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioManager__FadeMainVolume_d__47(AudioManager__FadeMainVolume_d__47 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5554 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field fadeType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::AudioManager_AudioFadeType ___fadeType;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AudioManager* _____4__this;

  /// @brief Field duration, offset: 0x30, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field <fadeFrom>5__2, offset: 0x34, size: 0x4, def value: None
  float_t ____fadeFrom_5__2;

  /// @brief Field <fadeTo>5__3, offset: 0x38, size: 0x4, def value: None
  float_t ____fadeTo_5__3;

  /// @brief Field <timer>5__4, offset: 0x3c, size: 0x4, def value: None
  float_t ____timer_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioManager__FadeMainVolume_d__47, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager__FadeMainVolume_d__47, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager__FadeMainVolume_d__47, ___fadeType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager__FadeMainVolume_d__47, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager__FadeMainVolume_d__47, ___duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager__FadeMainVolume_d__47, ____fadeFrom_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager__FadeMainVolume_d__47, ____fadeTo_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager__FadeMainVolume_d__47, ____timer_5__4) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioManager__FadeMainVolume_d__47, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioManager
class CORDL_TYPE AudioManager : public ::System::Object {
public:
  // Declarations
  using AudioFadeType = ::GlobalNamespace::AudioManager_AudioFadeType;

  using _FadeMainVolume_d__47 = ::GlobalNamespace::AudioManager__FadeMainVolume_d__47;

  /// @brief Field _audioManagerConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManagerConfig, put = __cordl_internal_set__audioManagerConfig)) ::UnityW<::GlobalNamespace::AudioManagerConfigSO> _audioManagerConfig;

  /// @brief Field _audioMixer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioMixer, put = __cordl_internal_set__audioMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer> _audioMixer;

  /// @brief Field _coroutineStarter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _fadeCoroutine, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeCoroutine, put = __cordl_internal_set__fadeCoroutine)) ::UnityEngine::Coroutine* _fadeCoroutine;

  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _mainVolume, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__mainVolume, put = __cordl_internal_set__mainVolume)) float_t _mainVolume;

  /// @brief Field _mainVolumeFade, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__mainVolumeFade, put = __cordl_internal_set__mainVolumeFade)) float_t _mainVolumeFade;

  /// @brief Field _musicPitch, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__musicPitch, put = __cordl_internal_set__musicPitch)) float_t _musicPitch;

  /// @brief Field _musicSpeed, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__musicSpeed, put = __cordl_internal_set__musicSpeed)) float_t _musicSpeed;

  /// @brief Field _musicVolume, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__musicVolume, put = __cordl_internal_set__musicVolume)) float_t _musicVolume;

  /// @brief Field _musicVolumeOffset, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__musicVolumeOffset, put = __cordl_internal_set__musicVolumeOffset)) float_t _musicVolumeOffset;

  /// @brief Field _sfxEnabled, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__sfxEnabled, put = __cordl_internal_set__sfxEnabled)) bool _sfxEnabled;

  /// @brief Field _sfxVolume, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__sfxVolume, put = __cordl_internal_set__sfxVolume)) float_t _sfxVolume;

  /// @brief Field _sfxVolumeOffset, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__sfxVolumeOffset, put = __cordl_internal_set__sfxVolumeOffset)) float_t _sfxVolumeOffset;

  __declspec(property(get = get_mainVolume, put = set_mainVolume)) float_t mainVolume;

  __declspec(property(get = get_mainVolumeFade)) float_t mainVolumeFade;

  __declspec(property(put = set_musicPitch)) float_t musicPitch;

  __declspec(property(put = set_musicSpeed)) float_t musicSpeed;

  __declspec(property(put = set_musicVolume)) float_t musicVolume;

  __declspec(property(get = get_sfxEnabled, put = set_sfxEnabled)) bool sfxEnabled;

  __declspec(property(get = get_sfxLatency)) float_t sfxLatency;

  __declspec(property(get = get_sfxVolume, put = set_sfxVolume)) float_t sfxVolume;

  /// @brief Method FadeMainVolume, addr 0x5709444, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadeMainVolume(::GlobalNamespace::AudioManager_AudioFadeType fadeType, float_t duration);

  /// @brief Method Finalize, addr 0x5708ed0, size 0x110, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::GlobalNamespace::AudioManager* New_ctor(::GlobalNamespace::AudioManagerConfigSO* audioManagerConfig, ::GlobalNamespace::GameScenesManager* gameScenesManager,
                                                          ::GlobalNamespace::ICoroutineStarter* coroutineStarter);

  /// @brief Method OnResetAudio, addr 0x57094c0, size 0x30, virtual false, abstract: false, final false
  inline void OnResetAudio();

  /// @brief Method StartMainVolumeFade, addr 0x57092f8, size 0x14c, virtual false, abstract: false, final false
  inline void StartMainVolumeFade(::GlobalNamespace::AudioManager_AudioFadeType fadeType, float_t duration);

  /// @brief Method UpdateMainVolume, addr 0x5708ff8, size 0x8c, virtual false, abstract: false, final false
  inline void UpdateMainVolume();

  /// @brief Method UpdateMusicPitch, addr 0x5709180, size 0x114, virtual false, abstract: false, final false
  inline void UpdateMusicPitch();

  /// @brief Method UpdateMusicSpeed, addr 0x570929c, size 0x5c, virtual false, abstract: false, final false
  inline void UpdateMusicSpeed();

  /// @brief Method UpdateMusicVolume, addr 0x570908c, size 0x60, virtual false, abstract: false, final false
  inline void UpdateMusicVolume();

  /// @brief Method UpdateSfxVolume, addr 0x57090f4, size 0x74, virtual false, abstract: false, final false
  inline void UpdateSfxVolume();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerConfigSO> const& __cordl_internal_get__audioManagerConfig() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerConfigSO>& __cordl_internal_get__audioManagerConfig();

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__audioMixer() const;

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__audioMixer();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__fadeCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__fadeCoroutine();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr float_t const& __cordl_internal_get__mainVolume() const;

  constexpr float_t& __cordl_internal_get__mainVolume();

  constexpr float_t const& __cordl_internal_get__mainVolumeFade() const;

  constexpr float_t& __cordl_internal_get__mainVolumeFade();

  constexpr float_t const& __cordl_internal_get__musicPitch() const;

  constexpr float_t& __cordl_internal_get__musicPitch();

  constexpr float_t const& __cordl_internal_get__musicSpeed() const;

  constexpr float_t& __cordl_internal_get__musicSpeed();

  constexpr float_t const& __cordl_internal_get__musicVolume() const;

  constexpr float_t& __cordl_internal_get__musicVolume();

  constexpr float_t const& __cordl_internal_get__musicVolumeOffset() const;

  constexpr float_t& __cordl_internal_get__musicVolumeOffset();

  constexpr bool const& __cordl_internal_get__sfxEnabled() const;

  constexpr bool& __cordl_internal_get__sfxEnabled();

  constexpr float_t const& __cordl_internal_get__sfxVolume() const;

  constexpr float_t& __cordl_internal_get__sfxVolume();

  constexpr float_t const& __cordl_internal_get__sfxVolumeOffset() const;

  constexpr float_t& __cordl_internal_get__sfxVolumeOffset();

  constexpr void __cordl_internal_set__audioManagerConfig(::UnityW<::GlobalNamespace::AudioManagerConfigSO> value);

  constexpr void __cordl_internal_set__audioMixer(::UnityW<::UnityEngine::Audio::AudioMixer> value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__fadeCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__mainVolume(float_t value);

  constexpr void __cordl_internal_set__mainVolumeFade(float_t value);

  constexpr void __cordl_internal_set__musicPitch(float_t value);

  constexpr void __cordl_internal_set__musicSpeed(float_t value);

  constexpr void __cordl_internal_set__musicVolume(float_t value);

  constexpr void __cordl_internal_set__musicVolumeOffset(float_t value);

  constexpr void __cordl_internal_set__sfxEnabled(bool value);

  constexpr void __cordl_internal_set__sfxVolume(float_t value);

  constexpr void __cordl_internal_set__sfxVolumeOffset(float_t value);

  /// @brief Method .ctor, addr 0x5708d44, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::AudioManagerConfigSO* audioManagerConfig, ::GlobalNamespace::GameScenesManager* gameScenesManager, ::GlobalNamespace::ICoroutineStarter* coroutineStarter);

  /// @brief Method get_mainVolume, addr 0x5708fe8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mainVolume();

  /// @brief Method get_mainVolumeFade, addr 0x5708fe0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mainVolumeFade();

  /// @brief Method get_sfxEnabled, addr 0x5709168, size 0x8, virtual false, abstract: false, final false
  inline bool get_sfxEnabled();

  /// @brief Method get_sfxLatency, addr 0x5708cd8, size 0x6c, virtual false, abstract: false, final false
  inline float_t get_sfxLatency();

  /// @brief Method get_sfxVolume, addr 0x57090ec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sfxVolume();

  /// @brief Method set_mainVolume, addr 0x5708ff0, size 0x8, virtual false, abstract: false, final false
  inline void set_mainVolume(float_t value);

  /// @brief Method set_musicPitch, addr 0x5709178, size 0x8, virtual false, abstract: false, final false
  inline void set_musicPitch(float_t value);

  /// @brief Method set_musicSpeed, addr 0x5709294, size 0x8, virtual false, abstract: false, final false
  inline void set_musicSpeed(float_t value);

  /// @brief Method set_musicVolume, addr 0x5709084, size 0x8, virtual false, abstract: false, final false
  inline void set_musicVolume(float_t value);

  /// @brief Method set_sfxEnabled, addr 0x5709170, size 0x8, virtual false, abstract: false, final false
  inline void set_sfxEnabled(bool value);

  /// @brief Method set_sfxVolume, addr 0x5708164, size 0x8, virtual false, abstract: false, final false
  inline void set_sfxVolume(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioManager(AudioManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioManager(AudioManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5555 };

  /// @brief Field kDefaultMusicVolume offset 0xffffffff size 0x4
  static constexpr float_t kDefaultMusicVolume{ static_cast<float_t>(-4.0f) };

  /// @brief Field kMainVolume offset 0xffffffff size 0x8
  static constexpr ::ConstString kMainVolume{ u"MainVolume" };

  /// @brief Field kMaxAudioGain offset 0xffffffff size 0x4
  static constexpr float_t kMaxAudioGain{ static_cast<float_t>(20.0f) };

  /// @brief Field kMinAudioGain offset 0xffffffff size 0x4
  static constexpr float_t kMinAudioGain{ static_cast<float_t>(-80.0f) };

  /// @brief Field kMusicPitch offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicPitch{ u"MusicPitch" };

  /// @brief Field kMusicPitchShifterWet offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicPitchShifterWet{ u"MusicPitchShifterWet" };

  /// @brief Field kMusicSpeed offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicSpeed{ u"MusicSpeed" };

  /// @brief Field kMusicVolume offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicVolume{ u"MusicVolume" };

  /// @brief Field kPreferredSpatializerPluginName offset 0xffffffff size 0x8
  static constexpr ::ConstString kPreferredSpatializerPluginName{ u"Microsoft Spatializer" };

  /// @brief Field kSfxVolume offset 0xffffffff size 0x8
  static constexpr ::ConstString kSfxVolume{ u"SFXVolume" };

  /// @brief Field _audioManagerConfig, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerConfigSO> ____audioManagerConfig;

  /// @brief Field _coroutineStarter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _audioMixer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Audio::AudioMixer> ____audioMixer;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _fadeCoroutine, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____fadeCoroutine;

  /// @brief Field _mainVolumeFade, offset: 0x38, size: 0x4, def value: None
  float_t ____mainVolumeFade;

  /// @brief Field _mainVolume, offset: 0x3c, size: 0x4, def value: None
  float_t ____mainVolume;

  /// @brief Field _musicPitch, offset: 0x40, size: 0x4, def value: None
  float_t ____musicPitch;

  /// @brief Field _musicSpeed, offset: 0x44, size: 0x4, def value: None
  float_t ____musicSpeed;

  /// @brief Field _musicVolume, offset: 0x48, size: 0x4, def value: None
  float_t ____musicVolume;

  /// @brief Field _musicVolumeOffset, offset: 0x4c, size: 0x4, def value: None
  float_t ____musicVolumeOffset;

  /// @brief Field _sfxVolumeOffset, offset: 0x50, size: 0x4, def value: None
  float_t ____sfxVolumeOffset;

  /// @brief Field _sfxVolume, offset: 0x54, size: 0x4, def value: None
  float_t ____sfxVolume;

  /// @brief Field _sfxEnabled, offset: 0x58, size: 0x1, def value: None
  bool ____sfxEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioManager, ____audioManagerConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____coroutineStarter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____audioMixer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____gameScenesManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____fadeCoroutine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____mainVolumeFade) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____mainVolume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____musicPitch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____musicSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____musicVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____musicVolumeOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____sfxVolumeOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____sfxVolume) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____sfxEnabled) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioManager, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioManager_AudioFadeType, "", "AudioManager/AudioFadeType");
NEED_NO_BOX(::GlobalNamespace::AudioManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioManager*, "", "AudioManager");
NEED_NO_BOX(::GlobalNamespace::AudioManager__FadeMainVolume_d__47);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioManager__FadeMainVolume_d__47*, "", "AudioManager/<FadeMainVolume>d__47");
