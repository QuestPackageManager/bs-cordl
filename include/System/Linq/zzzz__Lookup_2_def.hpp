#pragma once
// IWYU pragma private; include "System/Linq/Lookup_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Lookup_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq {
template <typename TKey, typename TElement> class Grouping_Lookup_2__GetEnumerator_d__7;
}
namespace System::Linq {
template <typename TKey, typename TElement> class IGrouping_2;
}
namespace System::Linq {
template <typename TKey, typename TElement> class Lookup_2_Grouping;
}
namespace System::Linq {
template <typename TKey, typename TElement> class Lookup_2__GetEnumerator_d__12;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq {
template <typename TKey, typename TElement> class Grouping_Lookup_2__GetEnumerator_d__7;
}
namespace System::Linq {
template <typename TKey, typename TElement> class Lookup_2;
}
namespace System::Linq {
template <typename TKey, typename TElement> class Lookup_2_Grouping;
}
namespace System::Linq {
template <typename TKey, typename TElement> class Lookup_2__GetEnumerator_d__12;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7);
MARK_GEN_REF_PTR_T(::System::Linq::Lookup_2);
MARK_GEN_REF_PTR_T(::System::Linq::Lookup_2_Grouping);
MARK_GEN_REF_PTR_T(::System::Linq::Lookup_2__GetEnumerator_d__12);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace System::Linq {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// CS Name: System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7<TKey,TElement>
class CORDL_TYPE Grouping_Lookup_2__GetEnumerator_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_TElement__get_Current)) TElement System_Collections_Generic_IEnumerator_TElement__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) TElement __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Linq::Lookup_2_Grouping<TKey, TElement>* __4__this;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TElement>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TElement>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TElement System_Collections_Generic_IEnumerator_TElement__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr TElement const& __cordl_internal_get___2__current() const;

  constexpr TElement& __cordl_internal_get___2__current();

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(TElement value);

  constexpr void __cordl_internal_set___4__this(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TElement>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TElement>* i___System__Collections__Generic__IEnumerator_1_TElement_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Grouping_Lookup_2__GetEnumerator_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Grouping_Lookup_2__GetEnumerator_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Grouping_Lookup_2__GetEnumerator_d__7(Grouping_Lookup_2__GetEnumerator_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Grouping_Lookup_2__GetEnumerator_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Grouping_Lookup_2__GetEnumerator_d__7(Grouping_Lookup_2__GetEnumerator_d__7 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13593 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TElement _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Lookup_2_Grouping<TKey, TElement>* _____4__this;

  /// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IList`1<T>, System.Collections.IEnumerable,
// System.Linq.IGrouping`2<TKey, TElement>, System.Object
namespace System::Linq {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// CS Name: System.Linq.Lookup`2/Grouping<TKey,TElement>
class CORDL_TYPE Lookup_2_Grouping : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__7 = ::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>;

  __declspec(property(get = get_Key)) TKey Key;

  __declspec(property(get = System_Collections_Generic_ICollection_TElement__get_Count)) int32_t System_Collections_Generic_ICollection_TElement__Count;

  __declspec(property(get = System_Collections_Generic_ICollection_TElement__get_IsReadOnly)) bool System_Collections_Generic_ICollection_TElement__IsReadOnly;

  __declspec(property(get = System_Collections_Generic_IList_TElement__get_Item, put = System_Collections_Generic_IList_TElement__set_Item)) TElement System_Collections_Generic_IList_TElement__Item[];

  /// @brief Field count, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field elements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_elements, put = __cordl_internal_set_elements)) ::ArrayW<TElement, ::Array<TElement>*> elements;

  /// @brief Field hashCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCode, put = __cordl_internal_set_hashCode)) int32_t hashCode;

  /// @brief Field hashNext, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_hashNext, put = __cordl_internal_set_hashNext)) ::System::Linq::Lookup_2_Grouping<TKey, TElement>* hashNext;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) TKey key;

  /// @brief Field next, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Linq::Lookup_2_Grouping<TKey, TElement>* next;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TElement>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TElement>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<TElement>"
  constexpr operator ::System::Collections::Generic::IList_1<TElement>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Linq::IGrouping_2<TKey,TElement>"
  constexpr operator ::System::Linq::IGrouping_2<TKey, TElement>*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(TElement element);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TElement>* GetEnumerator();

  static inline ::System::Linq::Lookup_2_Grouping<TKey, TElement>* New_ctor();

  /// @brief Method System.Collections.Generic.ICollection<TElement>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TElement__Add(TElement item);

  /// @brief Method System.Collections.Generic.ICollection<TElement>.Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TElement__Clear();

  /// @brief Method System.Collections.Generic.ICollection<TElement>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TElement__Contains(TElement item);

  /// @brief Method System.Collections.Generic.ICollection<TElement>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TElement__CopyTo(::ArrayW<TElement, ::Array<TElement>*> array, int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<TElement>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TElement__Remove(TElement item);

  /// @brief Method System.Collections.Generic.ICollection<TElement>.get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_ICollection_TElement__get_Count();

  /// @brief Method System.Collections.Generic.ICollection<TElement>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TElement__get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IList<TElement>.IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IList_TElement__IndexOf(TElement item);

  /// @brief Method System.Collections.Generic.IList<TElement>.Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_TElement__Insert(int32_t index, TElement item);

  /// @brief Method System.Collections.Generic.IList<TElement>.RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_TElement__RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.IList<TElement>.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TElement System_Collections_Generic_IList_TElement__get_Item(int32_t index);

  /// @brief Method System.Collections.Generic.IList<TElement>.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_TElement__set_Item(int32_t index, TElement value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::ArrayW<TElement, ::Array<TElement>*> const& __cordl_internal_get_elements() const;

  constexpr ::ArrayW<TElement, ::Array<TElement>*>& __cordl_internal_get_elements();

  constexpr int32_t const& __cordl_internal_get_hashCode() const;

  constexpr int32_t& __cordl_internal_get_hashCode();

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& __cordl_internal_get_hashNext() const;

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& __cordl_internal_get_hashNext();

  constexpr TKey const& __cordl_internal_get_key() const;

  constexpr TKey& __cordl_internal_get_key();

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& __cordl_internal_get_next() const;

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& __cordl_internal_get_next();

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_elements(::ArrayW<TElement, ::Array<TElement>*> value);

  constexpr void __cordl_internal_set_hashCode(int32_t value);

  constexpr void __cordl_internal_set_hashNext(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value);

  constexpr void __cordl_internal_set_key(TKey value);

  constexpr void __cordl_internal_set_next(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TKey get_Key();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TElement>"
  constexpr ::System::Collections::Generic::ICollection_1<TElement>* i___System__Collections__Generic__ICollection_1_TElement_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<TElement>"
  constexpr ::System::Collections::Generic::IList_1<TElement>* i___System__Collections__Generic__IList_1_TElement_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Linq::IGrouping_2<TKey,TElement>"
  constexpr ::System::Linq::IGrouping_2<TKey, TElement>* i___System__Linq__IGrouping_2_TKey_TElement_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lookup_2_Grouping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lookup_2_Grouping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lookup_2_Grouping(Lookup_2_Grouping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lookup_2_Grouping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lookup_2_Grouping(Lookup_2_Grouping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13594 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  TKey ___key;

  /// @brief Field hashCode, offset: 0x18, size: 0x4, def value: None
  int32_t ___hashCode;

  /// @brief Field elements, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<TElement, ::Array<TElement>*> ___elements;

  /// @brief Field count, offset: 0x28, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field hashNext, offset: 0x30, size: 0x8, def value: None
  ::System::Linq::Lookup_2_Grouping<TKey, TElement>* ___hashNext;

  /// @brief Field next, offset: 0x38, size: 0x8, def value: None
  ::System::Linq::Lookup_2_Grouping<TKey, TElement>* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace System::Linq {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// CS Name: System.Linq.Lookup`2/<GetEnumerator>d__12<TKey,TElement>
class CORDL_TYPE Lookup_2__GetEnumerator_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___get_Current)) ::System::Linq::IGrouping_2<TKey, TElement>*
      System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Linq::IGrouping_2<TKey, TElement>* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Linq::Lookup_2<TKey, TElement>* __4__this;

  /// @brief Field <g>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__g_5__2, put = __cordl_internal_set__g_5__2)) ::System::Linq::Lookup_2_Grouping<TKey, TElement>* _g_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Linq::IGrouping_2<TKey, TElement>* System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Linq::IGrouping_2<TKey, TElement>* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Linq::IGrouping_2<TKey, TElement>*& __cordl_internal_get___2__current();

  constexpr ::System::Linq::Lookup_2<TKey, TElement>* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Linq::Lookup_2<TKey, TElement>*& __cordl_internal_get___4__this();

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& __cordl_internal_get__g_5__2() const;

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& __cordl_internal_get__g_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Linq::IGrouping_2<TKey, TElement>* value);

  constexpr void __cordl_internal_set___4__this(::System::Linq::Lookup_2<TKey, TElement>* value);

  constexpr void __cordl_internal_set__g_5__2(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
  i___System__Collections__Generic__IEnumerator_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lookup_2__GetEnumerator_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lookup_2__GetEnumerator_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lookup_2__GetEnumerator_d__12(Lookup_2__GetEnumerator_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lookup_2__GetEnumerator_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lookup_2__GetEnumerator_d__12(Lookup_2__GetEnumerator_d__12 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13595 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::IGrouping_2<TKey, TElement>* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Lookup_2<TKey, TElement>* _____4__this;

  /// @brief Field <g>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::Lookup_2_Grouping<TKey, TElement>* ____g_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace System::Linq {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// CS Name: System.Linq.Lookup`2<TKey,TElement>
class CORDL_TYPE Lookup_2 : public ::System::Object {
public:
  // Declarations
  using Grouping = ::System::Linq::Lookup_2_Grouping<TKey, TElement>;

  using _GetEnumerator_d__12 = ::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>;

  /// @brief Field comparer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer;

  /// @brief Field count, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field groupings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_groupings,
                      put = __cordl_internal_set_groupings)) ::ArrayW<::System::Linq::Lookup_2_Grouping<TKey, TElement>*, ::Array<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>*>
      groupings;

  /// @brief Field lastGrouping, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lastGrouping, put = __cordl_internal_set_lastGrouping)) ::System::Linq::Lookup_2_Grouping<TKey, TElement>* lastGrouping;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Linq::Lookup_2<TKey, TElement>* Create(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                 ::System::Func_2<TSource, TElement>* elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>* GetEnumerator();

  /// @brief Method GetGrouping, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Linq::Lookup_2_Grouping<TKey, TElement>* GetGrouping(TKey key, bool create);

  /// @brief Method InternalGetHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t InternalGetHashCode(TKey key);

  static inline ::System::Linq::Lookup_2<TKey, TElement>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::ArrayW<::System::Linq::Lookup_2_Grouping<TKey, TElement>*, ::Array<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>*> const& __cordl_internal_get_groupings() const;

  constexpr ::ArrayW<::System::Linq::Lookup_2_Grouping<TKey, TElement>*, ::Array<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>*>& __cordl_internal_get_groupings();

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& __cordl_internal_get_lastGrouping() const;

  constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& __cordl_internal_get_lastGrouping();

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_groupings(::ArrayW<::System::Linq::Lookup_2_Grouping<TKey, TElement>*, ::Array<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>*> value);

  constexpr void __cordl_internal_set_lastGrouping(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
  i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lookup_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lookup_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lookup_2(Lookup_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lookup_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lookup_2(Lookup_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13596 };

  /// @brief Field comparer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TKey>* ___comparer;

  /// @brief Field groupings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Linq::Lookup_2_Grouping<TKey, TElement>*, ::Array<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>*> ___groupings;

  /// @brief Field lastGrouping, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Lookup_2_Grouping<TKey, TElement>* ___lastGrouping;

  /// @brief Field count, offset: 0x28, size: 0x4, def value: None
  int32_t ___count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7, "System.Linq", "Lookup`2/Grouping/<GetEnumerator>d__7");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Lookup_2, "System.Linq", "Lookup`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Lookup_2_Grouping, "System.Linq", "Lookup`2/Grouping");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Lookup_2__GetEnumerator_d__12, "System.Linq", "Lookup`2/<GetEnumerator>d__12");
