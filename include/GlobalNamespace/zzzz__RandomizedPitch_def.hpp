#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomizedPitch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomizedPitch)
namespace GlobalNamespace {
class RandomizedPitch__PlayDelayedCoroutine_d__9;
}
namespace GlobalNamespace {
class RandomizedPitch__RestorePitchWithDelay_d__10;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomizedPitch;
}
namespace GlobalNamespace {
class RandomizedPitch__PlayDelayedCoroutine_d__9;
}
namespace GlobalNamespace {
class RandomizedPitch__RestorePitchWithDelay_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomizedPitch);
MARK_REF_PTR_T(::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9);
MARK_REF_PTR_T(::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomizedPitch/<PlayDelayedCoroutine>d__9
class CORDL_TYPE RandomizedPitch__PlayDelayedCoroutine_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::RandomizedPitch> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39be444, size 0xa8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39be4ec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39be4f4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39be52c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39be440, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::RandomizedPitch> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RandomizedPitch>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RandomizedPitch> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x39be3d4, size 0x28, virtual false, abstract: false, final false
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
  constexpr RandomizedPitch__PlayDelayedCoroutine_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch__PlayDelayedCoroutine_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomizedPitch__PlayDelayedCoroutine_d__9(RandomizedPitch__PlayDelayedCoroutine_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch__PlayDelayedCoroutine_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomizedPitch__PlayDelayedCoroutine_d__9(RandomizedPitch__PlayDelayedCoroutine_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16390 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RandomizedPitch> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomizedPitch/<RestorePitchWithDelay>d__10
class CORDL_TYPE RandomizedPitch__RestorePitchWithDelay_d__10 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::RandomizedPitch> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39be538, size 0xb8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39be5f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39be5f8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39be630, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39be534, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::RandomizedPitch> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RandomizedPitch>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RandomizedPitch> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x39be3fc, size 0x28, virtual false, abstract: false, final false
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
  constexpr RandomizedPitch__RestorePitchWithDelay_d__10();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch__RestorePitchWithDelay_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomizedPitch__RestorePitchWithDelay_d__10(RandomizedPitch__RestorePitchWithDelay_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch__RestorePitchWithDelay_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomizedPitch__RestorePitchWithDelay_d__10(RandomizedPitch__RestorePitchWithDelay_d__10 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16391 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RandomizedPitch> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomizedPitch
class CORDL_TYPE RandomizedPitch : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _PlayDelayedCoroutine_d__9 = ::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9;

  using _RestorePitchWithDelay_d__10 = ::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _maxPitchMultiplier, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPitchMultiplier, put = __cordl_internal_set__maxPitchMultiplier)) float_t _maxPitchMultiplier;

  /// @brief Field _minPitchMultiplier, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__minPitchMultiplier, put = __cordl_internal_set__minPitchMultiplier)) float_t _minPitchMultiplier;

  /// @brief Field _originalPitch, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__originalPitch, put = __cordl_internal_set__originalPitch)) float_t _originalPitch;

  /// @brief Field _playOnAwake, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__playOnAwake, put = __cordl_internal_set__playOnAwake)) bool _playOnAwake;

  /// @brief Field _restoringCoroutine, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__restoringCoroutine, put = __cordl_internal_set__restoringCoroutine)) ::UnityEngine::Coroutine* _restoringCoroutine;

  static inline ::GlobalNamespace::RandomizedPitch* New_ctor();

  /// @brief Method OnEnable, addr 0x39be190, size 0x58, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Play, addr 0x39be1e8, size 0xd4, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method PlayDelayed, addr 0x39be32c, size 0x38, virtual false, abstract: false, final false
  inline void PlayDelayed(float_t delay);

  /// @brief Method PlayDelayedCoroutine, addr 0x39be364, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PlayDelayedCoroutine(float_t delay);

  /// @brief Method RestorePitchWithDelay, addr 0x39be2bc, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RestorePitchWithDelay(float_t delay);

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr float_t const& __cordl_internal_get__maxPitchMultiplier() const;

  constexpr float_t& __cordl_internal_get__maxPitchMultiplier();

  constexpr float_t const& __cordl_internal_get__minPitchMultiplier() const;

  constexpr float_t& __cordl_internal_get__minPitchMultiplier();

  constexpr float_t const& __cordl_internal_get__originalPitch() const;

  constexpr float_t& __cordl_internal_get__originalPitch();

  constexpr bool const& __cordl_internal_get__playOnAwake() const;

  constexpr bool& __cordl_internal_get__playOnAwake();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__restoringCoroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__restoringCoroutine();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__maxPitchMultiplier(float_t value);

  constexpr void __cordl_internal_set__minPitchMultiplier(float_t value);

  constexpr void __cordl_internal_set__originalPitch(float_t value);

  constexpr void __cordl_internal_set__playOnAwake(bool value);

  constexpr void __cordl_internal_set__restoringCoroutine(::UnityEngine::Coroutine* value);

  /// @brief Method .ctor, addr 0x39be424, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomizedPitch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomizedPitch(RandomizedPitch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomizedPitch(RandomizedPitch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16392 };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _minPitchMultiplier, offset: 0x28, size: 0x4, def value: None
  float_t ____minPitchMultiplier;

  /// @brief Field _maxPitchMultiplier, offset: 0x2c, size: 0x4, def value: None
  float_t ____maxPitchMultiplier;

  /// @brief Field _playOnAwake, offset: 0x30, size: 0x1, def value: None
  bool ____playOnAwake;

  /// @brief Field _originalPitch, offset: 0x34, size: 0x4, def value: None
  float_t ____originalPitch;

  /// @brief Field _restoringCoroutine, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ____restoringCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomizedPitch, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch, ____minPitchMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch, ____maxPitchMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch, ____playOnAwake) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch, ____originalPitch) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizedPitch, ____restoringCoroutine) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomizedPitch, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomizedPitch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomizedPitch*, "", "RandomizedPitch");
NEED_NO_BOX(::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomizedPitch__PlayDelayedCoroutine_d__9*, "", "RandomizedPitch/<PlayDelayedCoroutine>d__9");
NEED_NO_BOX(::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomizedPitch__RestorePitchWithDelay_d__10*, "", "RandomizedPitch/<RestorePitchWithDelay>d__10");
