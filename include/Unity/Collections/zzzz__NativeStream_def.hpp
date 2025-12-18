#pragma once
// IWYU pragma private; include "Unity/Collections/NativeStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeStream)
namespace System {
class IDisposable;
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
namespace Unity::Collections {
struct NativeStream_ConstructJobList;
}
namespace Unity::Collections {
struct NativeStream_ConstructJob;
}
namespace Unity::Collections {
struct NativeStream_Reader;
}
namespace Unity::Collections {
struct NativeStream_Writer;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeStream;
}
namespace Unity::Collections {
struct NativeStream_ConstructJob;
}
namespace Unity::Collections {
struct NativeStream_ConstructJobList;
}
namespace Unity::Collections {
struct NativeStream_Reader;
}
namespace Unity::Collections {
struct NativeStream_Writer;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeStream);
MARK_VAL_T(::Unity::Collections::NativeStream_ConstructJob);
MARK_VAL_T(::Unity::Collections::NativeStream_ConstructJobList);
MARK_VAL_T(::Unity::Collections::NativeStream_Reader);
MARK_VAL_T(::Unity::Collections::NativeStream_Writer);
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeStream
struct CORDL_TYPE NativeStream {
public:
  // Declarations
  using ConstructJob = ::Unity::Collections::NativeStream_ConstructJob;

  using ConstructJobList = ::Unity::Collections::NativeStream_ConstructJobList;

  using Reader = ::Unity::Collections::NativeStream_Reader;

  using Writer = ::Unity::Collections::NativeStream_Writer;

