#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConcurrentDictionary_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class __ConcurrentDictionary_2___GetEnumerator_d__35;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class __ConcurrentDictionary_2__Node;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class __ConcurrentDictionary_2__DictionaryEnumerator;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class __ConcurrentDictionary_2__Tables;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class __ConcurrentDictionary_2__DictionaryEnumerator;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class __ConcurrentDictionary_2__Node;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class __ConcurrentDictionary_2__Tables;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class __ConcurrentDictionary_2___GetEnumerator_d__35;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::ConcurrentDictionary_2);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentDictionary_2__Node);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables);
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35);
// Type: ::Tables
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3806))
// CS Name: ::ConcurrentDictionary`2::Tables<TKey,TValue>*
class CORDL_TYPE __ConcurrentDictionary_2__Tables : public ::System::Object {
public:
  // Declarations
  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __get__buckets, put = __set__buckets))::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*,
                                                                           ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*> _buckets;

  /// @brief Field _locks, offset 0x18, size 0x8
  __declspec(property(get = __get__locks, put = __set__locks))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _locks;

  /// @brief Field _countPerLock, offset 0x20, size 0x8
  __declspec(property(get = __get__countPerLock, put = __set__countPerLock))::ArrayW<int32_t, ::Array<int32_t>*> _countPerLock;

  constexpr ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*>&
  __get__buckets();

  constexpr ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*,
                     ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*> const&
  __get__buckets() const;

  constexpr void __set__buckets(
      ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*> value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get__locks();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get__locks() const;

  constexpr void __set__locks(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__countPerLock();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__countPerLock() const;

  constexpr void __set__countPerLock(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey, TValue>* New_ctor(
      ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*> buckets,
      ::ArrayW<::System::Object*, ::Array<::System::Object*>*> locks, ::ArrayW<int32_t, ::Array<int32_t>*> countPerLock);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void
  _ctor(::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*> buckets,
        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> locks, ::ArrayW<int32_t, ::Array<int32_t>*> countPerLock);

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentDictionary_2__Tables", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConcurrentDictionary_2__Tables(__ConcurrentDictionary_2__Tables&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentDictionary_2__Tables", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConcurrentDictionary_2__Tables(__ConcurrentDictionary_2__Tables const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConcurrentDictionary_2__Tables();

public:
  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*> ____buckets;

  /// @brief Field _locks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____locks;

  /// @brief Field _countPerLock, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____countPerLock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Type: ::Node
// SizeInfo { instance_size: 48, native_size: 44, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3807))
// CS Name: ::ConcurrentDictionary`2::Node<TKey,TValue>*
class CORDL_TYPE __ConcurrentDictionary_2__Node : public ::System::Object {
public:
  // Declarations
  /// @brief Field _key, offset 0x10, size 0x8
  __declspec(property(get = __get__key, put = __set__key)) TKey _key;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __get__value, put = __set__value)) TValue _value;

  /// @brief Field _next, offset 0x20, size 0x8
  __declspec(property(get = __get__next, put = __set__next))::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>* _next;

  /// @brief Field _hashcode, offset 0x28, size 0x4
  __declspec(property(get = __get__hashcode, put = __set__hashcode)) int32_t _hashcode;

  constexpr TKey& __get__key();

  constexpr TKey const& __get__key() const;

  constexpr void __set__key(TKey value);

  constexpr TValue& __get__value();

  constexpr TValue const& __get__value() const;

  constexpr void __set__value(TValue value);

  constexpr ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*& __get__next();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*> const& __get__next() const;

  constexpr void __set__next(::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>* value);

  constexpr int32_t& __get__hashcode();

  constexpr int32_t const& __get__hashcode() const;

  constexpr void __set__hashcode(int32_t value);

  static inline ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>* New_ctor(TKey key, TValue value, int32_t hashcode,
                                                                                                          ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>* next);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKey key, TValue value, int32_t hashcode, ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>* next);

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentDictionary_2__Node", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConcurrentDictionary_2__Node(__ConcurrentDictionary_2__Node&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentDictionary_2__Node", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConcurrentDictionary_2__Node(__ConcurrentDictionary_2__Node const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConcurrentDictionary_2__Node();

public:
  /// @brief Field _key, offset: 0x10, size: 0x8, def value: None
  TKey ____key;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  TValue ____value;

  /// @brief Field _next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>* ____next;

  /// @brief Field _hashcode, offset: 0x28, size: 0x4, def value: None
  int32_t ____hashcode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Type: ::DictionaryEnumerator
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3808))
// CS Name: ::ConcurrentDictionary`2::DictionaryEnumerator<TKey,TValue>*
class CORDL_TYPE __ConcurrentDictionary_2__DictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _enumerator, offset 0x10, size 0x8
  __declspec(property(get = __get__enumerator, put = __set__enumerator))::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _enumerator;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*& __get__enumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> const& __get__enumerator() const;

  constexpr void __set__enumerator(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* value);

  static inline ::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey, TValue>*
  New_ctor(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentDictionary_2__DictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConcurrentDictionary_2__DictionaryEnumerator(__ConcurrentDictionary_2__DictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentDictionary_2__DictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConcurrentDictionary_2__DictionaryEnumerator(__ConcurrentDictionary_2__DictionaryEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConcurrentDictionary_2__DictionaryEnumerator();

public:
  /// @brief Field _enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* ____enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Type: ::<GetEnumerator>d__35
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3841)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1104
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(3809)) CS Name: ::ConcurrentDictionary`2::<GetEnumerator>d__35<TKey,TValue>*
class CORDL_TYPE __ConcurrentDictionary_2___GetEnumerator_d__35 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Collections::Generic::KeyValuePair_2<TKey, TValue> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* __4__this;

  /// @brief Field <buckets>5__2, offset 0x30, size 0x8
  __declspec(property(get = __get__buckets_5__2, put = __set__buckets_5__2))::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*,
                                                                                     ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*> _buckets_5__2;

  /// @brief Field <i>5__3, offset 0x38, size 0x4
  __declspec(property(get = __get__i_5__3, put = __set__i_5__3)) int32_t _i_5__3;

  /// @brief Field <current>5__4, offset 0x40, size 0x8
  __declspec(property(get = __get__current_5__4, put = __set__current_5__4))::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>* _current_5__4;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current))::System::Collections::Generic::KeyValuePair_2<
      TKey, TValue> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>& __get___2__current();

  constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> value);

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*> const& __get___4__this() const;

  constexpr void __set___4__this(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* value);

  constexpr ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*>&
  __get__buckets_5__2();

  constexpr ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*,
                     ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*> const&
  __get__buckets_5__2() const;

  constexpr void __set__buckets_5__2(
      ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*> value);

  constexpr int32_t& __get__i_5__3();

  constexpr int32_t const& __get__i_5__3() const;

  constexpr void __set__i_5__3(int32_t value);

  constexpr ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*& __get__current_5__4();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*> const& __get__current_5__4() const;

  constexpr void __set__current_5__4(::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>* value);

  static inline ::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey, TValue>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentDictionary_2___GetEnumerator_d__35", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConcurrentDictionary_2___GetEnumerator_d__35(__ConcurrentDictionary_2___GetEnumerator_d__35&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConcurrentDictionary_2___GetEnumerator_d__35", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConcurrentDictionary_2___GetEnumerator_d__35(__ConcurrentDictionary_2___GetEnumerator_d__35 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConcurrentDictionary_2___GetEnumerator_d__35();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* _____4__this;

  /// @brief Field <buckets>5__2, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*, ::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>*>*>
      ____buckets_5__2;

  /// @brief Field <i>5__3, offset: 0x38, size: 0x4, def value: None
  int32_t ____i_5__3;

  /// @brief Field <current>5__4, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>* ____current_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
// Type: System.Collections.Concurrent::ConcurrentDictionary`2
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3810))
// CS Name: ::System.Collections.Concurrent::ConcurrentDictionary`2<TKey,TValue>*
class CORDL_TYPE ConcurrentDictionary_2 : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__35 = ::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey, TValue>;

  using DictionaryEnumerator = ::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey, TValue>;

  using Node = ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey, TValue>;

  using Tables = ::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey, TValue>;

  /// @brief Field _tables, offset 0x10, size 0x8
  __declspec(property(get = __get__tables, put = __set__tables))::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey, TValue>* _tables;

  /// @brief Field _comparer, offset 0x18, size 0x8
  __declspec(property(get = __get__comparer, put = __set__comparer))::System::Collections::Generic::IEqualityComparer_1<TKey>* _comparer;

  /// @brief Field _growLockArray, offset 0x20, size 0x1
  __declspec(property(get = __get__growLockArray, put = __set__growLockArray)) bool _growLockArray;

  /// @brief Field _budget, offset 0x24, size 0x4
  __declspec(property(get = __get__budget, put = __set__budget)) int32_t _budget;

  /// @brief Field _serializationArray, offset 0x28, size 0x8
  __declspec(property(get = __get__serializationArray, put = __set__serializationArray))::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>,
                                                                                                 ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> _serializationArray;

  /// @brief Field _serializationConcurrencyLevel, offset 0x30, size 0x4
  __declspec(property(get = __get__serializationConcurrencyLevel, put = __set__serializationConcurrencyLevel)) int32_t _serializationConcurrencyLevel;

  /// @brief Field _serializationCapacity, offset 0x34, size 0x4
  __declspec(property(get = __get__serializationCapacity, put = __set__serializationCapacity)) int32_t _serializationCapacity;

  /// @brief Field s_isValueWriteAtomic, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_isValueWriteAtomic, put = setStaticF_s_isValueWriteAtomic)) bool s_isValueWriteAtomic;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Keys))::System::Collections::Generic::ICollection_1<TKey>* Keys;

  __declspec(property(get = get_Values))::System::Collections::Generic::ICollection_1<TValue>* Values;

  __declspec(property(
      get =
          System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly)) bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_IsReadOnly)) bool System_Collections_IDictionary_IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_Keys))::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values))::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item))::System::Object* System_Collections_IDictionary_Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  constexpr ::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey, TValue>*& __get__tables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey, TValue>*> const& __get__tables() const;

  constexpr void __set__tables(::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey, TValue>* value);

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const& __get__comparer() const;

  constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  constexpr bool& __get__growLockArray();

  constexpr bool const& __get__growLockArray() const;

  constexpr void __set__growLockArray(bool value);

  constexpr int32_t& __get__budget();

  constexpr int32_t const& __get__budget() const;

  constexpr void __set__budget(int32_t value);

  constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>& __get__serializationArray();

  constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> const& __get__serializationArray() const;

  constexpr void __set__serializationArray(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> value);

  constexpr int32_t& __get__serializationConcurrencyLevel();

  constexpr int32_t const& __get__serializationConcurrencyLevel() const;

  constexpr void __set__serializationConcurrencyLevel(int32_t value);

  constexpr int32_t& __get__serializationCapacity();

  constexpr int32_t const& __get__serializationCapacity() const;

  constexpr void __set__serializationCapacity(int32_t value);

  static inline void setStaticF_s_isValueWriteAtomic(bool value);

  static inline bool getStaticF_s_isValueWriteAtomic();

  /// @brief Method IsValueWriteAtomic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsValueWriteAtomic();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method InitializeFromCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InitializeFromCollection(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection);

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* New_ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray,
                                                                                                  ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TKey key, TValue value);

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ContainsKey(TKey key);

  /// @brief Method TryRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryRemove(TKey key, ByRef<TValue> value);

  /// @brief Method TryRemoveInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryRemoveInternal(TKey key, ByRef<TValue> value, bool matchValue, TValue oldValue);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  /// @brief Method TryGetValueInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValueInternal(TKey key, int32_t hashcode, ByRef<TValue> value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t index);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> ToArray();

  /// @brief Method CopyToPairs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyToPairs(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t index);

  /// @brief Method CopyToEntries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyToEntries(::ArrayW<::System::Collections::DictionaryEntry, ::Array<::System::Collections::DictionaryEntry>*> array, int32_t index);

  /// @brief Method CopyToObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyToObjects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator();

  /// @brief Method TryAddInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAddInternal(TKey key, int32_t hashcode, TValue value, bool updateIfExists, bool acquireLock, ByRef<TValue> resultingValue);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(TKey key);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(TKey key, TValue value);

  /// @brief Method ThrowKeyNotFoundException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ThrowKeyNotFoundException(::System::Object* key);

  /// @brief Method ThrowKeyNullException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ThrowKeyNullException();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method GetCountInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetCountInternal();

  /// @brief Method GetOrAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue GetOrAdd(TKey key, ::System::Func_2<TKey, TValue>* valueFactory);

  /// @brief Method GetOrAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue GetOrAdd(TKey key, TValue value);

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IDictionary_TKey_TValue__Add(TKey key, TValue value);

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IDictionary_TKey_TValue__Remove(TKey key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TValue>* get_Values();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IDictionary.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IDictionary.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_Contains(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method System.Collections.IDictionary.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsReadOnly();

  /// @brief Method System.Collections.IDictionary.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();

  /// @brief Method System.Collections.IDictionary.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Remove(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values();

  /// @brief Method System.Collections.IDictionary.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method GrowTable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void GrowTable(::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey, TValue>* tables);

  /// @brief Method GetBucket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t GetBucket(int32_t hashcode, int32_t bucketCount);

  /// @brief Method GetBucketAndLockNo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void GetBucketAndLockNo(int32_t hashcode, ByRef<int32_t> bucketNo, ByRef<int32_t> lockNo, int32_t bucketCount, int32_t lockCount);

  /// @brief Method get_DefaultConcurrencyLevel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t get_DefaultConcurrencyLevel();

  /// @brief Method AcquireAllLocks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AcquireAllLocks(ByRef<int32_t> locksAcquired);

  /// @brief Method AcquireLocks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AcquireLocks(int32_t fromInclusive, int32_t toExclusive, ByRef<int32_t> locksAcquired);

  /// @brief Method ReleaseLocks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReleaseLocks(int32_t fromInclusive, int32_t toExclusive);

  /// @brief Method GetKeys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<TKey>* GetKeys();

  /// @brief Method GetValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<TValue>* GetValues();

  /// @brief Method OnSerializing, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnSerialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnSerialized(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcurrentDictionary_2(ConcurrentDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcurrentDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcurrentDictionary_2(ConcurrentDictionary_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcurrentDictionary_2();

public:
  /// @brief Field _tables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey, TValue>* ____tables;

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

  /// @brief Field DefaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCapacity{ static_cast<int32_t>(0x1f) };

  /// @brief Field MaxLockNumber offset 0xffffffff size 0x4
  static constexpr int32_t MaxLockNumber{ static_cast<int32_t>(0x400) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentDictionary_2, "System.Collections.Concurrent", "ConcurrentDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator, "System.Collections.Concurrent", "ConcurrentDictionary`2/DictionaryEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentDictionary_2__Node, "System.Collections.Concurrent", "ConcurrentDictionary`2/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables, "System.Collections.Concurrent", "ConcurrentDictionary`2/Tables");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35, "System.Collections.Concurrent", "ConcurrentDictionary`2/<GetEnumerator>d__35");
