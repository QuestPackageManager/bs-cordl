#pragma once
// IWYU pragma private; include "System/Linq/Enumerable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Linq/zzzz__Buffer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Enumerable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq {
template <typename TSource> class Enumerable_Iterator_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable_WhereArrayIterator_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable_WhereEnumerableIterator_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable_WhereListIterator_1;
}
namespace System::Linq {
template <typename TSource, typename TResult> class Enumerable_WhereSelectArrayIterator_2;
}
namespace System::Linq {
template <typename TSource, typename TResult> class Enumerable_WhereSelectEnumerableIterator_2;
}
namespace System::Linq {
template <typename TSource, typename TResult> class Enumerable_WhereSelectListIterator_2;
}
namespace System::Linq {
template <typename TResult> class Enumerable__CastIterator_d__99_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__ConcatIterator_d__59_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__DefaultIfEmptyIterator_d__95_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__DistinctIterator_d__68_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__ExceptIterator_d__77_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__IntersectIterator_d__74_1;
}
namespace System::Linq {
template <typename TResult> class Enumerable__OfTypeIterator_d__97_1;
}
namespace System::Linq {
class Enumerable__RangeIterator_d__115;
}
namespace System::Linq {
template <typename TSource> class Enumerable__ReverseIterator_d__79_1;
}
namespace System::Linq {
template <typename TSource, typename TResult> class Enumerable__SelectManyIterator_d__17_2;
}
namespace System::Linq {
template <typename TSource> class Enumerable__SkipIterator_d__31_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__TakeIterator_d__25_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__UnionIterator_d__71_1;
}
namespace System::Linq {
template <typename TFirst, typename TSecond, typename TResult> class Enumerable__ZipIterator_d__65_3;
}
namespace System::Linq {
template <typename TSource> class Enumerable___c__DisplayClass6_0_1;
}
namespace System::Linq {
template <typename TSource, typename TMiddle, typename TResult> class Enumerable___c__DisplayClass7_0_3;
}
namespace System::Linq {
template <typename TKey, typename TElement> class IGrouping_2;
}
namespace System::Linq {
template <typename TElement> class IOrderedEnumerable_1;
}
namespace System::Linq {
template <typename TElement> class Set_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq {
class Enumerable;
}
namespace System::Linq {
template <typename TSource> class Enumerable_Iterator_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable_WhereArrayIterator_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable_WhereEnumerableIterator_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable_WhereListIterator_1;
}
namespace System::Linq {
template <typename TSource, typename TResult> class Enumerable_WhereSelectArrayIterator_2;
}
namespace System::Linq {
template <typename TSource, typename TResult> class Enumerable_WhereSelectEnumerableIterator_2;
}
namespace System::Linq {
template <typename TSource, typename TResult> class Enumerable_WhereSelectListIterator_2;
}
namespace System::Linq {
template <typename TResult> class Enumerable__CastIterator_d__99_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__ConcatIterator_d__59_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__DefaultIfEmptyIterator_d__95_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__DistinctIterator_d__68_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__ExceptIterator_d__77_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__IntersectIterator_d__74_1;
}
namespace System::Linq {
template <typename TResult> class Enumerable__OfTypeIterator_d__97_1;
}
namespace System::Linq {
class Enumerable__RangeIterator_d__115;
}
namespace System::Linq {
template <typename TSource> class Enumerable__ReverseIterator_d__79_1;
}
namespace System::Linq {
template <typename TSource, typename TResult> class Enumerable__SelectManyIterator_d__17_2;
}
namespace System::Linq {
template <typename TSource> class Enumerable__SkipIterator_d__31_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__TakeIterator_d__25_1;
}
namespace System::Linq {
template <typename TSource> class Enumerable__UnionIterator_d__71_1;
}
namespace System::Linq {
template <typename TFirst, typename TSecond, typename TResult> class Enumerable__ZipIterator_d__65_3;
}
namespace System::Linq {
template <typename TSource> class Enumerable___c__DisplayClass6_0_1;
}
namespace System::Linq {
template <typename TSource, typename TMiddle, typename TResult> class Enumerable___c__DisplayClass7_0_3;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Enumerable);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable_Iterator_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable_WhereArrayIterator_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable_WhereEnumerableIterator_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable_WhereListIterator_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable_WhereSelectArrayIterator_2);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable_WhereSelectEnumerableIterator_2);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable_WhereSelectListIterator_2);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__CastIterator_d__99_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__ConcatIterator_d__59_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__DefaultIfEmptyIterator_d__95_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__DistinctIterator_d__68_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__ExceptIterator_d__77_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__IntersectIterator_d__74_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__OfTypeIterator_d__97_1);
MARK_REF_PTR_T(::System::Linq::Enumerable__RangeIterator_d__115);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__ReverseIterator_d__79_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__SelectManyIterator_d__17_2);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__SkipIterator_d__31_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__TakeIterator_d__25_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__UnionIterator_d__71_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable__ZipIterator_d__65_3);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable___c__DisplayClass6_0_1);
MARK_GEN_REF_PTR_T(::System::Linq::Enumerable___c__DisplayClass7_0_3);
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/Iterator`1<TSource>
class CORDL_TYPE Enumerable_Iterator_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) TSource Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current)) TSource current;

  /// @brief Field state, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) int32_t state;

  /// @brief Field threadId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_threadId, put = __cordl_internal_set_threadId)) int32_t threadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Enumerable_Iterator_1<TSource>* Clone();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* GetEnumerator();

  /// @brief Method MoveNext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable_Iterator_1<TSource>* New_ctor();

  /// @brief Method Select, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* Select(::System::Func_2<TSource, TResult>* selector);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method Where, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TSource>* Where(::System::Func_2<TSource, bool>* predicate);

  constexpr TSource const& __cordl_internal_get_current() const;

  constexpr TSource& __cordl_internal_get_current();

  constexpr int32_t const& __cordl_internal_get_state() const;

  constexpr int32_t& __cordl_internal_get_state();

  constexpr int32_t const& __cordl_internal_get_threadId() const;

  constexpr int32_t& __cordl_internal_get_threadId();

  constexpr void __cordl_internal_set_current(TSource value);

  constexpr void __cordl_internal_set_state(int32_t value);

  constexpr void __cordl_internal_set_threadId(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable_Iterator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_Iterator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable_Iterator_1(Enumerable_Iterator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_Iterator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable_Iterator_1(Enumerable_Iterator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16030 };

  /// @brief Field threadId, offset: 0x10, size: 0x4, def value: None
  int32_t ___threadId;

  /// @brief Field state, offset: 0x14, size: 0x4, def value: None
  int32_t ___state;

  /// @brief Field current, offset: 0x18, size: 0x8, def value: None
  TSource ___current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Linq.Enumerable::Iterator`1<TSource>
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/WhereEnumerableIterator`1<TSource>
class CORDL_TYPE Enumerable_WhereEnumerableIterator_1 : public ::System::Linq::Enumerable_Iterator_1<TSource> {
public:
  // Declarations
  /// @brief Field enumerator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator)) ::System::Collections::Generic::IEnumerator_1<TSource>* enumerator;

  /// @brief Field predicate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<TSource, bool>* predicate;

  /// @brief Field source, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>* source;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Enumerable_Iterator_1<TSource>* Clone();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable_WhereEnumerableIterator_1<TSource>* New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* Select(::System::Func_2<TSource, TResult>* selector);

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TSource>* Where(::System::Func_2<TSource, bool>* predicate);

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get_enumerator();

  constexpr ::System::Func_2<TSource, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<TSource, bool>*& __cordl_internal_get_predicate();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_enumerator(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable_WhereEnumerableIterator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereEnumerableIterator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable_WhereEnumerableIterator_1(Enumerable_WhereEnumerableIterator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereEnumerableIterator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable_WhereEnumerableIterator_1(Enumerable_WhereEnumerableIterator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16031 };

  /// @brief Field source, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___source;

  /// @brief Field predicate, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<TSource, bool>* ___predicate;

  /// @brief Field enumerator, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Linq.Enumerable::Iterator`1<TSource>
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/WhereArrayIterator`1<TSource>
class CORDL_TYPE Enumerable_WhereArrayIterator_1 : public ::System::Linq::Enumerable_Iterator_1<TSource> {
public:
  // Declarations
  /// @brief Field index, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field predicate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<TSource, bool>* predicate;

  /// @brief Field source, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::ArrayW<TSource, ::Array<TSource>*> source;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Enumerable_Iterator_1<TSource>* Clone();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable_WhereArrayIterator_1<TSource>* New_ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* Select(::System::Func_2<TSource, TResult>* selector);

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TSource>* Where(::System::Func_2<TSource, bool>* predicate);

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::System::Func_2<TSource, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<TSource, bool>*& __cordl_internal_get_predicate();

  constexpr ::ArrayW<TSource, ::Array<TSource>*> const& __cordl_internal_get_source() const;

  constexpr ::ArrayW<TSource, ::Array<TSource>*>& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value);

  constexpr void __cordl_internal_set_source(::ArrayW<TSource, ::Array<TSource>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable_WhereArrayIterator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereArrayIterator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable_WhereArrayIterator_1(Enumerable_WhereArrayIterator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereArrayIterator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable_WhereArrayIterator_1(Enumerable_WhereArrayIterator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16032 };

  /// @brief Field source, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<TSource, ::Array<TSource>*> ___source;

  /// @brief Field predicate, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<TSource, bool>* ___predicate;

  /// @brief Field index, offset: 0x30, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Linq.Enumerable::Iterator`1<TSource>
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/WhereListIterator`1<TSource>
class CORDL_TYPE Enumerable_WhereListIterator_1 : public ::System::Linq::Enumerable_Iterator_1<TSource> {
public:
  // Declarations
  /// @brief Field enumerator, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator)) ::System::Collections::Generic::List_1_Enumerator<TSource> enumerator;

  /// @brief Field predicate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<TSource, bool>* predicate;

  /// @brief Field source, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::List_1<TSource>* source;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Enumerable_Iterator_1<TSource>* Clone();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable_WhereListIterator_1<TSource>* New_ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* Select(::System::Func_2<TSource, TResult>* selector);

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TSource>* Where(::System::Func_2<TSource, bool>* predicate);

  constexpr ::System::Collections::Generic::List_1_Enumerator<TSource> const& __cordl_internal_get_enumerator() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<TSource>& __cordl_internal_get_enumerator();

  constexpr ::System::Func_2<TSource, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<TSource, bool>*& __cordl_internal_get_predicate();

  constexpr ::System::Collections::Generic::List_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::List_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_enumerator(::System::Collections::Generic::List_1_Enumerator<TSource> value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::List_1<TSource>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable_WhereListIterator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereListIterator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable_WhereListIterator_1(Enumerable_WhereListIterator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereListIterator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable_WhereListIterator_1(Enumerable_WhereListIterator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16033 };

  /// @brief Field source, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TSource>* ___source;

  /// @brief Field predicate, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<TSource, bool>* ___predicate;

  /// @brief Field enumerator, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<TSource> ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Linq.Enumerable::Iterator`1<TSource>
