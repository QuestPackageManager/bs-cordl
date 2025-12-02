#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeBitArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeBitArray)
namespace System {
class IDisposable;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeBitArray_ReadOnly;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeBitArray;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeBitArray_ReadOnly;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray);
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeBitArray/ReadOnly
struct CORDL_TYPE UnsafeBitArray_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Method CheckArgs, addr 0x62b05ec, size 0xdc, virtual false, abstract: false, final false
  inline void CheckArgs(int32_t pos, int32_t numBits);

  /// @brief Method CheckArgsPosCount, addr 0x62b06c8, size 0x154, virtual false, abstract: false, final false
  inline void CheckArgsPosCount(int32_t begin, int32_t count, int32_t numBits);

  /// @brief Method CheckArgsUlong, addr 0x62b081c, size 0x120, virtual false, abstract: false, final false
  inline void CheckArgsUlong(int32_t pos, int32_t numBits);

  /// @brief Method CountBits, addr 0x62a4f00, size 0x20, virtual false, abstract: false, final false
  inline int32_t CountBits(int32_t pos, int32_t numBits);

  /// @brief Method Find, addr 0x62a4e34, size 0xc, virtual false, abstract: false, final false
  inline int32_t Find(int32_t pos, int32_t count, int32_t numBits);

  /// @brief Method Find, addr 0x62a4e14, size 0x14, virtual false, abstract: false, final false
  inline int32_t Find(int32_t pos, int32_t numBits);

  /// @brief Method GetBits, addr 0x62a4db0, size 0x20, virtual false, abstract: false, final false
  inline uint64_t GetBits(int32_t pos, int32_t numBits);

  /// @brief Method IsSet, addr 0x62a4de8, size 0x18, virtual false, abstract: false, final false
  inline bool IsSet(int32_t pos);

  /// @brief Method TestAll, addr 0x62a4ec0, size 0x20, virtual false, abstract: false, final false
  inline bool TestAll(int32_t pos, int32_t numBits);

  /// @brief Method TestAny, addr 0x62a4e80, size 0x20, virtual false, abstract: false, final false
  inline bool TestAny(int32_t pos, int32_t numBits);

  /// @brief Method TestNone, addr 0x62a4e50, size 0x10, virtual false, abstract: false, final false
  inline bool TestNone(int32_t pos, int32_t numBits);

  /// @brief Method .ctor, addr 0x62b00a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t* ptr, int32_t length);

  /// @brief Method get_IsCreated, addr 0x62a4d28, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x62a4d58, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeBitArray_ReadOnly();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "uint64_t*", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeBitArray_ReadOnly(uint64_t* Ptr, int32_t Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15715 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  uint64_t* Ptr;

  /// @brief Field Length, offset: 0x8, size: 0x4, def value: None
  int32_t Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly, Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly, Length) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeBitArray
struct CORDL_TYPE UnsafeBitArray {
public:
  // Declarations
  using ReadOnly = ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method Alloc, addr 0x62a4218, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* Alloc(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method AsReadOnly, addr 0x62a4d78, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly AsReadOnly();

  /// @brief Method CheckArgs, addr 0x62b0154, size 0xdc, virtual false, abstract: false, final false
  inline void CheckArgs(int32_t pos, int32_t numBits);

  /// @brief Method CheckArgsCopy, addr 0x62b04a4, size 0x148, virtual false, abstract: false, final false
  static inline void CheckArgsCopy(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray> dstBitArray, int32_t dstPos,
                                   ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray> srcBitArray, int32_t srcPos, int32_t numBits);

  /// @brief Method CheckArgsPosCount, addr 0x62b0230, size 0x154, virtual false, abstract: false, final false
  inline void CheckArgsPosCount(int32_t begin, int32_t count, int32_t numBits);

  /// @brief Method CheckArgsUlong, addr 0x62b0384, size 0x120, virtual false, abstract: false, final false
  inline void CheckArgsUlong(int32_t pos, int32_t numBits);

  /// @brief Method CheckSizeMultipleOf8, addr 0x62b00b0, size 0xa4, virtual false, abstract: false, final false
  static inline void CheckSizeMultipleOf8(int32_t sizeInBytes);

  /// @brief Method Clear, addr 0x62a4630, size 0x54, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Copy, addr 0x62a48fc, size 0x2ac, virtual false, abstract: false, final false
  inline void Copy(int32_t dstPos, ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray> srcBitArray, int32_t srcPos, int32_t numBits);

  /// @brief Method Copy, addr 0x62a48d4, size 0x1c, virtual false, abstract: false, final false
  inline void Copy(int32_t dstPos, int32_t srcPos, int32_t numBits);

  /// @brief Method CopyUlong, addr 0x62b0058, size 0x4c, virtual false, abstract: false, final false
  inline void CopyUlong(int32_t dstPos, ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray> srcBitArray, int32_t srcPos, int32_t numBits);

  /// @brief Method CountBits, addr 0x62a4ccc, size 0x20, virtual false, abstract: false, final false
  inline int32_t CountBits(int32_t pos, int32_t numBits);

  /// @brief Method Dispose, addr 0x62aff64, size 0xcc, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x62afda4, size 0xa0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Find, addr 0x62a4be0, size 0xc, virtual false, abstract: false, final false
  inline int32_t Find(int32_t pos, int32_t count, int32_t numBits);

  /// @brief Method Find, addr 0x62a4bbc, size 0x14, virtual false, abstract: false, final false
  inline int32_t Find(int32_t pos, int32_t numBits);

  /// @brief Method Free, addr 0x62a4434, size 0xb0, virtual false, abstract: false, final false
  static inline void Free(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* data, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetBits, addr 0x62a4860, size 0x20, virtual false, abstract: false, final false
  inline uint64_t GetBits(int32_t pos, int32_t numBits);

  /// @brief Method IsSet, addr 0x62a489c, size 0x18, virtual false, abstract: false, final false
  inline bool IsSet(int32_t pos);

  /// @brief Method Realloc, addr 0x62afe64, size 0x100, virtual false, abstract: false, final false
  inline void Realloc(int32_t capacityInBits);

  /// @brief Method Resize, addr 0x62a42f4, size 0x68, virtual false, abstract: false, final false
  inline void Resize(int32_t numBits, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method Set, addr 0x62a46b4, size 0x2c, virtual false, abstract: false, final false
  inline void Set(int32_t pos, bool value);

  /// @brief Method Set, addr 0x62b0030, size 0x28, virtual false, abstract: false, final false
  static inline void Set(uint64_t* ptr, int32_t pos, bool value);

  /// @brief Method SetBits, addr 0x62a46e8, size 0xac, virtual false, abstract: false, final false
  inline void SetBits(int32_t pos, bool value, int32_t numBits);

  /// @brief Method SetBits, addr 0x62a479c, size 0xa4, virtual false, abstract: false, final false
  inline void SetBits(int32_t pos, uint64_t value, int32_t numBits);

  /// @brief Method SetCapacity, addr 0x62a4374, size 0x14, virtual false, abstract: false, final false
  inline void SetCapacity(int32_t capacityInBits);

  /// @brief Method TestAll, addr 0x62a4c8c, size 0x20, virtual false, abstract: false, final false
  inline bool TestAll(int32_t pos, int32_t numBits);

  /// @brief Method TestAny, addr 0x62a4c4c, size 0x20, virtual false, abstract: false, final false
  inline bool TestAny(int32_t pos, int32_t numBits);

  /// @brief Method TestNone, addr 0x62a4c0c, size 0x20, virtual false, abstract: false, final false
  inline bool TestNone(int32_t pos, int32_t numBits);

  /// @brief Method TrimExcess, addr 0x62a43a0, size 0x14, virtual false, abstract: false, final false
  inline void TrimExcess();

  /// @brief Method .ctor, addr 0x62a4284, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t numBits, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method .ctor, addr 0x62af3e8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(void* ptr, int32_t sizeInBytes, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_IsCreated, addr 0x62a42b4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x62afe44, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeBitArray();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "uint64_t*", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr UnsafeBitArray(uint64_t* Ptr, int32_t Length, int32_t Capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15716 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  uint64_t* Ptr;

  /// @brief Field Length, offset: 0x8, size: 0x4, def value: None
  int32_t Length;

  /// @brief Field Capacity, offset: 0xc, size: 0x4, def value: None
  int32_t Capacity;

  /// @brief Field Allocator, offset: 0x10, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, Length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, Capacity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, Allocator) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, 0x18>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray, "Unity.Collections.LowLevel.Unsafe", "UnsafeBitArray");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray_ReadOnly, "Unity.Collections.LowLevel.Unsafe", "UnsafeBitArray/ReadOnly");
