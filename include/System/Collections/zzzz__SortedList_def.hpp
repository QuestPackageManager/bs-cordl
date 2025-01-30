#pragma once
// IWYU pragma private; include "System/Collections/SortedList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortedList)
namespace GlobalNamespace {
class SortedList_SyncSortedList;
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
namespace System::Collections {
class IList;
}
namespace System::Collections {
class SortedList_KeyList;
}
namespace System::Collections {
class SortedList_SortedListDebugView;
}
namespace System::Collections {
class SortedList_SortedListEnumerator;
}
namespace System::Collections {
class SortedList_ValueList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class SortedList;
}
namespace System::Collections {
class SortedList_KeyList;
}
namespace System::Collections {
class SortedList_SortedListDebugView;
}
namespace System::Collections {
class SortedList_SortedListEnumerator;
}
namespace System::Collections {
class SortedList_ValueList;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::SortedList);
MARK_REF_PTR_T(::System::Collections::SortedList_KeyList);
MARK_REF_PTR_T(::System::Collections::SortedList_SortedListDebugView);
MARK_REF_PTR_T(::System::Collections::SortedList_SortedListEnumerator);
MARK_REF_PTR_T(::System::Collections::SortedList_ValueList);
// Dependencies System.Collections.IDictionaryEnumerator, System.Collections.IEnumerator, System.ICloneable, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.SortedList/SortedListEnumerator
class CORDL_TYPE SortedList_SortedListEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field _current, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) bool _current;

  /// @brief Field _endIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__endIndex, put = __cordl_internal_set__endIndex)) int32_t _endIndex;

  /// @brief Field _getObjectRetType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__getObjectRetType, put = __cordl_internal_set__getObjectRetType)) int32_t _getObjectRetType;

  /// @brief Field _index, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) ::System::Object* _key;

  /// @brief Field _sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedList, put = __cordl_internal_set__sortedList)) ::System::Collections::SortedList* _sortedList;

  /// @brief Field _startIndex, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startIndex, put = __cordl_internal_set__startIndex)) int32_t _startIndex;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::System::Object* _value;

  /// @brief Field _version, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x3dc094c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x3dc09f0, size 0xe8, virtual true, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Collections::SortedList_SortedListEnumerator* New_ctor(::System::Collections::SortedList* sortedList, int32_t index, int32_t count, int32_t getObjRetType);

  /// @brief Method Reset, addr 0x3dc0ce4, size 0x80, virtual true, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get__current() const;

  constexpr bool& __cordl_internal_get__current();

  constexpr int32_t const& __cordl_internal_get__endIndex() const;

  constexpr int32_t& __cordl_internal_get__endIndex();

  constexpr int32_t const& __cordl_internal_get__getObjectRetType() const;

  constexpr int32_t& __cordl_internal_get__getObjectRetType();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Object* const& __cordl_internal_get__key() const;

  constexpr ::System::Object*& __cordl_internal_get__key();

  constexpr ::System::Collections::SortedList* const& __cordl_internal_get__sortedList() const;

  constexpr ::System::Collections::SortedList*& __cordl_internal_get__sortedList();

  constexpr int32_t const& __cordl_internal_get__startIndex() const;

  constexpr int32_t& __cordl_internal_get__startIndex();

  constexpr ::System::Object* const& __cordl_internal_get__value() const;

  constexpr ::System::Object*& __cordl_internal_get__value();

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

  /// @brief Method .ctor, addr 0x3dbf010, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* sortedList, int32_t index, int32_t count, int32_t getObjRetType);

  /// @brief Method get_Current, addr 0x3dc0b78, size 0xd0, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x3dc0ad8, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x3dc0954, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x3dc0c48, size 0x9c, virtual true, abstract: false, final false
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
  constexpr SortedList_SortedListEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_SortedListEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_SortedListEnumerator(SortedList_SortedListEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_SortedListEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_SortedListEnumerator(SortedList_SortedListEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3786 };

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
static_assert(offsetof(::System::Collections::SortedList_SortedListEnumerator, ____sortedList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList_SortedListEnumerator, ____key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList_SortedListEnumerator, ____value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList_SortedListEnumerator, ____index) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList_SortedListEnumerator, ____startIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList_SortedListEnumerator, ____endIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList_SortedListEnumerator, ____version) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList_SortedListEnumerator, ____current) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList_SortedListEnumerator, ____getObjectRetType) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::SortedList_SortedListEnumerator, 0x40>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.SortedList/KeyList
class CORDL_TYPE SortedList_KeyList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sortedList, put = __cordl_internal_set_sortedList)) ::System::Collections::SortedList* sortedList;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x3dc0dd8, size 0x4c, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* key);

  /// @brief Method Clear, addr 0x3dc0e24, size 0x4c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x3dc0e70, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x3dc0e94, size 0xcc, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x3dc101c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x3dc10a8, size 0xc8, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* key);

  /// @brief Method Insert, addr 0x3dc0f60, size 0x4c, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* value);

  static inline ::System::Collections::SortedList_KeyList* New_ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method Remove, addr 0x3dc1170, size 0x4c, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method RemoveAt, addr 0x3dc11bc, size 0x4c, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  constexpr ::System::Collections::SortedList* const& __cordl_internal_get_sortedList() const;

  constexpr ::System::Collections::SortedList*& __cordl_internal_get_sortedList();

  constexpr void __cordl_internal_set_sortedList(::System::Collections::SortedList* value);

  /// @brief Method .ctor, addr 0x3dbf1f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method get_Count, addr 0x3dc0d64, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x3dc0d88, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3dc0d80, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3dc0d90, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x3dc0fac, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x3dc0db4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Method set_Item, addr 0x3dc0fd0, size 0x4c, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_KeyList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_KeyList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_KeyList(SortedList_KeyList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_KeyList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_KeyList(SortedList_KeyList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3787 };

  /// @brief Field sortedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::SortedList* ___sortedList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::SortedList_KeyList, ___sortedList) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::SortedList_KeyList, 0x18>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.SortedList/ValueList
