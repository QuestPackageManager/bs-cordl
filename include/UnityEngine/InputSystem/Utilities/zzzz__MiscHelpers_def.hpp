#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/MiscHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MiscHelpers)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
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
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __MiscHelpers___EveryNth_d__1_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class MiscHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __MiscHelpers___EveryNth_d__1_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::MiscHelpers);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1);
// Type: ::<EveryNth>d__1`1
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::MiscHelpers::<EveryNth>d__1`1<TValue>*
class CORDL_TYPE __MiscHelpers___EveryNth_d__1_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TValue__get_Current)) TValue System_Collections_Generic_IEnumerator_TValue__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TValue __2__current;

  /// @brief Field <>3__enumerable, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__enumerable, put = __cordl_internal_set___3__enumerable))::System::Collections::Generic::IEnumerable_1<TValue>* __3__enumerable;

  /// @brief Field <>3__n, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get___3__n, put = __cordl_internal_set___3__n)) int32_t __3__n;

  /// @brief Field <>3__start, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__start, put = __cordl_internal_set___3__start)) int32_t __3__start;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2))::System::Collections::Generic::IEnumerator_1<TValue>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <index>5__2, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__index_5__2, put = __cordl_internal_set__index_5__2)) int32_t _index_5__2;

  /// @brief Field enumerable, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerable, put = __cordl_internal_set_enumerable))::System::Collections::Generic::IEnumerable_1<TValue>* enumerable;

  /// @brief Field n, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n)) int32_t n;

  /// @brief Field start, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) int32_t start;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TValue>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue System_Collections_Generic_IEnumerator_TValue__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr TValue const& __cordl_internal_get___2__current() const;

  constexpr TValue& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*& __cordl_internal_get___3__enumerable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TValue>*> const& __cordl_internal_get___3__enumerable() const;

  constexpr int32_t const& __cordl_internal_get___3__n() const;

  constexpr int32_t& __cordl_internal_get___3__n();

  constexpr int32_t const& __cordl_internal_get___3__start() const;

  constexpr int32_t& __cordl_internal_get___3__start();

  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TValue>*> const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__index_5__2() const;

  constexpr int32_t& __cordl_internal_get__index_5__2();

  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*& __cordl_internal_get_enumerable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TValue>*> const& __cordl_internal_get_enumerable() const;

  constexpr int32_t const& __cordl_internal_get_n() const;

  constexpr int32_t& __cordl_internal_get_n();

  constexpr int32_t const& __cordl_internal_get_start() const;

  constexpr int32_t& __cordl_internal_get_start();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TValue value);

  constexpr void __cordl_internal_set___3__enumerable(::System::Collections::Generic::IEnumerable_1<TValue>* value);

  constexpr void __cordl_internal_set___3__n(int32_t value);

  constexpr void __cordl_internal_set___3__start(int32_t value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TValue>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__index_5__2(int32_t value);

  constexpr void __cordl_internal_set_enumerable(::System::Collections::Generic::IEnumerable_1<TValue>* value);

  constexpr void __cordl_internal_set_n(int32_t value);

  constexpr void __cordl_internal_set_start(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MiscHelpers___EveryNth_d__1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MiscHelpers___EveryNth_d__1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MiscHelpers___EveryNth_d__1_1(__MiscHelpers___EveryNth_d__1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MiscHelpers___EveryNth_d__1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MiscHelpers___EveryNth_d__1_1(__MiscHelpers___EveryNth_d__1_1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TValue _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field enumerable, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TValue>* ___enumerable;

  /// @brief Field <>3__enumerable, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TValue>* _____3__enumerable;

  /// @brief Field start, offset: 0x38, size: 0x4, def value: None
  int32_t ___start;

  /// @brief Field <>3__start, offset: 0x3c, size: 0x4, def value: None
  int32_t _____3__start;

  /// @brief Field n, offset: 0x40, size: 0x4, def value: None
  int32_t ___n;

  /// @brief Field <>3__n, offset: 0x44, size: 0x4, def value: None
  int32_t _____3__n;

  /// @brief Field <index>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t ____index_5__2;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TValue>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::MiscHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::MiscHelpers*
class CORDL_TYPE MiscHelpers : public ::System::Object {
public:
  // Declarations
  template <typename TValue> using _EveryNth_d__1_1 = ::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>;

  /// @brief Method EveryNth, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::System::Collections::Generic::IEnumerable_1<TValue>* EveryNth(::System::Collections::Generic::IEnumerable_1<TValue>* enumerable, int32_t n, int32_t start);

  /// @brief Method GetValueOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline TValue GetValueOrDefault(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary, TKey key);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t IndexOf(::System::Collections::Generic::IEnumerable_1<TValue>* enumerable, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MiscHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MiscHelpers(MiscHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MiscHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MiscHelpers(MiscHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::MiscHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::MiscHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::MiscHelpers*, "UnityEngine.InputSystem.Utilities", "MiscHelpers");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1, "UnityEngine.InputSystem.Utilities", "MiscHelpers/<EveryNth>d__1`1");
