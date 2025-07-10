#pragma once
// IWYU pragma private; include "System/Collections/ListDictionaryInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListDictionaryInternal)
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
class IEnumerator;
}
namespace System::Collections {
class ListDictionaryInternal_DictionaryNode;
}
namespace System::Collections {
class ListDictionaryInternal_NodeEnumerator;
}
namespace System::Collections {
class ListDictionaryInternal_NodeKeyValueCollection;
}
namespace System::Collections {
class NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class ListDictionaryInternal;
}
namespace System::Collections {
class ListDictionaryInternal_DictionaryNode;
}
namespace System::Collections {
class ListDictionaryInternal_NodeEnumerator;
}
namespace System::Collections {
class ListDictionaryInternal_NodeKeyValueCollection;
}
namespace System::Collections {
class NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::ListDictionaryInternal);
MARK_REF_PTR_T(::System::Collections::ListDictionaryInternal_DictionaryNode);
MARK_REF_PTR_T(::System::Collections::ListDictionaryInternal_NodeEnumerator);
MARK_REF_PTR_T(::System::Collections::ListDictionaryInternal_NodeKeyValueCollection);
MARK_REF_PTR_T(::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator);
// Dependencies System.Collections.IDictionaryEnumerator, System.Collections.IEnumerator, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.ListDictionaryInternal/NodeEnumerator
class CORDL_TYPE ListDictionaryInternal_NodeEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current)) ::System::Collections::ListDictionaryInternal_DictionaryNode* current;

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

  /// @brief Method MoveNext, addr 0x3db9dc0, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::ListDictionaryInternal_NodeEnumerator* New_ctor(::System::Collections::ListDictionaryInternal* list);

  /// @brief Method Reset, addr 0x3db9e5c, size 0x7c, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::ListDictionaryInternal_DictionaryNode* const& __cordl_internal_get_current() const;

  constexpr ::System::Collections::ListDictionaryInternal_DictionaryNode*& __cordl_internal_get_current();

  constexpr ::System::Collections::ListDictionaryInternal* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::ListDictionaryInternal*& __cordl_internal_get_list();

  constexpr bool const& __cordl_internal_get_start() const;

  constexpr bool& __cordl_internal_get_start();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_current(::System::Collections::ListDictionaryInternal_DictionaryNode* value);

  constexpr void __cordl_internal_set_list(::System::Collections::ListDictionaryInternal* value);

  constexpr void __cordl_internal_set_start(bool value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x3db9aa4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ListDictionaryInternal* list);

  /// @brief Method get_Current, addr 0x3db9c3c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x3db9ca0, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x3db9d00, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x3db9d60, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionaryInternal_NodeEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal_NodeEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionaryInternal_NodeEnumerator(ListDictionaryInternal_NodeEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal_NodeEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionaryInternal_NodeEnumerator(ListDictionaryInternal_NodeEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3772 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal* ___list;

  /// @brief Field current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal_DictionaryNode* ___current;

  /// @brief Field version, offset: 0x20, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field start, offset: 0x24, size: 0x1, def value: None
  bool ___start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::ListDictionaryInternal_NodeEnumerator, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal_NodeEnumerator, ___current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal_NodeEnumerator, ___version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal_NodeEnumerator, ___start) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::ListDictionaryInternal_NodeEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Collections.IEnumerator, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator
