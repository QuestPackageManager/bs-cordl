#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortedList)
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class __SortedList__SyncSortedList;
}
namespace System {
class Object;
}
namespace System::Collections {
class __SortedList__ValueList;
}
namespace System::Collections {
class __SortedList__SortedListDebugView;
}
namespace System {
class ICloneable;
}
namespace System::Collections {
class __SortedList__SortedListEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class __SortedList__KeyList;
}
namespace System {
class Array;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::Collections {
class SortedList;
}
namespace System::Collections {
class __SortedList__KeyList;
}
namespace System::Collections {
class __SortedList__SortedListDebugView;
}
namespace System::Collections {
class __SortedList__SortedListEnumerator;
}
namespace System::Collections {
class __SortedList__ValueList;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::SortedList);
MARK_REF_PTR_T(::System::Collections::__SortedList__KeyList);
MARK_REF_PTR_T(::System::Collections::__SortedList__SortedListDebugView);
MARK_REF_PTR_T(::System::Collections::__SortedList__SortedListEnumerator);
MARK_REF_PTR_T(::System::Collections::__SortedList__ValueList);
// Type: ::SortedListEnumerator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3779))
// CS Name: ::SortedList::SortedListEnumerator*
class CORDL_TYPE __SortedList__SortedListEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _sortedList, offset 0x10, size 0x8
  __declspec(property(get = __get__sortedList, put = __set__sortedList))::System::Collections::SortedList* _sortedList;

  /// @brief Field _key, offset 0x18, size 0x8
  __declspec(property(get = __get__key, put = __set__key))::System::Object* _key;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::System::Object* _value;

  /// @brief Field _index, offset 0x28, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  /// @brief Field _startIndex, offset 0x2c, size 0x4
  __declspec(property(get = __get__startIndex, put = __set__startIndex)) int32_t _startIndex;

  /// @brief Field _endIndex, offset 0x30, size 0x4
  __declspec(property(get = __get__endIndex, put = __set__endIndex)) int32_t _endIndex;

  /// @brief Field _version, offset 0x34, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _current, offset 0x38, size 0x1
  __declspec(property(get = __get__current, put = __set__current)) bool _current;

  /// @brief Field _getObjectRetType, offset 0x3c, size 0x4
  __declspec(property(get = __get__getObjectRetType, put = __set__getObjectRetType)) int32_t _getObjectRetType;

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

  constexpr ::System::Collections::SortedList*& __get__sortedList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __get__sortedList() const;

  constexpr void __set__sortedList(::System::Collections::SortedList* value);

  constexpr ::System::Object*& __get__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__key() const;

  constexpr void __set__key(::System::Object* value);

  constexpr ::System::Object*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__value() const;

  constexpr void __set__value(::System::Object* value);

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  constexpr int32_t& __get__startIndex();

  constexpr int32_t const& __get__startIndex() const;

  constexpr void __set__startIndex(int32_t value);

  constexpr int32_t& __get__endIndex();

  constexpr int32_t const& __get__endIndex() const;

  constexpr void __set__endIndex(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr bool& __get__current();

  constexpr bool const& __get__current() const;

  constexpr void __set__current(bool value);

  constexpr int32_t& __get__getObjectRetType();

  constexpr int32_t const& __get__getObjectRetType() const;

  constexpr void __set__getObjectRetType(int32_t value);

  static inline ::System::Collections::__SortedList__SortedListEnumerator* New_ctor(::System::Collections::SortedList* sortedList, int32_t index, int32_t count, int32_t getObjRetType);

  /// @brief Method .ctor, addr 0x2580930, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* sortedList, int32_t index, int32_t count, int32_t getObjRetType);

  /// @brief Method Clone, addr 0x25821bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method get_Key, addr 0x25821c4, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method MoveNext, addr 0x2582268, size 0xec, virtual true, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method get_Entry, addr 0x2582354, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Current, addr 0x25823fc, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_Value, addr 0x25824d0, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method Reset, addr 0x2582574, size 0x84, virtual true, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SortedListEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList__SortedListEnumerator(__SortedList__SortedListEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SortedListEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList__SortedListEnumerator(__SortedList__SortedListEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList__SortedListEnumerator();

public:
  /// @brief Field _sortedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::SortedList* ____sortedList;

  /// @brief Field _key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____key;

  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____value;

  /// @brief Field _index, offset: 0x28, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _startIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ____startIndex;

  /// @brief Field _endIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____endIndex;

  /// @brief Field _version, offset: 0x34, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _current, offset: 0x38, size: 0x1, def value: None
  bool ____current;

  /// @brief Field _getObjectRetType, offset: 0x3c, size: 0x4, def value: None
  int32_t ____getObjectRetType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__SortedList__SortedListEnumerator, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SortedListEnumerator, ____sortedList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SortedListEnumerator, ____key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SortedListEnumerator, ____value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SortedListEnumerator, ____index) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SortedListEnumerator, ____startIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SortedListEnumerator, ____endIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SortedListEnumerator, ____version) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SortedListEnumerator, ____current) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SortedListEnumerator, ____getObjectRetType) == 0x3c, "Offset mismatch!");

} // namespace System::Collections
// Type: ::KeyList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3780))
// CS Name: ::SortedList::KeyList*
class CORDL_TYPE __SortedList__KeyList : public ::System::Object {
public:
  // Declarations
  /// @brief Field sortedList, offset 0x10, size 0x8
  __declspec(property(get = __get_sortedList, put = __set_sortedList))::System::Collections::SortedList* sortedList;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::SortedList*& __get_sortedList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __get_sortedList() const;

