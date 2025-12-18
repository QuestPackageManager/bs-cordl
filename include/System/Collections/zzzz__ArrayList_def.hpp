#pragma once
// IWYU pragma private; include "System/Collections/ArrayList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayList)
namespace GlobalNamespace {
class ArrayList_IListWrapper;
}
namespace GlobalNamespace {
class ArrayList_ReadOnlyArrayList;
}
namespace System::Collections {
class ArrayList_ArrayListDebugView;
}
namespace System::Collections {
class ArrayList_ArrayListEnumeratorSimple;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
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
namespace System {
class Array;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class ArrayList_ArrayListDebugView;
}
namespace System::Collections {
class ArrayList_ArrayListEnumeratorSimple;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::ArrayList);
MARK_REF_PTR_T(::System::Collections::ArrayList_ArrayListDebugView);
MARK_REF_PTR_T(::System::Collections::ArrayList_ArrayListEnumeratorSimple);
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.ArrayList/ArrayListEnumeratorSimple
class CORDL_TYPE ArrayList_ArrayListEnumeratorSimple : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field _currentElement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__currentElement, put = __cordl_internal_set__currentElement)) ::System::Object* _currentElement;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _isArrayList, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isArrayList, put = __cordl_internal_set__isArrayList)) bool _isArrayList;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::ArrayList* _list;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Field s_dummyObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_dummyObject, put = setStaticF_s_dummyObject)) ::System::Object* s_dummyObject;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x5a3f4b8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x5a3f4bc, size 0x1d0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::ArrayList_ArrayListEnumeratorSimple* New_ctor(::System::Collections::ArrayList* list);

  /// @brief Method Reset, addr 0x5a3f760, size 0xd0, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Object* const& __cordl_internal_get__currentElement() const;

  constexpr ::System::Object*& __cordl_internal_get__currentElement();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr bool const& __cordl_internal_get__isArrayList() const;

  constexpr bool& __cordl_internal_get__isArrayList();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__list();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__currentElement(::System::Object* value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__isArrayList(bool value);

  constexpr void __cordl_internal_set__list(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x5a3c314, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* list);

  static inline ::System::Object* getStaticF_s_dummyObject();

  /// @brief Method get_Current, addr 0x5a3f68c, size 0xd4, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  static inline void setStaticF_s_dummyObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayList_ArrayListEnumeratorSimple();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayList_ArrayListEnumeratorSimple", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayList_ArrayListEnumeratorSimple(ArrayList_ArrayListEnumeratorSimple&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayList_ArrayListEnumeratorSimple", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayList_ArrayListEnumeratorSimple(ArrayList_ArrayListEnumeratorSimple const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3723 };

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _currentElement, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____currentElement;

  /// @brief Field _isArrayList, offset: 0x28, size: 0x1, def value: None
  bool ____isArrayList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::ArrayList_ArrayListEnumeratorSimple, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList_ArrayListEnumeratorSimple, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList_ArrayListEnumeratorSimple, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList_ArrayListEnumeratorSimple, ____currentElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList_ArrayListEnumeratorSimple, ____isArrayList) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::ArrayList_ArrayListEnumeratorSimple, 0x30>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.ArrayList/ArrayListDebugView
