#pragma once
// IWYU pragma private; include "System/Collections/Specialized/OrderedDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrderedDictionary)
namespace System::Collections::Specialized {
class __OrderedDictionary__OrderedDictionaryEnumerator;
}
namespace System::Collections::Specialized {
class __OrderedDictionary__OrderedDictionaryKeyValueCollection;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class Hashtable;
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
namespace System::Collections {
class IEqualityComparer;
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
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
class OrderedDictionary;
}
namespace System::Collections::Specialized {
class __OrderedDictionary__OrderedDictionaryEnumerator;
}
namespace System::Collections::Specialized {
class __OrderedDictionary__OrderedDictionaryKeyValueCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::OrderedDictionary);
MARK_REF_PTR_T(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator);
MARK_REF_PTR_T(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection);
// Type: ::OrderedDictionaryEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::OrderedDictionary::OrderedDictionaryEnumerator*
class CORDL_TYPE __OrderedDictionary__OrderedDictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field _arrayEnumerator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arrayEnumerator, put = __cordl_internal_set__arrayEnumerator))::System::Collections::IEnumerator* _arrayEnumerator;

  /// @brief Field _objectReturnType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__objectReturnType, put = __cordl_internal_set__objectReturnType)) int32_t _objectReturnType;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x2f9e138, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator* New_ctor(::System::Collections::ArrayList* array, int32_t objectReturnType);

  /// @brief Method Reset, addr 0x2f9e1d8, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__arrayEnumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get__arrayEnumerator() const;

  constexpr int32_t const& __cordl_internal_get__objectReturnType() const;

  constexpr int32_t& __cordl_internal_get__objectReturnType();

  constexpr void __cordl_internal_set__arrayEnumerator(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set__objectReturnType(int32_t value);

  /// @brief Method .ctor, addr 0x2f9d5d0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* array, int32_t objectReturnType);

  /// @brief Method get_Current, addr 0x2f9dc30, size 0x1ac, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x2f9dddc, size 0x194, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x2f9df70, size 0xe4, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x2f9e054, size 0xe4, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OrderedDictionary__OrderedDictionaryEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OrderedDictionary__OrderedDictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OrderedDictionary__OrderedDictionaryEnumerator(__OrderedDictionary__OrderedDictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OrderedDictionary__OrderedDictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OrderedDictionary__OrderedDictionaryEnumerator(__OrderedDictionary__OrderedDictionaryEnumerator const&) = delete;

  /// @brief Field _objectReturnType, offset: 0x10, size: 0x4, def value: None
  int32_t ____objectReturnType;

  /// @brief Field _arrayEnumerator, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ____arrayEnumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator, ____objectReturnType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator, ____arrayEnumerator) == 0x18, "Offset mismatch!");

} // namespace System::Collections::Specialized
// Type: ::OrderedDictionaryKeyValueCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::OrderedDictionary::OrderedDictionaryKeyValueCollection*
class CORDL_TYPE __OrderedDictionary__OrderedDictionaryKeyValueCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _isKeys, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isKeys, put = __cordl_internal_set__isKeys)) bool _isKeys;

  /// @brief Field _objects, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__objects, put = __cordl_internal_set__objects))::System::Collections::ArrayList* _objects;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  static inline ::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection* New_ctor(::System::Collections::ArrayList* array, bool isKeys);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x2f9e27c, size 0x3fc, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x2f9e678, size 0x24, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2f9e69c, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x2f9e6a4, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2f9e6c8, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr bool const& __cordl_internal_get__isKeys() const;

  constexpr bool& __cordl_internal_get__isKeys();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__objects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__objects() const;

  constexpr void __cordl_internal_set__isKeys(bool value);

  constexpr void __cordl_internal_set__objects(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x2f9cd58, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* array, bool isKeys);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OrderedDictionary__OrderedDictionaryKeyValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OrderedDictionary__OrderedDictionaryKeyValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OrderedDictionary__OrderedDictionaryKeyValueCollection(__OrderedDictionary__OrderedDictionaryKeyValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OrderedDictionary__OrderedDictionaryKeyValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OrderedDictionary__OrderedDictionaryKeyValueCollection(__OrderedDictionary__OrderedDictionaryKeyValueCollection const&) = delete;

  /// @brief Field _objects, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____objects;

  /// @brief Field _isKeys, offset: 0x18, size: 0x1, def value: None
  bool ____isKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection, ____objects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection, ____isKeys) == 0x18, "Offset mismatch!");

} // namespace System::Collections::Specialized
// Type: System.Collections.Specialized::OrderedDictionary
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::System.Collections.Specialized::OrderedDictionary*
class CORDL_TYPE OrderedDictionary : public ::System::Object {
public:
  // Declarations
  using OrderedDictionaryEnumerator = ::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator;

