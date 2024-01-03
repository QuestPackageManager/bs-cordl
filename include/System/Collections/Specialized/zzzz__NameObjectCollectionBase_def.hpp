#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameObjectCollectionBase)
namespace System::Collections::Specialized {
class __NameObjectCollectionBase__NameObjectEntry;
}
namespace System::Collections::Specialized {
class __NameObjectCollectionBase__NameObjectKeysEnumerator;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
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
class __NameObjectCollectionBase__NameObjectEntry;
}
namespace System::Collections::Specialized {
class __NameObjectCollectionBase__NameObjectKeysEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::NameObjectCollectionBase);
MARK_REF_PTR_T(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry);
MARK_REF_PTR_T(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator);
// Type: ::NameObjectEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9520))
// CS Name: ::NameObjectCollectionBase::NameObjectEntry*
class CORDL_TYPE __NameObjectCollectionBase__NameObjectEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Key, offset 0x10, size 0x8
  __declspec(property(get = __get_Key, put = __set_Key))::StringW Key;

  /// @brief Field Value, offset 0x18, size 0x8
  __declspec(property(get = __get_Value, put = __set_Value))::System::Object* Value;

  constexpr ::StringW& __get_Key();

  constexpr ::StringW const& __get_Key() const;

  constexpr void __set_Key(::StringW value);

  constexpr ::System::Object*& __get_Value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_Value() const;

  constexpr void __set_Value(::System::Object* value);

  static inline ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry* New_ctor(::StringW name, ::System::Object* value);

  /// @brief Method .ctor, addr 0x2940fe0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "__NameObjectCollectionBase__NameObjectEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NameObjectCollectionBase__NameObjectEntry(__NameObjectCollectionBase__NameObjectEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NameObjectCollectionBase__NameObjectEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NameObjectCollectionBase__NameObjectEntry(__NameObjectCollectionBase__NameObjectEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NameObjectCollectionBase__NameObjectEntry();

public:
  /// @brief Field Key, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Key;

  /// @brief Field Value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry, ___Key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry, ___Value) == 0x18, "Offset mismatch!");

} // namespace System::Collections::Specialized
// Type: ::NameObjectKeysEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9521))
// CS Name: ::NameObjectCollectionBase::NameObjectKeysEnumerator*
class CORDL_TYPE __NameObjectCollectionBase__NameObjectKeysEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pos, offset 0x10, size 0x4
  __declspec(property(get = __get__pos, put = __set__pos)) int32_t _pos;

  /// @brief Field _coll, offset 0x18, size 0x8
  __declspec(property(get = __get__coll, put = __set__coll))::System::Collections::Specialized::NameObjectCollectionBase* _coll;

  /// @brief Field _version, offset 0x20, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __get__pos();

  constexpr int32_t const& __get__pos() const;

  constexpr void __set__pos(int32_t value);

  constexpr ::System::Collections::Specialized::NameObjectCollectionBase*& __get__coll();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::NameObjectCollectionBase*> const& __get__coll() const;

  constexpr void __set__coll(::System::Collections::Specialized::NameObjectCollectionBase* value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  static inline ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator* New_ctor(::System::Collections::Specialized::NameObjectCollectionBase* coll);

  /// @brief Method .ctor, addr 0x294106c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::NameObjectCollectionBase* coll);

  /// @brief Method MoveNext, addr 0x2941518, size 0xe0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x29415f8, size 0x90, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Current, addr 0x2941688, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__NameObjectCollectionBase__NameObjectKeysEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NameObjectCollectionBase__NameObjectKeysEnumerator(__NameObjectCollectionBase__NameObjectKeysEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NameObjectCollectionBase__NameObjectKeysEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NameObjectCollectionBase__NameObjectKeysEnumerator(__NameObjectCollectionBase__NameObjectKeysEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NameObjectCollectionBase__NameObjectKeysEnumerator();

public:
  /// @brief Field _pos, offset: 0x10, size: 0x4, def value: None
  int32_t ____pos;

  /// @brief Field _coll, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Specialized::NameObjectCollectionBase* ____coll;

  /// @brief Field _version, offset: 0x20, size: 0x4, def value: None
  int32_t ____version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator, ____pos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator, ____coll) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator, ____version) == 0x20, "Offset mismatch!");

} // namespace System::Collections::Specialized
// Type: System.Collections.Specialized::NameObjectCollectionBase
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9522))
// CS Name: ::System.Collections.Specialized::NameObjectCollectionBase*
class CORDL_TYPE NameObjectCollectionBase : public ::System::Object {
public:
  // Declarations
  using NameObjectKeysEnumerator = ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator;

  using NameObjectEntry = ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry;

  /// @brief Field _readOnly, offset 0x10, size 0x1
  __declspec(property(get = __get__readOnly, put = __set__readOnly)) bool _readOnly;

  /// @brief Field _entriesArray, offset 0x18, size 0x8
  __declspec(property(get = __get__entriesArray, put = __set__entriesArray))::System::Collections::ArrayList* _entriesArray;

