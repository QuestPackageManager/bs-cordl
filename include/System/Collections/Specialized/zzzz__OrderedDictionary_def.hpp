#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrderedDictionary)
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Array;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections::Specialized {
class __OrderedDictionary__OrderedDictionaryEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections::Specialized {
class __OrderedDictionary__OrderedDictionaryKeyValueCollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
struct DictionaryEntry;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8351))
// CS Name: ::OrderedDictionary::OrderedDictionaryEnumerator*
class CORDL_TYPE __OrderedDictionary__OrderedDictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _objectReturnType, offset 0x10, size 0x4
  __declspec(property(get = __get__objectReturnType, put = __set__objectReturnType)) int32_t _objectReturnType;

  /// @brief Field _arrayEnumerator, offset 0x18, size 0x8
  __declspec(property(get = __get__arrayEnumerator, put = __set__arrayEnumerator))::System::Collections::IEnumerator* _arrayEnumerator;

  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get__objectReturnType();

  constexpr int32_t const& __get__objectReturnType() const;

  constexpr void __set__objectReturnType(int32_t value);

  constexpr ::System::Collections::IEnumerator*& __get__arrayEnumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get__arrayEnumerator() const;

  constexpr void __set__arrayEnumerator(::System::Collections::IEnumerator* value);

  static inline ::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator* New_ctor(::System::Collections::ArrayList* array, int32_t objectReturnType);

  /// @brief Method .ctor addr 0x27c04c4 size 0x4c virtual false final false
  inline void _ctor(::System::Collections::ArrayList* array, int32_t objectReturnType);

  /// @brief Method get_Current addr 0x27c0b24 size 0x1ac virtual true final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry addr 0x27c0cd0 size 0x194 virtual true final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key addr 0x27c0e64 size 0xe4 virtual true final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value addr 0x27c0f48 size 0xe4 virtual true final true
  inline ::System::Object* get_Value();

  /// @brief Method MoveNext addr 0x27c102c size 0xa0 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x27c10cc size 0xa4 virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__OrderedDictionary__OrderedDictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OrderedDictionary__OrderedDictionaryEnumerator(__OrderedDictionary__OrderedDictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OrderedDictionary__OrderedDictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OrderedDictionary__OrderedDictionaryEnumerator(__OrderedDictionary__OrderedDictionaryEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OrderedDictionary__OrderedDictionaryEnumerator();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8352))
// CS Name: ::OrderedDictionary::OrderedDictionaryKeyValueCollection*
class CORDL_TYPE __OrderedDictionary__OrderedDictionaryKeyValueCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _objects, offset 0x10, size 0x8
  __declspec(property(get = __get__objects, put = __set__objects))::System::Collections::ArrayList* _objects;

  /// @brief Field _isKeys, offset 0x18, size 0x1
  __declspec(property(get = __get__isKeys, put = __set__isKeys)) bool _isKeys;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::ArrayList*& __get__objects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__objects() const;

  constexpr void __set__objects(::System::Collections::ArrayList* value);

  constexpr bool& __get__isKeys();

  constexpr bool const& __get__isKeys() const;

  constexpr void __set__isKeys(bool value);

  static inline ::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection* New_ctor(::System::Collections::ArrayList* array, bool isKeys);

  /// @brief Method .ctor addr 0x27bfc4c size 0x30 virtual false final false
  inline void _ctor(::System::Collections::ArrayList* array, bool isKeys);

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x27c1170 size 0x3fc virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count addr 0x27c156c size 0x24 virtual true final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x27c1590 size 0x8 virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x27c1598 size 0x24 virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27c15bc size 0x7c virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__OrderedDictionary__OrderedDictionaryKeyValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OrderedDictionary__OrderedDictionaryKeyValueCollection(__OrderedDictionary__OrderedDictionaryKeyValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OrderedDictionary__OrderedDictionaryKeyValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OrderedDictionary__OrderedDictionaryKeyValueCollection(__OrderedDictionary__OrderedDictionaryKeyValueCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OrderedDictionary__OrderedDictionaryKeyValueCollection();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8353))
// CS Name: ::System.Collections.Specialized::OrderedDictionary*
class CORDL_TYPE OrderedDictionary : public ::System::Object {
public:
  // Declarations
  using OrderedDictionaryKeyValueCollection = ::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryKeyValueCollection;

  using OrderedDictionaryEnumerator = ::System::Collections::Specialized::__OrderedDictionary__OrderedDictionaryEnumerator;

  /// @brief Field _objectsArray, offset 0x10, size 0x8
  __declspec(property(get = __get__objectsArray, put = __set__objectsArray))::System::Collections::ArrayList* _objectsArray;

