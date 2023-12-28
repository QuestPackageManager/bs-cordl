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
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace System {
class Action;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4048))
// CS Name: ::AudioPitchGainEffect::<StartEffectCoroutine>d__8*
class CORDL_TYPE __AudioPitchGainEffect___StartEffectCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::AudioPitchGainEffect* __4__this;

  /// @brief Field volumeScale, offset 0x28, size 0x4
  __declspec(property(get = __get_volumeScale, put = __set_volumeScale)) float_t volumeScale;

  /// @brief Field finishCallback, offset 0x30, size 0x8
  __declspec(property(get = __get_finishCallback, put = __set_finishCallback))::System::Action* finishCallback;

  /// @brief Field <startPitch>5__2, offset 0x38, size 0x4
  __declspec(property(get = __get__startPitch_5__2, put = __set__startPitch_5__2)) float_t _startPitch_5__2;

  /// @brief Field <time>5__3, offset 0x3c, size 0x4
  __declspec(property(get = __get__time_5__3, put = __set__time_5__3)) float_t _time_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::AudioPitchGainEffect*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPitchGainEffect*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::AudioPitchGainEffect* value);

  constexpr float_t& __get_volumeScale();

  constexpr float_t const& __get_volumeScale() const;

  constexpr void __set_volumeScale(float_t value);

  constexpr ::System::Action*& __get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_finishCallback() const;

  constexpr void __set_finishCallback(::System::Action* value);

  constexpr float_t& __get__startPitch_5__2();

  constexpr float_t const& __get__startPitch_5__2() const;

  constexpr void __set__startPitch_5__2(float_t value);

  constexpr float_t& __get__time_5__3();

  constexpr float_t const& __get__time_5__3() const;

  constexpr void __set__time_5__3(float_t value);

  static inline ::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x222b3f8 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x222b4a4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x222b4a8 size 0x184 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x222b62c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x222b634 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x222b674 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__AudioPitchGainEffect___StartEffectCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioPitchGainEffect___StartEffectCoroutine_d__8(__AudioPitchGainEffect___StartEffectCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioPitchGainEffect___StartEffectCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioPitchGainEffect___StartEffectCoroutine_d__8(__AudioPitchGainEffect___StartEffectCoroutine_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioPitchGainEffect___StartEffectCoroutine_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AudioPitchGainEffect* _____4__this;

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

} // namespace GlobalNamespace
// Type: ::AudioPitchGainEffect
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4049))
// CS Name: ::AudioPitchGainEffect*
class CORDL_TYPE AudioPitchGainEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _StartEffectCoroutine_d__8 = ::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8;

  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _duration, offset 0x20, size 0x4
  __declspec(property(get = __get__duration, put = __set__duration)) float_t _duration;

  /// @brief Field _pitchCurve, offset 0x28, size 0x8
  __declspec(property(get = __get__pitchCurve, put = __set__pitchCurve))::UnityEngine::AnimationCurve* _pitchCurve;

  /// @brief Field _gainCurve, offset 0x30, size 0x8
  __declspec(property(get = __get__gainCurve, put = __set__gainCurve))::UnityEngine::AnimationCurve* _gainCurve;

  /// @brief Field _currentCoroutine, offset 0x38, size 0x8
  __declspec(property(get = __get__currentCoroutine, put = __set__currentCoroutine))::UnityEngine::Coroutine* _currentCoroutine;

  /// @brief Field _startPitch, offset 0x40, size 0x4
  __declspec(property(get = __get__startPitch, put = __set__startPitch)) float_t _startPitch;

  /// @brief Field _startVolume, offset 0x44, size 0x4
  __declspec(property(get = __get__startVolume, put = __set__startVolume)) float_t _startVolume;

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr float_t& __get__duration();

  constexpr float_t const& __get__duration() const;

  constexpr void __set__duration(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get__pitchCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__pitchCurve() const;

  constexpr void __set__pitchCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__gainCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__gainCurve() const;

  constexpr void __set__gainCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::Coroutine*& __get__currentCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get__currentCoroutine() const;

  constexpr void __set__currentCoroutine(::UnityEngine::Coroutine* value);

  constexpr float_t& __get__startPitch();

  constexpr float_t const& __get__startPitch() const;

  constexpr void __set__startPitch(float_t value);

  constexpr float_t& __get__startVolume();

  constexpr float_t const& __get__startVolume() const;

  constexpr void __set__startVolume(float_t value);

  /// @brief Method Start addr 0x222b348 size 0x28 virtual false final false
  inline void Start();

  /// @brief Method StartEffectCoroutine addr 0x222b370 size 0x88 virtual false final false
  inline ::System::Collections::IEnumerator* StartEffectCoroutine(float_t volumeScale, ::System::Action* finishCallback);

  /// @brief Method StartEffect addr 0x222b420 size 0x28 virtual false final false
  inline void StartEffect(float_t volumeScale, ::System::Action* finishCallback);

  /// @brief Method InterruptEffect addr 0x222b448 size 0x40 virtual false final false
  inline void InterruptEffect();

  /// @brief Method SetAudioSource addr 0x222b488 size 0x8 virtual false final false
  inline void SetAudioSource(::UnityEngine::AudioSource* audioSource);

  static inline ::GlobalNamespace::AudioPitchGainEffect* New_ctor();

  /// @brief Method .ctor addr 0x222b490 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioPitchGainEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioPitchGainEffect(AudioPitchGainEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioPitchGainEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioPitchGainEffect(AudioPitchGainEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioPitchGainEffect();

public:
  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioPitchGainEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioPitchGainEffect*, "", "AudioPitchGainEffect");
NEED_NO_BOX(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioPitchGainEffect___StartEffectCoroutine_d__8*, "", "AudioPitchGainEffect/<StartEffectCoroutine>d__8");
