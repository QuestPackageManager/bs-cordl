#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityAsyncHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAsyncHelper)
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
struct UnityAsyncHelper__InvokeSafe_d__0;
}
namespace GlobalNamespace {
template <typename A> struct UnityAsyncHelper__InvokeSafe_d__1_1;
}
namespace GlobalNamespace {
template <typename A, typename B> struct UnityAsyncHelper__InvokeSafe_d__2_2;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C> struct UnityAsyncHelper__InvokeSafe_d__3_3;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C, typename D> struct UnityAsyncHelper__InvokeSafe_d__4_4;
}
namespace GlobalNamespace {
class UnityAsyncHelper___c__DisplayClass5_0;
}
namespace GlobalNamespace {
class UnityAsyncHelper___c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;
}
namespace GlobalNamespace {
class __c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename TResult> class Func_5;
}
namespace System {
class Object;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityAsyncHelper;
}
namespace GlobalNamespace {
class UnityAsyncHelper___c__DisplayClass5_0;
}
namespace GlobalNamespace {
class UnityAsyncHelper___c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;
}
namespace GlobalNamespace {
class __c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;
}
namespace GlobalNamespace {
struct UnityAsyncHelper__InvokeSafe_d__0;
}
namespace GlobalNamespace {
template <typename A> struct UnityAsyncHelper__InvokeSafe_d__1_1;
}
namespace GlobalNamespace {
template <typename A, typename B> struct UnityAsyncHelper__InvokeSafe_d__2_2;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C> struct UnityAsyncHelper__InvokeSafe_d__3_3;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C, typename D> struct UnityAsyncHelper__InvokeSafe_d__4_4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityAsyncHelper);
MARK_REF_PTR_T(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0);
MARK_REF_PTR_T(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0);
MARK_REF_PTR_T(::GlobalNamespace::__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d);
MARK_REF_PTR_T(::GlobalNamespace::__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d);
MARK_VAL_T(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__0);
MARK_GEN_VAL_T(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__1_1);
MARK_GEN_VAL_T(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__2_2);
MARK_GEN_VAL_T(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__3_3);
MARK_GEN_VAL_T(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__4_4);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityAsyncHelper/<>c__DisplayClass5_0/<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d
class CORDL_TYPE __c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0* __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22b3828, size 0xc8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22b38f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22b38f8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22b3930, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22b3824, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0*& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0* value);

  /// @brief Method .ctor, addr 0x22b37fc, size 0x28, virtual false, abstract: false, final false
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
  constexpr __c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d(__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d(__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17130 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityAsyncHelper/<>c__DisplayClass5_0
class CORDL_TYPE UnityAsyncHelper___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  using __WaitUntilAsync_g__WaitUntilPredicateTrue_0_d = ::GlobalNamespace::__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;

  /// @brief Field predicate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_1<bool>* predicate;

  /// @brief Field tcs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* tcs;

  static inline ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0* New_ctor();

  /// @brief Method <WaitUntilAsync>g__WaitUntilPredicateTrue|0, addr 0x22b35f0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* _WaitUntilAsync_g__WaitUntilPredicateTrue_0();

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_predicate();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set_predicate(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x22b35e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAsyncHelper___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityAsyncHelper___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityAsyncHelper___c__DisplayClass5_0(UnityAsyncHelper___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityAsyncHelper___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityAsyncHelper___c__DisplayClass5_0(UnityAsyncHelper___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17131 };

  /// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<bool>* ___predicate;

  /// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0, ___predicate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityAsyncHelper/<>c__DisplayClass6_0/<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d
class CORDL_TYPE __c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0* __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22b3964, size 0xc8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22b3a2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22b3a34, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22b3a6c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22b3960, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0*& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0* value);

  /// @brief Method .ctor, addr 0x22b3938, size 0x28, virtual false, abstract: false, final false
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
  constexpr __c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d(__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d(__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17132 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityAsyncHelper/<>c__DisplayClass6_0
class CORDL_TYPE UnityAsyncHelper___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  using __WaitUntilAsync_g__WaitUntilPredicateTrue_0_d = ::GlobalNamespace::__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;

  /// @brief Field predicate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_1<bool>* predicate;

  /// @brief Field tcs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs, put = __cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* tcs;

  static inline ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0* New_ctor();

  /// @brief Method <WaitUntilAsync>g__WaitUntilPredicateTrue|0, addr 0x22b379c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* _WaitUntilAsync_g__WaitUntilPredicateTrue_0();

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_predicate();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& __cordl_internal_get_tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& __cordl_internal_get_tcs();

  constexpr void __cordl_internal_set_predicate(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x22b3794, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAsyncHelper___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityAsyncHelper___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityAsyncHelper___c__DisplayClass6_0(UnityAsyncHelper___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityAsyncHelper___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityAsyncHelper___c__DisplayClass6_0(UnityAsyncHelper___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17133 };

  /// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<bool>* ___predicate;

  /// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0, ___predicate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityAsyncHelper/<InvokeSafe>d__0
struct CORDL_TYPE UnityAsyncHelper__InvokeSafe_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22b3a74, size 0x234, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22b3ca8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAsyncHelper__InvokeSafe_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "asyncTask", ty: "::System::Func_1<::System::Threading::Tasks::Task*>*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr UnityAsyncHelper__InvokeSafe_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                              ::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17134 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field asyncTask, offset: 0x28, size: 0x8, def value: None
  ::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__0, asyncTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__0, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__0, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// cpp template
template <typename A>
// Is value type: true
// CS Name: UnityAsyncHelper/<InvokeSafe>d__1`1<A>
struct CORDL_TYPE UnityAsyncHelper__InvokeSafe_d__1_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAsyncHelper__InvokeSafe_d__1_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "asyncTask", ty: "::System::Func_2<A,::System::Threading::Tasks::Task*>*",
  // modifiers: "", def_value: None }, CppParam { name: "firstParameter", ty: "A", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr UnityAsyncHelper__InvokeSafe_d__1_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                ::System::Func_2<A, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17135 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field asyncTask, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<A, ::System::Threading::Tasks::Task*>* asyncTask;

  /// @brief Field firstParameter, offset: 0x30, size: 0x8, def value: None
  A firstParameter;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// cpp template
template <typename A, typename B>
// Is value type: true
// CS Name: UnityAsyncHelper/<InvokeSafe>d__2`2<A,B>
struct CORDL_TYPE UnityAsyncHelper__InvokeSafe_d__2_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAsyncHelper__InvokeSafe_d__2_2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "asyncTask", ty: "::System::Func_3<A,B,::System::Threading::Tasks::Task*>*",
  // modifiers: "", def_value: None }, CppParam { name: "firstParameter", ty: "A", modifiers: "", def_value: None }, CppParam { name: "secondParameter", ty: "B", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr UnityAsyncHelper__InvokeSafe_d__2_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                ::System::Func_3<A, B, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, B secondParameter,
                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17136 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field asyncTask, offset: 0x28, size: 0x8, def value: None
  ::System::Func_3<A, B, ::System::Threading::Tasks::Task*>* asyncTask;

  /// @brief Field firstParameter, offset: 0x30, size: 0x8, def value: None
  A firstParameter;

  /// @brief Field secondParameter, offset: 0x38, size: 0x8, def value: None
  B secondParameter;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// cpp template
template <typename A, typename B, typename C>
// Is value type: true
// CS Name: UnityAsyncHelper/<InvokeSafe>d__3`3<A,B,C>
struct CORDL_TYPE UnityAsyncHelper__InvokeSafe_d__3_3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAsyncHelper__InvokeSafe_d__3_3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "asyncTask", ty: "::System::Func_4<A,B,C,::System::Threading::Tasks::Task*>*",
  // modifiers: "", def_value: None }, CppParam { name: "firstParameter", ty: "A", modifiers: "", def_value: None }, CppParam { name: "secondParameter", ty: "B", modifiers: "", def_value: None },
  // CppParam { name: "thirdParameter", ty: "C", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr UnityAsyncHelper__InvokeSafe_d__3_3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                ::System::Func_4<A, B, C, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, B secondParameter, C thirdParameter,
                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17137 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field asyncTask, offset: 0x28, size: 0x8, def value: None
  ::System::Func_4<A, B, C, ::System::Threading::Tasks::Task*>* asyncTask;

  /// @brief Field firstParameter, offset: 0x30, size: 0x8, def value: None
  A firstParameter;

  /// @brief Field secondParameter, offset: 0x38, size: 0x8, def value: None
  B secondParameter;

  /// @brief Field thirdParameter, offset: 0x40, size: 0x8, def value: None
  C thirdParameter;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// cpp template
template <typename A, typename B, typename C, typename D>
// Is value type: true
// CS Name: UnityAsyncHelper/<InvokeSafe>d__4`4<A,B,C,D>
struct CORDL_TYPE UnityAsyncHelper__InvokeSafe_d__4_4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAsyncHelper__InvokeSafe_d__4_4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "asyncTask", ty: "::System::Func_5<A,B,C,D,::System::Threading::Tasks::Task*>*",
  // modifiers: "", def_value: None }, CppParam { name: "firstParameter", ty: "A", modifiers: "", def_value: None }, CppParam { name: "secondParameter", ty: "B", modifiers: "", def_value: None },
  // CppParam { name: "thirdParameter", ty: "C", modifiers: "", def_value: None }, CppParam { name: "fourthParameter", ty: "D", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr UnityAsyncHelper__InvokeSafe_d__4_4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                ::System::Func_5<A, B, C, D, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, B secondParameter, C thirdParameter, D fourthParameter,
                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17138 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field asyncTask, offset: 0x28, size: 0x8, def value: None
  ::System::Func_5<A, B, C, D, ::System::Threading::Tasks::Task*>* asyncTask;

  /// @brief Field firstParameter, offset: 0x30, size: 0x8, def value: None
  A firstParameter;

  /// @brief Field secondParameter, offset: 0x38, size: 0x8, def value: None
  B secondParameter;

  /// @brief Field thirdParameter, offset: 0x40, size: 0x8, def value: None
  C thirdParameter;

  /// @brief Field fourthParameter, offset: 0x48, size: 0x8, def value: None
  D fourthParameter;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityAsyncHelper
class CORDL_TYPE UnityAsyncHelper : public ::System::Object {
public:
  // Declarations
  using _InvokeSafe_d__0 = ::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__0;

  template <typename A> using _InvokeSafe_d__1_1 = ::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__1_1<A>;

  template <typename A, typename B> using _InvokeSafe_d__2_2 = ::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__2_2<A, B>;

  template <typename A, typename B, typename C> using _InvokeSafe_d__3_3 = ::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__3_3<A, B, C>;

  template <typename A, typename B, typename C, typename D> using _InvokeSafe_d__4_4 = ::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__4_4<A, B, C, D>;

  using __c__DisplayClass5_0 = ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0;

  using __c__DisplayClass6_0 = ::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0;

  /// @brief Method InvokeSafe, addr 0x22b3478, size 0x90, virtual false, abstract: false, final false
  static inline void InvokeSafe(::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask);

  /// @brief Method InvokeSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename A> static inline void InvokeSafe(::System::Func_2<A, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter);

  /// @brief Method InvokeSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename A, typename B> static inline void InvokeSafe(::System::Func_3<A, B, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, B secondParameter);

  /// @brief Method InvokeSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename A, typename B, typename C>
  static inline void InvokeSafe(::System::Func_4<A, B, C, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, B secondParameter, C thirdParameter);

  /// @brief Method InvokeSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename A, typename B, typename C, typename D>
  static inline void InvokeSafe(::System::Func_5<A, B, C, D, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, B secondParameter, C thirdParameter, D fourthParameter);

  /// @brief Method WaitUntilAsync, addr 0x22b3650, size 0x144, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WaitUntilAsync(::GlobalNamespace::ICoroutineStarter* coroutineStarter, ::System::Func_1<bool>* predicate);

  /// @brief Method WaitUntilAsync, addr 0x22b3508, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WaitUntilAsync(::UnityEngine::MonoBehaviour* coroutineStarter, ::System::Func_1<bool>* predicate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAsyncHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityAsyncHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityAsyncHelper(UnityAsyncHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityAsyncHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityAsyncHelper(UnityAsyncHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17139 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityAsyncHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityAsyncHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityAsyncHelper*, "", "UnityAsyncHelper");
NEED_NO_BOX(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass5_0*, "", "UnityAsyncHelper/<>c__DisplayClass5_0");
NEED_NO_BOX(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityAsyncHelper___c__DisplayClass6_0*, "", "UnityAsyncHelper/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__c__DisplayClass5_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*, "",
                       "UnityAsyncHelper/<>c__DisplayClass5_0/<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d");
NEED_NO_BOX(::GlobalNamespace::__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__c__DisplayClass6_0_UnityAsyncHelper___WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*, "",
                       "UnityAsyncHelper/<>c__DisplayClass6_0/<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__0, "", "UnityAsyncHelper/<InvokeSafe>d__0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__1_1, "", "UnityAsyncHelper/<InvokeSafe>d__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__2_2, "", "UnityAsyncHelper/<InvokeSafe>d__2`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__3_3, "", "UnityAsyncHelper/<InvokeSafe>d__3`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::UnityAsyncHelper__InvokeSafe_d__4_4, "", "UnityAsyncHelper/<InvokeSafe>d__4`4");