  constexpr void __set_sortedList(::System::Collections::SortedList* value);

  static inline ::System::Collections::__SortedList__KeyList* New_ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method .ctor, addr 0x2580b2c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method get_Count, addr 0x25825f8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x2582614, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize, addr 0x258261c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized, addr 0x2582624, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x2582648, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method Add, addr 0x258266c, size 0x50, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* key);

  /// @brief Method Clear, addr 0x25826bc, size 0x50, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x258270c, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x2582730, size 0xd0, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method Insert, addr 0x2582800, size 0x50, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* value);

  /// @brief Method get_Item, addr 0x2582850, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x2582874, size 0x50, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

  /// @brief Method GetEnumerator, addr 0x25828c4, size 0x90, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x2582954, size 0xcc, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* key);

  /// @brief Method Remove, addr 0x2582a20, size 0x50, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method RemoveAt, addr 0x2582a70, size 0x50, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__KeyList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList__KeyList(__SortedList__KeyList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__KeyList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList__KeyList(__SortedList__KeyList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList__KeyList();

public:
  /// @brief Field sortedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::SortedList* ___sortedList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__SortedList__KeyList, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__KeyList, ___sortedList) == 0x10, "Offset mismatch!");

} // namespace System::Collections
// Type: ::ValueList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3781))
// CS Name: ::SortedList::ValueList*
class CORDL_TYPE __SortedList__ValueList : public ::System::Object {
public:
  // Declarations
  /// @brief Field sortedList, offset 0x10, size 0x8
  __declspec(property(get = __get_sortedList, put = __set_sortedList))::System::Collections::SortedList* sortedList;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::SortedList*& __get_sortedList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __get_sortedList() const;

  constexpr void __set_sortedList(::System::Collections::SortedList* value);

