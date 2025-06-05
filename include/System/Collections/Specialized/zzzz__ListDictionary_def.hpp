#pragma once
// IWYU pragma private; include "System/Collections/Specialized/ListDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListDictionary)
namespace System::Collections::Specialized {
class ListDictionary_DictionaryNode;
}
namespace System::Collections::Specialized {
class ListDictionary_NodeEnumerator;
}
namespace System::Collections::Specialized {
class ListDictionary_NodeKeyValueCollection;
}
namespace System::Collections::Specialized {
class NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
class ListDictionary;
}
namespace System::Collections::Specialized {
class ListDictionary_DictionaryNode;
}
namespace System::Collections::Specialized {
class ListDictionary_NodeEnumerator;
}
namespace System::Collections::Specialized {
class ListDictionary_NodeKeyValueCollection;
}
namespace System::Collections::Specialized {
class NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::ListDictionary);
MARK_REF_PTR_T(::System::Collections::Specialized::ListDictionary_DictionaryNode);
MARK_REF_PTR_T(::System::Collections::Specialized::ListDictionary_NodeEnumerator);
MARK_REF_PTR_T(::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection);
MARK_REF_PTR_T(::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator);
// Dependencies System.Collections.IDictionaryEnumerator, System.Collections.IEnumerator, System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.ListDictionary/NodeEnumerator
class CORDL_TYPE ListDictionary_NodeEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field _current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) ::System::Collections::Specialized::ListDictionary_DictionaryNode* _current;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::Specialized::ListDictionary* _list;

  /// @brief Field _start, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__start, put = __cordl_internal_set__start)) bool _start;

  /// @brief Field _version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x4480e38, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Specialized::ListDictionary_NodeEnumerator* New_ctor(::System::Collections::Specialized::ListDictionary* list);

  /// @brief Method Reset, addr 0x4480ed4, size 0x7c, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::Specialized::ListDictionary_DictionaryNode* const& __cordl_internal_get__current() const;

  constexpr ::System::Collections::Specialized::ListDictionary_DictionaryNode*& __cordl_internal_get__current();

  constexpr ::System::Collections::Specialized::ListDictionary* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::Specialized::ListDictionary*& __cordl_internal_get__list();

  constexpr bool const& __cordl_internal_get__start() const;

  constexpr bool& __cordl_internal_get__start();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__current(::System::Collections::Specialized::ListDictionary_DictionaryNode* value);

  constexpr void __cordl_internal_set__list(::System::Collections::Specialized::ListDictionary* value);

  constexpr void __cordl_internal_set__start(bool value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x4480a68, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::ListDictionary* list);

  /// @brief Method get_Current, addr 0x4480c98, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x4480cfc, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x4480d78, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x4480dd8, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionary_NodeEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary_NodeEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionary_NodeEnumerator(ListDictionary_NodeEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary_NodeEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionary_NodeEnumerator(ListDictionary_NodeEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9486 };

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary* ____list;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary_DictionaryNode* ____current;

  /// @brief Field _version, offset: 0x20, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _start, offset: 0x24, size: 0x1, def value: None
  bool ____start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::ListDictionary_NodeEnumerator, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary_NodeEnumerator, ____current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary_NodeEnumerator, ____version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary_NodeEnumerator, ____start) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::ListDictionary_NodeEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Collections::Specialized
