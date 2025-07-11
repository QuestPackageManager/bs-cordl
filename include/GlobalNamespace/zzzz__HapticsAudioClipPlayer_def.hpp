#pragma once
// IWYU pragma private; include "GlobalNamespace/HapticsAudioClipPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticsAudioClipPlayer)
namespace GlobalNamespace {
class HapticsAudioClipPlayer_Pool;
}
namespace GlobalNamespace {
class HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9;
}
namespace GlobalNamespace {
class HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class HapticsAudioClipPlayer;
}
namespace GlobalNamespace {
class HapticsAudioClipPlayer_Pool;
}
namespace GlobalNamespace {
class HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9;
}
namespace GlobalNamespace {
class HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HapticsAudioClipPlayer);
MARK_REF_PTR_T(::GlobalNamespace::HapticsAudioClipPlayer_Pool);
MARK_REF_PTR_T(::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9);
MARK_REF_PTR_T(::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11);
// Dependencies Zenject.MemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: HapticsAudioClipPlayer/Pool
class CORDL_TYPE HapticsAudioClipPlayer_Pool : public ::Zenject::MemoryPool_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>> {
public:
  // Declarations
  static inline ::GlobalNamespace::HapticsAudioClipPlayer_Pool* New_ctor();

  /// @brief Method OnCreated, addr 0x39ca338, size 0x14, virtual true, abstract: false, final false
  inline void OnCreated(::GlobalNamespace::HapticsAudioClipPlayer* item);

  /// @brief Method OnDespawned, addr 0x39ca3c0, size 0x14, virtual true, abstract: false, final false
  inline void OnDespawned(::GlobalNamespace::HapticsAudioClipPlayer* item);

  /// @brief Method OnDestroyed, addr 0x39ca34c, size 0x74, virtual true, abstract: false, final false
  inline void OnDestroyed(::GlobalNamespace::HapticsAudioClipPlayer* item);

  /// @brief Method Reinitialize, addr 0x39ca3d4, size 0x14, virtual true, abstract: false, final false
  inline void Reinitialize(::GlobalNamespace::HapticsAudioClipPlayer* clipPlayer);

  /// @brief Method .ctor, addr 0x39ca3e8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticsAudioClipPlayer_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticsAudioClipPlayer_Pool(HapticsAudioClipPlayer_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticsAudioClipPlayer_Pool(HapticsAudioClipPlayer_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16479 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticsAudioClipPlayer_Pool, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HapticsAudioClipPlayer/<HandleContinuousAudioCoroutine>d__9
class CORDL_TYPE HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> __4__this;

  /// @brief Field <waitForLateUpdate>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__waitForLateUpdate_5__2, put = __cordl_internal_set__waitForLateUpdate_5__2)) ::UnityEngine::WaitForEndOfFrame* _waitForLateUpdate_5__2;

  /// @brief Field onComplete, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete)) ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* onComplete;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39ca434, size 0x128, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39ca55c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39ca564, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39ca59c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39ca430, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::WaitForEndOfFrame* const& __cordl_internal_get__waitForLateUpdate_5__2() const;

