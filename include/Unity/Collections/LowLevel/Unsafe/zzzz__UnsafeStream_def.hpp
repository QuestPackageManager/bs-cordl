#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeStream)
namespace System {
class IDisposable;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStreamBlock;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_ConstructJobList;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_ConstructJob;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_DisposeJob;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_Reader;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_Writer;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UntypedUnsafeList;
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
template <typename T> struct NativeList_1;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_ConstructJob;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_ConstructJobList;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_DisposeJob;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_Reader;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream_Writer;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStream);
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob);
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList);
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob);
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader);
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer);
// Dependencies Unity.Collections.AllocatorManager::Block
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStream
struct CORDL_TYPE UnsafeStream {
public:
  // Declarations
  using ConstructJob = ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob;

  using ConstructJobList = ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList;

  using DisposeJob = ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob;

  using Reader = ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader;

  using Writer = ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer;

  __declspec(property(get = get_ForEachCount)) int32_t ForEachCount;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method AllocateBlock, addr 0x62a5510, size 0x14c, virtual false, abstract: false, final false
  static inline void AllocateBlock(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method AllocateForEach, addr 0x62a5108, size 0xf4, virtual false, abstract: false, final false
  inline void AllocateForEach(int32_t forEachCount);

  /// @brief Method AsReader, addr 0x62a5884, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader AsReader();

  /// @brief Method AsWriter, addr 0x62a56f8, size 0x2c, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer AsWriter();

  /// @brief Method Count, addr 0x62a5404, size 0x54, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method Deallocate, addr 0x62b10a8, size 0x8c, virtual false, abstract: false, final false
  inline void Deallocate();

  /// @brief Method Dispose, addr 0x62b1134, size 0x98, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x62a5468, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method IsEmpty, addr 0x62a52a4, size 0x5c, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method ScheduleConstruct, addr 0x62b0fb8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleConstruct(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream, ::Unity::Collections::NativeArray_1<int32_t> bufferCount,
                                                           ::Unity::Jobs::JobHandle dependency, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method ScheduleConstruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Jobs::JobHandle ScheduleConstruct(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream, ::Unity::Collections::NativeList_1<T> bufferCount,
                                                           ::Unity::Jobs::JobHandle dependency, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x62b0f8c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t bufferCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_ForEachCount, addr 0x62a5328, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_ForEachCount();

  /// @brief Method get_IsCreated, addr 0x62b105c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeStream();

  // Ctor Parameters [CppParam { name: "m_BlockData", ty: "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: None }]
  constexpr UnsafeStream(::Unity::Collections::AllocatorManager_Block m_BlockData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15781 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_BlockData, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::AllocatorManager_Block m_BlockData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream, m_BlockData) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeStream, 0x20>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob
struct CORDL_TYPE UnsafeStream_DisposeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x62b11cc, size 0x4, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeStream_DisposeJob();

  // Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: None }]
  constexpr UnsafeStream_DisposeJob(::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15776 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Container, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob, Container) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob, 0x20>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStream/ConstructJobList
struct CORDL_TYPE UnsafeStream_ConstructJobList {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x62b11d0, size 0x18, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeStream_ConstructJobList();

  // Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: None }, CppParam { name: "List", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*", modifiers: "", def_value: None }]
  constexpr UnsafeStream_ConstructJobList(::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container, ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* List) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15777 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Container, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container;

  /// @brief Field List, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* List;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList, Container) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList, List) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList, 0x28>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream, Unity.Collections.NativeArray`1<T>
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStream/ConstructJob
struct CORDL_TYPE UnsafeStream_ConstructJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x62b11e8, size 0xc, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeStream_ConstructJob();

  // Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: None }, CppParam { name: "Length", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr UnsafeStream_ConstructJob(::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container, ::Unity::Collections::NativeArray_1<int32_t> Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15778 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field Container, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container;

  /// @brief Field Length, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob, Container) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob, Length) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob, 0x30>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.AllocatorManager::Block
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
struct CORDL_TYPE UnsafeStream_Writer {
public:
  // Declarations
  __declspec(property(get = get_ForEachCount)) int32_t ForEachCount;

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ByRef<T> Allocate();

  /// @brief Method Allocate, addr 0x62a57ec, size 0x8c, virtual false, abstract: false, final false
  inline uint8_t* Allocate(int32_t size);

  /// @brief Method BeginForEachIndex, addr 0x62a5774, size 0x1c, virtual false, abstract: false, final false
  inline void BeginForEachIndex(int32_t foreachIndex);

  /// @brief Method EndForEachIndex, addr 0x62a5794, size 0x54, virtual false, abstract: false, final false
  inline void EndForEachIndex();

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Write(T value);

  /// @brief Method .ctor, addr 0x62b1080, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream);

  /// @brief Method get_ForEachCount, addr 0x62a573c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_ForEachCount();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeStream_Writer();

  // Ctor Parameters [CppParam { name: "m_BlockData", ty: "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: None }, CppParam { name: "m_CurrentBlock", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentPtr", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name:
  // "m_CurrentBlockEnd", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "m_ForeachIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ElementCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FirstBlock", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: None }, CppParam { name:
  // "m_FirstOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NumberOfBlocks", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ThreadIndex", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeStream_Writer(::Unity::Collections::AllocatorManager_Block m_BlockData, ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* m_CurrentBlock, uint8_t* m_CurrentPtr,
                                uint8_t* m_CurrentBlockEnd, int32_t m_ForeachIndex, int32_t m_ElementCount, ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* m_FirstBlock,
                                int32_t m_FirstOffset, int32_t m_NumberOfBlocks, int32_t m_ThreadIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15779 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field m_BlockData, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::AllocatorManager_Block m_BlockData;

  /// @brief Field m_CurrentBlock, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* m_CurrentBlock;

  /// @brief Field m_CurrentPtr, offset: 0x28, size: 0x8, def value: None
  uint8_t* m_CurrentPtr;

  /// @brief Field m_CurrentBlockEnd, offset: 0x30, size: 0x8, def value: None
  uint8_t* m_CurrentBlockEnd;

  /// @brief Field m_ForeachIndex, offset: 0x38, size: 0x4, def value: None
  int32_t m_ForeachIndex;

  /// @brief Field m_ElementCount, offset: 0x3c, size: 0x4, def value: None
  int32_t m_ElementCount;

  /// @brief Field m_FirstBlock, offset: 0x40, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* m_FirstBlock;

  /// @brief Field m_FirstOffset, offset: 0x48, size: 0x4, def value: None
  int32_t m_FirstOffset;

  /// @brief Field m_NumberOfBlocks, offset: 0x4c, size: 0x4, def value: None
  int32_t m_NumberOfBlocks;

  /// @brief Field m_ThreadIndex, offset: 0x50, size: 0x4, def value: None
  int32_t m_ThreadIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_BlockData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_CurrentBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_CurrentPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_CurrentBlockEnd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_ForeachIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_ElementCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_FirstBlock) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_FirstOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_NumberOfBlocks) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, m_ThreadIndex) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, 0x58>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.AllocatorManager::Block
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
struct CORDL_TYPE UnsafeStream_Reader {
public:
  // Declarations
  __declspec(property(get = get_ForEachCount)) int32_t ForEachCount;

  __declspec(property(get = get_RemainingItemCount)) int32_t RemainingItemCount;

  /// @brief Method BeginForEachIndex, addr 0x62a589c, size 0x54, virtual false, abstract: false, final false
  inline int32_t BeginForEachIndex(int32_t foreachIndex);

  /// @brief Method Count, addr 0x62a5990, size 0x54, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method EndForEachIndex, addr 0x62a58f4, size 0x4, virtual false, abstract: false, final false
  inline void EndForEachIndex();

  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ByRef<T> Peek();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ByRef<T> Read();

  /// @brief Method ReadUnsafePtr, addr 0x62b11fc, size 0x5c, virtual false, abstract: false, final false
  inline uint8_t* ReadUnsafePtr(int32_t size);

  /// @brief Method .ctor, addr 0x62b106c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream);

  /// @brief Method get_ForEachCount, addr 0x62a5910, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_ForEachCount();

  /// @brief Method get_RemainingItemCount, addr 0x62b11f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RemainingItemCount();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeStream_Reader();

  // Ctor Parameters [CppParam { name: "m_BlockData", ty: "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: None }, CppParam { name: "m_CurrentBlock", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentPtr", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name:
  // "m_CurrentBlockEnd", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "m_RemainingItemCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_LastBlockSize", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeStream_Reader(::Unity::Collections::AllocatorManager_Block m_BlockData, ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* m_CurrentBlock, uint8_t* m_CurrentPtr,
                                uint8_t* m_CurrentBlockEnd, int32_t m_RemainingItemCount, int32_t m_LastBlockSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15780 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_BlockData, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::AllocatorManager_Block m_BlockData;

  /// @brief Field m_CurrentBlock, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* m_CurrentBlock;

  /// @brief Field m_CurrentPtr, offset: 0x28, size: 0x8, def value: None
  uint8_t* m_CurrentPtr;

  /// @brief Field m_CurrentBlockEnd, offset: 0x30, size: 0x8, def value: None
  uint8_t* m_CurrentBlockEnd;

  /// @brief Field m_RemainingItemCount, offset: 0x38, size: 0x4, def value: None
  int32_t m_RemainingItemCount;

  /// @brief Field m_LastBlockSize, offset: 0x3c, size: 0x4, def value: None
  int32_t m_LastBlockSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader, m_BlockData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader, m_CurrentBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader, m_CurrentPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader, m_CurrentBlockEnd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader, m_RemainingItemCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader, m_LastBlockSize) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader, 0x40>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeStream, "Unity.Collections.LowLevel.Unsafe", "UnsafeStream");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob, "Unity.Collections.LowLevel.Unsafe", "UnsafeStream/ConstructJob");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList, "Unity.Collections.LowLevel.Unsafe", "UnsafeStream/ConstructJobList");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob, "Unity.Collections.LowLevel.Unsafe", "UnsafeStream/DisposeJob");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader, "Unity.Collections.LowLevel.Unsafe", "UnsafeStream/Reader");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, "Unity.Collections.LowLevel.Unsafe", "UnsafeStream/Writer");
