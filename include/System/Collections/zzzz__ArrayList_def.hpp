#pragma once
// IWYU pragma private; include "System/Collections/ArrayList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayList)
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
namespace System::Collections {
class __ArrayList__ArrayListDebugView;
}
namespace System::Collections {
class __ArrayList__ArrayListEnumeratorSimple;
}
namespace System::Collections {
class __ArrayList__IListWrapper;
}
namespace System::Collections {
class __ArrayList__ReadOnlyArrayList;
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
class __ArrayList__ArrayListDebugView;
}
namespace System::Collections {
class __ArrayList__ArrayListEnumeratorSimple;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::ArrayList);
MARK_REF_PTR_T(::System::Collections::__ArrayList__ArrayListDebugView);
MARK_REF_PTR_T(::System::Collections::__ArrayList__ArrayListEnumeratorSimple);
// Type: ::ArrayListEnumeratorSimple
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::ArrayList::ArrayListEnumeratorSimple*
class CORDL_TYPE __ArrayList__ArrayListEnumeratorSimple : public ::System::Object {
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
  static __declspec(property(get = getStaticF_s_dummyObject, put = setStaticF_s_dummyObject)) ::System::Object* s_dummyObject;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x3d63998, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x3d639a0, size 0x1d4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::__ArrayList__ArrayListEnumeratorSimple* New_ctor(::System::Collections::ArrayList* list);

  /// @brief Method Reset, addr 0x3d63c40, size 0xcc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Object*& __cordl_internal_get__currentElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__currentElement() const;

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr bool const& __cordl_internal_get__isArrayList() const;

  constexpr bool& __cordl_internal_get__isArrayList();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__list() const;

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__currentElement(::System::Object* value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__isArrayList(bool value);

  constexpr void __cordl_internal_set__list(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x3d6083c, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* list);

  static inline ::System::Object* getStaticF_s_dummyObject();

  /// @brief Method get_Current, addr 0x3d63b74, size 0xcc, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  static inline void setStaticF_s_dummyObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayList__ArrayListEnumeratorSimple();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ArrayListEnumeratorSimple", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayList__ArrayListEnumeratorSimple(__ArrayList__ArrayListEnumeratorSimple&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ArrayListEnumeratorSimple", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayList__ArrayListEnumeratorSimple(__ArrayList__ArrayListEnumeratorSimple const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3798 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ArrayList__ArrayListEnumeratorSimple, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____currentElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____isArrayList) == 0x28, "Offset mismatch!");

} // namespace System::Collections
// Type: ::ArrayListDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::ArrayList::ArrayListDebugView*
class CORDL_TYPE __ArrayList__ArrayListDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayList__ArrayListDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ArrayListDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayList__ArrayListDebugView(__ArrayList__ArrayListDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ArrayListDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayList__ArrayListDebugView(__ArrayList__ArrayListDebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3799 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ArrayList__ArrayListDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Type: System.Collections::ArrayList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::ArrayList*
class CORDL_TYPE ArrayList : public ::System::Object {
public:
  // Declarations
  using ArrayListDebugView = ::System::Collections::__ArrayList__ArrayListDebugView;

  using ArrayListEnumeratorSimple = ::System::Collections::__ArrayList__ArrayListEnumeratorSimple;

  using IListWrapper = ::System::Collections::__ArrayList__IListWrapper;

  using ReadOnlyArrayList = ::System::Collections::__ArrayList__ReadOnlyArrayList;

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

  /// @brief Method Adapter, addr 0x3d602a4, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* Adapter(::System::Collections::IList* list);

  /// @brief Method Add, addr 0x3d60374, size 0xa8, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* value);

  /// @brief Method AddRange, addr 0x3d60478, size 0x1c, virtual true, abstract: false, final false
  inline void AddRange(::System::Collections::ICollection* c);

  /// @brief Method Clear, addr 0x3d60494, size 0x3c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x3d604d0, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x3d60558, size 0xcc, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* item);

  /// @brief Method CopyTo, addr 0x3d60624, size 0x14, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array);

  /// @brief Method CopyTo, addr 0x3d60638, size 0xac, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x3d606e4, size 0x100, virtual true, abstract: false, final false
  inline void CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count);

  /// @brief Method EnsureCapacity, addr 0x3d6041c, size 0x5c, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method GetEnumerator, addr 0x3d607e4, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x3d60944, size 0x18, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x3d6095c, size 0x130, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* value);

  /// @brief Method InsertRange, addr 0x3d60a8c, size 0x25c, virtual true, abstract: false, final false
  inline void InsertRange(int32_t index, ::System::Collections::ICollection* c);

  static inline ::System::Collections::ArrayList* New_ctor();

  static inline ::System::Collections::ArrayList* New_ctor(::System::Collections::ICollection* c);

  static inline ::System::Collections::ArrayList* New_ctor(int32_t capacity);

  /// @brief Method ReadOnly, addr 0x3d60ce8, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* ReadOnly(::System::Collections::ArrayList* list);

  /// @brief Method Remove, addr 0x3d60db0, size 0x40, virtual true, abstract: false, final false
  inline void Remove(::System::Object* obj);

  /// @brief Method RemoveAt, addr 0x3d60df0, size 0xe0, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange, addr 0x3d60ed0, size 0x164, virtual true, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reverse, addr 0x3d61034, size 0x38, virtual true, abstract: false, final false
  inline void Reverse();

  /// @brief Method Reverse, addr 0x3d6106c, size 0x138, virtual true, abstract: false, final false
  inline void Reverse(int32_t index, int32_t count);

  /// @brief Method Sort, addr 0x3d611a4, size 0x4c, virtual true, abstract: false, final false
  inline void Sort(::System::Collections::IComparer* comparer);

  /// @brief Method Sort, addr 0x3d611f0, size 0xf8, virtual true, abstract: false, final false
  inline void Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer);

  /// @brief Method ToArray, addr 0x3d612e8, size 0xe0, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ToArray();

  /// @brief Method ToArray, addr 0x3d613c8, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Array* ToArray(::System::Type* type);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__items() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__items();

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__items(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__size(int32_t value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x3d594a0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d5fdb8, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ICollection* c);

  /// @brief Method .ctor, addr 0x3d5fc68, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Count, addr 0x3d60088, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x3d60090, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3d60098, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3d600a0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x3d60118, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x3d600a8, size 0x70, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Capacity, addr 0x3d5ff74, size 0x114, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x3d601bc, size 0xe8, virtual true, abstract: false, final false
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

  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____items;

  /// @brief Field _size, offset: 0x18, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3800 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::ArrayList, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Collections::ArrayList, ____items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList, ____size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::ArrayList, ____syncRoot) == 0x20, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::ArrayList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ArrayList*, "System.Collections", "ArrayList");
NEED_NO_BOX(::System::Collections::__ArrayList__ArrayListDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__ArrayList__ArrayListDebugView*, "System.Collections", "ArrayList/ArrayListDebugView");
NEED_NO_BOX(::System::Collections::__ArrayList__ArrayListEnumeratorSimple);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__ArrayList__ArrayListEnumeratorSimple*, "System.Collections", "ArrayList/ArrayListEnumeratorSimple");
