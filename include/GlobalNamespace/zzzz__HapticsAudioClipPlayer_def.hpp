#pragma once
// IWYU pragma private; include "GlobalNamespace/HapticsAudioClipPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticsAudioClipPlayer)
namespace GlobalNamespace {
class __HapticsAudioClipPlayer__Pool;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
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
class __HapticsAudioClipPlayer__Pool;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HapticsAudioClipPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__HapticsAudioClipPlayer__Pool);
MARK_REF_PTR_T(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9);
MARK_REF_PTR_T(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11);
// Type: ::Pool
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HapticsAudioClipPlayer::Pool*
class CORDL_TYPE __HapticsAudioClipPlayer__Pool : public ::Zenject::MemoryPool_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__HapticsAudioClipPlayer__Pool* New_ctor();

  /// @brief Method OnCreated, addr 0x39758fc, size 0x14, virtual true, abstract: false, final false
  inline void OnCreated(::GlobalNamespace::HapticsAudioClipPlayer* item);

  /// @brief Method OnDespawned, addr 0x3975984, size 0x14, virtual true, abstract: false, final false
  inline void OnDespawned(::GlobalNamespace::HapticsAudioClipPlayer* item);

  /// @brief Method OnDestroyed, addr 0x3975910, size 0x74, virtual true, abstract: false, final false
  inline void OnDestroyed(::GlobalNamespace::HapticsAudioClipPlayer* item);

  /// @brief Method Reinitialize, addr 0x3975998, size 0x14, virtual true, abstract: false, final false
  inline void Reinitialize(::GlobalNamespace::HapticsAudioClipPlayer* clipPlayer);

  /// @brief Method .ctor, addr 0x39759ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HapticsAudioClipPlayer__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HapticsAudioClipPlayer__Pool(__HapticsAudioClipPlayer__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HapticsAudioClipPlayer__Pool(__HapticsAudioClipPlayer__Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16432 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HapticsAudioClipPlayer__Pool, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleContinuousAudioCoroutine>d__9
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HapticsAudioClipPlayer::<HandleContinuousAudioCoroutine>d__9*
class CORDL_TYPE __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x39759f8, size 0x128, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3975b20, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3975b28, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3975b60, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39759f4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::WaitForEndOfFrame*& __cordl_internal_get__waitForLateUpdate_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForEndOfFrame*> const& __cordl_internal_get__waitForLateUpdate_5__2() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*> const& __cordl_internal_get_onComplete() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> value);

  constexpr void __cordl_internal_set__waitForLateUpdate_5__2(::UnityEngine::WaitForEndOfFrame* value);

  constexpr void __cordl_internal_set_onComplete(::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* value);

  /// @brief Method .ctor, addr 0x39757d0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9(__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9(__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9, ___onComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9, ____waitForLateUpdate_5__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleOneShotPlayEndCoroutine>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HapticsAudioClipPlayer::<HandleOneShotPlayEndCoroutine>d__11*
class CORDL_TYPE __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x3975b6c, size 0x110, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3975c7c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3975c84, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3975cbc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3975b68, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*> const& __cordl_internal_get_onComplete() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> value);

  constexpr void __cordl_internal_set_onComplete(::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* value);

  /// @brief Method .ctor, addr 0x3975840, size 0x28, virtual false, abstract: false, final false
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
  constexpr __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11(__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11(__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer> _____4__this;

  /// @brief Field onComplete, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* ___onComplete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16434 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11, ___onComplete) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsAudioClipPlayer
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HapticsAudioClipPlayer*
class CORDL_TYPE HapticsAudioClipPlayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__HapticsAudioClipPlayer__Pool;

  using _HandleContinuousAudioCoroutine_d__9 = ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9;

  using _HandleOneShotPlayEndCoroutine_d__11 = ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _baseVolume, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__baseVolume, put = __cordl_internal_set__baseVolume)) float_t _baseVolume;

  /// @brief Field _lastTriggerTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lastTriggerTime, put = __cordl_internal_set__lastTriggerTime)) float_t _lastTriggerTime;

  /// @brief Field _triggeredThisFrame, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__triggeredThisFrame, put = __cordl_internal_set__triggeredThisFrame)) bool _triggeredThisFrame;

  /// @brief Method ForceStopPlaying, addr 0x3975868, size 0x2c, virtual false, abstract: false, final false
  inline void ForceStopPlaying();

  /// @brief Method GetPanForNode, addr 0x39755d8, size 0xe4, virtual false, abstract: false, final false
  inline float_t GetPanForNode(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleContinuousAudioCoroutine, addr 0x3975728, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HandleContinuousAudioCoroutine(::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* onComplete);

  /// @brief Method HandleOneShotPlayEndCoroutine, addr 0x39756bc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HandleOneShotPlayEndCoroutine(::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* onComplete);

  /// @brief Method Initialize, addr 0x3975894, size 0x38, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::HapticsAudioClipPlayer* New_ctor();

  /// @brief Method PlayHapticsPreset, addr 0x3975448, size 0x13c, virtual false, abstract: false, final false
  inline void PlayHapticsPreset(::UnityEngine::XR::XRNode onNode, ::Libraries::HM::HMLib::VR::HapticPresetSO* preset,
                                ::System::Action_1<::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* onComplete);

  /// @brief Method Reset, addr 0x3975584, size 0x54, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method RestartHaptic, addr 0x39757cc, size 0x4, virtual false, abstract: false, final false
  inline void RestartHaptic();

  /// @brief Method TriggerContinuousHaptic, addr 0x3975794, size 0x38, virtual false, abstract: false, final false
  inline void TriggerContinuousHaptic();

  /// @brief Method UpdateFadeVolume, addr 0x39757f8, size 0x48, virtual false, abstract: false, final false
  inline void UpdateFadeVolume(float_t timeSinceEnd);

  /// @brief Method <HandleOneShotPlayEndCoroutine>b__11_0, addr 0x39758d4, size 0x28, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x39758cc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _baseVolume, offset: 0x28, size: 0x4, def value: None
  float_t ____baseVolume;

  /// @brief Field _triggeredThisFrame, offset: 0x2c, size: 0x1, def value: None
  bool ____triggeredThisFrame;

  /// @brief Field _lastTriggerTime, offset: 0x30, size: 0x4, def value: None
  float_t ____lastTriggerTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16435 };

  /// @brief Field kContinuousRumbleFadeDuration offset 0xffffffff size 0x4
  static constexpr float_t kContinuousRumbleFadeDuration{ 0.016666668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticsAudioClipPlayer, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer, ____baseVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer, ____triggeredThisFrame) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsAudioClipPlayer, ____lastTriggerTime) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HapticsAudioClipPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticsAudioClipPlayer*, "", "HapticsAudioClipPlayer");
NEED_NO_BOX(::GlobalNamespace::__HapticsAudioClipPlayer__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HapticsAudioClipPlayer__Pool*, "", "HapticsAudioClipPlayer/Pool");
NEED_NO_BOX(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*, "", "HapticsAudioClipPlayer/<HandleContinuousAudioCoroutine>d__9");
NEED_NO_BOX(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*, "", "HapticsAudioClipPlayer/<HandleOneShotPlayEndCoroutine>d__11");