class CORDL_TYPE ArrayList_ArrayListDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayList_ArrayListDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayList_ArrayListDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayList_ArrayListDebugView(ArrayList_ArrayListDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayList_ArrayListDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayList_ArrayListDebugView(ArrayList_ArrayListDebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3724 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::ArrayList_ArrayListDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.ArrayList
class CORDL_TYPE ArrayList : public ::System::Object {
public:
  // Declarations
  using IListWrapper = ::GlobalNamespace::ArrayList_IListWrapper;

  using ReadOnlyArrayList = ::GlobalNamespace::ArrayList_ReadOnlyArrayList;

  using ArrayListDebugView = ::System::Collections::ArrayList_ArrayListDebugView;

  using ArrayListEnumeratorSimple = ::System::Collections::ArrayList_ArrayListEnumeratorSimple;

  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _items;

  /// @brief Field _size, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int32_t _size;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Adapter, addr 0x5a3bdc0, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* Adapter(::System::Collections::IList* list);

  /// @brief Method Add, addr 0x5a3be94, size 0xa8, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* value);

  /// @brief Method AddRange, addr 0x5a3bf90, size 0x18, virtual true, abstract: false, final false
  inline void AddRange(::System::Collections::ICollection* c);

  /// @brief Method Clear, addr 0x5a3bfa8, size 0x3c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x5a3bfe4, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x5a3c070, size 0xcc, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* item);

  /// @brief Method CopyTo, addr 0x5a3c13c, size 0x14, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array);

  /// @brief Method CopyTo, addr 0x5a3c150, size 0x98, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x5a3c1e8, size 0xd0, virtual true, abstract: false, final false
  inline void CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count);

  /// @brief Method EnsureCapacity, addr 0x5a3bf3c, size 0x54, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method GetEnumerator, addr 0x5a3c2b8, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x5a3c400, size 0x18, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x5a3c418, size 0x134, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* value);

  /// @brief Method InsertRange, addr 0x5a3c54c, size 0x260, virtual true, abstract: false, final false
  inline void InsertRange(int32_t index, ::System::Collections::ICollection* c);

  static inline ::System::Collections::ArrayList* New_ctor();

  static inline ::System::Collections::ArrayList* New_ctor(::System::Collections::ICollection* c);

  static inline ::System::Collections::ArrayList* New_ctor(int32_t capacity);

  /// @brief Method ReadOnly, addr 0x5a3c7ac, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* ReadOnly(::System::Collections::ArrayList* list);

  /// @brief Method Remove, addr 0x5a3c878, size 0x40, virtual true, abstract: false, final false
  inline void Remove(::System::Object* obj);

  /// @brief Method RemoveAt, addr 0x5a3c8b8, size 0xe0, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange, addr 0x5a3c998, size 0x160, virtual true, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reverse, addr 0x5a3caf8, size 0x38, virtual true, abstract: false, final false
  inline void Reverse();

  /// @brief Method Reverse, addr 0x5a3cb30, size 0x13c, virtual true, abstract: false, final false
  inline void Reverse(int32_t index, int32_t count);

  /// @brief Method Sort, addr 0x5a3cc6c, size 0x4c, virtual true, abstract: false, final false
  inline void Sort(::System::Collections::IComparer* comparer);

  /// @brief Method Sort, addr 0x5a3ccb8, size 0x104, virtual true, abstract: false, final false
  inline void Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer);

  /// @brief Method ToArray, addr 0x5a3cdbc, size 0xf0, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ToArray();

  /// @brief Method ToArray, addr 0x5a3ceac, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Array* ToArray(::System::Type* type);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__items() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__items();

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__items(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__size(int32_t value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x5a35024, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5a3b8b0, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ICollection* c);

  /// @brief Method .ctor, addr 0x5a3b758, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Count, addr 0x5a3bba8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x5a3bbb0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x5a3bbb8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x5a3bbc0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x5a3bc34, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x5a3bbc8, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Capacity, addr 0x5a3ba88, size 0x120, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x5a3bcd8, size 0xe8, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayList(ArrayList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayList(ArrayList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3725 };

  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____items;

  /// @brief Field _size, offset: 0x18, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::ArrayList, ____items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList, ____size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList, ____syncRoot) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::ArrayList, 0x28>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::ArrayList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ArrayList*, "System.Collections", "ArrayList");
NEED_NO_BOX(::System::Collections::ArrayList_ArrayListDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ArrayList_ArrayListDebugView*, "System.Collections", "ArrayList/ArrayListDebugView");
NEED_NO_BOX(::System::Collections::ArrayList_ArrayListEnumeratorSimple);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ArrayList_ArrayListEnumeratorSimple*, "System.Collections", "ArrayList/ArrayListEnumeratorSimple");