  constexpr ::UnityEngine::WaitForEndOfFrame*& __cordl_internal_get__waitForLateUpdate_5__2();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* const& __cordl_internal_get_onComplete() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*& __cordl_internal_get_onComplete();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> value);

  constexpr void __cordl_internal_set__waitForLateUpdate_5__2(::UnityEngine::WaitForEndOfFrame* value);

  constexpr void __cordl_internal_set_onComplete(::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* value);

  /// @brief Method .ctor, addr 0x39ca20c, size 0x28, virtual false, abstract: false, final false
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
  constexpr HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9(HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9(HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16480 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> _____4__this;

  /// @brief Field onComplete, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* ___onComplete;

  /// @brief Field <waitForLateUpdate>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::WaitForEndOfFrame* ____waitForLateUpdate_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9, ___onComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9, ____waitForLateUpdate_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HapticsAudioClipPlayer/<HandleOneShotPlayEndCoroutine>d__11
class CORDL_TYPE HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> __4__this;

  /// @brief Field onComplete, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete)) ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* onComplete;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39ca5a8, size 0x110, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39ca6b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39ca6c0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39ca6f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39ca5a4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* const& __cordl_internal_get_onComplete() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*& __cordl_internal_get_onComplete();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> value);

  constexpr void __cordl_internal_set_onComplete(::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* value);

  /// @brief Method .ctor, addr 0x39ca27c, size 0x28, virtual false, abstract: false, final false
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
  constexpr HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11(HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11(HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16481 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> _____4__this;

  /// @brief Field onComplete, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* ___onComplete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11, ___onComplete) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HapticsAudioClipPlayer
class CORDL_TYPE HapticsAudioClipPlayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::HapticsAudioClipPlayer_Pool;

  using _HandleContinuousAudioCoroutine_d__9 = ::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9;

  using _HandleOneShotPlayEndCoroutine_d__11 = ::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _baseVolume, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__baseVolume, put = __cordl_internal_set__baseVolume)) float_t _baseVolume;

  /// @brief Field _lastTriggerTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lastTriggerTime, put = __cordl_internal_set__lastTriggerTime)) float_t _lastTriggerTime;

  /// @brief Field _triggeredThisFrame, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__triggeredThisFrame, put = __cordl_internal_set__triggeredThisFrame)) bool _triggeredThisFrame;

  /// @brief Method ForceStopPlaying, addr 0x39ca2a4, size 0x2c, virtual false, abstract: false, final false
  inline void ForceStopPlaying();

  /// @brief Method GetPanForNode, addr 0x39ca014, size 0xe4, virtual false, abstract: false, final false
  inline float_t GetPanForNode(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleContinuousAudioCoroutine, addr 0x39ca164, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HandleContinuousAudioCoroutine(::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* onComplete);

  /// @brief Method HandleOneShotPlayEndCoroutine, addr 0x39ca0f8, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HandleOneShotPlayEndCoroutine(::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* onComplete);

  /// @brief Method Initialize, addr 0x39ca2d0, size 0x38, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::HapticsAudioClipPlayer* New_ctor();

  /// @brief Method PlayHapticsPreset, addr 0x39c9e84, size 0x13c, virtual false, abstract: false, final false
  inline void PlayHapticsPreset(::UnityEngine::XR::XRNode onNode, ::Libraries::HM::HMLib::VR::HapticPresetSO* preset,
                                ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* onComplete);

  /// @brief Method Reset, addr 0x39c9fc0, size 0x54, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method RestartHaptic, addr 0x39ca208, size 0x4, virtual false, abstract: false, final false
  inline void RestartHaptic();

  /// @brief Method TriggerContinuousHaptic, addr 0x39ca1d0, size 0x38, virtual false, abstract: false, final false
  inline void TriggerContinuousHaptic();

  /// @brief Method UpdateFadeVolume, addr 0x39ca234, size 0x48, virtual false, abstract: false, final false
  inline void UpdateFadeVolume(float_t timeSinceEnd);

  /// @brief Method <HandleOneShotPlayEndCoroutine>b__11_0, addr 0x39ca310, size 0x28, virtual false, abstract: false, final false
  inline bool _HandleOneShotPlayEndCoroutine_b__11_0();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr float_t const& __cordl_internal_get__baseVolume() const;

  constexpr float_t& __cordl_internal_get__baseVolume();

  constexpr float_t const& __cordl_internal_get__lastTriggerTime() const;

  constexpr float_t& __cordl_internal_get__lastTriggerTime();

  constexpr bool const& __cordl_internal_get__triggeredThisFrame() const;

  constexpr bool& __cordl_internal_get__triggeredThisFrame();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__baseVolume(float_t value);

  constexpr void __cordl_internal_set__lastTriggerTime(float_t value);

  constexpr void __cordl_internal_set__triggeredThisFrame(bool value);

  /// @brief Method .ctor, addr 0x39ca308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticsAudioClipPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticsAudioClipPlayer(HapticsAudioClipPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticsAudioClipPlayer(HapticsAudioClipPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16482 };

  /// @brief Field kContinuousRumbleFadeDuration offset 0xffffffff size 0x4
  static constexpr float_t kContinuousRumbleFadeDuration{ static_cast<float_t>(0.016666668f) };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _baseVolume, offset: 0x28, size: 0x4, def value: None
  float_t ____baseVolume;

  /// @brief Field _triggeredThisFrame, offset: 0x2c, size: 0x1, def value: None
  bool ____triggeredThisFrame;

  /// @brief Field _lastTriggerTime, offset: 0x30, size: 0x4, def value: None
  float_t ____lastTriggerTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer, ____baseVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer, ____triggeredThisFrame) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer, ____lastTriggerTime) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticsAudioClipPlayer, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HapticsAudioClipPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticsAudioClipPlayer*, "", "HapticsAudioClipPlayer");
NEED_NO_BOX(::GlobalNamespace::HapticsAudioClipPlayer_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticsAudioClipPlayer_Pool*, "", "HapticsAudioClipPlayer/Pool");
NEED_NO_BOX(::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticsAudioClipPlayer__HandleContinuousAudioCoroutine_d__9*, "", "HapticsAudioClipPlayer/<HandleContinuousAudioCoroutine>d__9");
NEED_NO_BOX(::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticsAudioClipPlayer__HandleOneShotPlayEndCoroutine_d__11*, "", "HapticsAudioClipPlayer/<HandleOneShotPlayEndCoroutine>d__11");
