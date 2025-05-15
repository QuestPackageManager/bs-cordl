#pragma once
// IWYU pragma private; include "GlobalNamespace/CoroutineHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CoroutineHelpers)
namespace GlobalNamespace {
class CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0;
}
namespace GlobalNamespace {
class CoroutineHelpers__ExecuteAfterFrameEnd_d__1;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class CoroutineHelpers;
}
namespace GlobalNamespace {
class CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0;
}
namespace GlobalNamespace {
class CoroutineHelpers__ExecuteAfterFrameEnd_d__1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoroutineHelpers);
MARK_REF_PTR_T(::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0);
MARK_REF_PTR_T(::GlobalNamespace::CoroutineHelpers__ExecuteAfterFrameEnd_d__1);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoroutineHelpers/<ExecuteAfterDelayCoroutine>d__0
class CORDL_TYPE CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field action, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action* action;

  /// @brief Field timeSeconds, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_timeSeconds, put = __cordl_internal_set_timeSeconds)) float_t timeSeconds;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22b3988, size 0xb0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22b3a38, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22b3a40, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22b3a78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22b3984, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::System::Action* const& __cordl_internal_get_action() const;

  constexpr ::System::Action*& __cordl_internal_get_action();

  constexpr float_t const& __cordl_internal_get_timeSeconds() const;

  constexpr float_t& __cordl_internal_get_timeSeconds();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set_action(::System::Action* value);

  constexpr void __cordl_internal_set_timeSeconds(float_t value);

  /// @brief Method .ctor, addr 0x22b3758, size 0x28, virtual false, abstract: false, final false
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
  constexpr CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0(CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0(CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17127 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field timeSeconds, offset: 0x20, size: 0x4, def value: None
  float_t ___timeSeconds;

  /// @brief Field action, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0, ___timeSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0, ___action) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoroutineHelpers/<ExecuteAfterFrameEnd>d__1
class CORDL_TYPE CoroutineHelpers__ExecuteAfterFrameEnd_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field action, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action* action;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22b3a84, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::CoroutineHelpers__ExecuteAfterFrameEnd_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22b3b24, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22b3b2c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22b3b64, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22b3a80, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::System::Action* const& __cordl_internal_get_action() const;

  constexpr ::System::Action*& __cordl_internal_get_action();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set_action(::System::Action* value);

  /// @brief Method .ctor, addr 0x22b37e0, size 0x28, virtual false, abstract: false, final false
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
  constexpr CoroutineHelpers__ExecuteAfterFrameEnd_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers__ExecuteAfterFrameEnd_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoroutineHelpers__ExecuteAfterFrameEnd_d__1(CoroutineHelpers__ExecuteAfterFrameEnd_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers__ExecuteAfterFrameEnd_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoroutineHelpers__ExecuteAfterFrameEnd_d__1(CoroutineHelpers__ExecuteAfterFrameEnd_d__1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17128 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field action, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CoroutineHelpers__ExecuteAfterFrameEnd_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoroutineHelpers__ExecuteAfterFrameEnd_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CoroutineHelpers__ExecuteAfterFrameEnd_d__1, ___action) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoroutineHelpers__ExecuteAfterFrameEnd_d__1, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CoroutineHelpers
class CORDL_TYPE CoroutineHelpers : public ::System::Object {
public:
  // Declarations
  using _ExecuteAfterDelayCoroutine_d__0 = ::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0;

  using _ExecuteAfterFrameEnd_d__1 = ::GlobalNamespace::CoroutineHelpers__ExecuteAfterFrameEnd_d__1;

  /// @brief Method ExecuteAfterDelayCoroutine, addr 0x22b36e8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* ExecuteAfterDelayCoroutine(::System::Action* action, float_t timeSeconds);

  /// @brief Method ExecuteAfterFrameEnd, addr 0x22b3780, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* ExecuteAfterFrameEnd(::System::Action* action);

  /// @brief Method StartSingleCoroutine, addr 0x22b3808, size 0xc4, virtual false, abstract: false, final false
  static inline void StartSingleCoroutine(::GlobalNamespace::ICoroutineStarter* coroutineStarter, ::ByRef<::UnityEngine::Coroutine*> handle, ::System::Collections::IEnumerator* routine);

  /// @brief Method StopSingleCoroutine, addr 0x22b38cc, size 0xb8, virtual false, abstract: false, final false
  static inline void StopSingleCoroutine(::GlobalNamespace::ICoroutineStarter* coroutineStarter, ::ByRef<::UnityEngine::Coroutine*> handle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoroutineHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoroutineHelpers(CoroutineHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoroutineHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoroutineHelpers(CoroutineHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17129 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoroutineHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoroutineHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineHelpers*, "", "CoroutineHelpers");
NEED_NO_BOX(::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineHelpers__ExecuteAfterDelayCoroutine_d__0*, "", "CoroutineHelpers/<ExecuteAfterDelayCoroutine>d__0");
NEED_NO_BOX(::GlobalNamespace::CoroutineHelpers__ExecuteAfterFrameEnd_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineHelpers__ExecuteAfterFrameEnd_d__1*, "", "CoroutineHelpers/<ExecuteAfterFrameEnd>d__1");