  /// @brief Field _objectsTable, offset 0x18, size 0x8
  __declspec(property(get = __get__objectsTable, put = __set__objectsTable))::System::Collections::Hashtable* _objectsTable;

  /// @brief Field _initialCapacity, offset 0x20, size 0x4
  __declspec(property(get = __get__initialCapacity, put = __set__initialCapacity)) int32_t _initialCapacity;

  /// @brief Field _comparer, offset 0x28, size 0x8
  __declspec(property(get = __get__comparer, put = __set__comparer))::System::Collections::IEqualityComparer* _comparer;

  /// @brief Field _readOnly, offset 0x30, size 0x1
  __declspec(property(get = __get__readOnly, put = __set__readOnly)) bool _readOnly;

  /// @brief Field _syncRoot, offset 0x38, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field _siInfo, offset 0x40, size 0x8
  __declspec(property(get = __get__siInfo, put = __set__siInfo))::System::Runtime::Serialization::SerializationInfo* _siInfo;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_objectsArray))::System::Collections::ArrayList* objectsArray;

  __declspec(property(get = get_objectsTable))::System::Collections::Hashtable* objectsTable;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  constexpr ::System::Collections::ArrayList*& __get__objectsArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__objectsArray() const;

  constexpr void __set__objectsArray(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::Hashtable*& __get__objectsTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__objectsTable() const;

  constexpr void __set__objectsTable(::System::Collections::Hashtable* value);

  constexpr int32_t& __get__initialCapacity();

  constexpr int32_t const& __get__initialCapacity() const;

  constexpr void __set__initialCapacity(int32_t value);

  constexpr ::System::Collections::IEqualityComparer*& __get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& __get__comparer() const;

  constexpr void __set__comparer(::System::Collections::IEqualityComparer* value);

  constexpr bool& __get__readOnly();

  constexpr bool const& __get__readOnly() const;

  constexpr void __set__readOnly(bool value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __get__siInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __get__siInfo() const;

  constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo* value);

  static inline ::System::Collections::Specialized::OrderedDictionary* New_ctor();

  /// @brief Method .ctor addr 0x27bfa7c size 0x20 virtual false final false
  inline void _ctor();

  static inline ::System::Collections::Specialized::OrderedDictionary* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x27bfa9c size 0x2c virtual false final false
  inline void _ctor(int32_t capacity);

  static inline ::System::Collections::Specialized::OrderedDictionary* New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method .ctor addr 0x27bfac8 size 0x30 virtual false final false
  inline void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer* comparer);

  static inline ::System::Collections::Specialized::OrderedDictionary* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x27bfaf8 size 0x28 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Count addr 0x27bfb20 size 0x24 virtual true final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize addr 0x27bfbb8 size 0x8 virtual true final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method get_IsReadOnly addr 0x27bfbc0 size 0x8 virtual true final true
  inline bool get_IsReadOnly();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x27bfbc8 size 0x8 virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method get_Keys addr 0x27bfbd0 size 0x7c virtual true final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_objectsArray addr 0x27bfb44 size 0x74 virtual false final false
  inline ::System::Collections::ArrayList* get_objectsArray();

  /// @brief Method get_objectsTable addr 0x27bfc7c size 0x84 virtual false final false
  inline ::System::Collections::Hashtable* get_objectsTable();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x27bfd00 size 0x7c virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method get_Item addr 0x27bfd7c size 0x2c virtual true final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method set_Item addr 0x27bfda8 size 0x180 virtual true final true
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method get_Values addr 0x27c01d0 size 0x78 virtual true final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method Add addr 0x27c00a8 size 0x128 virtual true final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear addr 0x27c0248 size 0x98 virtual true final true
  inline void Clear();

  /// @brief Method Contains addr 0x27c02e0 size 0x2c virtual true final true
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo addr 0x27c030c size 0x3c virtual true final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method IndexOfKey addr 0x27bff28 size 0x180 virtual false final false
  inline int32_t IndexOfKey(::System::Object* key);

  /// @brief Method Remove addr 0x27c0348 size 0x108 virtual true final true
  inline void Remove(::System::Object* key);

  /// @brief Method GetEnumerator addr 0x27c0450 size 0x74 virtual true final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x27c0510 size 0x74 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetObjectData addr 0x27c0584 size 0x1d8 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x27c075c size 0x10 virtual true final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method OnDeserialization addr 0x27c076c size 0x3b8 virtual true final false
  inline void OnDeserialization(::System::Object* sender);

  // Ctor Parameters [CppParam { name: "", ty: "OrderedDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrderedDictionary(OrderedDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrderedDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrderedDictionary(OrderedDictionary const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrderedDictionary();

public:
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
