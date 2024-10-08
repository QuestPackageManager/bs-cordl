#pragma once
// IWYU pragma private; include "GlobalNamespace/ShuffleExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShuffleExtensions)
namespace GlobalNamespace {
template <typename T> class __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1;
}
namespace GlobalNamespace {
template <typename T> class __ShuffleExtensions___TakeWithTombstone_d__2_1;
}
namespace GlobalNamespace {
class __ShuffleExtensions___ZipSkipTombstone_d__3;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
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
namespace System {
class Random;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ShuffleExtensions;
}
namespace GlobalNamespace {
template <typename T> class __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1;
}
namespace GlobalNamespace {
template <typename T> class __ShuffleExtensions___TakeWithTombstone_d__2_1;
}
namespace GlobalNamespace {
class __ShuffleExtensions___ZipSkipTombstone_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShuffleExtensions);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1);
MARK_REF_PTR_T(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3);
// Type: ::<PickRandomElementsWithTombstone>d__1`1
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ShuffleExtensions::<PickRandomElementsWithTombstone>d__1`1<T>*
class CORDL_TYPE __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>3__count, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__count, put = __cordl_internal_set___3__count)) int32_t __3__count;

  /// @brief Field <>3__limit, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get___3__limit, put = __cordl_internal_set___3__limit)) int32_t __3__limit;

  /// @brief Field <>3__random, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___3__random, put = __cordl_internal_set___3__random)) ::System::Random* __3__random;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<T>* __3__source;

  /// @brief Field <>3__tombstone, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get___3__tombstone, put = __cordl_internal_set___3__tombstone)) T __3__tombstone;

  /// @brief Field <>7__wrap3, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) ::System::Collections::Generic::IEnumerator_1<T>* __7__wrap3;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <index>5__2, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__index_5__2, put = __cordl_internal_set__index_5__2)) int32_t _index_5__2;

  /// @brief Field <picked>5__3, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__picked_5__3, put = __cordl_internal_set__picked_5__3)) int32_t _picked_5__3;

  /// @brief Field count, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field limit, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_limit, put = __cordl_internal_set_limit)) int32_t limit;

  /// @brief Field random, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::System::Random* random;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<T>* source;

  /// @brief Field tombstone, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_tombstone, put = __cordl_internal_set_tombstone)) T tombstone;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

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

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___3__count() const;

  constexpr int32_t& __cordl_internal_get___3__count();

  constexpr int32_t const& __cordl_internal_get___3__limit() const;

  constexpr int32_t& __cordl_internal_get___3__limit();

  constexpr ::System::Random*& __cordl_internal_get___3__random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __cordl_internal_get___3__random() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get___3__source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __cordl_internal_get___3__source() const;

  constexpr T const& __cordl_internal_get___3__tombstone() const;

  constexpr T& __cordl_internal_get___3__tombstone();

  constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __cordl_internal_get___7__wrap3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const& __cordl_internal_get___7__wrap3() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__index_5__2() const;

  constexpr int32_t& __cordl_internal_get__index_5__2();

  constexpr int32_t const& __cordl_internal_get__picked_5__3() const;

  constexpr int32_t& __cordl_internal_get__picked_5__3();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_limit() const;

  constexpr int32_t& __cordl_internal_get_limit();

  constexpr ::System::Random*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __cordl_internal_get_random() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get_source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __cordl_internal_get_source() const;

  constexpr T const& __cordl_internal_get_tombstone() const;

  constexpr T& __cordl_internal_get_tombstone();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___3__count(int32_t value);

  constexpr void __cordl_internal_set___3__limit(int32_t value);

  constexpr void __cordl_internal_set___3__random(::System::Random* value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr void __cordl_internal_set___3__tombstone(T value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::IEnumerator_1<T>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__index_5__2(int32_t value);

  constexpr void __cordl_internal_set__picked_5__3(int32_t value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_limit(int32_t value);

  constexpr void __cordl_internal_set_random(::System::Random* value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr void __cordl_internal_set_tombstone(T value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _____3__source;

  /// @brief Field count, offset: 0x38, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field <>3__count, offset: 0x3c, size: 0x4, def value: None
  int32_t _____3__count;

  /// @brief Field random, offset: 0x40, size: 0x8, def value: None
  ::System::Random* ___random;

  /// @brief Field <>3__random, offset: 0x48, size: 0x8, def value: None
  ::System::Random* _____3__random;

  /// @brief Field limit, offset: 0x50, size: 0x4, def value: None
  int32_t ___limit;

  /// @brief Field <>3__limit, offset: 0x54, size: 0x4, def value: None
  int32_t _____3__limit;

  /// @brief Field tombstone, offset: 0x58, size: 0x8, def value: None
  T ___tombstone;

  /// @brief Field <>3__tombstone, offset: 0x60, size: 0x8, def value: None
  T _____3__tombstone;

  /// @brief Field <index>5__2, offset: 0x68, size: 0x4, def value: None
  int32_t ____index_5__2;

  /// @brief Field <picked>5__3, offset: 0x6c, size: 0x4, def value: None
  int32_t ____picked_5__3;

  /// @brief Field <>7__wrap3, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T>* _____7__wrap3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<TakeWithTombstone>d__2`1
