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
namespace System::Collections {
class IEqualityComparer;
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
class __Hashtable__SyncHashtable;
}
namespace System::Collections {
class __Hashtable__ValueCollection;
}
namespace System::Collections {
struct __Hashtable__bucket;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
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
class ICloneable;
}
namespace System {
class Object;
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
// CS Name: ::Hashtable::bucket
struct CORDL_TYPE __Hashtable__bucket {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__bucket();

  // Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "val", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam {
  // name: "hash_coll", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Hashtable__bucket(::System::Object* key, ::System::Object* val, int32_t hash_coll) noexcept;

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
// CS Name: ::Hashtable::KeyCollection*
class CORDL_TYPE __Hashtable__KeyCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Field _hashtable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hashtable, put = __cordl_internal_set__hashtable))::System::Collections::Hashtable* _hashtable;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x267dd98, size 0x18c, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x267df24, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::__Hashtable__KeyCollection* New_ctor(::System::Collections::Hashtable* hashtable);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__hashtable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__hashtable() const;

  constexpr void __cordl_internal_set__hashtable(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x267cb8c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* hashtable);

  /// @brief Method get_Count, addr 0x267dfd4, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x267df8c, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x267dfb0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__KeyCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__KeyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashtable__KeyCollection(__Hashtable__KeyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__KeyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashtable__KeyCollection(__Hashtable__KeyCollection const&) = delete;

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
// CS Name: ::Hashtable::ValueCollection*
class CORDL_TYPE __Hashtable__ValueCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Field _hashtable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hashtable, put = __cordl_internal_set__hashtable))::System::Collections::Hashtable* _hashtable;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x267dff0, size 0x18c, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x267e17c, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::__Hashtable__ValueCollection* New_ctor(::System::Collections::Hashtable* hashtable);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__hashtable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__hashtable() const;

  constexpr void __cordl_internal_set__hashtable(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x267cc24, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* hashtable);

  /// @brief Method get_Count, addr 0x267e22c, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x267e1e4, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x267e208, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__ValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__ValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashtable__ValueCollection(__Hashtable__ValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__ValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashtable__ValueCollection(__Hashtable__ValueCollection const&) = delete;

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
// CS Name: ::Hashtable::HashtableEnumerator*
class CORDL_TYPE __Hashtable__HashtableEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field _bucket, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__bucket, put = __cordl_internal_set__bucket)) int32_t _bucket;

  /// @brief Field _current, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) bool _current;

  /// @brief Field _currentKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__currentKey, put = __cordl_internal_set__currentKey))::System::Object* _currentKey;

  /// @brief Field _currentValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__currentValue, put = __cordl_internal_set__currentValue))::System::Object* _currentValue;

  /// @brief Field _getObjectRetType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__getObjectRetType, put = __cordl_internal_set__getObjectRetType)) int32_t _getObjectRetType;

  /// @brief Field _hashtable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hashtable, put = __cordl_internal_set__hashtable))::System::Collections::Hashtable* _hashtable;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x267ecd4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x267ed40, size 0x134, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Collections::__Hashtable__HashtableEnumerator* New_ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType);

  /// @brief Method Reset, addr 0x267f040, size 0xa4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get__bucket() const;

  constexpr int32_t& __cordl_internal_get__bucket();

  constexpr bool const& __cordl_internal_get__current() const;

  constexpr bool& __cordl_internal_get__current();

  constexpr ::System::Object*& __cordl_internal_get__currentKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__currentKey() const;

  constexpr ::System::Object*& __cordl_internal_get__currentValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__currentValue() const;

  constexpr int32_t const& __cordl_internal_get__getObjectRetType() const;

  constexpr int32_t& __cordl_internal_get__getObjectRetType();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__hashtable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__hashtable() const;

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__bucket(int32_t value);

  constexpr void __cordl_internal_set__current(bool value);

  constexpr void __cordl_internal_set__currentKey(::System::Object* value);

  constexpr void __cordl_internal_set__currentValue(::System::Object* value);

  constexpr void __cordl_internal_set__getObjectRetType(int32_t value);

  constexpr void __cordl_internal_set__hashtable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x267c878, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType);

  /// @brief Method get_Current, addr 0x267eef4, size 0xe8, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x267ee74, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x267ecdc, size 0x64, virtual true, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x267efdc, size 0x64, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__HashtableEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__HashtableEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashtable__HashtableEnumerator(__Hashtable__HashtableEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__HashtableEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashtable__HashtableEnumerator(__Hashtable__HashtableEnumerator const&) = delete;

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
// CS Name: ::Hashtable::HashtableDebugView*
class CORDL_TYPE __Hashtable__HashtableDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__HashtableDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__HashtableDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashtable__HashtableDebugView(__Hashtable__HashtableDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__HashtableDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashtable__HashtableDebugView(__Hashtable__HashtableDebugView const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Hashtable__HashtableDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Type: System.Collections::Hashtable
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::Hashtable*
class CORDL_TYPE Hashtable : public ::System::Object {
public:
  // Declarations
  using HashtableDebugView = ::System::Collections::__Hashtable__HashtableDebugView;

  using HashtableEnumerator = ::System::Collections::__Hashtable__HashtableEnumerator;

  using KeyCollection = ::System::Collections::__Hashtable__KeyCollection;

  using SyncHashtable = ::System::Collections::__Hashtable__SyncHashtable;

  using ValueCollection = ::System::Collections::__Hashtable__ValueCollection;

  using bucket = ::System::Collections::__Hashtable__bucket;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets,
                      put = __cordl_internal_set__buckets))::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> _buckets;

  /// @brief Field _count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _isWriterInProgress, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__isWriterInProgress, put = __cordl_internal_set__isWriterInProgress)) bool _isWriterInProgress;

  /// @brief Field _keycomparer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__keycomparer, put = __cordl_internal_set__keycomparer))::System::Collections::IEqualityComparer* _keycomparer;

  /// @brief Field _keys, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__keys, put = __cordl_internal_set__keys))::System::Collections::ICollection* _keys;

  /// @brief Field _loadFactor, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__loadFactor, put = __cordl_internal_set__loadFactor)) float_t _loadFactor;

  /// @brief Field _loadsize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__loadsize, put = __cordl_internal_set__loadsize)) int32_t _loadsize;

  /// @brief Field _occupancy, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__occupancy, put = __cordl_internal_set__occupancy)) int32_t _occupancy;

  /// @brief Field _syncRoot, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field _values, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::System::Collections::ICollection* _values;

  /// @brief Field _version, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Field s_serializationInfoTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_serializationInfoTable, put = setStaticF_s_serializationInfoTable))::System::Runtime::CompilerServices::ConditionalWeakTable_2<
      ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* s_serializationInfoTable;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Add, addr 0x267b898, size 0x8, virtual true, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x267bc60, size 0xa0, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x267bd2c, size 0x114, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x267be40, size 0x10, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsKey, addr 0x267be50, size 0x168, virtual true, abstract: false, final false
  inline bool ContainsKey(::System::Object* key);

  /// @brief Method CopyEntries, addr 0x267c05c, size 0x108, virtual false, abstract: false, final false
  inline void CopyEntries(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyKeys, addr 0x267bfb8, size 0xa4, virtual false, abstract: false, final false
  inline void CopyKeys(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x267c164, size 0x1b0, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyValues, addr 0x267c314, size 0xb0, virtual false, abstract: false, final false
  inline void CopyValues(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x267c8d0, size 0x64, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetHash, addr 0x267c934, size 0xc8, virtual true, abstract: false, final false
  inline int32_t GetHash(::System::Object* key);

  /// @brief Method GetObjectData, addr 0x267cf90, size 0x53c, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InitHash, addr 0x267b844, size 0x54, virtual false, abstract: false, final false
  inline uint32_t InitHash(::System::Object* key, int32_t hashsize, ByRef<uint32_t> seed, ByRef<uint32_t> incr);

  /// @brief Method Insert, addr 0x267b8a0, size 0x3c0, virtual false, abstract: false, final false
  inline void Insert(::System::Object* key, ::System::Object* nvalue, bool add);

  /// @brief Method KeyEquals, addr 0x267ca14, size 0x108, virtual true, abstract: false, final false
  inline bool KeyEquals(::System::Object* item, ::System::Object* key);

  static inline ::System::Collections::Hashtable* New_ctor();

  static inline ::System::Collections::Hashtable* New_ctor(int32_t capacity);

  static inline ::System::Collections::Hashtable* New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Hashtable* New_ctor(int32_t capacity, float_t loadFactor);

  static inline ::System::Collections::Hashtable* New_ctor(int32_t capacity, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Collections::IDictionary* d);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Collections::IDictionary* d, float_t loadFactor);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Collections::IDictionary* d, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Hashtable* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Collections::Hashtable* New_ctor(bool trash);

  /// @brief Method OnDeserialization, addr 0x267d4cc, size 0x850, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Remove, addr 0x267cc4c, size 0x1e8, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method Synchronized, addr 0x267ceb4, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Collections::Hashtable* Synchronized(::System::Collections::Hashtable* table);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x267c814, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method UpdateVersion, addr 0x267bd00, size 0x2c, virtual false, abstract: false, final false
  inline void UpdateVersion();

  constexpr ::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> const& __cordl_internal_get__buckets() const;

  constexpr ::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*>& __cordl_internal_get__buckets();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr bool const& __cordl_internal_get__isWriterInProgress() const;

  constexpr bool& __cordl_internal_get__isWriterInProgress();

  constexpr ::System::Collections::IEqualityComparer*& __cordl_internal_get__keycomparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& __cordl_internal_get__keycomparer() const;

  constexpr ::System::Collections::ICollection*& __cordl_internal_get__keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get__keys() const;

  constexpr float_t const& __cordl_internal_get__loadFactor() const;

  constexpr float_t& __cordl_internal_get__loadFactor();

  constexpr int32_t const& __cordl_internal_get__loadsize() const;

  constexpr int32_t& __cordl_internal_get__loadsize();

  constexpr int32_t const& __cordl_internal_get__occupancy() const;

  constexpr int32_t& __cordl_internal_get__occupancy();

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Collections::ICollection*& __cordl_internal_get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get__values() const;

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__buckets(::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__isWriterInProgress(bool value);

  constexpr void __cordl_internal_set__keycomparer(::System::Collections::IEqualityComparer* value);

  constexpr void __cordl_internal_set__keys(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set__loadFactor(float_t value);

  constexpr void __cordl_internal_set__loadsize(int32_t value);

  constexpr void __cordl_internal_set__occupancy(int32_t value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set__values(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x267b168, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x267b424, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x267b47c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x267b174, size 0x2b0, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, float_t loadFactor);

  /// @brief Method .ctor, addr 0x267b42c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x267b4a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* d);

  /// @brief Method .ctor, addr 0x267b4b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* d, float_t loadFactor);

  /// @brief Method .ctor, addr 0x267b4b8, size 0x324, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* d, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x267b450, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x267b7dc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x267b160, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool trash);

  /// @brief Method expand, addr 0x267c5b4, size 0x70, virtual false, abstract: false, final false
  inline void expand();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* getStaticF_s_serializationInfoTable();

  /// @brief Method get_Count, addr 0x267ceac, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x267ca04, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x267c9fc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x267ca0c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x267c3c4, size 0x1e8, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x267cb1c, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SerializationInfoTable, addr 0x267b104, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable();

  /// @brief Method get_SyncRoot, addr 0x267ce34, size 0x78, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x267cbb4, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method putEntry, addr 0x267c764, size 0xb0, virtual false, abstract: false, final false
  inline void putEntry(::ArrayW<::System::Collections::__Hashtable__bucket, ::Array<::System::Collections::__Hashtable__bucket>*> newBuckets, ::System::Object* key, ::System::Object* nvalue,
                       int32_t hashcode);

  /// @brief Method rehash, addr 0x267c748, size 0x1c, virtual false, abstract: false, final false
  inline void rehash();

  /// @brief Method rehash, addr 0x267c624, size 0x124, virtual false, abstract: false, final false
  inline void rehash(int32_t newsize);

  static inline void setStaticF_s_serializationInfoTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* value);

  /// @brief Method set_Item, addr 0x267c5ac, size 0x8, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashtable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hashtable(Hashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hashtable(Hashtable const&) = delete;

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

  /// @brief Field ComparerName offset 0xffffffff size 0x8
  static constexpr ::ConstString ComparerName{ u"Comparer" };

  /// @brief Field HashCodeProviderName offset 0xffffffff size 0x8
  static constexpr ::ConstString HashCodeProviderName{ u"HashCodeProvider" };

  /// @brief Field HashPrime offset 0xffffffff size 0x4
  static constexpr int32_t HashPrime{ static_cast<int32_t>(0x65) };

  /// @brief Field HashSizeName offset 0xffffffff size 0x8
  static constexpr ::ConstString HashSizeName{ u"HashSize" };

  /// @brief Field InitialSize offset 0xffffffff size 0x4
  static constexpr int32_t InitialSize{ static_cast<int32_t>(0x3) };

  /// @brief Field KeyComparerName offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyComparerName{ u"KeyComparer" };

  /// @brief Field KeysName offset 0xffffffff size 0x8
  static constexpr ::ConstString KeysName{ u"Keys" };

  /// @brief Field LoadFactorName offset 0xffffffff size 0x8
  static constexpr ::ConstString LoadFactorName{ u"LoadFactor" };

  /// @brief Field ValuesName offset 0xffffffff size 0x8
  static constexpr ::ConstString ValuesName{ u"Values" };

  /// @brief Field VersionName offset 0xffffffff size 0x8
  static constexpr ::ConstString VersionName{ u"Version" };

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