  using OrderedDictionaryKeyValueCollection = ::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Field _comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer))::System::Collections::IEqualityComparer* _comparer;

  /// @brief Field _initialCapacity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__initialCapacity, put = __cordl_internal_set__initialCapacity)) int32_t _initialCapacity;

  /// @brief Field _objectsArray, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__objectsArray, put = __cordl_internal_set__objectsArray))::System::Collections::ArrayList* _objectsArray;

  /// @brief Field _objectsTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__objectsTable, put = __cordl_internal_set__objectsTable))::System::Collections::Hashtable* _objectsTable;

  /// @brief Field _readOnly, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__readOnly, put = __cordl_internal_set__readOnly)) bool _readOnly;

  /// @brief Field _siInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__siInfo, put = __cordl_internal_set__siInfo))::System::Runtime::Serialization::SerializationInfo* _siInfo;

  /// @brief Field _syncRoot, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  __declspec(property(get = get_objectsArray))::System::Collections::ArrayList* objectsArray;

  __declspec(property(get = get_objectsTable))::System::Collections::Hashtable* objectsTable;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Add, addr 0x2f9d1b4, size 0x128, virtual true, abstract: false, final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x2f9d354, size 0x98, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x2f9d3ec, size 0x2c, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x2f9d418, size 0x3c, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x2f9d55c, size 0x74, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetObjectData, addr 0x2f9d690, size 0x1d8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IndexOfKey, addr 0x2f9d034, size 0x180, virtual false, abstract: false, final false
  inline int32_t IndexOfKey(::System::Object* key);

  static inline ::System::Collections::Specialized::OrderedDictionary* New_ctor();

  static inline ::System::Collections::Specialized::OrderedDictionary* New_ctor(int32_t capacity);

  static inline ::System::Collections::Specialized::OrderedDictionary* New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* comparer);

  static inline ::System::Collections::Specialized::OrderedDictionary* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialization, addr 0x2f9d878, size 0x3b8, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Remove, addr 0x2f9d454, size 0x108, virtual true, abstract: false, final true
  inline void Remove(::System::Object* key);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2f9ccd4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x2f9ce0c, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x2f9ccc4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2f9d61c, size 0x74, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x2f9d868, size 0x10, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  constexpr ::System::Collections::IEqualityComparer*& __cordl_internal_get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& __cordl_internal_get__comparer() const;

  constexpr int32_t const& __cordl_internal_get__initialCapacity() const;

  constexpr int32_t& __cordl_internal_get__initialCapacity();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__objectsArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__objectsArray() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__objectsTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__objectsTable() const;

  constexpr bool const& __cordl_internal_get__readOnly() const;

  constexpr bool& __cordl_internal_get__readOnly();

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get__siInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __cordl_internal_get__siInfo() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr void __cordl_internal_set__comparer(::System::Collections::IEqualityComparer* value);

  constexpr void __cordl_internal_set__initialCapacity(int32_t value);

  constexpr void __cordl_internal_set__objectsArray(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__objectsTable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__readOnly(bool value);

  constexpr void __cordl_internal_set__siInfo(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  /// @brief Method .ctor, addr 0x2f9cb88, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2f9cba8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x2f9cbd4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method .ctor, addr 0x2f9cc04, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Count, addr 0x2f9cc2c, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x2f9cccc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x2f9ce88, size 0x2c, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x2f9ccdc, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_Values, addr 0x2f9d2dc, size 0x78, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method get_objectsArray, addr 0x2f9cc50, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_objectsArray();

  /// @brief Method get_objectsTable, addr 0x2f9cd88, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_objectsTable();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method set_Item, addr 0x2f9ceb4, size 0x180, virtual true, abstract: false, final true
  inline void set_Item(::System::Object* key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrderedDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrderedDictionary(OrderedDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrderedDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrderedDictionary(OrderedDictionary const&) = delete;

  /// @brief Field _objectsArray, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____objectsArray;

  /// @brief Field _objectsTable, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____objectsTable;

  /// @brief Field _initialCapacity, offset: 0x20, size: 0x4, def value: None
  int32_t ____initialCapacity;

  /// @brief Field _comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IEqualityComparer* ____comparer;

  /// @brief Field _readOnly, offset: 0x30, size: 0x1, def value: None
  bool ____readOnly;

  /// @brief Field _syncRoot, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field _siInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ____siInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::OrderedDictionary, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::OrderedDictionary, ____objectsArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::OrderedDictionary, ____objectsTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::OrderedDictionary, ____initialCapacity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::OrderedDictionary, ____comparer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::OrderedDictionary, ____readOnly) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::OrderedDictionary, ____syncRoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::OrderedDictionary, ____siInfo) == 0x40, "Offset mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::OrderedDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::OrderedDictionary*, "System.Collections.Specialized", "OrderedDictionary");
NEED_NO_BOX(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator*, "System.Collections.Specialized", "OrderedDictionary/OrderedDictionaryEnumerator");
NEED_NO_BOX(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection*, "System.Collections.Specialized",
                       "OrderedDictionary/OrderedDictionaryKeyValueCollection");
