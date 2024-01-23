#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Dictionary_2)
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __Dictionary_2__KeyCollection__Enumerator;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __Dictionary_2__ValueCollection__Enumerator;
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
struct InsertionBehavior;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct __Dictionary_2__Entry;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct __Dictionary_2__Enumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __Dictionary_2__KeyCollection;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __Dictionary_2__ValueCollection;
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
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __Dictionary_2__KeyCollection;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class __Dictionary_2__ValueCollection;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __Dictionary_2__KeyCollection__Enumerator;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> struct __Dictionary_2__ValueCollection__Enumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct __Dictionary_2__Entry;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct __Dictionary_2__Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::Dictionary_2);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__Dictionary_2__KeyCollection);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__Dictionary_2__ValueCollection);
MARK_GEN_VAL_T(::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator);
MARK_GEN_VAL_T(::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator);
MARK_GEN_VAL_T(::System::Collections::Generic::__Dictionary_2__Entry);
MARK_GEN_VAL_T(::System::Collections::Generic::__Dictionary_2__Enumerator);
// Type: ::Entry
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3818))
// CS Name: ::Dictionary`2::Entry<TKey,TValue>
struct CORDL_TYPE __Dictionary_2__Entry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "key",
  // ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
  constexpr __Dictionary_2__Entry(int32_t hashCode, int32_t next, TKey key, TValue value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dictionary_2__Entry();

  /// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
  int32_t hashCode;

  /// @brief Field next, offset: 0x4, size: 0x4, def value: None
  int32_t next;

  /// @brief Field key, offset: 0x8, size: 0x8, def value: None
  TKey key;

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  TValue value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::Enumerator
// SizeInfo { instance_size: 40, native_size: 52, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3841)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1206 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3819))
// CS Name: ::Dictionary`2::Enumerator<TKey,TValue>
struct CORDL_TYPE __Dictionary_2__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Collections::Generic::KeyValuePair_2<TKey, TValue> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  __declspec(property(get = System_Collections_IDictionaryEnumerator_get_Entry))::System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_Entry;

  __declspec(property(get = System_Collections_IDictionaryEnumerator_get_Key))::System::Object* System_Collections_IDictionaryEnumerator_Key;

  __declspec(property(get = System_Collections_IDictionaryEnumerator_get_Value))::System::Object* System_Collections_IDictionaryEnumerator_Value;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary, int32_t getEnumeratorRetType);

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> get_Current();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IDictionaryEnumerator.get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry();

  /// @brief Method System.Collections.IDictionaryEnumerator.get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Key();

  /// @brief Method System.Collections.IDictionaryEnumerator.get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Value();

  // Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty:
  // "::System::Collections::Generic::KeyValuePair_2<TKey,TValue>", modifiers: "", def_value: None }, CppParam { name: "_getEnumeratorRetType", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Dictionary_2__Enumerator(::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary, int32_t _version, int32_t _index,
                                       ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _current, int32_t _getEnumeratorRetType) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dictionary_2__Enumerator();

  /// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary;

  /// @brief Field _version, offset: 0x8, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _index, offset: 0xc, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _current, offset: 0x10, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _current;

  /// @brief Field _getEnumeratorRetType, offset: 0x20, size: 0x4, def value: None
  int32_t _getEnumeratorRetType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::Enumerator
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3820))
// CS Name: ::Dictionary`2::KeyCollection::Enumerator<TKey,TValue>
struct CORDL_TYPE __Dictionary_2__KeyCollection__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) TKey Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TKey>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TKey>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TKey>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TKey>* i___System__Collections__Generic__IEnumerator_1_TKey_();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TKey get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  // Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentKey", ty: "TKey", modifiers: "", def_value: None }]
  constexpr __Dictionary_2__KeyCollection__Enumerator(::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary, int32_t _index, int32_t _version, TKey _currentKey) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dictionary_2__KeyCollection__Enumerator();

  /// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary;

  /// @brief Field _index, offset: 0x8, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _version, offset: 0xc, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _currentKey, offset: 0x10, size: 0x8, def value: None
  TKey _currentKey;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::KeyCollection
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3821))
// CS Name: ::Dictionary`2::KeyCollection<TKey,TValue>*
class CORDL_TYPE __Dictionary_2__KeyCollection : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue>;

  /// @brief Field _dictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dictionary, put = __cordl_internal_set__dictionary))::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_Generic_ICollection_TKey__get_IsReadOnly)) bool System_Collections_Generic_ICollection_TKey__IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
  constexpr ::System::Collections::Generic::ICollection_1<TKey>* i___System__Collections__Generic__ICollection_1_TKey_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TKey>* i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<TKey>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TKey>* i___System__Collections__Generic__IReadOnlyCollection_1_TKey_() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& __cordl_internal_get__dictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const& __cordl_internal_get__dictionary() const;

  constexpr void __cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value);

  static inline ::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>* New_ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<TKey, TValue> GetEnumerator();

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<TKey, ::Array<TKey>*> array, int32_t index);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.Generic.ICollection<TKey>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TKey__get_IsReadOnly();

  /// @brief Method System.Collections.Generic.ICollection<TKey>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TKey__Add(TKey item);

  /// @brief Method System.Collections.Generic.ICollection<TKey>.Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TKey__Clear();

  /// @brief Method System.Collections.Generic.ICollection<TKey>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TKey__Contains(TKey item);

  /// @brief Method System.Collections.Generic.ICollection<TKey>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TKey__Remove(TKey item);

  /// @brief Method System.Collections.Generic.IEnumerable<TKey>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TKey>* System_Collections_Generic_IEnumerable_TKey__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  // Ctor Parameters [CppParam { name: "", ty: "__Dictionary_2__KeyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dictionary_2__KeyCollection(__Dictionary_2__KeyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dictionary_2__KeyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dictionary_2__KeyCollection(__Dictionary_2__KeyCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dictionary_2__KeyCollection();

