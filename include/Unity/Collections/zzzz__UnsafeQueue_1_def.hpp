#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeQueue_1)
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
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
struct UnsafeQueueBlockHeader;
}
namespace Unity::Collections {
struct UnsafeQueueBlockPoolData;
}
namespace Unity::Collections {
struct UnsafeQueueData;
}
namespace Unity::Collections {
template <typename T> struct UnsafeQueue_1_Enumerator;
}
namespace Unity::Collections {
template <typename T> struct UnsafeQueue_1_ParallelWriter;
}
namespace Unity::Collections {
template <typename T> struct UnsafeQueue_1_ReadOnly;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct UnsafeQueue_1;
}
namespace Unity::Collections {
template <typename T> struct UnsafeQueue_1_Enumerator;
}
namespace Unity::Collections {
template <typename T> struct UnsafeQueue_1_ParallelWriter;
}
namespace Unity::Collections {
template <typename T> struct UnsafeQueue_1_ReadOnly;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::UnsafeQueue_1);
MARK_GEN_VAL_T(::Unity::Collections::UnsafeQueue_1_Enumerator);
MARK_GEN_VAL_T(::Unity::Collections::UnsafeQueue_1_ParallelWriter);
MARK_GEN_VAL_T(::Unity::Collections::UnsafeQueue_1_ReadOnly);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.UnsafeQueue`1/Enumerator<T>
struct CORDL_TYPE UnsafeQueue_1_Enumerator {
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
  constexpr UnsafeQueue_1_Enumerator();

  // Ctor Parameters [CppParam { name: "m_FirstBlock", ty: "::Unity::Collections::UnsafeQueueBlockHeader*", modifiers: "", def_value: None }, CppParam { name: "m_Block", ty:
  // "::Unity::Collections::UnsafeQueueBlockHeader*", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "T",
  // modifiers: "", def_value: None }]
  constexpr UnsafeQueue_1_Enumerator(::Unity::Collections::UnsafeQueueBlockHeader* m_FirstBlock, ::Unity::Collections::UnsafeQueueBlockHeader* m_Block, int32_t m_Index, T value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15689 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_FirstBlock, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueBlockHeader* m_FirstBlock;

  /// @brief Field m_Block, offset: 0x8, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueBlockHeader* m_Block;

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  T value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.UnsafeQueue`1/ReadOnly<T>
struct CORDL_TYPE UnsafeQueue_1_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::UnsafeQueue_1_Enumerator<T> GetEnumerator();

  /// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ThrowIndexOutOfRangeException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ThrowIndexOutOfRangeException(int32_t index);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(int32_t index, ::ByRef<T> item);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::UnsafeQueue_1<T>> data);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeQueue_1_ReadOnly();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: None }]
  constexpr UnsafeQueue_1_ReadOnly(::Unity::Collections::UnsafeQueueData* m_Buffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueData* m_Buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.UnsafeQueue`1/ParallelWriter<T>
struct CORDL_TYPE UnsafeQueue_1_ParallelWriter {
public:
  // Declarations
  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T value);

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T value, int32_t threadIndexOverride);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeQueue_1_ParallelWriter();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: None }, CppParam { name: "m_QueuePool", ty:
  // "::Unity::Collections::UnsafeQueueBlockPoolData*", modifiers: "", def_value: None }, CppParam { name: "m_ThreadIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeQueue_1_ParallelWriter(::Unity::Collections::UnsafeQueueData* m_Buffer, ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool, int32_t m_ThreadIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15691 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueData* m_Buffer;

  /// @brief Field m_QueuePool, offset: 0x8, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool;

  /// @brief Field m_ThreadIndex, offset: 0x10, size: 0x4, def value: None
  int32_t m_ThreadIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.UnsafeQueue`1<T>
struct CORDL_TYPE UnsafeQueue_1 {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::UnsafeQueue_1_Enumerator<T>;

  using ParallelWriter = ::Unity::Collections::UnsafeQueue_1_ParallelWriter<T>;

  using ReadOnly = ::Unity::Collections::UnsafeQueue_1_ReadOnly<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::UnsafeQueue_1<T>* Alloc(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::UnsafeQueue_1_ParallelWriter<T> AsParallelWriter();

  /// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::UnsafeQueue_1_ReadOnly<T> AsReadOnly();

  /// @brief Method CheckNotEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckNotEmpty();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Dequeue();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T value);

  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Free(::Unity::Collections::UnsafeQueue_1<T>* data);

  /// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Peek();

  /// @brief Method ThrowEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ThrowEmpty();

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeue(::ByRef<T> item);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_MemoryBlockSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t get_MemoryBlockSize();

  /// @brief Method get_PersistentMemoryBlockCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t get_PersistentMemoryBlockCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  /// @brief Method set_PersistentMemoryBlockCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void set_PersistentMemoryBlockCount(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeQueue_1();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: None }, CppParam { name: "m_QueuePool", ty:
  // "::Unity::Collections::UnsafeQueueBlockPoolData*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers:
  // "", def_value: None }]
  constexpr UnsafeQueue_1(::Unity::Collections::UnsafeQueueData* m_Buffer, ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool,
                          ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15692 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueData* m_Buffer;

  /// @brief Field m_QueuePool, offset: 0x8, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool;

  /// @brief Field m_AllocatorLabel, offset: 0x10, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::UnsafeQueue_1, "Unity.Collections", "UnsafeQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::UnsafeQueue_1_Enumerator, "Unity.Collections", "UnsafeQueue`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::UnsafeQueue_1_ParallelWriter, "Unity.Collections", "UnsafeQueue`1/ParallelWriter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::UnsafeQueue_1_ReadOnly, "Unity.Collections", "UnsafeQueue`1/ReadOnly");
