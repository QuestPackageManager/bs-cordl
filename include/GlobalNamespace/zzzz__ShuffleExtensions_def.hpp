#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShuffleExtensions)
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace GlobalNamespace {
template <typename T> class __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1;
}
namespace GlobalNamespace {
template <typename T> class __ShuffleExtensions___TakeWithTombstone_d__2_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
template <typename T1, typename T2> class __ShuffleExtensions___ZipSkipTombstone_d__3_2;
}
namespace System {
class Random;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
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
template <typename T1, typename T2> class __ShuffleExtensions___ZipSkipTombstone_d__3_2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShuffleExtensions);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2);
// Type: ::<PickRandomElementsWithTombstone>d__1`1
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15827))
// CS Name: ::ShuffleExtensions::<PickRandomElementsWithTombstone>d__1`1<T>*
class CORDL_TYPE __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current)) T __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __get_source, put = __set_source))::System::Collections::Generic::IEnumerable_1<T>* source;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __get___3__source, put = __set___3__source))::System::Collections::Generic::IEnumerable_1<T>* __3__source;

  /// @brief Field count, offset 0x38, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Field <>3__count, offset 0x3c, size 0x4
  __declspec(property(get = __get___3__count, put = __set___3__count)) int32_t __3__count;

  /// @brief Field random, offset 0x40, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::System::Random* random;

  /// @brief Field <>3__random, offset 0x48, size 0x8
  __declspec(property(get = __get___3__random, put = __set___3__random))::System::Random* __3__random;

  /// @brief Field limit, offset 0x50, size 0x4
  __declspec(property(get = __get_limit, put = __set_limit)) int32_t limit;

  /// @brief Field <>3__limit, offset 0x54, size 0x4
  __declspec(property(get = __get___3__limit, put = __set___3__limit)) int32_t __3__limit;

  /// @brief Field tombstone, offset 0x58, size 0x8
  __declspec(property(get = __get_tombstone, put = __set_tombstone)) T tombstone;

  /// @brief Field <>3__tombstone, offset 0x60, size 0x8
  __declspec(property(get = __get___3__tombstone, put = __set___3__tombstone)) T __3__tombstone;

  /// @brief Field <index>5__2, offset 0x68, size 0x4
  __declspec(property(get = __get__index_5__2, put = __set__index_5__2)) int32_t _index_5__2;

  /// @brief Field <picked>5__3, offset 0x6c, size 0x4
  __declspec(property(get = __get__picked_5__3, put = __set__picked_5__3)) int32_t _picked_5__3;

  /// @brief Field <>7__wrap3, offset 0x70, size 0x8
  __declspec(property(get = __get___7__wrap3, put = __set___7__wrap3))::System::Collections::Generic::IEnumerator_1<T>* __7__wrap3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr T& __get___2__current();

  constexpr T const& __get___2__current() const;

  constexpr void __set___2__current(T value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __get_source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __get_source() const;

  constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __get___3__source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __get___3__source() const;

  constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  constexpr int32_t& __get___3__count();

  constexpr int32_t const& __get___3__count() const;

  constexpr void __set___3__count(int32_t value);

  constexpr ::System::Random*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __get_random() const;

  constexpr void __set_random(::System::Random* value);

  constexpr ::System::Random*& __get___3__random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __get___3__random() const;

  constexpr void __set___3__random(::System::Random* value);

  constexpr int32_t& __get_limit();

  constexpr int32_t const& __get_limit() const;

  constexpr void __set_limit(int32_t value);

  constexpr int32_t& __get___3__limit();

  constexpr int32_t const& __get___3__limit() const;

  constexpr void __set___3__limit(int32_t value);

  constexpr T& __get_tombstone();

  constexpr T const& __get_tombstone() const;

  constexpr void __set_tombstone(T value);

  constexpr T& __get___3__tombstone();

  constexpr T const& __get___3__tombstone() const;

  constexpr void __set___3__tombstone(T value);

  constexpr int32_t& __get__index_5__2();

  constexpr int32_t const& __get__index_5__2() const;

  constexpr void __set__index_5__2(int32_t value);

  constexpr int32_t& __get__picked_5__3();

  constexpr int32_t const& __get__picked_5__3() const;

  constexpr void __set__picked_5__3(int32_t value);

  constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __get___7__wrap3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const& __get___7__wrap3() const;

  constexpr void __set___7__wrap3(::System::Collections::Generic::IEnumerator_1<T>* value);

  static inline ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<TakeWithTombstone>d__2`1
// SizeInfo { instance_size: 96, native_size: 92, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15828))
// CS Name: ::ShuffleExtensions::<TakeWithTombstone>d__2`1<T>*
class CORDL_TYPE __ShuffleExtensions___TakeWithTombstone_d__2_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current)) T __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __get_source, put = __set_source))::System::Collections::Generic::IEnumerable_1<T>* source;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __get___3__source, put = __set___3__source))::System::Collections::Generic::IEnumerable_1<T>* __3__source;

  /// @brief Field limit, offset 0x38, size 0x4
  __declspec(property(get = __get_limit, put = __set_limit)) int32_t limit;

  /// @brief Field <>3__limit, offset 0x3c, size 0x4
  __declspec(property(get = __get___3__limit, put = __set___3__limit)) int32_t __3__limit;

  /// @brief Field tombstone, offset 0x40, size 0x8
  __declspec(property(get = __get_tombstone, put = __set_tombstone)) T tombstone;

  /// @brief Field <>3__tombstone, offset 0x48, size 0x8
  __declspec(property(get = __get___3__tombstone, put = __set___3__tombstone)) T __3__tombstone;

  /// @brief Field <enumerator>5__2, offset 0x50, size 0x8
  __declspec(property(get = __get__enumerator_5__2, put = __set__enumerator_5__2))::System::Collections::Generic::IEnumerator_1<T>* _enumerator_5__2;

  /// @brief Field <index>5__3, offset 0x58, size 0x4
  __declspec(property(get = __get__index_5__3, put = __set__index_5__3)) int32_t _index_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr T& __get___2__current();

  constexpr T const& __get___2__current() const;

  constexpr void __set___2__current(T value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __get_source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __get_source() const;

  constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __get___3__source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __get___3__source() const;

  constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr int32_t& __get_limit();

  constexpr int32_t const& __get_limit() const;

  constexpr void __set_limit(int32_t value);

  constexpr int32_t& __get___3__limit();

  constexpr int32_t const& __get___3__limit() const;

  constexpr void __set___3__limit(int32_t value);

  constexpr T& __get_tombstone();

  constexpr T const& __get_tombstone() const;

  constexpr void __set_tombstone(T value);

  constexpr T& __get___3__tombstone();

  constexpr T const& __get___3__tombstone() const;

  constexpr void __set___3__tombstone(T value);

  constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __get__enumerator_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const& __get__enumerator_5__2() const;

  constexpr void __set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<T>* value);

  constexpr int32_t& __get__index_5__3();

  constexpr int32_t const& __get__index_5__3() const;

  constexpr void __set__index_5__3(int32_t value);

  static inline ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShuffleExtensions___TakeWithTombstone_d__2_1(__ShuffleExtensions___TakeWithTombstone_d__2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___TakeWithTombstone_d__2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShuffleExtensions___TakeWithTombstone_d__2_1(__ShuffleExtensions___TakeWithTombstone_d__2_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShuffleExtensions___TakeWithTombstone_d__2_1();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<ZipSkipTombstone>d__3`2
// SizeInfo { instance_size: 112, native_size: 112, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T1, typename T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5306 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15829)) CS Name: ::ShuffleExtensions::<ZipSkipTombstone>d__3`2<T1,T2>*
class CORDL_TYPE __ShuffleExtensions___ZipSkipTombstone_d__3_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::ValueTuple_2<T1, T2> __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field collection1, offset 0x30, size 0x8
  __declspec(property(get = __get_collection1, put = __set_collection1))::System::Collections::Generic::IEnumerable_1<T1>* collection1;

  /// @brief Field <>3__collection1, offset 0x38, size 0x8
  __declspec(property(get = __get___3__collection1, put = __set___3__collection1))::System::Collections::Generic::IEnumerable_1<T1>* __3__collection1;

  /// @brief Field collection2, offset 0x40, size 0x8
  __declspec(property(get = __get_collection2, put = __set_collection2))::System::Collections::Generic::IEnumerable_1<T2>* collection2;

  /// @brief Field <>3__collection2, offset 0x48, size 0x8
  __declspec(property(get = __get___3__collection2, put = __set___3__collection2))::System::Collections::Generic::IEnumerable_1<T2>* __3__collection2;

  /// @brief Field collection2Tombstone, offset 0x50, size 0x8
  __declspec(property(get = __get_collection2Tombstone, put = __set_collection2Tombstone)) T2 collection2Tombstone;

  /// @brief Field <>3__collection2Tombstone, offset 0x58, size 0x8
  __declspec(property(get = __get___3__collection2Tombstone, put = __set___3__collection2Tombstone)) T2 __3__collection2Tombstone;

  /// @brief Field <enum1>5__2, offset 0x60, size 0x8
  __declspec(property(get = __get__enum1_5__2, put = __set__enum1_5__2))::System::Collections::Generic::IEnumerator_1<T1>* _enum1_5__2;

  /// @brief Field <enum2>5__3, offset 0x68, size 0x8
  __declspec(property(get = __get__enum2_5__3, put = __set__enum2_5__3))::System::Collections::Generic::IEnumerator_1<T2>* _enum2_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator__T1_T2___get_Current))::System::ValueTuple_2<T1, T2> System_Collections_Generic_IEnumerator__T1_T2___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1, T2>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1, T2>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::ValueTuple_2<T1, T2>& __get___2__current();

  constexpr ::System::ValueTuple_2<T1, T2> const& __get___2__current() const;

  constexpr void __set___2__current(::System::ValueTuple_2<T1, T2> value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T1>*& __get_collection1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T1>*> const& __get_collection1() const;

  constexpr void __set_collection1(::System::Collections::Generic::IEnumerable_1<T1>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T1>*& __get___3__collection1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T1>*> const& __get___3__collection1() const;

  constexpr void __set___3__collection1(::System::Collections::Generic::IEnumerable_1<T1>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T2>*& __get_collection2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T2>*> const& __get_collection2() const;

  constexpr void __set_collection2(::System::Collections::Generic::IEnumerable_1<T2>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T2>*& __get___3__collection2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T2>*> const& __get___3__collection2() const;

  constexpr void __set___3__collection2(::System::Collections::Generic::IEnumerable_1<T2>* value);

  constexpr T2& __get_collection2Tombstone();

  constexpr T2 const& __get_collection2Tombstone() const;

  constexpr void __set_collection2Tombstone(T2 value);

  constexpr T2& __get___3__collection2Tombstone();

  constexpr T2 const& __get___3__collection2Tombstone() const;

  constexpr void __set___3__collection2Tombstone(T2 value);

  constexpr ::System::Collections::Generic::IEnumerator_1<T1>*& __get__enum1_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T1>*> const& __get__enum1_5__2() const;

  constexpr void __set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<T1>* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<T2>*& __get__enum2_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T2>*> const& __get__enum2_5__3() const;

  constexpr void __set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<T2>* value);

  static inline ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::ValueTuple_2<T1, T2> System_Collections_Generic_IEnumerator__T1_T2___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1, T2>>* System_Collections_Generic_IEnumerable__T1_T2___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShuffleExtensions___ZipSkipTombstone_d__3_2(__ShuffleExtensions___ZipSkipTombstone_d__3_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShuffleExtensions___ZipSkipTombstone_d__3_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShuffleExtensions___ZipSkipTombstone_d__3_2(__ShuffleExtensions___ZipSkipTombstone_d__3_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShuffleExtensions___ZipSkipTombstone_d__3_2();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::ValueTuple_2<T1, T2> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field collection1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T1>* ___collection1;

  /// @brief Field <>3__collection1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T1>* _____3__collection1;

  /// @brief Field collection2, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T2>* ___collection2;

  /// @brief Field <>3__collection2, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T2>* _____3__collection2;

  /// @brief Field collection2Tombstone, offset: 0x50, size: 0x8, def value: None
  T2 ___collection2Tombstone;

  /// @brief Field <>3__collection2Tombstone, offset: 0x58, size: 0x8, def value: None
  T2 _____3__collection2Tombstone;

  /// @brief Field <enum1>5__2, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T1>* ____enum1_5__2;

  /// @brief Field <enum2>5__3, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T2>* ____enum2_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ShuffleExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15830))
// CS Name: ::ShuffleExtensions*
class CORDL_TYPE ShuffleExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T1, typename T2> using _ZipSkipTombstone_d__3_2 = ::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1, T2>;

  template <typename T> using _TakeWithTombstone_d__2_1 = ::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1<T>;

  template <typename T> using _PickRandomElementsWithTombstone_d__1_1 = ::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>;

  /// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* Shuffle(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Random* random);

  /// @brief Method PickRandomElementsWithTombstone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Collections::Generic::IEnumerable_1<T>* PickRandomElementsWithTombstone(::System::Collections::Generic::IEnumerable_1<T>* source, int32_t limit, int32_t count,
                                                                                                  ::System::Random* random, T tombstone);

  /// @brief Method TakeWithTombstone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* TakeWithTombstone(::System::Collections::Generic::IEnumerable_1<T>* source, int32_t limit, T tombstone);

  /// @brief Method ZipSkipTombstone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1, T2>>*
  ZipSkipTombstone(::System::Collections::Generic::IEnumerable_1<T1>* collection1, ::System::Collections::Generic::IEnumerable_1<T2>* collection2, T2 collection2Tombstone);

  /// @brief Method ShuffleInPlace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ShuffleInPlace(::System::Collections::Generic::IList_1<T>* list, ::System::Random* random);

  // Ctor Parameters [CppParam { name: "", ty: "ShuffleExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShuffleExtensions(ShuffleExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShuffleExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShuffleExtensions(ShuffleExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShuffleExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShuffleExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShuffleExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShuffleExtensions*, "", "ShuffleExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1, "", "ShuffleExtensions/<PickRandomElementsWithTombstone>d__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ShuffleExtensions___TakeWithTombstone_d__2_1, "", "ShuffleExtensions/<TakeWithTombstone>d__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ShuffleExtensions___ZipSkipTombstone_d__3_2, "", "ShuffleExtensions/<ZipSkipTombstone>d__3`2");
