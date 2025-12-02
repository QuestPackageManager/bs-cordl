#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicArray_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicArray_1)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::Rendering {
template <typename T> struct DynamicArray_1_Iterator;
}
namespace UnityEngine::Rendering {
template <typename T> struct DynamicArray_1_RangeEnumerable;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1_SortComparer;
}
namespace UnityEngine::Rendering {
template <typename T> struct RangeEnumerable_DynamicArray_1_RangeIterator;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1_SortComparer;
}
namespace UnityEngine::Rendering {
template <typename T> struct DynamicArray_1_Iterator;
}
namespace UnityEngine::Rendering {
template <typename T> struct DynamicArray_1_RangeEnumerable;
}
namespace UnityEngine::Rendering {
template <typename T> struct RangeEnumerable_DynamicArray_1_RangeIterator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DynamicArray_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DynamicArray_1_SortComparer);
MARK_GEN_VAL_T(::UnityEngine::Rendering::DynamicArray_1_Iterator);
MARK_GEN_VAL_T(::UnityEngine::Rendering::DynamicArray_1_RangeEnumerable);
MARK_GEN_VAL_T(::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator);
// Dependencies
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.DynamicArray`1/Iterator<T>
struct CORDL_TYPE DynamicArray_1_Iterator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::DynamicArray_1<T>* setOwner);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicArray_1_Iterator();

  // Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::Rendering::DynamicArray_1<T>*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr DynamicArray_1_Iterator(::UnityEngine::Rendering::DynamicArray_1<T>* owner, int32_t index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11872 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field owner, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<T>* owner;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.DynamicArray`1/RangeEnumerable/RangeIterator<T>
struct CORDL_TYPE RangeEnumerable_DynamicArray_1_RangeIterator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::DynamicArray_1<T>* setOwner, int32_t first, int32_t numItems);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeEnumerable_DynamicArray_1_RangeIterator();

  // Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::Rendering::DynamicArray_1<T>*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "first", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RangeEnumerable_DynamicArray_1_RangeIterator(::UnityEngine::Rendering::DynamicArray_1<T>* owner, int32_t index, int32_t first, int32_t last) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11873 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field owner, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<T>* owner;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  /// @brief Field first, offset: 0xc, size: 0x4, def value: None
  int32_t first;

  /// @brief Field last, offset: 0x10, size: 0x4, def value: None
  int32_t last;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DynamicArray`1::RangeEnumerable::RangeIterator<T>
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.DynamicArray`1/RangeEnumerable<T>
struct CORDL_TYPE DynamicArray_1_RangeEnumerable {
public:
  // Declarations
  using RangeIterator = ::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>;

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T> GetEnumerator();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicArray_1_RangeEnumerable();

  // Ctor Parameters [CppParam { name: "iterator", ty: "::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>", modifiers: "", def_value: None }]
  constexpr DynamicArray_1_RangeEnumerable(::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T> iterator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11874 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field iterator, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T> iterator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DynamicArray`1/SortComparer<T>
class CORDL_TYPE DynamicArray_1_SortComparer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(T x, T y, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Invoke(T x, T y);

  static inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicArray_1_SortComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1_SortComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicArray_1_SortComparer(DynamicArray_1_SortComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1_SortComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicArray_1_SortComparer(DynamicArray_1_SortComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11875 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DynamicArray`1<T>
class CORDL_TYPE DynamicArray_1 : public ::System::Object {
public:
  // Declarations
  using Iterator = ::UnityEngine::Rendering::DynamicArray_1_Iterator<T>;

  using RangeEnumerable = ::UnityEngine::Rendering::DynamicArray_1_RangeEnumerable<T>;

  using SortComparer = ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Field <size>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__size_k__BackingField, put = __cordl_internal_set__size_k__BackingField)) int32_t _size_k__BackingField;

  __declspec(property(get = get_capacity)) int32_t capacity;

  /// @brief Field m_Array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Array, put = __cordl_internal_set_m_Array)) ::ArrayW<T, ::Array<T>*> m_Array;

  __declspec(property(get = get_size, put = set_size)) int32_t size;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Add(::ByRef<T> value);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(::UnityEngine::Rendering::DynamicArray_1<T>* array);

  /// @brief Method BumpVersion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void BumpVersion();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Contains(T item);

  /// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t FindIndex(int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DynamicArray_1_Iterator<T> GetEnumerator();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(T item);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(T item, int32_t index);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(T item, int32_t index, int32_t count);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Insert(int32_t index, T item);

  static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor();

  static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor(int32_t capacity, bool resize);

  static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor(::UnityEngine::Rendering::DynamicArray_1<T>* deepCopy);

  static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor(int32_t size);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(T item);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reserve(int32_t newCapacity, bool keepContent);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize(int32_t newSize, bool keepContent);

  /// @brief Method ResizeAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResizeAndClear(int32_t newSize);

  /// @brief Method SubRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DynamicArray_1_RangeEnumerable<T> SubRange(int32_t first, int32_t numItems);

  constexpr int32_t const& __cordl_internal_get__size_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__size_k__BackingField();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get_m_Array() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get_m_Array();

  constexpr void __cordl_internal_set__size_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_Array(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, bool resize);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::DynamicArray_1<T>* deepCopy);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Item(int32_t index);

  /// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_capacity();

  /// @brief Method get_size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_size();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::ArrayW<T, ::Array<T>*> op_Implicit___ArrayW_T___Array_T___(::UnityEngine::Rendering::DynamicArray_1<T>* array);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<T> op_Implicit___System__ReadOnlySpan_1_T_(::UnityEngine::Rendering::DynamicArray_1<T>* array);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Span_1<T> op_Implicit___System__Span_1_T_(::UnityEngine::Rendering::DynamicArray_1<T>* array);

  /// @brief Method set_size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_size(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicArray_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicArray_1(DynamicArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicArray_1(DynamicArray_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11876 };

  /// @brief Field m_Array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ___m_Array;

  /// @brief Field <size>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____size_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DynamicArray_1, "UnityEngine.Rendering", "DynamicArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DynamicArray_1_SortComparer, "UnityEngine.Rendering", "DynamicArray`1/SortComparer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::DynamicArray_1_Iterator, "UnityEngine.Rendering", "DynamicArray`1/Iterator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::DynamicArray_1_RangeEnumerable, "UnityEngine.Rendering", "DynamicArray`1/RangeEnumerable");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator, "UnityEngine.Rendering", "DynamicArray`1/RangeEnumerable/RangeIterator");
