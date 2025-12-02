#pragma once
// IWYU pragma private; include "System/Collections/Hashtable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hashtable)
namespace GlobalNamespace {
class Hashtable_SyncHashtable;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class Hashtable_HashtableDebugView;
}
namespace System::Collections {
class Hashtable_HashtableEnumerator;
}
namespace System::Collections {
class Hashtable_KeyCollection;
}
namespace System::Collections {
class Hashtable_ValueCollection;
}
namespace System::Collections {
struct Hashtable_bucket;
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
class Hashtable_HashtableDebugView;
}
namespace System::Collections {
class Hashtable_HashtableEnumerator;
}
namespace System::Collections {
class Hashtable_KeyCollection;
}
namespace System::Collections {
class Hashtable_ValueCollection;
}
namespace System::Collections {
struct Hashtable_bucket;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Hashtable);
MARK_REF_PTR_T(::System::Collections::Hashtable_HashtableDebugView);
MARK_REF_PTR_T(::System::Collections::Hashtable_HashtableEnumerator);
MARK_REF_PTR_T(::System::Collections::Hashtable_KeyCollection);
MARK_REF_PTR_T(::System::Collections::Hashtable_ValueCollection);
MARK_VAL_T(::System::Collections::Hashtable_bucket);
// Dependencies
namespace System::Collections {
// Is value type: true
// CS Name: System.Collections.Hashtable/bucket
struct CORDL_TYPE Hashtable_bucket {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashtable_bucket();

  // Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "val", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam {
  // name: "hash_coll", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Hashtable_bucket(::System::Object* key, ::System::Object* val, int32_t hash_coll) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3726 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::System::Object* key;

  /// @brief Field val, offset: 0x8, size: 0x8, def value: None
  ::System::Object* val;

  /// @brief Field hash_coll, offset: 0x10, size: 0x4, def value: None
  int32_t hash_coll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Hashtable_bucket, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable_bucket, val) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable_bucket, hash_coll) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Hashtable_bucket, 0x18>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.Hashtable/KeyCollection
class CORDL_TYPE Hashtable_KeyCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field _hashtable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hashtable, put = __cordl_internal_set__hashtable)) ::System::Collections::Hashtable* _hashtable;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x59dbaa0, size 0x178, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x59dbc18, size 0x64, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::Hashtable_KeyCollection* New_ctor(::System::Collections::Hashtable* hashtable);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__hashtable() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__hashtable();

  constexpr void __cordl_internal_set__hashtable(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x59da99c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* hashtable);

  /// @brief Method get_Count, addr 0x59dbcbc, size 0x18, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x59dbc7c, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x59dbc9c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashtable_KeyCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_KeyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hashtable_KeyCollection(Hashtable_KeyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_KeyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hashtable_KeyCollection(Hashtable_KeyCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3727 };

  /// @brief Field _hashtable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____hashtable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Hashtable_KeyCollection, ____hashtable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Hashtable_KeyCollection, 0x18>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.Hashtable/ValueCollection
class CORDL_TYPE Hashtable_ValueCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field _hashtable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hashtable, put = __cordl_internal_set__hashtable)) ::System::Collections::Hashtable* _hashtable;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x59dbcd4, size 0x178, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x59dbe4c, size 0x64, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Collections::Hashtable_ValueCollection* New_ctor(::System::Collections::Hashtable* hashtable);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__hashtable() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__hashtable();

  constexpr void __cordl_internal_set__hashtable(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x59daa00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* hashtable);

  /// @brief Method get_Count, addr 0x59dbef0, size 0x18, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x59dbeb0, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x59dbed0, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashtable_ValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_ValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hashtable_ValueCollection(Hashtable_ValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_ValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hashtable_ValueCollection(Hashtable_ValueCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3728 };

  /// @brief Field _hashtable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____hashtable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Hashtable_ValueCollection, ____hashtable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Hashtable_ValueCollection, 0x18>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.Hashtable/HashtableEnumerator
