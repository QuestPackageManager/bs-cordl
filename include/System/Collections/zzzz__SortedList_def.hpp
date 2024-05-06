#pragma once
// IWYU pragma private; include "System/Collections/SortedList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortedList)
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
namespace System::Collections {
class IList;
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
class __SortedList__SyncSortedList;
}
namespace System::Collections {
class __SortedList__ValueList;
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
// CS Name: ::SortedList::SortedListEnumerator*
class CORDL_TYPE __SortedList__SortedListEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field _current, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) bool _current;

  /// @brief Field _endIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__endIndex, put = __cordl_internal_set__endIndex)) int32_t _endIndex;

  /// @brief Field _getObjectRetType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__getObjectRetType, put = __cordl_internal_set__getObjectRetType)) int32_t _getObjectRetType;

  /// @brief Field _index, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key))::System::Object* _key;

  /// @brief Field _sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedList, put = __cordl_internal_set__sortedList))::System::Collections::SortedList* _sortedList;

  /// @brief Field _startIndex, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startIndex, put = __cordl_internal_set__startIndex)) int32_t _startIndex;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::System::Object* _value;

  /// @brief Field _version, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x2906760, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x290680c, size 0xec, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Collections::__SortedList__SortedListEnumerator* New_ctor(::System::Collections::SortedList* sortedList, int32_t index, int32_t count, int32_t getObjRetType);

  /// @brief Method Reset, addr 0x2906b18, size 0x84, virtual true, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get__current() const;

  constexpr bool& __cordl_internal_get__current();

  constexpr int32_t const& __cordl_internal_get__endIndex() const;

  constexpr int32_t& __cordl_internal_get__endIndex();

  constexpr int32_t const& __cordl_internal_get__getObjectRetType() const;

  constexpr int32_t& __cordl_internal_get__getObjectRetType();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Object*& __cordl_internal_get__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__key() const;

  constexpr ::System::Collections::SortedList*& __cordl_internal_get__sortedList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __cordl_internal_get__sortedList() const;

  constexpr int32_t const& __cordl_internal_get__startIndex() const;

  constexpr int32_t& __cordl_internal_get__startIndex();

  constexpr ::System::Object*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__value() const;

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__current(bool value);

  constexpr void __cordl_internal_set__endIndex(int32_t value);

  constexpr void __cordl_internal_set__getObjectRetType(int32_t value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__key(::System::Object* value);

  constexpr void __cordl_internal_set__sortedList(::System::Collections::SortedList* value);

  constexpr void __cordl_internal_set__startIndex(int32_t value);

  constexpr void __cordl_internal_set__value(::System::Object* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x2904de8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* sortedList, int32_t index, int32_t count, int32_t getObjRetType);

  /// @brief Method get_Current, addr 0x29069a0, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x29068f8, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x2906768, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x2906a74, size 0xa4, virtual true, abstract: false, final false
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
  constexpr __SortedList__SortedListEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SortedListEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList__SortedListEnumerator(__SortedList__SortedListEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SortedListEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList__SortedListEnumerator(__SortedList__SortedListEnumerator const&) = delete;

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
// CS Name: ::SortedList::KeyList*
class CORDL_TYPE __SortedList__KeyList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Field sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sortedList, put = __cordl_internal_set_sortedList))::System::Collections::SortedList* sortedList;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x2906c10, size 0x50, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* key);

  /// @brief Method Clear, addr 0x2906c60, size 0x50, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x2906cb0, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x2906cd4, size 0xd0, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x2906e68, size 0x90, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x2906ef8, size 0xcc, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* key);

  /// @brief Method Insert, addr 0x2906da4, size 0x50, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* value);

  static inline ::System::Collections::__SortedList__KeyList* New_ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method Remove, addr 0x2906fc4, size 0x50, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method RemoveAt, addr 0x2907014, size 0x50, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  constexpr ::System::Collections::SortedList*& __cordl_internal_get_sortedList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __cordl_internal_get_sortedList() const;

  constexpr void __cordl_internal_set_sortedList(::System::Collections::SortedList* value);

  /// @brief Method .ctor, addr 0x2904fe4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method get_Count, addr 0x2906b9c, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x2906bc0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x2906bb8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x2906bc8, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x2906df4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x2906bec, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Method set_Item, addr 0x2906e18, size 0x50, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList__KeyList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__KeyList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList__KeyList(__SortedList__KeyList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__KeyList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList__KeyList(__SortedList__KeyList const&) = delete;

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
// CS Name: ::SortedList::ValueList*
class CORDL_TYPE __SortedList__ValueList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Field sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sortedList, put = __cordl_internal_set_sortedList))::System::Collections::SortedList* sortedList;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x29070d8, size 0x50, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* key);

  /// @brief Method Clear, addr 0x2907128, size 0x50, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x2907178, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* value);

  /// @brief Method CopyTo, addr 0x290719c, size 0xd0, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x2907330, size 0x90, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x29073c0, size 0x78, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x290726c, size 0x50, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* value);

  static inline ::System::Collections::__SortedList__ValueList* New_ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method Remove, addr 0x2907438, size 0x50, virtual true, abstract: false, final false
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt, addr 0x2907488, size 0x50, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  constexpr ::System::Collections::SortedList*& __cordl_internal_get_sortedList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __cordl_internal_get_sortedList() const;

  constexpr void __cordl_internal_set_sortedList(::System::Collections::SortedList* value);

  /// @brief Method .ctor, addr 0x290507c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method get_Count, addr 0x2907064, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x2907088, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x2907080, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x2907090, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x29072bc, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x29070b4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Method set_Item, addr 0x29072e0, size 0x50, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList__ValueList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__ValueList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList__ValueList(__SortedList__ValueList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__ValueList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList__ValueList(__SortedList__ValueList const&) = delete;

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
// CS Name: ::SortedList::SortedListDebugView*
class CORDL_TYPE __SortedList__SortedListDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList__SortedListDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SortedListDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList__SortedListDebugView(__SortedList__SortedListDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SortedListDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList__SortedListDebugView(__SortedList__SortedListDebugView const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__SortedList__SortedListDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Type: System.Collections::SortedList
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::SortedList*
class CORDL_TYPE SortedList : public ::System::Object {
public:
  // Declarations
  using KeyList = ::System::Collections::__SortedList__KeyList;

  using SortedListDebugView = ::System::Collections::__SortedList__SortedListDebugView;

  using SortedListEnumerator = ::System::Collections::__SortedList__SortedListEnumerator;

  using SyncSortedList = ::System::Collections::__SortedList__SyncSortedList;

  using ValueList = ::System::Collections::__SortedList__ValueList;

  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Field _size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int32_t _size;

  /// @brief Field _syncRoot, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer))::System::Collections::IComparer* comparer;

  /// @brief Field keyList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keyList, put = __cordl_internal_set_keyList))::System::Collections::__SortedList__KeyList* keyList;

  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys;

  /// @brief Field valueList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_valueList, put = __cordl_internal_set_valueList))::System::Collections::__SortedList__ValueList* valueList;

  /// @brief Field values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values))::ArrayW<::System::Object*, ::Array<::System::Object*>*> values;

  /// @brief Field version, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Add, addr 0x2904394, size 0x130, virtual true, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x2904894, size 0x44, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x29048d8, size 0xac, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x2904984, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsKey, addr 0x29049a8, size 0x24, virtual true, abstract: false, final false
  inline bool ContainsKey(::System::Object* key);

  /// @brief Method ContainsValue, addr 0x29049cc, size 0x24, virtual true, abstract: false, final false
  inline bool ContainsValue(::System::Object* value);

  /// @brief Method CopyTo, addr 0x29049f0, size 0x280, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method EnsureCapacity, addr 0x2904c70, size 0x4c, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method GetByIndex, addr 0x2904cbc, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Object* GetByIndex(int32_t index);

  /// @brief Method GetEnumerator, addr 0x2904e48, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetKey, addr 0x2904eb8, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Object* GetKey(int32_t index);

  /// @brief Method GetKeyList, addr 0x2904f74, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetKeyList();

  /// @brief Method GetValueList, addr 0x290500c, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetValueList();

  /// @brief Method IndexOfKey, addr 0x2905218, size 0xa0, virtual true, abstract: false, final false
  inline int32_t IndexOfKey(::System::Object* key);

  /// @brief Method IndexOfValue, addr 0x29052b8, size 0x60, virtual true, abstract: false, final false
  inline int32_t IndexOfValue(::System::Object* value);

  /// @brief Method Init, addr 0x29040e8, size 0x134, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Insert, addr 0x29044c4, size 0x130, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* key, ::System::Object* value);

  static inline ::System::Collections::SortedList* New_ctor();

  static inline ::System::Collections::SortedList* New_ctor(::System::Collections::IComparer* comparer);

  static inline ::System::Collections::SortedList* New_ctor(int32_t initialCapacity);

  /// @brief Method Remove, addr 0x2905454, size 0x40, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method RemoveAt, addr 0x2905318, size 0x13c, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method Synchronized, addr 0x2905494, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Collections::SortedList* Synchronized(::System::Collections::SortedList* list);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2904d78, size 0x70, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Collections::IComparer*& __cordl_internal_get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::__SortedList__KeyList*& __cordl_internal_get_keyList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__SortedList__KeyList*> const& __cordl_internal_get_keyList() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_keys() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_keys();

  constexpr ::System::Collections::__SortedList__ValueList*& __cordl_internal_get_valueList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::__SortedList__ValueList*> const& __cordl_internal_get_valueList() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_values() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_values();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__size(int32_t value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::IComparer* value);

  constexpr void __cordl_internal_set_keyList(::System::Collections::__SortedList__KeyList* value);

  constexpr void __cordl_internal_set_keys(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_valueList(::System::Collections::__SortedList__ValueList* value);

  constexpr void __cordl_internal_set_values(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x29040cc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2904360, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IComparer* comparer);

  /// @brief Method .ctor, addr 0x290421c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity);

  /// @brief Method get_Count, addr 0x29047dc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x290480c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x2904804, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x2904814, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x29050a4, size 0x50, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x29047e4, size 0x10, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x290481c, size 0x78, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x29047f4, size 0x10, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Capacity, addr 0x29045f4, size 0x1e8, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x29050f4, size 0x124, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList(SortedList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList(SortedList const&) = delete;

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
