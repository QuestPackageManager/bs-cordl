#pragma once
// IWYU pragma private; include "System/Collections/ListDictionaryInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListDictionaryInternal)
namespace GlobalNamespace {
class __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator;
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
namespace System::Collections {
class __ListDictionaryInternal__DictionaryNode;
}
namespace System::Collections {
class __ListDictionaryInternal__NodeEnumerator;
}
namespace System::Collections {
class __ListDictionaryInternal__NodeKeyValueCollection;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator;
}
namespace System::Collections {
class ListDictionaryInternal;
}
namespace System::Collections {
class __ListDictionaryInternal__DictionaryNode;
}
namespace System::Collections {
class __ListDictionaryInternal__NodeEnumerator;
}
namespace System::Collections {
class __ListDictionaryInternal__NodeKeyValueCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator);
MARK_REF_PTR_T(::System::Collections::ListDictionaryInternal);
MARK_REF_PTR_T(::System::Collections::__ListDictionaryInternal__DictionaryNode);
MARK_REF_PTR_T(::System::Collections::__ListDictionaryInternal__NodeEnumerator);
MARK_REF_PTR_T(::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection);
// Type: ::NodeEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::ListDictionaryInternal::NodeEnumerator*
class CORDL_TYPE __ListDictionaryInternal__NodeEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current)) ::System::Collections::__ListDictionaryInternal__DictionaryNode* current;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::ListDictionaryInternal* list;

  /// @brief Field start, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) bool start;

  /// @brief Field version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x3d587fc, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::__ListDictionaryInternal__NodeEnumerator* New_ctor(::System::Collections::ListDictionaryInternal* list);

  /// @brief Method Reset, addr 0x3d58898, size 0x7c, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::__ListDictionaryInternal__DictionaryNode*& __cordl_internal_get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__ListDictionaryInternal__DictionaryNode*> const& __cordl_internal_get_current() const;

  constexpr ::System::Collections::ListDictionaryInternal*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ListDictionaryInternal*> const& __cordl_internal_get_list() const;

  constexpr bool const& __cordl_internal_get_start() const;

  constexpr bool& __cordl_internal_get_start();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_current(::System::Collections::__ListDictionaryInternal__DictionaryNode* value);

  constexpr void __cordl_internal_set_list(::System::Collections::ListDictionaryInternal* value);

  constexpr void __cordl_internal_set_start(bool value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x3d584e0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ListDictionaryInternal* list);

  /// @brief Method get_Current, addr 0x3d58678, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x3d586dc, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x3d5873c, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x3d5879c, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionaryInternal__NodeEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionaryInternal__NodeEnumerator(__ListDictionaryInternal__NodeEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionaryInternal__NodeEnumerator(__ListDictionaryInternal__NodeEnumerator const&) = delete;

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal* ___list;

  /// @brief Field current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::__ListDictionaryInternal__DictionaryNode* ___current;

  /// @brief Field version, offset: 0x20, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field start, offset: 0x24, size: 0x1, def value: None
  bool ___start;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3772 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ListDictionaryInternal__NodeEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__NodeEnumerator, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__NodeEnumerator, ___current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__NodeEnumerator, ___version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__NodeEnumerator, ___start) == 0x24, "Offset mismatch!");

} // namespace System::Collections
// Type: ::NodeKeyValueEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 38, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator*
class CORDL_TYPE __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current)) ::System::Collections::__ListDictionaryInternal__DictionaryNode* current;

  /// @brief Field isKeys, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_isKeys, put = __cordl_internal_set_isKeys)) bool isKeys;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::ListDictionaryInternal* list;

  /// @brief Field start, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) bool start;

  /// @brief Field version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x3d58c4c, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator* New_ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method Reset, addr 0x3d58ce8, size 0x7c, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::__ListDictionaryInternal__DictionaryNode*& __cordl_internal_get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__ListDictionaryInternal__DictionaryNode*> const& __cordl_internal_get_current() const;

  constexpr bool const& __cordl_internal_get_isKeys() const;

  constexpr bool& __cordl_internal_get_isKeys();

  constexpr ::System::Collections::ListDictionaryInternal*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ListDictionaryInternal*> const& __cordl_internal_get_list() const;

  constexpr bool const& __cordl_internal_get_start() const;

  constexpr bool& __cordl_internal_get_start();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_current(::System::Collections::__ListDictionaryInternal__DictionaryNode* value);

  constexpr void __cordl_internal_set_isKeys(bool value);

  constexpr void __cordl_internal_set_list(::System::Collections::ListDictionaryInternal* value);

  constexpr void __cordl_internal_set_start(bool value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x3d58b8c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method get_Current, addr 0x3d58bd8, size 0x74, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator(__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator(__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator const&) = delete;

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal* ___list;

  /// @brief Field current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::__ListDictionaryInternal__DictionaryNode* ___current;

  /// @brief Field version, offset: 0x20, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field isKeys, offset: 0x24, size: 0x1, def value: None
  bool ___isKeys;

  /// @brief Field start, offset: 0x25, size: 0x1, def value: None
  bool ___start;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator, ___current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator, ___version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator, ___isKeys) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator, ___start) == 0x25, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NodeKeyValueCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::ListDictionaryInternal::NodeKeyValueCollection*
