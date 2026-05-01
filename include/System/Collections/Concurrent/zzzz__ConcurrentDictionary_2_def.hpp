#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/ConcurrentDictionary_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConcurrentDictionary_2)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2_DictionaryEnumerator;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2_Node;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2_Tables;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2__GetEnumerator_d__35;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
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
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Array;
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
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2_DictionaryEnumerator;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2_Node;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2_Tables;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2__GetEnumerator_d__35;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::ConcurrentDictionary_2);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::ConcurrentDictionary_2_Node);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::ConcurrentDictionary_2_Tables);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35);
// Dependencies System.Object
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue>
class CORDL_TYPE ConcurrentDictionary_2_Tables : public ::System::Object {
public:
  // Declarations
  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets, put = __cordl_internal_set__buckets)) ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*,
                                                                                                          ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*>
      _buckets;

  /// @brief Field _countPerLock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__countPerLock, put = __cordl_internal_set__countPerLock)) ::ArrayW<int32_t, ::Array<int32_t>*> _countPerLock;

  /// @brief Field _locks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__locks, put = __cordl_internal_set__locks)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _locks;

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>*
  New_ctor(::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*> buckets,
           ::ArrayW<::System::Object*, ::Array<::System::Object*>*> locks, ::ArrayW<int32_t, ::Array<int32_t>*> countPerLock);

  constexpr ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*> const&
  __cordl_internal_get__buckets() const;

  constexpr ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*>&
  __cordl_internal_get__buckets();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__countPerLock() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__countPerLock();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__locks() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__locks();

  constexpr void __cordl_internal_set__buckets(
      ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*> value);

  constexpr void __cordl_internal_set__countPerLock(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__locks(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void
  _ctor(::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*> buckets,
        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> locks, ::ArrayW<int32_t, ::Array<int32_t>*> countPerLock);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentDictionary_2_Tables();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2_Tables", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentDictionary_2_Tables(ConcurrentDictionary_2_Tables&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2_Tables", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentDictionary_2_Tables(ConcurrentDictionary_2_Tables const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3740 };

  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*> ____buckets;

  /// @brief Field _locks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____locks;

  /// @brief Field _countPerLock, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____countPerLock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Dependencies System.Object
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>
class CORDL_TYPE ConcurrentDictionary_2_Node : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hashcode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__hashcode, put = __cordl_internal_set__hashcode)) int32_t _hashcode;

  /// @brief Field _key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) TKey _key;

  /// @brief Field _next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next)) ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* _next;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) TValue _value;

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* New_ctor(TKey key, TValue value, int32_t hashcode,
                                                                                                       ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* next);

  constexpr int32_t const& __cordl_internal_get__hashcode() const;

  constexpr int32_t& __cordl_internal_get__hashcode();

  constexpr TKey const& __cordl_internal_get__key() const;

  constexpr TKey& __cordl_internal_get__key();

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* const& __cordl_internal_get__next() const;

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*& __cordl_internal_get__next();

  constexpr TValue const& __cordl_internal_get__value() const;

  constexpr TValue& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__hashcode(int32_t value);

  constexpr void __cordl_internal_set__key(TKey value);

  constexpr void __cordl_internal_set__next(::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* value);

  constexpr void __cordl_internal_set__value(TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKey key, TValue value, int32_t hashcode, ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* next);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentDictionary_2_Node();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2_Node", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentDictionary_2_Node(ConcurrentDictionary_2_Node&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2_Node", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentDictionary_2_Node(ConcurrentDictionary_2_Node const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3741 };

  /// @brief Field _key, offset: 0x10, size: 0x8, def value: None
  TKey ____key;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  TValue ____value;

  /// @brief Field _next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* ____next;

  /// @brief Field _hashcode, offset: 0x28, size: 0x4, def value: None
  int32_t ____hashcode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Dependencies System.Object
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2/DictionaryEnumerator<TKey,TValue>
class CORDL_TYPE ConcurrentDictionary_2_DictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field _enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__enumerator,
                      put = __cordl_internal_set__enumerator)) ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _enumerator;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*
  New_ctor(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* const& __cordl_internal_get__enumerator() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*& __cordl_internal_get__enumerator();

  constexpr void __cordl_internal_set__enumerator(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentDictionary_2_DictionaryEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2_DictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentDictionary_2_DictionaryEnumerator(ConcurrentDictionary_2_DictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2_DictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentDictionary_2_DictionaryEnumerator(ConcurrentDictionary_2_DictionaryEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3742 };

  /// @brief Field _enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* ____enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__35<TKey,TValue>
class CORDL_TYPE ConcurrentDictionary_2__GetEnumerator_d__35 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current)) ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>
      System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* __4__this;

  /// @brief Field <buckets>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets_5__2,
                      put = __cordl_internal_set__buckets_5__2)) ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*,
                                                                          ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*>
      _buckets_5__2;

  /// @brief Field <current>5__4, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__current_5__4, put = __cordl_internal_set__current_5__4)) ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* _current_5__4;

  /// @brief Field <i>5__3, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*& __cordl_internal_get___4__this();

  constexpr ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*> const&
  __cordl_internal_get__buckets_5__2() const;

  constexpr ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*>&
  __cordl_internal_get__buckets_5__2();

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* const& __cordl_internal_get__current_5__4() const;

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*& __cordl_internal_get__current_5__4();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> value);

  constexpr void __cordl_internal_set___4__this(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__buckets_5__2(
      ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*> value);

  constexpr void __cordl_internal_set__current_5__4(::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentDictionary_2__GetEnumerator_d__35();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2__GetEnumerator_d__35", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentDictionary_2__GetEnumerator_d__35(ConcurrentDictionary_2__GetEnumerator_d__35&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2__GetEnumerator_d__35", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentDictionary_2__GetEnumerator_d__35(ConcurrentDictionary_2__GetEnumerator_d__35 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3743 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* _____4__this;

  /// @brief Field <buckets>5__2, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>*> ____buckets_5__2;

  /// @brief Field <i>5__3, offset: 0x38, size: 0x4, def value: None
  int32_t ____i_5__3;

  /// @brief Field <current>5__4, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* ____current_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Dependencies System.Object
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue>
class CORDL_TYPE ConcurrentDictionary_2 : public ::System::Object {
public:
  // Declarations
  using DictionaryEnumerator = ::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>;

  using Node = ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>;

  using Tables = ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>;

  using _GetEnumerator_d__35 = ::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  __declspec(property(get = get_Keys)) ::System::Collections::Generic::ICollection_1<TKey>* Keys;

  __declspec(property(get = System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly)) bool
      System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___IsReadOnly;

  __declspec(property(
      get =
          System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys)) ::System::Collections::Generic::IEnumerable_1<TKey>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Keys;

  __declspec(property(get = System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values)) ::System::Collections::Generic::IEnumerable_1<TValue>*
      System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Values;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_IsReadOnly)) bool System_Collections_IDictionary_IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item)) ::System::Object* System_Collections_IDictionary_Item[];

  __declspec(property(get = System_Collections_IDictionary_get_Keys)) ::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values)) ::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = get_Values)) ::System::Collections::Generic::ICollection_1<TValue>* Values;

  /// @brief Field _budget, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__budget, put = __cordl_internal_set__budget)) int32_t _budget;

  /// @brief Field _comparer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>* _comparer;

  /// @brief Field _growLockArray, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__growLockArray, put = __cordl_internal_set__growLockArray)) bool _growLockArray;

  /// @brief Field _serializationArray, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__serializationArray,
      put = __cordl_internal_set__serializationArray)) ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>
      _serializationArray;

  /// @brief Field _serializationCapacity, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__serializationCapacity, put = __cordl_internal_set__serializationCapacity)) int32_t _serializationCapacity;

  /// @brief Field _serializationConcurrencyLevel, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__serializationConcurrencyLevel, put = __cordl_internal_set__serializationConcurrencyLevel)) int32_t _serializationConcurrencyLevel;

  /// @brief Field _tables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tables, put = __cordl_internal_set__tables)) ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>* _tables;

  /// @brief Field s_isValueWriteAtomic, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_isValueWriteAtomic, put = setStaticF_s_isValueWriteAtomic)) bool s_isValueWriteAtomic;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AcquireAllLocks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AcquireAllLocks(::ByRef<int32_t> locksAcquired);

  /// @brief Method AcquireLocks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AcquireLocks(int32_t fromInclusive, int32_t toExclusive, ::ByRef<int32_t> locksAcquired);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ContainsKey(TKey key);

  /// @brief Method CopyToEntries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyToEntries(::ArrayW<::System::Collections::DictionaryEntry, ::Array<::System::Collections::DictionaryEntry>*> array, int32_t index);

  /// @brief Method CopyToObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyToObjects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> array, int32_t index);

  /// @brief Method CopyToPairs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyToPairs(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t index);

  /// @brief Method GetBucket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t GetBucket(int32_t hashcode, int32_t bucketCount);

  /// @brief Method GetBucketAndLockNo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void GetBucketAndLockNo(int32_t hashcode, ::ByRef<int32_t> bucketNo, ::ByRef<int32_t> lockNo, int32_t bucketCount, int32_t lockCount);

  /// @brief Method GetCountInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetCountInternal();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator();

  /// @brief Method GetKeys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<TKey>* GetKeys();

  /// @brief Method GetOrAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue GetOrAdd(TKey key, TValue value);

  /// @brief Method GetOrAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue GetOrAdd(TKey key, ::System::Func_2<TKey, TValue>* valueFactory);

  /// @brief Method GetValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<TValue>* GetValues();

  /// @brief Method GrowTable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void GrowTable(::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>* tables);

  /// @brief Method InitializeFromCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InitializeFromCollection(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection);

  /// @brief Method IsValueWriteAtomic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsValueWriteAtomic();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* New_ctor();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* New_ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray,
                                                                                                  ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method OnDeserialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnSerialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnSerialized(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnSerializing, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ReleaseLocks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReleaseLocks(int32_t fromInclusive, int32_t toExclusive);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t index);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IDictionary_TKey_TValue__Add(TKey key, TValue value);

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IDictionary_TKey_TValue__Remove(TKey key);

  /// @brief Method System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<TKey>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys();

  /// @brief Method System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IDictionary.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IDictionary.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_Contains(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();

  /// @brief Method System.Collections.IDictionary.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Remove(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method System.Collections.IDictionary.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsReadOnly();

  /// @brief Method System.Collections.IDictionary.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();

  /// @brief Method System.Collections.IDictionary.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values();

  /// @brief Method System.Collections.IDictionary.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ThrowKeyNotFoundException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ThrowKeyNotFoundException(::System::Object* key);

  /// @brief Method ThrowKeyNullException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ThrowKeyNullException();

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> ToArray();

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TKey key, TValue value);

  /// @brief Method TryAddInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAddInternal(TKey key, int32_t hashcode, TValue value, bool updateIfExists, bool acquireLock, ::ByRef<TValue> resultingValue);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetValue(TKey key, ::ByRef<TValue> value);

  /// @brief Method TryGetValueInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValueInternal(TKey key, int32_t hashcode, ::ByRef<TValue> value);

  /// @brief Method TryRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryRemove(TKey key, ::ByRef<TValue> value);

  /// @brief Method TryRemoveInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryRemoveInternal(TKey key, ::ByRef<TValue> value, bool matchValue, TValue oldValue);

  constexpr int32_t const& __cordl_internal_get__budget() const;

  constexpr int32_t& __cordl_internal_get__budget();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get__comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get__comparer();

  constexpr bool const& __cordl_internal_get__growLockArray() const;

  constexpr bool& __cordl_internal_get__growLockArray();

  constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> const&
  __cordl_internal_get__serializationArray() const;

  constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>& __cordl_internal_get__serializationArray();

  constexpr int32_t const& __cordl_internal_get__serializationCapacity() const;

  constexpr int32_t& __cordl_internal_get__serializationCapacity();

  constexpr int32_t const& __cordl_internal_get__serializationConcurrencyLevel() const;

  constexpr int32_t& __cordl_internal_get__serializationConcurrencyLevel();

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>* const& __cordl_internal_get__tables() const;

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>*& __cordl_internal_get__tables();

  constexpr void __cordl_internal_set__budget(int32_t value);

  constexpr void __cordl_internal_set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  constexpr void __cordl_internal_set__growLockArray(bool value);

  constexpr void
  __cordl_internal_set__serializationArray(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> value);

  constexpr void __cordl_internal_set__serializationCapacity(int32_t value);

  constexpr void __cordl_internal_set__serializationConcurrencyLevel(int32_t value);

  constexpr void __cordl_internal_set__tables(::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline bool getStaticF_s_isValueWriteAtomic();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_DefaultConcurrencyLevel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t get_DefaultConcurrencyLevel();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(TKey key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TValue>* get_Values();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>* i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_s_isValueWriteAtomic(bool value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(TKey key, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentDictionary_2(ConcurrentDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentDictionary_2(ConcurrentDictionary_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3744 };

  /// @brief Field _tables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>* ____tables;

  /// @brief Field _comparer, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TKey>* ____comparer;

  /// @brief Field _growLockArray, offset: 0x20, size: 0x1, def value: None
  bool ____growLockArray;

  /// @brief Field _budget, offset: 0x24, size: 0x4, def value: None
  int32_t ____budget;

  /// @brief Field _serializationArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> ____serializationArray;

  /// @brief Field _serializationConcurrencyLevel, offset: 0x30, size: 0x4, def value: None
  int32_t ____serializationConcurrencyLevel;

  /// @brief Field _serializationCapacity, offset: 0x34, size: 0x4, def value: None
  int32_t ____serializationCapacity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentDictionary_2, "System.Collections.Concurrent", "ConcurrentDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator, "System.Collections.Concurrent", "ConcurrentDictionary`2/DictionaryEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentDictionary_2_Node, "System.Collections.Concurrent", "ConcurrentDictionary`2/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentDictionary_2_Tables, "System.Collections.Concurrent", "ConcurrentDictionary`2/Tables");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35, "System.Collections.Concurrent", "ConcurrentDictionary`2/<GetEnumerator>d__35");