namespace System::Linq {
// cpp template
template <typename TSource, typename TResult>
// Is value type: false
// CS Name: System.Linq.Enumerable/WhereSelectEnumerableIterator`2<TSource,TResult>
class CORDL_TYPE Enumerable_WhereSelectEnumerableIterator_2 : public ::System::Linq::Enumerable_Iterator_1<TResult> {
public:
  // Declarations
  /// @brief Field enumerator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator)) ::System::Collections::Generic::IEnumerator_1<TSource>* enumerator;

  /// @brief Field predicate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<TSource, bool>* predicate;

  /// @brief Field selector, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_selector, put = __cordl_internal_set_selector)) ::System::Func_2<TSource, TResult>* selector;

  /// @brief Field source, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>* source;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Enumerable_Iterator_1<TResult>* Clone();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable_WhereSelectEnumerableIterator_2<TSource, TResult>* New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                       ::System::Func_2<TSource, bool>* predicate, ::System::Func_2<TSource, TResult>* selector);

  /// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TResult2> inline ::System::Collections::Generic::IEnumerable_1<TResult2>* Select(::System::Func_2<TResult, TResult2>* selector);

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TResult>* Where(::System::Func_2<TResult, bool>* predicate);

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get_enumerator();

  constexpr ::System::Func_2<TSource, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<TSource, bool>*& __cordl_internal_get_predicate();

  constexpr ::System::Func_2<TSource, TResult>* const& __cordl_internal_get_selector() const;

  constexpr ::System::Func_2<TSource, TResult>*& __cordl_internal_get_selector();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_enumerator(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value);

