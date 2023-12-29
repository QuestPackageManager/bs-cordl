#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayList)
namespace System::Collections {
class __ArrayList__ArrayListDebugView;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections {
class __ArrayList__ReadOnlyArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Type;
}
namespace System::Collections {
class __ArrayList__ArrayListEnumeratorSimple;
}
namespace System {
class ICloneable;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class __ArrayList__IListWrapper;
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3777))
// CS Name: ::ArrayList::ArrayListEnumeratorSimple*
class CORDL_TYPE __ArrayList__ArrayListEnumeratorSimple : public ::System::Object {
public:
  // Declarations
  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::ArrayList* _list;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _currentElement, offset 0x20, size 0x8
  __declspec(property(get = __get__currentElement, put = __set__currentElement))::System::Object* _currentElement;

  /// @brief Field _isArrayList, offset 0x28, size 0x1
  __declspec(property(get = __get__isArrayList, put = __set__isArrayList)) bool _isArrayList;

  /// @brief Field s_dummyObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dummyObject, put = setStaticF_s_dummyObject))::System::Object* s_dummyObject;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::System::Collections::ArrayList*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::ArrayList* value);

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::System::Object*& __get__currentElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__currentElement() const;

  constexpr void __set__currentElement(::System::Object* value);

  constexpr bool& __get__isArrayList();

  constexpr bool const& __get__isArrayList() const;

  constexpr void __set__isArrayList(bool value);

  static inline void setStaticF_s_dummyObject(::System::Object* value);

  static inline ::System::Object* getStaticF_s_dummyObject();

  static inline ::System::Collections::__ArrayList__ArrayListEnumeratorSimple* New_ctor(::System::Collections::ArrayList* list);

  /// @brief Method .ctor addr 0x24290a4 size 0x108 virtual false final false
  inline void _ctor(::System::Collections::ArrayList* list);

  /// @brief Method Clone addr 0x242c29c size 0x8 virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext addr 0x242c2a4 size 0x1d0 virtual true final true
  inline bool MoveNext();

  /// @brief Method get_Current addr 0x242c474 size 0xd4 virtual true final true
  inline ::System::Object* get_Current();

  /// @brief Method Reset addr 0x242c548 size 0xd0 virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ArrayListEnumeratorSimple", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayList__ArrayListEnumeratorSimple(__ArrayList__ArrayListEnumeratorSimple&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ArrayListEnumeratorSimple", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayList__ArrayListEnumeratorSimple(__ArrayList__ArrayListEnumeratorSimple const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayList__ArrayListEnumeratorSimple();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Collections::__ArrayList__ArrayListEnumeratorSimple, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____currentElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ArrayListEnumeratorSimple, ____isArrayList) == 0x28, "Offset mismatch!");

} // namespace System::Collections
// Type: ::ArrayListDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3778))
// CS Name: ::ArrayList::ArrayListDebugView*
class CORDL_TYPE __ArrayList__ArrayListDebugView : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ArrayListDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayList__ArrayListDebugView(__ArrayList__ArrayListDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ArrayListDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayList__ArrayListDebugView(__ArrayList__ArrayListDebugView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayList__ArrayListDebugView();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ArrayList__ArrayListDebugView, 0x10>, "Size mismatch!");

} // namespace System::Collections
// Type: System.Collections::ArrayList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3779))
// CS Name: ::System.Collections::ArrayList*
class CORDL_TYPE ArrayList : public ::System::Object {
public:
  // Declarations
  using ArrayListDebugView = ::System::Collections::__ArrayList__ArrayListDebugView;

  using ArrayListEnumeratorSimple = ::System::Collections::__ArrayList__ArrayListEnumeratorSimple;

  using ReadOnlyArrayList = ::System::Collections::__ArrayList__ReadOnlyArrayList;

