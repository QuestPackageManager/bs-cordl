#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hashtable)
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System::Collections {
class __Hashtable__SyncHashtable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class ICloneable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class __Hashtable__ValueCollection;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Collections {
class __Hashtable__HashtableEnumerator;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections {
class __Hashtable__KeyCollection;
}
namespace System::Collections {
struct __Hashtable__bucket;
}
namespace System::Collections {
class __Hashtable__HashtableDebugView;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class __Hashtable__HashtableDebugView;
}
namespace System::Collections {
class __Hashtable__HashtableEnumerator;
}
namespace System::Collections {
class __Hashtable__KeyCollection;
}
namespace System::Collections {
class __Hashtable__ValueCollection;
}
namespace System::Collections {
struct __Hashtable__bucket;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Hashtable);
MARK_REF_PTR_T(::System::Collections::__Hashtable__HashtableDebugView);
MARK_REF_PTR_T(::System::Collections::__Hashtable__HashtableEnumerator);
MARK_REF_PTR_T(::System::Collections::__Hashtable__KeyCollection);
MARK_REF_PTR_T(::System::Collections::__Hashtable__ValueCollection);
MARK_VAL_T(::System::Collections::__Hashtable__bucket);
// Type: ::bucket
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3780))
// CS Name: ::Hashtable::bucket
struct CORDL_TYPE __Hashtable__bucket {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "val", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam {
  // name: "hash_coll", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Hashtable__bucket(::System::Object* key, ::System::Object* val, int32_t hash_coll) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__bucket();

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::System::Object* key;

  /// @brief Field val, offset: 0x8, size: 0x8, def value: None
  ::System::Object* val;