class CORDL_TYPE NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current)) ::System::Collections::ListDictionaryInternal_DictionaryNode* current;

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

  /// @brief Method MoveNext, addr 0x3dba210, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator* New_ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method Reset, addr 0x3dba2ac, size 0x7c, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::ListDictionaryInternal_DictionaryNode* const& __cordl_internal_get_current() const;

  constexpr ::System::Collections::ListDictionaryInternal_DictionaryNode*& __cordl_internal_get_current();

  constexpr bool const& __cordl_internal_get_isKeys() const;

  constexpr bool& __cordl_internal_get_isKeys();

  constexpr ::System::Collections::ListDictionaryInternal* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::ListDictionaryInternal*& __cordl_internal_get_list();

  constexpr bool const& __cordl_internal_get_start() const;

  constexpr bool& __cordl_internal_get_start();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_current(::System::Collections::ListDictionaryInternal_DictionaryNode* value);

  constexpr void __cordl_internal_set_isKeys(bool value);

  constexpr void __cordl_internal_set_list(::System::Collections::ListDictionaryInternal* value);

  constexpr void __cordl_internal_set_start(bool value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x3dba150, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method get_Current, addr 0x3dba19c, size 0x74, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator(NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator(NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3773 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal* ___list;

  /// @brief Field current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal_DictionaryNode* ___current;

  /// @brief Field version, offset: 0x20, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field isKeys, offset: 0x24, size: 0x1, def value: None
  bool ___isKeys;

  /// @brief Field start, offset: 0x25, size: 0x1, def value: None
  bool ___start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator, ___current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator, ___version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator, ___isKeys) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator, ___start) == 0x25, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.ListDictionaryInternal/NodeKeyValueCollection
class CORDL_TYPE ListDictionaryInternal_NodeKeyValueCollection : public ::System::Object {
public:
  // Declarations
  using NodeKeyValueEnumerator = ::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator;

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

  static inline ::System::Collections::ListDictionaryInternal_NodeKeyValueCollection* New_ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x3db9ed8, size 0x1bc, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x3dba094, size 0x38, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x3dba0cc, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x3dba0d4, size 0x18, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3dba0ec, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr bool const& __cordl_internal_get_isKeys() const;

  constexpr bool& __cordl_internal_get_isKeys();

  constexpr ::System::Collections::ListDictionaryInternal* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::ListDictionaryInternal*& __cordl_internal_get_list();

  constexpr void __cordl_internal_set_isKeys(bool value);

  constexpr void __cordl_internal_set_list(::System::Collections::ListDictionaryInternal* value);

  /// @brief Method .ctor, addr 0x3db94fc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionaryInternal_NodeKeyValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal_NodeKeyValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionaryInternal_NodeKeyValueCollection(ListDictionaryInternal_NodeKeyValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal_NodeKeyValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionaryInternal_NodeKeyValueCollection(ListDictionaryInternal_NodeKeyValueCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3774 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal* ___list;

  /// @brief Field isKeys, offset: 0x18, size: 0x1, def value: None
  bool ___isKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::ListDictionaryInternal_NodeKeyValueCollection, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal_NodeKeyValueCollection, ___isKeys) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::ListDictionaryInternal_NodeKeyValueCollection, 0x20>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.ListDictionaryInternal/DictionaryNode
class CORDL_TYPE ListDictionaryInternal_DictionaryNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::System::Object* key;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Collections::ListDictionaryInternal_DictionaryNode* next;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Object* value;

  static inline ::System::Collections::ListDictionaryInternal_DictionaryNode* New_ctor();

  constexpr ::System::Object* const& __cordl_internal_get_key() const;

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::System::Collections::ListDictionaryInternal_DictionaryNode* const& __cordl_internal_get_next() const;

  constexpr ::System::Collections::ListDictionaryInternal_DictionaryNode*& __cordl_internal_get_next();

  constexpr ::System::Object* const& __cordl_internal_get_value() const;

  constexpr ::System::Object*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr void __cordl_internal_set_next(::System::Collections::ListDictionaryInternal_DictionaryNode* value);

  constexpr void __cordl_internal_set_value(::System::Object* value);

  /// @brief Method .ctor, addr 0x3db9488, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionaryInternal_DictionaryNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal_DictionaryNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionaryInternal_DictionaryNode(ListDictionaryInternal_DictionaryNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal_DictionaryNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionaryInternal_DictionaryNode(ListDictionaryInternal_DictionaryNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3775 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal_DictionaryNode* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::ListDictionaryInternal_DictionaryNode, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal_DictionaryNode, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal_DictionaryNode, ___next) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::ListDictionaryInternal_DictionaryNode, 0x28>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Collections.ICollection, System.Collections.IDictionary, System.Collections.IEnumerable, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.ListDictionaryInternal
class CORDL_TYPE ListDictionaryInternal : public ::System::Object {
public:
  // Declarations
  using DictionaryNode = ::System::Collections::ListDictionaryInternal_DictionaryNode;

  using NodeEnumerator = ::System::Collections::ListDictionaryInternal_NodeEnumerator;

  using NodeKeyValueCollection = ::System::Collections::ListDictionaryInternal_NodeKeyValueCollection;

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
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head)) ::System::Collections::ListDictionaryInternal_DictionaryNode* head;

  /// @brief Field version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x3db9614, size 0x198, virtual true, abstract: false, final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x3db97ac, size 0x14, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x3db97c0, size 0xb4, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x3db9874, size 0x1d8, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x3db9a4c, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  static inline ::System::Collections::ListDictionaryInternal* New_ctor();

  /// @brief Method Remove, addr 0x3db9b40, size 0xfc, virtual true, abstract: false, final true
  inline void Remove(::System::Object* key);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3db9ae8, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Collections::ListDictionaryInternal_DictionaryNode* const& __cordl_internal_get_head() const;

  constexpr ::System::Collections::ListDictionaryInternal_DictionaryNode*& __cordl_internal_get_head();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_head(::System::Collections::ListDictionaryInternal_DictionaryNode* value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x3db9288, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x3db9490, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x3db9534, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3db952c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3db953c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x3db9290, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x3db9498, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x3db9544, size 0x70, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x3db95b4, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x3db9344, size 0x144, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3776 };

  /// @brief Field head, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal_DictionaryNode* ___head;

  /// @brief Field version, offset: 0x18, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::ListDictionaryInternal, ___head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal, ___count) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ListDictionaryInternal, ____syncRoot) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::ListDictionaryInternal, 0x28>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::ListDictionaryInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ListDictionaryInternal*, "System.Collections", "ListDictionaryInternal");
NEED_NO_BOX(::System::Collections::ListDictionaryInternal_DictionaryNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ListDictionaryInternal_DictionaryNode*, "System.Collections", "ListDictionaryInternal/DictionaryNode");
NEED_NO_BOX(::System::Collections::ListDictionaryInternal_NodeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ListDictionaryInternal_NodeEnumerator*, "System.Collections", "ListDictionaryInternal/NodeEnumerator");
NEED_NO_BOX(::System::Collections::ListDictionaryInternal_NodeKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ListDictionaryInternal_NodeKeyValueCollection*, "System.Collections", "ListDictionaryInternal/NodeKeyValueCollection");
NEED_NO_BOX(::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::NodeKeyValueCollection_ListDictionaryInternal_NodeKeyValueEnumerator*, "System.Collections",
                       "ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator");