class CORDL_TYPE Hashtable_HashtableEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field _bucket, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__bucket, put = __cordl_internal_set__bucket)) int32_t _bucket;

  /// @brief Field _current, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) bool _current;

  /// @brief Field _currentKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__currentKey, put = __cordl_internal_set__currentKey)) ::System::Object* _currentKey;

  /// @brief Field _currentValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__currentValue, put = __cordl_internal_set__currentValue)) ::System::Object* _currentValue;

  /// @brief Field _getObjectRetType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__getObjectRetType, put = __cordl_internal_set__getObjectRetType)) int32_t _getObjectRetType;

  /// @brief Field _hashtable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hashtable, put = __cordl_internal_set__hashtable)) ::System::Collections::Hashtable* _hashtable;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x59dc91c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x59dc97c, size 0xf8, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Collections::Hashtable_HashtableEnumerator* New_ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType);

  /// @brief Method Reset, addr 0x59dcc04, size 0x94, virtual true, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get__bucket() const;

  constexpr int32_t& __cordl_internal_get__bucket();

  constexpr bool const& __cordl_internal_get__current() const;

  constexpr bool& __cordl_internal_get__current();

  constexpr ::System::Object* const& __cordl_internal_get__currentKey() const;

  constexpr ::System::Object*& __cordl_internal_get__currentKey();

  constexpr ::System::Object* const& __cordl_internal_get__currentValue() const;

  constexpr ::System::Object*& __cordl_internal_get__currentValue();

  constexpr int32_t const& __cordl_internal_get__getObjectRetType() const;

  constexpr int32_t& __cordl_internal_get__getObjectRetType();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__hashtable() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__hashtable();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__bucket(int32_t value);

  constexpr void __cordl_internal_set__current(bool value);

  constexpr void __cordl_internal_set__currentKey(::System::Object* value);

  constexpr void __cordl_internal_set__currentValue(::System::Object* value);

  constexpr void __cordl_internal_set__getObjectRetType(int32_t value);

  constexpr void __cordl_internal_set__hashtable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x59da6a8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* hashtable, int32_t getObjRetType);

  /// @brief Method get_Current, addr 0x59dcad4, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x59dca74, size 0x60, virtual true, abstract: false, final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x59dc920, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x59dcba8, size 0x5c, virtual true, abstract: false, final false
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
  constexpr Hashtable_HashtableEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_HashtableEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hashtable_HashtableEnumerator(Hashtable_HashtableEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_HashtableEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hashtable_HashtableEnumerator(Hashtable_HashtableEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3730 };

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
static_assert(offsetof(::System::Collections::Hashtable_HashtableEnumerator, ____hashtable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable_HashtableEnumerator, ____bucket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable_HashtableEnumerator, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable_HashtableEnumerator, ____current) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable_HashtableEnumerator, ____getObjectRetType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable_HashtableEnumerator, ____currentKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Hashtable_HashtableEnumerator, ____currentValue) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Hashtable_HashtableEnumerator, 0x38>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.Hashtable/HashtableDebugView
class CORDL_TYPE Hashtable_HashtableDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashtable_HashtableDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_HashtableDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hashtable_HashtableDebugView(Hashtable_HashtableDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_HashtableDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hashtable_HashtableDebugView(Hashtable_HashtableDebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3731 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Hashtable_HashtableDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.Hashtable
class CORDL_TYPE Hashtable : public ::System::Object {
public:
  // Declarations
  using SyncHashtable = ::GlobalNamespace::Hashtable_SyncHashtable;

  using HashtableDebugView = ::System::Collections::Hashtable_HashtableDebugView;

  using HashtableEnumerator = ::System::Collections::Hashtable_HashtableEnumerator;

  using KeyCollection = ::System::Collections::Hashtable_KeyCollection;

  using ValueCollection = ::System::Collections::Hashtable_ValueCollection;

  using bucket = ::System::Collections::Hashtable_bucket;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Keys)) ::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets, put = __cordl_internal_set__buckets)) ::ArrayW<::System::Collections::Hashtable_bucket, ::Array<::System::Collections::Hashtable_bucket>*>
      _buckets;

  /// @brief Field _count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _isWriterInProgress, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__isWriterInProgress, put = __cordl_internal_set__isWriterInProgress)) bool _isWriterInProgress;

  /// @brief Field _keycomparer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__keycomparer, put = __cordl_internal_set__keycomparer)) ::System::Collections::IEqualityComparer* _keycomparer;

  /// @brief Field _keys, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__keys, put = __cordl_internal_set__keys)) ::System::Collections::ICollection* _keys;

  /// @brief Field _loadFactor, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__loadFactor, put = __cordl_internal_set__loadFactor)) float_t _loadFactor;

  /// @brief Field _loadsize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__loadsize, put = __cordl_internal_set__loadsize)) int32_t _loadsize;

  /// @brief Field _occupancy, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__occupancy, put = __cordl_internal_set__occupancy)) int32_t _occupancy;

  /// @brief Field _syncRoot, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Field _values, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::System::Collections::ICollection* _values;

  /// @brief Field _version, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Field s_serializationInfoTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_serializationInfoTable,
                      put = setStaticF_s_serializationInfoTable)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*
      s_serializationInfoTable;

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

  /// @brief Method Add, addr 0x59d96dc, size 0x8, virtual true, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x59d9ab0, size 0x88, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x59d9b4c, size 0x104, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x59d9c50, size 0x10, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsKey, addr 0x59d9c60, size 0x178, virtual true, abstract: false, final false
  inline bool ContainsKey(::System::Object* key);

  /// @brief Method CopyEntries, addr 0x59d9e84, size 0x108, virtual false, abstract: false, final false
  inline void CopyEntries(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyKeys, addr 0x59d9dd8, size 0xac, virtual false, abstract: false, final false
  inline void CopyKeys(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x59d9f8c, size 0x19c, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyValues, addr 0x59da128, size 0xb0, virtual false, abstract: false, final false
  inline void CopyValues(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x59da6e4, size 0x60, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetHash, addr 0x59da744, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetHash(::System::Object* key);

  /// @brief Method GetObjectData, addr 0x59dace4, size 0x560, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InitHash, addr 0x59d9688, size 0x54, virtual false, abstract: false, final false
  inline uint32_t InitHash(::System::Object* key, int32_t hashsize, ::ByRef<uint32_t> seed, ::ByRef<uint32_t> incr);

  /// @brief Method Insert, addr 0x59d96e4, size 0x3cc, virtual false, abstract: false, final false
  inline void Insert(::System::Object* key, ::System::Object* nvalue, bool add);

  /// @brief Method KeyEquals, addr 0x59da834, size 0x10c, virtual true, abstract: false, final false
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

  /// @brief Method OnDeserialization, addr 0x59db244, size 0x85c, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Remove, addr 0x59daa08, size 0x1c4, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method Synchronized, addr 0x59dac40, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Collections::Hashtable* Synchronized(::System::Collections::Hashtable* table);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x59da648, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method UpdateVersion, addr 0x59d9b38, size 0x14, virtual false, abstract: false, final false
  inline void UpdateVersion();

  constexpr ::ArrayW<::System::Collections::Hashtable_bucket, ::Array<::System::Collections::Hashtable_bucket>*> const& __cordl_internal_get__buckets() const;

  constexpr ::ArrayW<::System::Collections::Hashtable_bucket, ::Array<::System::Collections::Hashtable_bucket>*>& __cordl_internal_get__buckets();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr bool const& __cordl_internal_get__isWriterInProgress() const;

  constexpr bool& __cordl_internal_get__isWriterInProgress();

  constexpr ::System::Collections::IEqualityComparer* const& __cordl_internal_get__keycomparer() const;

  constexpr ::System::Collections::IEqualityComparer*& __cordl_internal_get__keycomparer();

  constexpr ::System::Collections::ICollection* const& __cordl_internal_get__keys() const;

  constexpr ::System::Collections::ICollection*& __cordl_internal_get__keys();

  constexpr float_t const& __cordl_internal_get__loadFactor() const;

  constexpr float_t& __cordl_internal_get__loadFactor();

  constexpr int32_t const& __cordl_internal_get__loadsize() const;

  constexpr int32_t& __cordl_internal_get__loadsize();

  constexpr int32_t const& __cordl_internal_get__occupancy() const;

  constexpr int32_t& __cordl_internal_get__occupancy();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::System::Collections::ICollection* const& __cordl_internal_get__values() const;

  constexpr ::System::Collections::ICollection*& __cordl_internal_get__values();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__buckets(::ArrayW<::System::Collections::Hashtable_bucket, ::Array<::System::Collections::Hashtable_bucket>*> value);

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

  /// @brief Method .ctor, addr 0x59d8fb8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x59d925c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x59d92b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x59d8fc4, size 0x298, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, float_t loadFactor);

  /// @brief Method .ctor, addr 0x59d9264, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x59d92dc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* d);

  /// @brief Method .ctor, addr 0x59d92e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* d, float_t loadFactor);

  /// @brief Method .ctor, addr 0x59d92f0, size 0x330, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* d, float_t loadFactor, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x59d9288, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x59d9620, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x59d8fb4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(bool trash);

  /// @brief Method expand, addr 0x59da3e8, size 0x70, virtual false, abstract: false, final false
  inline void expand();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* getStaticF_s_serializationInfoTable();

  /// @brief Method get_Count, addr 0x59dac38, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x59da824, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x59da81c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x59da82c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x59da1d8, size 0x208, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x59da940, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SerializationInfoTable, addr 0x59d8f50, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable();

  /// @brief Method get_SyncRoot, addr 0x59dabcc, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x59da9a4, size 0x5c, virtual true, abstract: false, final false
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

  /// @brief Method putEntry, addr 0x59da590, size 0xb8, virtual false, abstract: false, final false
  inline void putEntry(::ArrayW<::System::Collections::Hashtable_bucket, ::Array<::System::Collections::Hashtable_bucket>*> newBuckets, ::System::Object* key, ::System::Object* nvalue,
                       int32_t hashcode);

  /// @brief Method rehash, addr 0x59da578, size 0x18, virtual false, abstract: false, final false
  inline void rehash();

  /// @brief Method rehash, addr 0x59da458, size 0x120, virtual false, abstract: false, final false
  inline void rehash(int32_t newsize);

  static inline void setStaticF_s_serializationInfoTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* value);

  /// @brief Method set_Item, addr 0x59da3e0, size 0x8, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3732 };

  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Hashtable_bucket, ::Array<::System::Collections::Hashtable_bucket>*> ____buckets;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::System::Collections::Hashtable, 0x50>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::Hashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable*, "System.Collections", "Hashtable");
NEED_NO_BOX(::System::Collections::Hashtable_HashtableDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable_HashtableDebugView*, "System.Collections", "Hashtable/HashtableDebugView");
NEED_NO_BOX(::System::Collections::Hashtable_HashtableEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable_HashtableEnumerator*, "System.Collections", "Hashtable/HashtableEnumerator");
NEED_NO_BOX(::System::Collections::Hashtable_KeyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable_KeyCollection*, "System.Collections", "Hashtable/KeyCollection");
NEED_NO_BOX(::System::Collections::Hashtable_ValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable_ValueCollection*, "System.Collections", "Hashtable/ValueCollection");
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable_bucket, "System.Collections", "Hashtable/bucket");
