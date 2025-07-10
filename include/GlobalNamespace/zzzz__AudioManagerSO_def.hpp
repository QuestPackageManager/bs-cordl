#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioManagerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioManagerSO)
namespace GlobalNamespace {
struct AudioManagerSO_AudioFadeType;
}
namespace GlobalNamespace {
class AudioManagerSO__FadeMainVolume_d__43;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace System::Collections {
class IEnumerator;
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
struct AudioManagerSO_AudioFadeType;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class AudioManagerSO__FadeMainVolume_d__43;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioManagerSO_AudioFadeType);
MARK_REF_PTR_T(::GlobalNamespace::AudioManagerSO);
MARK_REF_PTR_T(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioManagerSO/AudioFadeType
struct CORDL_TYPE AudioManagerSO_AudioFadeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioManagerSO_AudioFadeType_Unwrapped
  enum struct __AudioManagerSO_AudioFadeType_Unwrapped : int32_t {
    __E_FadeIn = static_cast<int32_t>(0x0),
    __E_FadeOut = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioManagerSO_AudioFadeType_Unwrapped() const noexcept {
    return static_cast<__AudioManagerSO_AudioFadeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioManagerSO_AudioFadeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioManagerSO_AudioFadeType(int32_t value__) noexcept;

  /// @brief Field FadeIn value: I32(0)
  static ::GlobalNamespace::AudioManagerSO_AudioFadeType const FadeIn;

  /// @brief Field FadeOut value: I32(1)
  static ::GlobalNamespace::AudioManagerSO_AudioFadeType const FadeOut;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3993 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioManagerSO_AudioFadeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioManagerSO_AudioFadeType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AudioManagerSO::AudioFadeType, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioManagerSO/<FadeMainVolume>d__43
class CORDL_TYPE AudioManagerSO__FadeMainVolume_d__43 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::AudioManagerSO> __4__this;

  /// @brief Field <fadeFrom>5__2, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeFrom_5__2, put = __cordl_internal_set__fadeFrom_5__2)) float_t _fadeFrom_5__2;

  /// @brief Field <fadeTo>5__3, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeTo_5__3, put = __cordl_internal_set__fadeTo_5__3)) float_t _fadeTo_5__3;

  /// @brief Field <timer>5__4, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__timer_5__4, put = __cordl_internal_set__timer_5__4)) float_t _timer_5__4;

  /// @brief Field duration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field fadeType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeType, put = __cordl_internal_set_fadeType)) ::GlobalNamespace::AudioManagerSO_AudioFadeType fadeType;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3ace96c, size 0xf8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3acea64, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3acea6c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3aceaa4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3ace968, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__fadeFrom_5__2() const;

  constexpr float_t& __cordl_internal_get__fadeFrom_5__2();

  constexpr float_t const& __cordl_internal_get__fadeTo_5__3() const;

  constexpr float_t& __cordl_internal_get__fadeTo_5__3();

  constexpr float_t const& __cordl_internal_get__timer_5__4() const;

  constexpr float_t& __cordl_internal_get__timer_5__4();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::AudioManagerSO_AudioFadeType const& __cordl_internal_get_fadeType() const;

  constexpr ::GlobalNamespace::AudioManagerSO_AudioFadeType& __cordl_internal_get_fadeType();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AudioManagerSO> value);

  constexpr void __cordl_internal_set__fadeFrom_5__2(float_t value);

  constexpr void __cordl_internal_set__fadeTo_5__3(float_t value);

  constexpr void __cordl_internal_set__timer_5__4(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_fadeType(::GlobalNamespace::AudioManagerSO_AudioFadeType value);

  /// @brief Method .ctor, addr 0x3ace918, size 0x28, virtual false, abstract: false, final false
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
  constexpr AudioManagerSO__FadeMainVolume_d__43();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioManagerSO__FadeMainVolume_d__43", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioManagerSO__FadeMainVolume_d__43(AudioManagerSO__FadeMainVolume_d__43&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioManagerSO__FadeMainVolume_d__43", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioManagerSO__FadeMainVolume_d__43(AudioManagerSO__FadeMainVolume_d__43 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3994 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field fadeType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::AudioManagerSO_AudioFadeType ___fadeType;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioManagerSO> _____4__this;

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
static_assert(offsetof(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43, ___fadeType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43, ___duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43, ____fadeFrom_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43, ____fadeTo_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43, ____timer_5__4) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioManagerSO
class CORDL_TYPE AudioManagerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using AudioFadeType = ::GlobalNamespace::AudioManagerSO_AudioFadeType;

  using _FadeMainVolume_d__43 = ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43;

  /// @brief Field _audioMixer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioMixer, put = __cordl_internal_set__audioMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer> _audioMixer;

  /// @brief Field _coroutineStarter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _fadeCoroutine, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeCoroutine, put = __cordl_internal_set__fadeCoroutine)) ::UnityEngine::Coroutine* _fadeCoroutine;

  /// @brief Field _mainVolume, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__mainVolume, put = __cordl_internal_set__mainVolume)) float_t _mainVolume;

  /// @brief Field _mainVolumeFade, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__mainVolumeFade, put = __cordl_internal_set__mainVolumeFade)) float_t _mainVolumeFade;

  /// @brief Field _musicVolumeOffset, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__musicVolumeOffset, put = __cordl_internal_set__musicVolumeOffset)) float_t _musicVolumeOffset;

  /// @brief Field _sfxEnabled, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__sfxEnabled, put = __cordl_internal_set__sfxEnabled)) bool _sfxEnabled;

  /// @brief Field _sfxVolume, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__sfxVolume, put = __cordl_internal_set__sfxVolume)) float_t _sfxVolume;

  /// @brief Field _sfxVolumeOffset, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__sfxVolumeOffset, put = __cordl_internal_set__sfxVolumeOffset)) float_t _sfxVolumeOffset;

  /// @brief Field _spatializerPluginLatency, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__spatializerPluginLatency, put = __cordl_internal_set__spatializerPluginLatency)) float_t _spatializerPluginLatency;

  /// @brief Field _spatializerSfxVolumeOffset, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__spatializerSfxVolumeOffset, put = __cordl_internal_set__spatializerSfxVolumeOffset)) float_t _spatializerSfxVolumeOffset;

  __declspec(property(get = get_mainVolume, put = set_mainVolume)) float_t mainVolume;

  __declspec(property(get = get_mainVolumeFade)) float_t mainVolumeFade;

  __declspec(property(put = set_musicPitch)) float_t musicPitch;

  __declspec(property(put = set_musicSpeed)) float_t musicSpeed;

  __declspec(property(put = set_musicVolume)) float_t musicVolume;

  __declspec(property(get = get_sfxEnabled, put = set_sfxEnabled)) bool sfxEnabled;

  __declspec(property(get = get_sfxLatency)) float_t sfxLatency;

  __declspec(property(get = get_sfxVolume, put = set_sfxVolume)) float_t sfxVolume;

  /// @brief Method FadeMainVolume, addr 0x3ace898, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadeMainVolume(::GlobalNamespace::AudioManagerSO_AudioFadeType fadeType, float_t duration);

  /// @brief Method Init, addr 0x3ace3f8, size 0xb0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::ICoroutineStarter* coroutineStarter);

  static inline ::GlobalNamespace::AudioManagerSO* New_ctor();

  /// @brief Method StartMainVolumeFade, addr 0x3ace750, size 0x148, virtual false, abstract: false, final false
  inline void StartMainVolumeFade(::GlobalNamespace::AudioManagerSO_AudioFadeType fadeType, float_t duration);

  /// @brief Method UpdateMainMixerBus, addr 0x3ace4c0, size 0x84, virtual false, abstract: false, final false
  inline void UpdateMainMixerBus();

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__audioMixer() const;

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__audioMixer();

  constexpr ::GlobalNamespace::ICoroutineStarter* const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__fadeCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__fadeCoroutine();

  constexpr float_t const& __cordl_internal_get__mainVolume() const;

  constexpr float_t& __cordl_internal_get__mainVolume();

  constexpr float_t const& __cordl_internal_get__mainVolumeFade() const;

  constexpr float_t& __cordl_internal_get__mainVolumeFade();

  constexpr float_t const& __cordl_internal_get__musicVolumeOffset() const;

  constexpr float_t& __cordl_internal_get__musicVolumeOffset();

  constexpr bool const& __cordl_internal_get__sfxEnabled() const;

  constexpr bool& __cordl_internal_get__sfxEnabled();

  constexpr float_t const& __cordl_internal_get__sfxVolume() const;

  constexpr float_t& __cordl_internal_get__sfxVolume();

  constexpr float_t const& __cordl_internal_get__sfxVolumeOffset() const;

  constexpr float_t& __cordl_internal_get__sfxVolumeOffset();

  constexpr float_t const& __cordl_internal_get__spatializerPluginLatency() const;

  constexpr float_t& __cordl_internal_get__spatializerPluginLatency();

  constexpr float_t const& __cordl_internal_get__spatializerSfxVolumeOffset() const;

  constexpr float_t& __cordl_internal_get__spatializerSfxVolumeOffset();

  constexpr void __cordl_internal_set__audioMixer(::UnityW<::UnityEngine::Audio::AudioMixer> value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__fadeCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__mainVolume(float_t value);

  constexpr void __cordl_internal_set__mainVolumeFade(float_t value);

  constexpr void __cordl_internal_set__musicVolumeOffset(float_t value);

  constexpr void __cordl_internal_set__sfxEnabled(bool value);

  constexpr void __cordl_internal_set__sfxVolume(float_t value);

  constexpr void __cordl_internal_set__sfxVolumeOffset(float_t value);

  constexpr void __cordl_internal_set__spatializerPluginLatency(float_t value);

  constexpr void __cordl_internal_set__spatializerSfxVolumeOffset(float_t value);

  /// @brief Method .ctor, addr 0x3ace940, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mainVolume, addr 0x3ace4b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mainVolume();

  /// @brief Method get_mainVolumeFade, addr 0x3ace4a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mainVolumeFade();

  /// @brief Method get_sfxEnabled, addr 0x3ace5c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_sfxEnabled();

  /// @brief Method get_sfxLatency, addr 0x3ace398, size 0x60, virtual false, abstract: false, final false
  inline float_t get_sfxLatency();

  /// @brief Method get_sfxVolume, addr 0x3ace5ac, size 0x18, virtual false, abstract: false, final false
  inline float_t get_sfxVolume();

  /// @brief Method set_mainVolume, addr 0x3ace4b8, size 0x8, virtual false, abstract: false, final false
  inline void set_mainVolume(float_t value);

  /// @brief Method set_musicPitch, addr 0x3ace5ec, size 0x100, virtual false, abstract: false, final false
  inline void set_musicPitch(float_t value);

  /// @brief Method set_musicSpeed, addr 0x3ace6ec, size 0x64, virtual false, abstract: false, final false
  inline void set_musicSpeed(float_t value);

  /// @brief Method set_musicVolume, addr 0x3ace544, size 0x68, virtual false, abstract: false, final false
  inline void set_musicVolume(float_t value);

  /// @brief Method set_sfxEnabled, addr 0x3ace5cc, size 0x20, virtual false, abstract: false, final false
  inline void set_sfxEnabled(bool value);

  /// @brief Method set_sfxVolume, addr 0x3acd7b4, size 0x84, virtual false, abstract: false, final false
  inline void set_sfxVolume(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioManagerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioManagerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioManagerSO(AudioManagerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioManagerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioManagerSO(AudioManagerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3995 };

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

  /// @brief Field _audioMixer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Audio::AudioMixer> ____audioMixer;

  /// @brief Field _spatializerPluginLatency, offset: 0x20, size: 0x4, def value: None
  float_t ____spatializerPluginLatency;

  /// @brief Field _spatializerSfxVolumeOffset, offset: 0x24, size: 0x4, def value: None
  float_t ____spatializerSfxVolumeOffset;

  /// @brief Field _coroutineStarter, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _fadeCoroutine, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____fadeCoroutine;

  /// @brief Field _mainVolumeFade, offset: 0x38, size: 0x4, def value: None
  float_t ____mainVolumeFade;

  /// @brief Field _mainVolume, offset: 0x3c, size: 0x4, def value: None
  float_t ____mainVolume;

  /// @brief Field _musicVolumeOffset, offset: 0x40, size: 0x4, def value: None
  float_t ____musicVolumeOffset;

  /// @brief Field _sfxVolumeOffset, offset: 0x44, size: 0x4, def value: None
  float_t ____sfxVolumeOffset;

  /// @brief Field _sfxVolume, offset: 0x48, size: 0x4, def value: None
  float_t ____sfxVolume;

  /// @brief Field _sfxEnabled, offset: 0x4c, size: 0x1, def value: None
  bool ____sfxEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____audioMixer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____spatializerPluginLatency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____spatializerSfxVolumeOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____coroutineStarter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____fadeCoroutine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____mainVolumeFade) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____mainVolume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____musicVolumeOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____sfxVolumeOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____sfxVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerSO, ____sfxEnabled) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioManagerSO, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioManagerSO_AudioFadeType, "", "AudioManagerSO/AudioFadeType");
NEED_NO_BOX(::GlobalNamespace::AudioManagerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioManagerSO*, "", "AudioManagerSO");
NEED_NO_BOX(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*, "", "AudioManagerSO/<FadeMainVolume>d__43");