class CORDL_TYPE SortedList_ValueList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sortedList, put = __cordl_internal_set_sortedList)) ::System::Collections::SortedList* sortedList;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x3dc127c, size 0x4c, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* key);

  /// @brief Method Clear, addr 0x3dc12c8, size 0x4c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x3dc1314, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* value);

  /// @brief Method CopyTo, addr 0x3dc1338, size 0xcc, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x3dc14c0, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x3dc154c, size 0x78, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x3dc1404, size 0x4c, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* value);

  static inline ::System::Collections::SortedList_ValueList* New_ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method Remove, addr 0x3dc15c4, size 0x4c, virtual true, abstract: false, final false
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt, addr 0x3dc1610, size 0x4c, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  constexpr ::System::Collections::SortedList* const& __cordl_internal_get_sortedList() const;

  constexpr ::System::Collections::SortedList*& __cordl_internal_get_sortedList();

  constexpr void __cordl_internal_set_sortedList(::System::Collections::SortedList* value);

  /// @brief Method .ctor, addr 0x3dbf288, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* sortedList);

  /// @brief Method get_Count, addr 0x3dc1208, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x3dc122c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3dc1224, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3dc1234, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x3dc1450, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x3dc1258, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Method set_Item, addr 0x3dc1474, size 0x4c, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_ValueList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_ValueList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_ValueList(SortedList_ValueList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_ValueList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_ValueList(SortedList_ValueList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3788 };

  /// @brief Field sortedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::SortedList* ___sortedList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::SortedList_ValueList, ___sortedList) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::SortedList_ValueList, 0x18>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.SortedList/SortedListDebugView