// SizeInfo { instance_size: 96, native_size: 92, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ShuffleExtensions::<TakeWithTombstone>d__2`1<T>*
class CORDL_TYPE __ShuffleExtensions___TakeWithTombstone_d__2_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>3__limit, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__limit, put = __cordl_internal_set___3__limit)) int32_t __3__limit;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<T>* __3__source;

  /// @brief Field <>3__tombstone, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___3__tombstone, put = __cordl_internal_set___3__tombstone)) T __3__tombstone;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <enumerator>5__2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__enumerator_5__2, put = __cordl_internal_set__enumerator_5__2)) ::System::Collections::Generic::IEnumerator_1<T>* _enumerator_5__2;

  /// @brief Field <index>5__3, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__index_5__3, put = __cordl_internal_set__index_5__3)) int32_t _index_5__3;

  /// @brief Field limit, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_limit, put = __cordl_internal_set_limit)) int32_t limit;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<T>* source;

  /// @brief Field tombstone, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_tombstone, put = __cordl_internal_set_tombstone)) T tombstone;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

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

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___3__limit() const;

  constexpr int32_t& __cordl_internal_get___3__limit();

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get___3__source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __cordl_internal_get___3__source() const;

  constexpr T const& __cordl_internal_get___3__tombstone() const;

  constexpr T& __cordl_internal_get___3__tombstone();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __cordl_internal_get__enumerator_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const& __cordl_internal_get__enumerator_5__2() const;

  constexpr int32_t const& __cordl_internal_get__index_5__3() const;

  constexpr int32_t& __cordl_internal_get__index_5__3();

  constexpr int32_t const& __cordl_internal_get_limit() const;

  constexpr int32_t& __cordl_internal_get_limit();

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get_source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __cordl_internal_get_source() const;

  constexpr T const& __cordl_internal_get_tombstone() const;

  constexpr T& __cordl_internal_get_tombstone();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___3__limit(int32_t value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr void __cordl_internal_set___3__tombstone(T value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<T>* value);

  constexpr void __cordl_internal_set__index_5__3(int32_t value);

  constexpr void __cordl_internal_set_limit(int32_t value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr void __cordl_internal_set_tombstone(T value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShuffleExtensions___TakeWithTombstone_d__2_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShuffleExtensions___TakeWithTombstone_d__2_1(__ShuffleExtensions___TakeWithTombstone_d__2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShuffleExtensions___TakeWithTombstone_d__2_1(__ShuffleExtensions___TakeWithTombstone_d__2_1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _____3__source;

  /// @brief Field limit, offset: 0x38, size: 0x4, def value: None
  int32_t ___limit;

  /// @brief Field <>3__limit, offset: 0x3c, size: 0x4, def value: None
  int32_t _____3__limit;

  /// @brief Field tombstone, offset: 0x40, size: 0x8, def value: None
  T ___tombstone;

  /// @brief Field <>3__tombstone, offset: 0x48, size: 0x8, def value: None
  T _____3__tombstone;

  /// @brief Field <enumerator>5__2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T>* ____enumerator_5__2;

  /// @brief Field <index>5__3, offset: 0x58, size: 0x4, def value: None
  int32_t ____index_5__3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<ZipSkipTombstone>d__3
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShuffleExtensions::<ZipSkipTombstone>d__3*
class CORDL_TYPE __ShuffleExtensions___ZipSkipTombstone_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator__System_Int32_System_Int32___get_Current)) ::System::ValueTuple_2<int32_t, int32_t>
      System_Collections_Generic_IEnumerator__System_Int32_System_Int32___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::ValueTuple_2<int32_t, int32_t> __2__current;

  /// @brief Field <>3__collection1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___3__collection1, put = __cordl_internal_set___3__collection1)) ::System::Collections::Generic::IEnumerable_1<int32_t>* __3__collection1;

  /// @brief Field <>3__collection2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___3__collection2, put = __cordl_internal_set___3__collection2)) ::System::Collections::Generic::IEnumerable_1<int32_t>* __3__collection2;

  /// @brief Field <>3__collection2Tombstone, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get___3__collection2Tombstone, put = __cordl_internal_set___3__collection2Tombstone)) int32_t __3__collection2Tombstone;

  /// @brief Field <>l__initialThreadId, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <enum1>5__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__enum1_5__2, put = __cordl_internal_set__enum1_5__2)) ::System::Collections::Generic::IEnumerator_1<int32_t>* _enum1_5__2;

  /// @brief Field <enum2>5__3, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__enum2_5__3, put = __cordl_internal_set__enum2_5__3)) ::System::Collections::Generic::IEnumerator_1<int32_t>* _enum2_5__3;

  /// @brief Field collection1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_collection1, put = __cordl_internal_set_collection1)) ::System::Collections::Generic::IEnumerable_1<int32_t>* collection1;

  /// @brief Field collection2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_collection2, put = __cordl_internal_set_collection2)) ::System::Collections::Generic::IEnumerable_1<int32_t>* collection2;

  /// @brief Field collection2Tombstone, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_collection2Tombstone, put = __cordl_internal_set_collection2Tombstone)) int32_t collection2Tombstone;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t, int32_t>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x225fb18, size 0x540, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<(System.Int32,System.Int32)>.GetEnumerator, addr 0x2260254, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>* System_Collections_Generic_IEnumerable__System_Int32_System_Int32___GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<(System.Int32,System.Int32)>.get_Current, addr 0x22601b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::ValueTuple_2<int32_t, int32_t> System_Collections_Generic_IEnumerator__System_Int32_System_Int32___get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2260300, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22601c0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22601f8, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x225fa68, size 0xb0, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::ValueTuple_2<int32_t, int32_t> const& __cordl_internal_get___2__current() const;

  constexpr ::System::ValueTuple_2<int32_t, int32_t>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get___3__collection1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> const& __cordl_internal_get___3__collection1() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get___3__collection2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> const& __cordl_internal_get___3__collection2() const;

  constexpr int32_t const& __cordl_internal_get___3__collection2Tombstone() const;

  constexpr int32_t& __cordl_internal_get___3__collection2Tombstone();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>*& __cordl_internal_get__enum1_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> const& __cordl_internal_get__enum1_5__2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>*& __cordl_internal_get__enum2_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<int32_t>*> const& __cordl_internal_get__enum2_5__3() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get_collection1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> const& __cordl_internal_get_collection1() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>*& __cordl_internal_get_collection2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<int32_t>*> const& __cordl_internal_get_collection2() const;

  constexpr int32_t const& __cordl_internal_get_collection2Tombstone() const;

  constexpr int32_t& __cordl_internal_get_collection2Tombstone();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<int32_t, int32_t> value);

  constexpr void __cordl_internal_set___3__collection1(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  constexpr void __cordl_internal_set___3__collection2(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  constexpr void __cordl_internal_set___3__collection2Tombstone(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<int32_t>* value);

  constexpr void __cordl_internal_set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<int32_t>* value);

  constexpr void __cordl_internal_set_collection1(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  constexpr void __cordl_internal_set_collection2(::System::Collections::Generic::IEnumerable_1<int32_t>* value);

  constexpr void __cordl_internal_set_collection2Tombstone(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x2260108, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x2260058, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x225fa34, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t, int32_t>>*
  i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2_int32_t_int32_t__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t, int32_t>>*
  i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2_int32_t_int32_t__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShuffleExtensions___ZipSkipTombstone_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___ZipSkipTombstone_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShuffleExtensions___ZipSkipTombstone_d__3(__ShuffleExtensions___ZipSkipTombstone_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___ZipSkipTombstone_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShuffleExtensions___ZipSkipTombstone_d__3(__ShuffleExtensions___ZipSkipTombstone_d__3 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x8, def value: None
  ::System::ValueTuple_2<int32_t, int32_t> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x1c, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field collection1, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<int32_t>* ___collection1;

  /// @brief Field <>3__collection1, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<int32_t>* _____3__collection1;

  /// @brief Field collection2, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<int32_t>* ___collection2;

  /// @brief Field <>3__collection2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<int32_t>* _____3__collection2;

  /// @brief Field collection2Tombstone, offset: 0x40, size: 0x4, def value: None
  int32_t ___collection2Tombstone;

  /// @brief Field <>3__collection2Tombstone, offset: 0x44, size: 0x4, def value: None
  int32_t _____3__collection2Tombstone;

  /// @brief Field <enum1>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<int32_t>* ____enum1_5__2;

  /// @brief Field <enum2>5__3, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<int32_t>* ____enum2_5__3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, _____l__initialThreadId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, ___collection1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, _____3__collection1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, ___collection2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, _____3__collection2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, ___collection2Tombstone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, _____3__collection2Tombstone) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, ____enum1_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3, ____enum2_5__3) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ShuffleExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShuffleExtensions*
class CORDL_TYPE ShuffleExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using _PickRandomElementsWithTombstone_d__1_1 = ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>;

  template <typename T> using _TakeWithTombstone_d__2_1 = ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>;

  using _ZipSkipTombstone_d__3 = ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3;

  /// @brief Method PickRandomElementsWithTombstone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Collections::Generic::IEnumerable_1<T>* PickRandomElementsWithTombstone(::System::Collections::Generic::IEnumerable_1<T>* source, int32_t limit, int32_t count,
                                                                                                  ::System::Random* random, T tombstone);

  /// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* Shuffle(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Random* random);

  /// @brief Method ShuffleInPlace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ShuffleInPlace(::System::Collections::Generic::IList_1<T>* list, ::System::Random* random);

  /// @brief Method TakeWithTombstone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* TakeWithTombstone(::System::Collections::Generic::IEnumerable_1<T>* source, int32_t limit, T tombstone);

  /// @brief Method ZipSkipTombstone, addr 0x225f9ac, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t, int32_t>>*
  ZipSkipTombstone(::System::Collections::Generic::IEnumerable_1<int32_t>* collection1, ::System::Collections::Generic::IEnumerable_1<int32_t>* collection2, int32_t collection2Tombstone);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShuffleExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShuffleExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShuffleExtensions(ShuffleExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShuffleExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShuffleExtensions(ShuffleExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16870 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShuffleExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShuffleExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShuffleExtensions*, "", "ShuffleExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1, "", "ShuffleExtensions/<PickRandomElementsWithTombstone>d__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1, "", "ShuffleExtensions/<TakeWithTombstone>d__2`1");
NEED_NO_BOX(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3*, "", "ShuffleExtensions/<ZipSkipTombstone>d__3");
