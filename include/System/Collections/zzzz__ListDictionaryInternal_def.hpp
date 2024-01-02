#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListDictionaryInternal)
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class __ListDictionaryInternal__NodeKeyValueCollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class __ListDictionaryInternal__DictionaryNode;
}
namespace System::Collections {
class __ListDictionaryInternal__NodeEnumerator;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace GlobalNamespace {
class __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator;
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3765))
// CS Name: ::ListDictionaryInternal::NodeEnumerator*
class CORDL_TYPE __ListDictionaryInternal__NodeEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __get_list, put = __set_list))::System::Collections::ListDictionaryInternal* list;

  /// @brief Field current, offset 0x18, size 0x8
  __declspec(property(get = __get_current, put = __set_current))::System::Collections::__ListDictionaryInternal__DictionaryNode* current;

  /// @brief Field version, offset 0x20, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field start, offset 0x24, size 0x1
  __declspec(property(get = __get_start, put = __set_start)) bool start;

  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::ListDictionaryInternal*& __get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ListDictionaryInternal*> const& __get_list() const;

  constexpr void __set_list(::System::Collections::ListDictionaryInternal* value);

  constexpr ::System::Collections::__ListDictionaryInternal__DictionaryNode*& __get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__ListDictionaryInternal__DictionaryNode*> const& __get_current() const;

  constexpr void __set_current(::System::Collections::__ListDictionaryInternal__DictionaryNode* value);

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr bool& __get_start();

  constexpr bool const& __get_start() const;

  constexpr void __set_start(bool value);

  static inline ::System::Collections::__ListDictionaryInternal__NodeEnumerator* New_ctor(::System::Collections::ListDictionaryInternal* list);

  /// @brief Method .ctor, addr 0x257d164, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ListDictionaryInternal* list);

  /// @brief Method get_Current, addr 0x257d308, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x257d36c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x257d3d0, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x257d434, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Method MoveNext, addr 0x257d498, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x257d538, size 0x80, virtual true, abstract: false, final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionaryInternal__NodeEnumerator(__ListDictionaryInternal__NodeEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionaryInternal__NodeEnumerator(__ListDictionaryInternal__NodeEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionaryInternal__NodeEnumerator();

public:
  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal* ___list;

  /// @brief Field current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::__ListDictionaryInternal__DictionaryNode* ___current;

  /// @brief Field version, offset: 0x20, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field start, offset: 0x24, size: 0x1, def value: None
  bool ___start;

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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 38, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3766))
// CS Name: ::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator*
class CORDL_TYPE __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __get_list, put = __set_list))::System::Collections::ListDictionaryInternal* list;

  /// @brief Field current, offset 0x18, size 0x8
  __declspec(property(get = __get_current, put = __set_current))::System::Collections::__ListDictionaryInternal__DictionaryNode* current;

  /// @brief Field version, offset 0x20, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field isKeys, offset 0x24, size 0x1
  __declspec(property(get = __get_isKeys, put = __set_isKeys)) bool isKeys;

  /// @brief Field start, offset 0x25, size 0x1
  __declspec(property(get = __get_start, put = __set_start)) bool start;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::ListDictionaryInternal*& __get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ListDictionaryInternal*> const& __get_list() const;

  constexpr void __set_list(::System::Collections::ListDictionaryInternal* value);

  constexpr ::System::Collections::__ListDictionaryInternal__DictionaryNode*& __get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__ListDictionaryInternal__DictionaryNode*> const& __get_current() const;

  constexpr void __set_current(::System::Collections::__ListDictionaryInternal__DictionaryNode* value);

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr bool& __get_isKeys();

  constexpr bool const& __get_isKeys() const;

  constexpr void __set_isKeys(bool value);

  constexpr bool& __get_start();

  constexpr bool const& __get_start() const;

  constexpr void __set_start(bool value);

  static inline ::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator* New_ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method .ctor, addr 0x257d854, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method get_Current, addr 0x257d8a0, size 0x78, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method MoveNext, addr 0x257d918, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x257d9b8, size 0x80, virtual true, abstract: false, final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator(__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator(__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator();

public:
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3767))
// CS Name: ::ListDictionaryInternal::NodeKeyValueCollection*
class CORDL_TYPE __ListDictionaryInternal__NodeKeyValueCollection : public ::System::Object {
public:
  // Declarations
  using NodeKeyValueEnumerator = ::GlobalNamespace::__ListDictionaryInternal__NodeKeyValueCollection__NodeKeyValueEnumerator;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __get_list, put = __set_list))::System::Collections::ListDictionaryInternal* list;

  /// @brief Field isKeys, offset 0x18, size 0x1
  __declspec(property(get = __get_isKeys, put = __set_isKeys)) bool isKeys;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::ListDictionaryInternal*& __get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ListDictionaryInternal*> const& __get_list() const;

  constexpr void __set_list(::System::Collections::ListDictionaryInternal* value);

  constexpr bool& __get_isKeys();

  constexpr bool const& __get_isKeys() const;

  constexpr void __set_isKeys(bool value);

  static inline ::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection* New_ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method .ctor, addr 0x257cb84, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ListDictionaryInternal* list, bool isKeys);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x257d5b8, size 0x1cc, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x257d784, size 0x38, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x257d7bc, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x257d7c4, size 0x18, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x257d7dc, size 0x78, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeKeyValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionaryInternal__NodeKeyValueCollection(__ListDictionaryInternal__NodeKeyValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__NodeKeyValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionaryInternal__NodeKeyValueCollection(__ListDictionaryInternal__NodeKeyValueCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionaryInternal__NodeKeyValueCollection();

public:
  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ListDictionaryInternal* ___list;

  /// @brief Field isKeys, offset: 0x18, size: 0x1, def value: None
  bool ___isKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection, ___isKeys) == 0x18, "Offset mismatch!");

} // namespace System::Collections
// Type: ::DictionaryNode
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3768))
// CS Name: ::ListDictionaryInternal::DictionaryNode*
class CORDL_TYPE __ListDictionaryInternal__DictionaryNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::System::Object* key;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::System::Object* value;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::System::Collections::__ListDictionaryInternal__DictionaryNode* next;

  constexpr ::System::Object*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_key() const;

  constexpr void __set_key(::System::Object* value);

  constexpr ::System::Object*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_value() const;

  constexpr void __set_value(::System::Object* value);

  constexpr ::System::Collections::__ListDictionaryInternal__DictionaryNode*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__ListDictionaryInternal__DictionaryNode*> const& __get_next() const;

  constexpr void __set_next(::System::Collections::__ListDictionaryInternal__DictionaryNode* value);

  static inline ::System::Collections::__ListDictionaryInternal__DictionaryNode* New_ctor();

  /// @brief Method .ctor, addr 0x257cb08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__DictionaryNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionaryInternal__DictionaryNode(__ListDictionaryInternal__DictionaryNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionaryInternal__DictionaryNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionaryInternal__DictionaryNode(__ListDictionaryInternal__DictionaryNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionaryInternal__DictionaryNode();