  /// @brief Field hash_coll, offset: 0x10, size: 0x4, def value: None
  int32_t hash_coll;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Hashtable__bucket, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__bucket, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__bucket, val) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__bucket, hash_coll) == 0x10, "Offset mismatch!");

} // namespace System::Collections
// Type: ::KeyCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3781))
// CS Name: ::Hashtable::KeyCollection*
class CORDL_TYPE __Hashtable__KeyCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hashtable, offset 0x10, size 0x8
  __declspec(property(get = __get__hashtable, put = __set__hashtable))::System::Collections::Hashtable* _hashtable;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::Hashtable*& __get__hashtable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__hashtable() const;

  constexpr void __set__hashtable(::System::Collections::Hashtable* value);

  static inline ::System::Collections::__Hashtable__KeyCollection* New_ctor(::System::Collections::Hashtable* hashtable);

  /// @brief Method .ctor addr 0x242e0fc size 0x28 virtual false final false
  inline void _ctor(::System::Collections::Hashtable* hashtable);

  /// @brief Method CopyTo addr 0x242f31c size 0x18c virtual true final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator addr 0x242f4a8 size 0x68 virtual true final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_IsSynchronized addr 0x242f510 size 0x24 virtual true final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x242f534 size 0x24 virtual true final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Count addr 0x242f558 size 0x1c virtual true final false
  inline int32_t get_Count();

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__KeyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashtable__KeyCollection(__Hashtable__KeyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__KeyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashtable__KeyCollection(__Hashtable__KeyCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__KeyCollection();

public:
  /// @brief Field _hashtable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____hashtable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Hashtable__KeyCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__KeyCollection, ____hashtable) == 0x10, "Offset mismatch!");

} // namespace System::Collections
// Type: ::ValueCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3782))
// CS Name: ::Hashtable::ValueCollection*
class CORDL_TYPE __Hashtable__ValueCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hashtable, offset 0x10, size 0x8
  __declspec(property(get = __get__hashtable, put = __set__hashtable))::System::Collections::Hashtable* _hashtable;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::Hashtable*& __get__hashtable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__hashtable() const;

  constexpr void __set__hashtable(::System::Collections::Hashtable* value);

  static inline ::System::Collections::__Hashtable__ValueCollection* New_ctor(::System::Collections::Hashtable* hashtable);

  /// @brief Method .ctor addr 0x242e194 size 0x28 virtual false final false
  inline void _ctor(::System::Collections::Hashtable* hashtable);

  /// @brief Method CopyTo addr 0x242f574 size 0x18c virtual true final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator addr 0x242f700 size 0x68 virtual true final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_IsSynchronized addr 0x242f768 size 0x24 virtual true final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x242f78c size 0x24 virtual true final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Count addr 0x242f7b0 size 0x1c virtual true final false
  inline int32_t get_Count();

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__ValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashtable__ValueCollection(__Hashtable__ValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__ValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashtable__ValueCollection(__Hashtable__ValueCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__ValueCollection();

public:
  /// @brief Field _hashtable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____hashtable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Hashtable__ValueCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__ValueCollection, ____hashtable) == 0x10, "Offset mismatch!");

} // namespace System::Collections
// Type: ::HashtableEnumerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3784))
// CS Name: ::Hashtable::HashtableEnumerator*
class CORDL_TYPE __Hashtable__HashtableEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _hashtable, offset 0x10, size 0x8
  __declspec(property(get = __get__hashtable, put = __set__hashtable))::System::Collections::Hashtable* _hashtable;

  /// @brief Field _bucket, offset 0x18, size 0x4
  __declspec(property(get = __get__bucket, put = __set__bucket)) int32_t _bucket;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _current, offset 0x20, size 0x1
  __declspec(property(get = __get__current, put = __set__current)) bool _current;

  /// @brief Field _getObjectRetType, offset 0x24, size 0x4
  __declspec(property(get = __get__getObjectRetType, put = __set__getObjectRetType)) int32_t _getObjectRetType;

  /// @brief Field _currentKey, offset 0x28, size 0x8
  __declspec(property(get = __get__currentKey, put = __set__currentKey))::System::Object* _currentKey;

  /// @brief Field _currentValue, offset 0x30, size 0x8
  __declspec(property(get = __get__currentValue, put = __set__currentValue))::System::Object* _currentValue;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::System::Collections::Hashtable*& __get__hashtable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__hashtable() const;

  constexpr void __set__hashtable(::System::Collections::Hashtable* value);

  constexpr int32_t& __get__bucket();

  constexpr int32_t const& __get__bucket() const;

  constexpr void __set__bucket(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr bool& __get__current();

  constexpr bool const& __get__current() const;

  constexpr void __set__current(bool value);

  constexpr int32_t& __get__getObjectRetType();

  constexpr int32_t const& __get__getObjectRetType() const;

  constexpr void __set__getObjectRetType(int32_t value);

  constexpr ::System::Object*& __get__currentKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__currentKey() const;

  constexpr void __set__currentKey(::System::Object* value);

  constexpr ::System::Object*& __get__currentValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__currentValue() const;

  constexpr void __set__currentValue(::System::Object* value);

  static inline ::System::Collections::__Hashtable__HashtableEnumerator* New_ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType);

  /// @brief Method .ctor addr 0x242dde8 size 0x58 virtual false final false
  inline void _ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType);

  /// @brief Method Clone addr 0x2430258 size 0x8 virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method get_Key addr 0x2430260 size 0x64 virtual true final false
  inline ::System::Object* get_Key();

  /// @brief Method MoveNext addr 0x24302c4 size 0x134 virtual true final false
  inline bool MoveNext();

  /// @brief Method get_Entry addr 0x24303f8 size 0x68 virtual true final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Current addr 0x2430460 size 0xd4 virtual true final false
  inline ::System::Object* get_Current();

  /// @brief Method get_Value addr 0x2430534 size 0x64 virtual true final false
  inline ::System::Object* get_Value();

  /// @brief Method Reset addr 0x2430598 size 0xa4 virtual true final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__HashtableEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashtable__HashtableEnumerator(__Hashtable__HashtableEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__HashtableEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashtable__HashtableEnumerator(__Hashtable__HashtableEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__HashtableEnumerator();

public:
  /// @brief Field _hashtable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____hashtable;

  /// @brief Field _bucket, offset: 0x18, size: 0x4, def value: None
  int32_t ____bucket;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _current, offset: 0x20, size: 0x1, def value: None
  bool ____current;

  /// @brief Field _getObjectRetType, offset: 0x24, size: 0x4, def value: None
  int32_t ____getObjectRetType;

  /// @brief Field _currentKey, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____currentKey;

  /// @brief Field _currentValue, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____currentValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Hashtable__HashtableEnumerator, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__HashtableEnumerator, ____hashtable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__HashtableEnumerator, ____bucket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__HashtableEnumerator, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__HashtableEnumerator, ____current) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__HashtableEnumerator, ____getObjectRetType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__HashtableEnumerator, ____currentKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__HashtableEnumerator, ____currentValue) == 0x30, "Offset mismatch!");

} // namespace System::Collections
// Type: ::HashtableDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3785))
// CS Name: ::Hashtable::HashtableDebugView*
class CORDL_TYPE __Hashtable__HashtableDebugView : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__HashtableDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashtable__HashtableDebugView(__Hashtable__HashtableDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__HashtableDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashtable__HashtableDebugView(__Hashtable__HashtableDebugView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__HashtableDebugView();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Hashtable__HashtableDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Type: System.Collections::Hashtable
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3786))
// CS Name: ::System.Collections::Hashtable*
class CORDL_TYPE Hashtable : public ::System::Object {
public:
  // Declarations
  using HashtableDebugView = ::System::Collections::__Hashtable__HashtableDebugView;