public:
  /// @brief Field _dictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* ____dictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::Enumerator
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3822))
// CS Name: ::Dictionary`2::ValueCollection::Enumerator<TKey,TValue>
struct CORDL_TYPE __Dictionary_2__ValueCollection__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) TValue Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  // Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentValue", ty: "TValue", modifiers: "", def_value: None }]
  constexpr __Dictionary_2__ValueCollection__Enumerator(::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary, int32_t _index, int32_t _version, TValue _currentValue) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dictionary_2__ValueCollection__Enumerator();

  /// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary;

  /// @brief Field _index, offset: 0x8, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _version, offset: 0xc, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _currentValue, offset: 0x10, size: 0x8, def value: None
  TValue _currentValue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ValueCollection
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3823))
// CS Name: ::Dictionary`2::ValueCollection<TKey,TValue>*
class CORDL_TYPE __Dictionary_2__ValueCollection : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue>;

  /// @brief Field _dictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dictionary, put = __cordl_internal_set__dictionary))::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_Generic_ICollection_TValue__get_IsReadOnly)) bool System_Collections_Generic_ICollection_TValue__IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
  constexpr ::System::Collections::Generic::ICollection_1<TValue>* i___System__Collections__Generic__ICollection_1_TValue_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>* i___System__Collections__Generic__IReadOnlyCollection_1_TValue_() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& __cordl_internal_get__dictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const& __cordl_internal_get__dictionary() const;

  constexpr void __cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value);

  static inline ::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>* New_ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator<TKey, TValue> GetEnumerator();

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<TValue, ::Array<TValue>*> array, int32_t index);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.Generic.ICollection<TValue>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TValue__get_IsReadOnly();

  /// @brief Method System.Collections.Generic.ICollection<TValue>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TValue__Add(TValue item);

  /// @brief Method System.Collections.Generic.ICollection<TValue>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TValue__Remove(TValue item);

  /// @brief Method System.Collections.Generic.ICollection<TValue>.Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TValue__Clear();

  /// @brief Method System.Collections.Generic.ICollection<TValue>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TValue__Contains(TValue item);

  /// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  // Ctor Parameters [CppParam { name: "", ty: "__Dictionary_2__ValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dictionary_2__ValueCollection(__Dictionary_2__ValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dictionary_2__ValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dictionary_2__ValueCollection(__Dictionary_2__ValueCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dictionary_2__ValueCollection();

public:
  /// @brief Field _dictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* ____dictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: System.Collections.Generic::Dictionary`2
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3824))
// CS Name: ::System.Collections.Generic::Dictionary`2<TKey,TValue>*
class CORDL_TYPE Dictionary_2 : public ::System::Object {
public:
  // Declarations
  using ValueCollection = ::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>;

  using KeyCollection = ::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>;

  using Enumerator = ::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue>;

