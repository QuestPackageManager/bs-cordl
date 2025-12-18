#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeList_1)
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
namespace System {
class Object;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_Enumerator;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_ParallelReader;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_ParallelWriter;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_ReadOnly;
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
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_Enumerator;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_ParallelReader;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_ParallelWriter;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1_ReadOnly;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeList`1/ReadOnly<T>
struct CORDL_TYPE UnsafeList_1_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T* ptr, int32_t length);

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeList_1_ReadOnly();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeList_1_ReadOnly(T* Ptr, int32_t Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15744 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  T* Ptr;

  /// @brief Field Length, offset: 0x8, size: 0x4, def value: None
  int32_t Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeList`1/ParallelReader<T>
struct CORDL_TYPE UnsafeList_1_ParallelReader {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T* ptr, int32_t length);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeList_1_ParallelReader();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeList_1_ParallelReader(T* Ptr, int32_t Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15745 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  T* Ptr;

  /// @brief Field Length, offset: 0x8, size: 0x4, def value: None
  int32_t Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeList`1/ParallelWriter<T>
struct CORDL_TYPE UnsafeList_1_ParallelWriter {
public:
  // Declarations
  __declspec(property(get = get_Ptr)) void* Ptr;

  /// @brief Method AddNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddNoResize(T value);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(void* ptr, int32_t count);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* listData);

  /// @brief Method get_Ptr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void* get_Ptr();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeList_1_ParallelWriter();

  // Ctor Parameters [CppParam { name: "ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*", modifiers: "", def_value: None }]
  constexpr UnsafeList_1_ParallelWriter(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* ListData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field ListData, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* ListData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeList`1/Enumerator<T>
struct CORDL_TYPE UnsafeList_1_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeList_1_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeList_1_Enumerator(T* m_Ptr, int32_t m_Length, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15747 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  T* m_Ptr;

  /// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
  int32_t m_Length;

  /// @brief Field m_Index, offset: 0xc, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>
struct CORDL_TYPE UnsafeList_1 {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>;

  using ParallelReader = ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T>;

  using ParallelWriter = ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>;

  using ReadOnly = ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>;

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
  inline void AddRange(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(void* ptr, int32_t count);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(void* ptr, int32_t count);

  /// @brief Method AddReplicate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddReplicate(::ByRef<T> value, int32_t count);

  /// @brief Method AsParallelReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T> AsParallelReader();

  /// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T> AsParallelWriter();

  /// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T> AsReadOnly();

  /// @brief Method CheckBeginEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckBeginEnd(int32_t begin, int32_t end);

  /// @brief Method CheckBeginEndNoLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckBeginEndNoLength(int32_t begin, int32_t end);

  /// @brief Method CheckIndexCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckIndexCount(int32_t index, int32_t count);

  /// @brief Method CheckNoResizeHasEnoughCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckNoResizeHasEnoughCapacity(int32_t length);

  /// @brief Method CheckNoResizeHasEnoughCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckNoResizeHasEnoughCapacity(int32_t length, int32_t index);

  /// @brief Method CheckNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckNull(void* listData);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>> other);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::ByRef<::Unity::Collections::NativeArray_1<T>> other);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* Create(int32_t initialCapacity, ::ByRef<U> allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* Create(int32_t initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Destroy(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* listData);

  /// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void Destroy(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* listData, ::ByRef<U> allocator);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> inline void Dispose(::ByRef<U> allocator);

  /// @brief Method ElementAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ByRef<T> ElementAt(int32_t index);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T> GetEnumerator();

  /// @brief Method InsertRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRange(int32_t index, int32_t count);

  /// @brief Method InsertRangeWithBeginEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRangeWithBeginEnd(int32_t begin, int32_t end);

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

  /// @brief Method ResizeExact, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> inline void ResizeExact(::ByRef<U> allocator, int32_t newCapacity);

  /// @brief Method ResizeExact, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResizeExact(int32_t capacity);

  /// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> inline void SetCapacity(::ByRef<U> allocator, int32_t capacity);

  /// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TrimExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void TrimExcess();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T* ptr, int32_t length);

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

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, T value);

  /// @brief Method set_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeList_1();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_capacity",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }, CppParam { name:
  // "padding", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeList_1(T* Ptr, int32_t m_length, int32_t m_capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator, int32_t padding) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15748 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  T* Ptr;

  /// @brief Field m_length, offset: 0x8, size: 0x4, def value: None
  int32_t m_length;

  /// @brief Field m_capacity, offset: 0xc, size: 0x4, def value: None
  int32_t m_capacity;

  /// @brief Field Allocator, offset: 0x10, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator;

  /// @brief Field padding, offset: 0x14, size: 0x4, def value: None
  int32_t padding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator, "Unity.Collections.LowLevel.Unsafe", "UnsafeList`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader, "Unity.Collections.LowLevel.Unsafe", "UnsafeList`1/ParallelReader");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter, "Unity.Collections.LowLevel.Unsafe", "UnsafeList`1/ParallelWriter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly, "Unity.Collections.LowLevel.Unsafe", "UnsafeList`1/ReadOnly");
