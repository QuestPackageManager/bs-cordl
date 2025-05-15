#pragma once
// IWYU pragma private; include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameObjectCollectionBase)
namespace System::Collections::Specialized {
class NameObjectCollectionBase_NameObjectEntry;
}
namespace System::Collections::Specialized {
class NameObjectCollectionBase_NameObjectKeysEnumerator;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEqualityComparer;
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
class DBNull;
}
namespace System {
class Object;
}
namespace System {
class StringComparer;
}
// Forward declare root types
namespace System::Collections::Specialized {
class NameObjectCollectionBase;
}
namespace System::Collections::Specialized {
class NameObjectCollectionBase_NameObjectEntry;
}
namespace System::Collections::Specialized {
class NameObjectCollectionBase_NameObjectKeysEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::NameObjectCollectionBase);
MARK_REF_PTR_T(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry);
MARK_REF_PTR_T(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator);
// Dependencies System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
class CORDL_TYPE NameObjectCollectionBase_NameObjectEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Key, put = __cordl_internal_set_Key)) ::StringW Key;

  /// @brief Field Value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value)) ::System::Object* Value;

  static inline ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* New_ctor(::StringW name, ::System::Object* value);

  constexpr ::StringW const& __cordl_internal_get_Key() const;

  constexpr ::StringW& __cordl_internal_get_Key();

  constexpr ::System::Object* const& __cordl_internal_get_Value() const;

  constexpr ::System::Object*& __cordl_internal_get_Value();

  constexpr void __cordl_internal_set_Key(::StringW value);

  constexpr void __cordl_internal_set_Value(::System::Object* value);

  /// @brief Method .ctor, addr 0x44867c0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameObjectCollectionBase_NameObjectEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase_NameObjectEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameObjectCollectionBase_NameObjectEntry(NameObjectCollectionBase_NameObjectEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase_NameObjectEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameObjectCollectionBase_NameObjectEntry(NameObjectCollectionBase_NameObjectEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9503 };

  /// @brief Field Key, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Key;

  /// @brief Field Value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry, ___Key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry, ___Value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry, 0x20>, "Size mismatch!");

} // namespace System::Collections::Specialized
// Dependencies System.Collections.IEnumerator, System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
class CORDL_TYPE NameObjectCollectionBase_NameObjectKeysEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field _coll, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__coll, put = __cordl_internal_set__coll)) ::System::Collections::Specialized::NameObjectCollectionBase* _coll;

  /// @brief Field _pos, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__pos, put = __cordl_internal_set__pos)) int32_t _pos;

  /// @brief Field _version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x4486cd8, size 0xd8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator* New_ctor(::System::Collections::Specialized::NameObjectCollectionBase* coll);

  /// @brief Method Reset, addr 0x4486db0, size 0x88, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::Specialized::NameObjectCollectionBase* const& __cordl_internal_get__coll() const;

  constexpr ::System::Collections::Specialized::NameObjectCollectionBase*& __cordl_internal_get__coll();

  constexpr int32_t const& __cordl_internal_get__pos() const;

  constexpr int32_t& __cordl_internal_get__pos();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__coll(::System::Collections::Specialized::NameObjectCollectionBase* value);

  constexpr void __cordl_internal_set__pos(int32_t value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x4486844, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::NameObjectCollectionBase* coll);

  /// @brief Method get_Current, addr 0x4486e38, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameObjectCollectionBase_NameObjectKeysEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase_NameObjectKeysEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameObjectCollectionBase_NameObjectKeysEnumerator(NameObjectCollectionBase_NameObjectKeysEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase_NameObjectKeysEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameObjectCollectionBase_NameObjectKeysEnumerator(NameObjectCollectionBase_NameObjectKeysEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9504 };

  /// @brief Field _pos, offset: 0x10, size: 0x4, def value: None
  int32_t ____pos;

  /// @brief Field _coll, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Specialized::NameObjectCollectionBase* ____coll;

  /// @brief Field _version, offset: 0x20, size: 0x4, def value: None
  int32_t ____version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator, ____pos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator, ____coll) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator, ____version) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Collections::Specialized
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object, System.Runtime.Serialization.IDeserializationCallback, System.Runtime.Serialization.ISerializable
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.NameObjectCollectionBase
class CORDL_TYPE NameObjectCollectionBase : public ::System::Object {
public:
  // Declarations
  using NameObjectEntry = ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry;

