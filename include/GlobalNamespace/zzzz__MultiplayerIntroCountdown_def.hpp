#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerIntroCountdown)
namespace GlobalNamespace {
class MultiplayerIntroCountdownTextController;
}
namespace GlobalNamespace {
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___CountdownRoutine_d__23;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___PhaseRoutine_d__25;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___PlayDelayed_d__24;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown____c__DisplayClass25_0;
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
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerIntroCountdown;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___CountdownRoutine_d__23;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___PhaseRoutine_d__25;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___PlayDelayed_d__24;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown____c__DisplayClass25_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerIntroCountdown);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0);
// Type: ::<CountdownRoutine>d__23
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5209))
// CS Name: ::MultiplayerIntroCountdown::<CountdownRoutine>d__23*
class CORDL_TYPE __MultiplayerIntroCountdown___CountdownRoutine_d__23 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerIntroCountdown* __4__this;

  /// @brief Field delay, offset 0x28, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field seconds, offset 0x2c, size 0x4
  __declspec(property(get = __get_seconds, put = __set_seconds)) float_t seconds;

  /// @brief Field durationMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __get_durationMultiplier, put = __set_durationMultiplier)) float_t durationMultiplier;

  /// @brief Field <soundDelayAfterText>5__2, offset 0x34, size 0x4
  __declspec(property(get = __get__soundDelayAfterText_5__2, put = __set__soundDelayAfterText_5__2)) float_t _soundDelayAfterText_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::MultiplayerIntroCountdown*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdown*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerIntroCountdown* value);

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr float_t& __get_seconds();

  constexpr float_t const& __get_seconds() const;

  constexpr void __set_seconds(float_t value);

  constexpr float_t& __get_durationMultiplier();

  constexpr float_t const& __get_durationMultiplier() const;

  constexpr void __set_durationMultiplier(float_t value);

  constexpr float_t& __get__soundDelayAfterText_5__2();

  constexpr float_t const& __get__soundDelayAfterText_5__2() const;

  constexpr void __set__soundDelayAfterText_5__2(float_t value);

  static inline ::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x224edb8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x224efbc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x224efc0, size 0x320, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x224f2ec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x224f2f4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x224f334, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___CountdownRoutine_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerIntroCountdown___CountdownRoutine_d__23(__MultiplayerIntroCountdown___CountdownRoutine_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___CountdownRoutine_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerIntroCountdown___CountdownRoutine_d__23(__MultiplayerIntroCountdown___CountdownRoutine_d__23 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerIntroCountdown___CountdownRoutine_d__23();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerIntroCountdown* _____4__this;

  /// @brief Field delay, offset: 0x28, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field seconds, offset: 0x2c, size: 0x4, def value: None
  float_t ___seconds;

  /// @brief Field durationMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___durationMultiplier;

  /// @brief Field <soundDelayAfterText>5__2, offset: 0x34, size: 0x4, def value: None
  float_t ____soundDelayAfterText_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23, ___delay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23, ___seconds) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23, ___durationMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23, ____soundDelayAfterText_5__2) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<PlayDelayed>d__24
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5210))
// CS Name: ::MultiplayerIntroCountdown::<PlayDelayed>d__24*
class CORDL_TYPE __MultiplayerIntroCountdown___PlayDelayed_d__24 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerIntroCountdown* __4__this;

  /// @brief Field audioClip, offset 0x30, size 0x8
  __declspec(property(get = __get_audioClip, put = __set_audioClip))::UnityEngine::AudioClip* audioClip;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr ::GlobalNamespace::MultiplayerIntroCountdown*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdown*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerIntroCountdown* value);

  constexpr ::UnityEngine::AudioClip*& __get_audioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get_audioClip() const;

  constexpr void __set_audioClip(::UnityEngine::AudioClip* value);

  static inline ::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x224ee64, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x224f33c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x224f340, size 0xc4, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x224f404, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x224f40c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x224f44c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___PlayDelayed_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerIntroCountdown___PlayDelayed_d__24(__MultiplayerIntroCountdown___PlayDelayed_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___PlayDelayed_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerIntroCountdown___PlayDelayed_d__24(__MultiplayerIntroCountdown___PlayDelayed_d__24 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerIntroCountdown___PlayDelayed_d__24();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerIntroCountdown* _____4__this;

  /// @brief Field audioClip, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ___audioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24, ___audioClip) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5211))
// CS Name: ::MultiplayerIntroCountdown::<>c__DisplayClass25_0*
class CORDL_TYPE __MultiplayerIntroCountdown____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field textController, offset 0x10, size 0x8
  __declspec(property(get = __get_textController, put = __set_textController))::GlobalNamespace::MultiplayerIntroCountdownTextController* textController;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerIntroCountdown* __4__this;

  constexpr ::GlobalNamespace::MultiplayerIntroCountdownTextController*& __get_textController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdownTextController*> const& __get_textController() const;

  constexpr void __set_textController(::GlobalNamespace::MultiplayerIntroCountdownTextController* value);

  constexpr ::GlobalNamespace::MultiplayerIntroCountdown*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdown*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerIntroCountdown* value);

  static inline ::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0* New_ctor();

  /// @brief Method .ctor, addr 0x224f454, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <PhaseRoutine>b__0, addr 0x224f45c, size 0x18, virtual false, abstract: false, final false
  inline void _PhaseRoutine_b__0(float_t val);

  /// @brief Method <PhaseRoutine>b__1, addr 0x224f4e4, size 0x18, virtual false, abstract: false, final false
  inline void _PhaseRoutine_b__1(float_t val);

  /// @brief Method <PhaseRoutine>b__2, addr 0x224f580, size 0x50, virtual false, abstract: false, final false
  inline void _PhaseRoutine_b__2(::UnityEngine::Vector3 pos);

  /// @brief Method <PhaseRoutine>b__3, addr 0x224f5d0, size 0x28, virtual false, abstract: false, final false
  inline void _PhaseRoutine_b__3(float_t f);

  /// @brief Method <PhaseRoutine>b__4, addr 0x224f680, size 0x18, virtual false, abstract: false, final false
  inline void _PhaseRoutine_b__4(float_t val);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerIntroCountdown____c__DisplayClass25_0(__MultiplayerIntroCountdown____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerIntroCountdown____c__DisplayClass25_0(__MultiplayerIntroCountdown____c__DisplayClass25_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerIntroCountdown____c__DisplayClass25_0();

public:
  /// @brief Field textController, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerIntroCountdownTextController* ___textController;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerIntroCountdown* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0, ___textController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<PhaseRoutine>d__25
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5212))
// CS Name: ::MultiplayerIntroCountdown::<PhaseRoutine>d__25*
class CORDL_TYPE __MultiplayerIntroCountdown___PhaseRoutine_d__25 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MultiplayerIntroCountdown* __4__this;

  /// @brief Field text, offset 0x28, size 0x8
  __declspec(property(get = __get_text, put = __set_text))::StringW text;

  /// @brief Field appearDuration, offset 0x30, size 0x4
  __declspec(property(get = __get_appearDuration, put = __set_appearDuration)) float_t appearDuration;

  /// @brief Field disappearDuration, offset 0x34, size 0x4
  __declspec(property(get = __get_disappearDuration, put = __set_disappearDuration)) float_t disappearDuration;

  /// @brief Field <>8__1, offset 0x38, size 0x8
  __declspec(property(get = __get___8__1, put = __set___8__1))::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0* __8__1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::MultiplayerIntroCountdown*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdown*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MultiplayerIntroCountdown* value);

  constexpr ::StringW& __get_text();

  constexpr ::StringW const& __get_text() const;

  constexpr void __set_text(::StringW value);

  constexpr float_t& __get_appearDuration();

  constexpr float_t const& __get_appearDuration() const;

  constexpr void __set_appearDuration(float_t value);

  constexpr float_t& __get_disappearDuration();

  constexpr float_t const& __get_disappearDuration() const;

  constexpr void __set_disappearDuration(float_t value);

  constexpr ::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0*& __get___8__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0*> const& __get___8__1() const;

  constexpr void __set___8__1(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0* value);

  static inline ::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x224ef14, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x224f698, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x224f69c, size 0x578, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x224fc84, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x224fc8c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x224fccc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___PhaseRoutine_d__25", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerIntroCountdown___PhaseRoutine_d__25(__MultiplayerIntroCountdown___PhaseRoutine_d__25&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___PhaseRoutine_d__25", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerIntroCountdown___PhaseRoutine_d__25(__MultiplayerIntroCountdown___PhaseRoutine_d__25 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerIntroCountdown___PhaseRoutine_d__25();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerIntroCountdown* _____4__this;

  /// @brief Field text, offset: 0x28, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field appearDuration, offset: 0x30, size: 0x4, def value: None
  float_t ___appearDuration;

  /// @brief Field disappearDuration, offset: 0x34, size: 0x4, def value: None
  float_t ___disappearDuration;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0* _____8__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25, ___appearDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25, ___disappearDuration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25, _____8__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerIntroCountdown
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5213))
// CS Name: ::MultiplayerIntroCountdown*
class CORDL_TYPE MultiplayerIntroCountdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _PhaseRoutine_d__25 = ::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25;

  using __c__DisplayClass25_0 = ::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0;

  using _PlayDelayed_d__24 = ::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24;

  using _CountdownRoutine_d__23 = ::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23;

  /// @brief Field _textAppearDuration, offset 0x18, size 0x4
  __declspec(property(get = __get__textAppearDuration, put = __set__textAppearDuration)) float_t _textAppearDuration;

  /// @brief Field _textDisappearDuration, offset 0x1c, size 0x4
  __declspec(property(get = __get__textDisappearDuration, put = __set__textDisappearDuration)) float_t _textDisappearDuration;

  /// @brief Field _goDisappearDuration, offset 0x20, size 0x4
  __declspec(property(get = __get__goDisappearDuration, put = __set__goDisappearDuration)) float_t _goDisappearDuration;

  /// @brief Field _partsDistance, offset 0x24, size 0x4
  __declspec(property(get = __get__partsDistance, put = __set__partsDistance)) float_t _partsDistance;

  /// @brief Field _startLocalPosition, offset 0x28, size 0xc
  __declspec(property(get = __get__startLocalPosition, put = __set__startLocalPosition))::UnityEngine::Vector3 _startLocalPosition;

  /// @brief Field _targetLocalPosition, offset 0x34, size 0xc
  __declspec(property(get = __get__targetLocalPosition, put = __set__targetLocalPosition))::UnityEngine::Vector3 _targetLocalPosition;

  /// @brief Field _readyClip, offset 0x40, size 0x8
  __declspec(property(get = __get__readyClip, put = __set__readyClip))::UnityEngine::AudioClip* _readyClip;

  /// @brief Field _setClip, offset 0x48, size 0x8
  __declspec(property(get = __get__setClip, put = __set__setClip))::UnityEngine::AudioClip* _setClip;

  /// @brief Field _goClip, offset 0x50, size 0x8
  __declspec(property(get = __get__goClip, put = __set__goClip))::UnityEngine::AudioClip* _goClip;

  /// @brief Field _buildUpClip, offset 0x58, size 0x8
  __declspec(property(get = __get__buildUpClip, put = __set__buildUpClip))::UnityEngine::AudioClip* _buildUpClip;

  /// @brief Field _textController0, offset 0x60, size 0x8
  __declspec(property(get = __get__textController0, put = __set__textController0))::GlobalNamespace::MultiplayerIntroCountdownTextController* _textController0;

  /// @brief Field _textController1, offset 0x68, size 0x8
  __declspec(property(get = __get__textController1, put = __set__textController1))::GlobalNamespace::MultiplayerIntroCountdownTextController* _textController1;

  /// @brief Field _audioSource, offset 0x70, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _multiplayerOffsetByLocalPlayerPosition, offset 0x78, size 0x8
  __declspec(property(get = __get__multiplayerOffsetByLocalPlayerPosition,
                      put = __set__multiplayerOffsetByLocalPlayerPosition))::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* _multiplayerOffsetByLocalPlayerPosition;

  /// @brief Field _tweeningManager, offset 0x80, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _currentTextController, offset 0x88, size 0x8
  __declspec(property(get = __get__currentTextController, put = __set__currentTextController))::GlobalNamespace::MultiplayerIntroCountdownTextController* _currentTextController;

  /// @brief Field _fontSize, offset 0x90, size 0x4
  __declspec(property(get = __get__fontSize, put = __set__fontSize)) float_t _fontSize;

  /// @brief Field _alpha, offset 0x94, size 0x4
  __declspec(property(get = __get__alpha, put = __set__alpha)) float_t _alpha;

  __declspec(property(get = get_textAppearDuration)) float_t textAppearDuration;

  constexpr float_t& __get__textAppearDuration();

  constexpr float_t const& __get__textAppearDuration() const;

  constexpr void __set__textAppearDuration(float_t value);

  constexpr float_t& __get__textDisappearDuration();

  constexpr float_t const& __get__textDisappearDuration() const;

  constexpr void __set__textDisappearDuration(float_t value);

  constexpr float_t& __get__goDisappearDuration();

  constexpr float_t const& __get__goDisappearDuration() const;

  constexpr void __set__goDisappearDuration(float_t value);

  constexpr float_t& __get__partsDistance();

  constexpr float_t const& __get__partsDistance() const;

  constexpr void __set__partsDistance(float_t value);

  constexpr ::UnityEngine::Vector3& __get__startLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get__startLocalPosition() const;

  constexpr void __set__startLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__targetLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get__targetLocalPosition() const;

  constexpr void __set__targetLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::AudioClip*& __get__readyClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__readyClip() const;

  constexpr void __set__readyClip(::UnityEngine::AudioClip* value);

  constexpr ::UnityEngine::AudioClip*& __get__setClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__setClip() const;

  constexpr void __set__setClip(::UnityEngine::AudioClip* value);

  constexpr ::UnityEngine::AudioClip*& __get__goClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__goClip() const;

  constexpr void __set__goClip(::UnityEngine::AudioClip* value);

  constexpr ::UnityEngine::AudioClip*& __get__buildUpClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__buildUpClip() const;

  constexpr void __set__buildUpClip(::UnityEngine::AudioClip* value);

  constexpr ::GlobalNamespace::MultiplayerIntroCountdownTextController*& __get__textController0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdownTextController*> const& __get__textController0() const;

  constexpr void __set__textController0(::GlobalNamespace::MultiplayerIntroCountdownTextController* value);

  constexpr ::GlobalNamespace::MultiplayerIntroCountdownTextController*& __get__textController1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdownTextController*> const& __get__textController1() const;

  constexpr void __set__textController1(::GlobalNamespace::MultiplayerIntroCountdownTextController* value);

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*& __get__multiplayerOffsetByLocalPlayerPosition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*> const& __get__multiplayerOffsetByLocalPlayerPosition() const;

  constexpr void __set__multiplayerOffsetByLocalPlayerPosition(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::GlobalNamespace::MultiplayerIntroCountdownTextController*& __get__currentTextController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdownTextController*> const& __get__currentTextController() const;

  constexpr void __set__currentTextController(::GlobalNamespace::MultiplayerIntroCountdownTextController* value);

  constexpr float_t& __get__fontSize();

  constexpr float_t const& __get__fontSize() const;

  constexpr void __set__fontSize(float_t value);

  constexpr float_t& __get__alpha();

  constexpr float_t const& __get__alpha() const;

  constexpr void __set__alpha(float_t value);

  /// @brief Method get_textAppearDuration, addr 0x224eb34, size 0x8, virtual false, abstract: false, final false
  inline float_t get_textAppearDuration();

  /// @brief Method Awake, addr 0x224eb3c, size 0x54, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x224ec34, size 0x88, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method StartCountdown, addr 0x224ecbc, size 0x70, virtual false, abstract: false, final false
  inline void StartCountdown(float_t seconds, float_t delay, float_t durationMultiplier);

  /// @brief Method CountdownRoutine, addr 0x224ed2c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CountdownRoutine(float_t seconds, float_t delay, float_t durationMultiplier);

  /// @brief Method PlayDelayed, addr 0x224ede0, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PlayDelayed(::UnityEngine::AudioClip* audioClip, float_t delay);

  /// @brief Method PhaseRoutine, addr 0x224ee8c, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PhaseRoutine(::StringW text, float_t appearDuration, float_t disappearDuration);

  static inline ::GlobalNamespace::MultiplayerIntroCountdown* New_ctor();

  /// @brief Method .ctor, addr 0x224ef3c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerIntroCountdown(MultiplayerIntroCountdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerIntroCountdown(MultiplayerIntroCountdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerIntroCountdown();

public:
  /// @brief Field _textAppearDuration, offset: 0x18, size: 0x4, def value: None
  float_t ____textAppearDuration;

  /// @brief Field _textDisappearDuration, offset: 0x1c, size: 0x4, def value: None
  float_t ____textDisappearDuration;

  /// @brief Field _goDisappearDuration, offset: 0x20, size: 0x4, def value: None
  float_t ____goDisappearDuration;

  /// @brief Field _partsDistance, offset: 0x24, size: 0x4, def value: None
  float_t ____partsDistance;

  /// @brief Field _startLocalPosition, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startLocalPosition;

  /// @brief Field _targetLocalPosition, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetLocalPosition;

  /// @brief Field _readyClip, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____readyClip;

  /// @brief Field _setClip, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____setClip;

  /// @brief Field _goClip, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____goClip;

  /// @brief Field _buildUpClip, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____buildUpClip;

  /// @brief Field _textController0, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerIntroCountdownTextController* ____textController0;

  /// @brief Field _textController1, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerIntroCountdownTextController* ____textController1;

  /// @brief Field _audioSource, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field _multiplayerOffsetByLocalPlayerPosition, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* ____multiplayerOffsetByLocalPlayerPosition;

  /// @brief Field _tweeningManager, offset: 0x80, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

  /// @brief Field _currentTextController, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerIntroCountdownTextController* ____currentTextController;

  /// @brief Field _fontSize, offset: 0x90, size: 0x4, def value: None
  float_t ____fontSize;

  /// @brief Field _alpha, offset: 0x94, size: 0x4, def value: None
  float_t ____alpha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerIntroCountdown, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____textAppearDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____textDisappearDuration) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____goDisappearDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____partsDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____startLocalPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____targetLocalPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____readyClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____setClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____goClip) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____buildUpClip) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____textController0) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____textController1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____audioSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____multiplayerOffsetByLocalPlayerPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____tweeningManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____currentTextController) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____fontSize) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdown, ____alpha) == 0x94, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerIntroCountdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerIntroCountdown*, "", "MultiplayerIntroCountdown");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23*, "", "MultiplayerIntroCountdown/<CountdownRoutine>d__23");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25*, "", "MultiplayerIntroCountdown/<PhaseRoutine>d__25");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24*, "", "MultiplayerIntroCountdown/<PlayDelayed>d__24");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0*, "", "MultiplayerIntroCountdown/<>c__DisplayClass25_0");