  constexpr void __cordl_internal_set_selector(::System::Func_2<TSource, TResult>* value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate, ::System::Func_2<TSource, TResult>* selector);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable_WhereSelectEnumerableIterator_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereSelectEnumerableIterator_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable_WhereSelectEnumerableIterator_2(Enumerable_WhereSelectEnumerableIterator_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereSelectEnumerableIterator_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable_WhereSelectEnumerableIterator_2(Enumerable_WhereSelectEnumerableIterator_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16034 };

  /// @brief Field source, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___source;

  /// @brief Field predicate, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<TSource, bool>* ___predicate;

  /// @brief Field selector, offset: 0x30, size: 0x8, def value: None
  ::System::Func_2<TSource, TResult>* ___selector;

  /// @brief Field enumerator, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Linq.Enumerable::Iterator`1<TSource>
namespace System::Linq {
// cpp template
template <typename TSource, typename TResult>
// Is value type: false
// CS Name: System.Linq.Enumerable/WhereSelectArrayIterator`2<TSource,TResult>
class CORDL_TYPE Enumerable_WhereSelectArrayIterator_2 : public ::System::Linq::Enumerable_Iterator_1<TResult> {
public:
  // Declarations
  /// @brief Field index, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field predicate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<TSource, bool>* predicate;

  /// @brief Field selector, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_selector, put = __cordl_internal_set_selector)) ::System::Func_2<TSource, TResult>* selector;

  /// @brief Field source, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::ArrayW<TSource, ::Array<TSource>*> source;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Enumerable_Iterator_1<TResult>* Clone();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable_WhereSelectArrayIterator_2<TSource, TResult>* New_ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate,
                                                                                                  ::System::Func_2<TSource, TResult>* selector);

  /// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TResult2> inline ::System::Collections::Generic::IEnumerable_1<TResult2>* Select(::System::Func_2<TResult, TResult2>* selector);

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TResult>* Where(::System::Func_2<TResult, bool>* predicate);

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::System::Func_2<TSource, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<TSource, bool>*& __cordl_internal_get_predicate();

  constexpr ::System::Func_2<TSource, TResult>* const& __cordl_internal_get_selector() const;

  constexpr ::System::Func_2<TSource, TResult>*& __cordl_internal_get_selector();

  constexpr ::ArrayW<TSource, ::Array<TSource>*> const& __cordl_internal_get_source() const;

  constexpr ::ArrayW<TSource, ::Array<TSource>*>& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value);

  constexpr void __cordl_internal_set_selector(::System::Func_2<TSource, TResult>* value);

  constexpr void __cordl_internal_set_source(::ArrayW<TSource, ::Array<TSource>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate, ::System::Func_2<TSource, TResult>* selector);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable_WhereSelectArrayIterator_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereSelectArrayIterator_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable_WhereSelectArrayIterator_2(Enumerable_WhereSelectArrayIterator_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereSelectArrayIterator_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable_WhereSelectArrayIterator_2(Enumerable_WhereSelectArrayIterator_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16035 };

  /// @brief Field source, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<TSource, ::Array<TSource>*> ___source;

  /// @brief Field predicate, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<TSource, bool>* ___predicate;

  /// @brief Field selector, offset: 0x30, size: 0x8, def value: None
  ::System::Func_2<TSource, TResult>* ___selector;

  /// @brief Field index, offset: 0x38, size: 0x4, def value: None
  int32_t ___index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Linq.Enumerable::Iterator`1<TSource>
namespace System::Linq {
// cpp template
template <typename TSource, typename TResult>
// Is value type: false
// CS Name: System.Linq.Enumerable/WhereSelectListIterator`2<TSource,TResult>
class CORDL_TYPE Enumerable_WhereSelectListIterator_2 : public ::System::Linq::Enumerable_Iterator_1<TResult> {
public:
  // Declarations
  /// @brief Field enumerator, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator)) ::System::Collections::Generic::List_1_Enumerator<TSource> enumerator;

  /// @brief Field predicate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<TSource, bool>* predicate;

  /// @brief Field selector, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_selector, put = __cordl_internal_set_selector)) ::System::Func_2<TSource, TResult>* selector;

  /// @brief Field source, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::List_1<TSource>* source;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Enumerable_Iterator_1<TResult>* Clone();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable_WhereSelectListIterator_2<TSource, TResult>* New_ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate,
                                                                                                 ::System::Func_2<TSource, TResult>* selector);

  /// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TResult2> inline ::System::Collections::Generic::IEnumerable_1<TResult2>* Select(::System::Func_2<TResult, TResult2>* selector);

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TResult>* Where(::System::Func_2<TResult, bool>* predicate);

  constexpr ::System::Collections::Generic::List_1_Enumerator<TSource> const& __cordl_internal_get_enumerator() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<TSource>& __cordl_internal_get_enumerator();

  constexpr ::System::Func_2<TSource, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<TSource, bool>*& __cordl_internal_get_predicate();

  constexpr ::System::Func_2<TSource, TResult>* const& __cordl_internal_get_selector() const;

  constexpr ::System::Func_2<TSource, TResult>*& __cordl_internal_get_selector();

  constexpr ::System::Collections::Generic::List_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::List_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_enumerator(::System::Collections::Generic::List_1_Enumerator<TSource> value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value);

  constexpr void __cordl_internal_set_selector(::System::Func_2<TSource, TResult>* value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::List_1<TSource>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate, ::System::Func_2<TSource, TResult>* selector);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable_WhereSelectListIterator_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereSelectListIterator_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable_WhereSelectListIterator_2(Enumerable_WhereSelectListIterator_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable_WhereSelectListIterator_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable_WhereSelectListIterator_2(Enumerable_WhereSelectListIterator_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16036 };

  /// @brief Field source, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TSource>* ___source;

  /// @brief Field predicate, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<TSource, bool>* ___predicate;

  /// @brief Field selector, offset: 0x30, size: 0x8, def value: None
  ::System::Func_2<TSource, TResult>* ___selector;

  /// @brief Field enumerator, offset: 0x38, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<TSource> ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<>c__DisplayClass6_0`1<TSource>
class CORDL_TYPE Enumerable___c__DisplayClass6_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field predicate1, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate1, put = __cordl_internal_set_predicate1)) ::System::Func_2<TSource, bool>* predicate1;

  /// @brief Field predicate2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate2, put = __cordl_internal_set_predicate2)) ::System::Func_2<TSource, bool>* predicate2;

  static inline ::System::Linq::Enumerable___c__DisplayClass6_0_1<TSource>* New_ctor();

  /// @brief Method <CombinePredicates>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _CombinePredicates_b__0(TSource x);

  constexpr ::System::Func_2<TSource, bool>* const& __cordl_internal_get_predicate1() const;

  constexpr ::System::Func_2<TSource, bool>*& __cordl_internal_get_predicate1();

  constexpr ::System::Func_2<TSource, bool>* const& __cordl_internal_get_predicate2() const;

  constexpr ::System::Func_2<TSource, bool>*& __cordl_internal_get_predicate2();

  constexpr void __cordl_internal_set_predicate1(::System::Func_2<TSource, bool>* value);

  constexpr void __cordl_internal_set_predicate2(::System::Func_2<TSource, bool>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable___c__DisplayClass6_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable___c__DisplayClass6_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable___c__DisplayClass6_0_1(Enumerable___c__DisplayClass6_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable___c__DisplayClass6_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable___c__DisplayClass6_0_1(Enumerable___c__DisplayClass6_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16037 };

  /// @brief Field predicate1, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TSource, bool>* ___predicate1;

  /// @brief Field predicate2, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TSource, bool>* ___predicate2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource, typename TMiddle, typename TResult>
// Is value type: false
// CS Name: System.Linq.Enumerable/<>c__DisplayClass7_0`3<TSource,TMiddle,TResult>
class CORDL_TYPE Enumerable___c__DisplayClass7_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field selector1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_selector1, put = __cordl_internal_set_selector1)) ::System::Func_2<TSource, TMiddle>* selector1;

  /// @brief Field selector2, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_selector2, put = __cordl_internal_set_selector2)) ::System::Func_2<TMiddle, TResult>* selector2;

  static inline ::System::Linq::Enumerable___c__DisplayClass7_0_3<TSource, TMiddle, TResult>* New_ctor();

  /// @brief Method <CombineSelectors>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult _CombineSelectors_b__0(TSource x);

  constexpr ::System::Func_2<TSource, TMiddle>* const& __cordl_internal_get_selector1() const;

  constexpr ::System::Func_2<TSource, TMiddle>*& __cordl_internal_get_selector1();

  constexpr ::System::Func_2<TMiddle, TResult>* const& __cordl_internal_get_selector2() const;

  constexpr ::System::Func_2<TMiddle, TResult>*& __cordl_internal_get_selector2();

  constexpr void __cordl_internal_set_selector1(::System::Func_2<TSource, TMiddle>* value);

  constexpr void __cordl_internal_set_selector2(::System::Func_2<TMiddle, TResult>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable___c__DisplayClass7_0_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable___c__DisplayClass7_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable___c__DisplayClass7_0_3(Enumerable___c__DisplayClass7_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable___c__DisplayClass7_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable___c__DisplayClass7_0_3(Enumerable___c__DisplayClass7_0_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16038 };

  /// @brief Field selector2, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TMiddle, TResult>* ___selector2;

  /// @brief Field selector1, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TSource, TMiddle>* ___selector1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource, typename TResult>
// Is value type: false
// CS Name: System.Linq.Enumerable/<SelectManyIterator>d__17`2<TSource,TResult>
class CORDL_TYPE Enumerable__SelectManyIterator_d__17_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TResult__get_Current)) TResult System_Collections_Generic_IEnumerator_TResult__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TResult __2__current;

  /// @brief Field <>3__selector, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__selector,
                      put = __cordl_internal_set___3__selector)) ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* __3__selector;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__source;

  /// @brief Field <>7__wrap1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<TResult>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field selector, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_selector, put = __cordl_internal_set_selector)) ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* selector;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__SelectManyIterator_d__17_2<TSource, TResult>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TResult>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TResult>* System_Collections_Generic_IEnumerable_TResult__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TResult>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TResult System_Collections_Generic_IEnumerator_TResult__get_Current();

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

  constexpr TResult const& __cordl_internal_get___2__current() const;

  constexpr TResult& __cordl_internal_get___2__current();

  constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* const& __cordl_internal_get___3__selector() const;

  constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*& __cordl_internal_get___3__selector();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__source();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get___7__wrap1();

  constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TResult>*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* const& __cordl_internal_get_selector() const;

  constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*& __cordl_internal_get_selector();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TResult value);

  constexpr void __cordl_internal_set___3__selector(::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TResult>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_selector(::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__SelectManyIterator_d__17_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__SelectManyIterator_d__17_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__SelectManyIterator_d__17_2(Enumerable__SelectManyIterator_d__17_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__SelectManyIterator_d__17_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__SelectManyIterator_d__17_2(Enumerable__SelectManyIterator_d__17_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16039 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TResult _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__source;

  /// @brief Field selector, offset: 0x38, size: 0x8, def value: None
  ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* ___selector;

  /// @brief Field <>3__selector, offset: 0x40, size: 0x8, def value: None
  ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* _____3__selector;

  /// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TResult>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<TakeIterator>d__25`1<TSource>
class CORDL_TYPE Enumerable__TakeIterator_d__25_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource System_Collections_Generic_IEnumerator_TSource__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TSource __2__current;

  /// @brief Field <>3__count, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___3__count, put = __cordl_internal_set___3__count)) int32_t __3__count;

  /// @brief Field <>3__source, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__source;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field count, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__TakeIterator_d__25_1<TSource>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current();

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

  constexpr TSource const& __cordl_internal_get___2__current() const;

  constexpr TSource& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___3__count() const;

  constexpr int32_t& __cordl_internal_get___3__count();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__source();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TSource value);

  constexpr void __cordl_internal_set___3__count(int32_t value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__TakeIterator_d__25_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__TakeIterator_d__25_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__TakeIterator_d__25_1(Enumerable__TakeIterator_d__25_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__TakeIterator_d__25_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__TakeIterator_d__25_1(Enumerable__TakeIterator_d__25_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16040 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TSource _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field count, offset: 0x24, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field <>3__count, offset: 0x28, size: 0x4, def value: None
  int32_t _____3__count;

  /// @brief Field source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___source;

  /// @brief Field <>3__source, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__source;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<SkipIterator>d__31`1<TSource>
class CORDL_TYPE Enumerable__SkipIterator_d__31_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource System_Collections_Generic_IEnumerator_TSource__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TSource __2__current;

  /// @brief Field <>3__count, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__count, put = __cordl_internal_set___3__count)) int32_t __3__count;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__source;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <e>5__2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__e_5__2, put = __cordl_internal_set__e_5__2)) ::System::Collections::Generic::IEnumerator_1<TSource>* _e_5__2;

  /// @brief Field count, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__SkipIterator_d__31_1<TSource>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current();

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

  constexpr TSource const& __cordl_internal_get___2__current() const;

  constexpr TSource& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___3__count() const;

  constexpr int32_t& __cordl_internal_get___3__count();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__source();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get__e_5__2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get__e_5__2();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TSource value);

  constexpr void __cordl_internal_set___3__count(int32_t value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__e_5__2(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__SkipIterator_d__31_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__SkipIterator_d__31_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__SkipIterator_d__31_1(Enumerable__SkipIterator_d__31_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__SkipIterator_d__31_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__SkipIterator_d__31_1(Enumerable__SkipIterator_d__31_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16041 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TSource _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__source;

  /// @brief Field count, offset: 0x38, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field <>3__count, offset: 0x3c, size: 0x4, def value: None
  int32_t _____3__count;

  /// @brief Field <e>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* ____e_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<ConcatIterator>d__59`1<TSource>
class CORDL_TYPE Enumerable__ConcatIterator_d__59_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource System_Collections_Generic_IEnumerator_TSource__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TSource __2__current;

  /// @brief Field <>3__first, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__first, put = __cordl_internal_set___3__first)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__first;

  /// @brief Field <>3__second, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__second, put = __cordl_internal_set___3__second)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__second;

  /// @brief Field <>7__wrap1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field first, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_first, put = __cordl_internal_set_first)) ::System::Collections::Generic::IEnumerable_1<TSource>* first;

  /// @brief Field second, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_second, put = __cordl_internal_set_second)) ::System::Collections::Generic::IEnumerable_1<TSource>* second;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__ConcatIterator_d__59_1<TSource>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current();

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

  constexpr TSource const& __cordl_internal_get___2__current() const;

  constexpr TSource& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__first();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__second();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_first();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_second();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TSource value);

  constexpr void __cordl_internal_set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__ConcatIterator_d__59_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__ConcatIterator_d__59_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__ConcatIterator_d__59_1(Enumerable__ConcatIterator_d__59_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__ConcatIterator_d__59_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__ConcatIterator_d__59_1(Enumerable__ConcatIterator_d__59_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16042 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TSource _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field first, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___first;

  /// @brief Field <>3__first, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__first;

  /// @brief Field second, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___second;

  /// @brief Field <>3__second, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__second;

  /// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TFirst, typename TSecond, typename TResult>
// Is value type: false
// CS Name: System.Linq.Enumerable/<ZipIterator>d__65`3<TFirst,TSecond,TResult>
class CORDL_TYPE Enumerable__ZipIterator_d__65_3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TResult__get_Current)) TResult System_Collections_Generic_IEnumerator_TResult__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TResult __2__current;

  /// @brief Field <>3__first, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__first, put = __cordl_internal_set___3__first)) ::System::Collections::Generic::IEnumerable_1<TFirst>* __3__first;

  /// @brief Field <>3__resultSelector, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___3__resultSelector, put = __cordl_internal_set___3__resultSelector)) ::System::Func_3<TFirst, TSecond, TResult>* __3__resultSelector;

  /// @brief Field <>3__second, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__second, put = __cordl_internal_set___3__second)) ::System::Collections::Generic::IEnumerable_1<TSecond>* __3__second;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <e1>5__2, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__e1_5__2, put = __cordl_internal_set__e1_5__2)) ::System::Collections::Generic::IEnumerator_1<TFirst>* _e1_5__2;

  /// @brief Field <e2>5__3, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__e2_5__3, put = __cordl_internal_set__e2_5__3)) ::System::Collections::Generic::IEnumerator_1<TSecond>* _e2_5__3;

  /// @brief Field first, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_first, put = __cordl_internal_set_first)) ::System::Collections::Generic::IEnumerable_1<TFirst>* first;

  /// @brief Field resultSelector, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_resultSelector, put = __cordl_internal_set_resultSelector)) ::System::Func_3<TFirst, TSecond, TResult>* resultSelector;

  /// @brief Field second, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_second, put = __cordl_internal_set_second)) ::System::Collections::Generic::IEnumerable_1<TSecond>* second;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__ZipIterator_d__65_3<TFirst, TSecond, TResult>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TResult>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TResult>* System_Collections_Generic_IEnumerable_TResult__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TResult>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TResult System_Collections_Generic_IEnumerator_TResult__get_Current();

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

  constexpr TResult const& __cordl_internal_get___2__current() const;

  constexpr TResult& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<TFirst>* const& __cordl_internal_get___3__first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TFirst>*& __cordl_internal_get___3__first();

  constexpr ::System::Func_3<TFirst, TSecond, TResult>* const& __cordl_internal_get___3__resultSelector() const;

  constexpr ::System::Func_3<TFirst, TSecond, TResult>*& __cordl_internal_get___3__resultSelector();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSecond>* const& __cordl_internal_get___3__second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSecond>*& __cordl_internal_get___3__second();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerator_1<TFirst>* const& __cordl_internal_get__e1_5__2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TFirst>*& __cordl_internal_get__e1_5__2();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSecond>* const& __cordl_internal_get__e2_5__3() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSecond>*& __cordl_internal_get__e2_5__3();

  constexpr ::System::Collections::Generic::IEnumerable_1<TFirst>* const& __cordl_internal_get_first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TFirst>*& __cordl_internal_get_first();

  constexpr ::System::Func_3<TFirst, TSecond, TResult>* const& __cordl_internal_get_resultSelector() const;

  constexpr ::System::Func_3<TFirst, TSecond, TResult>*& __cordl_internal_get_resultSelector();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSecond>* const& __cordl_internal_get_second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSecond>*& __cordl_internal_get_second();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TResult value);

  constexpr void __cordl_internal_set___3__first(::System::Collections::Generic::IEnumerable_1<TFirst>* value);

  constexpr void __cordl_internal_set___3__resultSelector(::System::Func_3<TFirst, TSecond, TResult>* value);

  constexpr void __cordl_internal_set___3__second(::System::Collections::Generic::IEnumerable_1<TSecond>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__e1_5__2(::System::Collections::Generic::IEnumerator_1<TFirst>* value);

  constexpr void __cordl_internal_set__e2_5__3(::System::Collections::Generic::IEnumerator_1<TSecond>* value);

  constexpr void __cordl_internal_set_first(::System::Collections::Generic::IEnumerable_1<TFirst>* value);

  constexpr void __cordl_internal_set_resultSelector(::System::Func_3<TFirst, TSecond, TResult>* value);

  constexpr void __cordl_internal_set_second(::System::Collections::Generic::IEnumerable_1<TSecond>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__ZipIterator_d__65_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__ZipIterator_d__65_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__ZipIterator_d__65_3(Enumerable__ZipIterator_d__65_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__ZipIterator_d__65_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__ZipIterator_d__65_3(Enumerable__ZipIterator_d__65_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16043 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TResult _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field first, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TFirst>* ___first;

  /// @brief Field <>3__first, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TFirst>* _____3__first;

  /// @brief Field second, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSecond>* ___second;

  /// @brief Field <>3__second, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSecond>* _____3__second;

  /// @brief Field resultSelector, offset: 0x48, size: 0x8, def value: None
  ::System::Func_3<TFirst, TSecond, TResult>* ___resultSelector;

  /// @brief Field <>3__resultSelector, offset: 0x50, size: 0x8, def value: None
  ::System::Func_3<TFirst, TSecond, TResult>* _____3__resultSelector;

  /// @brief Field <e1>5__2, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TFirst>* ____e1_5__2;

  /// @brief Field <e2>5__3, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSecond>* ____e2_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<DistinctIterator>d__68`1<TSource>
class CORDL_TYPE Enumerable__DistinctIterator_d__68_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource System_Collections_Generic_IEnumerator_TSource__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TSource __2__current;

  /// @brief Field <>3__comparer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__comparer, put = __cordl_internal_set___3__comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>* __3__comparer;

  /// @brief Field <>3__source, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__source;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <set>5__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__set_5__2, put = __cordl_internal_set__set_5__2)) ::System::Linq::Set_1<TSource>* _set_5__2;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer;

  /// @brief Field source, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__DistinctIterator_d__68_1<TSource>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current();

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

  constexpr TSource const& __cordl_internal_get___2__current() const;

  constexpr TSource& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get___3__comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get___3__comparer();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__source();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Linq::Set_1<TSource>* const& __cordl_internal_get__set_5__2() const;

  constexpr ::System::Linq::Set_1<TSource>*& __cordl_internal_get__set_5__2();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get_comparer();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TSource value);

  constexpr void __cordl_internal_set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__set_5__2(::System::Linq::Set_1<TSource>* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__DistinctIterator_d__68_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__DistinctIterator_d__68_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__DistinctIterator_d__68_1(Enumerable__DistinctIterator_d__68_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__DistinctIterator_d__68_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__DistinctIterator_d__68_1(Enumerable__DistinctIterator_d__68_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16044 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TSource _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TSource>* ___comparer;

  /// @brief Field <>3__comparer, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TSource>* _____3__comparer;

  /// @brief Field source, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___source;

  /// @brief Field <>3__source, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__source;

  /// @brief Field <set>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Linq::Set_1<TSource>* ____set_5__2;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<UnionIterator>d__71`1<TSource>
class CORDL_TYPE Enumerable__UnionIterator_d__71_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource System_Collections_Generic_IEnumerator_TSource__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TSource __2__current;

  /// @brief Field <>3__comparer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__comparer, put = __cordl_internal_set___3__comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>* __3__comparer;

  /// @brief Field <>3__first, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__first, put = __cordl_internal_set___3__first)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__first;

  /// @brief Field <>3__second, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___3__second, put = __cordl_internal_set___3__second)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__second;

  /// @brief Field <>7__wrap2, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <set>5__2, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__set_5__2, put = __cordl_internal_set__set_5__2)) ::System::Linq::Set_1<TSource>* _set_5__2;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer;

  /// @brief Field first, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_first, put = __cordl_internal_set_first)) ::System::Collections::Generic::IEnumerable_1<TSource>* first;

  /// @brief Field second, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_second, put = __cordl_internal_set_second)) ::System::Collections::Generic::IEnumerable_1<TSource>* second;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__UnionIterator_d__71_1<TSource>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current();

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

  constexpr TSource const& __cordl_internal_get___2__current() const;

  constexpr TSource& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get___3__comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get___3__comparer();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__first();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__second();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Linq::Set_1<TSource>* const& __cordl_internal_get__set_5__2() const;

  constexpr ::System::Linq::Set_1<TSource>*& __cordl_internal_get__set_5__2();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get_comparer();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_first();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_second();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TSource value);

  constexpr void __cordl_internal_set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value);

  constexpr void __cordl_internal_set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__set_5__2(::System::Linq::Set_1<TSource>* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value);

  constexpr void __cordl_internal_set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__UnionIterator_d__71_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__UnionIterator_d__71_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__UnionIterator_d__71_1(Enumerable__UnionIterator_d__71_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__UnionIterator_d__71_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__UnionIterator_d__71_1(Enumerable__UnionIterator_d__71_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16045 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TSource _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TSource>* ___comparer;

  /// @brief Field <>3__comparer, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TSource>* _____3__comparer;

  /// @brief Field first, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___first;

  /// @brief Field <>3__first, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__first;

  /// @brief Field second, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___second;

  /// @brief Field <>3__second, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__second;

  /// @brief Field <set>5__2, offset: 0x58, size: 0x8, def value: None
  ::System::Linq::Set_1<TSource>* ____set_5__2;

  /// @brief Field <>7__wrap2, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<IntersectIterator>d__74`1<TSource>
class CORDL_TYPE Enumerable__IntersectIterator_d__74_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource System_Collections_Generic_IEnumerator_TSource__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TSource __2__current;

  /// @brief Field <>3__comparer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__comparer, put = __cordl_internal_set___3__comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>* __3__comparer;

  /// @brief Field <>3__first, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___3__first, put = __cordl_internal_set___3__first)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__first;

  /// @brief Field <>3__second, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__second, put = __cordl_internal_set___3__second)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__second;

  /// @brief Field <>7__wrap2, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <set>5__2, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__set_5__2, put = __cordl_internal_set__set_5__2)) ::System::Linq::Set_1<TSource>* _set_5__2;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer;

  /// @brief Field first, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_first, put = __cordl_internal_set_first)) ::System::Collections::Generic::IEnumerable_1<TSource>* first;

  /// @brief Field second, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_second, put = __cordl_internal_set_second)) ::System::Collections::Generic::IEnumerable_1<TSource>* second;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__IntersectIterator_d__74_1<TSource>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current();

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

  constexpr TSource const& __cordl_internal_get___2__current() const;

  constexpr TSource& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get___3__comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get___3__comparer();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__first();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__second();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Linq::Set_1<TSource>* const& __cordl_internal_get__set_5__2() const;

  constexpr ::System::Linq::Set_1<TSource>*& __cordl_internal_get__set_5__2();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get_comparer();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_first();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_second();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TSource value);

  constexpr void __cordl_internal_set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value);

  constexpr void __cordl_internal_set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__set_5__2(::System::Linq::Set_1<TSource>* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value);

  constexpr void __cordl_internal_set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__IntersectIterator_d__74_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__IntersectIterator_d__74_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__IntersectIterator_d__74_1(Enumerable__IntersectIterator_d__74_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__IntersectIterator_d__74_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__IntersectIterator_d__74_1(Enumerable__IntersectIterator_d__74_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16046 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TSource _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TSource>* ___comparer;

  /// @brief Field <>3__comparer, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TSource>* _____3__comparer;

  /// @brief Field second, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___second;

  /// @brief Field <>3__second, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__second;

  /// @brief Field first, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___first;

  /// @brief Field <>3__first, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__first;

  /// @brief Field <set>5__2, offset: 0x58, size: 0x8, def value: None
  ::System::Linq::Set_1<TSource>* ____set_5__2;

  /// @brief Field <>7__wrap2, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<ExceptIterator>d__77`1<TSource>
class CORDL_TYPE Enumerable__ExceptIterator_d__77_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource System_Collections_Generic_IEnumerator_TSource__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TSource __2__current;

  /// @brief Field <>3__comparer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__comparer, put = __cordl_internal_set___3__comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>* __3__comparer;

  /// @brief Field <>3__first, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___3__first, put = __cordl_internal_set___3__first)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__first;

  /// @brief Field <>3__second, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__second, put = __cordl_internal_set___3__second)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__second;

  /// @brief Field <>7__wrap2, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<TSource>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <set>5__2, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__set_5__2, put = __cordl_internal_set__set_5__2)) ::System::Linq::Set_1<TSource>* _set_5__2;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer;

  /// @brief Field first, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_first, put = __cordl_internal_set_first)) ::System::Collections::Generic::IEnumerable_1<TSource>* first;

  /// @brief Field second, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_second, put = __cordl_internal_set_second)) ::System::Collections::Generic::IEnumerable_1<TSource>* second;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__ExceptIterator_d__77_1<TSource>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current();

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

  constexpr TSource const& __cordl_internal_get___2__current() const;

  constexpr TSource& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get___3__comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get___3__comparer();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__first();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__second();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Linq::Set_1<TSource>* const& __cordl_internal_get__set_5__2() const;

  constexpr ::System::Linq::Set_1<TSource>*& __cordl_internal_get__set_5__2();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get_comparer();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_first() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_first();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_second() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_second();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TSource value);

  constexpr void __cordl_internal_set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value);

  constexpr void __cordl_internal_set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__set_5__2(::System::Linq::Set_1<TSource>* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value);

  constexpr void __cordl_internal_set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__ExceptIterator_d__77_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__ExceptIterator_d__77_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__ExceptIterator_d__77_1(Enumerable__ExceptIterator_d__77_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__ExceptIterator_d__77_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__ExceptIterator_d__77_1(Enumerable__ExceptIterator_d__77_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16047 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TSource _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TSource>* ___comparer;

  /// @brief Field <>3__comparer, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TSource>* _____3__comparer;

  /// @brief Field second, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___second;

  /// @brief Field <>3__second, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__second;

  /// @brief Field first, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___first;

  /// @brief Field <>3__first, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__first;

  /// @brief Field <set>5__2, offset: 0x58, size: 0x8, def value: None
  ::System::Linq::Set_1<TSource>* ____set_5__2;

  /// @brief Field <>7__wrap2, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Linq.Buffer`1<TElement>, System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<ReverseIterator>d__79`1<TSource>
class CORDL_TYPE Enumerable__ReverseIterator_d__79_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource System_Collections_Generic_IEnumerator_TSource__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TSource __2__current;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__source;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <buffer>5__2, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__buffer_5__2, put = __cordl_internal_set__buffer_5__2)) ::System::Linq::Buffer_1<TSource> _buffer_5__2;

  /// @brief Field <i>5__3, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__ReverseIterator_d__79_1<TSource>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current();

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

  constexpr TSource const& __cordl_internal_get___2__current() const;

  constexpr TSource& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__source();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Linq::Buffer_1<TSource> const& __cordl_internal_get__buffer_5__2() const;

  constexpr ::System::Linq::Buffer_1<TSource>& __cordl_internal_get__buffer_5__2();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TSource value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__buffer_5__2(::System::Linq::Buffer_1<TSource> value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__ReverseIterator_d__79_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__ReverseIterator_d__79_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__ReverseIterator_d__79_1(Enumerable__ReverseIterator_d__79_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__ReverseIterator_d__79_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__ReverseIterator_d__79_1(Enumerable__ReverseIterator_d__79_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16048 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TSource _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__source;

  /// @brief Field <buffer>5__2, offset: 0x38, size: 0x10, def value: None
  ::System::Linq::Buffer_1<TSource> ____buffer_5__2;

  /// @brief Field <i>5__3, offset: 0x48, size: 0x4, def value: None
  int32_t ____i_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TSource>
// Is value type: false
// CS Name: System.Linq.Enumerable/<DefaultIfEmptyIterator>d__95`1<TSource>
class CORDL_TYPE Enumerable__DefaultIfEmptyIterator_d__95_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TSource__get_Current)) TSource System_Collections_Generic_IEnumerator_TSource__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TSource __2__current;

  /// @brief Field <>3__defaultValue, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__defaultValue, put = __cordl_internal_set___3__defaultValue)) TSource __3__defaultValue;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<TSource>* __3__source;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <e>5__2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__e_5__2, put = __cordl_internal_set__e_5__2)) ::System::Collections::Generic::IEnumerator_1<TSource>* _e_5__2;

  /// @brief Field defaultValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultValue, put = __cordl_internal_set_defaultValue)) TSource defaultValue;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<TSource>* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__DefaultIfEmptyIterator_d__95_1<TSource>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TSource>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TSource>* System_Collections_Generic_IEnumerable_TSource__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TSource>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TSource System_Collections_Generic_IEnumerator_TSource__get_Current();

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

  constexpr TSource const& __cordl_internal_get___2__current() const;

  constexpr TSource& __cordl_internal_get___2__current();

  constexpr TSource const& __cordl_internal_get___3__defaultValue() const;

  constexpr TSource& __cordl_internal_get___3__defaultValue();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get___3__source();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& __cordl_internal_get__e_5__2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& __cordl_internal_get__e_5__2();

  constexpr TSource const& __cordl_internal_get_defaultValue() const;

  constexpr TSource& __cordl_internal_get_defaultValue();

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TSource value);

  constexpr void __cordl_internal_set___3__defaultValue(TSource value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__e_5__2(::System::Collections::Generic::IEnumerator_1<TSource>* value);

  constexpr void __cordl_internal_set_defaultValue(TSource value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__DefaultIfEmptyIterator_d__95_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__DefaultIfEmptyIterator_d__95_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__DefaultIfEmptyIterator_d__95_1(Enumerable__DefaultIfEmptyIterator_d__95_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__DefaultIfEmptyIterator_d__95_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__DefaultIfEmptyIterator_d__95_1(Enumerable__DefaultIfEmptyIterator_d__95_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16049 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TSource _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TSource>* _____3__source;

  /// @brief Field defaultValue, offset: 0x38, size: 0x8, def value: None
  TSource ___defaultValue;

  /// @brief Field <>3__defaultValue, offset: 0x40, size: 0x8, def value: None
  TSource _____3__defaultValue;

  /// @brief Field <e>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<TSource>* ____e_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.Linq.Enumerable/<OfTypeIterator>d__97`1<TResult>
class CORDL_TYPE Enumerable__OfTypeIterator_d__97_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TResult__get_Current)) TResult System_Collections_Generic_IEnumerator_TResult__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TResult __2__current;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::IEnumerable* __3__source;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::IEnumerator* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::IEnumerable* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__OfTypeIterator_d__97_1<TResult>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TResult>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TResult>* System_Collections_Generic_IEnumerable_TResult__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TResult>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TResult System_Collections_Generic_IEnumerator_TResult__get_Current();

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

  constexpr TResult const& __cordl_internal_get___2__current() const;

  constexpr TResult& __cordl_internal_get___2__current();

  constexpr ::System::Collections::IEnumerable* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get___3__source();

  constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::IEnumerable* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TResult value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::IEnumerable* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_source(::System::Collections::IEnumerable* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__OfTypeIterator_d__97_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__OfTypeIterator_d__97_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__OfTypeIterator_d__97_1(Enumerable__OfTypeIterator_d__97_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__OfTypeIterator_d__97_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__OfTypeIterator_d__97_1(Enumerable__OfTypeIterator_d__97_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16050 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TResult _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IEnumerable* _____3__source;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IEnumerator* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.Linq.Enumerable/<CastIterator>d__99`1<TResult>
class CORDL_TYPE Enumerable__CastIterator_d__99_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TResult__get_Current)) TResult System_Collections_Generic_IEnumerator_TResult__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TResult __2__current;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::IEnumerable* __3__source;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::IEnumerator* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::IEnumerable* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__CastIterator_d__99_1<TResult>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<TResult>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TResult>* System_Collections_Generic_IEnumerable_TResult__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<TResult>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TResult System_Collections_Generic_IEnumerator_TResult__get_Current();

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

  constexpr TResult const& __cordl_internal_get___2__current() const;

  constexpr TResult& __cordl_internal_get___2__current();

  constexpr ::System::Collections::IEnumerable* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get___3__source();

  constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::IEnumerable* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TResult value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::IEnumerable* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_source(::System::Collections::IEnumerable* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__CastIterator_d__99_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__CastIterator_d__99_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__CastIterator_d__99_1(Enumerable__CastIterator_d__99_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__CastIterator_d__99_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__CastIterator_d__99_1(Enumerable__CastIterator_d__99_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16051 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TResult _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IEnumerable* _____3__source;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IEnumerator* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// Is value type: false
// CS Name: System.Linq.Enumerable/<RangeIterator>d__115
class CORDL_TYPE Enumerable__RangeIterator_d__115 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Int32__get_Current)) int32_t System_Collections_Generic_IEnumerator_System_Int32__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) int32_t __2__current;

  /// @brief Field <>3__count, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___3__count, put = __cordl_internal_set___3__count)) int32_t __3__count;

  /// @brief Field <>3__start, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___3__start, put = __cordl_internal_set___3__start)) int32_t __3__start;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <i>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Field count, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field start, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) int32_t start;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5da9fbc, size 0x60, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Enumerable__RangeIterator_d__115* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x5daa080, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Int32>.get_Current, addr 0x5daa01c, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEnumerator_System_Int32__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5daa120, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5daa024, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5daa05c, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5da9fb8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___2__current() const;

  constexpr int32_t& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___3__count() const;

  constexpr int32_t& __cordl_internal_get___3__count();

  constexpr int32_t const& __cordl_internal_get___3__start() const;

  constexpr int32_t& __cordl_internal_get___3__start();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_start() const;

  constexpr int32_t& __cordl_internal_get_start();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(int32_t value);

  constexpr void __cordl_internal_set___3__count(int32_t value);

  constexpr void __cordl_internal_set___3__start(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_start(int32_t value);

  /// @brief Method .ctor, addr 0x5da892c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable__RangeIterator_d__115();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__RangeIterator_d__115", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable__RangeIterator_d__115(Enumerable__RangeIterator_d__115&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable__RangeIterator_d__115", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable__RangeIterator_d__115(Enumerable__RangeIterator_d__115 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16052 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
  int32_t _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field start, offset: 0x1c, size: 0x4, def value: None
  int32_t ___start;

  /// @brief Field <>3__start, offset: 0x20, size: 0x4, def value: None
  int32_t _____3__start;

  /// @brief Field count, offset: 0x24, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field <>3__count, offset: 0x28, size: 0x4, def value: None
  int32_t _____3__count;

  /// @brief Field <i>5__2, offset: 0x2c, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Enumerable__RangeIterator_d__115, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Enumerable__RangeIterator_d__115, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Enumerable__RangeIterator_d__115, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Enumerable__RangeIterator_d__115, ___start) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Enumerable__RangeIterator_d__115, _____3__start) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Enumerable__RangeIterator_d__115, ___count) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Enumerable__RangeIterator_d__115, _____3__count) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Enumerable__RangeIterator_d__115, ____i_5__2) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Enumerable__RangeIterator_d__115, 0x30>, "Size mismatch!");

} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// Is value type: false
// CS Name: System.Linq.Enumerable
class CORDL_TYPE Enumerable : public ::System::Object {
public:
  // Declarations
  template <typename TSource> using Iterator_1 = ::System::Linq::Enumerable_Iterator_1<TSource>;

  template <typename TSource> using WhereArrayIterator_1 = ::System::Linq::Enumerable_WhereArrayIterator_1<TSource>;

  template <typename TSource> using WhereEnumerableIterator_1 = ::System::Linq::Enumerable_WhereEnumerableIterator_1<TSource>;

  template <typename TSource> using WhereListIterator_1 = ::System::Linq::Enumerable_WhereListIterator_1<TSource>;

  template <typename TSource, typename TResult> using WhereSelectArrayIterator_2 = ::System::Linq::Enumerable_WhereSelectArrayIterator_2<TSource, TResult>;

  template <typename TSource, typename TResult> using WhereSelectEnumerableIterator_2 = ::System::Linq::Enumerable_WhereSelectEnumerableIterator_2<TSource, TResult>;

  template <typename TSource, typename TResult> using WhereSelectListIterator_2 = ::System::Linq::Enumerable_WhereSelectListIterator_2<TSource, TResult>;

  template <typename TResult> using _CastIterator_d__99_1 = ::System::Linq::Enumerable__CastIterator_d__99_1<TResult>;

  template <typename TSource> using _ConcatIterator_d__59_1 = ::System::Linq::Enumerable__ConcatIterator_d__59_1<TSource>;

  template <typename TSource> using _DefaultIfEmptyIterator_d__95_1 = ::System::Linq::Enumerable__DefaultIfEmptyIterator_d__95_1<TSource>;

  template <typename TSource> using _DistinctIterator_d__68_1 = ::System::Linq::Enumerable__DistinctIterator_d__68_1<TSource>;

  template <typename TSource> using _ExceptIterator_d__77_1 = ::System::Linq::Enumerable__ExceptIterator_d__77_1<TSource>;

  template <typename TSource> using _IntersectIterator_d__74_1 = ::System::Linq::Enumerable__IntersectIterator_d__74_1<TSource>;

  template <typename TResult> using _OfTypeIterator_d__97_1 = ::System::Linq::Enumerable__OfTypeIterator_d__97_1<TResult>;

  using _RangeIterator_d__115 = ::System::Linq::Enumerable__RangeIterator_d__115;

  template <typename TSource> using _ReverseIterator_d__79_1 = ::System::Linq::Enumerable__ReverseIterator_d__79_1<TSource>;

  template <typename TSource, typename TResult> using _SelectManyIterator_d__17_2 = ::System::Linq::Enumerable__SelectManyIterator_d__17_2<TSource, TResult>;

  template <typename TSource> using _SkipIterator_d__31_1 = ::System::Linq::Enumerable__SkipIterator_d__31_1<TSource>;

  template <typename TSource> using _TakeIterator_d__25_1 = ::System::Linq::Enumerable__TakeIterator_d__25_1<TSource>;

  template <typename TSource> using _UnionIterator_d__71_1 = ::System::Linq::Enumerable__UnionIterator_d__71_1<TSource>;

  template <typename TFirst, typename TSecond, typename TResult> using _ZipIterator_d__65_3 = ::System::Linq::Enumerable__ZipIterator_d__65_3<TFirst, TSecond, TResult>;

  template <typename TSource> using __c__DisplayClass6_0_1 = ::System::Linq::Enumerable___c__DisplayClass6_0_1<TSource>;

  template <typename TSource, typename TMiddle, typename TResult> using __c__DisplayClass7_0_3 = ::System::Linq::Enumerable___c__DisplayClass7_0_3<TSource, TMiddle, TResult>;

  /// @brief Method Aggregate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TAccumulate>
  static inline TAccumulate Aggregate(::System::Collections::Generic::IEnumerable_1<TSource>* source, TAccumulate seed, ::System::Func_3<TAccumulate, TSource, TAccumulate>* func);

  /// @brief Method All, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline bool All(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method Any, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline bool Any(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method Any, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline bool Any(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method Average, addr 0x5da9be8, size 0x3d0, virtual false, abstract: false, final false
  static inline double_t Average(::System::Collections::Generic::IEnumerable_1<int32_t>* source);

  /// @brief Method Cast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Collections::Generic::IEnumerable_1<TResult>* Cast(::System::Collections::IEnumerable* source);

  /// @brief Method CastIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Collections::Generic::IEnumerable_1<TResult>* CastIterator(::System::Collections::IEnumerable* source);

  /// @brief Method CombinePredicates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Func_2<TSource, bool>* CombinePredicates(::System::Func_2<TSource, bool>* predicate1, ::System::Func_2<TSource, bool>* predicate2);

  /// @brief Method CombineSelectors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TMiddle, typename TResult>
  static inline ::System::Func_2<TSource, TResult>* CombineSelectors(::System::Func_2<TSource, TMiddle>* selector1, ::System::Func_2<TMiddle, TResult>* selector2);

  /// @brief Method Concat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Concat(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                               ::System::Collections::Generic::IEnumerable_1<TSource>* second);

  /// @brief Method ConcatIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* ConcatIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                       ::System::Collections::Generic::IEnumerable_1<TSource>* second);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline bool Contains(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline bool Contains(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value, ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline int32_t Count(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline int32_t Count(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method DefaultIfEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* DefaultIfEmpty(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource defaultValue);

  /// @brief Method DefaultIfEmptyIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* DefaultIfEmptyIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource defaultValue);

  /// @brief Method Distinct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Distinct(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method Distinct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Distinct(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                 ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method DistinctIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* DistinctIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                         ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method ElementAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource ElementAt(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t index);

  /// @brief Method Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Collections::Generic::IEnumerable_1<TResult>* Empty();

  /// @brief Method Except, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Except(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                               ::System::Collections::Generic::IEnumerable_1<TSource>* second);

  /// @brief Method ExceptIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* ExceptIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                       ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                                                       ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource First(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource First(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method FirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource FirstOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method FirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource FirstOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method GroupBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TKey>
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TSource>*>* GroupBy(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                                    ::System::Func_2<TSource, TKey>* keySelector);

  /// @brief Method Intersect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Intersect(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                  ::System::Collections::Generic::IEnumerable_1<TSource>* second);

  /// @brief Method IntersectIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* IntersectIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                          ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                                                          ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method Last, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource Last(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method LastOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource LastOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method LastOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource LastOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method Max, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TResult> static inline TResult Max(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TResult>* selector);

  /// @brief Method Max, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource Max(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method Max, addr 0x5da98bc, size 0x32c, virtual false, abstract: false, final false
  static inline float_t Max(::System::Collections::Generic::IEnumerable_1<float_t>* source);

  /// @brief Method Max, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline int32_t Max(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, int32_t>* selector);

  /// @brief Method Max, addr 0x5da95ac, size 0x310, virtual false, abstract: false, final false
  static inline int32_t Max(::System::Collections::Generic::IEnumerable_1<int32_t>* source);

  /// @brief Method Min, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TResult> static inline TResult Min(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TResult>* selector);

  /// @brief Method Min, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource Min(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method Min, addr 0x5da9280, size 0x32c, virtual false, abstract: false, final false
  static inline float_t Min(::System::Collections::Generic::IEnumerable_1<float_t>* source);

  /// @brief Method Min, addr 0x5da8f70, size 0x310, virtual false, abstract: false, final false
  static inline int32_t Min(::System::Collections::Generic::IEnumerable_1<int32_t>* source);

  /// @brief Method OfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Collections::Generic::IEnumerable_1<TResult>* OfType(::System::Collections::IEnumerable* source);

  /// @brief Method OfTypeIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Collections::Generic::IEnumerable_1<TResult>* OfTypeIterator(::System::Collections::IEnumerable* source);

  /// @brief Method OrderBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TKey>
  static inline ::System::Linq::IOrderedEnumerable_1<TSource>* OrderBy(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector);

  /// @brief Method OrderBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TKey>
  static inline ::System::Linq::IOrderedEnumerable_1<TSource>* OrderBy(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                       ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method OrderByDescending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TKey>
  static inline ::System::Linq::IOrderedEnumerable_1<TSource>* OrderByDescending(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector);

  /// @brief Method Range, addr 0x5da8864, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<int32_t>* Range(int32_t start, int32_t count);

  /// @brief Method RangeIterator, addr 0x5da88b0, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<int32_t>* RangeIterator(int32_t start, int32_t count);

  /// @brief Method Reverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Reverse(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method ReverseIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Collections::Generic::IEnumerable_1<TSource>* ReverseIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TResult>
  static inline ::System::Collections::Generic::IEnumerable_1<TResult>* Select(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TResult>* selector);

  /// @brief Method SelectMany, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TResult>
  static inline ::System::Collections::Generic::IEnumerable_1<TResult>* SelectMany(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                   ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* selector);

  /// @brief Method SelectManyIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TResult>
  static inline ::System::Collections::Generic::IEnumerable_1<TResult>* SelectManyIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                           ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* selector);

  /// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline bool SequenceEqual(::System::Collections::Generic::IEnumerable_1<TSource>* first, ::System::Collections::Generic::IEnumerable_1<TSource>* second);

  /// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline bool SequenceEqual(::System::Collections::Generic::IEnumerable_1<TSource>* first, ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                   ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method Single, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource Single(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method Single, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource Single(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method SingleOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource SingleOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method SingleOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline TSource SingleOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method Skip, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Skip(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count);

  /// @brief Method SkipIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Collections::Generic::IEnumerable_1<TSource>* SkipIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count);

  /// @brief Method Sum, addr 0x5da8c80, size 0x2f0, virtual false, abstract: false, final false
  static inline float_t Sum(::System::Collections::Generic::IEnumerable_1<float_t>* source);

  /// @brief Method Sum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline int32_t Sum(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, int32_t>* selector);

  /// @brief Method Sum, addr 0x5da894c, size 0x334, virtual false, abstract: false, final false
  static inline int32_t Sum(::System::Collections::Generic::IEnumerable_1<int32_t>* source);

  /// @brief Method Take, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Take(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count);

  /// @brief Method TakeIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Collections::Generic::IEnumerable_1<TSource>* TakeIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count);

  /// @brief Method ThenBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TKey>
  static inline ::System::Linq::IOrderedEnumerable_1<TSource>* ThenBy(::System::Linq::IOrderedEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::ArrayW<TSource, ::Array<TSource>*> ToArray(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method ToDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TKey, typename TElement>
  static inline ::System::Collections::Generic::Dictionary_2<TKey, TElement>* ToDictionary(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                                           ::System::Func_2<TSource, TElement>* elementSelector);

  /// @brief Method ToDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TKey, typename TElement>
  static inline ::System::Collections::Generic::Dictionary_2<TKey, TElement>* ToDictionary(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                                           ::System::Func_2<TSource, TElement>* elementSelector,
                                                                                           ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method ToDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TKey>
  static inline ::System::Collections::Generic::Dictionary_2<TKey, TSource>* ToDictionary(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector);

  /// @brief Method ToHashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Collections::Generic::HashSet_1<TSource>* ToHashSet(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method ToHashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::HashSet_1<TSource>* ToHashSet(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                              ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method ToList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource> static inline ::System::Collections::Generic::List_1<TSource>* ToList(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method Union, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Union(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                              ::System::Collections::Generic::IEnumerable_1<TSource>* second);

  /// @brief Method UnionIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* UnionIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                      ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                                                      ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Collections::Generic::IEnumerable_1<TSource>* Where(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate);

  /// @brief Method Zip, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFirst, typename TSecond, typename TResult>
  static inline ::System::Collections::Generic::IEnumerable_1<TResult>* Zip(::System::Collections::Generic::IEnumerable_1<TFirst>* first,
                                                                            ::System::Collections::Generic::IEnumerable_1<TSecond>* second, ::System::Func_3<TFirst, TSecond, TResult>* resultSelector);

  /// @brief Method ZipIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFirst, typename TSecond, typename TResult>
  static inline ::System::Collections::Generic::IEnumerable_1<TResult>*
  ZipIterator(::System::Collections::Generic::IEnumerable_1<TFirst>* first, ::System::Collections::Generic::IEnumerable_1<TSecond>* second, ::System::Func_3<TFirst, TSecond, TResult>* resultSelector);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enumerable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enumerable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enumerable(Enumerable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enumerable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enumerable(Enumerable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16053 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Enumerable, 0x10>, "Size mismatch!");

} // namespace System::Linq
NEED_NO_BOX(::System::Linq::Enumerable);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Enumerable*, "System.Linq", "Enumerable");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable_Iterator_1, "System.Linq", "Enumerable/Iterator`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable_WhereArrayIterator_1, "System.Linq", "Enumerable/WhereArrayIterator`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable_WhereEnumerableIterator_1, "System.Linq", "Enumerable/WhereEnumerableIterator`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable_WhereListIterator_1, "System.Linq", "Enumerable/WhereListIterator`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable_WhereSelectArrayIterator_2, "System.Linq", "Enumerable/WhereSelectArrayIterator`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable_WhereSelectEnumerableIterator_2, "System.Linq", "Enumerable/WhereSelectEnumerableIterator`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable_WhereSelectListIterator_2, "System.Linq", "Enumerable/WhereSelectListIterator`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__CastIterator_d__99_1, "System.Linq", "Enumerable/<CastIterator>d__99`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__ConcatIterator_d__59_1, "System.Linq", "Enumerable/<ConcatIterator>d__59`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__DefaultIfEmptyIterator_d__95_1, "System.Linq", "Enumerable/<DefaultIfEmptyIterator>d__95`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__DistinctIterator_d__68_1, "System.Linq", "Enumerable/<DistinctIterator>d__68`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__ExceptIterator_d__77_1, "System.Linq", "Enumerable/<ExceptIterator>d__77`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__IntersectIterator_d__74_1, "System.Linq", "Enumerable/<IntersectIterator>d__74`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__OfTypeIterator_d__97_1, "System.Linq", "Enumerable/<OfTypeIterator>d__97`1");
NEED_NO_BOX(::System::Linq::Enumerable__RangeIterator_d__115);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Enumerable__RangeIterator_d__115*, "System.Linq", "Enumerable/<RangeIterator>d__115");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__ReverseIterator_d__79_1, "System.Linq", "Enumerable/<ReverseIterator>d__79`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__SelectManyIterator_d__17_2, "System.Linq", "Enumerable/<SelectManyIterator>d__17`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__SkipIterator_d__31_1, "System.Linq", "Enumerable/<SkipIterator>d__31`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__TakeIterator_d__25_1, "System.Linq", "Enumerable/<TakeIterator>d__25`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__UnionIterator_d__71_1, "System.Linq", "Enumerable/<UnionIterator>d__71`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable__ZipIterator_d__65_3, "System.Linq", "Enumerable/<ZipIterator>d__65`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable___c__DisplayClass6_0_1, "System.Linq", "Enumerable/<>c__DisplayClass6_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable___c__DisplayClass7_0_3, "System.Linq", "Enumerable/<>c__DisplayClass7_0`3");
