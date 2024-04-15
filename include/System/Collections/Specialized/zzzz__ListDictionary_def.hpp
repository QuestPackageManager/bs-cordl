#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListDictionary)
namespace GlobalNamespace {
class __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator;
}
namespace System::Collections::Specialized {
class __ListDictionary__DictionaryNode;
}
namespace System::Collections::Specialized {
class __ListDictionary__NodeEnumerator;
}
namespace System::Collections::Specialized {
class __ListDictionary__NodeKeyValueCollection;
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
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
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
namespace GlobalNamespace {
class __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator;
}
namespace System::Collections::Specialized {
class ListDictionary;
}
namespace System::Collections::Specialized {
class __ListDictionary__DictionaryNode;
}
namespace System::Collections::Specialized {
class __ListDictionary__NodeEnumerator;
}
namespace System::Collections::Specialized {
class __ListDictionary__NodeKeyValueCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator);
MARK_REF_PTR_T(::System::Collections::Specialized::ListDictionary);
MARK_REF_PTR_T(::System::Collections::Specialized::__ListDictionary__DictionaryNode);
MARK_REF_PTR_T(::System::Collections::Specialized::__ListDictionary__NodeEnumerator);
MARK_REF_PTR_T(::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection);
// Type: ::NodeEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::ListDictionary::NodeEnumerator*
class CORDL_TYPE __ListDictionary__NodeEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field _current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current))::System::Collections::Specialized::__ListDictionary__DictionaryNode* _current;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list))::System::Collections::Specialized::ListDictionary* _list;

  /// @brief Field _start, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__start, put = __cordl_internal_set__start)) bool _start;

  /// @brief Field _version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x2e6fcac, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Specialized::__ListDictionary__NodeEnumerator* New_ctor(::System::Collections::Specialized::ListDictionary* list);

  /// @brief Method Reset, addr 0x2e6fd4c, size 0x80, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::Specialized::__ListDictionary__DictionaryNode*& __cordl_internal_get__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__ListDictionary__DictionaryNode*> const& __cordl_internal_get__current() const;

  constexpr ::System::Collections::Specialized::ListDictionary*& __cordl_internal_get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::ListDictionary*> const& __cordl_internal_get__list() const;

  constexpr bool const& __cordl_internal_get__start() const;

  constexpr bool& __cordl_internal_get__start();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__current(::System::Collections::Specialized::__ListDictionary__DictionaryNode* value);

  constexpr void __cordl_internal_set__list(::System::Collections::Specialized::ListDictionary* value);

  constexpr void __cordl_internal_set__start(bool value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x2e6f8c4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::ListDictionary* list);

  /// @brief Method get_Current, addr 0x2e6fb00, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x2e6fb64, size 0x80, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x2e6fbe4, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x2e6fc48, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionary__NodeEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionary__NodeEnumerator(__ListDictionary__NodeEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionary__NodeEnumerator(__ListDictionary__NodeEnumerator const&) = delete;

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary* ____list;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Specialized::__ListDictionary__DictionaryNode* ____current;

  /// @brief Field _version, offset: 0x20, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _start, offset: 0x24, size: 0x1, def value: None
  bool ____start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__ListDictionary__NodeEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__ListDictionary__NodeEnumerator, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__ListDictionary__NodeEnumerator, ____current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__ListDictionary__NodeEnumerator, ____version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__ListDictionary__NodeEnumerator, ____start) == 0x24, "Offset mismatch!");

} // namespace System::Collections::Specialized
// Type: ::NodeKeyValueEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 38, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator*
class CORDL_TYPE __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Field _current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current))::System::Collections::Specialized::__ListDictionary__DictionaryNode* _current;

  /// @brief Field _isKeys, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__isKeys, put = __cordl_internal_set__isKeys)) bool _isKeys;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list))::System::Collections::Specialized::ListDictionary* _list;

  /// @brief Field _start, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get__start, put = __cordl_internal_set__start)) bool _start;

  /// @brief Field _version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x2e700ac, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator* New_ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method Reset, addr 0x2e7014c, size 0x80, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::Specialized::__ListDictionary__DictionaryNode*& __cordl_internal_get__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__ListDictionary__DictionaryNode*> const& __cordl_internal_get__current() const;

  constexpr bool const& __cordl_internal_get__isKeys() const;

  constexpr bool& __cordl_internal_get__isKeys();

  constexpr ::System::Collections::Specialized::ListDictionary*& __cordl_internal_get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::ListDictionary*> const& __cordl_internal_get__list() const;

  constexpr bool const& __cordl_internal_get__start() const;

  constexpr bool& __cordl_internal_get__start();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__current(::System::Collections::Specialized::__ListDictionary__DictionaryNode* value);

  constexpr void __cordl_internal_set__isKeys(bool value);

  constexpr void __cordl_internal_set__list(::System::Collections::Specialized::ListDictionary* value);

  constexpr void __cordl_internal_set__start(bool value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x2e6ffe8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method get_Current, addr 0x2e70034, size 0x78, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator(__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator(__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator const&) = delete;

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary* ____list;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Specialized::__ListDictionary__DictionaryNode* ____current;

  /// @brief Field _version, offset: 0x20, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _isKeys, offset: 0x24, size: 0x1, def value: None
  bool ____isKeys;

  /// @brief Field _start, offset: 0x25, size: 0x1, def value: None
  bool ____start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator, ____current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator, ____version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator, ____isKeys) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator, ____start) == 0x25, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NodeKeyValueCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::ListDictionary::NodeKeyValueCollection*
