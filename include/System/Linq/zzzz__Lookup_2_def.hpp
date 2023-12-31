#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Lookup_2)
namespace GlobalNamespace {
template <typename TKey, typename TElement> class __Lookup_2__Grouping___GetEnumerator_d__7;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
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
template <typename T> class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq {
template <typename TKey, typename TElement> class IGrouping_2;
}
namespace System::Linq {
template <typename TKey, typename TElement> class __Lookup_2__Grouping;
}
namespace System::Linq {
template <typename TKey, typename TElement> class __Lookup_2___GetEnumerator_d__12;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TKey, typename TElement> class __Lookup_2__Grouping___GetEnumerator_d__7;
}
namespace System::Linq {
template <typename TKey, typename TElement> class Lookup_2;
}
namespace System::Linq {
template <typename TKey, typename TElement> class __Lookup_2__Grouping;
}
namespace System::Linq {
template <typename TKey, typename TElement> class __Lookup_2___GetEnumerator_d__12;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7);
MARK_GEN_REF_PTR_T(::System::Linq::Lookup_2);
MARK_GEN_REF_PTR_T(::System::Linq::__Lookup_2__Grouping);
MARK_GEN_REF_PTR_T(::System::Linq::__Lookup_2___GetEnumerator_d__12);
// Type: ::<GetEnumerator>d__7
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14283))
// CS Name: ::Lookup`2::Grouping::<GetEnumerator>d__7<TKey,TElement>*
class CORDL_TYPE __Lookup_2__Grouping___GetEnumerator_d__7 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current)) TElement __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::System::Linq::__Lookup_2__Grouping<TKey, TElement>* __4__this;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __get__i_5__2, put = __set__i_5__2)) int32_t _i_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_TElement__get_Current)) TElement System_Collections_Generic_IEnumerator_TElement__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TElement>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TElement>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TElement>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TElement>* i___System__Collections__Generic__IEnumerator_1_TElement_() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr TElement& __get___2__current();

  constexpr TElement const& __get___2__current() const;

  constexpr void __set___2__current(TElement value);

  constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const& __get___4__this() const;

  constexpr void __set___4__this(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value);

  constexpr int32_t& __get__i_5__2();

  constexpr int32_t const& __get__i_5__2() const;

  constexpr void __set__i_5__2(int32_t value);

  static inline ::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<TElement>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TElement System_Collections_Generic_IEnumerator_TElement__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__Lookup_2__Grouping___GetEnumerator_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Lookup_2__Grouping___GetEnumerator_d__7(__Lookup_2__Grouping___GetEnumerator_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Lookup_2__Grouping___GetEnumerator_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Lookup_2__Grouping___GetEnumerator_d__7(__Lookup_2__Grouping___GetEnumerator_d__7 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Lookup_2__Grouping___GetEnumerator_d__7();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  TElement _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::__Lookup_2__Grouping<TKey, TElement>* _____4__this;

  /// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::Grouping
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14284))
// CS Name: ::Lookup`2::Grouping<TKey,TElement>*
class CORDL_TYPE __Lookup_2__Grouping : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__7 = ::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __get_key, put = __set_key)) TKey key;

  /// @brief Field hashCode, offset 0x18, size 0x4
  __declspec(property(get = __get_hashCode, put = __set_hashCode)) int32_t hashCode;

  /// @brief Field elements, offset 0x20, size 0x8
  __declspec(property(get = __get_elements, put = __set_elements))::ArrayW<TElement, ::Array<TElement>*> elements;

  /// @brief Field count, offset 0x28, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Field hashNext, offset 0x30, size 0x8
  __declspec(property(get = __get_hashNext, put = __set_hashNext))::System::Linq::__Lookup_2__Grouping<TKey, TElement>* hashNext;

  /// @brief Field next, offset 0x38, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::System::Linq::__Lookup_2__Grouping<TKey, TElement>* next;

  __declspec(property(get = get_Key)) TKey Key;

  __declspec(property(get = System_Collections_Generic_ICollection_TElement__get_Count)) int32_t System_Collections_Generic_ICollection_TElement__Count;

  __declspec(property(get = System_Collections_Generic_ICollection_TElement__get_IsReadOnly)) bool System_Collections_Generic_ICollection_TElement__IsReadOnly;

  __declspec(property(get = System_Collections_Generic_IList_TElement__get_Item, put = System_Collections_Generic_IList_TElement__set_Item)) TElement System_Collections_Generic_IList_TElement__Item[];

  /// @brief Convert operator to "::System::Linq::IGrouping_2<TKey,TElement>"
  constexpr operator ::System::Linq::IGrouping_2<TKey, TElement>*() noexcept;

  /// @brief Convert to "::System::Linq::IGrouping_2<TKey,TElement>"
  constexpr ::System::Linq::IGrouping_2<TKey, TElement>* i___System__Linq__IGrouping_2_TKey_TElement_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<TElement>"
  constexpr operator ::System::Collections::Generic::IList_1<TElement>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<TElement>"
  constexpr ::System::Collections::Generic::IList_1<TElement>* i___System__Collections__Generic__IList_1_TElement_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TElement>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TElement>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TElement>"
  constexpr ::System::Collections::Generic::ICollection_1<TElement>* i___System__Collections__Generic__ICollection_1_TElement_() noexcept;

  constexpr TKey& __get_key();

  constexpr TKey const& __get_key() const;

  constexpr void __set_key(TKey value);

  constexpr int32_t& __get_hashCode();

  constexpr int32_t const& __get_hashCode() const;

  constexpr void __set_hashCode(int32_t value);

  constexpr ::ArrayW<TElement, ::Array<TElement>*>& __get_elements();

  constexpr ::ArrayW<TElement, ::Array<TElement>*> const& __get_elements() const;

  constexpr void __set_elements(::ArrayW<TElement, ::Array<TElement>*> value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& __get_hashNext();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const& __get_hashNext() const;

  constexpr void __set_hashNext(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value);

  constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const& __get_next() const;

  constexpr void __set_next(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(TElement element);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TElement>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TKey get_Key();

  /// @brief Method System.Collections.Generic.ICollection<TElement>.get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_ICollection_TElement__get_Count();

  /// @brief Method System.Collections.Generic.ICollection<TElement>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TElement__get_IsReadOnly();

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

  static inline ::System::Linq::__Lookup_2__Grouping<TKey, TElement>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Lookup_2__Grouping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Lookup_2__Grouping(__Lookup_2__Grouping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Lookup_2__Grouping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Lookup_2__Grouping(__Lookup_2__Grouping const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Lookup_2__Grouping();

public:
  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  TKey ___key;

  /// @brief Field hashCode, offset: 0x18, size: 0x4, def value: None
  int32_t ___hashCode;

  /// @brief Field elements, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<TElement, ::Array<TElement>*> ___elements;

  /// @brief Field count, offset: 0x28, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field hashNext, offset: 0x30, size: 0x8, def value: None
  ::System::Linq::__Lookup_2__Grouping<TKey, TElement>* ___hashNext;

  /// @brief Field next, offset: 0x38, size: 0x8, def value: None
  ::System::Linq::__Lookup_2__Grouping<TKey, TElement>* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Type: ::<GetEnumerator>d__12
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14285))
// CS Name: ::Lookup`2::<GetEnumerator>d__12<TKey,TElement>*
class CORDL_TYPE __Lookup_2___GetEnumerator_d__12 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Linq::IGrouping_2<TKey, TElement>* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::System::Linq::Lookup_2<TKey, TElement>* __4__this;

  /// @brief Field <g>5__2, offset 0x28, size 0x8
  __declspec(property(get = __get__g_5__2, put = __set__g_5__2))::System::Linq::__Lookup_2__Grouping<TKey, TElement>* _g_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___get_Current))::System::Linq::IGrouping_2<
      TKey, TElement>* System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
  i___System__Collections__Generic__IEnumerator_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Linq::IGrouping_2<TKey, TElement>*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::IGrouping_2<TKey, TElement>*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Linq::IGrouping_2<TKey, TElement>* value);

  constexpr ::System::Linq::Lookup_2<TKey, TElement>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Lookup_2<TKey, TElement>*> const& __get___4__this() const;

  constexpr void __set___4__this(::System::Linq::Lookup_2<TKey, TElement>* value);

  constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& __get__g_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const& __get__g_5__2() const;

  constexpr void __set__g_5__2(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value);

  static inline ::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Linq::IGrouping_2<TKey, TElement>* System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__Lookup_2___GetEnumerator_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Lookup_2___GetEnumerator_d__12(__Lookup_2___GetEnumerator_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Lookup_2___GetEnumerator_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Lookup_2___GetEnumerator_d__12(__Lookup_2___GetEnumerator_d__12 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Lookup_2___GetEnumerator_d__12();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::IGrouping_2<TKey, TElement>* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Lookup_2<TKey, TElement>* _____4__this;

  /// @brief Field <g>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::__Lookup_2__Grouping<TKey, TElement>* ____g_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Type: System.Linq::Lookup`2
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14286))
// CS Name: ::System.Linq::Lookup`2<TKey,TElement>*
class CORDL_TYPE Lookup_2 : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__12 = ::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>;

  using Grouping = ::System::Linq::__Lookup_2__Grouping<TKey, TElement>;

  /// @brief Field comparer, offset 0x10, size 0x8
  __declspec(property(get = __get_comparer, put = __set_comparer))::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer;

  /// @brief Field groupings, offset 0x18, size 0x8
  __declspec(property(get = __get_groupings,
                      put = __set_groupings))::ArrayW<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*, ::Array<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>*> groupings;

  /// @brief Field lastGrouping, offset 0x20, size 0x8
  __declspec(property(get = __get_lastGrouping, put = __set_lastGrouping))::System::Linq::__Lookup_2__Grouping<TKey, TElement>* lastGrouping;

  /// @brief Field count, offset 0x28, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
  i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const& __get_comparer() const;

  constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  constexpr ::ArrayW<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*, ::Array<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>*>& __get_groupings();

  constexpr ::ArrayW<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*, ::Array<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>*> const& __get_groupings() const;

  constexpr void __set_groupings(::ArrayW<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*, ::Array<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>*> value);

  constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& __get_lastGrouping();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const& __get_lastGrouping() const;

  constexpr void __set_lastGrouping(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource>
  static inline ::System::Linq::Lookup_2<TKey, TElement>* Create(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                 ::System::Func_2<TSource, TElement>* elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::System::Linq::Lookup_2<TKey, TElement>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method InternalGetHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t InternalGetHashCode(TKey key);

  /// @brief Method GetGrouping, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Linq::__Lookup_2__Grouping<TKey, TElement>* GetGrouping(TKey key, bool create);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize();

  // Ctor Parameters [CppParam { name: "", ty: "Lookup_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lookup_2(Lookup_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lookup_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lookup_2(Lookup_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lookup_2();

public:
  /// @brief Field comparer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TKey>* ___comparer;

  /// @brief Field groupings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*, ::Array<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>*> ___groupings;

  /// @brief Field lastGrouping, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::__Lookup_2__Grouping<TKey, TElement>* ___lastGrouping;

  /// @brief Field count, offset: 0x28, size: 0x4, def value: None
  int32_t ___count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7, "System.Linq", "Lookup`2/Grouping/<GetEnumerator>d__7");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Lookup_2, "System.Linq", "Lookup`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::__Lookup_2__Grouping, "System.Linq", "Lookup`2/Grouping");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::__Lookup_2___GetEnumerator_d__12, "System.Linq", "Lookup`2/<GetEnumerator>d__12");
