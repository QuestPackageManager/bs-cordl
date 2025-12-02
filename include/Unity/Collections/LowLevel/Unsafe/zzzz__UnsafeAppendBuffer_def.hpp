#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeAppendBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeAppendBuffer)
namespace System {
class IDisposable;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer_Reader;
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
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer_Reader;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer);
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader
struct CORDL_TYPE UnsafeAppendBuffer_Reader {
public:
  // Declarations
  __declspec(property(get = get_EndOfBuffer)) bool EndOfBuffer;

  /// @brief Method CheckBounds, addr 0x62af920, size 0xac, virtual false, abstract: false, final false
  inline void CheckBounds(int32_t structSize);

  /// @brief Method ReadNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ReadNext();

  /// @brief Method ReadNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ReadNext(::ByRef<::Unity::Collections::NativeArray_1<T>> value, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method ReadNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ReadNext(::ByRef<T> value);

  /// @brief Method ReadNext, addr 0x62af904, size 0x1c, virtual false, abstract: false, final false
  inline void* ReadNext(int32_t structSize);

  /// @brief Method ReadNextArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void* ReadNextArray(::ByRef<int32_t> length);

  /// @brief Method .ctor, addr 0x62af848, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer> buffer);

  /// @brief Method .ctor, addr 0x62af8e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(void* ptr, int32_t length);

  /// @brief Method get_EndOfBuffer, addr 0x62af8f4, size 0x10, virtual false, abstract: false, final false
  inline bool get_EndOfBuffer();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeAppendBuffer_Reader();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Offset", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeAppendBuffer_Reader(uint8_t* Ptr, int32_t Size, int32_t Offset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15711 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  uint8_t* Ptr;

  /// @brief Field Size, offset: 0x8, size: 0x4, def value: None
  int32_t Size;

  /// @brief Field Offset, offset: 0xc, size: 0x4, def value: None
  int32_t Offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader, Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader, Size) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader, Offset) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer
struct CORDL_TYPE UnsafeAppendBuffer {
public:
  // Declarations
  using Reader = ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method Add, addr 0x62af740, size 0x80, virtual false, abstract: false, final false
  inline void Add(void* ptr, int32_t structSize);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Add(::Unity::Collections::NativeArray_1<T> value);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Add(T value);

  /// @brief Method AddArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void AddArray(void* ptr, int32_t length);

  /// @brief Method AsReader, addr 0x62af838, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader AsReader();

  /// @brief Method CheckAlignment, addr 0x62af85c, size 0x8c, virtual false, abstract: false, final false
  static inline void CheckAlignment(int32_t alignment);

  /// @brief Method Dispose, addr 0x62af648, size 0xcc, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x62af5ac, size 0x9c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Pop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Pop();

  /// @brief Method Pop, addr 0x62af7c0, size 0x78, virtual false, abstract: false, final false
  inline void Pop(void* ptr, int32_t structSize);

  /// @brief Method Reset, addr 0x62af714, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResizeUninitialized, addr 0x62af71c, size 0x24, virtual false, abstract: false, final false
  inline void ResizeUninitialized(int32_t length);

  /// @brief Method SetCapacity, addr 0x62af410, size 0xfc, virtual false, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method .ctor, addr 0x62af3fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity, int32_t alignment, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x62af50c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(void* ptr, int32_t length);

  /// @brief Method get_IsCreated, addr 0x62af59c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x62af58c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeAppendBuffer();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Capacity",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }, CppParam { name:
  // "Alignment", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeAppendBuffer(uint8_t* Ptr, int32_t Length, int32_t Capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator, int32_t Alignment) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  uint8_t* Ptr;

  /// @brief Field Length, offset: 0x8, size: 0x4, def value: None
  int32_t Length;

  /// @brief Field Capacity, offset: 0xc, size: 0x4, def value: None
  int32_t Capacity;

  /// @brief Field Allocator, offset: 0x10, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator;

  /// @brief Field Alignment, offset: 0x14, size: 0x4, def value: None
  int32_t Alignment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Capacity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Allocator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, Alignment) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, 0x18>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer, "Unity.Collections.LowLevel.Unsafe", "UnsafeAppendBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer_Reader, "Unity.Collections.LowLevel.Unsafe", "UnsafeAppendBuffer/Reader");