  using NameObjectKeysEnumerator = ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _entriesArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__entriesArray, put = __cordl_internal_set__entriesArray)) ::System::Collections::ArrayList* _entriesArray;

  /// @brief Field _entriesTable, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__entriesTable, put = __cordl_internal_set__entriesTable)) ::System::Collections::Hashtable* _entriesTable;

  /// @brief Field _keyComparer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__keyComparer, put = __cordl_internal_set__keyComparer)) ::System::Collections::IEqualityComparer* _keyComparer;

  /// @brief Field _nullKeyEntry, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nullKeyEntry, put = __cordl_internal_set__nullKeyEntry)) ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* _nullKeyEntry;

  /// @brief Field _readOnly, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__readOnly, put = __cordl_internal_set__readOnly)) bool _readOnly;

  /// @brief Field _serializationInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__serializationInfo, put = __cordl_internal_set__serializationInfo)) ::System::Runtime::Serialization::SerializationInfo* _serializationInfo;

  /// @brief Field _syncRoot, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Field _version, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Field defaultComparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultComparer, put = setStaticF_defaultComparer)) ::System::StringComparer* defaultComparer;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method BaseAdd, addr 0x4481a74, size 0x158, virtual false, abstract: false, final false
  inline void BaseAdd(::StringW name, ::System::Object* value);

  /// @brief Method BaseGet, addr 0x4482124, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Object* BaseGet(int32_t index);

  /// @brief Method BaseGet, addr 0x4481a5c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Object* BaseGet(::StringW name);

  /// @brief Method BaseGetKey, addr 0x4482248, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW BaseGetKey(int32_t index);

  /// @brief Method BaseRemove, addr 0x4481e7c, size 0x204, virtual false, abstract: false, final false
  inline void BaseRemove(::StringW name);

  /// @brief Method BaseSet, addr 0x4481dcc, size 0xa8, virtual false, abstract: false, final false
  inline void BaseSet(::StringW name, ::System::Object* value);

  /// @brief Method FindEntry, addr 0x4486700, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* FindEntry(::StringW key);

  /// @brief Method GetEnumerator, addr 0x44867ec, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetObjectData, addr 0x448585c, size 0x588, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor();

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(int32_t capacity);

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(::System::DBNull* dummy);

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialization, addr 0x4485f90, size 0x744, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Reset, addr 0x44856f8, size 0xac, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x44857a4, size 0xb8, virtual false, abstract: false, final false
  inline void Reset(int32_t capacity);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x44868a8, size 0x30c, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x4486c28, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x4486bb4, size 0x74, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__entriesArray() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__entriesArray();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__entriesTable() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__entriesTable();

  constexpr ::System::Collections::IEqualityComparer* const& __cordl_internal_get__keyComparer() const;

  constexpr ::System::Collections::IEqualityComparer*& __cordl_internal_get__keyComparer();

  constexpr ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* const& __cordl_internal_get__nullKeyEntry() const;

  constexpr ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*& __cordl_internal_get__nullKeyEntry();

  constexpr bool const& __cordl_internal_get__readOnly() const;

  constexpr bool& __cordl_internal_get__readOnly();

  constexpr ::System::Runtime::Serialization::SerializationInfo* const& __cordl_internal_get__serializationInfo() const;

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get__serializationInfo();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__entriesArray(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__entriesTable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__keyComparer(::System::Collections::IEqualityComparer* value);

  constexpr void __cordl_internal_set__nullKeyEntry(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* value);

  constexpr void __cordl_internal_set__readOnly(bool value);

  constexpr void __cordl_internal_set__serializationInfo(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x44813f4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44814b8, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x44815dc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x448233c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::DBNull* dummy);

  /// @brief Method .ctor, addr 0x4485678, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x4481674, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::StringComparer* getStaticF_defaultComparer();

  /// @brief Method get_Count, addr 0x4486884, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x44867b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_defaultComparer(::System::StringComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameObjectCollectionBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameObjectCollectionBase(NameObjectCollectionBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameObjectCollectionBase(NameObjectCollectionBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9505 };

  /// @brief Field _readOnly, offset: 0x10, size: 0x1, def value: None
  bool ____readOnly;

  /// @brief Field _entriesArray, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____entriesArray;

  /// @brief Field _keyComparer, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IEqualityComparer* ____keyComparer;

  /// @brief Field _entriesTable, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____entriesTable;

  /// @brief Field _nullKeyEntry, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* ____nullKeyEntry;

  /// @brief Field _serializationInfo, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ____serializationInfo;

  /// @brief Field _version, offset: 0x40, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _syncRoot, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____readOnly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____entriesArray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____keyComparer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____entriesTable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____nullKeyEntry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____serializationInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____syncRoot) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::NameObjectCollectionBase, 0x50>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::NameObjectCollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameObjectCollectionBase*, "System.Collections.Specialized", "NameObjectCollectionBase");
NEED_NO_BOX(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*, "System.Collections.Specialized", "NameObjectCollectionBase/NameObjectEntry");
NEED_NO_BOX(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*, "System.Collections.Specialized", "NameObjectCollectionBase/NameObjectKeysEnumerator");