public:
  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::__ListDictionaryInternal__DictionaryNode* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ListDictionaryInternal__DictionaryNode, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__DictionaryNode, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__DictionaryNode, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ListDictionaryInternal__DictionaryNode, ___next) == 0x20, "Offset mismatch!");

} // namespace System::Collections
// Type: System.Collections::ListDictionaryInternal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3769))
// CS Name: ::System.Collections::ListDictionaryInternal*
class CORDL_TYPE ListDictionaryInternal : public ::System::Object {
public:
  // Declarations
  using DictionaryNode = ::System::Collections::__ListDictionaryInternal__DictionaryNode;

  using NodeKeyValueCollection = ::System::Collections::__ListDictionaryInternal__NodeKeyValueCollection;

  using NodeEnumerator = ::System::Collections::__ListDictionaryInternal__NodeEnumerator;

  /// @brief Field head, offset 0x10, size 0x8
  __declspec(property(get = __get_head, put = __set_head))::System::Collections::__ListDictionaryInternal__DictionaryNode* head;

  /// @brief Field version, offset 0x18, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field count, offset 0x1c, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::__ListDictionaryInternal__DictionaryNode*& __get_head();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__ListDictionaryInternal__DictionaryNode*> const& __get_head() const;

  constexpr void __set_head(::System::Collections::__ListDictionaryInternal__DictionaryNode* value);

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline ::System::Collections::ListDictionaryInternal* New_ctor();

  /// @brief Method .ctor, addr 0x257c900, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x257c908, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method set_Item, addr 0x257c9c0, size 0x148, virtual true, abstract: false, final true
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method get_Count, addr 0x257cb10, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Keys, addr 0x257cb18, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_IsReadOnly, addr 0x257cbb4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize, addr 0x257cbbc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized, addr 0x257cbc4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x257cbcc, size 0x78, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x257cc44, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method Add, addr 0x257ccac, size 0x1a4, virtual true, abstract: false, final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x257ce50, size 0x14, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x257ce64, size 0xb8, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x257cf1c, size 0x1e8, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x257d104, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x257d1a8, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Remove, addr 0x257d208, size 0x100, virtual true, abstract: false, final true
  inline void Remove(::System::Object* key);

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionaryInternal(ListDictionaryInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionaryInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionaryInternal(ListDictionaryInternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionaryInternal();

public:
  /// @brief Field head, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::__ListDictionaryInternal__DictionaryNode* ___head;

  /// @brief Field version, offset: 0x18, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

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