  __declspec(property(get = get_ForEachCount)) int32_t ForEachCount;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method AllocateBlock, addr 0x630cc8c, size 0x8, virtual false, abstract: false, final false
  static inline void AllocateBlock(::ByRef<::Unity::Collections::NativeStream> stream, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method AllocateForEach, addr 0x630d1e8, size 0x4, virtual false, abstract: false, final false
  inline void AllocateForEach(int32_t forEachCount);

  /// @brief Method AsReader, addr 0x630cecc, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeStream_Reader AsReader();

  /// @brief Method AsWriter, addr 0x630cf14, size 0x38, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeStream_Writer AsWriter();

  /// @brief Method CheckForEachCountGreaterThanZero, addr 0x630d1ec, size 0x70, virtual false, abstract: false, final false
  static inline void CheckForEachCountGreaterThanZero(int32_t forEachCount);

  /// @brief Method CheckRead, addr 0x630d25c, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method Count, addr 0x630cf8c, size 0x4, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method Dispose, addr 0x630d004, size 0x98, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x630cfe4, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method IsEmpty, addr 0x630ce2c, size 0x4, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method ScheduleConstruct, addr 0x630cd88, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ScheduleConstruct(::ByRef<::Unity::Collections::NativeStream> stream, ::Unity::Collections::NativeArray_1<int32_t> bufferCount,
                                                           ::Unity::Jobs::JobHandle dependency, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method ScheduleConstruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Jobs::JobHandle ScheduleConstruct(::ByRef<::Unity::Collections::NativeStream> stream, ::Unity::Collections::NativeList_1<T> bufferCount, ::Unity::Jobs::JobHandle dependency,
                                                           ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x630cc60, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t bufferCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_ForEachCount, addr 0x630ce9c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_ForEachCount();

  /// @brief Method get_IsCreated, addr 0x630ce8c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeStream();

  // Ctor Parameters [CppParam { name: "m_Stream", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: None }]
  constexpr NativeStream(::Unity::Collections::LowLevel::Unsafe::UnsafeStream m_Stream) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15672 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Stream, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStream m_Stream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeStream, m_Stream) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeStream, 0x20>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.NativeStream
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeStream/ConstructJobList
struct CORDL_TYPE NativeStream_ConstructJobList {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x630d260, size 0x18, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeStream_ConstructJobList();

  // Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::NativeStream", modifiers: "", def_value: None }, CppParam { name: "List", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*", modifiers: "", def_value: None }]
  constexpr NativeStream_ConstructJobList(::Unity::Collections::NativeStream Container, ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* List) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15668 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Container, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::NativeStream Container;

  /// @brief Field List, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* List;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeStream_ConstructJobList, Container) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeStream_ConstructJobList, List) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeStream_ConstructJobList, 0x28>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeStream
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeStream/ConstructJob
struct CORDL_TYPE NativeStream_ConstructJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x630d278, size 0xc, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeStream_ConstructJob();

  // Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::NativeStream", modifiers: "", def_value: None }, CppParam { name: "Length", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr NativeStream_ConstructJob(::Unity::Collections::NativeStream Container, ::Unity::Collections::NativeArray_1<int32_t> Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15669 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field Container, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::NativeStream Container;

  /// @brief Field Length, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeStream_ConstructJob, Container) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeStream_ConstructJob, Length) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeStream_ConstructJob, 0x30>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream::Writer
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeStream/Writer
struct CORDL_TYPE NativeStream_Writer {
public:
  // Declarations
  __declspec(property(get = get_ForEachCount)) int32_t ForEachCount;

  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ByRef<T> Allocate();

  /// @brief Method Allocate, addr 0x630d374, size 0x4, virtual false, abstract: false, final false
  inline uint8_t* Allocate(int32_t size);

  /// @brief Method BeginForEachIndex, addr 0x630d2e4, size 0x1c, virtual false, abstract: false, final false
  inline void BeginForEachIndex(int32_t foreachIndex);

  /// @brief Method CheckAllocateSize, addr 0x630d40c, size 0x4, virtual false, abstract: false, final false
  inline void CheckAllocateSize(int32_t size);

  /// @brief Method CheckBeginForEachIndex, addr 0x630d404, size 0x4, virtual false, abstract: false, final false
  inline void CheckBeginForEachIndex(int32_t foreachIndex);

  /// @brief Method CheckEndForEachIndex, addr 0x630d408, size 0x4, virtual false, abstract: false, final false
  inline void CheckEndForEachIndex();

  /// @brief Method EndForEachIndex, addr 0x630d31c, size 0x4, virtual false, abstract: false, final false
  inline void EndForEachIndex();

  /// @brief Method PatchMinMaxRange, addr 0x630d2e0, size 0x4, virtual false, abstract: false, final false
  inline void PatchMinMaxRange(int32_t foreEachIndex);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Write(T value);

  /// @brief Method .ctor, addr 0x630cf4c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::NativeStream> stream);

  /// @brief Method get_ForEachCount, addr 0x630d2b0, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_ForEachCount();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeStream_Writer();

  // Ctor Parameters [CppParam { name: "m_Writer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer", modifiers: "", def_value: None }]
  constexpr NativeStream_Writer(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer m_Writer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field m_Writer, offset: 0x0, size: 0x58, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer m_Writer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeStream_Writer, m_Writer) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeStream_Writer, 0x58>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream::Reader
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeStream/Reader
struct CORDL_TYPE NativeStream_Reader {
public:
  // Declarations
  __declspec(property(get = get_ForEachCount)) int32_t ForEachCount;

  __declspec(property(get = get_RemainingItemCount)) int32_t RemainingItemCount;

  /// @brief Method BeginForEachIndex, addr 0x630d424, size 0x4, virtual false, abstract: false, final false
  inline int32_t BeginForEachIndex(int32_t foreachIndex);

  /// @brief Method CheckBeginForEachIndex, addr 0x630d57c, size 0x4, virtual false, abstract: false, final false
  inline void CheckBeginForEachIndex(int32_t forEachIndex);

  /// @brief Method CheckEndForEachIndex, addr 0x630d580, size 0x88, virtual false, abstract: false, final false
  inline void CheckEndForEachIndex();

  /// @brief Method CheckNotReadingOutOfBounds, addr 0x630d570, size 0x4, virtual false, abstract: false, final false
  inline void CheckNotReadingOutOfBounds(int32_t size);

  /// @brief Method CheckRead, addr 0x630d574, size 0x4, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method CheckReadSize, addr 0x630d578, size 0x4, virtual false, abstract: false, final false
  inline void CheckReadSize(int32_t size);

  /// @brief Method Count, addr 0x630d518, size 0x4, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method EndForEachIndex, addr 0x630d47c, size 0x4, virtual false, abstract: false, final false
  inline void EndForEachIndex();

  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ByRef<T> Peek();

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ByRef<T> Read();

  /// @brief Method ReadUnsafePtr, addr 0x630d4bc, size 0x5c, virtual false, abstract: false, final false
  inline uint8_t* ReadUnsafePtr(int32_t size);

  /// @brief Method .ctor, addr 0x630cef0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::NativeStream> stream);

  /// @brief Method get_ForEachCount, addr 0x630d484, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_ForEachCount();

  /// @brief Method get_RemainingItemCount, addr 0x630d4b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RemainingItemCount();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeStream_Reader();

  // Ctor Parameters [CppParam { name: "m_Reader", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader", modifiers: "", def_value: None }]
  constexpr NativeStream_Reader(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader m_Reader) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15671 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_Reader, offset: 0x0, size: 0x40, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader m_Reader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeStream_Reader, m_Reader) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeStream_Reader, 0x40>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeStream, "Unity.Collections", "NativeStream");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeStream_ConstructJob, "Unity.Collections", "NativeStream/ConstructJob");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeStream_ConstructJobList, "Unity.Collections", "NativeStream/ConstructJobList");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeStream_Reader, "Unity.Collections", "NativeStream/Reader");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeStream_Writer, "Unity.Collections", "NativeStream/Writer");