  static inline ::System::Collections::__SortedList__ValueList* New_ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method .ctor, addr 0x2580bc4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method get_Count, addr 0x2582ac0, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x2582adc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize, addr 0x2582ae4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized, addr 0x2582aec, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x2582b10, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method Add, addr 0x2582b34, size 0x50, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* key);

  /// @brief Method Clear, addr 0x2582b84, size 0x50, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x2582bd4, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* value);

  /// @brief Method CopyTo, addr 0x2582bf8, size 0xd0, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method Insert, addr 0x2582cc8, size 0x50, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* value);

  /// @brief Method get_Item, addr 0x2582d18, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x2582d3c, size 0x50, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

  /// @brief Method GetEnumerator, addr 0x2582d8c, size 0x90, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x2582e1c, size 0x78, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Remove, addr 0x2582e94, size 0x50, virtual true, abstract: false, final false
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt, addr 0x2582ee4, size 0x50, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__ValueList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList__ValueList(__SortedList__ValueList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__ValueList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList__ValueList(__SortedList__ValueList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList__ValueList();

public:
  /// @brief Field sortedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::SortedList* ___sortedList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__SortedList__ValueList, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__ValueList, ___sortedList) == 0x10, "Offset mismatch!");

} // namespace System::Collections
// Type: ::SortedListDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3782))
// CS Name: ::SortedList::SortedListDebugView*
class CORDL_TYPE __SortedList__SortedListDebugView : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SortedListDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList__SortedListDebugView(__SortedList__SortedListDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SortedListDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList__SortedListDebugView(__SortedList__SortedListDebugView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList__SortedListDebugView();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__SortedList__SortedListDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Type: System.Collections::SortedList
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3783))
// CS Name: ::System.Collections::SortedList*
class CORDL_TYPE SortedList : public ::System::Object {
public:
  // Declarations
  using SortedListDebugView = ::System::Collections::__SortedList__SortedListDebugView;

  using ValueList = ::System::Collections::__SortedList__ValueList;

  using KeyList = ::System::Collections::__SortedList__KeyList;

  using SortedListEnumerator = ::System::Collections::__SortedList__SortedListEnumerator;

  using SyncSortedList = ::System::Collections::__SortedList__SyncSortedList;

  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __get_keys, put = __set_keys))::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys;

  /// @brief Field values, offset 0x18, size 0x8
  __declspec(property(get = __get_values, put = __set_values))::ArrayW<::System::Object*, ::Array<::System::Object*>*> values;

  /// @brief Field _size, offset 0x20, size 0x4
  __declspec(property(get = __get__size, put = __set__size)) int32_t _size;

  /// @brief Field version, offset 0x24, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __get_comparer, put = __set_comparer))::System::Collections::IComparer* comparer;

  /// @brief Field keyList, offset 0x30, size 0x8
  __declspec(property(get = __get_keyList, put = __set_keyList))::System::Collections::__SortedList__KeyList* keyList;

  /// @brief Field valueList, offset 0x38, size 0x8
  __declspec(property(get = __get_valueList, put = __set_valueList))::System::Collections::__SortedList__ValueList* valueList;

  /// @brief Field _syncRoot, offset 0x40, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_keys();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_keys() const;

  constexpr void __set_keys(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_values();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_values() const;

  constexpr void __set_values(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr int32_t& __get__size();

  constexpr int32_t const& __get__size() const;

  constexpr void __set__size(int32_t value);

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr ::System::Collections::IComparer*& __get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& __get_comparer() const;

  constexpr void __set_comparer(::System::Collections::IComparer* value);

  constexpr ::System::Collections::__SortedList__KeyList*& __get_keyList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__SortedList__KeyList*> const& __get_keyList() const;

  constexpr void __set_keyList(::System::Collections::__SortedList__KeyList* value);

  constexpr ::System::Collections::__SortedList__ValueList*& __get_valueList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__SortedList__ValueList*> const& __get_valueList() const;

  constexpr void __set_valueList(::System::Collections::__SortedList__ValueList* value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline ::System::Collections::SortedList* New_ctor();

  /// @brief Method .ctor, addr 0x257fc40, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x257fc5c, size 0x130, virtual false, abstract: false, final false
  inline void Init();

  static inline ::System::Collections::SortedList* New_ctor(int32_t initialCapacity);

  /// @brief Method .ctor, addr 0x257fd8c, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity);

  static inline ::System::Collections::SortedList* New_ctor(::System::Collections::IComparer* comparer);

  /// @brief Method .ctor, addr 0x257fecc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IComparer* comparer);

  /// @brief Method Add, addr 0x257ff00, size 0x130, virtual true, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method set_Capacity, addr 0x2580160, size 0x1e8, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method get_Count, addr 0x2580348, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Keys, addr 0x2580350, size 0x10, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_Values, addr 0x2580360, size 0x10, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method get_IsReadOnly, addr 0x2580370, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize, addr 0x2580378, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized, addr 0x2580380, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x2580388, size 0x78, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method Clear, addr 0x2580400, size 0x44, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x2580444, size 0xac, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x25804f0, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsValue, addr 0x2580514, size 0x24, virtual true, abstract: false, final false
  inline bool ContainsValue(::System::Object* value);

  /// @brief Method CopyTo, addr 0x2580538, size 0x280, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method EnsureCapacity, addr 0x25807b8, size 0x4c, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method GetByIndex, addr 0x2580804, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Object* GetByIndex(int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x25808c0, size 0x70, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumerator, addr 0x2580990, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetKey, addr 0x2580a00, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Object* GetKey(int32_t index);

  /// @brief Method GetKeyList, addr 0x2580abc, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetKeyList();

  /// @brief Method GetValueList, addr 0x2580b54, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetValueList();

  /// @brief Method get_Item, addr 0x2580bec, size 0x50, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method set_Item, addr 0x2580c3c, size 0x124, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method IndexOfKey, addr 0x2580d60, size 0xa0, virtual true, abstract: false, final false
  inline int32_t IndexOfKey(::System::Object* key);

  /// @brief Method IndexOfValue, addr 0x2580e00, size 0x60, virtual true, abstract: false, final false
  inline int32_t IndexOfValue(::System::Object* value);

  /// @brief Method Insert, addr 0x2580030, size 0x130, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* key, ::System::Object* value);

  /// @brief Method RemoveAt, addr 0x2580e60, size 0x13c, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method Remove, addr 0x2580f9c, size 0x40, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method Synchronized, addr 0x2580fdc, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Collections::SortedList* Synchronized(::System::Collections::SortedList* list);

  // Ctor Parameters [CppParam { name: "", ty: "SortedList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList(SortedList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList(SortedList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList();

public:
  /// @brief Field keys, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___keys;

  /// @brief Field values, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___values;

  /// @brief Field _size, offset: 0x20, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field version, offset: 0x24, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IComparer* ___comparer;

  /// @brief Field keyList, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::__SortedList__KeyList* ___keyList;

  /// @brief Field valueList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::__SortedList__ValueList* ___valueList;

  /// @brief Field _syncRoot, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::SortedList, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___keys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___values) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ____size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___version) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___comparer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___keyList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___valueList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ____syncRoot) == 0x40, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::SortedList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList*, "System.Collections", "SortedList");
NEED_NO_BOX(::System::Collections::__SortedList__KeyList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__SortedList__KeyList*, "System.Collections", "SortedList/KeyList");
NEED_NO_BOX(::System::Collections::__SortedList__SortedListDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__SortedList__SortedListDebugView*, "System.Collections", "SortedList/SortedListDebugView");
NEED_NO_BOX(::System::Collections::__SortedList__SortedListEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__SortedList__SortedListEnumerator*, "System.Collections", "SortedList/SortedListEnumerator");
NEED_NO_BOX(::System::Collections::__SortedList__ValueList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__SortedList__ValueList*, "System.Collections", "SortedList/ValueList");