// Dependencies System.Collections.IEnumerator, System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
class CORDL_TYPE NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field _current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) ::System::Collections::Specialized::ListDictionary_DictionaryNode* _current;

  /// @brief Field _isKeys, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__isKeys, put = __cordl_internal_set__isKeys)) bool _isKeys;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::Specialized::ListDictionary* _list;

  /// @brief Field _start, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get__start, put = __cordl_internal_set__start)) bool _start;

  /// @brief Field _version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x4481210, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator* New_ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method Reset, addr 0x44812ac, size 0x7c, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::Specialized::ListDictionary_DictionaryNode* const& __cordl_internal_get__current() const;

  constexpr ::System::Collections::Specialized::ListDictionary_DictionaryNode*& __cordl_internal_get__current();

  constexpr bool const& __cordl_internal_get__isKeys() const;

  constexpr bool& __cordl_internal_get__isKeys();

  constexpr ::System::Collections::Specialized::ListDictionary* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::Specialized::ListDictionary*& __cordl_internal_get__list();

  constexpr bool const& __cordl_internal_get__start() const;

  constexpr bool& __cordl_internal_get__start();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__current(::System::Collections::Specialized::ListDictionary_DictionaryNode* value);

  constexpr void __cordl_internal_set__isKeys(bool value);

  constexpr void __cordl_internal_set__list(::System::Collections::Specialized::ListDictionary* value);

  constexpr void __cordl_internal_set__start(bool value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x4481150, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method get_Current, addr 0x448119c, size 0x74, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator(NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator(NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9487 };

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary* ____list;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary_DictionaryNode* ____current;

  /// @brief Field _version, offset: 0x20, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _isKeys, offset: 0x24, size: 0x1, def value: None
  bool ____isKeys;

  /// @brief Field _start, offset: 0x25, size: 0x1, def value: None
  bool ____start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator, ____current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator, ____version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator, ____isKeys) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator, ____start) == 0x25, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Collections::Specialized
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
class CORDL_TYPE ListDictionary_NodeKeyValueCollection : public ::System::Object {
public:
  // Declarations
  using NodeKeyValueEnumerator = ::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _isKeys, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isKeys, put = __cordl_internal_set__isKeys)) bool _isKeys;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::Specialized::ListDictionary* _list;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  static inline ::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection* New_ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x4480f50, size 0x144, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x4481094, size 0x38, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x44810cc, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x44810d4, size 0x18, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x44810ec, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr bool const& __cordl_internal_get__isKeys() const;

  constexpr bool& __cordl_internal_get__isKeys();

  constexpr ::System::Collections::Specialized::ListDictionary* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::Specialized::ListDictionary*& __cordl_internal_get__list();

  constexpr void __cordl_internal_set__isKeys(bool value);

  constexpr void __cordl_internal_set__list(::System::Collections::Specialized::ListDictionary* value);

  /// @brief Method .ctor, addr 0x44803c0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionary_NodeKeyValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary_NodeKeyValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionary_NodeKeyValueCollection(ListDictionary_NodeKeyValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary_NodeKeyValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionary_NodeKeyValueCollection(ListDictionary_NodeKeyValueCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9488 };

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary* ____list;

  /// @brief Field _isKeys, offset: 0x18, size: 0x1, def value: None
  bool ____isKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection, ____isKeys) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection, 0x20>, "Size mismatch!");

} // namespace System::Collections::Specialized
// Dependencies System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.ListDictionary/DictionaryNode
class CORDL_TYPE ListDictionary_DictionaryNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::System::Object* key;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Collections::Specialized::ListDictionary_DictionaryNode* next;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Object* value;

  static inline ::System::Collections::Specialized::ListDictionary_DictionaryNode* New_ctor();

  constexpr ::System::Object* const& __cordl_internal_get_key() const;

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::System::Collections::Specialized::ListDictionary_DictionaryNode* const& __cordl_internal_get_next() const;

  constexpr ::System::Collections::Specialized::ListDictionary_DictionaryNode*& __cordl_internal_get_next();

  constexpr ::System::Object* const& __cordl_internal_get_value() const;

  constexpr ::System::Object*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr void __cordl_internal_set_next(::System::Collections::Specialized::ListDictionary_DictionaryNode* value);

  constexpr void __cordl_internal_set_value(::System::Object* value);

  /// @brief Method .ctor, addr 0x448034c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionary_DictionaryNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary_DictionaryNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionary_DictionaryNode(ListDictionary_DictionaryNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary_DictionaryNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionary_DictionaryNode(ListDictionary_DictionaryNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9489 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary_DictionaryNode* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::ListDictionary_DictionaryNode, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary_DictionaryNode, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary_DictionaryNode, ___next) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::ListDictionary_DictionaryNode, 0x28>, "Size mismatch!");

} // namespace System::Collections::Specialized
// Dependencies System.Collections.ICollection, System.Collections.IDictionary, System.Collections.IEnumerable, System.Object
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.ListDictionary
class CORDL_TYPE ListDictionary : public ::System::Object {
public:
  // Declarations
  using DictionaryNode = ::System::Collections::Specialized::ListDictionary_DictionaryNode;

  using NodeEnumerator = ::System::Collections::Specialized::ListDictionary_NodeEnumerator;

  using NodeKeyValueCollection = ::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Keys)) ::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field _syncRoot, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Field comparer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::IComparer* comparer;

  /// @brief Field count, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field head, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head)) ::System::Collections::Specialized::ListDictionary_DictionaryNode* head;

  /// @brief Field version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x44804dc, size 0x20c, virtual true, abstract: false, final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x44806e8, size 0x14, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x44806fc, size 0x150, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x448084c, size 0x1c4, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x4480a10, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  static inline ::System::Collections::Specialized::ListDictionary* New_ctor();

  static inline ::System::Collections::Specialized::ListDictionary* New_ctor(::System::Collections::IComparer* comparer);

  /// @brief Method Remove, addr 0x4480b04, size 0x194, virtual true, abstract: false, final true
  inline void Remove(::System::Object* key);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4480aac, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::System::Collections::IComparer* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::IComparer*& __cordl_internal_get_comparer();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Collections::Specialized::ListDictionary_DictionaryNode* const& __cordl_internal_get_head() const;

  constexpr ::System::Collections::Specialized::ListDictionary_DictionaryNode*& __cordl_internal_get_head();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::IComparer* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_head(::System::Collections::Specialized::ListDictionary_DictionaryNode* value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x4480000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4480008, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IComparer* comparer);

  /// @brief Method get_Count, addr 0x4480354, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x44803f8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x44803f0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x4480400, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x4480030, size 0x15c, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x448035c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x4480408, size 0x74, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x448047c, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x448018c, size 0x1c0, virtual true, abstract: false, final true
  inline void set_Item(::System::Object* key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionary(ListDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionary(ListDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9490 };

  /// @brief Field head, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary_DictionaryNode* ___head;

  /// @brief Field version, offset: 0x18, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field comparer, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IComparer* ___comparer;

  /// @brief Field _syncRoot, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ___head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ___count) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ___comparer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ____syncRoot) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::ListDictionary, 0x30>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::ListDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::ListDictionary*, "System.Collections.Specialized", "ListDictionary");
NEED_NO_BOX(::System::Collections::Specialized::ListDictionary_DictionaryNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::ListDictionary_DictionaryNode*, "System.Collections.Specialized", "ListDictionary/DictionaryNode");
NEED_NO_BOX(::System::Collections::Specialized::ListDictionary_NodeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::ListDictionary_NodeEnumerator*, "System.Collections.Specialized", "ListDictionary/NodeEnumerator");
NEED_NO_BOX(::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection*, "System.Collections.Specialized", "ListDictionary/NodeKeyValueCollection");
NEED_NO_BOX(::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NodeKeyValueCollection_ListDictionary_NodeKeyValueEnumerator*, "System.Collections.Specialized",
                       "ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator");