  using Entry = ::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets, put = __cordl_internal_set__buckets))::ArrayW<int32_t, ::Array<int32_t>*> _buckets;

  /// @brief Field _entries, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__entries, put = __cordl_internal_set__entries))::ArrayW<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>,
                                                                                                         ::Array<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>>*> _entries;

  /// @brief Field _count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _freeList, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__freeList, put = __cordl_internal_set__freeList)) int32_t _freeList;

  /// @brief Field _freeCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__freeCount, put = __cordl_internal_set__freeCount)) int32_t _freeCount;

  /// @brief Field _version, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Field _comparer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer))::System::Collections::Generic::IEqualityComparer_1<TKey>* _comparer;

  /// @brief Field _keys, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__keys, put = __cordl_internal_set__keys))::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>* _keys;

  /// @brief Field _values, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>* _values;

  /// @brief Field _syncRoot, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Keys))::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>* Keys;

  __declspec(property(get = System_Collections_Generic_IDictionary_TKey_TValue__get_Keys))::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_TValue__Keys;

  __declspec(property(get = get_Values))::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>* Values;

  __declspec(
      property(get = System_Collections_Generic_IDictionary_TKey_TValue__get_Values))::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary_TKey_TValue__Values;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  __declspec(property(
      get =
          System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly)) bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_IsReadOnly)) bool System_Collections_IDictionary_IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_Keys))::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values))::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item))::System::Object* System_Collections_IDictionary_Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>* i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__buckets();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__buckets() const;

  constexpr void __cordl_internal_set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>, ::Array<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>>*>&
  __cordl_internal_get__entries();

  constexpr ::ArrayW<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>, ::Array<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>>*> const&
  __cordl_internal_get__entries() const;

  constexpr void
  __cordl_internal_set__entries(::ArrayW<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>, ::Array<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>>*> value);

  constexpr int32_t& __cordl_internal_get__count();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr int32_t& __cordl_internal_get__freeList();

  constexpr int32_t const& __cordl_internal_get__freeList() const;

  constexpr void __cordl_internal_set__freeList(int32_t value);

  constexpr int32_t& __cordl_internal_get__freeCount();

  constexpr int32_t const& __cordl_internal_get__freeCount() const;

  constexpr void __cordl_internal_set__freeCount(int32_t value);

  constexpr int32_t& __cordl_internal_get__version();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr void __cordl_internal_set__version(int32_t value);

  constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const& __cordl_internal_get__comparer() const;

  constexpr void __cordl_internal_set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value);

  constexpr ::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*& __cordl_internal_get__keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>*> const& __cordl_internal_get__keys() const;

  constexpr void __cordl_internal_set__keys(::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>* value);

  constexpr ::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*& __cordl_internal_get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>*> const& __cordl_internal_get__values() const;

  constexpr void __cordl_internal_set__values(::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>* value);

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* New_ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* New_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary,
                                                                                     ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                     ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>* get_Keys();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_TValue__get_Keys();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>* get_Values();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary_TKey_TValue__get_Values();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(TKey key);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(TKey key, TValue value);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(TKey key, TValue value);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ContainsKey(TKey key);

  /// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsValue(TValue value);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::__Dictionary_2__Enumerator<TKey, TValue> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator();

  /// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method FindEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t FindEntry(TKey key);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Initialize(int32_t capacity);

  /// @brief Method TryInsert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryInsert(TKey key, TValue value, ::System::Collections::Generic::InsertionBehavior behavior);

  /// @brief Method OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize();

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize(int32_t newSize, bool forceNewHashCodes);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(TKey key);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TKey key, TValue value);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t index);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method System.Collections.IDictionary.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsReadOnly();

  /// @brief Method System.Collections.IDictionary.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();

  /// @brief Method System.Collections.IDictionary.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values();

  /// @brief Method System.Collections.IDictionary.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method IsCompatibleKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsCompatibleKey(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IDictionary.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_Contains(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();

  /// @brief Method System.Collections.IDictionary.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Remove(::System::Object* key);

  // Ctor Parameters [CppParam { name: "", ty: "Dictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dictionary_2(Dictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dictionary_2(Dictionary_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dictionary_2();

public:
  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____buckets;

  /// @brief Field _entries, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>, ::Array<::System::Collections::Generic::__Dictionary_2__Entry<TKey, TValue>>*> ____entries;

  /// @brief Field _count, offset: 0x20, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _freeList, offset: 0x24, size: 0x4, def value: None
  int32_t ____freeList;

  /// @brief Field _freeCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____freeCount;

  /// @brief Field _version, offset: 0x2c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _comparer, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<TKey>* ____comparer;

  /// @brief Field _keys, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::__Dictionary_2__KeyCollection<TKey, TValue>* ____keys;

  /// @brief Field _values, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::__Dictionary_2__ValueCollection<TKey, TValue>* ____values;

  /// @brief Field _syncRoot, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field VersionName offset 0xffffffff size 0x8
  static constexpr ::ConstString VersionName{ u"Version" };

  /// @brief Field HashSizeName offset 0xffffffff size 0x8
  static constexpr ::ConstString HashSizeName{ u"HashSize" };

  /// @brief Field KeyValuePairsName offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyValuePairsName{ u"KeyValuePairs" };

  /// @brief Field ComparerName offset 0xffffffff size 0x8
  static constexpr ::ConstString ComparerName{ u"Comparer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Dictionary_2, "System.Collections.Generic", "Dictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__Dictionary_2__KeyCollection, "System.Collections.Generic", "Dictionary`2/KeyCollection");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__Dictionary_2__ValueCollection, "System.Collections.Generic", "Dictionary`2/ValueCollection");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator, "System.Collections.Generic", "Dictionary`2/KeyCollection/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__Dictionary_2__ValueCollection__Enumerator, "System.Collections.Generic", "Dictionary`2/ValueCollection/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__Dictionary_2__Entry, "System.Collections.Generic", "Dictionary`2/Entry");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__Dictionary_2__Enumerator, "System.Collections.Generic", "Dictionary`2/Enumerator");