  /// @brief Field _keyComparer, offset 0x20, size 0x8
  __declspec(property(get = __get__keyComparer, put = __set__keyComparer))::System::Collections::IEqualityComparer* _keyComparer;

  /// @brief Field _entriesTable, offset 0x28, size 0x8
  __declspec(property(get = __get__entriesTable, put = __set__entriesTable))::System::Collections::Hashtable* _entriesTable;

  /// @brief Field _nullKeyEntry, offset 0x30, size 0x8
  __declspec(property(get = __get__nullKeyEntry, put = __set__nullKeyEntry))::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry* _nullKeyEntry;

  /// @brief Field _serializationInfo, offset 0x38, size 0x8
  __declspec(property(get = __get__serializationInfo, put = __set__serializationInfo))::System::Runtime::Serialization::SerializationInfo* _serializationInfo;

  /// @brief Field _version, offset 0x40, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _syncRoot, offset 0x48, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field defaultComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultComparer, put = setStaticF_defaultComparer))::System::StringComparer* defaultComparer;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  constexpr bool& __get__readOnly();

  constexpr bool const& __get__readOnly() const;

  constexpr void __set__readOnly(bool value);

  constexpr ::System::Collections::ArrayList*& __get__entriesArray();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__entriesArray() const;

  constexpr void __set__entriesArray(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::IEqualityComparer*& __get__keyComparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& __get__keyComparer() const;

  constexpr void __set__keyComparer(::System::Collections::IEqualityComparer* value);

  constexpr ::System::Collections::Hashtable*& __get__entriesTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__entriesTable() const;

  constexpr void __set__entriesTable(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*& __get__nullKeyEntry();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*> const& __get__nullKeyEntry() const;

  constexpr void __set__nullKeyEntry(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry* value);

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __get__serializationInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __get__serializationInfo() const;

  constexpr void __set__serializationInfo(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline void setStaticF_defaultComparer(::System::StringComparer* value);

  static inline ::System::StringComparer* getStaticF_defaultComparer();

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor();

  /// @brief Method .ctor, addr 0x293cb40, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x293fdd8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x293cd28, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x293cc04, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(::System::DBNull* dummy);

  /// @brief Method .ctor, addr 0x293da9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::DBNull* dummy);

  static inline ::System::Collections::Specialized::NameObjectCollectionBase* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x293cdc0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData, addr 0x293ffd4, size 0x580, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialization, addr 0x2940710, size 0x768, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Reset, addr 0x293fe58, size 0xb8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x293ff10, size 0xc4, virtual false, abstract: false, final false
  inline void Reset(int32_t capacity);

  /// @brief Method FindEntry, addr 0x2940f20, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry* FindEntry(::StringW key);

  /// @brief Method get_IsReadOnly, addr 0x2940fd8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method BaseAdd, addr 0x293d1b4, size 0x164, virtual false, abstract: false, final false
  inline void BaseAdd(::StringW name, ::System::Object* value);

  /// @brief Method BaseRemove, addr 0x293d5d4, size 0x20c, virtual false, abstract: false, final false
  inline void BaseRemove(::StringW name);

  /// @brief Method BaseGet, addr 0x293d19c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Object* BaseGet(::StringW name);

  /// @brief Method BaseSet, addr 0x293d51c, size 0xb0, virtual false, abstract: false, final false
  inline void BaseSet(::StringW name, ::System::Object* value);

  /// @brief Method BaseGet, addr 0x293d884, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Object* BaseGet(int32_t index);

  /// @brief Method BaseGetKey, addr 0x293d9a8, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW BaseGetKey(int32_t index);

  /// @brief Method GetEnumerator, addr 0x294100c, size 0x60, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_Count, addr 0x29410ac, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x29410d0, size 0x31c, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x29413ec, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2941468, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  // Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameObjectCollectionBase(NameObjectCollectionBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameObjectCollectionBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameObjectCollectionBase(NameObjectCollectionBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameObjectCollectionBase();

public:
  /// @brief Field _readOnly, offset: 0x10, size: 0x1, def value: None
  bool ____readOnly;

  /// @brief Field _entriesArray, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____entriesArray;

  /// @brief Field _keyComparer, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IEqualityComparer* ____keyComparer;

  /// @brief Field _entriesTable, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____entriesTable;

  /// @brief Field _nullKeyEntry, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry* ____nullKeyEntry;

  /// @brief Field _serializationInfo, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ____serializationInfo;

  /// @brief Field _version, offset: 0x40, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _syncRoot, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::NameObjectCollectionBase, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____readOnly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____entriesArray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____keyComparer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____entriesTable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____nullKeyEntry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____serializationInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____version) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameObjectCollectionBase, ____syncRoot) == 0x48, "Offset mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::NameObjectCollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameObjectCollectionBase*, "System.Collections.Specialized", "NameObjectCollectionBase");
NEED_NO_BOX(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectEntry*, "System.Collections.Specialized", "NameObjectCollectionBase/NameObjectEntry");
NEED_NO_BOX(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__NameObjectCollectionBase__NameObjectKeysEnumerator*, "System.Collections.Specialized",
                       "NameObjectCollectionBase/NameObjectKeysEnumerator");
