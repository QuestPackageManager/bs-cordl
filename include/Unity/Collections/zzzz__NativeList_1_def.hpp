#pragma once
// IWYU pragma private; include "Unity/Collections/NativeList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeList_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename T> class IIndexable_1;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
template <typename T> class INativeList_1;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_Enumerator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1_ParallelWriter;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1_ParallelWriter;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeList_1);
MARK_GEN_VAL_T(::Unity::Collections::NativeList_1_ParallelWriter);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeList`1/ParallelWriter<T>
struct CORDL_TYPE NativeList_1_ParallelWriter {
public:
  // Declarations
  __declspec(property(get = get_Ptr)) void* Ptr;

  /// @brief Method AddNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddNoResize(T value);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(::Unity::Collections::NativeList_1<T> list);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(void* ptr, int32_t count);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* listData);

  /// @brief Method get_Ptr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void* get_Ptr();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeList_1_ParallelWriter();

  // Ctor Parameters [CppParam { name: "ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*", modifiers: "", def_value: None }]
  constexpr NativeList_1_ParallelWriter(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* ListData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15619 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field ListData, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* ListData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeList`1<T>
struct CORDL_TYPE NativeList_1 {
public:
  // Declarations
  using ParallelWriter = ::Unity::Collections::NativeList_1_ParallelWriter<T>;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
  constexpr operator ::Unity::Collections::IIndexable_1<T>*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
  constexpr operator ::Unity::Collections::INativeList_1<T>*();

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::ByRef<T> value);

  /// @brief Method AddNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddNoResize(T value);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(::Unity::Collections::NativeArray_1<T> array);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(void* ptr, int32_t count);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(::Unity::Collections::NativeList_1<T> list);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(void* ptr, int32_t count);

  /// @brief Method AddReplicate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddReplicate(::ByRef<T> value, int32_t count);

  /// @brief Method AsArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> AsArray();

  /// @brief Method AsDeferredJobArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> AsDeferredJobArray();

  /// @brief Method AsParallelReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1_ReadOnly<T> AsParallelReader();

  /// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeList_1_ParallelWriter<T> AsParallelWriter();

  /// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1_ReadOnly<T> AsReadOnly();

  /// @brief Method CheckArgPositive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckArgPositive(int32_t value);

  /// @brief Method CheckHandleMatches, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckHandleMatches(::Unity::Collections::AllocatorManager_AllocatorHandle handle);

  /// @brief Method CheckIndexInRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckIndexInRange(int32_t value, int32_t length);

  /// @brief Method CheckInitialCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckInitialCapacity(int32_t initialCapacity);

  /// @brief Method CheckSufficientCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckSufficientCapacity(int32_t capacity, int32_t length);

  /// @brief Method CheckTotalSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckTotalSize(int32_t initialCapacity, int64_t totalSize);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>> other);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::ByRef<::Unity::Collections::NativeArray_1<T>> other);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::ByRef<::Unity::Collections::NativeList_1<T>> other);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> inline void Dispose(::ByRef<U> allocator);

  /// @brief Method ElementAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ByRef<T> ElementAt(int32_t index);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1_Enumerator<T> GetEnumerator();

  /// @brief Method GetUnsafeList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* GetUnsafeList();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> inline void Initialize(int32_t initialCapacity, ::ByRef<U> allocator);

  /// @brief Method InsertRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRange(int32_t index, int32_t count);

  /// @brief Method InsertRangeWithBeginEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRangeWithBeginEnd(int32_t begin, int32_t end);

  /// @brief Method New, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline ::Unity::Collections::NativeList_1<T> New(int32_t initialCapacity, ::ByRef<U> allocator);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveAtSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t index);

  /// @brief Method RemoveRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method RemoveRangeSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveRangeSwapBack(int32_t index, int32_t count);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize(int32_t length, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method ResizeUninitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResizeUninitialized(int32_t length);

  /// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method TrimExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void TrimExcess();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Capacity();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
  constexpr ::Unity::Collections::IIndexable_1<T>* i___Unity__Collections__IIndexable_1_T_();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  /// @brief Convert to "::Unity::Collections::INativeList_1<T>"
  constexpr ::Unity::Collections::INativeList_1<T>* i___Unity__Collections__INativeList_1_T_();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<T> op_Implicit___Unity__Collections__NativeArray_1_T_(::Unity::Collections::NativeList_1<T> nativeList);

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, T value);

  /// @brief Method set_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeList_1();

  // Ctor Parameters [CppParam { name: "m_ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*", modifiers: "", def_value: None }]
  constexpr NativeList_1(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* m_ListData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15620 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ListData, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* m_ListData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeList_1, "Unity.Collections", "NativeList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeList_1_ParallelWriter, "Unity.Collections", "NativeList`1/ParallelWriter");
