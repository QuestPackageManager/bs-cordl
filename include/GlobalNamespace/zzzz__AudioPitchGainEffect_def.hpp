#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioPitchGainEffect)
namespace GlobalNamespace {
class __AudioPitchGainEffect___StartEffectCoroutine_d__8;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioPitchGainEffect;
}
namespace GlobalNamespace {
class __AudioPitchGainEffect___StartEffectCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioPitchGainEffect);
MARK_REF_PTR_T(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8);
// Type: ::<StartEffectCoroutine>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AudioPitchGainEffect::<StartEffectCoroutine>d__8*
class CORDL_TYPE __AudioPitchGainEffect___StartEffectCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::AudioPitchGainEffect> __4__this;

  /// @brief Field <startPitch>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startPitch_5__2, put = __cordl_internal_set__startPitch_5__2)) float_t _startPitch_5__2;

  /// @brief Field <time>5__3, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__time_5__3, put = __cordl_internal_set__time_5__3)) float_t _time_5__3;

  /// @brief Field finishCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_finishCallback, put = __cordl_internal_set_finishCallback))::System::Action* finishCallback;

  /// @brief Field volumeScale, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_volumeScale, put = __cordl_internal_set_volumeScale)) float_t volumeScale;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x23e3d50, size 0x184, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x23e3ed4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x23e3edc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23e3f1c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x23e3d4c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__startPitch_5__2() const;

  constexpr float_t& __cordl_internal_get__startPitch_5__2();

  constexpr float_t const& __cordl_internal_get__time_5__3() const;

  constexpr float_t& __cordl_internal_get__time_5__3();

  constexpr ::System::Action*& __cordl_internal_get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_finishCallback() const;

  constexpr float_t const& __cordl_internal_get_volumeScale() const;

  constexpr float_t& __cordl_internal_get_volumeScale();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value);

  constexpr void __cordl_internal_set__startPitch_5__2(float_t value);

  constexpr void __cordl_internal_set__time_5__3(float_t value);

  constexpr void __cordl_internal_set_finishCallback(::System::Action* value);

  constexpr void __cordl_internal_set_volumeScale(float_t value);

  /// @brief Method .ctor, addr 0x23e3ca0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __AudioPitchGainEffect___StartEffectCoroutine_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AudioPitchGainEffect___StartEffectCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioPitchGainEffect___StartEffectCoroutine_d__8(__AudioPitchGainEffect___StartEffectCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioPitchGainEffect___StartEffectCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioPitchGainEffect___StartEffectCoroutine_d__8(__AudioPitchGainEffect___StartEffectCoroutine_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPitchGainEffect> _____4__this;

  /// @brief Field volumeScale, offset: 0x28, size: 0x4, def value: None
  float_t ___volumeScale;

  /// @brief Field finishCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___finishCallback;

  /// @brief Field <startPitch>5__2, offset: 0x38, size: 0x4, def value: None
  float_t ____startPitch_5__2;

  /// @brief Field <time>5__3, offset: 0x3c, size: 0x4, def value: None
  float_t ____time_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8, ___volumeScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8, ___finishCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8, ____startPitch_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8, ____time_5__3) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AudioPitchGainEffect
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AudioPitchGainEffect*
class CORDL_TYPE AudioPitchGainEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _StartEffectCoroutine_d__8 = ::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8;

  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource))::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _currentCoroutine, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__currentCoroutine, put = __cordl_internal_set__currentCoroutine))::UnityEngine::Coroutine* _currentCoroutine;

  /// @brief Field _duration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _gainCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gainCurve, put = __cordl_internal_set__gainCurve))::UnityEngine::AnimationCurve* _gainCurve;

  /// @brief Field _pitchCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pitchCurve, put = __cordl_internal_set__pitchCurve))::UnityEngine::AnimationCurve* _pitchCurve;

  /// @brief Field _startPitch, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__startPitch, put = __cordl_internal_set__startPitch)) float_t _startPitch;

  /// @brief Field _startVolume, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__startVolume, put = __cordl_internal_set__startVolume)) float_t _startVolume;

  /// @brief Method InterruptEffect, addr 0x23e3cf0, size 0x40, virtual false, abstract: false, final false
  inline void InterruptEffect();

  static inline ::GlobalNamespace::AudioPitchGainEffect* New_ctor();

  /// @brief Method SetAudioSource, addr 0x23e3d30, size 0x8, virtual false, abstract: false, final false
  inline void SetAudioSource(::UnityEngine::AudioSource* audioSource);

  /// @brief Method Start, addr 0x23e3bf0, size 0x28, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartEffect, addr 0x23e3cc8, size 0x28, virtual false, abstract: false, final false
  inline void StartEffect(float_t volumeScale, ::System::Action* finishCallback);

  /// @brief Method StartEffectCoroutine, addr 0x23e3c18, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartEffectCoroutine(float_t volumeScale, ::System::Action* finishCallback);

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__currentCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get__currentCoroutine() const;

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__gainCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__gainCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__pitchCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__pitchCurve() const;

  constexpr float_t const& __cordl_internal_get__startPitch() const;

  constexpr float_t& __cordl_internal_get__startPitch();

  constexpr float_t const& __cordl_internal_get__startVolume() const;

  constexpr float_t& __cordl_internal_get__startVolume();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__currentCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__gainCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__pitchCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__startPitch(float_t value);

  constexpr void __cordl_internal_set__startVolume(float_t value);

  /// @brief Method .ctor, addr 0x23e3d38, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioPitchGainEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioPitchGainEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioPitchGainEffect(AudioPitchGainEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioPitchGainEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioPitchGainEffect(AudioPitchGainEffect const&) = delete;

  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _duration, offset: 0x20, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _pitchCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____pitchCurve;

  /// @brief Field _gainCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____gainCurve;

  /// @brief Field _currentCoroutine, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____currentCoroutine;

  /// @brief Field _startPitch, offset: 0x40, size: 0x4, def value: None
  float_t ____startPitch;

  /// @brief Field _startVolume, offset: 0x44, size: 0x4, def value: None
  float_t ____startVolume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioPitchGainEffect, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPitchGainEffect, ____audioSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPitchGainEffect, ____duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPitchGainEffect, ____pitchCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPitchGainEffect, ____gainCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPitchGainEffect, ____currentCoroutine) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPitchGainEffect, ____startPitch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPitchGainEffect, ____startVolume) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioPitchGainEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioPitchGainEffect*, "", "AudioPitchGainEffect");
NEED_NO_BOX(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8*, "", "AudioPitchGainEffect/<StartEffectCoroutine>d__8");