class CORDL_TYPE __ListDictionary__NodeKeyValueCollection : public ::System::Object {
public:
  // Declarations
  using NodeKeyValueEnumerator = ::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _isKeys, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isKeys, put = __cordl_internal_set__isKeys)) bool _isKeys;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list))::System::Collections::Specialized::ListDictionary* _list;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  static inline ::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection* New_ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x2e6fdcc, size 0x14c, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x2e6ff18, size 0x38, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2e6ff50, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x2e6ff58, size 0x18, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2e6ff70, size 0x78, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr bool const& __cordl_internal_get__isKeys() const;

  constexpr bool& __cordl_internal_get__isKeys();

  constexpr ::System::Collections::Specialized::ListDictionary*& __cordl_internal_get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::ListDictionary*> const& __cordl_internal_get__list() const;

  constexpr void __cordl_internal_set__isKeys(bool value);

  constexpr void __cordl_internal_set__list(::System::Collections::Specialized::ListDictionary* value);

  /// @brief Method .ctor, addr 0x2e6f1e8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionary__NodeKeyValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeKeyValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionary__NodeKeyValueCollection(__ListDictionary__NodeKeyValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeKeyValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionary__NodeKeyValueCollection(__ListDictionary__NodeKeyValueCollection const&) = delete;

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary* ____list;

  /// @brief Field _isKeys, offset: 0x18, size: 0x1, def value: None
  bool ____isKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection, ____isKeys) == 0x18, "Offset mismatch!");

} // namespace System::Collections::Specialized
// Type: ::DictionaryNode
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::ListDictionary::DictionaryNode*
class CORDL_TYPE __ListDictionary__DictionaryNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::System::Object* key;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next))::System::Collections::Specialized::__ListDictionary__DictionaryNode* next;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::System::Object* value;

  static inline ::System::Collections::Specialized::__ListDictionary__DictionaryNode* New_ctor();

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_key() const;

  constexpr ::System::Collections::Specialized::__ListDictionary__DictionaryNode*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__ListDictionary__DictionaryNode*> const& __cordl_internal_get_next() const;

  constexpr ::System::Object*& __cordl_internal_get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr void __cordl_internal_set_next(::System::Collections::Specialized::__ListDictionary__DictionaryNode* value);

  constexpr void __cordl_internal_set_value(::System::Object* value);

  /// @brief Method .ctor, addr 0x2e6f16c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionary__DictionaryNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__DictionaryNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionary__DictionaryNode(__ListDictionary__DictionaryNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__DictionaryNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionary__DictionaryNode(__ListDictionary__DictionaryNode const&) = delete;

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Specialized::__ListDictionary__DictionaryNode* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__ListDictionary__DictionaryNode, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__ListDictionary__DictionaryNode, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__ListDictionary__DictionaryNode, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::__ListDictionary__DictionaryNode, ___next) == 0x20, "Offset mismatch!");

} // namespace System::Collections::Specialized
// Type: System.Collections.Specialized::ListDictionary
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::System.Collections.Specialized::ListDictionary*
class CORDL_TYPE ListDictionary : public ::System::Object {
public:
  // Declarations
  using DictionaryNode = ::System::Collections::Specialized::__ListDictionary__DictionaryNode;

  using NodeEnumerator = ::System::Collections::Specialized::__ListDictionary__NodeEnumerator;

  using NodeKeyValueCollection = ::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Field _syncRoot, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field comparer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer))::System::Collections::IComparer* comparer;

  /// @brief Field count, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field head, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head))::System::Collections::Specialized::__ListDictionary__DictionaryNode* head;

  /// @brief Field version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x2e6f314, size 0x218, virtual true, abstract: false, final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x2e6f52c, size 0x14, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x2e6f540, size 0x154, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x2e6f694, size 0x1d0, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x2e6f864, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  static inline ::System::Collections::Specialized::ListDictionary* New_ctor();

  static inline ::System::Collections::Specialized::ListDictionary* New_ctor(::System::Collections::IComparer* comparer);

  /// @brief Method Remove, addr 0x2e6f968, size 0x198, virtual true, abstract: false, final true
  inline void Remove(::System::Object* key);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2e6f908, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Collections::IComparer*& __cordl_internal_get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& __cordl_internal_get_comparer() const;

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Collections::Specialized::__ListDictionary__DictionaryNode*& __cordl_internal_get_head();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__ListDictionary__DictionaryNode*> const& __cordl_internal_get_head() const;

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::IComparer* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_head(::System::Collections::Specialized::__ListDictionary__DictionaryNode* value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x2e6ee14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2e6ee1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IComparer* comparer);

  /// @brief Method get_Count, addr 0x2e6f174, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x2e6f220, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x2e6f218, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x2e6f228, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x2e6ee44, size 0x164, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x2e6f17c, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x2e6f230, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x2e6f2ac, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x2e6efa8, size 0x1c4, virtual true, abstract: false, final true
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

  /// @brief Field head, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::__ListDictionary__DictionaryNode* ___head;

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
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::ListDictionary, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ___head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ___count) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ___comparer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::ListDictionary, ____syncRoot) == 0x28, "Offset mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator*, "System.Collections.Specialized",
                       "ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator");
NEED_NO_BOX(::System::Collections::Specialized::ListDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::ListDictionary*, "System.Collections.Specialized", "ListDictionary");
NEED_NO_BOX(::System::Collections::Specialized::__ListDictionary__DictionaryNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__ListDictionary__DictionaryNode*, "System.Collections.Specialized", "ListDictionary/DictionaryNode");
NEED_NO_BOX(::System::Collections::Specialized::__ListDictionary__NodeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__ListDictionary__NodeEnumerator*, "System.Collections.Specialized", "ListDictionary/NodeEnumerator");
NEED_NO_BOX(::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection*, "System.Collections.Specialized", "ListDictionary/NodeKeyValueCollection");