  using IListWrapper = ::System::Collections::__ArrayList__IListWrapper;

  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __get__items, put = __set__items))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _items;

  /// @brief Field _size, offset 0x18, size 0x4
  __declspec(property(get = __get__size, put = __set__size)) int32_t _size;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get__items();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get__items() const;

  constexpr void __set__items(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr int32_t& __get__size();

  constexpr int32_t const& __get__size() const;

  constexpr void __set__size(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline ::System::Collections::ArrayList* New_ctor();

  /// @brief Method .ctor addr 0x2422d20 size 0x90 virtual false final false
  inline void _ctor();

  static inline ::System::Collections::ArrayList* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x24284c0 size 0x144 virtual false final false
  inline void _ctor(int32_t capacity);

  static inline ::System::Collections::ArrayList* New_ctor(::System::Collections::ICollection* c);

  /// @brief Method .ctor addr 0x2428604 size 0x1b0 virtual false final false
  inline void _ctor(::System::Collections::ICollection* c);

  /// @brief Method set_Capacity addr 0x24287b4 size 0x118 virtual true final false
  inline void set_Capacity(int32_t value);

  /// @brief Method get_Count addr 0x24288cc size 0x8 virtual true final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize addr 0x24288d4 size 0x8 virtual true final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly addr 0x24288dc size 0x8 virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized addr 0x24288e4 size 0x8 virtual true final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x24288ec size 0x78 virtual true final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Item addr 0x2428964 size 0xa8 virtual true final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method set_Item addr 0x2428a0c size 0xec virtual true final false
  inline void set_Item(int32_t index, ::System::Object* value);

  /// @brief Method Adapter addr 0x2428af8 size 0xb4 virtual false final false
  static inline ::System::Collections::ArrayList* Adapter(::System::Collections::IList* list);

  /// @brief Method Add addr 0x2428bd4 size 0xa8 virtual true final false
  inline int32_t Add(::System::Object* value);

  /// @brief Method AddRange addr 0x2428cd8 size 0x1c virtual true final false
  inline void AddRange(::System::Collections::ICollection* c);

  /// @brief Method Clear addr 0x2428cf4 size 0x3c virtual true final false
  inline void Clear();

  /// @brief Method Clone addr 0x2428d30 size 0x88 virtual true final false
  inline ::System::Object* Clone();

  /// @brief Method Contains addr 0x2428db8 size 0xc0 virtual true final false
  inline bool Contains(::System::Object* item);

  /// @brief Method CopyTo addr 0x2428e78 size 0x14 virtual true final false
  inline void CopyTo(::System::Array* array);

  /// @brief Method CopyTo addr 0x2428e8c size 0xb0 virtual true final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyTo addr 0x2428f3c size 0x108 virtual true final false
  inline void CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count);

  /// @brief Method EnsureCapacity addr 0x2428c7c size 0x5c virtual false final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method GetEnumerator addr 0x2429044 size 0x60 virtual true final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf addr 0x24291ac size 0x18 virtual true final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert addr 0x24291c4 size 0x134 virtual true final false
  inline void Insert(int32_t index, ::System::Object* value);

  /// @brief Method InsertRange addr 0x24292f8 size 0x264 virtual true final false
  inline void InsertRange(int32_t index, ::System::Collections::ICollection* c);

  /// @brief Method ReadOnly addr 0x242955c size 0xb0 virtual false final false
  static inline ::System::Collections::ArrayList* ReadOnly(::System::Collections::ArrayList* list);

  /// @brief Method Remove addr 0x2429630 size 0x40 virtual true final false
  inline void Remove(::System::Object* obj);

  /// @brief Method RemoveAt addr 0x2429670 size 0xe4 virtual true final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange addr 0x2429754 size 0x168 virtual true final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reverse addr 0x24298bc size 0x38 virtual true final false
  inline void Reverse();

  /// @brief Method Reverse addr 0x24298f4 size 0x144 virtual true final false
  inline void Reverse(int32_t index, int32_t count);

  /// @brief Method Sort addr 0x2429a38 size 0x4c virtual true final false
  inline void Sort(::System::Collections::IComparer* comparer);

  /// @brief Method Sort addr 0x2429a84 size 0x104 virtual true final false
  inline void Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer);

  /// @brief Method ToArray addr 0x2429b88 size 0xd0 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ToArray();

  /// @brief Method ToArray addr 0x2429c58 size 0xf4 virtual true final false
  inline ::System::Array* ToArray(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "ArrayList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayList(ArrayList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayList(ArrayList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayList();

public:
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