class CORDL_TYPE __ListDictionaryInternal__NodeKeyValueCollection : public ::System::Object {
public:
  // Declarations
  using NodeKeyValueEnumerator = ::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field isKeys, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_isKeys, put = __cordl_internal_set_isKeys)) bool isKeys;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::ListDictionaryInternal* list;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  static inline ::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection* New_ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x3d58914, size 0x1bc, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x3d58ad0, size 0x38, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x3d58b08, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x3d58b10, size 0x18, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3d58b28, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr bool const& __cordl_internal_get_isKeys() const;

  constexpr bool& __cordl_internal_get_isKeys();

  constexpr ::System::Collections::ListDictionaryInternal*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ListDictionaryInternal*> const& __cordl_internal_get_list() const;

  constexpr void __cordl_internal_set_isKeys(bool value);

  constexpr void __cordl_internal_set_list(::System::Collections::ListDictionaryInternal* value);

  /// @brief Method .ctor, addr 0x3d57f38, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionaryInternal__NodeKeyValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeKeyValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionaryInternal__NodeKeyValueCollection(__ListDictionaryInternal__NodeKeyValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeKeyValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionaryInternal__NodeKeyValueCollection(__ListDictionaryInternal__NodeKeyValueCollection const&) = delete;

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal* ___list;

  /// @brief Field isKeys, offset: 0x18, size: 0x1, def value: None
  bool ___isKeys;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3774 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection, ___isKeys) == 0x18, "Offset mismatch!");

} // namespace System::Collections
// Type: ::DictionaryNode
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::ListDictionaryInternal::DictionaryNode*
class CORDL_TYPE __ListDictionaryInternal__DictionaryNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::System::Object* key;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Collections::__ListDictionaryInternal__DictionaryNode* next;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Object* value;

  static inline ::System::Collections::__ListDictionaryInternal__DictionaryNode* New_ctor();

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr ::System::Collections::__ListDictionaryInternal__DictionaryNode*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__ListDictionaryInternal__DictionaryNode*> const& __cordl_internal_get_next() const;

  constexpr ::System::Object*& __cordl_internal_get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr void __cordl_internal_set_next(::System::Collections::__ListDictionaryInternal__DictionaryNode* value);

  constexpr void __cordl_internal_set_value(::System::Object* value);

  /// @brief Method .ctor, addr 0x3d57ec4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionaryInternal__DictionaryNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__DictionaryNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionaryInternal__DictionaryNode(__ListDictionaryInternal__DictionaryNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__DictionaryNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionaryInternal__DictionaryNode(__ListDictionaryInternal__DictionaryNode const&) = delete;

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::__ListDictionaryInternal__DictionaryNode* ___next;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3775 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ListDictionaryInternal__DictionaryNode, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__DictionaryNode, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__DictionaryNode, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__DictionaryNode, ___next) == 0x20, "Offset mismatch!");

} // namespace System::Collections
// Type: System.Collections::ListDictionaryInternal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::ListDictionaryInternal*
class CORDL_TYPE ListDictionaryInternal : public ::System::Object {
public:
  // Declarations
  using DictionaryNode = ::System::Collections::__ListDictionaryInternal__DictionaryNode;

  using NodeEnumerator = ::System::Collections::__ListDictionaryInternal__NodeEnumerator;

  using NodeKeyValueCollection = ::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Keys)) ::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Field count, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field head, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head)) ::System::Collections::__ListDictionaryInternal__DictionaryNode* head;

  /// @brief Field version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x3d58050, size 0x198, virtual true, abstract: false, final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x3d581e8, size 0x14, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x3d581fc, size 0xb4, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x3d582b0, size 0x1d8, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x3d58488, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  static inline ::System::Collections::ListDictionaryInternal* New_ctor();

  /// @brief Method Remove, addr 0x3d5857c, size 0xfc, virtual true, abstract: false, final true
  inline void Remove(::System::Object* key);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3d58524, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Collections::__ListDictionaryInternal__DictionaryNode*& __cordl_internal_get_head();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__ListDictionaryInternal__DictionaryNode*> const& __cordl_internal_get_head() const;

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_head(::System::Collections::__ListDictionaryInternal__DictionaryNode* value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x3d57cc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x3d57ecc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x3d57f70, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3d57f68, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3d57f78, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x3d57ccc, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x3d57ed4, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x3d57f80, size 0x70, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x3d57ff0, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x3d57d80, size 0x144, virtual true, abstract: false, final true
  inline void set_Item(::System::Object* key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionaryInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionaryInternal(ListDictionaryInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionaryInternal(ListDictionaryInternal const&) = delete;

  /// @brief Field head, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::__ListDictionaryInternal__DictionaryNode* ___head;

  /// @brief Field version, offset: 0x18, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3776 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::ListDictionaryInternal, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal, ___head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal, ___count) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal, ____syncRoot) == 0x20, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator*, "System.Collections",
                       "ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator");
NEED_NO_BOX(::System::Collections::ListDictionaryInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ListDictionaryInternal*, "System.Collections", "ListDictionaryInternal");
NEED_NO_BOX(::System::Collections::__ListDictionaryInternal__DictionaryNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__ListDictionaryInternal__DictionaryNode*, "System.Collections", "ListDictionaryInternal/DictionaryNode");
NEED_NO_BOX(::System::Collections::__ListDictionaryInternal__NodeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__ListDictionaryInternal__NodeEnumerator*, "System.Collections", "ListDictionaryInternal/NodeEnumerator");
NEED_NO_BOX(::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection*, "System.Collections", "ListDictionaryInternal/NodeKeyValueCollection");