  using HashtableEnumerator = ::System::Collections::__Hashtable__HashtableEnumerator;

  using SyncHashtable = ::System::Collections::__Hashtable__SyncHashtable;

  using ValueCollection = ::System::Collections::__Hashtable__ValueCollection;

  using KeyCollection = ::System::Collections::__Hashtable__KeyCollection;

  using bucket = ::System::Collections::__Hashtable__bucket;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __get__buckets, put = __set__buckets))::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> _buckets;

  /// @brief Field _count, offset 0x18, size 0x4
  __declspec(property(get = __get__count, put = __set__count)) int32_t _count;

  /// @brief Field _occupancy, offset 0x1c, size 0x4
  __declspec(property(get = __get__occupancy, put = __set__occupancy)) int32_t _occupancy;

  /// @brief Field _loadsize, offset 0x20, size 0x4
  __declspec(property(get = __get__loadsize, put = __set__loadsize)) int32_t _loadsize;

  /// @brief Field _loadFactor, offset 0x24, size 0x4
  __declspec(property(get = __get__loadFactor, put = __set__loadFactor)) float_t _loadFactor;

  /// @brief Field _version, offset 0x28, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _isWriterInProgress, offset 0x2c, size 0x1
  __declspec(property(get = __get__isWriterInProgress, put = __set__isWriterInProgress)) bool _isWriterInProgress;

  /// @brief Field _keys, offset 0x30, size 0x8
  __declspec(property(get = __get__keys, put = __set__keys))::System::Collections::ICollection* _keys;

  /// @brief Field _values, offset 0x38, size 0x8
  __declspec(property(get = __get__values, put = __set__values))::System::Collections::ICollection* _values;

  /// @brief Field _keycomparer, offset 0x40, size 0x8
  __declspec(property(get = __get__keycomparer, put = __set__keycomparer))::System::Collections::IEqualityComparer* _keycomparer;

  /// @brief Field _syncRoot, offset 0x48, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field s_serializationInfoTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_serializationInfoTable, put = setStaticF_s_serializationInfoTable))::System::Runtime::CompilerServices::ConditionalWeakTable_2<
      ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* s_serializationInfoTable;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Count)) int32_t Count;

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

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*>& __get__buckets();

  constexpr ::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> const& __get__buckets() const;

  constexpr void __set__buckets(::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> value);

  constexpr int32_t& __get__count();

  constexpr int32_t const& __get__count() const;

  constexpr void __set__count(int32_t value);

  constexpr int32_t& __get__occupancy();

  constexpr int32_t const& __get__occupancy() const;

  constexpr void __set__occupancy(int32_t value);

  constexpr int32_t& __get__loadsize();

  constexpr int32_t const& __get__loadsize() const;

  constexpr void __set__loadsize(int32_t value);

  constexpr float_t& __get__loadFactor();

  constexpr float_t const& __get__loadFactor() const;

  constexpr void __set__loadFactor(float_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr bool& __get__isWriterInProgress();

  constexpr bool const& __get__isWriterInProgress() const;

  constexpr void __set__isWriterInProgress(bool value);

  constexpr ::System::Collections::ICollection*& __get__keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __get__keys() const;

  constexpr void __set__keys(::System::Collections::ICollection* value);

  constexpr ::System::Collections::ICollection*& __get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __get__values() const;

  constexpr void __set__values(::System::Collections::ICollection* value);

  constexpr ::System::Collections::IEqualityComparer*& __get__keycomparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& __get__keycomparer() const;

  constexpr void __set__keycomparer(::System::Collections::IEqualityComparer* value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline void setStaticF_s_serializationInfoTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* value);

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* getStaticF_s_serializationInfoTable();

  /// @brief Method get_SerializationInfoTable addr 0x242c690 size 0x5c virtual false final false
  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable();

  static inline ::System::Collections::Hashtable* New_ctor(bool trash);

  /// @brief Method .ctor addr 0x242c6ec size 0x8 virtual false final false
  inline void _ctor(bool trash);

  static inline ::System::Collections::Hashtable* New_ctor();

  /// @brief Method .ctor addr 0x242c6f4 size 0xc virtual false final false
  inline void _ctor();

  static inline ::System::Collections::Hashtable* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x242c9ac size 0x8 virtual false final false
  inline void _ctor(int32_t capacity);

  static inline ::System::Collections::Hashtable* New_ctor(int32_t capacity, float_t loadFactor);

  /// @brief Method .ctor addr 0x242c700 size 0x2ac virtual false final false
  inline void _ctor(int32_t capacity, float_t loadFactor);

  static inline ::System::Collections::Hashtable* New_ctor(int32_t capacity, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor addr 0x242c9b4 size 0x24 virtual false final false
  inline void _ctor(int32_t capacity, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor addr 0x242c9d8 size 0x2c virtual false final false
  inline void _ctor(::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Hashtable* New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor addr 0x242ca04 size 0x28 virtual false final false
  inline void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Collections::IDictionary* d);

  /// @brief Method .ctor addr 0x242ca2c size 0xc virtual false final false
  inline void _ctor(::System::Collections::IDictionary* d);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Collections::IDictionary* d, float_t loadFactor);

  /// @brief Method .ctor addr 0x242ca38 size 0x8 virtual false final false
  inline void _ctor(::System::Collections::IDictionary* d, float_t loadFactor);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Collections::IDictionary* d, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor addr 0x242ca40 size 0x324 virtual false final false
  inline void _ctor(::System::Collections::IDictionary* d, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x242cd64 size 0x68 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InitHash addr 0x242cdcc size 0x54 virtual false final false
  inline uint32_t InitHash(::System::Object* key, int32_t hashsize, ByRef<uint32_t> seed, ByRef<uint32_t> incr);

  /// @brief Method Add addr 0x242ce20 size 0x8 virtual true final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear addr 0x242d1e8 size 0xa0 virtual true final false
  inline void Clear();

  /// @brief Method Clone addr 0x242d2b4 size 0x114 virtual true final false
  inline ::System::Object* Clone();

  /// @brief Method Contains addr 0x242d3c8 size 0x10 virtual true final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsKey addr 0x242d3d8 size 0x168 virtual true final false
  inline bool ContainsKey(::System::Object* key);

  /// @brief Method CopyKeys addr 0x242d540 size 0xa4 virtual false final false
  inline void CopyKeys(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyEntries addr 0x242d5e4 size 0xf4 virtual false final false
  inline void CopyEntries(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyTo addr 0x242d6d8 size 0x1b0 virtual true final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyValues addr 0x242d888 size 0xb0 virtual false final false
  inline void CopyValues(::System::Array* array, int32_t arrayIndex);

  /// @brief Method get_Item addr 0x242d938 size 0x1e8 virtual true final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method set_Item addr 0x242db20 size 0x8 virtual true final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method expand addr 0x242db28 size 0x6c virtual false final false
  inline void expand();

  /// @brief Method rehash addr 0x242dcb8 size 0x1c virtual false final false
  inline void rehash();

  /// @brief Method UpdateVersion addr 0x242d288 size 0x2c virtual false final false
  inline void UpdateVersion();

  /// @brief Method rehash addr 0x242db94 size 0x124 virtual false final false
  inline void rehash(int32_t newsize);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x242dd84 size 0x64 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumerator addr 0x242de40 size 0x64 virtual true final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetHash addr 0x242dea4 size 0xc8 virtual true final false
  inline int32_t GetHash(::System::Object* key);

  /// @brief Method get_IsReadOnly addr 0x242df6c size 0x8 virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize addr 0x242df74 size 0x8 virtual true final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized addr 0x242df7c size 0x8 virtual true final false
  inline bool get_IsSynchronized();

  /// @brief Method KeyEquals addr 0x242df84 size 0x108 virtual true final false
  inline bool KeyEquals(::System::Object* item, ::System::Object* key);

  /// @brief Method get_Keys addr 0x242e08c size 0x70 virtual true final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_Values addr 0x242e124 size 0x70 virtual true final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method Insert addr 0x242ce28 size 0x3c0 virtual false final false
  inline void Insert(::System::Object* key, ::System::Object* nvalue, bool add);

  /// @brief Method putEntry addr 0x242dcd4 size 0xb0 virtual false final false
  inline void putEntry(::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> newBuckets, ::System::Object* key, ::System::Object* nvalue,
                       int32_t hashcode);

  /// @brief Method Remove addr 0x242e1bc size 0x1e8 virtual true final false
  inline void Remove(::System::Object* key);

  /// @brief Method get_SyncRoot addr 0x242e3a4 size 0x78 virtual true final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Count addr 0x242e41c size 0x8 virtual true final false
  inline int32_t get_Count();

  /// @brief Method Synchronized addr 0x242e424 size 0xb4 virtual false final false
  static inline ::System::Collections::Hashtable* Synchronized(::System::Collections::Hashtable* table);

  /// @brief Method GetObjectData addr 0x242e500 size 0x53c virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialization addr 0x242ea3c size 0x864 virtual true final false
  inline void OnDeserialization(::System::Object* sender);

  // Ctor Parameters [CppParam { name: "", ty: "Hashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hashtable(Hashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hashtable(Hashtable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashtable();

public:
  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> ____buckets;

  /// @brief Field _count, offset: 0x18, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _occupancy, offset: 0x1c, size: 0x4, def value: None
  int32_t ____occupancy;

  /// @brief Field _loadsize, offset: 0x20, size: 0x4, def value: None
  int32_t ____loadsize;

  /// @brief Field _loadFactor, offset: 0x24, size: 0x4, def value: None
  float_t ____loadFactor;

  /// @brief Field _version, offset: 0x28, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _isWriterInProgress, offset: 0x2c, size: 0x1, def value: None
  bool ____isWriterInProgress;

  /// @brief Field _keys, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ICollection* ____keys;

  /// @brief Field _values, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::ICollection* ____values;

  /// @brief Field _keycomparer, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IEqualityComparer* ____keycomparer;

  /// @brief Field _syncRoot, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field HashPrime offset 0xffffffff size 0x4
  static constexpr int32_t HashPrime{ static_cast<int32_t>(0x65) };

  /// @brief Field InitialSize offset 0xffffffff size 0x4
  static constexpr int32_t InitialSize{ static_cast<int32_t>(0x3) };

  /// @brief Field LoadFactorName offset 0xffffffff size 0x8
  static constexpr ::ConstString LoadFactorName{ u"LoadFactor" };

  /// @brief Field VersionName offset 0xffffffff size 0x8
  static constexpr ::ConstString VersionName{ u"Version" };

  /// @brief Field ComparerName offset 0xffffffff size 0x8
  static constexpr ::ConstString ComparerName{ u"Comparer" };

  /// @brief Field HashCodeProviderName offset 0xffffffff size 0x8
  static constexpr ::ConstString HashCodeProviderName{ u"HashCodeProvider" };

  /// @brief Field HashSizeName offset 0xffffffff size 0x8
  static constexpr ::ConstString HashSizeName{ u"HashSize" };

  /// @brief Field KeysName offset 0xffffffff size 0x8
  static constexpr ::ConstString KeysName{ u"Keys" };

  /// @brief Field ValuesName offset 0xffffffff size 0x8
  static constexpr ::ConstString ValuesName{ u"Values" };

  /// @brief Field KeyComparerName offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyComparerName{ u"KeyComparer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Hashtable, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____buckets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____occupancy) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____loadsize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____loadFactor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____isWriterInProgress) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____keys) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____values) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____keycomparer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable, ____syncRoot) == 0x48, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::Hashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable*, "System.Collections", "Hashtable");
NEED_NO_BOX(::System::Collections::__Hashtable__HashtableDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Hashtable__HashtableDebugView*, "System.Collections", "Hashtable/HashtableDebugView");
NEED_NO_BOX(::System::Collections::__Hashtable__HashtableEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Hashtable__HashtableEnumerator*, "System.Collections", "Hashtable/HashtableEnumerator");
NEED_NO_BOX(::System::Collections::__Hashtable__KeyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Hashtable__KeyCollection*, "System.Collections", "Hashtable/KeyCollection");
NEED_NO_BOX(::System::Collections::__Hashtable__ValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Hashtable__ValueCollection*, "System.Collections", "Hashtable/ValueCollection");
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Hashtable__bucket, "System.Collections", "Hashtable/bucket");