class CORDL_TYPE SortedList_SortedListDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_SortedListDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_SortedListDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_SortedListDebugView(SortedList_SortedListDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_SortedListDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_SortedListDebugView(SortedList_SortedListDebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3789 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::SortedList_SortedListDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Collections.ICollection, System.Collections.IDictionary, System.Collections.IEnumerable, System.ICloneable, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.SortedList
class CORDL_TYPE SortedList : public ::System::Object {
public:
  // Declarations
  using SyncSortedList = ::GlobalNamespace::SortedList_SyncSortedList;

  using KeyList = ::System::Collections::SortedList_KeyList;

  using SortedListDebugView = ::System::Collections::SortedList_SortedListDebugView;

  using SortedListEnumerator = ::System::Collections::SortedList_SortedListEnumerator;

  using ValueList = ::System::Collections::SortedList_ValueList;

  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Keys)) ::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field _size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int32_t _size;

  /// @brief Field _syncRoot, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::IComparer* comparer;

  /// @brief Field keyList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keyList, put = __cordl_internal_set_keyList)) ::System::Collections::SortedList_KeyList* keyList;

  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys;

  /// @brief Field valueList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_valueList, put = __cordl_internal_set_valueList)) ::System::Collections::SortedList_ValueList* valueList;

  /// @brief Field values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values;

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

  /// @brief Method Add, addr 0x3dbe5cc, size 0x124, virtual true, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x3dbead4, size 0x48, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x3dbeb1c, size 0xac, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x3dbebc8, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsKey, addr 0x3dbebec, size 0x24, virtual true, abstract: false, final false
  inline bool ContainsKey(::System::Object* key);

  /// @brief Method ContainsValue, addr 0x3dbec10, size 0x24, virtual true, abstract: false, final false
  inline bool ContainsValue(::System::Object* value);

  /// @brief Method CopyTo, addr 0x3dbec34, size 0x270, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method EnsureCapacity, addr 0x3dbeea4, size 0x4c, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method GetByIndex, addr 0x3dbeef0, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Object* GetByIndex(int32_t index);

  /// @brief Method GetEnumerator, addr 0x3dbf070, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetKey, addr 0x3dbf0d8, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Object* GetKey(int32_t index);

  /// @brief Method GetKeyList, addr 0x3dbf190, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetKeyList();

  /// @brief Method GetValueList, addr 0x3dbf220, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetValueList();

  /// @brief Method IndexOfKey, addr 0x3dbf420, size 0x9c, virtual true, abstract: false, final false
  inline int32_t IndexOfKey(::System::Object* key);

  /// @brief Method IndexOfValue, addr 0x3dbf4bc, size 0x60, virtual true, abstract: false, final false
  inline int32_t IndexOfValue(::System::Object* value);

  /// @brief Method Init, addr 0x3dbe314, size 0x14c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Insert, addr 0x3dbe6f0, size 0x130, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* key, ::System::Object* value);

  static inline ::System::Collections::SortedList* New_ctor();

  static inline ::System::Collections::SortedList* New_ctor(::System::Collections::IComparer* comparer);

  static inline ::System::Collections::SortedList* New_ctor(int32_t initialCapacity);

  /// @brief Method Remove, addr 0x3dbf654, size 0x40, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method RemoveAt, addr 0x3dbf51c, size 0x138, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method Synchronized, addr 0x3dbf694, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Collections::SortedList* Synchronized(::System::Collections::SortedList* list);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3dbefa8, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::System::Collections::IComparer* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::IComparer*& __cordl_internal_get_comparer();

  constexpr ::System::Collections::SortedList_KeyList* const& __cordl_internal_get_keyList() const;

  constexpr ::System::Collections::SortedList_KeyList*& __cordl_internal_get_keyList();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_keys() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_keys();

  constexpr ::System::Collections::SortedList_ValueList* const& __cordl_internal_get_valueList() const;

  constexpr ::System::Collections::SortedList_ValueList*& __cordl_internal_get_valueList();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_values() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_values();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__size(int32_t value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::IComparer* value);

  constexpr void __cordl_internal_set_keyList(::System::Collections::SortedList_KeyList* value);

  constexpr void __cordl_internal_set_keys(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_valueList(::System::Collections::SortedList_ValueList* value);

  constexpr void __cordl_internal_set_values(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x3dbe2f8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dbe598, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IComparer* comparer);

  /// @brief Method .ctor, addr 0x3dbe460, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity);

  /// @brief Method get_Count, addr 0x3dbea24, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x3dbea54, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3dbea4c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3dbea5c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x3dbf2b0, size 0x50, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x3dbea2c, size 0x10, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x3dbea64, size 0x70, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x3dbea3c, size 0x10, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Capacity, addr 0x3dbe820, size 0x204, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x3dbf300, size 0x120, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3790 };

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
  ::System::Collections::SortedList_KeyList* ___keyList;

  /// @brief Field valueList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::SortedList_ValueList* ___valueList;

  /// @brief Field _syncRoot, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::SortedList, ___keys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___values) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ____size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___version) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___comparer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___keyList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ___valueList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Collections::SortedList, ____syncRoot) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::SortedList, 0x48>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::SortedList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList*, "System.Collections", "SortedList");
NEED_NO_BOX(::System::Collections::SortedList_KeyList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList_KeyList*, "System.Collections", "SortedList/KeyList");
NEED_NO_BOX(::System::Collections::SortedList_SortedListDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList_SortedListDebugView*, "System.Collections", "SortedList/SortedListDebugView");
NEED_NO_BOX(::System::Collections::SortedList_SortedListEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList_SortedListEnumerator*, "System.Collections", "SortedList/SortedListEnumerator");
NEED_NO_BOX(::System::Collections::SortedList_ValueList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList_ValueList*, "System.Collections", "SortedList/ValueList");
