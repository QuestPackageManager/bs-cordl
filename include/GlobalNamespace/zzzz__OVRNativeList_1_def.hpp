#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNativeList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNativeList_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_Enumerator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> struct OVRNativeList_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRNativeList_1);
// Dependencies Unity.Collections.Allocator, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OVRNativeList`1<T>
struct CORDL_TYPE OVRNativeList_1 {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Data)) T* Data;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*();

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method AsNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> AsNativeArray();

  /// @brief Method AsReadOnlySpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<T> AsReadOnlySpan();

  /// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Span_1<T> AsSpan();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle dependency);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t capacity);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1_Enumerator<T> GetEnumerator();

  /// @brief Method PtrToElementAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T* PtrToElementAt(int32_t index);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<int32_t> initialCapacity, ::Unity::Collections::Allocator allocator);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T* get_Data();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_();

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* i___System__Collections__Generic__IReadOnlyList_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T* op_Implicit_T_(::GlobalNamespace::OVRNativeList_1<T> list);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<T> op_Implicit___System__ReadOnlySpan_1_T_(::GlobalNamespace::OVRNativeList_1<T> list);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Span_1<T> op_Implicit___System__Span_1_T_(::GlobalNamespace::OVRNativeList_1<T> list);

  /// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, T value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNativeList_1();

  // Ctor Parameters [CppParam { name: "_array", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }, CppParam { name: "_allocator", ty: "::Unity::Collections::Allocator",
  // modifiers: "", def_value: None }, CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRNativeList_1(::Unity::Collections::NativeArray_1<T> _array, ::Unity::Collections::Allocator _allocator, int32_t _Count_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7926 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _array, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> _array;

  /// @brief Field _allocator, offset: 0x10, size: 0x4, def value: None
  ::Unity::Collections::Allocator _allocator;

  /// @brief Field <Count>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t _Count_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRNativeList_1, "", "OVRNativeList`1");
